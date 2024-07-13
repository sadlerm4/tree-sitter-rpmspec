tree-sitter-rpmspec
===================

A tree-sitter parser for [RPM spec](https://rpm.org) files.

## References

If you want to start contributing, you need to read everything creating
tree-sitter parsers and about the RPM Spec file format. Here are the links you
should read.

### Tree-sitter

* [Parser Development](https://github.com/nvim-treesitter/nvim-treesitter/wiki/Parser-Development)
* [Creating Parsers](https://tree-sitter.github.io/tree-sitter/creating-parsers)
* [Syntax Highlighting](https://tree-sitter.github.io/tree-sitter/syntax-highlighting)

### RPM

* [Spec File Format](https://rpm-software-management.github.io/rpm/manual/spec.html)

## Building the parser

```sh
make
```
## Generating the parser after changing the grammar

```sh
tree-sitter generate
```
