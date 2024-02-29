/**
 * @file Tree-sitter grammar definition for RPM spec files
 * @author Andreas Schneider
 * @license MIT
 * @see {@link https://rpm-software-management.github.io/rpm/manual/spec.html|spec syntax documentation}
 */

const NEWLINE = /\r?\n/;
const WHITE_SPACE = / \t\f\v/;
const ANYTHING = /[^\r\n]+/;

module.exports = grammar({
    name: 'rpmspec',

    extras: ($) => [
        $.comment,
        WHITE_SPACE
    ],

    inline: $ => [
        $._special_variable_name,
    ],

    rules: {
        spec: ($) => repeat(
            choice(
                $.preamble,
                NEWLINE,
            )
        ),

        comment: ($) => token(seq('#', optional(ANYTHING))),

        ///////////////////////////////////////////////////////////////////////
        // Preamble Section (Name, Version, Release, ...)
        ///////////////////////////////////////////////////////////////////////

        preamble: ($) => seq($.variable),

        // Name:   tree-sitter-rpmspec
        variable: ($) => seq(
            $.name,
            /:[ ]+/,
            field("value", $._value)
        ),

        name: ($) => choice(
            'AutoProv',
            'AutoReq',
            'AutoReqProv',
            'AutoRequires',
            'BuildArch',
            'BuildArchitectures',
            'BuildConflicts',
            'BuildPreReq',
            'BuildRequires',
            'BuildRoot',
            'Conflicts',
            'Distribution',
            'Enhances',
            'Epoch',
            'ExcludeArch',
            'ExclusiveArch',
            'ExclusiveOS',
            'Group',
            'License',
            'Name',
            'Obsoletes',
            'Packager',
            'Prereq',
            'Provides',
            'Recommends',
            'Release',
            'Requires',
            'Suggests',
            'Summary',
            'Supplements',
            'URL',
            'Url',
            'Vendor',
            'Version',
            /Patch\d*/,
            /Source\d*/,
        ),
        _value: ($) => choice(
            $.simple_expansion,
            $.expansion,
            $.integer,
            $.float,
            seq($.float, optional($.simple_expansion)),
            seq($.float, optional($.expansion)),
            $.string,
        ),

        ///////////////////////////////////////////////////////////////////////
        // Description Section (%description)
        ///////////////////////////////////////////////////////////////////////

        ///////////////////////////////////////////////////////////////////////
        // Package Section (%package)
        ///////////////////////////////////////////////////////////////////////

        ///////////////////////////////////////////////////////////////////////
        // Scripts Section (%prep, %build, %install, ...)
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

            return token(seq(digits, '.', digits))
        },

        string: $ => choice(
            $._quoted_string,
            $._unquoted_string,
            seq("\\", NEWLINE)
        ),

        string_content: _ => token(prec(-1, /([^"`$\\\r\n]|\\(.|\r?\n))+/)),

        _quoted_string: ($) => seq(
            /["']/,
            repeat(
                seq(
                    choice(
                        seq(optional('%'), $.string_content),
                        $.expansion,
                        $.simple_expansion,
                    ),
                )
            ),
            optional('%'),
            /["']/,
        ),
        _unquoted_string: ($) => $.string_content,

        ///////////////////////////////////////////////////////////////////////
        // Expansion
        ///////////////////////////////////////////////////////////////////////

        variable_name: ($) => /[a-zA-Z0-9][\w\-]*/,
        _simple_variable_name: $ => alias(/\w+/, $.variable_name),
        _special_variable_name: $ => alias('?', $.special_variable_name),

        // %variable
        simple_expansion: ($) => seq(
            '%',
            choice(
                $._simple_variable_name,
                $._special_variable_name,
                $.variable_name,
            ),
        ),

        // %{variable}, %{?variable}
        expansion: ($) => seq(
            '%{',
            choice(
                $._simple_variable_name,
                $._special_variable_name,
                $.variable_name,
            ),
           '}',
        ),
    },
});
