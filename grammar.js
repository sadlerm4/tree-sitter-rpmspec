/**
 * @file Tree-sitter grammar definition
 * @author Andreas Schneider
 * @license MIT
 * @see {@link https://rpm-software-management.github.io/rpm/manual/spec.html|spec syntax documentation}
 */
module.exports = grammar({
  name: 'rpmspec',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => 'hello'
  }
});
