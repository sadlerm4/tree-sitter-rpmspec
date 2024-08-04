(variable_name) @variable
(macro_definition) @keyword.directive

[
  (tag)
  (dependency_tag)
] @property

[
  (integer)
  (float)
] @number

(comment) @comment
(string) @string

(if_statement) @keyword

(macro_definition) @keyword.directive.define

(macro_invocation) @keyword.function

[
  "%description"
  "%package"
  (files)
  (changelog)
] @function.macro

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
] @keyword.modifier

;[
;  "!="
;  "<"
;  "<="
;  "=="
;  ">"
;  ">="
;  "&&"
;  "||"
;] @operator

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
