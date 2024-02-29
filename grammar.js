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

  extras: ($) => [WHITE_SPACE],

  rules: {
    spec: ($) => repeat($.preamble_section),

    comment: ($) => token(seq('#', optional(ANYTHING))),

    // Preamble Section (Name, Version, Release, ...)
    preamble_section: ($) => choice($.preamble_variable, seq(optional($.comment), NEWLINE)),

    preamble_value: ($) => choice($.integer, $.string),
    preamble_name: ($) => choice('Name', 'Version', 'Release'),
    preamble_variable: ($) => seq(choice(seq($.preamble_name, ": ", field("value", $.preamble_value)), $.preamble_name)),

    // Description Section (%description)

    // Package Section (%package)

    // Scripts Section (%prep, %build, %install, ...)

    // Changelog Section (%changelog)

    // Macros (%define, %global, %patch, ...)
    // Directives (%attr, %dir, %config, ...)

    integer: ($) => /\d+/,

    escape_sequence: ($) => /\\([btnfr"\\]|u[0-9a-fA-F]{4}|U[0-9a-fA-F]{8})/,
    _quoted_string: ($) => seq('"', repeat1(choice(/[^\"\\]/, $.escape_sequence)), '"'),
    _unquoted_string: ($) => /[^\r\n;#" \t\f\v\\][^\r\n;#"\\]*/,

    string: ($) =>
      repeat1(choice($._quoted_string, $._unquoted_string, seq("\\", NEWLINE))),

  },
});
