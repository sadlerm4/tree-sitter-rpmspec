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

(description
  (section_name) @type.definition)
(package
  (section_name) @type.definition)
(files
  (section_name) @type.definition)
(changelog
  (section_name) @type.definition)

(prep_scriptlet
  (section_name) @function.builtin)
(generate_buildrequires
  (section_name) @function.builtin)
(conf_scriptlet
  (section_name) @function.builtin)
(build_scriptlet
  (section_name) @function.builtin)
(install_scriptlet
  (section_name) @function.builtin)
(check_scriptlet
  (section_name) @function.builtin)
(clean_scriptlet
  (section_name) @function.builtin)

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
  "and"
  "&&"
  "or"
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
