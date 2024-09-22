package tree_sitter_rpmspec_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_rpmspec "github.com/tree-sitter/tree-sitter-rpmspec/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_rpmspec.Language())
	if language == nil {
		t.Errorf("Error loading Rpmspec grammar")
	}
}
