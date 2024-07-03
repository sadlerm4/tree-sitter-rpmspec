(variable_name) @variable
(macro_definition) @keyword.directive

[
  (tag)
  (dependency_tag)
] @attribute

[
  (integer)
  (float)
] @number

(comment) @comment
(string) @string

(if_statement) @keyword

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
  "%endif"
] @keyword.conditional
