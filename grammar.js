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
    extras: ($) => [
        $.comment,
        /\s+/,
        /\\( |\t|\v|\f)/,
    ],

    inline: ($) => [$._special_variable_name],

    rules: {
        spec: ($) => $._top_level,

        _top_level: ($) =>
            prec.left(
                repeat1(
                    choice(
                        $.conditional,
                        $.macro_definition,
                        $.macro_undefinition,
                        $.preamble,
                        $.description,
                        $.subsection,
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
                        $._macro_expansion,
                        NEWLINE,
                    ),
                ),
            ),

        comment: ($) =>
            token(
                choice(
                    seq('#', ANYTHING),
                    seq('%dnl ', ANYTHING),
                ),
            ),

        ///////////////////////////////////////////////////////////////////////
        // Conditionals (%if, %ifarch, %ifos)
        ///////////////////////////////////////////////////////////////////////

        conditional: ($) =>
            seq(
                choice('%if', '%ifarch', '%ifos', '%ifnarch', '%ifnos'),
                ANYTHING,
                NEWLINE,
                $._top_level,
                '%endif',
                NEWLINE,
            ),

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
                ':',
                field('value', $._value),
                NEWLINE,
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
                    choice(
                        $._macro_expansion,
                        $.integer,
                        $.float,
                        $.string,
                    )
                )
            ),

        ///////////////////////////////////////////////////////////////////////
        // Description Section (%description)
        ///////////////////////////////////////////////////////////////////////

        description: ($) =>
            prec.right(
                seq(
                    '%description',
                    optional(
                        seq(
                            '-n',
                            $.string,
                        ),
                    ),
                    NEWLINE,
                    optional($.string_with_newlines),
                ),
            ),

        ///////////////////////////////////////////////////////////////////////
        // Preamble Sub-Sections (%package, %description)
        ///////////////////////////////////////////////////////////////////////

        subsection: ($) =>
            seq(
                $.subsection_package,
                $.subsection_description,
            ),

        subsection_package: ($) =>
            seq(
                '%package',
                $.single_word,
                NEWLINE,
                repeat1($.preamble)
            ),

        subsection_description: ($) =>
            seq(
                '%description',
                '-n',
                $.single_word,
                NEWLINE,
            ),

        ///////////////////////////////////////////////////////////////////////
        // Build scriptlets (%prep, %build, %install, ...)
        ///////////////////////////////////////////////////////////////////////

        prep_scriptlet: ($) =>
            prec.right(
                seq(
                    '%prep',
                    NEWLINE,
                    optional($.string_with_newlines),
                ),
            ),

        generate_buildrequires: ($) =>
            prec.right(
                seq(
                    '%generate_buildrequires',
                    NEWLINE,
                    optional($.string_with_newlines),
                ),
            ),

        conf_scriptlet: ($) =>
            seq(
                '%conf',
                NEWLINE,
            ),

        build_scriptlet: ($) =>
            seq(
                '%build',
                NEWLINE,
            ),

        install_scriptlet: ($) =>
            seq(
                '%install',
                NEWLINE,
            ),

        check_scriptlet: ($) =>
            seq(
                '%check',
                NEWLINE,
            ),

        clean_scriptlet: ($) =>
            seq(
                '%clean',
                NEWLINE,
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
                '%verify',
            ),


        ///////////////////////////////////////////////////////////////////////
        // Triggers (%triggerin, %triggerun, ...)
        ///////////////////////////////////////////////////////////////////////

        _triggers: ($) =>
            choice(
                '%triggerprein',
                '%triggerin',
                '%triggerun',
                '%triggerpostun',
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
                '%transfiletriggerpostun',
            ),

        ///////////////////////////////////////////////////////////////////////
        // Files section (%files)
        ///////////////////////////////////////////////////////////////////////

        files: ($) =>
            prec.right(
                seq(
                    '%files',
                    optional(
                        seq(
                            '-n',
                            $.string,
                        ),
                    ),
                    optional(
                        seq(
                            '-f',
                            $.string,
                        ),
                    ),
                    NEWLINE,
                    repeat(
                        choice(
                            $.conditional_files,
                            $.defattr,
                            $.file,
                        ),
                    ),
                ),
            ),

        conditional_files: ($) =>
            seq(
                choice('%if', '%ifarch', '%ifos'),
                ANYTHING,
                NEWLINE,
                choice(
                    $.defattr,
                    $.file,
                ),
                '%endif',
                NEWLINE,
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
                NEWLINE,
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
                    ),
                ),
                $.string,
                NEWLINE,
            ),

        attr: ($) =>
            seq(
                choice(
                    '%attr',
                ),
                '(',
                choice('-', /[0-9]+/),
                ',',
                /[a-zA-Z]+/,
                ',',
                /[a-zA-Z]+/,
                ')',
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
                        'symlink',

                    ),
                ),
                token.immediate(')'),
            ),

        ///////////////////////////////////////////////////////////////////////
        // Changelog Section (%changelog)
        ///////////////////////////////////////////////////////////////////////

        changelog: ($) =>
            seq(
                '%changelog',
                NEWLINE,
                repeat($.changelog_entry)
            ),

        // * Tue May 31 2016 Adam Miller <maxamillion@fedoraproject.org> - 0.1-1
        // * Fri Jun 21 2002 Bob Marley <marley@redhat.com>

        changelog_entry: ($) =>
            seq(
                '*',
                $.string_content,
                NEWLINE,
                repeat(
                    seq(
                        '-',
                        $.string,
                        NEWLINE
                    ),
                ),
            ),

        ///////////////////////////////////////////////////////////////////////
        // Macros (%define, %global, %patch, ...)
        ///////////////////////////////////////////////////////////////////////

        macro_definition: ($) =>
            seq(
                choice('%global', '%define'),
                $.variable_name,
                optional($.macro_options),
                $.string,
                NEWLINE,
            ),

        macro_options: ($) => seq('(', ')'),

        macro_undefinition: ($) => seq('%undefine', $.variable_name, NEWLINE),

        ///////////////////////////////////////////////////////////////////////
        // Directives (%attr, %dir, %config, ...)
        ///////////////////////////////////////////////////////////////////////

        integer: ($) => token(seq(repeat1(/[0-9]+_?/))),

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
                            $._macro_expansion,
                        )
                    )
                )
            ),

        string_content_with_newlines: (_) => token(prec(-1, /([^"`%\\\r\n]|\\(.|\r?\n))+/)),

        string: ($) =>
            prec(
                -1,
                repeat1(
                    seq(
                        choice(
                            $._macro_expansion,
                            $.string_content,
                        )
                    )
                )
            ),

        string_content: (_) => token(prec(-1, /([^"`%\\\r\n])+/)),

        // TODO: better name
        single_word: ($) =>
            choice(
                $._macro_expansion,
                seq($.string_content),
            ),

        _expression: ($) => ($.single_word),


        ///////////////////////////////////////////////////////////////////////
        // Expansion
        ///////////////////////////////////////////////////////////////////////

        _macro_expansion: ($) =>
            choice(
                $.simple_expansion,
                $.full_expansion,
                $.shell_expansion,
            ),

        variable_name: ($) => /[a-zA-Z_][A-Za-z0-9_]*/,

        _special_variable_name: ($) =>
            seq(optional(token.immediate('?')), $.variable_name),

        // %variable
        simple_expansion: ($) => seq('%', $.variable_name),

        // %{variable}, %{?variable}, %{variable:argument}
        full_expansion: ($) =>
            seq(
                '%{',
                choice(
                    $._special_variable_name,
                    $.variable_name
                ),
                optional(
                    seq(
                        ':',
                        $.string_content,
                    ),
                ),
                '}',
            ),

        // %(...)
        shell_expansion: ($) =>
            seq(
                '%(',
                ')',
            ),
    },
});
