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

        preamble: ($) => seq($.variable),

        // Name:   tree-sitter-rpmspec
        // TODO:
        // Requires(pre): foo
        preamble_tags: ($) => seq($.tag, /:[ ]+/, field('value', $._value)),

        tag: ($) =>
            choice(
                'AutoProv',
                'AutoReq',
                'AutoReqProv',
                'AutoRequires',
                'BugUrl',
                'BuildArch',
                'BuildArchitectures',
                'BuildConflicts',
                'BuildPreReq',
                'BuildRequires',
                'BuildRoot',
                'BuildSystem',
                'Conflicts',
                'DistTag',
                'Distribution',
                'Enhances',
                'Epoch',
                'ExcludeArch',
                'ExclusiveArch',
                'ExclusiveOS',
                'Group',
                'License',
                'ModularityLabel',
                'Name',
                'NoPatch',
                'NoSource',
                'Obsoletes',
                'Packager',
                'Prereq',
                'Provides',
                'Recommends',
                'Release',
                'Requires',
                'SourceLicense',
                'Suggests',
                'Summary',
                'Supplements',
                'URL',
                'Url',
                'VCS',
                'Vendor',
                'Version',
                /Patch\d*/,
                /Source\d*/
            ),

        _value: ($) =>
            repeat1(
                choice(
                    $.simple_expansion,
                    $.expansion,
                    $.integer,
                    $.float,
                    $.string
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

        string: ($) =>
            choice($._quoted_string, $._unquoted_string, seq('\\', NEWLINE)),

        _quoted_string: ($) =>
            seq(
                /["']/,
                repeat1(
                    choice(
                        seq(optional('%'), $.string_content),
                        $.expansion,
                        $.simple_expansion
                    )
                ),
                optional('%'),
                /["']/
            ),
        _unquoted_string: ($) =>
            repeat1(
                choice(
                    seq(optional('%'), $.string_content),
                    $.expansion,
                    $.simple_expansion
                )
            ),

        string_content: ($) => token(prec(-1, /([^"'%\\\r\n]|\\(.|\r?\n))+/)),

        ///////////////////////////////////////////////////////////////////////
        // Expansion
        ///////////////////////////////////////////////////////////////////////

        variable_name: ($) => /[a-zA-Z][A-Za-z0-9_]*/,
        _special_variable_name: ($) =>
            seq(optional(token.immediate('?')), $.variable_name),

        // %variable
        simple_expansion: ($) =>
            seq('%', choice($._special_variable_name, $.variable_name)),

        // %{variable}, %{?variable}
        expansion: ($) =>
            seq('%{', choice($._special_variable_name, $.variable_name), '}'),
    },
});
