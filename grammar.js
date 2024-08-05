/**
 * @file Tree-sitter grammar definition for RPM spec files
 * @author Andreas Schneider
 * @author Omair Majid
 * @license MIT
 * @see {@link https://rpm-software-management.github.io/rpm/manual/spec.html|spec syntax documentation}
 */

const NEWLINE = /\r?\n/;
const ANYTHING = /[^\r\n]*/;

/* https://rpm-software-management.github.io/rpm/manual/spec.html */
module.exports = grammar({
    name: 'rpmspec',

    // Array of tokens that may appear anywhere in the language.
    extras: ($) => [$.comment, /\s+/, /\\( |\t|\v|\f)/],

    supertypes: ($) => [$._simple_statements, $._compound_statements],

    inline: ($) => [
        $._simple_statements,
        $._compound_statements,
        $._conditional_block,
        $._special_variable_name,
    ],

    rules: {
        spec: ($) => repeat($._statements),

        _statements: ($) =>
            choice($._simple_statements, $._compound_statements),

        _simple_statements: ($) =>
            choice(
                $.macro_definition,
                $.macro_undefinition,
                $.macro_invocation,
                $.macro_expansion,
                $.macro_shell_expansion,
                $.preamble,
                $.description,
                $.package,
                $.prep_scriptlet,
                $.generate_buildrequires,
                $.conf_scriptlet,
                $.build_scriptlet,
                $.install_scriptlet,
                $.check_scriptlet,
                $.clean_scriptlet,
                $._runtime_scriptlet,
                $._triggers,
                $._file_triggers,
                $.files,
                $.changelog,
                NEWLINE
            ),

        _compound_statements: ($) => choice($.if_statement),

        comment: ($) =>
            token(choice(seq('#', ANYTHING), seq('%dnl ', ANYTHING))),

        ///////////////////////////////////////////////////////////////////////
        // Conditionals (%if, %ifarch, %ifos)
        ///////////////////////////////////////////////////////////////////////

        _conditional_block: ($) =>
            choice(
                $._simple_statements,
                $._compound_statements,
                $.defattr,
                $.file
            ),

        if_statement: ($) =>
            seq(
                choice('%if', '%ifarch', '%ifos', '%ifnarch', '%ifnos'),
                field('condition', ANYTHING),
                NEWLINE,
                optional(field('consequence', $._conditional_block)),
                repeat(field('alternative', $.elif_clause)),
                optional(field('alternative', $.else_clause)),
                '%endif',
                NEWLINE
            ),

        elif_clause: ($) =>
            seq(
                choice('%elif', '%elifarch', '%elifos'),
                field('condition', ANYTHING),
                NEWLINE,
                field('consequence', $._conditional_block)
            ),

        else_clause: ($) =>
            seq('%else', NEWLINE, field('body', $._conditional_block)),

        ///////////////////////////////////////////////////////////////////////
        // Preamble Section (Name, Version, Release, ...)
        ///////////////////////////////////////////////////////////////////////

        preamble: ($) => seq($.tags),

        // Name:   tree-sitter-rpmspec
        // Requires(pre): tree-sitter
        // Summary: A parser generator Tool
        tags: ($) =>
            seq(
                choice($.tag, $.dependency_tag),
                token.immediate(/:( |\t)*/),
                field('value', $._value),
                NEWLINE
            ),

        tag: ($) =>
            choice(
                'AutoProv',
                'AutoReq',
                'AutoReqProv',
                'BugUrl',
                'BuildRoot',
                'BuildSystem',
                'DistTag',
                'Distribution',
                'Epoch',
                'Group',
                'License',
                'ModularityLabel',
                'Name',
                'NoPatch',
                'NoSource',
                'Packager',
                'Release',
                'SourceLicense',
                'Summary',
                'URL',
                'Url',
                'VCS',
                'Vendor',
                'Version',
                /Patch\d*/,
                /Source\d*/
            ),

        // Dependencies:
        // Requires(pre): tree-sitter
        qualifier: ($) =>
            choice(
                'pre',
                'post',
                'postun',
                'pretrans',
                'posttrans',
                'verify',
                'interp',
                'meta'
            ),

        // BuildRequires: tree-sitter-cli
        dependency_tag: ($) =>
            choice(
                seq('Requires', optional(seq('(', $.qualifier, ')'))),
                'BuildArch',
                'BuildArchitectures',
                'BuildConflicts',
                'BuildPrereq',
                'BuildRequires',
                'Conflicts',
                'DocDir',
                'Enhances',
                'ExcludeArch',
                'ExcludeOS',
                'ExclusiveArch',
                'ExclusiveOS',
                'Obsoletes',
                'OrderWithRequires',
                'Prefix',
                'Prefixes',
                'Prereq',
                'Provides',
                'Recommends',
                'RemovePathPostfixes',
                'Suggests',
                'Supplements'
            ),

        _value: ($) =>
            repeat1(
                prec(
                    -1,
                    choice($.macro_expansion, $.integer, $.float, $.string)
                )
            ),

        ///////////////////////////////////////////////////////////////////////
        // Description Section (%description)
        ///////////////////////////////////////////////////////////////////////

        description: ($) =>
            prec.right(
                seq(
                    '%description',
                    optional(seq(optional('-n'), $.single_word)),
                    NEWLINE,
                    optional($.string_with_newlines)
                )
            ),

        ///////////////////////////////////////////////////////////////////////
        // Preamble Sub-Sections (%package)
        ///////////////////////////////////////////////////////////////////////

        package: ($) =>
            prec.right(
                seq(
                    '%package',
                    optional('-n'),
                    $.single_word,
                    NEWLINE,
                    repeat1($.preamble)
                )
            ),

        ///////////////////////////////////////////////////////////////////////
        // Build scriptlets (%prep, %build, %install, ...)
        ///////////////////////////////////////////////////////////////////////

        shell_block: ($) =>
            prec.right(
                repeat1(
                    choice(
                        $.if_statement,
                        $.macro_definition,
                        $.macro_invocation,
                        $.string,
                        NEWLINE
                    )
                )
            ),

        prep_scriptlet: ($) =>
            prec.right(
                seq(token(seq('%prep', NEWLINE)), optional($.shell_block))
            ),

        generate_buildrequires: ($) =>
            prec.right(
                seq(
                    token(seq('%generate_buildrequires', NEWLINE)),
                    optional($.shell_block)
                )
            ),

        conf_scriptlet: ($) =>
            prec.right(
                seq(token(seq('%conf', NEWLINE)), optional($.shell_block))
            ),

        build_scriptlet: ($) =>
            prec.right(
                seq(token(seq('%build', NEWLINE)), optional($.shell_block))
            ),

        install_scriptlet: ($) =>
            prec.right(
                seq(token(seq('%install', NEWLINE)), optional($.shell_block))
            ),

        check_scriptlet: ($) =>
            prec.right(
                seq(token(seq('%check', NEWLINE)), optional($.shell_block))
            ),

        clean_scriptlet: ($) =>
            prec.right(
                seq(token(seq('%clean', NEWLINE)), optional($.shell_block))
            ),

        ///////////////////////////////////////////////////////////////////////
        // Runtime scriptlets (%pre, %post, ...)
        ///////////////////////////////////////////////////////////////////////

        _runtime_scriptlet: ($) =>
            choice(
                '%pre',
                '%post',
                '%preun',
                '%postun',
                '%pretrans',
                '%posttrans',
                '%preuntrans',
                '%postuntrans',
                '%verify'
            ),

        ///////////////////////////////////////////////////////////////////////
        // Triggers (%triggerin, %triggerun, ...)
        ///////////////////////////////////////////////////////////////////////

        _triggers: ($) =>
            choice(
                '%triggerprein',
                '%triggerin',
                '%triggerun',
                '%triggerpostun'
            ),

        ///////////////////////////////////////////////////////////////////////
        // File triggers (%filetriggerin, %filetriggerun, ...)
        ///////////////////////////////////////////////////////////////////////

        _file_triggers: ($) =>
            choice(
                '%filetriggerin',
                '%filetriggerun',
                '%filetriggerpostun',
                '%transfiletriggerin',
                '%transfiletriggerun',
                '%transfiletriggerpostun'
            ),

        ///////////////////////////////////////////////////////////////////////
        // Files section (%files)
        ///////////////////////////////////////////////////////////////////////

        files: ($) =>
            prec.right(
                seq(
                    '%files',
                    optional(seq('-n', $.string)),
                    optional(seq('-f', $.string)),
                    NEWLINE,
                    repeat(choice($.if_statement, $.defattr, $.file))
                )
            ),

        defattr: ($) =>
            seq(
                '%defattr',
                '(',
                choice('-', /[0-9]+/),
                ',',
                /[a-zA-Z]+/,
                ',',
                /[a-zA-Z]+/,
                ')',
                NEWLINE
            ),

        file: ($) =>
            seq(
                optional($.attr),
                optional(
                    choice(
                        '%artifact',
                        '%config',
                        '%dir',
                        '%doc',
                        '%docdir',
                        '%ghost',
                        '%license',
                        '%missingok',
                        '%readme',
                        $.verify
                    )
                ),
                $.string,
                NEWLINE
            ),

        attr: ($) =>
            seq(
                choice('%attr'),
                '(',
                choice('-', /[0-9]+/),
                ',',
                /[a-zA-Z]+/,
                ',',
                /[a-zA-Z]+/,
                ')'
            ),

        // %verify(not size filedigest mtime) %{prefix}/bin/file
        verify: ($) =>
            seq(
                '%verify',
                token.immediate('('),
                repeat(
                    choice(
                        'filedigest',
                        'group',
                        'maj',
                        'md5',
                        'mode',
                        'min',
                        'mtime',
                        'not',
                        'owner',
                        'size',
                        'symlink'
                    )
                ),
                token.immediate(')')
            ),

        ///////////////////////////////////////////////////////////////////////
        // Changelog Section (%changelog)
        ///////////////////////////////////////////////////////////////////////

        changelog: ($) => seq('%changelog', NEWLINE, repeat($.changelog_entry)),

        // * Tue May 31 2016 Adam Miller <maxamillion@fedoraproject.org> - 0.1-1
        // * Fri Jun 21 2002 Bob Marley <marley@redhat.com>

        changelog_entry: ($) =>
            seq(
                '*',
                $.string_content,
                NEWLINE,
                repeat(seq('-', $.string, NEWLINE))
            ),

        ///////////////////////////////////////////////////////////////////////
        // Macros (%define, %global, %patch, ...)
        ///////////////////////////////////////////////////////////////////////

        macro_definition: ($) =>
            seq(
                choice('%global', '%define'),
                token.immediate(/( |\t)+/),
                $.variable_name,
                optional($.macro_options),
                token.immediate(/( |\t)+/),
                choice($._value, $.macro_shell_expansion),
                NEWLINE
            ),

        macro_options: ($) => seq('(', ')'),

        macro_undefinition: ($) => seq('%undefine', $.variable_name, NEWLINE),

        // The macro invocation should have a higher precedence than macro
        // expansion
        //
        // Example: %bcond foo 1
        macro_invocation: ($) =>
            prec(
                1,
                seq(
                    $.macro_expansion,
                    token.immediate(/( |\t)+/),
                    $._value,
                    NEWLINE
                )
            ),

        ///////////////////////////////////////////////////////////////////////
        // Directives (%attr, %dir, %config, ...)
        ///////////////////////////////////////////////////////////////////////

        integer: ($) => token(/-?(0x)?[0-9]+(#[0-9A-Za-z@_]+)?/),

        float: ($) => {
            const digits = repeat1(/[0-9]+_?/);

            return token(seq(digits, '.', digits));
        },

        // TODO FIXME: How to parse:
        // Source:         %{url}/-/archive/main/%{name}-main.tar.gz
        // This should be => macro_expansion string macro_expansion string
        string_with_newlines: ($) =>
            prec(
                -1,
                repeat1(
                    seq(
                        choice(
                            seq(optional('%'), $.string_content_with_newlines),
                            $.macro_expansion
                        )
                    )
                )
            ),

        string_content_with_newlines: (_) =>
            token(prec(-1, /([^"`%\\\r\n]|\\(.|\r?\n))+/)),

        string: ($) =>
            prec(-1, repeat1(seq(choice($.macro_expansion, $.string_content)))),

        string_content: (_) => token(prec(-1, /([^"`%\\\r\n])+/)),

        // TODO: better name
        single_word: ($) =>
            repeat1(choice($.macro_expansion, seq($.string_content))),

        _expression: ($) => $.single_word,

        ///////////////////////////////////////////////////////////////////////
        // Expansion
        ///////////////////////////////////////////////////////////////////////

        macro_expansion: ($) => choice($._simple_expansion, $._full_expansion),

        variable_name: ($) => /[a-zA-Z_][A-Za-z0-9_]*/,

        _special_variable_name: ($) =>
            seq(optional(token.immediate('?')), $.variable_name),

        // %variable
        _simple_expansion: ($) => seq('%', $.variable_name),

        // %{variable}, %{?variable}, %{variable:argument}
        _full_expansion: ($) =>
            seq(
                '%{',
                choice($._special_variable_name, $.variable_name),
                optional(seq(':', $.string_content)),
                '}'
            ),

        // %(...)
        macro_shell_expansion: ($) => seq('%(', ')'),
    },
});
