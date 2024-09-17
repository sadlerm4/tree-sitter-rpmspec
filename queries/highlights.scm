(identifier) @variable

[
  "%define"
  "%global"
] @keyword.directive.define

(macro_function_definition
  name: (identifier) @function)

(macro_invocation) @keyword.function
(macro_expansion) @keyword

[
  (tag)
  (dependency_tag)
] @type.definition

(integer) @number
(float) @number.float
(version) @number.float

(comment) @comment
(string) @string

[
  "%description"
  "%package"
  (files)
  (changelog)
] @type.definition

[
  (prep_scriptlet)
  (generate_buildrequires)
  (conf_scriptlet)
  (build_scriptlet)
  (install_scriptlet)
  (check_scriptlet)
  (clean_scriptlet)
] @function.builtin

[
  "%artifact"
  "%attr"
  "%config"
  "%dir"
  "%doc"
  "%docdir"
  "%ghost"
  "%license"
  "%missingok"
  "%readme"
] @keyword.type

[
  "!="
  "<"
  "<="
  "=="
  ">"
  ">="
  "&&"
  "||"
  "with"
  "without"
  "defined"
  "undefined"
] @operator

[
  "%if"
  "%ifarch"
  "%ifos"
  "%ifnarch"
  "%ifnos"
  "%elif"
  "%elifarch"
  "%elifos"
  "%else"
  "%endif"
] @keyword.conditional
