# Load the parser in Neovim

## Prepare the directory

```bash
mkdir parser
ln -s ../libtree-sitter-rpmspec.so parser/rpmspec.so
ln -s . queries/rpmspec
```

## Load it in Neovim

```lua
vim.opt.runtimepath:prepend('/path/to/tree-sitter-rpmspec')
lua vim.treesitter.start(0, 'rpmspec')
```
