/**
 * @file Tree-sitter grammar definition for RPM spec files
 * @author Andreas Schneider
 * @license MIT
 * @see {@link https://rpm-software-management.github.io/rpm/manual/spec.html|spec syntax documentation}
 */

const NEWLINE = /\r?\n/;
const WHITE_SPACE = / \t\f\v/;
const ANYTHING = /[^\r\n]+/;

/* https://rpm-software-management.github.io/rpm/manual/spec.html */
module.exports = grammar({
    name: 'rpmspec',

    // Array of tokens that may appear anywhere in the language.
    extras: ($) => [$.comment, WHITE_SPACE],

    inline: ($) => [$._special_variable_name],

    rules: {
        spec: ($) => repeat(choice($.preamble, NEWLINE)),

        comment: ($) => token(seq('#', optional(ANYTHING))),

        ///////////////////////////////////////////////////////////////////////
        // Preamble Section (Name, Version, Release, ...)
        ///////////////////////////////////////////////////////////////////////

        preamble: ($) => seq($.tags),

        // Name:   tree-sitter-rpmspec
        // Requires(pre): tree-sitter
        tags: ($) =>
            seq(
                choice($.tag, $.dependency_tag),
                /:[ ]+/,
                field('value', $._value)
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
                        $.expansion,
                        $.simple_expansion,
                        $.integer,
                        $.float,
                        $.string
                    )
                )
            ),

        ///////////////////////////////////////////////////////////////////////
        // Description Section (%description)
        ///////////////////////////////////////////////////////////////////////

        ///////////////////////////////////////////////////////////////////////
        // Preamble Sub-Sections (%package, %description)
        ///////////////////////////////////////////////////////////////////////

        ///////////////////////////////////////////////////////////////////////
        // Build scriptlets (%prep, %build, %install, ...)
        ///////////////////////////////////////////////////////////////////////

        ///////////////////////////////////////////////////////////////////////
        // Runtime scriptlets (%pre, %post, ...)
        ///////////////////////////////////////////////////////////////////////

        ///////////////////////////////////////////////////////////////////////
        // Triggers (%triggerin, %triggerun, ...)
        ///////////////////////////////////////////////////////////////////////

        ///////////////////////////////////////////////////////////////////////
        // File triggers (%filetriggerin, %filetriggerun, ...)
        ///////////////////////////////////////////////////////////////////////

        ///////////////////////////////////////////////////////////////////////
        // Files section (%files)
        ///////////////////////////////////////////////////////////////////////

        ///////////////////////////////////////////////////////////////////////
        // Changelog Section (%changelog)
        ///////////////////////////////////////////////////////////////////////

        ///////////////////////////////////////////////////////////////////////
        // Macros (%define, %global, %patch, ...)
        ///////////////////////////////////////////////////////////////////////

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
        // This should be => expansion string expansion string
        string: ($) =>
            prec(
                -1,
                repeat1(
                    seq(
                        choice(
                            seq(optional('%'), $.string_content),
                            $.expansion,
                            $.simple_expansion
                        )
                    )
                )
            ),

        string_content: (_) => token(prec(-1, /([^"`%\\\r\n]|\\(.|\r?\n))+/)),

        ///////////////////////////////////////////////////////////////////////
        // Expansion
        ///////////////////////////////////////////////////////////////////////

        variable_name: ($) => /[a-zA-Z][A-Za-z0-9_]*/,

        _special_variable_name: ($) =>
            seq(optional(token.immediate('?')), $.variable_name),

        // %variable
        simple_expansion: ($) => seq('%', $.variable_name),

        // %{variable}, %{?variable}
        expansion: ($) =>
            seq('%{', choice($._special_variable_name, $.variable_name), '}'),
    },
});
