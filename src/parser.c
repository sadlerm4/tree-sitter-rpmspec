#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 510
#define LARGE_STATE_COUNT 71
#define SYMBOL_COUNT 202
#define ALIAS_COUNT 0
#define TOKEN_COUNT 149
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 13

enum ts_symbol_identifiers {
  aux_sym__simple_statements_token1 = 1,
  sym_comment = 2,
  anon_sym_PERCENTif = 3,
  anon_sym_PERCENTifarch = 4,
  anon_sym_PERCENTifos = 5,
  anon_sym_PERCENTifnarch = 6,
  anon_sym_PERCENTifnos = 7,
  aux_sym_if_statement_token1 = 8,
  anon_sym_PERCENTendif = 9,
  anon_sym_PERCENTelif = 10,
  anon_sym_elifarch = 11,
  anon_sym_PERCENTelifos = 12,
  anon_sym_PERCENTelse = 13,
  anon_sym_COLON = 14,
  anon_sym_AutoProv = 15,
  anon_sym_AutoReq = 16,
  anon_sym_AutoReqProv = 17,
  anon_sym_BugUrl = 18,
  anon_sym_BuildRoot = 19,
  anon_sym_BuildSystem = 20,
  anon_sym_DistTag = 21,
  anon_sym_Distribution = 22,
  anon_sym_Epoch = 23,
  anon_sym_Group = 24,
  anon_sym_License = 25,
  anon_sym_ModularityLabel = 26,
  anon_sym_Name = 27,
  anon_sym_NoPatch = 28,
  anon_sym_NoSource = 29,
  anon_sym_Packager = 30,
  anon_sym_Release = 31,
  anon_sym_SourceLicense = 32,
  anon_sym_Summary = 33,
  anon_sym_URL = 34,
  anon_sym_Url = 35,
  anon_sym_VCS = 36,
  anon_sym_Vendor = 37,
  anon_sym_Version = 38,
  aux_sym_tag_token1 = 39,
  aux_sym_tag_token2 = 40,
  anon_sym_pre = 41,
  anon_sym_post = 42,
  anon_sym_postun = 43,
  anon_sym_pretrans = 44,
  anon_sym_posttrans = 45,
  anon_sym_verify = 46,
  anon_sym_interp = 47,
  anon_sym_meta = 48,
  anon_sym_Requires = 49,
  anon_sym_LPAREN = 50,
  anon_sym_RPAREN = 51,
  anon_sym_BuildArch = 52,
  anon_sym_BuildArchitectures = 53,
  anon_sym_BuildConflicts = 54,
  anon_sym_BuildPrereq = 55,
  anon_sym_BuildRequires = 56,
  anon_sym_Conflicts = 57,
  anon_sym_DocDir = 58,
  anon_sym_Enhances = 59,
  anon_sym_ExcludeArch = 60,
  anon_sym_ExcludeOS = 61,
  anon_sym_ExclusiveArch = 62,
  anon_sym_ExclusiveOS = 63,
  anon_sym_Obsoletes = 64,
  anon_sym_OrderWithRequires = 65,
  anon_sym_Prefix = 66,
  anon_sym_Prefixes = 67,
  anon_sym_Prereq = 68,
  anon_sym_Provides = 69,
  anon_sym_Recommends = 70,
  anon_sym_RemovePathPostfixes = 71,
  anon_sym_Suggests = 72,
  anon_sym_Supplements = 73,
  anon_sym_PERCENTdescription = 74,
  anon_sym_DASHn = 75,
  anon_sym_PERCENTpackage = 76,
  anon_sym_PERCENTprep = 77,
  anon_sym_PERCENTgenerate_buildrequires = 78,
  anon_sym_PERCENTconf = 79,
  anon_sym_PERCENTbuild = 80,
  anon_sym_PERCENTinstall = 81,
  anon_sym_PERCENTcheck = 82,
  anon_sym_PERCENTclean = 83,
  anon_sym_PERCENTpre = 84,
  anon_sym_PERCENTpost = 85,
  anon_sym_PERCENTpreun = 86,
  anon_sym_PERCENTpostun = 87,
  anon_sym_PERCENTpretrans = 88,
  anon_sym_PERCENTposttrans = 89,
  anon_sym_PERCENTpreuntrans = 90,
  anon_sym_PERCENTpostuntrans = 91,
  anon_sym_PERCENTverify = 92,
  anon_sym_PERCENTtriggerprein = 93,
  anon_sym_PERCENTtriggerin = 94,
  anon_sym_PERCENTtriggerun = 95,
  anon_sym_PERCENTtriggerpostun = 96,
  anon_sym_PERCENTfiletriggerin = 97,
  anon_sym_PERCENTfiletriggerun = 98,
  anon_sym_PERCENTfiletriggerpostun = 99,
  anon_sym_PERCENTtransfiletriggerin = 100,
  anon_sym_PERCENTtransfiletriggerun = 101,
  anon_sym_PERCENTtransfiletriggerpostun = 102,
  anon_sym_PERCENTfiles = 103,
  anon_sym_DASHf = 104,
  anon_sym_PERCENTdefattr = 105,
  anon_sym_DASH = 106,
  aux_sym_defattr_token1 = 107,
  anon_sym_COMMA = 108,
  aux_sym_defattr_token2 = 109,
  anon_sym_PERCENTartifact = 110,
  anon_sym_PERCENTconfig = 111,
  anon_sym_PERCENTdir = 112,
  anon_sym_PERCENTdoc = 113,
  anon_sym_PERCENTdocdir = 114,
  anon_sym_PERCENTghost = 115,
  anon_sym_PERCENTlicense = 116,
  anon_sym_PERCENTmissingok = 117,
  anon_sym_PERCENTreadme = 118,
  anon_sym_PERCENTattr = 119,
  anon_sym_LPAREN2 = 120,
  anon_sym_filedigest = 121,
  anon_sym_group = 122,
  anon_sym_maj = 123,
  anon_sym_md5 = 124,
  anon_sym_mode = 125,
  anon_sym_min = 126,
  anon_sym_mtime = 127,
  anon_sym_not = 128,
  anon_sym_owner = 129,
  anon_sym_size = 130,
  anon_sym_symlink = 131,
  anon_sym_RPAREN2 = 132,
  anon_sym_PERCENTchangelog = 133,
  anon_sym_STAR = 134,
  anon_sym_PERCENTglobal = 135,
  anon_sym_PERCENTdefine = 136,
  anon_sym_PERCENTundefine = 137,
  aux_sym_macro_invocation_token1 = 138,
  sym_integer = 139,
  sym_float = 140,
  anon_sym_PERCENT = 141,
  sym_string_content_with_newlines = 142,
  sym_string_content = 143,
  sym_variable_name = 144,
  anon_sym_QMARK = 145,
  anon_sym_PERCENT_LBRACE = 146,
  anon_sym_RBRACE = 147,
  anon_sym_PERCENT_LPAREN = 148,
  sym_spec = 149,
  sym__statements = 150,
  sym_if_statement = 151,
  sym_elif_clause = 152,
  sym_else_clause = 153,
  sym_preamble = 154,
  sym_tags = 155,
  sym_tag = 156,
  sym_qualifier = 157,
  sym_dependency_tag = 158,
  aux_sym__value = 159,
  sym_description = 160,
  sym_subsection = 161,
  sym_subsection_package = 162,
  sym_subsection_description = 163,
  sym_prep_scriptlet = 164,
  sym_generate_buildrequires = 165,
  sym_conf_scriptlet = 166,
  sym_build_scriptlet = 167,
  sym_install_scriptlet = 168,
  sym_check_scriptlet = 169,
  sym_clean_scriptlet = 170,
  sym__runtime_scriptlet = 171,
  sym__triggers = 172,
  sym__file_triggers = 173,
  sym_files = 174,
  sym_conditional_files = 175,
  sym_defattr = 176,
  sym_file = 177,
  sym_attr = 178,
  sym_verify = 179,
  sym_changelog = 180,
  sym_changelog_entry = 181,
  sym_macro_definition = 182,
  sym_macro_options = 183,
  sym_macro_undefinition = 184,
  sym_macro_invocation = 185,
  sym_string_with_newlines = 186,
  sym_string = 187,
  sym_single_word = 188,
  sym__macro_expansion = 189,
  sym_simple_expansion = 190,
  sym_full_expansion = 191,
  sym_shell_expansion = 192,
  aux_sym_spec_repeat1 = 193,
  aux_sym_if_statement_repeat1 = 194,
  aux_sym_subsection_package_repeat1 = 195,
  aux_sym_files_repeat1 = 196,
  aux_sym_verify_repeat1 = 197,
  aux_sym_changelog_repeat1 = 198,
  aux_sym_changelog_entry_repeat1 = 199,
  aux_sym_string_with_newlines_repeat1 = 200,
  aux_sym_string_repeat1 = 201,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__simple_statements_token1] = "_simple_statements_token1",
  [sym_comment] = "comment",
  [anon_sym_PERCENTif] = "%if",
  [anon_sym_PERCENTifarch] = "%ifarch",
  [anon_sym_PERCENTifos] = "%ifos",
  [anon_sym_PERCENTifnarch] = "%ifnarch",
  [anon_sym_PERCENTifnos] = "%ifnos",
  [aux_sym_if_statement_token1] = "if_statement_token1",
  [anon_sym_PERCENTendif] = "%endif",
  [anon_sym_PERCENTelif] = "%elif",
  [anon_sym_elifarch] = "elifarch",
  [anon_sym_PERCENTelifos] = "%elifos",
  [anon_sym_PERCENTelse] = "%else",
  [anon_sym_COLON] = ":",
  [anon_sym_AutoProv] = "AutoProv",
  [anon_sym_AutoReq] = "AutoReq",
  [anon_sym_AutoReqProv] = "AutoReqProv",
  [anon_sym_BugUrl] = "BugUrl",
  [anon_sym_BuildRoot] = "BuildRoot",
  [anon_sym_BuildSystem] = "BuildSystem",
  [anon_sym_DistTag] = "DistTag",
  [anon_sym_Distribution] = "Distribution",
  [anon_sym_Epoch] = "Epoch",
  [anon_sym_Group] = "Group",
  [anon_sym_License] = "License",
  [anon_sym_ModularityLabel] = "ModularityLabel",
  [anon_sym_Name] = "Name",
  [anon_sym_NoPatch] = "NoPatch",
  [anon_sym_NoSource] = "NoSource",
  [anon_sym_Packager] = "Packager",
  [anon_sym_Release] = "Release",
  [anon_sym_SourceLicense] = "SourceLicense",
  [anon_sym_Summary] = "Summary",
  [anon_sym_URL] = "URL",
  [anon_sym_Url] = "Url",
  [anon_sym_VCS] = "VCS",
  [anon_sym_Vendor] = "Vendor",
  [anon_sym_Version] = "Version",
  [aux_sym_tag_token1] = "tag_token1",
  [aux_sym_tag_token2] = "tag_token2",
  [anon_sym_pre] = "pre",
  [anon_sym_post] = "post",
  [anon_sym_postun] = "postun",
  [anon_sym_pretrans] = "pretrans",
  [anon_sym_posttrans] = "posttrans",
  [anon_sym_verify] = "verify",
  [anon_sym_interp] = "interp",
  [anon_sym_meta] = "meta",
  [anon_sym_Requires] = "Requires",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BuildArch] = "BuildArch",
  [anon_sym_BuildArchitectures] = "BuildArchitectures",
  [anon_sym_BuildConflicts] = "BuildConflicts",
  [anon_sym_BuildPrereq] = "BuildPrereq",
  [anon_sym_BuildRequires] = "BuildRequires",
  [anon_sym_Conflicts] = "Conflicts",
  [anon_sym_DocDir] = "DocDir",
  [anon_sym_Enhances] = "Enhances",
  [anon_sym_ExcludeArch] = "ExcludeArch",
  [anon_sym_ExcludeOS] = "ExcludeOS",
  [anon_sym_ExclusiveArch] = "ExclusiveArch",
  [anon_sym_ExclusiveOS] = "ExclusiveOS",
  [anon_sym_Obsoletes] = "Obsoletes",
  [anon_sym_OrderWithRequires] = "OrderWithRequires",
  [anon_sym_Prefix] = "Prefix",
  [anon_sym_Prefixes] = "Prefixes",
  [anon_sym_Prereq] = "Prereq",
  [anon_sym_Provides] = "Provides",
  [anon_sym_Recommends] = "Recommends",
  [anon_sym_RemovePathPostfixes] = "RemovePathPostfixes",
  [anon_sym_Suggests] = "Suggests",
  [anon_sym_Supplements] = "Supplements",
  [anon_sym_PERCENTdescription] = "%description",
  [anon_sym_DASHn] = "-n",
  [anon_sym_PERCENTpackage] = "%package",
  [anon_sym_PERCENTprep] = "%prep",
  [anon_sym_PERCENTgenerate_buildrequires] = "%generate_buildrequires",
  [anon_sym_PERCENTconf] = "%conf",
  [anon_sym_PERCENTbuild] = "%build",
  [anon_sym_PERCENTinstall] = "%install",
  [anon_sym_PERCENTcheck] = "%check",
  [anon_sym_PERCENTclean] = "%clean",
  [anon_sym_PERCENTpre] = "%pre",
  [anon_sym_PERCENTpost] = "%post",
  [anon_sym_PERCENTpreun] = "%preun",
  [anon_sym_PERCENTpostun] = "%postun",
  [anon_sym_PERCENTpretrans] = "%pretrans",
  [anon_sym_PERCENTposttrans] = "%posttrans",
  [anon_sym_PERCENTpreuntrans] = "%preuntrans",
  [anon_sym_PERCENTpostuntrans] = "%postuntrans",
  [anon_sym_PERCENTverify] = "%verify",
  [anon_sym_PERCENTtriggerprein] = "%triggerprein",
  [anon_sym_PERCENTtriggerin] = "%triggerin",
  [anon_sym_PERCENTtriggerun] = "%triggerun",
  [anon_sym_PERCENTtriggerpostun] = "%triggerpostun",
  [anon_sym_PERCENTfiletriggerin] = "%filetriggerin",
  [anon_sym_PERCENTfiletriggerun] = "%filetriggerun",
  [anon_sym_PERCENTfiletriggerpostun] = "%filetriggerpostun",
  [anon_sym_PERCENTtransfiletriggerin] = "%transfiletriggerin",
  [anon_sym_PERCENTtransfiletriggerun] = "%transfiletriggerun",
  [anon_sym_PERCENTtransfiletriggerpostun] = "%transfiletriggerpostun",
  [anon_sym_PERCENTfiles] = "%files",
  [anon_sym_DASHf] = "-f",
  [anon_sym_PERCENTdefattr] = "%defattr",
  [anon_sym_DASH] = "-",
  [aux_sym_defattr_token1] = "defattr_token1",
  [anon_sym_COMMA] = ",",
  [aux_sym_defattr_token2] = "defattr_token2",
  [anon_sym_PERCENTartifact] = "%artifact",
  [anon_sym_PERCENTconfig] = "%config",
  [anon_sym_PERCENTdir] = "%dir",
  [anon_sym_PERCENTdoc] = "%doc",
  [anon_sym_PERCENTdocdir] = "%docdir",
  [anon_sym_PERCENTghost] = "%ghost",
  [anon_sym_PERCENTlicense] = "%license",
  [anon_sym_PERCENTmissingok] = "%missingok",
  [anon_sym_PERCENTreadme] = "%readme",
  [anon_sym_PERCENTattr] = "%attr",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_filedigest] = "filedigest",
  [anon_sym_group] = "group",
  [anon_sym_maj] = "maj",
  [anon_sym_md5] = "md5",
  [anon_sym_mode] = "mode",
  [anon_sym_min] = "min",
  [anon_sym_mtime] = "mtime",
  [anon_sym_not] = "not",
  [anon_sym_owner] = "owner",
  [anon_sym_size] = "size",
  [anon_sym_symlink] = "symlink",
  [anon_sym_RPAREN2] = ")",
  [anon_sym_PERCENTchangelog] = "%changelog",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENTglobal] = "%global",
  [anon_sym_PERCENTdefine] = "%define",
  [anon_sym_PERCENTundefine] = "%undefine",
  [aux_sym_macro_invocation_token1] = "macro_invocation_token1",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_PERCENT] = "%",
  [sym_string_content_with_newlines] = "string_content_with_newlines",
  [sym_string_content] = "string_content",
  [sym_variable_name] = "variable_name",
  [anon_sym_QMARK] = "\?",
  [anon_sym_PERCENT_LBRACE] = "%{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PERCENT_LPAREN] = "%(",
  [sym_spec] = "spec",
  [sym__statements] = "_statements",
  [sym_if_statement] = "if_statement",
  [sym_elif_clause] = "elif_clause",
  [sym_else_clause] = "else_clause",
  [sym_preamble] = "preamble",
  [sym_tags] = "tags",
  [sym_tag] = "tag",
  [sym_qualifier] = "qualifier",
  [sym_dependency_tag] = "dependency_tag",
  [aux_sym__value] = "_value",
  [sym_description] = "description",
  [sym_subsection] = "subsection",
  [sym_subsection_package] = "subsection_package",
  [sym_subsection_description] = "subsection_description",
  [sym_prep_scriptlet] = "prep_scriptlet",
  [sym_generate_buildrequires] = "generate_buildrequires",
  [sym_conf_scriptlet] = "conf_scriptlet",
  [sym_build_scriptlet] = "build_scriptlet",
  [sym_install_scriptlet] = "install_scriptlet",
  [sym_check_scriptlet] = "check_scriptlet",
  [sym_clean_scriptlet] = "clean_scriptlet",
  [sym__runtime_scriptlet] = "_runtime_scriptlet",
  [sym__triggers] = "_triggers",
  [sym__file_triggers] = "_file_triggers",
  [sym_files] = "files",
  [sym_conditional_files] = "conditional_files",
  [sym_defattr] = "defattr",
  [sym_file] = "file",
  [sym_attr] = "attr",
  [sym_verify] = "verify",
  [sym_changelog] = "changelog",
  [sym_changelog_entry] = "changelog_entry",
  [sym_macro_definition] = "macro_definition",
  [sym_macro_options] = "macro_options",
  [sym_macro_undefinition] = "macro_undefinition",
  [sym_macro_invocation] = "macro_invocation",
  [sym_string_with_newlines] = "string_with_newlines",
  [sym_string] = "string",
  [sym_single_word] = "single_word",
  [sym__macro_expansion] = "_macro_expansion",
  [sym_simple_expansion] = "simple_expansion",
  [sym_full_expansion] = "full_expansion",
  [sym_shell_expansion] = "shell_expansion",
  [aux_sym_spec_repeat1] = "spec_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_subsection_package_repeat1] = "subsection_package_repeat1",
  [aux_sym_files_repeat1] = "files_repeat1",
  [aux_sym_verify_repeat1] = "verify_repeat1",
  [aux_sym_changelog_repeat1] = "changelog_repeat1",
  [aux_sym_changelog_entry_repeat1] = "changelog_entry_repeat1",
  [aux_sym_string_with_newlines_repeat1] = "string_with_newlines_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__simple_statements_token1] = aux_sym__simple_statements_token1,
  [sym_comment] = sym_comment,
  [anon_sym_PERCENTif] = anon_sym_PERCENTif,
  [anon_sym_PERCENTifarch] = anon_sym_PERCENTifarch,
  [anon_sym_PERCENTifos] = anon_sym_PERCENTifos,
  [anon_sym_PERCENTifnarch] = anon_sym_PERCENTifnarch,
  [anon_sym_PERCENTifnos] = anon_sym_PERCENTifnos,
  [aux_sym_if_statement_token1] = aux_sym_if_statement_token1,
  [anon_sym_PERCENTendif] = anon_sym_PERCENTendif,
  [anon_sym_PERCENTelif] = anon_sym_PERCENTelif,
  [anon_sym_elifarch] = anon_sym_elifarch,
  [anon_sym_PERCENTelifos] = anon_sym_PERCENTelifos,
  [anon_sym_PERCENTelse] = anon_sym_PERCENTelse,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AutoProv] = anon_sym_AutoProv,
  [anon_sym_AutoReq] = anon_sym_AutoReq,
  [anon_sym_AutoReqProv] = anon_sym_AutoReqProv,
  [anon_sym_BugUrl] = anon_sym_BugUrl,
  [anon_sym_BuildRoot] = anon_sym_BuildRoot,
  [anon_sym_BuildSystem] = anon_sym_BuildSystem,
  [anon_sym_DistTag] = anon_sym_DistTag,
  [anon_sym_Distribution] = anon_sym_Distribution,
  [anon_sym_Epoch] = anon_sym_Epoch,
  [anon_sym_Group] = anon_sym_Group,
  [anon_sym_License] = anon_sym_License,
  [anon_sym_ModularityLabel] = anon_sym_ModularityLabel,
  [anon_sym_Name] = anon_sym_Name,
  [anon_sym_NoPatch] = anon_sym_NoPatch,
  [anon_sym_NoSource] = anon_sym_NoSource,
  [anon_sym_Packager] = anon_sym_Packager,
  [anon_sym_Release] = anon_sym_Release,
  [anon_sym_SourceLicense] = anon_sym_SourceLicense,
  [anon_sym_Summary] = anon_sym_Summary,
  [anon_sym_URL] = anon_sym_URL,
  [anon_sym_Url] = anon_sym_Url,
  [anon_sym_VCS] = anon_sym_VCS,
  [anon_sym_Vendor] = anon_sym_Vendor,
  [anon_sym_Version] = anon_sym_Version,
  [aux_sym_tag_token1] = aux_sym_tag_token1,
  [aux_sym_tag_token2] = aux_sym_tag_token2,
  [anon_sym_pre] = anon_sym_pre,
  [anon_sym_post] = anon_sym_post,
  [anon_sym_postun] = anon_sym_postun,
  [anon_sym_pretrans] = anon_sym_pretrans,
  [anon_sym_posttrans] = anon_sym_posttrans,
  [anon_sym_verify] = anon_sym_verify,
  [anon_sym_interp] = anon_sym_interp,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_Requires] = anon_sym_Requires,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BuildArch] = anon_sym_BuildArch,
  [anon_sym_BuildArchitectures] = anon_sym_BuildArchitectures,
  [anon_sym_BuildConflicts] = anon_sym_BuildConflicts,
  [anon_sym_BuildPrereq] = anon_sym_BuildPrereq,
  [anon_sym_BuildRequires] = anon_sym_BuildRequires,
  [anon_sym_Conflicts] = anon_sym_Conflicts,
  [anon_sym_DocDir] = anon_sym_DocDir,
  [anon_sym_Enhances] = anon_sym_Enhances,
  [anon_sym_ExcludeArch] = anon_sym_ExcludeArch,
  [anon_sym_ExcludeOS] = anon_sym_ExcludeOS,
  [anon_sym_ExclusiveArch] = anon_sym_ExclusiveArch,
  [anon_sym_ExclusiveOS] = anon_sym_ExclusiveOS,
  [anon_sym_Obsoletes] = anon_sym_Obsoletes,
  [anon_sym_OrderWithRequires] = anon_sym_OrderWithRequires,
  [anon_sym_Prefix] = anon_sym_Prefix,
  [anon_sym_Prefixes] = anon_sym_Prefixes,
  [anon_sym_Prereq] = anon_sym_Prereq,
  [anon_sym_Provides] = anon_sym_Provides,
  [anon_sym_Recommends] = anon_sym_Recommends,
  [anon_sym_RemovePathPostfixes] = anon_sym_RemovePathPostfixes,
  [anon_sym_Suggests] = anon_sym_Suggests,
  [anon_sym_Supplements] = anon_sym_Supplements,
  [anon_sym_PERCENTdescription] = anon_sym_PERCENTdescription,
  [anon_sym_DASHn] = anon_sym_DASHn,
  [anon_sym_PERCENTpackage] = anon_sym_PERCENTpackage,
  [anon_sym_PERCENTprep] = anon_sym_PERCENTprep,
  [anon_sym_PERCENTgenerate_buildrequires] = anon_sym_PERCENTgenerate_buildrequires,
  [anon_sym_PERCENTconf] = anon_sym_PERCENTconf,
  [anon_sym_PERCENTbuild] = anon_sym_PERCENTbuild,
  [anon_sym_PERCENTinstall] = anon_sym_PERCENTinstall,
  [anon_sym_PERCENTcheck] = anon_sym_PERCENTcheck,
  [anon_sym_PERCENTclean] = anon_sym_PERCENTclean,
  [anon_sym_PERCENTpre] = anon_sym_PERCENTpre,
  [anon_sym_PERCENTpost] = anon_sym_PERCENTpost,
  [anon_sym_PERCENTpreun] = anon_sym_PERCENTpreun,
  [anon_sym_PERCENTpostun] = anon_sym_PERCENTpostun,
  [anon_sym_PERCENTpretrans] = anon_sym_PERCENTpretrans,
  [anon_sym_PERCENTposttrans] = anon_sym_PERCENTposttrans,
  [anon_sym_PERCENTpreuntrans] = anon_sym_PERCENTpreuntrans,
  [anon_sym_PERCENTpostuntrans] = anon_sym_PERCENTpostuntrans,
  [anon_sym_PERCENTverify] = anon_sym_PERCENTverify,
  [anon_sym_PERCENTtriggerprein] = anon_sym_PERCENTtriggerprein,
  [anon_sym_PERCENTtriggerin] = anon_sym_PERCENTtriggerin,
  [anon_sym_PERCENTtriggerun] = anon_sym_PERCENTtriggerun,
  [anon_sym_PERCENTtriggerpostun] = anon_sym_PERCENTtriggerpostun,
  [anon_sym_PERCENTfiletriggerin] = anon_sym_PERCENTfiletriggerin,
  [anon_sym_PERCENTfiletriggerun] = anon_sym_PERCENTfiletriggerun,
  [anon_sym_PERCENTfiletriggerpostun] = anon_sym_PERCENTfiletriggerpostun,
  [anon_sym_PERCENTtransfiletriggerin] = anon_sym_PERCENTtransfiletriggerin,
  [anon_sym_PERCENTtransfiletriggerun] = anon_sym_PERCENTtransfiletriggerun,
  [anon_sym_PERCENTtransfiletriggerpostun] = anon_sym_PERCENTtransfiletriggerpostun,
  [anon_sym_PERCENTfiles] = anon_sym_PERCENTfiles,
  [anon_sym_DASHf] = anon_sym_DASHf,
  [anon_sym_PERCENTdefattr] = anon_sym_PERCENTdefattr,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_defattr_token1] = aux_sym_defattr_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_defattr_token2] = aux_sym_defattr_token2,
  [anon_sym_PERCENTartifact] = anon_sym_PERCENTartifact,
  [anon_sym_PERCENTconfig] = anon_sym_PERCENTconfig,
  [anon_sym_PERCENTdir] = anon_sym_PERCENTdir,
  [anon_sym_PERCENTdoc] = anon_sym_PERCENTdoc,
  [anon_sym_PERCENTdocdir] = anon_sym_PERCENTdocdir,
  [anon_sym_PERCENTghost] = anon_sym_PERCENTghost,
  [anon_sym_PERCENTlicense] = anon_sym_PERCENTlicense,
  [anon_sym_PERCENTmissingok] = anon_sym_PERCENTmissingok,
  [anon_sym_PERCENTreadme] = anon_sym_PERCENTreadme,
  [anon_sym_PERCENTattr] = anon_sym_PERCENTattr,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_filedigest] = anon_sym_filedigest,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_maj] = anon_sym_maj,
  [anon_sym_md5] = anon_sym_md5,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_mtime] = anon_sym_mtime,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_owner] = anon_sym_owner,
  [anon_sym_size] = anon_sym_size,
  [anon_sym_symlink] = anon_sym_symlink,
  [anon_sym_RPAREN2] = anon_sym_RPAREN,
  [anon_sym_PERCENTchangelog] = anon_sym_PERCENTchangelog,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PERCENTglobal] = anon_sym_PERCENTglobal,
  [anon_sym_PERCENTdefine] = anon_sym_PERCENTdefine,
  [anon_sym_PERCENTundefine] = anon_sym_PERCENTundefine,
  [aux_sym_macro_invocation_token1] = aux_sym_macro_invocation_token1,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_string_content_with_newlines] = sym_string_content_with_newlines,
  [sym_string_content] = sym_string_content,
  [sym_variable_name] = sym_variable_name,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_PERCENT_LBRACE] = anon_sym_PERCENT_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PERCENT_LPAREN] = anon_sym_PERCENT_LPAREN,
  [sym_spec] = sym_spec,
  [sym__statements] = sym__statements,
  [sym_if_statement] = sym_if_statement,
  [sym_elif_clause] = sym_elif_clause,
  [sym_else_clause] = sym_else_clause,
  [sym_preamble] = sym_preamble,
  [sym_tags] = sym_tags,
  [sym_tag] = sym_tag,
  [sym_qualifier] = sym_qualifier,
  [sym_dependency_tag] = sym_dependency_tag,
  [aux_sym__value] = aux_sym__value,
  [sym_description] = sym_description,
  [sym_subsection] = sym_subsection,
  [sym_subsection_package] = sym_subsection_package,
  [sym_subsection_description] = sym_subsection_description,
  [sym_prep_scriptlet] = sym_prep_scriptlet,
  [sym_generate_buildrequires] = sym_generate_buildrequires,
  [sym_conf_scriptlet] = sym_conf_scriptlet,
  [sym_build_scriptlet] = sym_build_scriptlet,
  [sym_install_scriptlet] = sym_install_scriptlet,
  [sym_check_scriptlet] = sym_check_scriptlet,
  [sym_clean_scriptlet] = sym_clean_scriptlet,
  [sym__runtime_scriptlet] = sym__runtime_scriptlet,
  [sym__triggers] = sym__triggers,
  [sym__file_triggers] = sym__file_triggers,
  [sym_files] = sym_files,
  [sym_conditional_files] = sym_conditional_files,
  [sym_defattr] = sym_defattr,
  [sym_file] = sym_file,
  [sym_attr] = sym_attr,
  [sym_verify] = sym_verify,
  [sym_changelog] = sym_changelog,
  [sym_changelog_entry] = sym_changelog_entry,
  [sym_macro_definition] = sym_macro_definition,
  [sym_macro_options] = sym_macro_options,
  [sym_macro_undefinition] = sym_macro_undefinition,
  [sym_macro_invocation] = sym_macro_invocation,
  [sym_string_with_newlines] = sym_string_with_newlines,
  [sym_string] = sym_string,
  [sym_single_word] = sym_single_word,
  [sym__macro_expansion] = sym__macro_expansion,
  [sym_simple_expansion] = sym_simple_expansion,
  [sym_full_expansion] = sym_full_expansion,
  [sym_shell_expansion] = sym_shell_expansion,
  [aux_sym_spec_repeat1] = aux_sym_spec_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_subsection_package_repeat1] = aux_sym_subsection_package_repeat1,
  [aux_sym_files_repeat1] = aux_sym_files_repeat1,
  [aux_sym_verify_repeat1] = aux_sym_verify_repeat1,
  [aux_sym_changelog_repeat1] = aux_sym_changelog_repeat1,
  [aux_sym_changelog_entry_repeat1] = aux_sym_changelog_entry_repeat1,
  [aux_sym_string_with_newlines_repeat1] = aux_sym_string_with_newlines_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__simple_statements_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENTif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTifarch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTifos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTifnarch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTifnos] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_if_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENTendif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTelif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elifarch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTelifos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AutoProv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AutoReq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AutoReqProv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BugUrl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BuildRoot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BuildSystem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DistTag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Distribution] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Epoch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_License] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ModularityLabel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NoPatch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NoSource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Packager] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Release] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SourceLicense] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Summary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_URL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VCS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vendor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Version] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_pre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pretrans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_posttrans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Requires] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BuildArch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BuildArchitectures] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BuildConflicts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BuildPrereq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BuildRequires] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Conflicts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DocDir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Enhances] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ExcludeArch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ExcludeOS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ExclusiveArch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ExclusiveOS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Obsoletes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OrderWithRequires] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Prefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Prefixes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Prereq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Provides] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Recommends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RemovePathPostfixes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Suggests] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Supplements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTdescription] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTpackage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTprep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTgenerate_buildrequires] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTconf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTbuild] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTinstall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTcheck] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTclean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTpre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTpost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTpreun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTpostun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTpretrans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTposttrans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTpreuntrans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTpostuntrans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTverify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTtriggerprein] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTtriggerin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTtriggerun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTtriggerpostun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTfiletriggerin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTfiletriggerun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTfiletriggerpostun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTtransfiletriggerin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTtransfiletriggerun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTtransfiletriggerpostun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTfiles] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTdefattr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_defattr_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_defattr_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENTartifact] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTconfig] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTdir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTdoc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTdocdir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTghost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTlicense] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTmissingok] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTreadme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTattr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filedigest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maj] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_md5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mtime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_owner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_symlink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTchangelog] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTglobal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTdefine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTundefine] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_macro_invocation_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content_with_newlines] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_spec] = {
    .visible = true,
    .named = true,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elif_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble] = {
    .visible = true,
    .named = true,
  },
  [sym_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value] = {
    .visible = false,
    .named = false,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_subsection] = {
    .visible = true,
    .named = true,
  },
  [sym_subsection_package] = {
    .visible = true,
    .named = true,
  },
  [sym_subsection_description] = {
    .visible = true,
    .named = true,
  },
  [sym_prep_scriptlet] = {
    .visible = true,
    .named = true,
  },
  [sym_generate_buildrequires] = {
    .visible = true,
    .named = true,
  },
  [sym_conf_scriptlet] = {
    .visible = true,
    .named = true,
  },
  [sym_build_scriptlet] = {
    .visible = true,
    .named = true,
  },
  [sym_install_scriptlet] = {
    .visible = true,
    .named = true,
  },
  [sym_check_scriptlet] = {
    .visible = true,
    .named = true,
  },
  [sym_clean_scriptlet] = {
    .visible = true,
    .named = true,
  },
  [sym__runtime_scriptlet] = {
    .visible = false,
    .named = true,
  },
  [sym__triggers] = {
    .visible = false,
    .named = true,
  },
  [sym__file_triggers] = {
    .visible = false,
    .named = true,
  },
  [sym_files] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_files] = {
    .visible = true,
    .named = true,
  },
  [sym_defattr] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_verify] = {
    .visible = true,
    .named = true,
  },
  [sym_changelog] = {
    .visible = true,
    .named = true,
  },
  [sym_changelog_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_options] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_undefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_invocation] = {
    .visible = true,
    .named = true,
  },
  [sym_string_with_newlines] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_word] = {
    .visible = true,
    .named = true,
  },
  [sym__macro_expansion] = {
    .visible = false,
    .named = true,
  },
  [sym_simple_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_full_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_expansion] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_spec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subsection_package_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_files_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verify_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_changelog_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_changelog_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_with_newlines_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_body = 2,
  field_condition = 3,
  field_consequence = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_alternative, 0},
  [1] =
    {field_value, 2},
  [2] =
    {field_condition, 1},
  [3] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [5] =
    {field_condition, 1},
    {field_consequence, 3},
  [7] =
    {field_body, 2},
  [8] =
    {field_alternative, 3},
    {field_condition, 1},
  [10] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
  [12] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
  [15] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 1},
    {field_consequence, 3},
  [18] =
    {field_alternative, 3, .inherited = true},
    {field_alternative, 4},
    {field_condition, 1},
  [21] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequence, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 32,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 40,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 38,
  [50] = 50,
  [51] = 51,
  [52] = 34,
  [53] = 35,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 39,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 48,
  [74] = 61,
  [75] = 75,
  [76] = 9,
  [77] = 8,
  [78] = 7,
  [79] = 5,
  [80] = 11,
  [81] = 6,
  [82] = 10,
  [83] = 9,
  [84] = 5,
  [85] = 6,
  [86] = 10,
  [87] = 7,
  [88] = 11,
  [89] = 8,
  [90] = 90,
  [91] = 90,
  [92] = 90,
  [93] = 14,
  [94] = 17,
  [95] = 16,
  [96] = 15,
  [97] = 18,
  [98] = 98,
  [99] = 98,
  [100] = 98,
  [101] = 98,
  [102] = 16,
  [103] = 15,
  [104] = 14,
  [105] = 17,
  [106] = 18,
  [107] = 19,
  [108] = 21,
  [109] = 23,
  [110] = 110,
  [111] = 110,
  [112] = 20,
  [113] = 22,
  [114] = 25,
  [115] = 19,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 118,
  [121] = 121,
  [122] = 117,
  [123] = 119,
  [124] = 116,
  [125] = 125,
  [126] = 24,
  [127] = 125,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 129,
  [132] = 132,
  [133] = 133,
  [134] = 128,
  [135] = 135,
  [136] = 136,
  [137] = 136,
  [138] = 135,
  [139] = 22,
  [140] = 32,
  [141] = 23,
  [142] = 21,
  [143] = 20,
  [144] = 136,
  [145] = 135,
  [146] = 25,
  [147] = 147,
  [148] = 135,
  [149] = 136,
  [150] = 150,
  [151] = 24,
  [152] = 152,
  [153] = 147,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 156,
  [158] = 147,
  [159] = 152,
  [160] = 150,
  [161] = 154,
  [162] = 150,
  [163] = 156,
  [164] = 155,
  [165] = 165,
  [166] = 154,
  [167] = 154,
  [168] = 150,
  [169] = 165,
  [170] = 152,
  [171] = 155,
  [172] = 172,
  [173] = 35,
  [174] = 34,
  [175] = 38,
  [176] = 176,
  [177] = 177,
  [178] = 37,
  [179] = 172,
  [180] = 39,
  [181] = 40,
  [182] = 32,
  [183] = 183,
  [184] = 184,
  [185] = 27,
  [186] = 30,
  [187] = 28,
  [188] = 188,
  [189] = 31,
  [190] = 26,
  [191] = 29,
  [192] = 39,
  [193] = 40,
  [194] = 32,
  [195] = 38,
  [196] = 34,
  [197] = 35,
  [198] = 35,
  [199] = 32,
  [200] = 40,
  [201] = 34,
  [202] = 33,
  [203] = 39,
  [204] = 38,
  [205] = 205,
  [206] = 32,
  [207] = 38,
  [208] = 39,
  [209] = 34,
  [210] = 210,
  [211] = 35,
  [212] = 40,
  [213] = 32,
  [214] = 51,
  [215] = 35,
  [216] = 64,
  [217] = 217,
  [218] = 40,
  [219] = 39,
  [220] = 38,
  [221] = 34,
  [222] = 57,
  [223] = 35,
  [224] = 40,
  [225] = 39,
  [226] = 68,
  [227] = 38,
  [228] = 34,
  [229] = 66,
  [230] = 67,
  [231] = 32,
  [232] = 60,
  [233] = 233,
  [234] = 35,
  [235] = 65,
  [236] = 41,
  [237] = 44,
  [238] = 62,
  [239] = 34,
  [240] = 56,
  [241] = 45,
  [242] = 38,
  [243] = 39,
  [244] = 40,
  [245] = 32,
  [246] = 37,
  [247] = 46,
  [248] = 47,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 251,
  [253] = 251,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 256,
  [260] = 260,
  [261] = 260,
  [262] = 254,
  [263] = 258,
  [264] = 256,
  [265] = 256,
  [266] = 258,
  [267] = 260,
  [268] = 268,
  [269] = 256,
  [270] = 260,
  [271] = 271,
  [272] = 271,
  [273] = 273,
  [274] = 257,
  [275] = 257,
  [276] = 273,
  [277] = 271,
  [278] = 254,
  [279] = 260,
  [280] = 256,
  [281] = 260,
  [282] = 260,
  [283] = 271,
  [284] = 260,
  [285] = 260,
  [286] = 271,
  [287] = 271,
  [288] = 271,
  [289] = 271,
  [290] = 271,
  [291] = 271,
  [292] = 292,
  [293] = 255,
  [294] = 255,
  [295] = 256,
  [296] = 256,
  [297] = 255,
  [298] = 256,
  [299] = 260,
  [300] = 256,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 38,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 18,
  [312] = 312,
  [313] = 313,
  [314] = 17,
  [315] = 14,
  [316] = 316,
  [317] = 16,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 306,
  [329] = 303,
  [330] = 330,
  [331] = 331,
  [332] = 316,
  [333] = 333,
  [334] = 301,
  [335] = 335,
  [336] = 333,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 325,
  [341] = 341,
  [342] = 324,
  [343] = 343,
  [344] = 344,
  [345] = 323,
  [346] = 302,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 326,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 320,
  [356] = 321,
  [357] = 337,
  [358] = 303,
  [359] = 330,
  [360] = 40,
  [361] = 339,
  [362] = 333,
  [363] = 337,
  [364] = 322,
  [365] = 339,
  [366] = 39,
  [367] = 343,
  [368] = 302,
  [369] = 348,
  [370] = 349,
  [371] = 326,
  [372] = 351,
  [373] = 353,
  [374] = 303,
  [375] = 330,
  [376] = 376,
  [377] = 337,
  [378] = 378,
  [379] = 343,
  [380] = 302,
  [381] = 348,
  [382] = 326,
  [383] = 353,
  [384] = 303,
  [385] = 330,
  [386] = 386,
  [387] = 387,
  [388] = 302,
  [389] = 326,
  [390] = 303,
  [391] = 330,
  [392] = 392,
  [393] = 393,
  [394] = 302,
  [395] = 326,
  [396] = 303,
  [397] = 330,
  [398] = 34,
  [399] = 399,
  [400] = 302,
  [401] = 326,
  [402] = 303,
  [403] = 330,
  [404] = 35,
  [405] = 32,
  [406] = 330,
  [407] = 326,
  [408] = 330,
  [409] = 409,
  [410] = 410,
  [411] = 302,
  [412] = 326,
  [413] = 330,
  [414] = 343,
  [415] = 344,
  [416] = 302,
  [417] = 326,
  [418] = 304,
  [419] = 353,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 318,
  [425] = 321,
  [426] = 426,
  [427] = 320,
  [428] = 428,
  [429] = 302,
  [430] = 378,
  [431] = 431,
  [432] = 347,
  [433] = 352,
  [434] = 431,
  [435] = 435,
  [436] = 436,
  [437] = 421,
  [438] = 438,
  [439] = 439,
  [440] = 351,
  [441] = 441,
  [442] = 318,
  [443] = 443,
  [444] = 444,
  [445] = 378,
  [446] = 446,
  [447] = 428,
  [448] = 431,
  [449] = 435,
  [450] = 421,
  [451] = 451,
  [452] = 318,
  [453] = 453,
  [454] = 454,
  [455] = 378,
  [456] = 456,
  [457] = 431,
  [458] = 421,
  [459] = 459,
  [460] = 318,
  [461] = 378,
  [462] = 431,
  [463] = 435,
  [464] = 318,
  [465] = 378,
  [466] = 431,
  [467] = 467,
  [468] = 318,
  [469] = 378,
  [470] = 431,
  [471] = 349,
  [472] = 318,
  [473] = 378,
  [474] = 431,
  [475] = 475,
  [476] = 318,
  [477] = 378,
  [478] = 431,
  [479] = 348,
  [480] = 318,
  [481] = 378,
  [482] = 431,
  [483] = 305,
  [484] = 309,
  [485] = 319,
  [486] = 486,
  [487] = 426,
  [488] = 488,
  [489] = 426,
  [490] = 426,
  [491] = 410,
  [492] = 439,
  [493] = 410,
  [494] = 439,
  [495] = 439,
  [496] = 335,
  [497] = 459,
  [498] = 335,
  [499] = 459,
  [500] = 459,
  [501] = 451,
  [502] = 451,
  [503] = 451,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 341,
  [508] = 341,
  [509] = 341,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(645);
      ADVANCE_MAP(
        '#', 657,
        '%', 820,
        '(', 794,
        ')', 806,
        '*', 808,
        ',', 782,
        '-', 779,
        ':', 677,
        '?', 1412,
        'A', 581,
        'B', 582,
        'C', 411,
        'D', 268,
        'E', 356,
        'G', 462,
        'L', 276,
        'M', 407,
        'N', 59,
        'O', 93,
        'P', 60,
        'R', 140,
        'S', 413,
        'U', 50,
        'V', 42,
      );
      if (lookahead == '\\') SKIP(641);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead == 'g') ADVANCE(465);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(168);
      if (lookahead == '}') ADVANCE(1414);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(640);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(780);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 646,
        '\r', 1,
        '#', 657,
        '%', 827,
        '*', 808,
        '-', 779,
        'A', 581,
        'B', 582,
        'C', 411,
        'D', 268,
        'E', 356,
        'G', 462,
        'L', 276,
        'M', 407,
        'N', 59,
        'O', 93,
        'P', 60,
        'R', 140,
        'S', 413,
        'U', 50,
        'V', 42,
      );
      if (lookahead == '\\') SKIP(614);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 647,
        '\r', 2,
        '#', 656,
        '%', 821,
        'A', 1385,
        'B', 1386,
        'C', 1298,
        'D', 1250,
        'E', 1289,
        'G', 1328,
        'L', 1254,
        'M', 1299,
        'N', 1150,
        'O', 1162,
        'P', 1151,
        'R', 1196,
        'S', 1302,
        'U', 1142,
        'V', 1134,
      );
      if (lookahead == '\\') SKIP(616);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 648,
        '\r', 3,
        '#', 655,
        '%', 827,
        'A', 1089,
        'B', 1090,
        'C', 1002,
        'D', 954,
        'E', 993,
        'G', 1032,
        'L', 958,
        'M', 1003,
        'N', 855,
        'O', 867,
        'P', 856,
        'R', 901,
        'S', 1006,
        'U', 847,
        'V', 839,
        '\\', 12,
        '\t', 832,
        0x0b, 832,
        '\f', 832,
        ' ', 832,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '-') ADVANCE(1130);
      if (lookahead == '0') ADVANCE(813);
      if (lookahead == '\\') SKIP(630);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1122);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(812);
      if (lookahead == '\r') SKIP(27);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '-') ADVANCE(1130);
      if (lookahead == '0') ADVANCE(813);
      if (lookahead == '\\') SKIP(630);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1122);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 649,
        '\r', 6,
        '#', 657,
        '%', 826,
        '-', 221,
        'A', 581,
        'B', 582,
        'C', 411,
        'D', 268,
        'E', 356,
        'G', 462,
        'L', 276,
        'M', 407,
        'N', 59,
        'O', 93,
        'P', 60,
        'R', 140,
        'S', 413,
        'U', 50,
        'V', 42,
      );
      if (lookahead == '\\') SKIP(615);
      if (lookahead == 'e') ADVANCE(331);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 650,
        '\r', 7,
        '#', 656,
        '%', 827,
        '-', 1130,
        '0', 813,
        'A', 1385,
        'B', 1386,
        'C', 1298,
        'D', 1250,
        'E', 1289,
        'G', 1328,
        'L', 1254,
        'M', 1299,
        'N', 1150,
        'O', 1162,
        'P', 1151,
        'R', 1196,
        'S', 1302,
        'U', 1142,
        'V', 1134,
      );
      if (lookahead == '\\') SKIP(618);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 651,
        '\r', 8,
        '#', 657,
        '%', 828,
        'A', 581,
        'B', 582,
        'C', 411,
        'D', 268,
        'E', 356,
        'G', 462,
        'L', 276,
        'M', 407,
        'N', 59,
        'O', 93,
        'P', 60,
        'R', 140,
        'S', 413,
        'U', 50,
        'V', 42,
      );
      if (lookahead == '\\') SKIP(617);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(652);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '-') ADVANCE(1130);
      if (lookahead == '0') ADVANCE(813);
      if (lookahead == '\\') SKIP(631);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1115);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(653);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '-') ADVANCE(1229);
      if (lookahead == '\\') SKIP(625);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(654);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '\\') SKIP(626);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 12:
      if (lookahead == '\r') ADVANCE(1112);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(832);
      if (lookahead != 0) ADVANCE(1111);
      END_STATE();
    case 13:
      if (lookahead == '\r') ADVANCE(1112);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(833);
      if (lookahead != 0) ADVANCE(1111);
      END_STATE();
    case 14:
      if (lookahead == '\r') ADVANCE(1112);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(834);
      if (lookahead != 0) ADVANCE(1111);
      END_STATE();
    case 15:
      if (lookahead == '\r') ADVANCE(1112);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(835);
      if (lookahead != 0) ADVANCE(1111);
      END_STATE();
    case 16:
      if (lookahead == '\r') ADVANCE(1112);
      if (lookahead != 0) ADVANCE(1111);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(657);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '(') ADVANCE(794);
      if (lookahead == ')') ADVANCE(719);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '?') ADVANCE(1412);
      if (lookahead == '\\') SKIP(627);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1411);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '(') ADVANCE(718);
      if (lookahead == ')') ADVANCE(806);
      if (lookahead == '-') ADVANCE(779);
      if (lookahead == ':') ADVANCE(677);
      if (lookahead == '\\') SKIP(624);
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead == 'g') ADVANCE(465);
      if (lookahead == 'm') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 's') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(781);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '(') ADVANCE(718);
      if (lookahead == '-') ADVANCE(779);
      if (lookahead == ':') ADVANCE(677);
      if (lookahead == '\\') SKIP(624);
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead == 'g') ADVANCE(465);
      if (lookahead == 'm') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 's') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(781);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == ')') ADVANCE(719);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '\\') SKIP(627);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1411);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '\\') SKIP(628);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(822);
      if (lookahead == '\\') SKIP(619);
      if (lookahead == 'e') ADVANCE(1276);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(824);
      if (lookahead == '\\') SKIP(629);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(829);
      if (lookahead == '-') ADVANCE(1130);
      if (lookahead == '0') ADVANCE(813);
      if (lookahead == '\\') SKIP(621);
      if (lookahead == 'e') ADVANCE(1276);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1120);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '(') ADVANCE(718);
      if (lookahead == '-') ADVANCE(1130);
      if (lookahead == '0') ADVANCE(813);
      if (lookahead == '\\') SKIP(622);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '-') ADVANCE(1130);
      if (lookahead == '0') ADVANCE(813);
      if (lookahead == '\\') SKIP(630);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1122);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '\\') SKIP(633);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(28);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(823);
      if (lookahead == '\\') SKIP(620);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(825);
      if (lookahead == '\\') SKIP(632);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '-') ADVANCE(1130);
      if (lookahead == '0') ADVANCE(813);
      if (lookahead == '\\') SKIP(623);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(31);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1126);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '\\') SKIP(634);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(32);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '%') ADVANCE(829);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(980);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(34);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(35);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(835);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1411);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(1111);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(635);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '5') ADVANCE(798);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(473);
      if (lookahead == 'C') ADVANCE(436);
      if (lookahead == 'P') ADVANCE(495);
      if (lookahead == 'R') ADVANCE(169);
      if (lookahead == 'S') ADVANCE(612);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(475);
      if (lookahead == 'O') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(476);
      if (lookahead == 'O') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(286);
      END_STATE();
    case 44:
      if (lookahead == 'L') ADVANCE(699);
      END_STATE();
    case 45:
      if (lookahead == 'L') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 'P') ADVANCE(72);
      if (lookahead == 'S') ADVANCE(435);
      END_STATE();
    case 47:
      if (lookahead == 'P') ADVANCE(472);
      if (lookahead == 'R') ADVANCE(167);
      END_STATE();
    case 48:
      if (lookahead == 'P') ADVANCE(82);
      END_STATE();
    case 49:
      if (lookahead == 'P') ADVANCE(432);
      END_STATE();
    case 50:
      if (lookahead == 'R') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 51:
      if (lookahead == 'R') ADVANCE(213);
      END_STATE();
    case 52:
      if (lookahead == 'S') ADVANCE(701);
      END_STATE();
    case 53:
      if (lookahead == 'S') ADVANCE(731);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(733);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 56:
      if (lookahead == 'U') ADVANCE(468);
      END_STATE();
    case 57:
      if (lookahead == 'W') ADVANCE(290);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(97);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(349);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(716);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(526);
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(560);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(561);
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(388);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(559);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(568);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 93:
      if (lookahead == 'b') ADVANCE(528);
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 94:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 95:
      if (lookahead == 'b') ADVANCE(183);
      END_STATE();
    case 96:
      if (lookahead == 'b') ADVANCE(599);
      END_STATE();
    case 97:
      if (lookahead == 'b') ADVANCE(598);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(322);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(787);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(319);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(415);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == 'm') ADVANCE(410);
      if (lookahead == 'q') ADVANCE(592);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(563);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(550);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(571);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(474);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(566);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(323);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(753);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(587);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(422);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(514);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(380);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(351);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(498);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(799);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(801);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(792);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'n') ADVANCE(326);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'h') ADVANCE(430);
      if (lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 215:
      if (lookahead == 'f') ADVANCE(659);
      if (lookahead == 'n') ADVANCE(539);
      END_STATE();
    case 216:
      if (lookahead == 'f') ADVANCE(752);
      END_STATE();
    case 217:
      if (lookahead == 'f') ADVANCE(673);
      END_STATE();
    case 218:
      if (lookahead == 'f') ADVANCE(608);
      END_STATE();
    case 219:
      if (lookahead == 'f') ADVANCE(672);
      END_STATE();
    case 220:
      if (lookahead == 'f') ADVANCE(751);
      END_STATE();
    case 221:
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == 'n') ADVANCE(747);
      END_STATE();
    case 222:
      if (lookahead == 'f') ADVANCE(660);
      END_STATE();
    case 223:
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 224:
      if (lookahead == 'f') ADVANCE(609);
      END_STATE();
    case 225:
      if (lookahead == 'f') ADVANCE(345);
      END_STATE();
    case 226:
      if (lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 227:
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 228:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 229:
      if (lookahead == 'f') ADVANCE(303);
      END_STATE();
    case 230:
      if (lookahead == 'f') ADVANCE(273);
      END_STATE();
    case 231:
      if (lookahead == 'f') ADVANCE(277);
      END_STATE();
    case 232:
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 233:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 234:
      if (lookahead == 'f') ADVANCE(310);
      END_STATE();
    case 235:
      if (lookahead == 'f') ADVANCE(346);
      END_STATE();
    case 236:
      if (lookahead == 'g') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 237:
      if (lookahead == 'g') ADVANCE(242);
      if (lookahead == 'm') ADVANCE(348);
      if (lookahead == 'p') ADVANCE(441);
      END_STATE();
    case 238:
      if (lookahead == 'g') ADVANCE(785);
      END_STATE();
    case 239:
      if (lookahead == 'g') ADVANCE(686);
      END_STATE();
    case 240:
      if (lookahead == 'g') ADVANCE(807);
      END_STATE();
    case 241:
      if (lookahead == 'g') ADVANCE(416);
      END_STATE();
    case 242:
      if (lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 243:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 244:
      if (lookahead == 'g') ADVANCE(161);
      END_STATE();
    case 245:
      if (lookahead == 'g') ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 247:
      if (lookahead == 'g') ADVANCE(187);
      END_STATE();
    case 248:
      if (lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 249:
      if (lookahead == 'g') ADVANCE(203);
      END_STATE();
    case 250:
      if (lookahead == 'g') ADVANCE(209);
      END_STATE();
    case 251:
      if (lookahead == 'g') ADVANCE(248);
      END_STATE();
    case 252:
      if (lookahead == 'g') ADVANCE(249);
      END_STATE();
    case 253:
      if (lookahead == 'h') ADVANCE(68);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 254:
      if (lookahead == 'h') ADVANCE(68);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 255:
      if (lookahead == 'h') ADVANCE(688);
      END_STATE();
    case 256:
      if (lookahead == 'h') ADVANCE(704);
      END_STATE();
    case 257:
      if (lookahead == 'h') ADVANCE(661);
      END_STATE();
    case 258:
      if (lookahead == 'h') ADVANCE(693);
      END_STATE();
    case 259:
      if (lookahead == 'h') ADVANCE(663);
      END_STATE();
    case 260:
      if (lookahead == 'h') ADVANCE(674);
      END_STATE();
    case 261:
      if (lookahead == 'h') ADVANCE(722);
      END_STATE();
    case 262:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 263:
      if (lookahead == 'h') ADVANCE(730);
      END_STATE();
    case 264:
      if (lookahead == 'h') ADVANCE(732);
      END_STATE();
    case 265:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 266:
      if (lookahead == 'h') ADVANCE(49);
      END_STATE();
    case 267:
      if (lookahead == 'h') ADVANCE(430);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(524);
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == 'y') ADVANCE(354);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(606);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(379);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(455);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'p') ADVANCE(431);
      if (lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(370);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(373);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 'u') ADVANCE(374);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 306:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 307:
      if (lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 309:
      if (lookahead == 'i') ADVANCE(483);
      END_STATE();
    case 310:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 311:
      if (lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 312:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 313:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 314:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 316:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 318:
      if (lookahead == 'j') ADVANCE(797);
      END_STATE();
    case 319:
      if (lookahead == 'k') ADVANCE(755);
      END_STATE();
    case 320:
      if (lookahead == 'k') ADVANCE(805);
      END_STATE();
    case 321:
      if (lookahead == 'k') ADVANCE(791);
      END_STATE();
    case 322:
      if (lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 323:
      if (lookahead == 'k') ADVANCE(90);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(700);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(683);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(809);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(754);
      END_STATE();
    case 330:
      if (lookahead == 'l') ADVANCE(691);
      END_STATE();
    case 331:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 332:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 333:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 334:
      if (lookahead == 'l') ADVANCE(583);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 336:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 337:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 338:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(329);
      END_STATE();
    case 340:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 341:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 342:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 343:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 345:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 346:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 347:
      if (lookahead == 'm') ADVANCE(685);
      END_STATE();
    case 348:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 349:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 350:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 351:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 352:
      if (lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 353:
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 354:
      if (lookahead == 'm') ADVANCE(338);
      END_STATE();
    case 355:
      if (lookahead == 'm') ADVANCE(352);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(419);
      if (lookahead == 'x') ADVANCE(106);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(800);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(756);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(759);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(711);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(760);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(703);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(767);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(768);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(746);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(766);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(770);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(771);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(769);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(772);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(773);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(774);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(775);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(747);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(576);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 379:
      if (lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 380:
      if (lookahead == 'n') ADVANCE(326);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 382:
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 383:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 384:
      if (lookahead == 'n') ADVANCE(527);
      END_STATE();
    case 385:
      if (lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 386:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 387:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 388:
      if (lookahead == 'n') ADVANCE(508);
      END_STATE();
    case 389:
      if (lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 390:
      if (lookahead == 'n') ADVANCE(512);
      END_STATE();
    case 391:
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 392:
      if (lookahead == 'n') ADVANCE(515);
      END_STATE();
    case 393:
      if (lookahead == 'n') ADVANCE(517);
      END_STATE();
    case 394:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 395:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 396:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 397:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 398:
      if (lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 399:
      if (lookahead == 'n') ADVANCE(539);
      END_STATE();
    case 400:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 401:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 402:
      if (lookahead == 'n') ADVANCE(537);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 404:
      if (lookahead == 'n') ADVANCE(538);
      END_STATE();
    case 405:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 406:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 409:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 410:
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 411:
      if (lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 412:
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 413:
      if (lookahead == 'o') ADVANCE(586);
      if (lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 414:
      if (lookahead == 'o') ADVANCE(545);
      END_STATE();
    case 415:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 416:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 417:
      if (lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 418:
      if (lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 419:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 420:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 421:
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 422:
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 423:
      if (lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 424:
      if (lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 425:
      if (lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 426:
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 427:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 428:
      if (lookahead == 'o') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 429:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 430:
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 431:
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 432:
      if (lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 433:
      if (lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 434:
      if (lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 435:
      if (lookahead == 'o') ADVANCE(597);
      END_STATE();
    case 436:
      if (lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 437:
      if (lookahead == 'p') ADVANCE(689);
      END_STATE();
    case 438:
      if (lookahead == 'p') ADVANCE(796);
      END_STATE();
    case 439:
      if (lookahead == 'p') ADVANCE(715);
      END_STATE();
    case 440:
      if (lookahead == 'p') ADVANCE(578);
      END_STATE();
    case 441:
      if (lookahead == 'p') ADVANCE(343);
      END_STATE();
    case 442:
      if (lookahead == 'q') ADVANCE(740);
      END_STATE();
    case 443:
      if (lookahead == 'q') ADVANCE(681);
      END_STATE();
    case 444:
      if (lookahead == 'q') ADVANCE(725);
      END_STATE();
    case 445:
      if (lookahead == 'q') ADVANCE(593);
      END_STATE();
    case 446:
      if (lookahead == 'q') ADVANCE(594);
      END_STATE();
    case 447:
      if (lookahead == 'q') ADVANCE(595);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(786);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(793);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(803);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(728);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(702);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(788);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(778);
      END_STATE();
    case 457:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 458:
      if (lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 460:
      if (lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(610);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 463:
      if (lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(572);
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 466:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 467:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 471:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 472:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 473:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 474:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 475:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 476:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 477:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 478:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 479:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 480:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 481:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 482:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 483:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 484:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 485:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 486:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 487:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 488:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 489:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 490:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 491:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 492:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 493:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 494:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 495:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 496:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 497:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 498:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 499:
      if (lookahead == 's') ADVANCE(662);
      END_STATE();
    case 500:
      if (lookahead == 's') ADVANCE(776);
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 501:
      if (lookahead == 's') ADVANCE(664);
      END_STATE();
    case 502:
      if (lookahead == 's') ADVANCE(675);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(729);
      END_STATE();
    case 504:
      if (lookahead == 's') ADVANCE(739);
      END_STATE();
    case 505:
      if (lookahead == 's') ADVANCE(741);
      END_STATE();
    case 506:
      if (lookahead == 's') ADVANCE(717);
      END_STATE();
    case 507:
      if (lookahead == 's') ADVANCE(744);
      END_STATE();
    case 508:
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 509:
      if (lookahead == 's') ADVANCE(761);
      END_STATE();
    case 510:
      if (lookahead == 's') ADVANCE(727);
      END_STATE();
    case 511:
      if (lookahead == 's') ADVANCE(734);
      END_STATE();
    case 512:
      if (lookahead == 's') ADVANCE(713);
      END_STATE();
    case 513:
      if (lookahead == 's') ADVANCE(762);
      END_STATE();
    case 514:
      if (lookahead == 's') ADVANCE(742);
      END_STATE();
    case 515:
      if (lookahead == 's') ADVANCE(763);
      END_STATE();
    case 516:
      if (lookahead == 's') ADVANCE(745);
      END_STATE();
    case 517:
      if (lookahead == 's') ADVANCE(764);
      END_STATE();
    case 518:
      if (lookahead == 's') ADVANCE(726);
      END_STATE();
    case 519:
      if (lookahead == 's') ADVANCE(724);
      END_STATE();
    case 520:
      if (lookahead == 's') ADVANCE(735);
      END_STATE();
    case 521:
      if (lookahead == 's') ADVANCE(723);
      END_STATE();
    case 522:
      if (lookahead == 's') ADVANCE(743);
      END_STATE();
    case 523:
      if (lookahead == 's') ADVANCE(750);
      END_STATE();
    case 524:
      if (lookahead == 's') ADVANCE(546);
      END_STATE();
    case 525:
      if (lookahead == 's') ADVANCE(547);
      END_STATE();
    case 526:
      if (lookahead == 's') ADVANCE(548);
      END_STATE();
    case 527:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 528:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 529:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 530:
      if (lookahead == 's') ADVANCE(549);
      END_STATE();
    case 531:
      if (lookahead == 's') ADVANCE(562);
      END_STATE();
    case 532:
      if (lookahead == 's') ADVANCE(552);
      END_STATE();
    case 533:
      if (lookahead == 's') ADVANCE(558);
      END_STATE();
    case 534:
      if (lookahead == 's') ADVANCE(573);
      END_STATE();
    case 535:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 536:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 537:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 538:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 539:
      if (lookahead == 's') ADVANCE(574);
      END_STATE();
    case 540:
      if (lookahead == 's') ADVANCE(541);
      END_STATE();
    case 541:
      if (lookahead == 's') ADVANCE(289);
      END_STATE();
    case 542:
      if (lookahead == 's') ADVANCE(575);
      END_STATE();
    case 543:
      if (lookahead == 's') ADVANCE(569);
      END_STATE();
    case 544:
      if (lookahead == 's') ADVANCE(577);
      END_STATE();
    case 545:
      if (lookahead == 't') ADVANCE(802);
      END_STATE();
    case 546:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 547:
      if (lookahead == 't') ADVANCE(710);
      END_STATE();
    case 548:
      if (lookahead == 't') ADVANCE(758);
      END_STATE();
    case 549:
      if (lookahead == 't') ADVANCE(789);
      END_STATE();
    case 550:
      if (lookahead == 't') ADVANCE(784);
      END_STATE();
    case 551:
      if (lookahead == 't') ADVANCE(684);
      END_STATE();
    case 552:
      if (lookahead == 't') ADVANCE(795);
      END_STATE();
    case 553:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 554:
      if (lookahead == 't') ADVANCE(611);
      END_STATE();
    case 555:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 556:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 557:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 558:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 559:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 560:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 561:
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 563:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 564:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 565:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 566:
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 567:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 568:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 570:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 571:
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 572:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 573:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 574:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 575:
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 576:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 579:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 581:
      if (lookahead == 'u') ADVANCE(556);
      END_STATE();
    case 582:
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 583:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 584:
      if (lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 585:
      if (lookahead == 'u') ADVANCE(438);
      END_STATE();
    case 586:
      if (lookahead == 'u') ADVANCE(487);
      END_STATE();
    case 587:
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 588:
      if (lookahead == 'u') ADVANCE(371);
      END_STATE();
    case 589:
      if (lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 590:
      if (lookahead == 'u') ADVANCE(375);
      END_STATE();
    case 591:
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 592:
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 593:
      if (lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 594:
      if (lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 595:
      if (lookahead == 'u') ADVANCE(311);
      END_STATE();
    case 596:
      if (lookahead == 'u') ADVANCE(484);
      END_STATE();
    case 597:
      if (lookahead == 'u') ADVANCE(491);
      END_STATE();
    case 598:
      if (lookahead == 'u') ADVANCE(306);
      END_STATE();
    case 599:
      if (lookahead == 'u') ADVANCE(579);
      END_STATE();
    case 600:
      if (lookahead == 'v') ADVANCE(678);
      END_STATE();
    case 601:
      if (lookahead == 'v') ADVANCE(682);
      END_STATE();
    case 602:
      if (lookahead == 'v') ADVANCE(305);
      END_STATE();
    case 603:
      if (lookahead == 'v') ADVANCE(153);
      END_STATE();
    case 604:
      if (lookahead == 'v') ADVANCE(196);
      END_STATE();
    case 605:
      if (lookahead == 'w') ADVANCE(403);
      END_STATE();
    case 606:
      if (lookahead == 'x') ADVANCE(738);
      END_STATE();
    case 607:
      if (lookahead == 'x') ADVANCE(193);
      END_STATE();
    case 608:
      if (lookahead == 'y') ADVANCE(714);
      END_STATE();
    case 609:
      if (lookahead == 'y') ADVANCE(765);
      END_STATE();
    case 610:
      if (lookahead == 'y') ADVANCE(698);
      END_STATE();
    case 611:
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 612:
      if (lookahead == 'y') ADVANCE(543);
      END_STATE();
    case 613:
      if (lookahead == 'z') ADVANCE(148);
      END_STATE();
    case 614:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 615:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 616:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 617:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 618:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 619:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(23);
      END_STATE();
    case 620:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(29);
      END_STATE();
    case 621:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(25);
      END_STATE();
    case 622:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(26);
      END_STATE();
    case 623:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(31);
      END_STATE();
    case 624:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 625:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 626:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 627:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(21);
      END_STATE();
    case 628:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(22);
      END_STATE();
    case 629:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(24);
      END_STATE();
    case 630:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(27);
      END_STATE();
    case 631:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 632:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 633:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(28);
      END_STATE();
    case 634:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(32);
      END_STATE();
    case 635:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      END_STATE();
    case 636:
      if (eof) ADVANCE(645);
      ADVANCE_MAP(
        '\n', 646,
        '\r', 1,
        '#', 657,
        '%', 827,
        '*', 808,
        '-', 779,
        'A', 581,
        'B', 582,
        'C', 411,
        'D', 268,
        'E', 356,
        'G', 462,
        'L', 276,
        'M', 407,
        'N', 59,
        'O', 93,
        'P', 60,
        'R', 140,
        'S', 413,
        'U', 50,
        'V', 42,
      );
      if (lookahead == '\\') SKIP(642);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(636);
      END_STATE();
    case 637:
      if (eof) ADVANCE(645);
      ADVANCE_MAP(
        '\n', 647,
        '\r', 2,
        '#', 656,
        '%', 821,
        'A', 1385,
        'B', 1386,
        'C', 1298,
        'D', 1250,
        'E', 1289,
        'G', 1328,
        'L', 1254,
        'M', 1299,
        'N', 1150,
        'O', 1162,
        'P', 1151,
        'R', 1196,
        'S', 1302,
        'U', 1142,
        'V', 1134,
      );
      if (lookahead == '\\') SKIP(643);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 638:
      if (eof) ADVANCE(645);
      ADVANCE_MAP(
        '\n', 648,
        '\r', 3,
        '#', 655,
        '%', 827,
        'A', 1089,
        'B', 1090,
        'C', 1002,
        'D', 954,
        'E', 993,
        'G', 1032,
        'L', 958,
        'M', 1003,
        'N', 855,
        'O', 867,
        'P', 856,
        'R', 901,
        'S', 1006,
        'U', 847,
        'V', 839,
        '\\', 12,
        '\t', 832,
        0x0b, 832,
        '\f', 832,
        ' ', 832,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 639:
      if (eof) ADVANCE(645);
      ADVANCE_MAP(
        '\n', 650,
        '\r', 7,
        '#', 656,
        '%', 827,
        '-', 1130,
        '0', 813,
        'A', 1385,
        'B', 1386,
        'C', 1298,
        'D', 1250,
        'E', 1289,
        'G', 1328,
        'L', 1254,
        'M', 1299,
        'N', 1150,
        'O', 1162,
        'P', 1151,
        'R', 1196,
        'S', 1302,
        'U', 1142,
        'V', 1134,
      );
      if (lookahead == '\\') SKIP(644);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 640:
      if (eof) ADVANCE(645);
      ADVANCE_MAP(
        '#', 657,
        '%', 820,
        '(', 718,
        ')', 719,
        '*', 808,
        ',', 782,
        '-', 779,
        ':', 677,
        'A', 581,
        'B', 582,
        'C', 411,
        'D', 268,
        'E', 356,
        'G', 462,
        'L', 276,
        'M', 407,
        'N', 59,
        'O', 93,
        'P', 60,
        'R', 140,
        'S', 413,
        'U', 50,
        'V', 42,
      );
      if (lookahead == '\\') SKIP(641);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead == 'g') ADVANCE(465);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(168);
      if (lookahead == '}') ADVANCE(1414);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(640);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(780);
      END_STATE();
    case 641:
      if (eof) ADVANCE(645);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(640);
      END_STATE();
    case 642:
      if (eof) ADVANCE(645);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(636);
      END_STATE();
    case 643:
      if (eof) ADVANCE(645);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(637);
      END_STATE();
    case 644:
      if (eof) ADVANCE(645);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(639);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(646);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1113);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(648);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(832);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(650);
      if (lookahead == '\r') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1114);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(651);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(652);
      if (lookahead == '\r') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1115);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(653);
      if (lookahead == '\r') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(654);
      if (lookahead == '\r') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1117);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(658);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '`') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(656);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(657);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(655);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_PERCENTif);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_PERCENTif);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_PERCENTifarch);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_PERCENTifos);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_PERCENTifnarch);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_PERCENTifnos);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == ' ') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(671);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '%') ADVANCE(667);
      if (lookahead == '\\') ADVANCE(670);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(666);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(671);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'd') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(671);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'l') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(671);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'n') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(671);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(666);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(671);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(671);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_PERCENTendif);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_PERCENTelif);
      if (lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_elifarch);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_PERCENTelifos);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_PERCENTelse);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_AutoProv);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(1336);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(1040);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(477);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_AutoReqProv);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_BugUrl);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_BuildRoot);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_BuildSystem);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_DistTag);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_Distribution);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_Epoch);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_Group);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_License);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_ModularityLabel);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_Name);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_NoPatch);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_NoSource);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_Packager);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_Release);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_SourceLicense);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_Summary);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_URL);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_Url);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_VCS);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_Vendor);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_Version);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_pre);
      if (lookahead == 't') ADVANCE(489);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_post);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead == 'u') ADVANCE(361);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_postun);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_pretrans);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_posttrans);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_verify);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_interp);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_Requires);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(1383);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(1087);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(570);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_BuildArchitectures);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_BuildConflicts);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_BuildPrereq);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_BuildRequires);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_DocDir);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_Enhances);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_ExcludeArch);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_ExcludeOS);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_ExclusiveArch);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_ExclusiveOS);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_Obsoletes);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_OrderWithRequires);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_Prefix);
      if (lookahead == 'e') ADVANCE(1346);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_Prefix);
      if (lookahead == 'e') ADVANCE(1050);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_Prefix);
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_Prefixes);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_Prereq);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_Provides);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_Recommends);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_RemovePathPostfixes);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_Suggests);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_Supplements);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_PERCENTdescription);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_DASHn);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_PERCENTpackage);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_PERCENTprep);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_PERCENTgenerate_buildrequires);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_PERCENTconf);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_PERCENTconf);
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_PERCENTbuild);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_PERCENTinstall);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_PERCENTcheck);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_PERCENTclean);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_PERCENTpre);
      if (lookahead == 'p') ADVANCE(749);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead == 'u') ADVANCE(360);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_PERCENTpost);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(362);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_PERCENTpreun);
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_PERCENTpostun);
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_PERCENTpretrans);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_PERCENTposttrans);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_PERCENTpreuntrans);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_PERCENTpostuntrans);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_PERCENTverify);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_PERCENTtriggerprein);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_PERCENTtriggerin);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_PERCENTtriggerun);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_PERCENTtriggerpostun);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_PERCENTfiletriggerin);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_PERCENTfiletriggerun);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_PERCENTfiletriggerpostun);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_PERCENTtransfiletriggerin);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_PERCENTtransfiletriggerun);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_PERCENTtransfiletriggerpostun);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_PERCENTfiles);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_PERCENTdefattr);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_defattr_token1);
      if (lookahead == '.') ADVANCE(635);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(780);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_defattr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(781);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_defattr_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(783);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_PERCENTartifact);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_PERCENTconfig);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_PERCENTdir);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_PERCENTdoc);
      if (lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_PERCENTdocdir);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_PERCENTghost);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_PERCENTlicense);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_PERCENTmissingok);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_PERCENTreadme);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_PERCENTattr);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_filedigest);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_maj);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_mtime);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_owner);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_symlink);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_PERCENTchangelog);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_PERCENTglobal);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_PERCENTdefine);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_PERCENTundefine);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_macro_invocation_token1);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(1409);
      if (lookahead == '.') ADVANCE(1407);
      if (lookahead == '_') ADVANCE(1129);
      if (lookahead == 'x') ADVANCE(1408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(1409);
      if (lookahead == '.') ADVANCE(1407);
      if (lookahead == '_') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(1409);
      if (lookahead == 'x') ADVANCE(1408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(1409);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1415,
        'a', 464,
        'b', 591,
        'c', 253,
        'd', 141,
        'e', 324,
        'f', 301,
        'g', 210,
        'i', 215,
        'l', 315,
        'm', 275,
        'p', 66,
        'r', 142,
        't', 448,
        'u', 397,
        'v', 199,
        '{', 1413,
      );
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1415,
        'a', 464,
        'b', 591,
        'c', 253,
        'd', 141,
        'f', 301,
        'g', 210,
        'i', 215,
        'l', 315,
        'm', 275,
        'p', 66,
        'r', 142,
        't', 448,
        'u', 397,
        'v', 199,
        '{', 1413,
      );
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1415,
        'a', 464,
        'c', 427,
        'd', 204,
        'e', 324,
        'g', 267,
        'i', 222,
        'l', 315,
        'm', 275,
        'r', 142,
        'v', 199,
        '{', 1413,
      );
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1415,
        'a', 464,
        'c', 427,
        'd', 204,
        'e', 381,
        'g', 267,
        'i', 222,
        'l', 315,
        'm', 275,
        'r', 142,
        'v', 199,
        '{', 1413,
      );
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1415,
        'a', 464,
        'c', 427,
        'd', 204,
        'g', 267,
        'l', 315,
        'm', 275,
        'r', 142,
        'v', 199,
        '{', 1413,
      );
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1415,
        'a', 463,
        'c', 427,
        'd', 278,
        'g', 267,
        'l', 315,
        'm', 275,
        'r', 142,
        'v', 199,
        '{', 1413,
      );
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1415,
        'b', 591,
        'c', 254,
        'd', 166,
        'e', 324,
        'f', 301,
        'g', 211,
        'i', 399,
        'p', 66,
        't', 448,
        'u', 397,
        'v', 199,
        '{', 1413,
      );
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1415,
        'b', 591,
        'c', 254,
        'd', 166,
        'f', 301,
        'g', 211,
        'i', 215,
        'p', 66,
        't', 448,
        'u', 397,
        'v', 199,
        '{', 1413,
      );
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1415,
        'b', 591,
        'c', 254,
        'd', 166,
        'f', 301,
        'g', 211,
        'i', 399,
        'p', 66,
        't', 448,
        'u', 397,
        'v', 199,
        '{', 1413,
      );
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '(') ADVANCE(1415);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == '{') ADVANCE(1413);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '(') ADVANCE(1415);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == '{') ADVANCE(1413);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '(') ADVANCE(1415);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == '{') ADVANCE(1413);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      ADVANCE_MAP(
        '\n', 648,
        '\r', 3,
        '#', 655,
        '%', 827,
        'A', 1089,
        'B', 1090,
        'C', 1002,
        'D', 954,
        'E', 993,
        'G', 1032,
        'L', 958,
        'M', 1003,
        'N', 855,
        'O', 867,
        'P', 856,
        'R', 901,
        'S', 1006,
        'U', 847,
        'V', 839,
        '\\', 12,
        '\t', 832,
        0x0b, 832,
        '\f', 832,
        ' ', 832,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '%') ADVANCE(829);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(980);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(34);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(35);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(835);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1411);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(1111);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'A') ADVANCE(1036);
      if (lookahead == 'C') ADVANCE(1019);
      if (lookahead == 'P') ADVANCE(1043);
      if (lookahead == 'R') ADVANCE(909);
      if (lookahead == 'S') ADVANCE(1110);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'A') ADVANCE(1037);
      if (lookahead == 'O') ADVANCE(850);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'A') ADVANCE(1039);
      if (lookahead == 'O') ADVANCE(851);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'C') ADVANCE(849);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'D') ADVANCE(960);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'L') ADVANCE(699);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'L') ADVANCE(859);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'P') ADVANCE(860);
      if (lookahead == 'S') ADVANCE(1018);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'P') ADVANCE(1017);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'P') ADVANCE(1038);
      if (lookahead == 'R') ADVANCE(906);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'P') ADVANCE(865);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'R') ADVANCE(841);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'R') ADVANCE(933);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'S') ADVANCE(701);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'S') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'S') ADVANCE(733);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'T') ADVANCE(858);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'U') ADVANCE(1034);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'W') ADVANCE(962);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(986);
      if (lookahead == 'o') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1111);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(871);
      if (lookahead == 'r') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1111);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1111);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1111);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1111);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1111);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1111);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1111);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1111);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1111);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(1079);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1111);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1111);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(1066);
      if (lookahead == 'r') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(973);
      if (lookahead == 't') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(1007);
      if (lookahead == 'l') ADVANCE(913);
      if (lookahead == 'm') ADVANCE(1005);
      if (lookahead == 'q') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(1082);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(905);
      if (lookahead == 's') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(934);
      if (lookahead == 'o') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1024);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1025);
      if (lookahead == 'o') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1085);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1061);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1062);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(955);
      if (lookahead == 'r') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'g') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'g') ADVANCE(853);
      if (lookahead == 'i') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'g') ADVANCE(942);
      if (lookahead == 'm') ADVANCE(987);
      if (lookahead == 'p') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'g') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'g') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(1063);
      if (lookahead == 'o') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(1042);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(1075);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'k') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(950);
      if (lookahead == 'p') ADVANCE(1011);
      if (lookahead == 'x') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(892);
      if (lookahead == 'r') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(1092);
      if (lookahead == 'u') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'p') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'p') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'q') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'q') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'q') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'q') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'q') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 's') ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(1033);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(1088);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'y') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'y') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'y') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1111);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_string_content);
      ADVANCE_MAP(
        '\n', 647,
        '\r', 2,
        '#', 656,
        '%', 821,
        'A', 1385,
        'B', 1386,
        'C', 1298,
        'D', 1250,
        'E', 1289,
        'G', 1328,
        'L', 1254,
        'M', 1299,
        'N', 1150,
        'O', 1162,
        'P', 1151,
        'R', 1196,
        'S', 1302,
        'U', 1142,
        'V', 1134,
      );
      if (lookahead == '\\') SKIP(616);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_string_content);
      ADVANCE_MAP(
        '\n', 650,
        '\r', 7,
        '#', 656,
        '%', 827,
        '-', 1130,
        '0', 813,
        'A', 1385,
        'B', 1386,
        'C', 1298,
        'D', 1250,
        'E', 1289,
        'G', 1328,
        'L', 1254,
        'M', 1299,
        'N', 1150,
        'O', 1162,
        'P', 1151,
        'R', 1196,
        'S', 1302,
        'U', 1142,
        'V', 1134,
      );
      if (lookahead == '\\') SKIP(618);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(652);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '-') ADVANCE(1130);
      if (lookahead == '0') ADVANCE(813);
      if (lookahead == '\\') SKIP(631);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1115);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(653);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '-') ADVANCE(1229);
      if (lookahead == '\\') SKIP(625);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(654);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '\\') SKIP(626);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(822);
      if (lookahead == '\\') SKIP(619);
      if (lookahead == 'e') ADVANCE(1276);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(824);
      if (lookahead == '\\') SKIP(629);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(829);
      if (lookahead == '-') ADVANCE(1130);
      if (lookahead == '0') ADVANCE(813);
      if (lookahead == '\\') SKIP(621);
      if (lookahead == 'e') ADVANCE(1276);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1120);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '(') ADVANCE(718);
      if (lookahead == '-') ADVANCE(1130);
      if (lookahead == '0') ADVANCE(813);
      if (lookahead == '\\') SKIP(622);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '-') ADVANCE(1130);
      if (lookahead == '0') ADVANCE(813);
      if (lookahead == '\\') SKIP(630);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1122);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '\\') SKIP(633);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(28);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(823);
      if (lookahead == '\\') SKIP(620);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(825);
      if (lookahead == '\\') SKIP(632);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '-') ADVANCE(1130);
      if (lookahead == '0') ADVANCE(813);
      if (lookahead == '\\') SKIP(623);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(31);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1126);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '\\') SKIP(634);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(32);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '.') ADVANCE(1407);
      if (lookahead == '_') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '_' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '.') ADVANCE(1407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '0') ADVANCE(815);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(1332);
      if (lookahead == 'C') ADVANCE(1315);
      if (lookahead == 'P') ADVANCE(1339);
      if (lookahead == 'R') ADVANCE(1204);
      if (lookahead == 'S') ADVANCE(1406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(1333);
      if (lookahead == 'O') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(1335);
      if (lookahead == 'O') ADVANCE(1146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'C') ADVANCE(1144);
      if (lookahead == 'e') ADVANCE(1291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'D') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'L') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'L') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(1155);
      if (lookahead == 'S') ADVANCE(1314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(1313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(1334);
      if (lookahead == 'R') ADVANCE(1202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'R') ADVANCE(1136);
      if (lookahead == 'r') ADVANCE(1270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'R') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'T') ADVANCE(1153);
      if (lookahead == 'r') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'U') ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'W') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1282);
      if (lookahead == 'o') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1410);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1166);
      if (lookahead == 'r') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1410);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1410);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1410);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1410);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1410);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1410);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1410);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1410);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1410);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1410);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1410);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'b') ADVANCE(1362);
      if (lookahead == 'r') ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'b') ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'b') ADVANCE(1391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1269);
      if (lookahead == 't') ADVANCE(1169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1303);
      if (lookahead == 'l') ADVANCE(1208);
      if (lookahead == 'm') ADVANCE(1301);
      if (lookahead == 'q') ADVANCE(1392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 's') ADVANCE(1263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1230);
      if (lookahead == 'o') ADVANCE(1399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1321);
      if (lookahead == 'o') ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1251);
      if (lookahead == 'r') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(1148);
      if (lookahead == 'i') ADVANCE(1273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(1238);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == 'p') ADVANCE(1317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(1216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(1143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1359);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'k') ADVANCE(1158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1246);
      if (lookahead == 'p') ADVANCE(1307);
      if (lookahead == 'x') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1187);
      if (lookahead == 'r') ADVANCE(1360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1388);
      if (lookahead == 'u') ADVANCE(1237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'p') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'p') ADVANCE(1277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(1393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(1396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(1262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(1199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'x') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'x') ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'y') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'y') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'y') ADVANCE(1367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_string_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_string_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_string_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(1410);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1410);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1411);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_PERCENT_LPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 636},
  [2] = {.lex_state = 636},
  [3] = {.lex_state = 636},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 637},
  [6] = {.lex_state = 637},
  [7] = {.lex_state = 637},
  [8] = {.lex_state = 637},
  [9] = {.lex_state = 637},
  [10] = {.lex_state = 637},
  [11] = {.lex_state = 637},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 637},
  [15] = {.lex_state = 637},
  [16] = {.lex_state = 637},
  [17] = {.lex_state = 637},
  [18] = {.lex_state = 637},
  [19] = {.lex_state = 639},
  [20] = {.lex_state = 638},
  [21] = {.lex_state = 638},
  [22] = {.lex_state = 638},
  [23] = {.lex_state = 638},
  [24] = {.lex_state = 638},
  [25] = {.lex_state = 638},
  [26] = {.lex_state = 636},
  [27] = {.lex_state = 636},
  [28] = {.lex_state = 636},
  [29] = {.lex_state = 636},
  [30] = {.lex_state = 636},
  [31] = {.lex_state = 636},
  [32] = {.lex_state = 639},
  [33] = {.lex_state = 636},
  [34] = {.lex_state = 638},
  [35] = {.lex_state = 638},
  [36] = {.lex_state = 638},
  [37] = {.lex_state = 638},
  [38] = {.lex_state = 638},
  [39] = {.lex_state = 638},
  [40] = {.lex_state = 638},
  [41] = {.lex_state = 636},
  [42] = {.lex_state = 636},
  [43] = {.lex_state = 636},
  [44] = {.lex_state = 636},
  [45] = {.lex_state = 636},
  [46] = {.lex_state = 636},
  [47] = {.lex_state = 636},
  [48] = {.lex_state = 636},
  [49] = {.lex_state = 636},
  [50] = {.lex_state = 636},
  [51] = {.lex_state = 636},
  [52] = {.lex_state = 636},
  [53] = {.lex_state = 636},
  [54] = {.lex_state = 636},
  [55] = {.lex_state = 636},
  [56] = {.lex_state = 636},
  [57] = {.lex_state = 636},
  [58] = {.lex_state = 636},
  [59] = {.lex_state = 636},
  [60] = {.lex_state = 636},
  [61] = {.lex_state = 636},
  [62] = {.lex_state = 636},
  [63] = {.lex_state = 636},
  [64] = {.lex_state = 636},
  [65] = {.lex_state = 636},
  [66] = {.lex_state = 636},
  [67] = {.lex_state = 636},
  [68] = {.lex_state = 636},
  [69] = {.lex_state = 636},
  [70] = {.lex_state = 636},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 23},
  [77] = {.lex_state = 23},
  [78] = {.lex_state = 23},
  [79] = {.lex_state = 23},
  [80] = {.lex_state = 23},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 29},
  [84] = {.lex_state = 29},
  [85] = {.lex_state = 29},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 29},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 29},
  [90] = {.lex_state = 24},
  [91] = {.lex_state = 24},
  [92] = {.lex_state = 24},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 23},
  [96] = {.lex_state = 23},
  [97] = {.lex_state = 23},
  [98] = {.lex_state = 30},
  [99] = {.lex_state = 30},
  [100] = {.lex_state = 30},
  [101] = {.lex_state = 30},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 29},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 29},
  [106] = {.lex_state = 29},
  [107] = {.lex_state = 25},
  [108] = {.lex_state = 33},
  [109] = {.lex_state = 33},
  [110] = {.lex_state = 26},
  [111] = {.lex_state = 26},
  [112] = {.lex_state = 33},
  [113] = {.lex_state = 33},
  [114] = {.lex_state = 33},
  [115] = {.lex_state = 31},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 30},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 33},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 27},
  [129] = {.lex_state = 27},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 27},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 27},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 34},
  [140] = {.lex_state = 25},
  [141] = {.lex_state = 34},
  [142] = {.lex_state = 34},
  [143] = {.lex_state = 34},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 34},
  [147] = {.lex_state = 28},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 28},
  [151] = {.lex_state = 34},
  [152] = {.lex_state = 28},
  [153] = {.lex_state = 28},
  [154] = {.lex_state = 28},
  [155] = {.lex_state = 28},
  [156] = {.lex_state = 28},
  [157] = {.lex_state = 28},
  [158] = {.lex_state = 28},
  [159] = {.lex_state = 28},
  [160] = {.lex_state = 28},
  [161] = {.lex_state = 28},
  [162] = {.lex_state = 28},
  [163] = {.lex_state = 28},
  [164] = {.lex_state = 28},
  [165] = {.lex_state = 28},
  [166] = {.lex_state = 28},
  [167] = {.lex_state = 28},
  [168] = {.lex_state = 28},
  [169] = {.lex_state = 28},
  [170] = {.lex_state = 28},
  [171] = {.lex_state = 28},
  [172] = {.lex_state = 28},
  [173] = {.lex_state = 33},
  [174] = {.lex_state = 33},
  [175] = {.lex_state = 33},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 28},
  [178] = {.lex_state = 33},
  [179] = {.lex_state = 28},
  [180] = {.lex_state = 33},
  [181] = {.lex_state = 33},
  [182] = {.lex_state = 33},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 31},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 27},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 11},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 11},
  [228] = {.lex_state = 11},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 11},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 34},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 34},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 34},
  [243] = {.lex_state = 34},
  [244] = {.lex_state = 34},
  [245] = {.lex_state = 34},
  [246] = {.lex_state = 34},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 28},
  [250] = {.lex_state = 28},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 6},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 6},
  [255] = {.lex_state = 19},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 35},
  [258] = {.lex_state = 6},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 6},
  [263] = {.lex_state = 6},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 6},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 19},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 18},
  [272] = {.lex_state = 18},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 35},
  [275] = {.lex_state = 35},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 18},
  [278] = {.lex_state = 6},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 18},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 18},
  [287] = {.lex_state = 18},
  [288] = {.lex_state = 18},
  [289] = {.lex_state = 18},
  [290] = {.lex_state = 18},
  [291] = {.lex_state = 18},
  [292] = {.lex_state = 19},
  [293] = {.lex_state = 19},
  [294] = {.lex_state = 19},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 19},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 636},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 18},
  [304] = {.lex_state = 18},
  [305] = {.lex_state = 18},
  [306] = {.lex_state = 636},
  [307] = {.lex_state = 636},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 636},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 636},
  [313] = {.lex_state = 636},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 636},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 18},
  [319] = {.lex_state = 18},
  [320] = {.lex_state = 636},
  [321] = {.lex_state = 636},
  [322] = {.lex_state = 636},
  [323] = {.lex_state = 636},
  [324] = {.lex_state = 636},
  [325] = {.lex_state = 636},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 18},
  [328] = {.lex_state = 636},
  [329] = {.lex_state = 18},
  [330] = {.lex_state = 18},
  [331] = {.lex_state = 18},
  [332] = {.lex_state = 636},
  [333] = {.lex_state = 636},
  [334] = {.lex_state = 636},
  [335] = {.lex_state = 666},
  [336] = {.lex_state = 636},
  [337] = {.lex_state = 636},
  [338] = {.lex_state = 18},
  [339] = {.lex_state = 636},
  [340] = {.lex_state = 636},
  [341] = {.lex_state = 19},
  [342] = {.lex_state = 636},
  [343] = {.lex_state = 636},
  [344] = {.lex_state = 636},
  [345] = {.lex_state = 636},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 636},
  [348] = {.lex_state = 636},
  [349] = {.lex_state = 636},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 636},
  [352] = {.lex_state = 636},
  [353] = {.lex_state = 636},
  [354] = {.lex_state = 19},
  [355] = {.lex_state = 636},
  [356] = {.lex_state = 636},
  [357] = {.lex_state = 636},
  [358] = {.lex_state = 18},
  [359] = {.lex_state = 18},
  [360] = {.lex_state = 636},
  [361] = {.lex_state = 636},
  [362] = {.lex_state = 636},
  [363] = {.lex_state = 636},
  [364] = {.lex_state = 636},
  [365] = {.lex_state = 636},
  [366] = {.lex_state = 636},
  [367] = {.lex_state = 636},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 636},
  [370] = {.lex_state = 636},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 636},
  [373] = {.lex_state = 636},
  [374] = {.lex_state = 18},
  [375] = {.lex_state = 18},
  [376] = {.lex_state = 18},
  [377] = {.lex_state = 636},
  [378] = {.lex_state = 32},
  [379] = {.lex_state = 636},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 636},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 636},
  [384] = {.lex_state = 18},
  [385] = {.lex_state = 18},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 636},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 18},
  [391] = {.lex_state = 18},
  [392] = {.lex_state = 666},
  [393] = {.lex_state = 636},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 18},
  [397] = {.lex_state = 18},
  [398] = {.lex_state = 636},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 18},
  [403] = {.lex_state = 18},
  [404] = {.lex_state = 636},
  [405] = {.lex_state = 636},
  [406] = {.lex_state = 18},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 18},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 636},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 18},
  [414] = {.lex_state = 636},
  [415] = {.lex_state = 636},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 18},
  [419] = {.lex_state = 636},
  [420] = {.lex_state = 18},
  [421] = {.lex_state = 18},
  [422] = {.lex_state = 22},
  [423] = {.lex_state = 666},
  [424] = {.lex_state = 18},
  [425] = {.lex_state = 636},
  [426] = {.lex_state = 22},
  [427] = {.lex_state = 636},
  [428] = {.lex_state = 32},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 32},
  [431] = {.lex_state = 32},
  [432] = {.lex_state = 636},
  [433] = {.lex_state = 636},
  [434] = {.lex_state = 32},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 636},
  [437] = {.lex_state = 18},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 636},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 18},
  [443] = {.lex_state = 636},
  [444] = {.lex_state = 636},
  [445] = {.lex_state = 32},
  [446] = {.lex_state = 636},
  [447] = {.lex_state = 32},
  [448] = {.lex_state = 32},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 18},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 18},
  [453] = {.lex_state = 636},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 32},
  [456] = {.lex_state = 22},
  [457] = {.lex_state = 32},
  [458] = {.lex_state = 18},
  [459] = {.lex_state = 22},
  [460] = {.lex_state = 18},
  [461] = {.lex_state = 32},
  [462] = {.lex_state = 32},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 18},
  [465] = {.lex_state = 32},
  [466] = {.lex_state = 32},
  [467] = {.lex_state = 636},
  [468] = {.lex_state = 18},
  [469] = {.lex_state = 32},
  [470] = {.lex_state = 32},
  [471] = {.lex_state = 636},
  [472] = {.lex_state = 18},
  [473] = {.lex_state = 32},
  [474] = {.lex_state = 32},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 18},
  [477] = {.lex_state = 32},
  [478] = {.lex_state = 32},
  [479] = {.lex_state = 636},
  [480] = {.lex_state = 18},
  [481] = {.lex_state = 32},
  [482] = {.lex_state = 32},
  [483] = {.lex_state = 18},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 18},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 22},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 22},
  [490] = {.lex_state = 22},
  [491] = {.lex_state = 636},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 636},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 666},
  [497] = {.lex_state = 22},
  [498] = {.lex_state = 666},
  [499] = {.lex_state = 22},
  [500] = {.lex_state = 22},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 636},
  [505] = {.lex_state = 636},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 19},
  [508] = {.lex_state = 19},
  [509] = {.lex_state = 19},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PERCENTif] = ACTIONS(1),
    [anon_sym_PERCENTifarch] = ACTIONS(1),
    [anon_sym_PERCENTifos] = ACTIONS(1),
    [anon_sym_PERCENTifnarch] = ACTIONS(1),
    [anon_sym_PERCENTifnos] = ACTIONS(1),
    [anon_sym_PERCENTendif] = ACTIONS(1),
    [anon_sym_PERCENTelif] = ACTIONS(1),
    [anon_sym_elifarch] = ACTIONS(1),
    [anon_sym_PERCENTelifos] = ACTIONS(1),
    [anon_sym_PERCENTelse] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AutoProv] = ACTIONS(1),
    [anon_sym_AutoReq] = ACTIONS(1),
    [anon_sym_AutoReqProv] = ACTIONS(1),
    [anon_sym_BugUrl] = ACTIONS(1),
    [anon_sym_BuildRoot] = ACTIONS(1),
    [anon_sym_BuildSystem] = ACTIONS(1),
    [anon_sym_DistTag] = ACTIONS(1),
    [anon_sym_Distribution] = ACTIONS(1),
    [anon_sym_Epoch] = ACTIONS(1),
    [anon_sym_Group] = ACTIONS(1),
    [anon_sym_License] = ACTIONS(1),
    [anon_sym_ModularityLabel] = ACTIONS(1),
    [anon_sym_Name] = ACTIONS(1),
    [anon_sym_NoPatch] = ACTIONS(1),
    [anon_sym_NoSource] = ACTIONS(1),
    [anon_sym_Packager] = ACTIONS(1),
    [anon_sym_Release] = ACTIONS(1),
    [anon_sym_SourceLicense] = ACTIONS(1),
    [anon_sym_Summary] = ACTIONS(1),
    [anon_sym_URL] = ACTIONS(1),
    [anon_sym_Url] = ACTIONS(1),
    [anon_sym_VCS] = ACTIONS(1),
    [anon_sym_Vendor] = ACTIONS(1),
    [anon_sym_Version] = ACTIONS(1),
    [aux_sym_tag_token1] = ACTIONS(1),
    [aux_sym_tag_token2] = ACTIONS(1),
    [anon_sym_pre] = ACTIONS(1),
    [anon_sym_post] = ACTIONS(1),
    [anon_sym_postun] = ACTIONS(1),
    [anon_sym_pretrans] = ACTIONS(1),
    [anon_sym_posttrans] = ACTIONS(1),
    [anon_sym_verify] = ACTIONS(1),
    [anon_sym_interp] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_Requires] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BuildArch] = ACTIONS(1),
    [anon_sym_BuildArchitectures] = ACTIONS(1),
    [anon_sym_BuildConflicts] = ACTIONS(1),
    [anon_sym_BuildPrereq] = ACTIONS(1),
    [anon_sym_BuildRequires] = ACTIONS(1),
    [anon_sym_Conflicts] = ACTIONS(1),
    [anon_sym_DocDir] = ACTIONS(1),
    [anon_sym_Enhances] = ACTIONS(1),
    [anon_sym_ExcludeArch] = ACTIONS(1),
    [anon_sym_ExcludeOS] = ACTIONS(1),
    [anon_sym_ExclusiveArch] = ACTIONS(1),
    [anon_sym_ExclusiveOS] = ACTIONS(1),
    [anon_sym_Obsoletes] = ACTIONS(1),
    [anon_sym_OrderWithRequires] = ACTIONS(1),
    [anon_sym_Prefix] = ACTIONS(1),
    [anon_sym_Prefixes] = ACTIONS(1),
    [anon_sym_Prereq] = ACTIONS(1),
    [anon_sym_Provides] = ACTIONS(1),
    [anon_sym_Recommends] = ACTIONS(1),
    [anon_sym_RemovePathPostfixes] = ACTIONS(1),
    [anon_sym_Suggests] = ACTIONS(1),
    [anon_sym_Supplements] = ACTIONS(1),
    [anon_sym_PERCENTdescription] = ACTIONS(1),
    [anon_sym_PERCENTpackage] = ACTIONS(1),
    [anon_sym_PERCENTprep] = ACTIONS(1),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(1),
    [anon_sym_PERCENTconf] = ACTIONS(1),
    [anon_sym_PERCENTbuild] = ACTIONS(1),
    [anon_sym_PERCENTinstall] = ACTIONS(1),
    [anon_sym_PERCENTcheck] = ACTIONS(1),
    [anon_sym_PERCENTclean] = ACTIONS(1),
    [anon_sym_PERCENTpre] = ACTIONS(1),
    [anon_sym_PERCENTpost] = ACTIONS(1),
    [anon_sym_PERCENTpreun] = ACTIONS(1),
    [anon_sym_PERCENTpostun] = ACTIONS(1),
    [anon_sym_PERCENTpretrans] = ACTIONS(1),
    [anon_sym_PERCENTposttrans] = ACTIONS(1),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(1),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(1),
    [anon_sym_PERCENTverify] = ACTIONS(1),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(1),
    [anon_sym_PERCENTtriggerin] = ACTIONS(1),
    [anon_sym_PERCENTtriggerun] = ACTIONS(1),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(1),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(1),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(1),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(1),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(1),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(1),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(1),
    [anon_sym_PERCENTfiles] = ACTIONS(1),
    [anon_sym_PERCENTdefattr] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_defattr_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PERCENTartifact] = ACTIONS(1),
    [anon_sym_PERCENTconfig] = ACTIONS(1),
    [anon_sym_PERCENTdir] = ACTIONS(1),
    [anon_sym_PERCENTdoc] = ACTIONS(1),
    [anon_sym_PERCENTdocdir] = ACTIONS(1),
    [anon_sym_PERCENTghost] = ACTIONS(1),
    [anon_sym_PERCENTlicense] = ACTIONS(1),
    [anon_sym_PERCENTmissingok] = ACTIONS(1),
    [anon_sym_PERCENTreadme] = ACTIONS(1),
    [anon_sym_PERCENTattr] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_filedigest] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_maj] = ACTIONS(1),
    [anon_sym_md5] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_mtime] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_owner] = ACTIONS(1),
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_symlink] = ACTIONS(1),
    [anon_sym_RPAREN2] = ACTIONS(1),
    [anon_sym_PERCENTchangelog] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENTglobal] = ACTIONS(1),
    [anon_sym_PERCENTdefine] = ACTIONS(1),
    [anon_sym_PERCENTundefine] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_spec] = STATE(308),
    [sym__statements] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_preamble] = STATE(3),
    [sym_tags] = STATE(61),
    [sym_tag] = STATE(309),
    [sym_dependency_tag] = STATE(309),
    [sym_description] = STATE(3),
    [sym_subsection] = STATE(3),
    [sym_subsection_package] = STATE(273),
    [sym_prep_scriptlet] = STATE(3),
    [sym_generate_buildrequires] = STATE(3),
    [sym_conf_scriptlet] = STATE(3),
    [sym_build_scriptlet] = STATE(3),
    [sym_install_scriptlet] = STATE(3),
    [sym_check_scriptlet] = STATE(3),
    [sym_clean_scriptlet] = STATE(3),
    [sym__runtime_scriptlet] = STATE(3),
    [sym__triggers] = STATE(3),
    [sym__file_triggers] = STATE(3),
    [sym_files] = STATE(3),
    [sym_changelog] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym_macro_undefinition] = STATE(3),
    [sym_macro_invocation] = STATE(3),
    [sym__macro_expansion] = STATE(3),
    [sym_simple_expansion] = STATE(19),
    [sym_full_expansion] = STATE(3),
    [sym_shell_expansion] = STATE(3),
    [aux_sym_spec_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__simple_statements_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(11),
    [anon_sym_PERCENTifarch] = ACTIONS(11),
    [anon_sym_PERCENTifos] = ACTIONS(11),
    [anon_sym_PERCENTifnarch] = ACTIONS(11),
    [anon_sym_PERCENTifnos] = ACTIONS(11),
    [anon_sym_AutoProv] = ACTIONS(13),
    [anon_sym_AutoReq] = ACTIONS(13),
    [anon_sym_AutoReqProv] = ACTIONS(13),
    [anon_sym_BugUrl] = ACTIONS(13),
    [anon_sym_BuildRoot] = ACTIONS(13),
    [anon_sym_BuildSystem] = ACTIONS(13),
    [anon_sym_DistTag] = ACTIONS(13),
    [anon_sym_Distribution] = ACTIONS(13),
    [anon_sym_Epoch] = ACTIONS(13),
    [anon_sym_Group] = ACTIONS(13),
    [anon_sym_License] = ACTIONS(13),
    [anon_sym_ModularityLabel] = ACTIONS(13),
    [anon_sym_Name] = ACTIONS(13),
    [anon_sym_NoPatch] = ACTIONS(13),
    [anon_sym_NoSource] = ACTIONS(13),
    [anon_sym_Packager] = ACTIONS(13),
    [anon_sym_Release] = ACTIONS(13),
    [anon_sym_SourceLicense] = ACTIONS(13),
    [anon_sym_Summary] = ACTIONS(13),
    [anon_sym_URL] = ACTIONS(13),
    [anon_sym_Url] = ACTIONS(13),
    [anon_sym_VCS] = ACTIONS(13),
    [anon_sym_Vendor] = ACTIONS(13),
    [anon_sym_Version] = ACTIONS(13),
    [aux_sym_tag_token1] = ACTIONS(13),
    [aux_sym_tag_token2] = ACTIONS(13),
    [anon_sym_Requires] = ACTIONS(15),
    [anon_sym_BuildArch] = ACTIONS(17),
    [anon_sym_BuildArchitectures] = ACTIONS(17),
    [anon_sym_BuildConflicts] = ACTIONS(17),
    [anon_sym_BuildPrereq] = ACTIONS(17),
    [anon_sym_BuildRequires] = ACTIONS(17),
    [anon_sym_Conflicts] = ACTIONS(17),
    [anon_sym_DocDir] = ACTIONS(17),
    [anon_sym_Enhances] = ACTIONS(17),
    [anon_sym_ExcludeArch] = ACTIONS(17),
    [anon_sym_ExcludeOS] = ACTIONS(17),
    [anon_sym_ExclusiveArch] = ACTIONS(17),
    [anon_sym_ExclusiveOS] = ACTIONS(17),
    [anon_sym_Obsoletes] = ACTIONS(17),
    [anon_sym_OrderWithRequires] = ACTIONS(17),
    [anon_sym_Prefix] = ACTIONS(17),
    [anon_sym_Prefixes] = ACTIONS(17),
    [anon_sym_Prereq] = ACTIONS(17),
    [anon_sym_Provides] = ACTIONS(17),
    [anon_sym_Recommends] = ACTIONS(17),
    [anon_sym_RemovePathPostfixes] = ACTIONS(17),
    [anon_sym_Suggests] = ACTIONS(17),
    [anon_sym_Supplements] = ACTIONS(17),
    [anon_sym_PERCENTdescription] = ACTIONS(19),
    [anon_sym_PERCENTpackage] = ACTIONS(21),
    [anon_sym_PERCENTprep] = ACTIONS(23),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(25),
    [anon_sym_PERCENTconf] = ACTIONS(27),
    [anon_sym_PERCENTbuild] = ACTIONS(29),
    [anon_sym_PERCENTinstall] = ACTIONS(31),
    [anon_sym_PERCENTcheck] = ACTIONS(33),
    [anon_sym_PERCENTclean] = ACTIONS(35),
    [anon_sym_PERCENTpre] = ACTIONS(37),
    [anon_sym_PERCENTpost] = ACTIONS(37),
    [anon_sym_PERCENTpreun] = ACTIONS(37),
    [anon_sym_PERCENTpostun] = ACTIONS(37),
    [anon_sym_PERCENTpretrans] = ACTIONS(37),
    [anon_sym_PERCENTposttrans] = ACTIONS(37),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(37),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(37),
    [anon_sym_PERCENTverify] = ACTIONS(37),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(37),
    [anon_sym_PERCENTtriggerin] = ACTIONS(37),
    [anon_sym_PERCENTtriggerun] = ACTIONS(37),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(37),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(37),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(37),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(37),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(37),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(37),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(37),
    [anon_sym_PERCENTfiles] = ACTIONS(39),
    [anon_sym_PERCENTchangelog] = ACTIONS(41),
    [anon_sym_PERCENTglobal] = ACTIONS(43),
    [anon_sym_PERCENTdefine] = ACTIONS(43),
    [anon_sym_PERCENTundefine] = ACTIONS(45),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(49),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(51),
  },
  [2] = {
    [sym__statements] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_preamble] = STATE(2),
    [sym_tags] = STATE(61),
    [sym_tag] = STATE(309),
    [sym_dependency_tag] = STATE(309),
    [sym_description] = STATE(2),
    [sym_subsection] = STATE(2),
    [sym_subsection_package] = STATE(273),
    [sym_prep_scriptlet] = STATE(2),
    [sym_generate_buildrequires] = STATE(2),
    [sym_conf_scriptlet] = STATE(2),
    [sym_build_scriptlet] = STATE(2),
    [sym_install_scriptlet] = STATE(2),
    [sym_check_scriptlet] = STATE(2),
    [sym_clean_scriptlet] = STATE(2),
    [sym__runtime_scriptlet] = STATE(2),
    [sym__triggers] = STATE(2),
    [sym__file_triggers] = STATE(2),
    [sym_files] = STATE(2),
    [sym_changelog] = STATE(2),
    [sym_macro_definition] = STATE(2),
    [sym_macro_undefinition] = STATE(2),
    [sym_macro_invocation] = STATE(2),
    [sym__macro_expansion] = STATE(2),
    [sym_simple_expansion] = STATE(19),
    [sym_full_expansion] = STATE(2),
    [sym_shell_expansion] = STATE(2),
    [aux_sym_spec_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(53),
    [aux_sym__simple_statements_token1] = ACTIONS(55),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(58),
    [anon_sym_PERCENTifarch] = ACTIONS(58),
    [anon_sym_PERCENTifos] = ACTIONS(58),
    [anon_sym_PERCENTifnarch] = ACTIONS(58),
    [anon_sym_PERCENTifnos] = ACTIONS(58),
    [anon_sym_AutoProv] = ACTIONS(61),
    [anon_sym_AutoReq] = ACTIONS(61),
    [anon_sym_AutoReqProv] = ACTIONS(61),
    [anon_sym_BugUrl] = ACTIONS(61),
    [anon_sym_BuildRoot] = ACTIONS(61),
    [anon_sym_BuildSystem] = ACTIONS(61),
    [anon_sym_DistTag] = ACTIONS(61),
    [anon_sym_Distribution] = ACTIONS(61),
    [anon_sym_Epoch] = ACTIONS(61),
    [anon_sym_Group] = ACTIONS(61),
    [anon_sym_License] = ACTIONS(61),
    [anon_sym_ModularityLabel] = ACTIONS(61),
    [anon_sym_Name] = ACTIONS(61),
    [anon_sym_NoPatch] = ACTIONS(61),
    [anon_sym_NoSource] = ACTIONS(61),
    [anon_sym_Packager] = ACTIONS(61),
    [anon_sym_Release] = ACTIONS(61),
    [anon_sym_SourceLicense] = ACTIONS(61),
    [anon_sym_Summary] = ACTIONS(61),
    [anon_sym_URL] = ACTIONS(61),
    [anon_sym_Url] = ACTIONS(61),
    [anon_sym_VCS] = ACTIONS(61),
    [anon_sym_Vendor] = ACTIONS(61),
    [anon_sym_Version] = ACTIONS(61),
    [aux_sym_tag_token1] = ACTIONS(61),
    [aux_sym_tag_token2] = ACTIONS(61),
    [anon_sym_Requires] = ACTIONS(64),
    [anon_sym_BuildArch] = ACTIONS(67),
    [anon_sym_BuildArchitectures] = ACTIONS(67),
    [anon_sym_BuildConflicts] = ACTIONS(67),
    [anon_sym_BuildPrereq] = ACTIONS(67),
    [anon_sym_BuildRequires] = ACTIONS(67),
    [anon_sym_Conflicts] = ACTIONS(67),
    [anon_sym_DocDir] = ACTIONS(67),
    [anon_sym_Enhances] = ACTIONS(67),
    [anon_sym_ExcludeArch] = ACTIONS(67),
    [anon_sym_ExcludeOS] = ACTIONS(67),
    [anon_sym_ExclusiveArch] = ACTIONS(67),
    [anon_sym_ExclusiveOS] = ACTIONS(67),
    [anon_sym_Obsoletes] = ACTIONS(67),
    [anon_sym_OrderWithRequires] = ACTIONS(67),
    [anon_sym_Prefix] = ACTIONS(67),
    [anon_sym_Prefixes] = ACTIONS(67),
    [anon_sym_Prereq] = ACTIONS(67),
    [anon_sym_Provides] = ACTIONS(67),
    [anon_sym_Recommends] = ACTIONS(67),
    [anon_sym_RemovePathPostfixes] = ACTIONS(67),
    [anon_sym_Suggests] = ACTIONS(67),
    [anon_sym_Supplements] = ACTIONS(67),
    [anon_sym_PERCENTdescription] = ACTIONS(70),
    [anon_sym_PERCENTpackage] = ACTIONS(73),
    [anon_sym_PERCENTprep] = ACTIONS(76),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(79),
    [anon_sym_PERCENTconf] = ACTIONS(82),
    [anon_sym_PERCENTbuild] = ACTIONS(85),
    [anon_sym_PERCENTinstall] = ACTIONS(88),
    [anon_sym_PERCENTcheck] = ACTIONS(91),
    [anon_sym_PERCENTclean] = ACTIONS(94),
    [anon_sym_PERCENTpre] = ACTIONS(97),
    [anon_sym_PERCENTpost] = ACTIONS(97),
    [anon_sym_PERCENTpreun] = ACTIONS(97),
    [anon_sym_PERCENTpostun] = ACTIONS(97),
    [anon_sym_PERCENTpretrans] = ACTIONS(97),
    [anon_sym_PERCENTposttrans] = ACTIONS(97),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(97),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(97),
    [anon_sym_PERCENTverify] = ACTIONS(97),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(97),
    [anon_sym_PERCENTtriggerin] = ACTIONS(97),
    [anon_sym_PERCENTtriggerun] = ACTIONS(97),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(97),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(97),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(97),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(97),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(97),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(97),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(97),
    [anon_sym_PERCENTfiles] = ACTIONS(100),
    [anon_sym_PERCENTchangelog] = ACTIONS(103),
    [anon_sym_PERCENTglobal] = ACTIONS(106),
    [anon_sym_PERCENTdefine] = ACTIONS(106),
    [anon_sym_PERCENTundefine] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(112),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(115),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(118),
  },
  [3] = {
    [sym__statements] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_preamble] = STATE(2),
    [sym_tags] = STATE(61),
    [sym_tag] = STATE(309),
    [sym_dependency_tag] = STATE(309),
    [sym_description] = STATE(2),
    [sym_subsection] = STATE(2),
    [sym_subsection_package] = STATE(273),
    [sym_prep_scriptlet] = STATE(2),
    [sym_generate_buildrequires] = STATE(2),
    [sym_conf_scriptlet] = STATE(2),
    [sym_build_scriptlet] = STATE(2),
    [sym_install_scriptlet] = STATE(2),
    [sym_check_scriptlet] = STATE(2),
    [sym_clean_scriptlet] = STATE(2),
    [sym__runtime_scriptlet] = STATE(2),
    [sym__triggers] = STATE(2),
    [sym__file_triggers] = STATE(2),
    [sym_files] = STATE(2),
    [sym_changelog] = STATE(2),
    [sym_macro_definition] = STATE(2),
    [sym_macro_undefinition] = STATE(2),
    [sym_macro_invocation] = STATE(2),
    [sym__macro_expansion] = STATE(2),
    [sym_simple_expansion] = STATE(19),
    [sym_full_expansion] = STATE(2),
    [sym_shell_expansion] = STATE(2),
    [aux_sym_spec_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(121),
    [aux_sym__simple_statements_token1] = ACTIONS(123),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(11),
    [anon_sym_PERCENTifarch] = ACTIONS(11),
    [anon_sym_PERCENTifos] = ACTIONS(11),
    [anon_sym_PERCENTifnarch] = ACTIONS(11),
    [anon_sym_PERCENTifnos] = ACTIONS(11),
    [anon_sym_AutoProv] = ACTIONS(13),
    [anon_sym_AutoReq] = ACTIONS(13),
    [anon_sym_AutoReqProv] = ACTIONS(13),
    [anon_sym_BugUrl] = ACTIONS(13),
    [anon_sym_BuildRoot] = ACTIONS(13),
    [anon_sym_BuildSystem] = ACTIONS(13),
    [anon_sym_DistTag] = ACTIONS(13),
    [anon_sym_Distribution] = ACTIONS(13),
    [anon_sym_Epoch] = ACTIONS(13),
    [anon_sym_Group] = ACTIONS(13),
    [anon_sym_License] = ACTIONS(13),
    [anon_sym_ModularityLabel] = ACTIONS(13),
    [anon_sym_Name] = ACTIONS(13),
    [anon_sym_NoPatch] = ACTIONS(13),
    [anon_sym_NoSource] = ACTIONS(13),
    [anon_sym_Packager] = ACTIONS(13),
    [anon_sym_Release] = ACTIONS(13),
    [anon_sym_SourceLicense] = ACTIONS(13),
    [anon_sym_Summary] = ACTIONS(13),
    [anon_sym_URL] = ACTIONS(13),
    [anon_sym_Url] = ACTIONS(13),
    [anon_sym_VCS] = ACTIONS(13),
    [anon_sym_Vendor] = ACTIONS(13),
    [anon_sym_Version] = ACTIONS(13),
    [aux_sym_tag_token1] = ACTIONS(13),
    [aux_sym_tag_token2] = ACTIONS(13),
    [anon_sym_Requires] = ACTIONS(15),
    [anon_sym_BuildArch] = ACTIONS(17),
    [anon_sym_BuildArchitectures] = ACTIONS(17),
    [anon_sym_BuildConflicts] = ACTIONS(17),
    [anon_sym_BuildPrereq] = ACTIONS(17),
    [anon_sym_BuildRequires] = ACTIONS(17),
    [anon_sym_Conflicts] = ACTIONS(17),
    [anon_sym_DocDir] = ACTIONS(17),
    [anon_sym_Enhances] = ACTIONS(17),
    [anon_sym_ExcludeArch] = ACTIONS(17),
    [anon_sym_ExcludeOS] = ACTIONS(17),
    [anon_sym_ExclusiveArch] = ACTIONS(17),
    [anon_sym_ExclusiveOS] = ACTIONS(17),
    [anon_sym_Obsoletes] = ACTIONS(17),
    [anon_sym_OrderWithRequires] = ACTIONS(17),
    [anon_sym_Prefix] = ACTIONS(17),
    [anon_sym_Prefixes] = ACTIONS(17),
    [anon_sym_Prereq] = ACTIONS(17),
    [anon_sym_Provides] = ACTIONS(17),
    [anon_sym_Recommends] = ACTIONS(17),
    [anon_sym_RemovePathPostfixes] = ACTIONS(17),
    [anon_sym_Suggests] = ACTIONS(17),
    [anon_sym_Supplements] = ACTIONS(17),
    [anon_sym_PERCENTdescription] = ACTIONS(19),
    [anon_sym_PERCENTpackage] = ACTIONS(21),
    [anon_sym_PERCENTprep] = ACTIONS(23),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(25),
    [anon_sym_PERCENTconf] = ACTIONS(27),
    [anon_sym_PERCENTbuild] = ACTIONS(29),
    [anon_sym_PERCENTinstall] = ACTIONS(31),
    [anon_sym_PERCENTcheck] = ACTIONS(33),
    [anon_sym_PERCENTclean] = ACTIONS(35),
    [anon_sym_PERCENTpre] = ACTIONS(125),
    [anon_sym_PERCENTpost] = ACTIONS(125),
    [anon_sym_PERCENTpreun] = ACTIONS(125),
    [anon_sym_PERCENTpostun] = ACTIONS(125),
    [anon_sym_PERCENTpretrans] = ACTIONS(125),
    [anon_sym_PERCENTposttrans] = ACTIONS(125),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(125),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(125),
    [anon_sym_PERCENTverify] = ACTIONS(125),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(125),
    [anon_sym_PERCENTtriggerin] = ACTIONS(125),
    [anon_sym_PERCENTtriggerun] = ACTIONS(125),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(125),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(125),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(125),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(125),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(125),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(125),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(125),
    [anon_sym_PERCENTfiles] = ACTIONS(39),
    [anon_sym_PERCENTchangelog] = ACTIONS(41),
    [anon_sym_PERCENTglobal] = ACTIONS(43),
    [anon_sym_PERCENTdefine] = ACTIONS(43),
    [anon_sym_PERCENTundefine] = ACTIONS(45),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(49),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(51),
  },
  [4] = {
    [sym_elif_clause] = STATE(217),
    [sym_else_clause] = STATE(399),
    [sym_preamble] = STATE(184),
    [sym_tags] = STATE(74),
    [sym_tag] = STATE(484),
    [sym_dependency_tag] = STATE(484),
    [sym_description] = STATE(184),
    [sym_subsection] = STATE(184),
    [sym_subsection_package] = STATE(276),
    [sym_prep_scriptlet] = STATE(184),
    [sym_generate_buildrequires] = STATE(184),
    [sym_conf_scriptlet] = STATE(184),
    [sym_build_scriptlet] = STATE(184),
    [sym_install_scriptlet] = STATE(184),
    [sym_check_scriptlet] = STATE(184),
    [sym_clean_scriptlet] = STATE(184),
    [sym__runtime_scriptlet] = STATE(184),
    [sym__triggers] = STATE(184),
    [sym__file_triggers] = STATE(184),
    [sym_files] = STATE(184),
    [sym_changelog] = STATE(184),
    [sym_macro_definition] = STATE(184),
    [sym_macro_undefinition] = STATE(184),
    [sym_macro_invocation] = STATE(184),
    [sym__macro_expansion] = STATE(184),
    [sym_simple_expansion] = STATE(107),
    [sym_full_expansion] = STATE(184),
    [sym_shell_expansion] = STATE(184),
    [aux_sym_if_statement_repeat1] = STATE(188),
    [aux_sym__simple_statements_token1] = ACTIONS(127),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTendif] = ACTIONS(129),
    [anon_sym_PERCENTelif] = ACTIONS(131),
    [anon_sym_elifarch] = ACTIONS(131),
    [anon_sym_PERCENTelifos] = ACTIONS(131),
    [anon_sym_PERCENTelse] = ACTIONS(133),
    [anon_sym_AutoProv] = ACTIONS(13),
    [anon_sym_AutoReq] = ACTIONS(13),
    [anon_sym_AutoReqProv] = ACTIONS(13),
    [anon_sym_BugUrl] = ACTIONS(13),
    [anon_sym_BuildRoot] = ACTIONS(13),
    [anon_sym_BuildSystem] = ACTIONS(13),
    [anon_sym_DistTag] = ACTIONS(13),
    [anon_sym_Distribution] = ACTIONS(13),
    [anon_sym_Epoch] = ACTIONS(13),
    [anon_sym_Group] = ACTIONS(13),
    [anon_sym_License] = ACTIONS(13),
    [anon_sym_ModularityLabel] = ACTIONS(13),
    [anon_sym_Name] = ACTIONS(13),
    [anon_sym_NoPatch] = ACTIONS(13),
    [anon_sym_NoSource] = ACTIONS(13),
    [anon_sym_Packager] = ACTIONS(13),
    [anon_sym_Release] = ACTIONS(13),
    [anon_sym_SourceLicense] = ACTIONS(13),
    [anon_sym_Summary] = ACTIONS(13),
    [anon_sym_URL] = ACTIONS(13),
    [anon_sym_Url] = ACTIONS(13),
    [anon_sym_VCS] = ACTIONS(13),
    [anon_sym_Vendor] = ACTIONS(13),
    [anon_sym_Version] = ACTIONS(13),
    [aux_sym_tag_token1] = ACTIONS(13),
    [aux_sym_tag_token2] = ACTIONS(13),
    [anon_sym_Requires] = ACTIONS(15),
    [anon_sym_BuildArch] = ACTIONS(17),
    [anon_sym_BuildArchitectures] = ACTIONS(17),
    [anon_sym_BuildConflicts] = ACTIONS(17),
    [anon_sym_BuildPrereq] = ACTIONS(17),
    [anon_sym_BuildRequires] = ACTIONS(17),
    [anon_sym_Conflicts] = ACTIONS(17),
    [anon_sym_DocDir] = ACTIONS(17),
    [anon_sym_Enhances] = ACTIONS(17),
    [anon_sym_ExcludeArch] = ACTIONS(17),
    [anon_sym_ExcludeOS] = ACTIONS(17),
    [anon_sym_ExclusiveArch] = ACTIONS(17),
    [anon_sym_ExclusiveOS] = ACTIONS(17),
    [anon_sym_Obsoletes] = ACTIONS(17),
    [anon_sym_OrderWithRequires] = ACTIONS(17),
    [anon_sym_Prefix] = ACTIONS(17),
    [anon_sym_Prefixes] = ACTIONS(17),
    [anon_sym_Prereq] = ACTIONS(17),
    [anon_sym_Provides] = ACTIONS(17),
    [anon_sym_Recommends] = ACTIONS(17),
    [anon_sym_RemovePathPostfixes] = ACTIONS(17),
    [anon_sym_Suggests] = ACTIONS(17),
    [anon_sym_Supplements] = ACTIONS(17),
    [anon_sym_PERCENTdescription] = ACTIONS(135),
    [anon_sym_PERCENTpackage] = ACTIONS(21),
    [anon_sym_PERCENTprep] = ACTIONS(137),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(139),
    [anon_sym_PERCENTconf] = ACTIONS(141),
    [anon_sym_PERCENTbuild] = ACTIONS(143),
    [anon_sym_PERCENTinstall] = ACTIONS(145),
    [anon_sym_PERCENTcheck] = ACTIONS(147),
    [anon_sym_PERCENTclean] = ACTIONS(149),
    [anon_sym_PERCENTpre] = ACTIONS(151),
    [anon_sym_PERCENTpost] = ACTIONS(151),
    [anon_sym_PERCENTpreun] = ACTIONS(151),
    [anon_sym_PERCENTpostun] = ACTIONS(151),
    [anon_sym_PERCENTpretrans] = ACTIONS(151),
    [anon_sym_PERCENTposttrans] = ACTIONS(151),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(151),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(151),
    [anon_sym_PERCENTverify] = ACTIONS(151),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(151),
    [anon_sym_PERCENTtriggerin] = ACTIONS(151),
    [anon_sym_PERCENTtriggerun] = ACTIONS(151),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(151),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(151),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(151),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(151),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(151),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(151),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(151),
    [anon_sym_PERCENTfiles] = ACTIONS(153),
    [anon_sym_PERCENTchangelog] = ACTIONS(155),
    [anon_sym_PERCENTglobal] = ACTIONS(157),
    [anon_sym_PERCENTdefine] = ACTIONS(157),
    [anon_sym_PERCENTundefine] = ACTIONS(159),
    [anon_sym_PERCENT] = ACTIONS(161),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(163),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(165),
  },
  [5] = {
    [sym_conditional_files] = STATE(7),
    [sym_defattr] = STATE(7),
    [sym_file] = STATE(7),
    [sym_attr] = STATE(98),
    [sym_verify] = STATE(150),
    [sym_string] = STATE(357),
    [sym__macro_expansion] = STATE(149),
    [sym_simple_expansion] = STATE(149),
    [sym_full_expansion] = STATE(149),
    [sym_shell_expansion] = STATE(149),
    [aux_sym_files_repeat1] = STATE(7),
    [aux_sym_string_repeat1] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(167),
    [aux_sym__simple_statements_token1] = ACTIONS(169),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(171),
    [anon_sym_PERCENTifarch] = ACTIONS(171),
    [anon_sym_PERCENTifos] = ACTIONS(171),
    [anon_sym_PERCENTifnarch] = ACTIONS(169),
    [anon_sym_PERCENTifnos] = ACTIONS(169),
    [anon_sym_AutoProv] = ACTIONS(169),
    [anon_sym_AutoReq] = ACTIONS(169),
    [anon_sym_AutoReqProv] = ACTIONS(169),
    [anon_sym_BugUrl] = ACTIONS(169),
    [anon_sym_BuildRoot] = ACTIONS(169),
    [anon_sym_BuildSystem] = ACTIONS(169),
    [anon_sym_DistTag] = ACTIONS(169),
    [anon_sym_Distribution] = ACTIONS(169),
    [anon_sym_Epoch] = ACTIONS(169),
    [anon_sym_Group] = ACTIONS(169),
    [anon_sym_License] = ACTIONS(169),
    [anon_sym_ModularityLabel] = ACTIONS(169),
    [anon_sym_Name] = ACTIONS(169),
    [anon_sym_NoPatch] = ACTIONS(169),
    [anon_sym_NoSource] = ACTIONS(169),
    [anon_sym_Packager] = ACTIONS(169),
    [anon_sym_Release] = ACTIONS(169),
    [anon_sym_SourceLicense] = ACTIONS(169),
    [anon_sym_Summary] = ACTIONS(169),
    [anon_sym_URL] = ACTIONS(169),
    [anon_sym_Url] = ACTIONS(169),
    [anon_sym_VCS] = ACTIONS(169),
    [anon_sym_Vendor] = ACTIONS(169),
    [anon_sym_Version] = ACTIONS(169),
    [aux_sym_tag_token1] = ACTIONS(169),
    [aux_sym_tag_token2] = ACTIONS(169),
    [anon_sym_Requires] = ACTIONS(169),
    [anon_sym_BuildArch] = ACTIONS(169),
    [anon_sym_BuildArchitectures] = ACTIONS(169),
    [anon_sym_BuildConflicts] = ACTIONS(169),
    [anon_sym_BuildPrereq] = ACTIONS(169),
    [anon_sym_BuildRequires] = ACTIONS(169),
    [anon_sym_Conflicts] = ACTIONS(169),
    [anon_sym_DocDir] = ACTIONS(169),
    [anon_sym_Enhances] = ACTIONS(169),
    [anon_sym_ExcludeArch] = ACTIONS(169),
    [anon_sym_ExcludeOS] = ACTIONS(169),
    [anon_sym_ExclusiveArch] = ACTIONS(169),
    [anon_sym_ExclusiveOS] = ACTIONS(169),
    [anon_sym_Obsoletes] = ACTIONS(169),
    [anon_sym_OrderWithRequires] = ACTIONS(169),
    [anon_sym_Prefix] = ACTIONS(169),
    [anon_sym_Prefixes] = ACTIONS(169),
    [anon_sym_Prereq] = ACTIONS(169),
    [anon_sym_Provides] = ACTIONS(169),
    [anon_sym_Recommends] = ACTIONS(169),
    [anon_sym_RemovePathPostfixes] = ACTIONS(169),
    [anon_sym_Suggests] = ACTIONS(169),
    [anon_sym_Supplements] = ACTIONS(169),
    [anon_sym_PERCENTdescription] = ACTIONS(169),
    [anon_sym_PERCENTpackage] = ACTIONS(169),
    [anon_sym_PERCENTprep] = ACTIONS(169),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(169),
    [anon_sym_PERCENTconf] = ACTIONS(169),
    [anon_sym_PERCENTbuild] = ACTIONS(169),
    [anon_sym_PERCENTinstall] = ACTIONS(169),
    [anon_sym_PERCENTcheck] = ACTIONS(169),
    [anon_sym_PERCENTclean] = ACTIONS(169),
    [anon_sym_PERCENTpre] = ACTIONS(169),
    [anon_sym_PERCENTpost] = ACTIONS(169),
    [anon_sym_PERCENTpreun] = ACTIONS(169),
    [anon_sym_PERCENTpostun] = ACTIONS(169),
    [anon_sym_PERCENTpretrans] = ACTIONS(169),
    [anon_sym_PERCENTposttrans] = ACTIONS(169),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(169),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(169),
    [anon_sym_PERCENTverify] = ACTIONS(173),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(169),
    [anon_sym_PERCENTtriggerin] = ACTIONS(169),
    [anon_sym_PERCENTtriggerun] = ACTIONS(169),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(169),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(169),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(169),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(169),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(169),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(169),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(169),
    [anon_sym_PERCENTfiles] = ACTIONS(169),
    [anon_sym_PERCENTdefattr] = ACTIONS(175),
    [anon_sym_PERCENTartifact] = ACTIONS(177),
    [anon_sym_PERCENTconfig] = ACTIONS(177),
    [anon_sym_PERCENTdir] = ACTIONS(177),
    [anon_sym_PERCENTdoc] = ACTIONS(177),
    [anon_sym_PERCENTdocdir] = ACTIONS(177),
    [anon_sym_PERCENTghost] = ACTIONS(177),
    [anon_sym_PERCENTlicense] = ACTIONS(177),
    [anon_sym_PERCENTmissingok] = ACTIONS(177),
    [anon_sym_PERCENTreadme] = ACTIONS(177),
    [anon_sym_PERCENTattr] = ACTIONS(179),
    [anon_sym_PERCENTchangelog] = ACTIONS(169),
    [anon_sym_PERCENTglobal] = ACTIONS(169),
    [anon_sym_PERCENTdefine] = ACTIONS(169),
    [anon_sym_PERCENTundefine] = ACTIONS(169),
    [anon_sym_PERCENT] = ACTIONS(181),
    [sym_string_content] = ACTIONS(183),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(185),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(187),
  },
  [6] = {
    [sym_conditional_files] = STATE(11),
    [sym_defattr] = STATE(11),
    [sym_file] = STATE(11),
    [sym_attr] = STATE(98),
    [sym_verify] = STATE(150),
    [sym_string] = STATE(357),
    [sym__macro_expansion] = STATE(149),
    [sym_simple_expansion] = STATE(149),
    [sym_full_expansion] = STATE(149),
    [sym_shell_expansion] = STATE(149),
    [aux_sym_files_repeat1] = STATE(11),
    [aux_sym_string_repeat1] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(189),
    [aux_sym__simple_statements_token1] = ACTIONS(191),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(171),
    [anon_sym_PERCENTifarch] = ACTIONS(171),
    [anon_sym_PERCENTifos] = ACTIONS(171),
    [anon_sym_PERCENTifnarch] = ACTIONS(191),
    [anon_sym_PERCENTifnos] = ACTIONS(191),
    [anon_sym_AutoProv] = ACTIONS(191),
    [anon_sym_AutoReq] = ACTIONS(191),
    [anon_sym_AutoReqProv] = ACTIONS(191),
    [anon_sym_BugUrl] = ACTIONS(191),
    [anon_sym_BuildRoot] = ACTIONS(191),
    [anon_sym_BuildSystem] = ACTIONS(191),
    [anon_sym_DistTag] = ACTIONS(191),
    [anon_sym_Distribution] = ACTIONS(191),
    [anon_sym_Epoch] = ACTIONS(191),
    [anon_sym_Group] = ACTIONS(191),
    [anon_sym_License] = ACTIONS(191),
    [anon_sym_ModularityLabel] = ACTIONS(191),
    [anon_sym_Name] = ACTIONS(191),
    [anon_sym_NoPatch] = ACTIONS(191),
    [anon_sym_NoSource] = ACTIONS(191),
    [anon_sym_Packager] = ACTIONS(191),
    [anon_sym_Release] = ACTIONS(191),
    [anon_sym_SourceLicense] = ACTIONS(191),
    [anon_sym_Summary] = ACTIONS(191),
    [anon_sym_URL] = ACTIONS(191),
    [anon_sym_Url] = ACTIONS(191),
    [anon_sym_VCS] = ACTIONS(191),
    [anon_sym_Vendor] = ACTIONS(191),
    [anon_sym_Version] = ACTIONS(191),
    [aux_sym_tag_token1] = ACTIONS(191),
    [aux_sym_tag_token2] = ACTIONS(191),
    [anon_sym_Requires] = ACTIONS(191),
    [anon_sym_BuildArch] = ACTIONS(191),
    [anon_sym_BuildArchitectures] = ACTIONS(191),
    [anon_sym_BuildConflicts] = ACTIONS(191),
    [anon_sym_BuildPrereq] = ACTIONS(191),
    [anon_sym_BuildRequires] = ACTIONS(191),
    [anon_sym_Conflicts] = ACTIONS(191),
    [anon_sym_DocDir] = ACTIONS(191),
    [anon_sym_Enhances] = ACTIONS(191),
    [anon_sym_ExcludeArch] = ACTIONS(191),
    [anon_sym_ExcludeOS] = ACTIONS(191),
    [anon_sym_ExclusiveArch] = ACTIONS(191),
    [anon_sym_ExclusiveOS] = ACTIONS(191),
    [anon_sym_Obsoletes] = ACTIONS(191),
    [anon_sym_OrderWithRequires] = ACTIONS(191),
    [anon_sym_Prefix] = ACTIONS(191),
    [anon_sym_Prefixes] = ACTIONS(191),
    [anon_sym_Prereq] = ACTIONS(191),
    [anon_sym_Provides] = ACTIONS(191),
    [anon_sym_Recommends] = ACTIONS(191),
    [anon_sym_RemovePathPostfixes] = ACTIONS(191),
    [anon_sym_Suggests] = ACTIONS(191),
    [anon_sym_Supplements] = ACTIONS(191),
    [anon_sym_PERCENTdescription] = ACTIONS(191),
    [anon_sym_PERCENTpackage] = ACTIONS(191),
    [anon_sym_PERCENTprep] = ACTIONS(191),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(191),
    [anon_sym_PERCENTconf] = ACTIONS(191),
    [anon_sym_PERCENTbuild] = ACTIONS(191),
    [anon_sym_PERCENTinstall] = ACTIONS(191),
    [anon_sym_PERCENTcheck] = ACTIONS(191),
    [anon_sym_PERCENTclean] = ACTIONS(191),
    [anon_sym_PERCENTpre] = ACTIONS(191),
    [anon_sym_PERCENTpost] = ACTIONS(191),
    [anon_sym_PERCENTpreun] = ACTIONS(191),
    [anon_sym_PERCENTpostun] = ACTIONS(191),
    [anon_sym_PERCENTpretrans] = ACTIONS(191),
    [anon_sym_PERCENTposttrans] = ACTIONS(191),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(191),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(191),
    [anon_sym_PERCENTverify] = ACTIONS(173),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(191),
    [anon_sym_PERCENTtriggerin] = ACTIONS(191),
    [anon_sym_PERCENTtriggerun] = ACTIONS(191),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(191),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(191),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(191),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(191),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(191),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(191),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(191),
    [anon_sym_PERCENTfiles] = ACTIONS(191),
    [anon_sym_PERCENTdefattr] = ACTIONS(175),
    [anon_sym_PERCENTartifact] = ACTIONS(177),
    [anon_sym_PERCENTconfig] = ACTIONS(177),
    [anon_sym_PERCENTdir] = ACTIONS(177),
    [anon_sym_PERCENTdoc] = ACTIONS(177),
    [anon_sym_PERCENTdocdir] = ACTIONS(177),
    [anon_sym_PERCENTghost] = ACTIONS(177),
    [anon_sym_PERCENTlicense] = ACTIONS(177),
    [anon_sym_PERCENTmissingok] = ACTIONS(177),
    [anon_sym_PERCENTreadme] = ACTIONS(177),
    [anon_sym_PERCENTattr] = ACTIONS(179),
    [anon_sym_PERCENTchangelog] = ACTIONS(191),
    [anon_sym_PERCENTglobal] = ACTIONS(191),
    [anon_sym_PERCENTdefine] = ACTIONS(191),
    [anon_sym_PERCENTundefine] = ACTIONS(191),
    [anon_sym_PERCENT] = ACTIONS(181),
    [sym_string_content] = ACTIONS(183),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(185),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(187),
  },
  [7] = {
    [sym_conditional_files] = STATE(11),
    [sym_defattr] = STATE(11),
    [sym_file] = STATE(11),
    [sym_attr] = STATE(98),
    [sym_verify] = STATE(150),
    [sym_string] = STATE(357),
    [sym__macro_expansion] = STATE(149),
    [sym_simple_expansion] = STATE(149),
    [sym_full_expansion] = STATE(149),
    [sym_shell_expansion] = STATE(149),
    [aux_sym_files_repeat1] = STATE(11),
    [aux_sym_string_repeat1] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(193),
    [aux_sym__simple_statements_token1] = ACTIONS(195),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(171),
    [anon_sym_PERCENTifarch] = ACTIONS(171),
    [anon_sym_PERCENTifos] = ACTIONS(171),
    [anon_sym_PERCENTifnarch] = ACTIONS(195),
    [anon_sym_PERCENTifnos] = ACTIONS(195),
    [anon_sym_AutoProv] = ACTIONS(195),
    [anon_sym_AutoReq] = ACTIONS(195),
    [anon_sym_AutoReqProv] = ACTIONS(195),
    [anon_sym_BugUrl] = ACTIONS(195),
    [anon_sym_BuildRoot] = ACTIONS(195),
    [anon_sym_BuildSystem] = ACTIONS(195),
    [anon_sym_DistTag] = ACTIONS(195),
    [anon_sym_Distribution] = ACTIONS(195),
    [anon_sym_Epoch] = ACTIONS(195),
    [anon_sym_Group] = ACTIONS(195),
    [anon_sym_License] = ACTIONS(195),
    [anon_sym_ModularityLabel] = ACTIONS(195),
    [anon_sym_Name] = ACTIONS(195),
    [anon_sym_NoPatch] = ACTIONS(195),
    [anon_sym_NoSource] = ACTIONS(195),
    [anon_sym_Packager] = ACTIONS(195),
    [anon_sym_Release] = ACTIONS(195),
    [anon_sym_SourceLicense] = ACTIONS(195),
    [anon_sym_Summary] = ACTIONS(195),
    [anon_sym_URL] = ACTIONS(195),
    [anon_sym_Url] = ACTIONS(195),
    [anon_sym_VCS] = ACTIONS(195),
    [anon_sym_Vendor] = ACTIONS(195),
    [anon_sym_Version] = ACTIONS(195),
    [aux_sym_tag_token1] = ACTIONS(195),
    [aux_sym_tag_token2] = ACTIONS(195),
    [anon_sym_Requires] = ACTIONS(195),
    [anon_sym_BuildArch] = ACTIONS(195),
    [anon_sym_BuildArchitectures] = ACTIONS(195),
    [anon_sym_BuildConflicts] = ACTIONS(195),
    [anon_sym_BuildPrereq] = ACTIONS(195),
    [anon_sym_BuildRequires] = ACTIONS(195),
    [anon_sym_Conflicts] = ACTIONS(195),
    [anon_sym_DocDir] = ACTIONS(195),
    [anon_sym_Enhances] = ACTIONS(195),
    [anon_sym_ExcludeArch] = ACTIONS(195),
    [anon_sym_ExcludeOS] = ACTIONS(195),
    [anon_sym_ExclusiveArch] = ACTIONS(195),
    [anon_sym_ExclusiveOS] = ACTIONS(195),
    [anon_sym_Obsoletes] = ACTIONS(195),
    [anon_sym_OrderWithRequires] = ACTIONS(195),
    [anon_sym_Prefix] = ACTIONS(195),
    [anon_sym_Prefixes] = ACTIONS(195),
    [anon_sym_Prereq] = ACTIONS(195),
    [anon_sym_Provides] = ACTIONS(195),
    [anon_sym_Recommends] = ACTIONS(195),
    [anon_sym_RemovePathPostfixes] = ACTIONS(195),
    [anon_sym_Suggests] = ACTIONS(195),
    [anon_sym_Supplements] = ACTIONS(195),
    [anon_sym_PERCENTdescription] = ACTIONS(195),
    [anon_sym_PERCENTpackage] = ACTIONS(195),
    [anon_sym_PERCENTprep] = ACTIONS(195),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(195),
    [anon_sym_PERCENTconf] = ACTIONS(195),
    [anon_sym_PERCENTbuild] = ACTIONS(195),
    [anon_sym_PERCENTinstall] = ACTIONS(195),
    [anon_sym_PERCENTcheck] = ACTIONS(195),
    [anon_sym_PERCENTclean] = ACTIONS(195),
    [anon_sym_PERCENTpre] = ACTIONS(195),
    [anon_sym_PERCENTpost] = ACTIONS(195),
    [anon_sym_PERCENTpreun] = ACTIONS(195),
    [anon_sym_PERCENTpostun] = ACTIONS(195),
    [anon_sym_PERCENTpretrans] = ACTIONS(195),
    [anon_sym_PERCENTposttrans] = ACTIONS(195),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(195),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(195),
    [anon_sym_PERCENTverify] = ACTIONS(173),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(195),
    [anon_sym_PERCENTtriggerin] = ACTIONS(195),
    [anon_sym_PERCENTtriggerun] = ACTIONS(195),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(195),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(195),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(195),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(195),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(195),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(195),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(195),
    [anon_sym_PERCENTfiles] = ACTIONS(195),
    [anon_sym_PERCENTdefattr] = ACTIONS(175),
    [anon_sym_PERCENTartifact] = ACTIONS(177),
    [anon_sym_PERCENTconfig] = ACTIONS(177),
    [anon_sym_PERCENTdir] = ACTIONS(177),
    [anon_sym_PERCENTdoc] = ACTIONS(177),
    [anon_sym_PERCENTdocdir] = ACTIONS(177),
    [anon_sym_PERCENTghost] = ACTIONS(177),
    [anon_sym_PERCENTlicense] = ACTIONS(177),
    [anon_sym_PERCENTmissingok] = ACTIONS(177),
    [anon_sym_PERCENTreadme] = ACTIONS(177),
    [anon_sym_PERCENTattr] = ACTIONS(179),
    [anon_sym_PERCENTchangelog] = ACTIONS(195),
    [anon_sym_PERCENTglobal] = ACTIONS(195),
    [anon_sym_PERCENTdefine] = ACTIONS(195),
    [anon_sym_PERCENTundefine] = ACTIONS(195),
    [anon_sym_PERCENT] = ACTIONS(181),
    [sym_string_content] = ACTIONS(183),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(185),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(187),
  },
  [8] = {
    [sym_conditional_files] = STATE(9),
    [sym_defattr] = STATE(9),
    [sym_file] = STATE(9),
    [sym_attr] = STATE(98),
    [sym_verify] = STATE(150),
    [sym_string] = STATE(357),
    [sym__macro_expansion] = STATE(149),
    [sym_simple_expansion] = STATE(149),
    [sym_full_expansion] = STATE(149),
    [sym_shell_expansion] = STATE(149),
    [aux_sym_files_repeat1] = STATE(9),
    [aux_sym_string_repeat1] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym__simple_statements_token1] = ACTIONS(199),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(171),
    [anon_sym_PERCENTifarch] = ACTIONS(171),
    [anon_sym_PERCENTifos] = ACTIONS(171),
    [anon_sym_PERCENTifnarch] = ACTIONS(199),
    [anon_sym_PERCENTifnos] = ACTIONS(199),
    [anon_sym_AutoProv] = ACTIONS(199),
    [anon_sym_AutoReq] = ACTIONS(199),
    [anon_sym_AutoReqProv] = ACTIONS(199),
    [anon_sym_BugUrl] = ACTIONS(199),
    [anon_sym_BuildRoot] = ACTIONS(199),
    [anon_sym_BuildSystem] = ACTIONS(199),
    [anon_sym_DistTag] = ACTIONS(199),
    [anon_sym_Distribution] = ACTIONS(199),
    [anon_sym_Epoch] = ACTIONS(199),
    [anon_sym_Group] = ACTIONS(199),
    [anon_sym_License] = ACTIONS(199),
    [anon_sym_ModularityLabel] = ACTIONS(199),
    [anon_sym_Name] = ACTIONS(199),
    [anon_sym_NoPatch] = ACTIONS(199),
    [anon_sym_NoSource] = ACTIONS(199),
    [anon_sym_Packager] = ACTIONS(199),
    [anon_sym_Release] = ACTIONS(199),
    [anon_sym_SourceLicense] = ACTIONS(199),
    [anon_sym_Summary] = ACTIONS(199),
    [anon_sym_URL] = ACTIONS(199),
    [anon_sym_Url] = ACTIONS(199),
    [anon_sym_VCS] = ACTIONS(199),
    [anon_sym_Vendor] = ACTIONS(199),
    [anon_sym_Version] = ACTIONS(199),
    [aux_sym_tag_token1] = ACTIONS(199),
    [aux_sym_tag_token2] = ACTIONS(199),
    [anon_sym_Requires] = ACTIONS(199),
    [anon_sym_BuildArch] = ACTIONS(199),
    [anon_sym_BuildArchitectures] = ACTIONS(199),
    [anon_sym_BuildConflicts] = ACTIONS(199),
    [anon_sym_BuildPrereq] = ACTIONS(199),
    [anon_sym_BuildRequires] = ACTIONS(199),
    [anon_sym_Conflicts] = ACTIONS(199),
    [anon_sym_DocDir] = ACTIONS(199),
    [anon_sym_Enhances] = ACTIONS(199),
    [anon_sym_ExcludeArch] = ACTIONS(199),
    [anon_sym_ExcludeOS] = ACTIONS(199),
    [anon_sym_ExclusiveArch] = ACTIONS(199),
    [anon_sym_ExclusiveOS] = ACTIONS(199),
    [anon_sym_Obsoletes] = ACTIONS(199),
    [anon_sym_OrderWithRequires] = ACTIONS(199),
    [anon_sym_Prefix] = ACTIONS(199),
    [anon_sym_Prefixes] = ACTIONS(199),
    [anon_sym_Prereq] = ACTIONS(199),
    [anon_sym_Provides] = ACTIONS(199),
    [anon_sym_Recommends] = ACTIONS(199),
    [anon_sym_RemovePathPostfixes] = ACTIONS(199),
    [anon_sym_Suggests] = ACTIONS(199),
    [anon_sym_Supplements] = ACTIONS(199),
    [anon_sym_PERCENTdescription] = ACTIONS(199),
    [anon_sym_PERCENTpackage] = ACTIONS(199),
    [anon_sym_PERCENTprep] = ACTIONS(199),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(199),
    [anon_sym_PERCENTconf] = ACTIONS(199),
    [anon_sym_PERCENTbuild] = ACTIONS(199),
    [anon_sym_PERCENTinstall] = ACTIONS(199),
    [anon_sym_PERCENTcheck] = ACTIONS(199),
    [anon_sym_PERCENTclean] = ACTIONS(199),
    [anon_sym_PERCENTpre] = ACTIONS(199),
    [anon_sym_PERCENTpost] = ACTIONS(199),
    [anon_sym_PERCENTpreun] = ACTIONS(199),
    [anon_sym_PERCENTpostun] = ACTIONS(199),
    [anon_sym_PERCENTpretrans] = ACTIONS(199),
    [anon_sym_PERCENTposttrans] = ACTIONS(199),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(199),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(199),
    [anon_sym_PERCENTverify] = ACTIONS(173),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(199),
    [anon_sym_PERCENTtriggerin] = ACTIONS(199),
    [anon_sym_PERCENTtriggerun] = ACTIONS(199),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(199),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(199),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(199),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(199),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(199),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(199),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(199),
    [anon_sym_PERCENTfiles] = ACTIONS(199),
    [anon_sym_PERCENTdefattr] = ACTIONS(175),
    [anon_sym_PERCENTartifact] = ACTIONS(177),
    [anon_sym_PERCENTconfig] = ACTIONS(177),
    [anon_sym_PERCENTdir] = ACTIONS(177),
    [anon_sym_PERCENTdoc] = ACTIONS(177),
    [anon_sym_PERCENTdocdir] = ACTIONS(177),
    [anon_sym_PERCENTghost] = ACTIONS(177),
    [anon_sym_PERCENTlicense] = ACTIONS(177),
    [anon_sym_PERCENTmissingok] = ACTIONS(177),
    [anon_sym_PERCENTreadme] = ACTIONS(177),
    [anon_sym_PERCENTattr] = ACTIONS(179),
    [anon_sym_PERCENTchangelog] = ACTIONS(199),
    [anon_sym_PERCENTglobal] = ACTIONS(199),
    [anon_sym_PERCENTdefine] = ACTIONS(199),
    [anon_sym_PERCENTundefine] = ACTIONS(199),
    [anon_sym_PERCENT] = ACTIONS(181),
    [sym_string_content] = ACTIONS(183),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(185),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(187),
  },
  [9] = {
    [sym_conditional_files] = STATE(11),
    [sym_defattr] = STATE(11),
    [sym_file] = STATE(11),
    [sym_attr] = STATE(98),
    [sym_verify] = STATE(150),
    [sym_string] = STATE(357),
    [sym__macro_expansion] = STATE(149),
    [sym_simple_expansion] = STATE(149),
    [sym_full_expansion] = STATE(149),
    [sym_shell_expansion] = STATE(149),
    [aux_sym_files_repeat1] = STATE(11),
    [aux_sym_string_repeat1] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym__simple_statements_token1] = ACTIONS(203),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(171),
    [anon_sym_PERCENTifarch] = ACTIONS(171),
    [anon_sym_PERCENTifos] = ACTIONS(171),
    [anon_sym_PERCENTifnarch] = ACTIONS(203),
    [anon_sym_PERCENTifnos] = ACTIONS(203),
    [anon_sym_AutoProv] = ACTIONS(203),
    [anon_sym_AutoReq] = ACTIONS(203),
    [anon_sym_AutoReqProv] = ACTIONS(203),
    [anon_sym_BugUrl] = ACTIONS(203),
    [anon_sym_BuildRoot] = ACTIONS(203),
    [anon_sym_BuildSystem] = ACTIONS(203),
    [anon_sym_DistTag] = ACTIONS(203),
    [anon_sym_Distribution] = ACTIONS(203),
    [anon_sym_Epoch] = ACTIONS(203),
    [anon_sym_Group] = ACTIONS(203),
    [anon_sym_License] = ACTIONS(203),
    [anon_sym_ModularityLabel] = ACTIONS(203),
    [anon_sym_Name] = ACTIONS(203),
    [anon_sym_NoPatch] = ACTIONS(203),
    [anon_sym_NoSource] = ACTIONS(203),
    [anon_sym_Packager] = ACTIONS(203),
    [anon_sym_Release] = ACTIONS(203),
    [anon_sym_SourceLicense] = ACTIONS(203),
    [anon_sym_Summary] = ACTIONS(203),
    [anon_sym_URL] = ACTIONS(203),
    [anon_sym_Url] = ACTIONS(203),
    [anon_sym_VCS] = ACTIONS(203),
    [anon_sym_Vendor] = ACTIONS(203),
    [anon_sym_Version] = ACTIONS(203),
    [aux_sym_tag_token1] = ACTIONS(203),
    [aux_sym_tag_token2] = ACTIONS(203),
    [anon_sym_Requires] = ACTIONS(203),
    [anon_sym_BuildArch] = ACTIONS(203),
    [anon_sym_BuildArchitectures] = ACTIONS(203),
    [anon_sym_BuildConflicts] = ACTIONS(203),
    [anon_sym_BuildPrereq] = ACTIONS(203),
    [anon_sym_BuildRequires] = ACTIONS(203),
    [anon_sym_Conflicts] = ACTIONS(203),
    [anon_sym_DocDir] = ACTIONS(203),
    [anon_sym_Enhances] = ACTIONS(203),
    [anon_sym_ExcludeArch] = ACTIONS(203),
    [anon_sym_ExcludeOS] = ACTIONS(203),
    [anon_sym_ExclusiveArch] = ACTIONS(203),
    [anon_sym_ExclusiveOS] = ACTIONS(203),
    [anon_sym_Obsoletes] = ACTIONS(203),
    [anon_sym_OrderWithRequires] = ACTIONS(203),
    [anon_sym_Prefix] = ACTIONS(203),
    [anon_sym_Prefixes] = ACTIONS(203),
    [anon_sym_Prereq] = ACTIONS(203),
    [anon_sym_Provides] = ACTIONS(203),
    [anon_sym_Recommends] = ACTIONS(203),
    [anon_sym_RemovePathPostfixes] = ACTIONS(203),
    [anon_sym_Suggests] = ACTIONS(203),
    [anon_sym_Supplements] = ACTIONS(203),
    [anon_sym_PERCENTdescription] = ACTIONS(203),
    [anon_sym_PERCENTpackage] = ACTIONS(203),
    [anon_sym_PERCENTprep] = ACTIONS(203),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(203),
    [anon_sym_PERCENTconf] = ACTIONS(203),
    [anon_sym_PERCENTbuild] = ACTIONS(203),
    [anon_sym_PERCENTinstall] = ACTIONS(203),
    [anon_sym_PERCENTcheck] = ACTIONS(203),
    [anon_sym_PERCENTclean] = ACTIONS(203),
    [anon_sym_PERCENTpre] = ACTIONS(203),
    [anon_sym_PERCENTpost] = ACTIONS(203),
    [anon_sym_PERCENTpreun] = ACTIONS(203),
    [anon_sym_PERCENTpostun] = ACTIONS(203),
    [anon_sym_PERCENTpretrans] = ACTIONS(203),
    [anon_sym_PERCENTposttrans] = ACTIONS(203),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(203),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(203),
    [anon_sym_PERCENTverify] = ACTIONS(173),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(203),
    [anon_sym_PERCENTtriggerin] = ACTIONS(203),
    [anon_sym_PERCENTtriggerun] = ACTIONS(203),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(203),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(203),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(203),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(203),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(203),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(203),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(203),
    [anon_sym_PERCENTfiles] = ACTIONS(203),
    [anon_sym_PERCENTdefattr] = ACTIONS(175),
    [anon_sym_PERCENTartifact] = ACTIONS(177),
    [anon_sym_PERCENTconfig] = ACTIONS(177),
    [anon_sym_PERCENTdir] = ACTIONS(177),
    [anon_sym_PERCENTdoc] = ACTIONS(177),
    [anon_sym_PERCENTdocdir] = ACTIONS(177),
    [anon_sym_PERCENTghost] = ACTIONS(177),
    [anon_sym_PERCENTlicense] = ACTIONS(177),
    [anon_sym_PERCENTmissingok] = ACTIONS(177),
    [anon_sym_PERCENTreadme] = ACTIONS(177),
    [anon_sym_PERCENTattr] = ACTIONS(179),
    [anon_sym_PERCENTchangelog] = ACTIONS(203),
    [anon_sym_PERCENTglobal] = ACTIONS(203),
    [anon_sym_PERCENTdefine] = ACTIONS(203),
    [anon_sym_PERCENTundefine] = ACTIONS(203),
    [anon_sym_PERCENT] = ACTIONS(181),
    [sym_string_content] = ACTIONS(183),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(185),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(187),
  },
  [10] = {
    [sym_conditional_files] = STATE(6),
    [sym_defattr] = STATE(6),
    [sym_file] = STATE(6),
    [sym_attr] = STATE(98),
    [sym_verify] = STATE(150),
    [sym_string] = STATE(357),
    [sym__macro_expansion] = STATE(149),
    [sym_simple_expansion] = STATE(149),
    [sym_full_expansion] = STATE(149),
    [sym_shell_expansion] = STATE(149),
    [aux_sym_files_repeat1] = STATE(6),
    [aux_sym_string_repeat1] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym__simple_statements_token1] = ACTIONS(207),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(171),
    [anon_sym_PERCENTifarch] = ACTIONS(171),
    [anon_sym_PERCENTifos] = ACTIONS(171),
    [anon_sym_PERCENTifnarch] = ACTIONS(207),
    [anon_sym_PERCENTifnos] = ACTIONS(207),
    [anon_sym_AutoProv] = ACTIONS(207),
    [anon_sym_AutoReq] = ACTIONS(207),
    [anon_sym_AutoReqProv] = ACTIONS(207),
    [anon_sym_BugUrl] = ACTIONS(207),
    [anon_sym_BuildRoot] = ACTIONS(207),
    [anon_sym_BuildSystem] = ACTIONS(207),
    [anon_sym_DistTag] = ACTIONS(207),
    [anon_sym_Distribution] = ACTIONS(207),
    [anon_sym_Epoch] = ACTIONS(207),
    [anon_sym_Group] = ACTIONS(207),
    [anon_sym_License] = ACTIONS(207),
    [anon_sym_ModularityLabel] = ACTIONS(207),
    [anon_sym_Name] = ACTIONS(207),
    [anon_sym_NoPatch] = ACTIONS(207),
    [anon_sym_NoSource] = ACTIONS(207),
    [anon_sym_Packager] = ACTIONS(207),
    [anon_sym_Release] = ACTIONS(207),
    [anon_sym_SourceLicense] = ACTIONS(207),
    [anon_sym_Summary] = ACTIONS(207),
    [anon_sym_URL] = ACTIONS(207),
    [anon_sym_Url] = ACTIONS(207),
    [anon_sym_VCS] = ACTIONS(207),
    [anon_sym_Vendor] = ACTIONS(207),
    [anon_sym_Version] = ACTIONS(207),
    [aux_sym_tag_token1] = ACTIONS(207),
    [aux_sym_tag_token2] = ACTIONS(207),
    [anon_sym_Requires] = ACTIONS(207),
    [anon_sym_BuildArch] = ACTIONS(207),
    [anon_sym_BuildArchitectures] = ACTIONS(207),
    [anon_sym_BuildConflicts] = ACTIONS(207),
    [anon_sym_BuildPrereq] = ACTIONS(207),
    [anon_sym_BuildRequires] = ACTIONS(207),
    [anon_sym_Conflicts] = ACTIONS(207),
    [anon_sym_DocDir] = ACTIONS(207),
    [anon_sym_Enhances] = ACTIONS(207),
    [anon_sym_ExcludeArch] = ACTIONS(207),
    [anon_sym_ExcludeOS] = ACTIONS(207),
    [anon_sym_ExclusiveArch] = ACTIONS(207),
    [anon_sym_ExclusiveOS] = ACTIONS(207),
    [anon_sym_Obsoletes] = ACTIONS(207),
    [anon_sym_OrderWithRequires] = ACTIONS(207),
    [anon_sym_Prefix] = ACTIONS(207),
    [anon_sym_Prefixes] = ACTIONS(207),
    [anon_sym_Prereq] = ACTIONS(207),
    [anon_sym_Provides] = ACTIONS(207),
    [anon_sym_Recommends] = ACTIONS(207),
    [anon_sym_RemovePathPostfixes] = ACTIONS(207),
    [anon_sym_Suggests] = ACTIONS(207),
    [anon_sym_Supplements] = ACTIONS(207),
    [anon_sym_PERCENTdescription] = ACTIONS(207),
    [anon_sym_PERCENTpackage] = ACTIONS(207),
    [anon_sym_PERCENTprep] = ACTIONS(207),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(207),
    [anon_sym_PERCENTconf] = ACTIONS(207),
    [anon_sym_PERCENTbuild] = ACTIONS(207),
    [anon_sym_PERCENTinstall] = ACTIONS(207),
    [anon_sym_PERCENTcheck] = ACTIONS(207),
    [anon_sym_PERCENTclean] = ACTIONS(207),
    [anon_sym_PERCENTpre] = ACTIONS(207),
    [anon_sym_PERCENTpost] = ACTIONS(207),
    [anon_sym_PERCENTpreun] = ACTIONS(207),
    [anon_sym_PERCENTpostun] = ACTIONS(207),
    [anon_sym_PERCENTpretrans] = ACTIONS(207),
    [anon_sym_PERCENTposttrans] = ACTIONS(207),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(207),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(207),
    [anon_sym_PERCENTverify] = ACTIONS(173),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(207),
    [anon_sym_PERCENTtriggerin] = ACTIONS(207),
    [anon_sym_PERCENTtriggerun] = ACTIONS(207),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(207),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(207),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(207),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(207),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(207),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(207),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(207),
    [anon_sym_PERCENTfiles] = ACTIONS(207),
    [anon_sym_PERCENTdefattr] = ACTIONS(175),
    [anon_sym_PERCENTartifact] = ACTIONS(177),
    [anon_sym_PERCENTconfig] = ACTIONS(177),
    [anon_sym_PERCENTdir] = ACTIONS(177),
    [anon_sym_PERCENTdoc] = ACTIONS(177),
    [anon_sym_PERCENTdocdir] = ACTIONS(177),
    [anon_sym_PERCENTghost] = ACTIONS(177),
    [anon_sym_PERCENTlicense] = ACTIONS(177),
    [anon_sym_PERCENTmissingok] = ACTIONS(177),
    [anon_sym_PERCENTreadme] = ACTIONS(177),
    [anon_sym_PERCENTattr] = ACTIONS(179),
    [anon_sym_PERCENTchangelog] = ACTIONS(207),
    [anon_sym_PERCENTglobal] = ACTIONS(207),
    [anon_sym_PERCENTdefine] = ACTIONS(207),
    [anon_sym_PERCENTundefine] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(181),
    [sym_string_content] = ACTIONS(183),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(185),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(187),
  },
  [11] = {
    [sym_conditional_files] = STATE(11),
    [sym_defattr] = STATE(11),
    [sym_file] = STATE(11),
    [sym_attr] = STATE(98),
    [sym_verify] = STATE(150),
    [sym_string] = STATE(357),
    [sym__macro_expansion] = STATE(149),
    [sym_simple_expansion] = STATE(149),
    [sym_full_expansion] = STATE(149),
    [sym_shell_expansion] = STATE(149),
    [aux_sym_files_repeat1] = STATE(11),
    [aux_sym_string_repeat1] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym__simple_statements_token1] = ACTIONS(211),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(213),
    [anon_sym_PERCENTifarch] = ACTIONS(213),
    [anon_sym_PERCENTifos] = ACTIONS(213),
    [anon_sym_PERCENTifnarch] = ACTIONS(211),
    [anon_sym_PERCENTifnos] = ACTIONS(211),
    [anon_sym_AutoProv] = ACTIONS(211),
    [anon_sym_AutoReq] = ACTIONS(211),
    [anon_sym_AutoReqProv] = ACTIONS(211),
    [anon_sym_BugUrl] = ACTIONS(211),
    [anon_sym_BuildRoot] = ACTIONS(211),
    [anon_sym_BuildSystem] = ACTIONS(211),
    [anon_sym_DistTag] = ACTIONS(211),
    [anon_sym_Distribution] = ACTIONS(211),
    [anon_sym_Epoch] = ACTIONS(211),
    [anon_sym_Group] = ACTIONS(211),
    [anon_sym_License] = ACTIONS(211),
    [anon_sym_ModularityLabel] = ACTIONS(211),
    [anon_sym_Name] = ACTIONS(211),
    [anon_sym_NoPatch] = ACTIONS(211),
    [anon_sym_NoSource] = ACTIONS(211),
    [anon_sym_Packager] = ACTIONS(211),
    [anon_sym_Release] = ACTIONS(211),
    [anon_sym_SourceLicense] = ACTIONS(211),
    [anon_sym_Summary] = ACTIONS(211),
    [anon_sym_URL] = ACTIONS(211),
    [anon_sym_Url] = ACTIONS(211),
    [anon_sym_VCS] = ACTIONS(211),
    [anon_sym_Vendor] = ACTIONS(211),
    [anon_sym_Version] = ACTIONS(211),
    [aux_sym_tag_token1] = ACTIONS(211),
    [aux_sym_tag_token2] = ACTIONS(211),
    [anon_sym_Requires] = ACTIONS(211),
    [anon_sym_BuildArch] = ACTIONS(211),
    [anon_sym_BuildArchitectures] = ACTIONS(211),
    [anon_sym_BuildConflicts] = ACTIONS(211),
    [anon_sym_BuildPrereq] = ACTIONS(211),
    [anon_sym_BuildRequires] = ACTIONS(211),
    [anon_sym_Conflicts] = ACTIONS(211),
    [anon_sym_DocDir] = ACTIONS(211),
    [anon_sym_Enhances] = ACTIONS(211),
    [anon_sym_ExcludeArch] = ACTIONS(211),
    [anon_sym_ExcludeOS] = ACTIONS(211),
    [anon_sym_ExclusiveArch] = ACTIONS(211),
    [anon_sym_ExclusiveOS] = ACTIONS(211),
    [anon_sym_Obsoletes] = ACTIONS(211),
    [anon_sym_OrderWithRequires] = ACTIONS(211),
    [anon_sym_Prefix] = ACTIONS(211),
    [anon_sym_Prefixes] = ACTIONS(211),
    [anon_sym_Prereq] = ACTIONS(211),
    [anon_sym_Provides] = ACTIONS(211),
    [anon_sym_Recommends] = ACTIONS(211),
    [anon_sym_RemovePathPostfixes] = ACTIONS(211),
    [anon_sym_Suggests] = ACTIONS(211),
    [anon_sym_Supplements] = ACTIONS(211),
    [anon_sym_PERCENTdescription] = ACTIONS(211),
    [anon_sym_PERCENTpackage] = ACTIONS(211),
    [anon_sym_PERCENTprep] = ACTIONS(211),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(211),
    [anon_sym_PERCENTconf] = ACTIONS(211),
    [anon_sym_PERCENTbuild] = ACTIONS(211),
    [anon_sym_PERCENTinstall] = ACTIONS(211),
    [anon_sym_PERCENTcheck] = ACTIONS(211),
    [anon_sym_PERCENTclean] = ACTIONS(211),
    [anon_sym_PERCENTpre] = ACTIONS(211),
    [anon_sym_PERCENTpost] = ACTIONS(211),
    [anon_sym_PERCENTpreun] = ACTIONS(211),
    [anon_sym_PERCENTpostun] = ACTIONS(211),
    [anon_sym_PERCENTpretrans] = ACTIONS(211),
    [anon_sym_PERCENTposttrans] = ACTIONS(211),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(211),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(211),
    [anon_sym_PERCENTverify] = ACTIONS(216),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(211),
    [anon_sym_PERCENTtriggerin] = ACTIONS(211),
    [anon_sym_PERCENTtriggerun] = ACTIONS(211),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(211),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(211),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(211),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(211),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(211),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(211),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(211),
    [anon_sym_PERCENTfiles] = ACTIONS(211),
    [anon_sym_PERCENTdefattr] = ACTIONS(219),
    [anon_sym_PERCENTartifact] = ACTIONS(222),
    [anon_sym_PERCENTconfig] = ACTIONS(222),
    [anon_sym_PERCENTdir] = ACTIONS(222),
    [anon_sym_PERCENTdoc] = ACTIONS(222),
    [anon_sym_PERCENTdocdir] = ACTIONS(222),
    [anon_sym_PERCENTghost] = ACTIONS(222),
    [anon_sym_PERCENTlicense] = ACTIONS(222),
    [anon_sym_PERCENTmissingok] = ACTIONS(222),
    [anon_sym_PERCENTreadme] = ACTIONS(222),
    [anon_sym_PERCENTattr] = ACTIONS(225),
    [anon_sym_PERCENTchangelog] = ACTIONS(211),
    [anon_sym_PERCENTglobal] = ACTIONS(211),
    [anon_sym_PERCENTdefine] = ACTIONS(211),
    [anon_sym_PERCENTundefine] = ACTIONS(211),
    [anon_sym_PERCENT] = ACTIONS(228),
    [sym_string_content] = ACTIONS(231),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(234),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(237),
  },
  [12] = {
    [sym_preamble] = STATE(475),
    [sym_tags] = STATE(74),
    [sym_tag] = STATE(484),
    [sym_dependency_tag] = STATE(484),
    [sym_description] = STATE(475),
    [sym_subsection] = STATE(475),
    [sym_subsection_package] = STATE(276),
    [sym_prep_scriptlet] = STATE(475),
    [sym_generate_buildrequires] = STATE(475),
    [sym_conf_scriptlet] = STATE(475),
    [sym_build_scriptlet] = STATE(475),
    [sym_install_scriptlet] = STATE(475),
    [sym_check_scriptlet] = STATE(475),
    [sym_clean_scriptlet] = STATE(475),
    [sym__runtime_scriptlet] = STATE(475),
    [sym__triggers] = STATE(475),
    [sym__file_triggers] = STATE(475),
    [sym_files] = STATE(475),
    [sym_changelog] = STATE(475),
    [sym_macro_definition] = STATE(475),
    [sym_macro_undefinition] = STATE(475),
    [sym_macro_invocation] = STATE(475),
    [sym__macro_expansion] = STATE(475),
    [sym_simple_expansion] = STATE(115),
    [sym_full_expansion] = STATE(475),
    [sym_shell_expansion] = STATE(475),
    [aux_sym__simple_statements_token1] = ACTIONS(240),
    [sym_comment] = ACTIONS(9),
    [anon_sym_AutoProv] = ACTIONS(13),
    [anon_sym_AutoReq] = ACTIONS(13),
    [anon_sym_AutoReqProv] = ACTIONS(13),
    [anon_sym_BugUrl] = ACTIONS(13),
    [anon_sym_BuildRoot] = ACTIONS(13),
    [anon_sym_BuildSystem] = ACTIONS(13),
    [anon_sym_DistTag] = ACTIONS(13),
    [anon_sym_Distribution] = ACTIONS(13),
    [anon_sym_Epoch] = ACTIONS(13),
    [anon_sym_Group] = ACTIONS(13),
    [anon_sym_License] = ACTIONS(13),
    [anon_sym_ModularityLabel] = ACTIONS(13),
    [anon_sym_Name] = ACTIONS(13),
    [anon_sym_NoPatch] = ACTIONS(13),
    [anon_sym_NoSource] = ACTIONS(13),
    [anon_sym_Packager] = ACTIONS(13),
    [anon_sym_Release] = ACTIONS(13),
    [anon_sym_SourceLicense] = ACTIONS(13),
    [anon_sym_Summary] = ACTIONS(13),
    [anon_sym_URL] = ACTIONS(13),
    [anon_sym_Url] = ACTIONS(13),
    [anon_sym_VCS] = ACTIONS(13),
    [anon_sym_Vendor] = ACTIONS(13),
    [anon_sym_Version] = ACTIONS(13),
    [aux_sym_tag_token1] = ACTIONS(13),
    [aux_sym_tag_token2] = ACTIONS(13),
    [anon_sym_Requires] = ACTIONS(15),
    [anon_sym_BuildArch] = ACTIONS(17),
    [anon_sym_BuildArchitectures] = ACTIONS(17),
    [anon_sym_BuildConflicts] = ACTIONS(17),
    [anon_sym_BuildPrereq] = ACTIONS(17),
    [anon_sym_BuildRequires] = ACTIONS(17),
    [anon_sym_Conflicts] = ACTIONS(17),
    [anon_sym_DocDir] = ACTIONS(17),
    [anon_sym_Enhances] = ACTIONS(17),
    [anon_sym_ExcludeArch] = ACTIONS(17),
    [anon_sym_ExcludeOS] = ACTIONS(17),
    [anon_sym_ExclusiveArch] = ACTIONS(17),
    [anon_sym_ExclusiveOS] = ACTIONS(17),
    [anon_sym_Obsoletes] = ACTIONS(17),
    [anon_sym_OrderWithRequires] = ACTIONS(17),
    [anon_sym_Prefix] = ACTIONS(17),
    [anon_sym_Prefixes] = ACTIONS(17),
    [anon_sym_Prereq] = ACTIONS(17),
    [anon_sym_Provides] = ACTIONS(17),
    [anon_sym_Recommends] = ACTIONS(17),
    [anon_sym_RemovePathPostfixes] = ACTIONS(17),
    [anon_sym_Suggests] = ACTIONS(17),
    [anon_sym_Supplements] = ACTIONS(17),
    [anon_sym_PERCENTdescription] = ACTIONS(242),
    [anon_sym_PERCENTpackage] = ACTIONS(21),
    [anon_sym_PERCENTprep] = ACTIONS(244),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(246),
    [anon_sym_PERCENTconf] = ACTIONS(141),
    [anon_sym_PERCENTbuild] = ACTIONS(143),
    [anon_sym_PERCENTinstall] = ACTIONS(145),
    [anon_sym_PERCENTcheck] = ACTIONS(147),
    [anon_sym_PERCENTclean] = ACTIONS(149),
    [anon_sym_PERCENTpre] = ACTIONS(248),
    [anon_sym_PERCENTpost] = ACTIONS(248),
    [anon_sym_PERCENTpreun] = ACTIONS(248),
    [anon_sym_PERCENTpostun] = ACTIONS(248),
    [anon_sym_PERCENTpretrans] = ACTIONS(248),
    [anon_sym_PERCENTposttrans] = ACTIONS(248),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(248),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(248),
    [anon_sym_PERCENTverify] = ACTIONS(248),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(248),
    [anon_sym_PERCENTtriggerin] = ACTIONS(248),
    [anon_sym_PERCENTtriggerun] = ACTIONS(248),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(248),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(248),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(248),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(248),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(248),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(248),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(248),
    [anon_sym_PERCENTfiles] = ACTIONS(250),
    [anon_sym_PERCENTchangelog] = ACTIONS(155),
    [anon_sym_PERCENTglobal] = ACTIONS(157),
    [anon_sym_PERCENTdefine] = ACTIONS(157),
    [anon_sym_PERCENTundefine] = ACTIONS(159),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(163),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(165),
  },
  [13] = {
    [sym_preamble] = STATE(233),
    [sym_tags] = STATE(74),
    [sym_tag] = STATE(484),
    [sym_dependency_tag] = STATE(484),
    [sym_description] = STATE(233),
    [sym_subsection] = STATE(233),
    [sym_subsection_package] = STATE(276),
    [sym_prep_scriptlet] = STATE(233),
    [sym_generate_buildrequires] = STATE(233),
    [sym_conf_scriptlet] = STATE(233),
    [sym_build_scriptlet] = STATE(233),
    [sym_install_scriptlet] = STATE(233),
    [sym_check_scriptlet] = STATE(233),
    [sym_clean_scriptlet] = STATE(233),
    [sym__runtime_scriptlet] = STATE(233),
    [sym__triggers] = STATE(233),
    [sym__file_triggers] = STATE(233),
    [sym_files] = STATE(233),
    [sym_changelog] = STATE(233),
    [sym_macro_definition] = STATE(233),
    [sym_macro_undefinition] = STATE(233),
    [sym_macro_invocation] = STATE(233),
    [sym__macro_expansion] = STATE(233),
    [sym_simple_expansion] = STATE(107),
    [sym_full_expansion] = STATE(233),
    [sym_shell_expansion] = STATE(233),
    [aux_sym__simple_statements_token1] = ACTIONS(254),
    [sym_comment] = ACTIONS(9),
    [anon_sym_AutoProv] = ACTIONS(13),
    [anon_sym_AutoReq] = ACTIONS(13),
    [anon_sym_AutoReqProv] = ACTIONS(13),
    [anon_sym_BugUrl] = ACTIONS(13),
    [anon_sym_BuildRoot] = ACTIONS(13),
    [anon_sym_BuildSystem] = ACTIONS(13),
    [anon_sym_DistTag] = ACTIONS(13),
    [anon_sym_Distribution] = ACTIONS(13),
    [anon_sym_Epoch] = ACTIONS(13),
    [anon_sym_Group] = ACTIONS(13),
    [anon_sym_License] = ACTIONS(13),
    [anon_sym_ModularityLabel] = ACTIONS(13),
    [anon_sym_Name] = ACTIONS(13),
    [anon_sym_NoPatch] = ACTIONS(13),
    [anon_sym_NoSource] = ACTIONS(13),
    [anon_sym_Packager] = ACTIONS(13),
    [anon_sym_Release] = ACTIONS(13),
    [anon_sym_SourceLicense] = ACTIONS(13),
    [anon_sym_Summary] = ACTIONS(13),
    [anon_sym_URL] = ACTIONS(13),
    [anon_sym_Url] = ACTIONS(13),
    [anon_sym_VCS] = ACTIONS(13),
    [anon_sym_Vendor] = ACTIONS(13),
    [anon_sym_Version] = ACTIONS(13),
    [aux_sym_tag_token1] = ACTIONS(13),
    [aux_sym_tag_token2] = ACTIONS(13),
    [anon_sym_Requires] = ACTIONS(15),
    [anon_sym_BuildArch] = ACTIONS(17),
    [anon_sym_BuildArchitectures] = ACTIONS(17),
    [anon_sym_BuildConflicts] = ACTIONS(17),
    [anon_sym_BuildPrereq] = ACTIONS(17),
    [anon_sym_BuildRequires] = ACTIONS(17),
    [anon_sym_Conflicts] = ACTIONS(17),
    [anon_sym_DocDir] = ACTIONS(17),
    [anon_sym_Enhances] = ACTIONS(17),
    [anon_sym_ExcludeArch] = ACTIONS(17),
    [anon_sym_ExcludeOS] = ACTIONS(17),
    [anon_sym_ExclusiveArch] = ACTIONS(17),
    [anon_sym_ExclusiveOS] = ACTIONS(17),
    [anon_sym_Obsoletes] = ACTIONS(17),
    [anon_sym_OrderWithRequires] = ACTIONS(17),
    [anon_sym_Prefix] = ACTIONS(17),
    [anon_sym_Prefixes] = ACTIONS(17),
    [anon_sym_Prereq] = ACTIONS(17),
    [anon_sym_Provides] = ACTIONS(17),
    [anon_sym_Recommends] = ACTIONS(17),
    [anon_sym_RemovePathPostfixes] = ACTIONS(17),
    [anon_sym_Suggests] = ACTIONS(17),
    [anon_sym_Supplements] = ACTIONS(17),
    [anon_sym_PERCENTdescription] = ACTIONS(135),
    [anon_sym_PERCENTpackage] = ACTIONS(21),
    [anon_sym_PERCENTprep] = ACTIONS(137),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(139),
    [anon_sym_PERCENTconf] = ACTIONS(141),
    [anon_sym_PERCENTbuild] = ACTIONS(143),
    [anon_sym_PERCENTinstall] = ACTIONS(145),
    [anon_sym_PERCENTcheck] = ACTIONS(147),
    [anon_sym_PERCENTclean] = ACTIONS(149),
    [anon_sym_PERCENTpre] = ACTIONS(256),
    [anon_sym_PERCENTpost] = ACTIONS(256),
    [anon_sym_PERCENTpreun] = ACTIONS(256),
    [anon_sym_PERCENTpostun] = ACTIONS(256),
    [anon_sym_PERCENTpretrans] = ACTIONS(256),
    [anon_sym_PERCENTposttrans] = ACTIONS(256),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(256),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(256),
    [anon_sym_PERCENTverify] = ACTIONS(256),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(256),
    [anon_sym_PERCENTtriggerin] = ACTIONS(256),
    [anon_sym_PERCENTtriggerun] = ACTIONS(256),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(256),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(256),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(256),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(256),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(256),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(256),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(256),
    [anon_sym_PERCENTfiles] = ACTIONS(153),
    [anon_sym_PERCENTchangelog] = ACTIONS(155),
    [anon_sym_PERCENTglobal] = ACTIONS(157),
    [anon_sym_PERCENTdefine] = ACTIONS(157),
    [anon_sym_PERCENTundefine] = ACTIONS(159),
    [anon_sym_PERCENT] = ACTIONS(161),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(163),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(165),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [aux_sym__simple_statements_token1] = ACTIONS(260),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(260),
    [anon_sym_PERCENTifarch] = ACTIONS(260),
    [anon_sym_PERCENTifos] = ACTIONS(260),
    [anon_sym_PERCENTifnarch] = ACTIONS(260),
    [anon_sym_PERCENTifnos] = ACTIONS(260),
    [anon_sym_AutoProv] = ACTIONS(260),
    [anon_sym_AutoReq] = ACTIONS(260),
    [anon_sym_AutoReqProv] = ACTIONS(260),
    [anon_sym_BugUrl] = ACTIONS(260),
    [anon_sym_BuildRoot] = ACTIONS(260),
    [anon_sym_BuildSystem] = ACTIONS(260),
    [anon_sym_DistTag] = ACTIONS(260),
    [anon_sym_Distribution] = ACTIONS(260),
    [anon_sym_Epoch] = ACTIONS(260),
    [anon_sym_Group] = ACTIONS(260),
    [anon_sym_License] = ACTIONS(260),
    [anon_sym_ModularityLabel] = ACTIONS(260),
    [anon_sym_Name] = ACTIONS(260),
    [anon_sym_NoPatch] = ACTIONS(260),
    [anon_sym_NoSource] = ACTIONS(260),
    [anon_sym_Packager] = ACTIONS(260),
    [anon_sym_Release] = ACTIONS(260),
    [anon_sym_SourceLicense] = ACTIONS(260),
    [anon_sym_Summary] = ACTIONS(260),
    [anon_sym_URL] = ACTIONS(260),
    [anon_sym_Url] = ACTIONS(260),
    [anon_sym_VCS] = ACTIONS(260),
    [anon_sym_Vendor] = ACTIONS(260),
    [anon_sym_Version] = ACTIONS(260),
    [aux_sym_tag_token1] = ACTIONS(260),
    [aux_sym_tag_token2] = ACTIONS(260),
    [anon_sym_Requires] = ACTIONS(260),
    [anon_sym_BuildArch] = ACTIONS(260),
    [anon_sym_BuildArchitectures] = ACTIONS(260),
    [anon_sym_BuildConflicts] = ACTIONS(260),
    [anon_sym_BuildPrereq] = ACTIONS(260),
    [anon_sym_BuildRequires] = ACTIONS(260),
    [anon_sym_Conflicts] = ACTIONS(260),
    [anon_sym_DocDir] = ACTIONS(260),
    [anon_sym_Enhances] = ACTIONS(260),
    [anon_sym_ExcludeArch] = ACTIONS(260),
    [anon_sym_ExcludeOS] = ACTIONS(260),
    [anon_sym_ExclusiveArch] = ACTIONS(260),
    [anon_sym_ExclusiveOS] = ACTIONS(260),
    [anon_sym_Obsoletes] = ACTIONS(260),
    [anon_sym_OrderWithRequires] = ACTIONS(260),
    [anon_sym_Prefix] = ACTIONS(260),
    [anon_sym_Prefixes] = ACTIONS(260),
    [anon_sym_Prereq] = ACTIONS(260),
    [anon_sym_Provides] = ACTIONS(260),
    [anon_sym_Recommends] = ACTIONS(260),
    [anon_sym_RemovePathPostfixes] = ACTIONS(260),
    [anon_sym_Suggests] = ACTIONS(260),
    [anon_sym_Supplements] = ACTIONS(260),
    [anon_sym_PERCENTdescription] = ACTIONS(260),
    [anon_sym_PERCENTpackage] = ACTIONS(260),
    [anon_sym_PERCENTprep] = ACTIONS(260),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(260),
    [anon_sym_PERCENTconf] = ACTIONS(260),
    [anon_sym_PERCENTbuild] = ACTIONS(260),
    [anon_sym_PERCENTinstall] = ACTIONS(260),
    [anon_sym_PERCENTcheck] = ACTIONS(260),
    [anon_sym_PERCENTclean] = ACTIONS(260),
    [anon_sym_PERCENTpre] = ACTIONS(260),
    [anon_sym_PERCENTpost] = ACTIONS(260),
    [anon_sym_PERCENTpreun] = ACTIONS(260),
    [anon_sym_PERCENTpostun] = ACTIONS(260),
    [anon_sym_PERCENTpretrans] = ACTIONS(260),
    [anon_sym_PERCENTposttrans] = ACTIONS(260),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(260),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(260),
    [anon_sym_PERCENTverify] = ACTIONS(260),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(260),
    [anon_sym_PERCENTtriggerin] = ACTIONS(260),
    [anon_sym_PERCENTtriggerun] = ACTIONS(260),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(260),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(260),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(260),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(260),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(260),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(260),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(260),
    [anon_sym_PERCENTfiles] = ACTIONS(260),
    [anon_sym_PERCENTdefattr] = ACTIONS(260),
    [anon_sym_PERCENTartifact] = ACTIONS(260),
    [anon_sym_PERCENTconfig] = ACTIONS(260),
    [anon_sym_PERCENTdir] = ACTIONS(260),
    [anon_sym_PERCENTdoc] = ACTIONS(260),
    [anon_sym_PERCENTdocdir] = ACTIONS(260),
    [anon_sym_PERCENTghost] = ACTIONS(260),
    [anon_sym_PERCENTlicense] = ACTIONS(260),
    [anon_sym_PERCENTmissingok] = ACTIONS(260),
    [anon_sym_PERCENTreadme] = ACTIONS(260),
    [anon_sym_PERCENTattr] = ACTIONS(260),
    [anon_sym_PERCENTchangelog] = ACTIONS(260),
    [anon_sym_PERCENTglobal] = ACTIONS(260),
    [anon_sym_PERCENTdefine] = ACTIONS(260),
    [anon_sym_PERCENTundefine] = ACTIONS(260),
    [anon_sym_PERCENT] = ACTIONS(260),
    [sym_string_content] = ACTIONS(260),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(260),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(260),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [aux_sym__simple_statements_token1] = ACTIONS(264),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(264),
    [anon_sym_PERCENTifarch] = ACTIONS(264),
    [anon_sym_PERCENTifos] = ACTIONS(264),
    [anon_sym_PERCENTifnarch] = ACTIONS(264),
    [anon_sym_PERCENTifnos] = ACTIONS(264),
    [anon_sym_AutoProv] = ACTIONS(264),
    [anon_sym_AutoReq] = ACTIONS(264),
    [anon_sym_AutoReqProv] = ACTIONS(264),
    [anon_sym_BugUrl] = ACTIONS(264),
    [anon_sym_BuildRoot] = ACTIONS(264),
    [anon_sym_BuildSystem] = ACTIONS(264),
    [anon_sym_DistTag] = ACTIONS(264),
    [anon_sym_Distribution] = ACTIONS(264),
    [anon_sym_Epoch] = ACTIONS(264),
    [anon_sym_Group] = ACTIONS(264),
    [anon_sym_License] = ACTIONS(264),
    [anon_sym_ModularityLabel] = ACTIONS(264),
    [anon_sym_Name] = ACTIONS(264),
    [anon_sym_NoPatch] = ACTIONS(264),
    [anon_sym_NoSource] = ACTIONS(264),
    [anon_sym_Packager] = ACTIONS(264),
    [anon_sym_Release] = ACTIONS(264),
    [anon_sym_SourceLicense] = ACTIONS(264),
    [anon_sym_Summary] = ACTIONS(264),
    [anon_sym_URL] = ACTIONS(264),
    [anon_sym_Url] = ACTIONS(264),
    [anon_sym_VCS] = ACTIONS(264),
    [anon_sym_Vendor] = ACTIONS(264),
    [anon_sym_Version] = ACTIONS(264),
    [aux_sym_tag_token1] = ACTIONS(264),
    [aux_sym_tag_token2] = ACTIONS(264),
    [anon_sym_Requires] = ACTIONS(264),
    [anon_sym_BuildArch] = ACTIONS(264),
    [anon_sym_BuildArchitectures] = ACTIONS(264),
    [anon_sym_BuildConflicts] = ACTIONS(264),
    [anon_sym_BuildPrereq] = ACTIONS(264),
    [anon_sym_BuildRequires] = ACTIONS(264),
    [anon_sym_Conflicts] = ACTIONS(264),
    [anon_sym_DocDir] = ACTIONS(264),
    [anon_sym_Enhances] = ACTIONS(264),
    [anon_sym_ExcludeArch] = ACTIONS(264),
    [anon_sym_ExcludeOS] = ACTIONS(264),
    [anon_sym_ExclusiveArch] = ACTIONS(264),
    [anon_sym_ExclusiveOS] = ACTIONS(264),
    [anon_sym_Obsoletes] = ACTIONS(264),
    [anon_sym_OrderWithRequires] = ACTIONS(264),
    [anon_sym_Prefix] = ACTIONS(264),
    [anon_sym_Prefixes] = ACTIONS(264),
    [anon_sym_Prereq] = ACTIONS(264),
    [anon_sym_Provides] = ACTIONS(264),
    [anon_sym_Recommends] = ACTIONS(264),
    [anon_sym_RemovePathPostfixes] = ACTIONS(264),
    [anon_sym_Suggests] = ACTIONS(264),
    [anon_sym_Supplements] = ACTIONS(264),
    [anon_sym_PERCENTdescription] = ACTIONS(264),
    [anon_sym_PERCENTpackage] = ACTIONS(264),
    [anon_sym_PERCENTprep] = ACTIONS(264),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(264),
    [anon_sym_PERCENTconf] = ACTIONS(264),
    [anon_sym_PERCENTbuild] = ACTIONS(264),
    [anon_sym_PERCENTinstall] = ACTIONS(264),
    [anon_sym_PERCENTcheck] = ACTIONS(264),
    [anon_sym_PERCENTclean] = ACTIONS(264),
    [anon_sym_PERCENTpre] = ACTIONS(264),
    [anon_sym_PERCENTpost] = ACTIONS(264),
    [anon_sym_PERCENTpreun] = ACTIONS(264),
    [anon_sym_PERCENTpostun] = ACTIONS(264),
    [anon_sym_PERCENTpretrans] = ACTIONS(264),
    [anon_sym_PERCENTposttrans] = ACTIONS(264),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(264),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(264),
    [anon_sym_PERCENTverify] = ACTIONS(264),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(264),
    [anon_sym_PERCENTtriggerin] = ACTIONS(264),
    [anon_sym_PERCENTtriggerun] = ACTIONS(264),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(264),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(264),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(264),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(264),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(264),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(264),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(264),
    [anon_sym_PERCENTfiles] = ACTIONS(264),
    [anon_sym_PERCENTdefattr] = ACTIONS(264),
    [anon_sym_PERCENTartifact] = ACTIONS(264),
    [anon_sym_PERCENTconfig] = ACTIONS(264),
    [anon_sym_PERCENTdir] = ACTIONS(264),
    [anon_sym_PERCENTdoc] = ACTIONS(264),
    [anon_sym_PERCENTdocdir] = ACTIONS(264),
    [anon_sym_PERCENTghost] = ACTIONS(264),
    [anon_sym_PERCENTlicense] = ACTIONS(264),
    [anon_sym_PERCENTmissingok] = ACTIONS(264),
    [anon_sym_PERCENTreadme] = ACTIONS(264),
    [anon_sym_PERCENTattr] = ACTIONS(264),
    [anon_sym_PERCENTchangelog] = ACTIONS(264),
    [anon_sym_PERCENTglobal] = ACTIONS(264),
    [anon_sym_PERCENTdefine] = ACTIONS(264),
    [anon_sym_PERCENTundefine] = ACTIONS(264),
    [anon_sym_PERCENT] = ACTIONS(264),
    [sym_string_content] = ACTIONS(264),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(264),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(264),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(266),
    [aux_sym__simple_statements_token1] = ACTIONS(268),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(268),
    [anon_sym_PERCENTifarch] = ACTIONS(268),
    [anon_sym_PERCENTifos] = ACTIONS(268),
    [anon_sym_PERCENTifnarch] = ACTIONS(268),
    [anon_sym_PERCENTifnos] = ACTIONS(268),
    [anon_sym_AutoProv] = ACTIONS(268),
    [anon_sym_AutoReq] = ACTIONS(268),
    [anon_sym_AutoReqProv] = ACTIONS(268),
    [anon_sym_BugUrl] = ACTIONS(268),
    [anon_sym_BuildRoot] = ACTIONS(268),
    [anon_sym_BuildSystem] = ACTIONS(268),
    [anon_sym_DistTag] = ACTIONS(268),
    [anon_sym_Distribution] = ACTIONS(268),
    [anon_sym_Epoch] = ACTIONS(268),
    [anon_sym_Group] = ACTIONS(268),
    [anon_sym_License] = ACTIONS(268),
    [anon_sym_ModularityLabel] = ACTIONS(268),
    [anon_sym_Name] = ACTIONS(268),
    [anon_sym_NoPatch] = ACTIONS(268),
    [anon_sym_NoSource] = ACTIONS(268),
    [anon_sym_Packager] = ACTIONS(268),
    [anon_sym_Release] = ACTIONS(268),
    [anon_sym_SourceLicense] = ACTIONS(268),
    [anon_sym_Summary] = ACTIONS(268),
    [anon_sym_URL] = ACTIONS(268),
    [anon_sym_Url] = ACTIONS(268),
    [anon_sym_VCS] = ACTIONS(268),
    [anon_sym_Vendor] = ACTIONS(268),
    [anon_sym_Version] = ACTIONS(268),
    [aux_sym_tag_token1] = ACTIONS(268),
    [aux_sym_tag_token2] = ACTIONS(268),
    [anon_sym_Requires] = ACTIONS(268),
    [anon_sym_BuildArch] = ACTIONS(268),
    [anon_sym_BuildArchitectures] = ACTIONS(268),
    [anon_sym_BuildConflicts] = ACTIONS(268),
    [anon_sym_BuildPrereq] = ACTIONS(268),
    [anon_sym_BuildRequires] = ACTIONS(268),
    [anon_sym_Conflicts] = ACTIONS(268),
    [anon_sym_DocDir] = ACTIONS(268),
    [anon_sym_Enhances] = ACTIONS(268),
    [anon_sym_ExcludeArch] = ACTIONS(268),
    [anon_sym_ExcludeOS] = ACTIONS(268),
    [anon_sym_ExclusiveArch] = ACTIONS(268),
    [anon_sym_ExclusiveOS] = ACTIONS(268),
    [anon_sym_Obsoletes] = ACTIONS(268),
    [anon_sym_OrderWithRequires] = ACTIONS(268),
    [anon_sym_Prefix] = ACTIONS(268),
    [anon_sym_Prefixes] = ACTIONS(268),
    [anon_sym_Prereq] = ACTIONS(268),
    [anon_sym_Provides] = ACTIONS(268),
    [anon_sym_Recommends] = ACTIONS(268),
    [anon_sym_RemovePathPostfixes] = ACTIONS(268),
    [anon_sym_Suggests] = ACTIONS(268),
    [anon_sym_Supplements] = ACTIONS(268),
    [anon_sym_PERCENTdescription] = ACTIONS(268),
    [anon_sym_PERCENTpackage] = ACTIONS(268),
    [anon_sym_PERCENTprep] = ACTIONS(268),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(268),
    [anon_sym_PERCENTconf] = ACTIONS(268),
    [anon_sym_PERCENTbuild] = ACTIONS(268),
    [anon_sym_PERCENTinstall] = ACTIONS(268),
    [anon_sym_PERCENTcheck] = ACTIONS(268),
    [anon_sym_PERCENTclean] = ACTIONS(268),
    [anon_sym_PERCENTpre] = ACTIONS(268),
    [anon_sym_PERCENTpost] = ACTIONS(268),
    [anon_sym_PERCENTpreun] = ACTIONS(268),
    [anon_sym_PERCENTpostun] = ACTIONS(268),
    [anon_sym_PERCENTpretrans] = ACTIONS(268),
    [anon_sym_PERCENTposttrans] = ACTIONS(268),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(268),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(268),
    [anon_sym_PERCENTverify] = ACTIONS(268),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(268),
    [anon_sym_PERCENTtriggerin] = ACTIONS(268),
    [anon_sym_PERCENTtriggerun] = ACTIONS(268),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(268),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(268),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(268),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(268),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(268),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(268),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(268),
    [anon_sym_PERCENTfiles] = ACTIONS(268),
    [anon_sym_PERCENTdefattr] = ACTIONS(268),
    [anon_sym_PERCENTartifact] = ACTIONS(268),
    [anon_sym_PERCENTconfig] = ACTIONS(268),
    [anon_sym_PERCENTdir] = ACTIONS(268),
    [anon_sym_PERCENTdoc] = ACTIONS(268),
    [anon_sym_PERCENTdocdir] = ACTIONS(268),
    [anon_sym_PERCENTghost] = ACTIONS(268),
    [anon_sym_PERCENTlicense] = ACTIONS(268),
    [anon_sym_PERCENTmissingok] = ACTIONS(268),
    [anon_sym_PERCENTreadme] = ACTIONS(268),
    [anon_sym_PERCENTattr] = ACTIONS(268),
    [anon_sym_PERCENTchangelog] = ACTIONS(268),
    [anon_sym_PERCENTglobal] = ACTIONS(268),
    [anon_sym_PERCENTdefine] = ACTIONS(268),
    [anon_sym_PERCENTundefine] = ACTIONS(268),
    [anon_sym_PERCENT] = ACTIONS(268),
    [sym_string_content] = ACTIONS(268),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(268),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(268),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(270),
    [aux_sym__simple_statements_token1] = ACTIONS(272),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(272),
    [anon_sym_PERCENTifarch] = ACTIONS(272),
    [anon_sym_PERCENTifos] = ACTIONS(272),
    [anon_sym_PERCENTifnarch] = ACTIONS(272),
    [anon_sym_PERCENTifnos] = ACTIONS(272),
    [anon_sym_AutoProv] = ACTIONS(272),
    [anon_sym_AutoReq] = ACTIONS(272),
    [anon_sym_AutoReqProv] = ACTIONS(272),
    [anon_sym_BugUrl] = ACTIONS(272),
    [anon_sym_BuildRoot] = ACTIONS(272),
    [anon_sym_BuildSystem] = ACTIONS(272),
    [anon_sym_DistTag] = ACTIONS(272),
    [anon_sym_Distribution] = ACTIONS(272),
    [anon_sym_Epoch] = ACTIONS(272),
    [anon_sym_Group] = ACTIONS(272),
    [anon_sym_License] = ACTIONS(272),
    [anon_sym_ModularityLabel] = ACTIONS(272),
    [anon_sym_Name] = ACTIONS(272),
    [anon_sym_NoPatch] = ACTIONS(272),
    [anon_sym_NoSource] = ACTIONS(272),
    [anon_sym_Packager] = ACTIONS(272),
    [anon_sym_Release] = ACTIONS(272),
    [anon_sym_SourceLicense] = ACTIONS(272),
    [anon_sym_Summary] = ACTIONS(272),
    [anon_sym_URL] = ACTIONS(272),
    [anon_sym_Url] = ACTIONS(272),
    [anon_sym_VCS] = ACTIONS(272),
    [anon_sym_Vendor] = ACTIONS(272),
    [anon_sym_Version] = ACTIONS(272),
    [aux_sym_tag_token1] = ACTIONS(272),
    [aux_sym_tag_token2] = ACTIONS(272),
    [anon_sym_Requires] = ACTIONS(272),
    [anon_sym_BuildArch] = ACTIONS(272),
    [anon_sym_BuildArchitectures] = ACTIONS(272),
    [anon_sym_BuildConflicts] = ACTIONS(272),
    [anon_sym_BuildPrereq] = ACTIONS(272),
    [anon_sym_BuildRequires] = ACTIONS(272),
    [anon_sym_Conflicts] = ACTIONS(272),
    [anon_sym_DocDir] = ACTIONS(272),
    [anon_sym_Enhances] = ACTIONS(272),
    [anon_sym_ExcludeArch] = ACTIONS(272),
    [anon_sym_ExcludeOS] = ACTIONS(272),
    [anon_sym_ExclusiveArch] = ACTIONS(272),
    [anon_sym_ExclusiveOS] = ACTIONS(272),
    [anon_sym_Obsoletes] = ACTIONS(272),
    [anon_sym_OrderWithRequires] = ACTIONS(272),
    [anon_sym_Prefix] = ACTIONS(272),
    [anon_sym_Prefixes] = ACTIONS(272),
    [anon_sym_Prereq] = ACTIONS(272),
    [anon_sym_Provides] = ACTIONS(272),
    [anon_sym_Recommends] = ACTIONS(272),
    [anon_sym_RemovePathPostfixes] = ACTIONS(272),
    [anon_sym_Suggests] = ACTIONS(272),
    [anon_sym_Supplements] = ACTIONS(272),
    [anon_sym_PERCENTdescription] = ACTIONS(272),
    [anon_sym_PERCENTpackage] = ACTIONS(272),
    [anon_sym_PERCENTprep] = ACTIONS(272),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(272),
    [anon_sym_PERCENTconf] = ACTIONS(272),
    [anon_sym_PERCENTbuild] = ACTIONS(272),
    [anon_sym_PERCENTinstall] = ACTIONS(272),
    [anon_sym_PERCENTcheck] = ACTIONS(272),
    [anon_sym_PERCENTclean] = ACTIONS(272),
    [anon_sym_PERCENTpre] = ACTIONS(272),
    [anon_sym_PERCENTpost] = ACTIONS(272),
    [anon_sym_PERCENTpreun] = ACTIONS(272),
    [anon_sym_PERCENTpostun] = ACTIONS(272),
    [anon_sym_PERCENTpretrans] = ACTIONS(272),
    [anon_sym_PERCENTposttrans] = ACTIONS(272),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(272),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(272),
    [anon_sym_PERCENTverify] = ACTIONS(272),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(272),
    [anon_sym_PERCENTtriggerin] = ACTIONS(272),
    [anon_sym_PERCENTtriggerun] = ACTIONS(272),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(272),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(272),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(272),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(272),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(272),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(272),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(272),
    [anon_sym_PERCENTfiles] = ACTIONS(272),
    [anon_sym_PERCENTdefattr] = ACTIONS(272),
    [anon_sym_PERCENTartifact] = ACTIONS(272),
    [anon_sym_PERCENTconfig] = ACTIONS(272),
    [anon_sym_PERCENTdir] = ACTIONS(272),
    [anon_sym_PERCENTdoc] = ACTIONS(272),
    [anon_sym_PERCENTdocdir] = ACTIONS(272),
    [anon_sym_PERCENTghost] = ACTIONS(272),
    [anon_sym_PERCENTlicense] = ACTIONS(272),
    [anon_sym_PERCENTmissingok] = ACTIONS(272),
    [anon_sym_PERCENTreadme] = ACTIONS(272),
    [anon_sym_PERCENTattr] = ACTIONS(272),
    [anon_sym_PERCENTchangelog] = ACTIONS(272),
    [anon_sym_PERCENTglobal] = ACTIONS(272),
    [anon_sym_PERCENTdefine] = ACTIONS(272),
    [anon_sym_PERCENTundefine] = ACTIONS(272),
    [anon_sym_PERCENT] = ACTIONS(272),
    [sym_string_content] = ACTIONS(272),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(272),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(272),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(274),
    [aux_sym__simple_statements_token1] = ACTIONS(276),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(276),
    [anon_sym_PERCENTifarch] = ACTIONS(276),
    [anon_sym_PERCENTifos] = ACTIONS(276),
    [anon_sym_PERCENTifnarch] = ACTIONS(276),
    [anon_sym_PERCENTifnos] = ACTIONS(276),
    [anon_sym_AutoProv] = ACTIONS(276),
    [anon_sym_AutoReq] = ACTIONS(276),
    [anon_sym_AutoReqProv] = ACTIONS(276),
    [anon_sym_BugUrl] = ACTIONS(276),
    [anon_sym_BuildRoot] = ACTIONS(276),
    [anon_sym_BuildSystem] = ACTIONS(276),
    [anon_sym_DistTag] = ACTIONS(276),
    [anon_sym_Distribution] = ACTIONS(276),
    [anon_sym_Epoch] = ACTIONS(276),
    [anon_sym_Group] = ACTIONS(276),
    [anon_sym_License] = ACTIONS(276),
    [anon_sym_ModularityLabel] = ACTIONS(276),
    [anon_sym_Name] = ACTIONS(276),
    [anon_sym_NoPatch] = ACTIONS(276),
    [anon_sym_NoSource] = ACTIONS(276),
    [anon_sym_Packager] = ACTIONS(276),
    [anon_sym_Release] = ACTIONS(276),
    [anon_sym_SourceLicense] = ACTIONS(276),
    [anon_sym_Summary] = ACTIONS(276),
    [anon_sym_URL] = ACTIONS(276),
    [anon_sym_Url] = ACTIONS(276),
    [anon_sym_VCS] = ACTIONS(276),
    [anon_sym_Vendor] = ACTIONS(276),
    [anon_sym_Version] = ACTIONS(276),
    [aux_sym_tag_token1] = ACTIONS(276),
    [aux_sym_tag_token2] = ACTIONS(276),
    [anon_sym_Requires] = ACTIONS(276),
    [anon_sym_BuildArch] = ACTIONS(276),
    [anon_sym_BuildArchitectures] = ACTIONS(276),
    [anon_sym_BuildConflicts] = ACTIONS(276),
    [anon_sym_BuildPrereq] = ACTIONS(276),
    [anon_sym_BuildRequires] = ACTIONS(276),
    [anon_sym_Conflicts] = ACTIONS(276),
    [anon_sym_DocDir] = ACTIONS(276),
    [anon_sym_Enhances] = ACTIONS(276),
    [anon_sym_ExcludeArch] = ACTIONS(276),
    [anon_sym_ExcludeOS] = ACTIONS(276),
    [anon_sym_ExclusiveArch] = ACTIONS(276),
    [anon_sym_ExclusiveOS] = ACTIONS(276),
    [anon_sym_Obsoletes] = ACTIONS(276),
    [anon_sym_OrderWithRequires] = ACTIONS(276),
    [anon_sym_Prefix] = ACTIONS(276),
    [anon_sym_Prefixes] = ACTIONS(276),
    [anon_sym_Prereq] = ACTIONS(276),
    [anon_sym_Provides] = ACTIONS(276),
    [anon_sym_Recommends] = ACTIONS(276),
    [anon_sym_RemovePathPostfixes] = ACTIONS(276),
    [anon_sym_Suggests] = ACTIONS(276),
    [anon_sym_Supplements] = ACTIONS(276),
    [anon_sym_PERCENTdescription] = ACTIONS(276),
    [anon_sym_PERCENTpackage] = ACTIONS(276),
    [anon_sym_PERCENTprep] = ACTIONS(276),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(276),
    [anon_sym_PERCENTconf] = ACTIONS(276),
    [anon_sym_PERCENTbuild] = ACTIONS(276),
    [anon_sym_PERCENTinstall] = ACTIONS(276),
    [anon_sym_PERCENTcheck] = ACTIONS(276),
    [anon_sym_PERCENTclean] = ACTIONS(276),
    [anon_sym_PERCENTpre] = ACTIONS(276),
    [anon_sym_PERCENTpost] = ACTIONS(276),
    [anon_sym_PERCENTpreun] = ACTIONS(276),
    [anon_sym_PERCENTpostun] = ACTIONS(276),
    [anon_sym_PERCENTpretrans] = ACTIONS(276),
    [anon_sym_PERCENTposttrans] = ACTIONS(276),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(276),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(276),
    [anon_sym_PERCENTverify] = ACTIONS(276),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(276),
    [anon_sym_PERCENTtriggerin] = ACTIONS(276),
    [anon_sym_PERCENTtriggerun] = ACTIONS(276),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(276),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(276),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(276),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(276),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(276),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(276),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(276),
    [anon_sym_PERCENTfiles] = ACTIONS(276),
    [anon_sym_PERCENTdefattr] = ACTIONS(276),
    [anon_sym_PERCENTartifact] = ACTIONS(276),
    [anon_sym_PERCENTconfig] = ACTIONS(276),
    [anon_sym_PERCENTdir] = ACTIONS(276),
    [anon_sym_PERCENTdoc] = ACTIONS(276),
    [anon_sym_PERCENTdocdir] = ACTIONS(276),
    [anon_sym_PERCENTghost] = ACTIONS(276),
    [anon_sym_PERCENTlicense] = ACTIONS(276),
    [anon_sym_PERCENTmissingok] = ACTIONS(276),
    [anon_sym_PERCENTreadme] = ACTIONS(276),
    [anon_sym_PERCENTattr] = ACTIONS(276),
    [anon_sym_PERCENTchangelog] = ACTIONS(276),
    [anon_sym_PERCENTglobal] = ACTIONS(276),
    [anon_sym_PERCENTdefine] = ACTIONS(276),
    [anon_sym_PERCENTundefine] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(276),
    [sym_string_content] = ACTIONS(276),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(276),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(276),
  },
  [19] = {
    [aux_sym__value] = STATE(116),
    [sym_string] = STATE(116),
    [sym__macro_expansion] = STATE(137),
    [sym_simple_expansion] = STATE(137),
    [sym_full_expansion] = STATE(137),
    [sym_shell_expansion] = STATE(137),
    [aux_sym_string_repeat1] = STATE(137),
    [ts_builtin_sym_end] = ACTIONS(278),
    [aux_sym__simple_statements_token1] = ACTIONS(280),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(280),
    [anon_sym_PERCENTifarch] = ACTIONS(280),
    [anon_sym_PERCENTifos] = ACTIONS(280),
    [anon_sym_PERCENTifnarch] = ACTIONS(280),
    [anon_sym_PERCENTifnos] = ACTIONS(280),
    [anon_sym_AutoProv] = ACTIONS(280),
    [anon_sym_AutoReq] = ACTIONS(280),
    [anon_sym_AutoReqProv] = ACTIONS(280),
    [anon_sym_BugUrl] = ACTIONS(280),
    [anon_sym_BuildRoot] = ACTIONS(280),
    [anon_sym_BuildSystem] = ACTIONS(280),
    [anon_sym_DistTag] = ACTIONS(280),
    [anon_sym_Distribution] = ACTIONS(280),
    [anon_sym_Epoch] = ACTIONS(280),
    [anon_sym_Group] = ACTIONS(280),
    [anon_sym_License] = ACTIONS(280),
    [anon_sym_ModularityLabel] = ACTIONS(280),
    [anon_sym_Name] = ACTIONS(280),
    [anon_sym_NoPatch] = ACTIONS(280),
    [anon_sym_NoSource] = ACTIONS(280),
    [anon_sym_Packager] = ACTIONS(280),
    [anon_sym_Release] = ACTIONS(280),
    [anon_sym_SourceLicense] = ACTIONS(280),
    [anon_sym_Summary] = ACTIONS(280),
    [anon_sym_URL] = ACTIONS(280),
    [anon_sym_Url] = ACTIONS(280),
    [anon_sym_VCS] = ACTIONS(280),
    [anon_sym_Vendor] = ACTIONS(280),
    [anon_sym_Version] = ACTIONS(280),
    [aux_sym_tag_token1] = ACTIONS(280),
    [aux_sym_tag_token2] = ACTIONS(280),
    [anon_sym_Requires] = ACTIONS(280),
    [anon_sym_BuildArch] = ACTIONS(280),
    [anon_sym_BuildArchitectures] = ACTIONS(280),
    [anon_sym_BuildConflicts] = ACTIONS(280),
    [anon_sym_BuildPrereq] = ACTIONS(280),
    [anon_sym_BuildRequires] = ACTIONS(280),
    [anon_sym_Conflicts] = ACTIONS(280),
    [anon_sym_DocDir] = ACTIONS(280),
    [anon_sym_Enhances] = ACTIONS(280),
    [anon_sym_ExcludeArch] = ACTIONS(280),
    [anon_sym_ExcludeOS] = ACTIONS(280),
    [anon_sym_ExclusiveArch] = ACTIONS(280),
    [anon_sym_ExclusiveOS] = ACTIONS(280),
    [anon_sym_Obsoletes] = ACTIONS(280),
    [anon_sym_OrderWithRequires] = ACTIONS(280),
    [anon_sym_Prefix] = ACTIONS(280),
    [anon_sym_Prefixes] = ACTIONS(280),
    [anon_sym_Prereq] = ACTIONS(280),
    [anon_sym_Provides] = ACTIONS(280),
    [anon_sym_Recommends] = ACTIONS(280),
    [anon_sym_RemovePathPostfixes] = ACTIONS(280),
    [anon_sym_Suggests] = ACTIONS(280),
    [anon_sym_Supplements] = ACTIONS(280),
    [anon_sym_PERCENTdescription] = ACTIONS(280),
    [anon_sym_PERCENTpackage] = ACTIONS(280),
    [anon_sym_PERCENTprep] = ACTIONS(280),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(280),
    [anon_sym_PERCENTconf] = ACTIONS(280),
    [anon_sym_PERCENTbuild] = ACTIONS(280),
    [anon_sym_PERCENTinstall] = ACTIONS(280),
    [anon_sym_PERCENTcheck] = ACTIONS(280),
    [anon_sym_PERCENTclean] = ACTIONS(280),
    [anon_sym_PERCENTpre] = ACTIONS(280),
    [anon_sym_PERCENTpost] = ACTIONS(280),
    [anon_sym_PERCENTpreun] = ACTIONS(280),
    [anon_sym_PERCENTpostun] = ACTIONS(280),
    [anon_sym_PERCENTpretrans] = ACTIONS(280),
    [anon_sym_PERCENTposttrans] = ACTIONS(280),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(280),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(280),
    [anon_sym_PERCENTverify] = ACTIONS(280),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(280),
    [anon_sym_PERCENTtriggerin] = ACTIONS(280),
    [anon_sym_PERCENTtriggerun] = ACTIONS(280),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(280),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(280),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(280),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(280),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(280),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(280),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(280),
    [anon_sym_PERCENTfiles] = ACTIONS(280),
    [anon_sym_PERCENTchangelog] = ACTIONS(280),
    [anon_sym_PERCENTglobal] = ACTIONS(280),
    [anon_sym_PERCENTdefine] = ACTIONS(280),
    [anon_sym_PERCENTundefine] = ACTIONS(280),
    [sym_integer] = ACTIONS(282),
    [sym_float] = ACTIONS(282),
    [anon_sym_PERCENT] = ACTIONS(280),
    [sym_string_content] = ACTIONS(284),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(280),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(280),
  },
  [20] = {
    [sym_string_with_newlines] = STATE(66),
    [sym__macro_expansion] = STATE(24),
    [sym_simple_expansion] = STATE(24),
    [sym_full_expansion] = STATE(24),
    [sym_shell_expansion] = STATE(24),
    [aux_sym_string_with_newlines_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(286),
    [aux_sym__simple_statements_token1] = ACTIONS(288),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(288),
    [anon_sym_PERCENTifarch] = ACTIONS(288),
    [anon_sym_PERCENTifos] = ACTIONS(288),
    [anon_sym_PERCENTifnarch] = ACTIONS(288),
    [anon_sym_PERCENTifnos] = ACTIONS(288),
    [anon_sym_AutoProv] = ACTIONS(288),
    [anon_sym_AutoReq] = ACTIONS(288),
    [anon_sym_AutoReqProv] = ACTIONS(288),
    [anon_sym_BugUrl] = ACTIONS(288),
    [anon_sym_BuildRoot] = ACTIONS(288),
    [anon_sym_BuildSystem] = ACTIONS(288),
    [anon_sym_DistTag] = ACTIONS(288),
    [anon_sym_Distribution] = ACTIONS(288),
    [anon_sym_Epoch] = ACTIONS(288),
    [anon_sym_Group] = ACTIONS(288),
    [anon_sym_License] = ACTIONS(288),
    [anon_sym_ModularityLabel] = ACTIONS(288),
    [anon_sym_Name] = ACTIONS(288),
    [anon_sym_NoPatch] = ACTIONS(288),
    [anon_sym_NoSource] = ACTIONS(288),
    [anon_sym_Packager] = ACTIONS(288),
    [anon_sym_Release] = ACTIONS(288),
    [anon_sym_SourceLicense] = ACTIONS(288),
    [anon_sym_Summary] = ACTIONS(288),
    [anon_sym_URL] = ACTIONS(288),
    [anon_sym_Url] = ACTIONS(288),
    [anon_sym_VCS] = ACTIONS(288),
    [anon_sym_Vendor] = ACTIONS(288),
    [anon_sym_Version] = ACTIONS(288),
    [aux_sym_tag_token1] = ACTIONS(288),
    [aux_sym_tag_token2] = ACTIONS(288),
    [anon_sym_Requires] = ACTIONS(288),
    [anon_sym_BuildArch] = ACTIONS(288),
    [anon_sym_BuildArchitectures] = ACTIONS(288),
    [anon_sym_BuildConflicts] = ACTIONS(288),
    [anon_sym_BuildPrereq] = ACTIONS(288),
    [anon_sym_BuildRequires] = ACTIONS(288),
    [anon_sym_Conflicts] = ACTIONS(288),
    [anon_sym_DocDir] = ACTIONS(288),
    [anon_sym_Enhances] = ACTIONS(288),
    [anon_sym_ExcludeArch] = ACTIONS(288),
    [anon_sym_ExcludeOS] = ACTIONS(288),
    [anon_sym_ExclusiveArch] = ACTIONS(288),
    [anon_sym_ExclusiveOS] = ACTIONS(288),
    [anon_sym_Obsoletes] = ACTIONS(288),
    [anon_sym_OrderWithRequires] = ACTIONS(288),
    [anon_sym_Prefix] = ACTIONS(288),
    [anon_sym_Prefixes] = ACTIONS(288),
    [anon_sym_Prereq] = ACTIONS(288),
    [anon_sym_Provides] = ACTIONS(288),
    [anon_sym_Recommends] = ACTIONS(288),
    [anon_sym_RemovePathPostfixes] = ACTIONS(288),
    [anon_sym_Suggests] = ACTIONS(288),
    [anon_sym_Supplements] = ACTIONS(288),
    [anon_sym_PERCENTdescription] = ACTIONS(288),
    [anon_sym_PERCENTpackage] = ACTIONS(288),
    [anon_sym_PERCENTprep] = ACTIONS(288),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(288),
    [anon_sym_PERCENTconf] = ACTIONS(288),
    [anon_sym_PERCENTbuild] = ACTIONS(288),
    [anon_sym_PERCENTinstall] = ACTIONS(288),
    [anon_sym_PERCENTcheck] = ACTIONS(288),
    [anon_sym_PERCENTclean] = ACTIONS(288),
    [anon_sym_PERCENTpre] = ACTIONS(288),
    [anon_sym_PERCENTpost] = ACTIONS(288),
    [anon_sym_PERCENTpreun] = ACTIONS(288),
    [anon_sym_PERCENTpostun] = ACTIONS(288),
    [anon_sym_PERCENTpretrans] = ACTIONS(288),
    [anon_sym_PERCENTposttrans] = ACTIONS(288),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(288),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(288),
    [anon_sym_PERCENTverify] = ACTIONS(288),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(288),
    [anon_sym_PERCENTtriggerin] = ACTIONS(288),
    [anon_sym_PERCENTtriggerun] = ACTIONS(288),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(288),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(288),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(288),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(288),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(288),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(288),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(288),
    [anon_sym_PERCENTfiles] = ACTIONS(288),
    [anon_sym_PERCENTchangelog] = ACTIONS(288),
    [anon_sym_PERCENTglobal] = ACTIONS(288),
    [anon_sym_PERCENTdefine] = ACTIONS(288),
    [anon_sym_PERCENTundefine] = ACTIONS(288),
    [anon_sym_PERCENT] = ACTIONS(290),
    [sym_string_content_with_newlines] = ACTIONS(292),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(294),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(296),
  },
  [21] = {
    [sym_string_with_newlines] = STATE(65),
    [sym__macro_expansion] = STATE(24),
    [sym_simple_expansion] = STATE(24),
    [sym_full_expansion] = STATE(24),
    [sym_shell_expansion] = STATE(24),
    [aux_sym_string_with_newlines_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(298),
    [aux_sym__simple_statements_token1] = ACTIONS(300),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(300),
    [anon_sym_PERCENTifarch] = ACTIONS(300),
    [anon_sym_PERCENTifos] = ACTIONS(300),
    [anon_sym_PERCENTifnarch] = ACTIONS(300),
    [anon_sym_PERCENTifnos] = ACTIONS(300),
    [anon_sym_AutoProv] = ACTIONS(300),
    [anon_sym_AutoReq] = ACTIONS(300),
    [anon_sym_AutoReqProv] = ACTIONS(300),
    [anon_sym_BugUrl] = ACTIONS(300),
    [anon_sym_BuildRoot] = ACTIONS(300),
    [anon_sym_BuildSystem] = ACTIONS(300),
    [anon_sym_DistTag] = ACTIONS(300),
    [anon_sym_Distribution] = ACTIONS(300),
    [anon_sym_Epoch] = ACTIONS(300),
    [anon_sym_Group] = ACTIONS(300),
    [anon_sym_License] = ACTIONS(300),
    [anon_sym_ModularityLabel] = ACTIONS(300),
    [anon_sym_Name] = ACTIONS(300),
    [anon_sym_NoPatch] = ACTIONS(300),
    [anon_sym_NoSource] = ACTIONS(300),
    [anon_sym_Packager] = ACTIONS(300),
    [anon_sym_Release] = ACTIONS(300),
    [anon_sym_SourceLicense] = ACTIONS(300),
    [anon_sym_Summary] = ACTIONS(300),
    [anon_sym_URL] = ACTIONS(300),
    [anon_sym_Url] = ACTIONS(300),
    [anon_sym_VCS] = ACTIONS(300),
    [anon_sym_Vendor] = ACTIONS(300),
    [anon_sym_Version] = ACTIONS(300),
    [aux_sym_tag_token1] = ACTIONS(300),
    [aux_sym_tag_token2] = ACTIONS(300),
    [anon_sym_Requires] = ACTIONS(300),
    [anon_sym_BuildArch] = ACTIONS(300),
    [anon_sym_BuildArchitectures] = ACTIONS(300),
    [anon_sym_BuildConflicts] = ACTIONS(300),
    [anon_sym_BuildPrereq] = ACTIONS(300),
    [anon_sym_BuildRequires] = ACTIONS(300),
    [anon_sym_Conflicts] = ACTIONS(300),
    [anon_sym_DocDir] = ACTIONS(300),
    [anon_sym_Enhances] = ACTIONS(300),
    [anon_sym_ExcludeArch] = ACTIONS(300),
    [anon_sym_ExcludeOS] = ACTIONS(300),
    [anon_sym_ExclusiveArch] = ACTIONS(300),
    [anon_sym_ExclusiveOS] = ACTIONS(300),
    [anon_sym_Obsoletes] = ACTIONS(300),
    [anon_sym_OrderWithRequires] = ACTIONS(300),
    [anon_sym_Prefix] = ACTIONS(300),
    [anon_sym_Prefixes] = ACTIONS(300),
    [anon_sym_Prereq] = ACTIONS(300),
    [anon_sym_Provides] = ACTIONS(300),
    [anon_sym_Recommends] = ACTIONS(300),
    [anon_sym_RemovePathPostfixes] = ACTIONS(300),
    [anon_sym_Suggests] = ACTIONS(300),
    [anon_sym_Supplements] = ACTIONS(300),
    [anon_sym_PERCENTdescription] = ACTIONS(300),
    [anon_sym_PERCENTpackage] = ACTIONS(300),
    [anon_sym_PERCENTprep] = ACTIONS(300),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(300),
    [anon_sym_PERCENTconf] = ACTIONS(300),
    [anon_sym_PERCENTbuild] = ACTIONS(300),
    [anon_sym_PERCENTinstall] = ACTIONS(300),
    [anon_sym_PERCENTcheck] = ACTIONS(300),
    [anon_sym_PERCENTclean] = ACTIONS(300),
    [anon_sym_PERCENTpre] = ACTIONS(300),
    [anon_sym_PERCENTpost] = ACTIONS(300),
    [anon_sym_PERCENTpreun] = ACTIONS(300),
    [anon_sym_PERCENTpostun] = ACTIONS(300),
    [anon_sym_PERCENTpretrans] = ACTIONS(300),
    [anon_sym_PERCENTposttrans] = ACTIONS(300),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(300),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(300),
    [anon_sym_PERCENTverify] = ACTIONS(300),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(300),
    [anon_sym_PERCENTtriggerin] = ACTIONS(300),
    [anon_sym_PERCENTtriggerun] = ACTIONS(300),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(300),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(300),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(300),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(300),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(300),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(300),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(300),
    [anon_sym_PERCENTfiles] = ACTIONS(300),
    [anon_sym_PERCENTchangelog] = ACTIONS(300),
    [anon_sym_PERCENTglobal] = ACTIONS(300),
    [anon_sym_PERCENTdefine] = ACTIONS(300),
    [anon_sym_PERCENTundefine] = ACTIONS(300),
    [anon_sym_PERCENT] = ACTIONS(290),
    [sym_string_content_with_newlines] = ACTIONS(292),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(294),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(296),
  },
  [22] = {
    [sym_string_with_newlines] = STATE(68),
    [sym__macro_expansion] = STATE(24),
    [sym_simple_expansion] = STATE(24),
    [sym_full_expansion] = STATE(24),
    [sym_shell_expansion] = STATE(24),
    [aux_sym_string_with_newlines_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(302),
    [aux_sym__simple_statements_token1] = ACTIONS(304),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(304),
    [anon_sym_PERCENTifarch] = ACTIONS(304),
    [anon_sym_PERCENTifos] = ACTIONS(304),
    [anon_sym_PERCENTifnarch] = ACTIONS(304),
    [anon_sym_PERCENTifnos] = ACTIONS(304),
    [anon_sym_AutoProv] = ACTIONS(304),
    [anon_sym_AutoReq] = ACTIONS(304),
    [anon_sym_AutoReqProv] = ACTIONS(304),
    [anon_sym_BugUrl] = ACTIONS(304),
    [anon_sym_BuildRoot] = ACTIONS(304),
    [anon_sym_BuildSystem] = ACTIONS(304),
    [anon_sym_DistTag] = ACTIONS(304),
    [anon_sym_Distribution] = ACTIONS(304),
    [anon_sym_Epoch] = ACTIONS(304),
    [anon_sym_Group] = ACTIONS(304),
    [anon_sym_License] = ACTIONS(304),
    [anon_sym_ModularityLabel] = ACTIONS(304),
    [anon_sym_Name] = ACTIONS(304),
    [anon_sym_NoPatch] = ACTIONS(304),
    [anon_sym_NoSource] = ACTIONS(304),
    [anon_sym_Packager] = ACTIONS(304),
    [anon_sym_Release] = ACTIONS(304),
    [anon_sym_SourceLicense] = ACTIONS(304),
    [anon_sym_Summary] = ACTIONS(304),
    [anon_sym_URL] = ACTIONS(304),
    [anon_sym_Url] = ACTIONS(304),
    [anon_sym_VCS] = ACTIONS(304),
    [anon_sym_Vendor] = ACTIONS(304),
    [anon_sym_Version] = ACTIONS(304),
    [aux_sym_tag_token1] = ACTIONS(304),
    [aux_sym_tag_token2] = ACTIONS(304),
    [anon_sym_Requires] = ACTIONS(304),
    [anon_sym_BuildArch] = ACTIONS(304),
    [anon_sym_BuildArchitectures] = ACTIONS(304),
    [anon_sym_BuildConflicts] = ACTIONS(304),
    [anon_sym_BuildPrereq] = ACTIONS(304),
    [anon_sym_BuildRequires] = ACTIONS(304),
    [anon_sym_Conflicts] = ACTIONS(304),
    [anon_sym_DocDir] = ACTIONS(304),
    [anon_sym_Enhances] = ACTIONS(304),
    [anon_sym_ExcludeArch] = ACTIONS(304),
    [anon_sym_ExcludeOS] = ACTIONS(304),
    [anon_sym_ExclusiveArch] = ACTIONS(304),
    [anon_sym_ExclusiveOS] = ACTIONS(304),
    [anon_sym_Obsoletes] = ACTIONS(304),
    [anon_sym_OrderWithRequires] = ACTIONS(304),
    [anon_sym_Prefix] = ACTIONS(304),
    [anon_sym_Prefixes] = ACTIONS(304),
    [anon_sym_Prereq] = ACTIONS(304),
    [anon_sym_Provides] = ACTIONS(304),
    [anon_sym_Recommends] = ACTIONS(304),
    [anon_sym_RemovePathPostfixes] = ACTIONS(304),
    [anon_sym_Suggests] = ACTIONS(304),
    [anon_sym_Supplements] = ACTIONS(304),
    [anon_sym_PERCENTdescription] = ACTIONS(304),
    [anon_sym_PERCENTpackage] = ACTIONS(304),
    [anon_sym_PERCENTprep] = ACTIONS(304),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(304),
    [anon_sym_PERCENTconf] = ACTIONS(304),
    [anon_sym_PERCENTbuild] = ACTIONS(304),
    [anon_sym_PERCENTinstall] = ACTIONS(304),
    [anon_sym_PERCENTcheck] = ACTIONS(304),
    [anon_sym_PERCENTclean] = ACTIONS(304),
    [anon_sym_PERCENTpre] = ACTIONS(304),
    [anon_sym_PERCENTpost] = ACTIONS(304),
    [anon_sym_PERCENTpreun] = ACTIONS(304),
    [anon_sym_PERCENTpostun] = ACTIONS(304),
    [anon_sym_PERCENTpretrans] = ACTIONS(304),
    [anon_sym_PERCENTposttrans] = ACTIONS(304),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(304),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(304),
    [anon_sym_PERCENTverify] = ACTIONS(304),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(304),
    [anon_sym_PERCENTtriggerin] = ACTIONS(304),
    [anon_sym_PERCENTtriggerun] = ACTIONS(304),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(304),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(304),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(304),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(304),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(304),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(304),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(304),
    [anon_sym_PERCENTfiles] = ACTIONS(304),
    [anon_sym_PERCENTchangelog] = ACTIONS(304),
    [anon_sym_PERCENTglobal] = ACTIONS(304),
    [anon_sym_PERCENTdefine] = ACTIONS(304),
    [anon_sym_PERCENTundefine] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(290),
    [sym_string_content_with_newlines] = ACTIONS(292),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(294),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(296),
  },
  [23] = {
    [sym_string_with_newlines] = STATE(62),
    [sym__macro_expansion] = STATE(24),
    [sym_simple_expansion] = STATE(24),
    [sym_full_expansion] = STATE(24),
    [sym_shell_expansion] = STATE(24),
    [aux_sym_string_with_newlines_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(306),
    [aux_sym__simple_statements_token1] = ACTIONS(308),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(308),
    [anon_sym_PERCENTifarch] = ACTIONS(308),
    [anon_sym_PERCENTifos] = ACTIONS(308),
    [anon_sym_PERCENTifnarch] = ACTIONS(308),
    [anon_sym_PERCENTifnos] = ACTIONS(308),
    [anon_sym_AutoProv] = ACTIONS(308),
    [anon_sym_AutoReq] = ACTIONS(308),
    [anon_sym_AutoReqProv] = ACTIONS(308),
    [anon_sym_BugUrl] = ACTIONS(308),
    [anon_sym_BuildRoot] = ACTIONS(308),
    [anon_sym_BuildSystem] = ACTIONS(308),
    [anon_sym_DistTag] = ACTIONS(308),
    [anon_sym_Distribution] = ACTIONS(308),
    [anon_sym_Epoch] = ACTIONS(308),
    [anon_sym_Group] = ACTIONS(308),
    [anon_sym_License] = ACTIONS(308),
    [anon_sym_ModularityLabel] = ACTIONS(308),
    [anon_sym_Name] = ACTIONS(308),
    [anon_sym_NoPatch] = ACTIONS(308),
    [anon_sym_NoSource] = ACTIONS(308),
    [anon_sym_Packager] = ACTIONS(308),
    [anon_sym_Release] = ACTIONS(308),
    [anon_sym_SourceLicense] = ACTIONS(308),
    [anon_sym_Summary] = ACTIONS(308),
    [anon_sym_URL] = ACTIONS(308),
    [anon_sym_Url] = ACTIONS(308),
    [anon_sym_VCS] = ACTIONS(308),
    [anon_sym_Vendor] = ACTIONS(308),
    [anon_sym_Version] = ACTIONS(308),
    [aux_sym_tag_token1] = ACTIONS(308),
    [aux_sym_tag_token2] = ACTIONS(308),
    [anon_sym_Requires] = ACTIONS(308),
    [anon_sym_BuildArch] = ACTIONS(308),
    [anon_sym_BuildArchitectures] = ACTIONS(308),
    [anon_sym_BuildConflicts] = ACTIONS(308),
    [anon_sym_BuildPrereq] = ACTIONS(308),
    [anon_sym_BuildRequires] = ACTIONS(308),
    [anon_sym_Conflicts] = ACTIONS(308),
    [anon_sym_DocDir] = ACTIONS(308),
    [anon_sym_Enhances] = ACTIONS(308),
    [anon_sym_ExcludeArch] = ACTIONS(308),
    [anon_sym_ExcludeOS] = ACTIONS(308),
    [anon_sym_ExclusiveArch] = ACTIONS(308),
    [anon_sym_ExclusiveOS] = ACTIONS(308),
    [anon_sym_Obsoletes] = ACTIONS(308),
    [anon_sym_OrderWithRequires] = ACTIONS(308),
    [anon_sym_Prefix] = ACTIONS(308),
    [anon_sym_Prefixes] = ACTIONS(308),
    [anon_sym_Prereq] = ACTIONS(308),
    [anon_sym_Provides] = ACTIONS(308),
    [anon_sym_Recommends] = ACTIONS(308),
    [anon_sym_RemovePathPostfixes] = ACTIONS(308),
    [anon_sym_Suggests] = ACTIONS(308),
    [anon_sym_Supplements] = ACTIONS(308),
    [anon_sym_PERCENTdescription] = ACTIONS(308),
    [anon_sym_PERCENTpackage] = ACTIONS(308),
    [anon_sym_PERCENTprep] = ACTIONS(308),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(308),
    [anon_sym_PERCENTconf] = ACTIONS(308),
    [anon_sym_PERCENTbuild] = ACTIONS(308),
    [anon_sym_PERCENTinstall] = ACTIONS(308),
    [anon_sym_PERCENTcheck] = ACTIONS(308),
    [anon_sym_PERCENTclean] = ACTIONS(308),
    [anon_sym_PERCENTpre] = ACTIONS(308),
    [anon_sym_PERCENTpost] = ACTIONS(308),
    [anon_sym_PERCENTpreun] = ACTIONS(308),
    [anon_sym_PERCENTpostun] = ACTIONS(308),
    [anon_sym_PERCENTpretrans] = ACTIONS(308),
    [anon_sym_PERCENTposttrans] = ACTIONS(308),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(308),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(308),
    [anon_sym_PERCENTverify] = ACTIONS(308),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(308),
    [anon_sym_PERCENTtriggerin] = ACTIONS(308),
    [anon_sym_PERCENTtriggerun] = ACTIONS(308),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(308),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(308),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(308),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(308),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(308),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(308),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(308),
    [anon_sym_PERCENTfiles] = ACTIONS(308),
    [anon_sym_PERCENTchangelog] = ACTIONS(308),
    [anon_sym_PERCENTglobal] = ACTIONS(308),
    [anon_sym_PERCENTdefine] = ACTIONS(308),
    [anon_sym_PERCENTundefine] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(290),
    [sym_string_content_with_newlines] = ACTIONS(292),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(294),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(296),
  },
  [24] = {
    [sym__macro_expansion] = STATE(25),
    [sym_simple_expansion] = STATE(25),
    [sym_full_expansion] = STATE(25),
    [sym_shell_expansion] = STATE(25),
    [aux_sym_string_with_newlines_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(310),
    [aux_sym__simple_statements_token1] = ACTIONS(312),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(312),
    [anon_sym_PERCENTifarch] = ACTIONS(312),
    [anon_sym_PERCENTifos] = ACTIONS(312),
    [anon_sym_PERCENTifnarch] = ACTIONS(312),
    [anon_sym_PERCENTifnos] = ACTIONS(312),
    [anon_sym_AutoProv] = ACTIONS(312),
    [anon_sym_AutoReq] = ACTIONS(312),
    [anon_sym_AutoReqProv] = ACTIONS(312),
    [anon_sym_BugUrl] = ACTIONS(312),
    [anon_sym_BuildRoot] = ACTIONS(312),
    [anon_sym_BuildSystem] = ACTIONS(312),
    [anon_sym_DistTag] = ACTIONS(312),
    [anon_sym_Distribution] = ACTIONS(312),
    [anon_sym_Epoch] = ACTIONS(312),
    [anon_sym_Group] = ACTIONS(312),
    [anon_sym_License] = ACTIONS(312),
    [anon_sym_ModularityLabel] = ACTIONS(312),
    [anon_sym_Name] = ACTIONS(312),
    [anon_sym_NoPatch] = ACTIONS(312),
    [anon_sym_NoSource] = ACTIONS(312),
    [anon_sym_Packager] = ACTIONS(312),
    [anon_sym_Release] = ACTIONS(312),
    [anon_sym_SourceLicense] = ACTIONS(312),
    [anon_sym_Summary] = ACTIONS(312),
    [anon_sym_URL] = ACTIONS(312),
    [anon_sym_Url] = ACTIONS(312),
    [anon_sym_VCS] = ACTIONS(312),
    [anon_sym_Vendor] = ACTIONS(312),
    [anon_sym_Version] = ACTIONS(312),
    [aux_sym_tag_token1] = ACTIONS(312),
    [aux_sym_tag_token2] = ACTIONS(312),
    [anon_sym_Requires] = ACTIONS(312),
    [anon_sym_BuildArch] = ACTIONS(312),
    [anon_sym_BuildArchitectures] = ACTIONS(312),
    [anon_sym_BuildConflicts] = ACTIONS(312),
    [anon_sym_BuildPrereq] = ACTIONS(312),
    [anon_sym_BuildRequires] = ACTIONS(312),
    [anon_sym_Conflicts] = ACTIONS(312),
    [anon_sym_DocDir] = ACTIONS(312),
    [anon_sym_Enhances] = ACTIONS(312),
    [anon_sym_ExcludeArch] = ACTIONS(312),
    [anon_sym_ExcludeOS] = ACTIONS(312),
    [anon_sym_ExclusiveArch] = ACTIONS(312),
    [anon_sym_ExclusiveOS] = ACTIONS(312),
    [anon_sym_Obsoletes] = ACTIONS(312),
    [anon_sym_OrderWithRequires] = ACTIONS(312),
    [anon_sym_Prefix] = ACTIONS(312),
    [anon_sym_Prefixes] = ACTIONS(312),
    [anon_sym_Prereq] = ACTIONS(312),
    [anon_sym_Provides] = ACTIONS(312),
    [anon_sym_Recommends] = ACTIONS(312),
    [anon_sym_RemovePathPostfixes] = ACTIONS(312),
    [anon_sym_Suggests] = ACTIONS(312),
    [anon_sym_Supplements] = ACTIONS(312),
    [anon_sym_PERCENTdescription] = ACTIONS(312),
    [anon_sym_PERCENTpackage] = ACTIONS(312),
    [anon_sym_PERCENTprep] = ACTIONS(312),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(312),
    [anon_sym_PERCENTconf] = ACTIONS(312),
    [anon_sym_PERCENTbuild] = ACTIONS(312),
    [anon_sym_PERCENTinstall] = ACTIONS(312),
    [anon_sym_PERCENTcheck] = ACTIONS(312),
    [anon_sym_PERCENTclean] = ACTIONS(312),
    [anon_sym_PERCENTpre] = ACTIONS(312),
    [anon_sym_PERCENTpost] = ACTIONS(312),
    [anon_sym_PERCENTpreun] = ACTIONS(312),
    [anon_sym_PERCENTpostun] = ACTIONS(312),
    [anon_sym_PERCENTpretrans] = ACTIONS(312),
    [anon_sym_PERCENTposttrans] = ACTIONS(312),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(312),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(312),
    [anon_sym_PERCENTverify] = ACTIONS(312),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(312),
    [anon_sym_PERCENTtriggerin] = ACTIONS(312),
    [anon_sym_PERCENTtriggerun] = ACTIONS(312),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(312),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(312),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(312),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(312),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(312),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(312),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(312),
    [anon_sym_PERCENTfiles] = ACTIONS(312),
    [anon_sym_PERCENTchangelog] = ACTIONS(312),
    [anon_sym_PERCENTglobal] = ACTIONS(312),
    [anon_sym_PERCENTdefine] = ACTIONS(312),
    [anon_sym_PERCENTundefine] = ACTIONS(312),
    [anon_sym_PERCENT] = ACTIONS(290),
    [sym_string_content_with_newlines] = ACTIONS(314),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(294),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(296),
  },
  [25] = {
    [sym__macro_expansion] = STATE(25),
    [sym_simple_expansion] = STATE(25),
    [sym_full_expansion] = STATE(25),
    [sym_shell_expansion] = STATE(25),
    [aux_sym_string_with_newlines_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(316),
    [aux_sym__simple_statements_token1] = ACTIONS(318),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(318),
    [anon_sym_PERCENTifarch] = ACTIONS(318),
    [anon_sym_PERCENTifos] = ACTIONS(318),
    [anon_sym_PERCENTifnarch] = ACTIONS(318),
    [anon_sym_PERCENTifnos] = ACTIONS(318),
    [anon_sym_AutoProv] = ACTIONS(318),
    [anon_sym_AutoReq] = ACTIONS(318),
    [anon_sym_AutoReqProv] = ACTIONS(318),
    [anon_sym_BugUrl] = ACTIONS(318),
    [anon_sym_BuildRoot] = ACTIONS(318),
    [anon_sym_BuildSystem] = ACTIONS(318),
    [anon_sym_DistTag] = ACTIONS(318),
    [anon_sym_Distribution] = ACTIONS(318),
    [anon_sym_Epoch] = ACTIONS(318),
    [anon_sym_Group] = ACTIONS(318),
    [anon_sym_License] = ACTIONS(318),
    [anon_sym_ModularityLabel] = ACTIONS(318),
    [anon_sym_Name] = ACTIONS(318),
    [anon_sym_NoPatch] = ACTIONS(318),
    [anon_sym_NoSource] = ACTIONS(318),
    [anon_sym_Packager] = ACTIONS(318),
    [anon_sym_Release] = ACTIONS(318),
    [anon_sym_SourceLicense] = ACTIONS(318),
    [anon_sym_Summary] = ACTIONS(318),
    [anon_sym_URL] = ACTIONS(318),
    [anon_sym_Url] = ACTIONS(318),
    [anon_sym_VCS] = ACTIONS(318),
    [anon_sym_Vendor] = ACTIONS(318),
    [anon_sym_Version] = ACTIONS(318),
    [aux_sym_tag_token1] = ACTIONS(318),
    [aux_sym_tag_token2] = ACTIONS(318),
    [anon_sym_Requires] = ACTIONS(318),
    [anon_sym_BuildArch] = ACTIONS(318),
    [anon_sym_BuildArchitectures] = ACTIONS(318),
    [anon_sym_BuildConflicts] = ACTIONS(318),
    [anon_sym_BuildPrereq] = ACTIONS(318),
    [anon_sym_BuildRequires] = ACTIONS(318),
    [anon_sym_Conflicts] = ACTIONS(318),
    [anon_sym_DocDir] = ACTIONS(318),
    [anon_sym_Enhances] = ACTIONS(318),
    [anon_sym_ExcludeArch] = ACTIONS(318),
    [anon_sym_ExcludeOS] = ACTIONS(318),
    [anon_sym_ExclusiveArch] = ACTIONS(318),
    [anon_sym_ExclusiveOS] = ACTIONS(318),
    [anon_sym_Obsoletes] = ACTIONS(318),
    [anon_sym_OrderWithRequires] = ACTIONS(318),
    [anon_sym_Prefix] = ACTIONS(318),
    [anon_sym_Prefixes] = ACTIONS(318),
    [anon_sym_Prereq] = ACTIONS(318),
    [anon_sym_Provides] = ACTIONS(318),
    [anon_sym_Recommends] = ACTIONS(318),
    [anon_sym_RemovePathPostfixes] = ACTIONS(318),
    [anon_sym_Suggests] = ACTIONS(318),
    [anon_sym_Supplements] = ACTIONS(318),
    [anon_sym_PERCENTdescription] = ACTIONS(318),
    [anon_sym_PERCENTpackage] = ACTIONS(318),
    [anon_sym_PERCENTprep] = ACTIONS(318),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(318),
    [anon_sym_PERCENTconf] = ACTIONS(318),
    [anon_sym_PERCENTbuild] = ACTIONS(318),
    [anon_sym_PERCENTinstall] = ACTIONS(318),
    [anon_sym_PERCENTcheck] = ACTIONS(318),
    [anon_sym_PERCENTclean] = ACTIONS(318),
    [anon_sym_PERCENTpre] = ACTIONS(318),
    [anon_sym_PERCENTpost] = ACTIONS(318),
    [anon_sym_PERCENTpreun] = ACTIONS(318),
    [anon_sym_PERCENTpostun] = ACTIONS(318),
    [anon_sym_PERCENTpretrans] = ACTIONS(318),
    [anon_sym_PERCENTposttrans] = ACTIONS(318),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(318),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(318),
    [anon_sym_PERCENTverify] = ACTIONS(318),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(318),
    [anon_sym_PERCENTtriggerin] = ACTIONS(318),
    [anon_sym_PERCENTtriggerun] = ACTIONS(318),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(318),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(318),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(318),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(318),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(318),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(318),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(318),
    [anon_sym_PERCENTfiles] = ACTIONS(318),
    [anon_sym_PERCENTchangelog] = ACTIONS(318),
    [anon_sym_PERCENTglobal] = ACTIONS(318),
    [anon_sym_PERCENTdefine] = ACTIONS(318),
    [anon_sym_PERCENTundefine] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(320),
    [sym_string_content_with_newlines] = ACTIONS(323),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(326),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(329),
  },
  [26] = {
    [aux_sym_changelog_entry_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(332),
    [aux_sym__simple_statements_token1] = ACTIONS(332),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(334),
    [anon_sym_PERCENTifarch] = ACTIONS(334),
    [anon_sym_PERCENTifos] = ACTIONS(334),
    [anon_sym_PERCENTifnarch] = ACTIONS(334),
    [anon_sym_PERCENTifnos] = ACTIONS(334),
    [anon_sym_AutoProv] = ACTIONS(334),
    [anon_sym_AutoReq] = ACTIONS(334),
    [anon_sym_AutoReqProv] = ACTIONS(334),
    [anon_sym_BugUrl] = ACTIONS(334),
    [anon_sym_BuildRoot] = ACTIONS(334),
    [anon_sym_BuildSystem] = ACTIONS(334),
    [anon_sym_DistTag] = ACTIONS(334),
    [anon_sym_Distribution] = ACTIONS(334),
    [anon_sym_Epoch] = ACTIONS(334),
    [anon_sym_Group] = ACTIONS(334),
    [anon_sym_License] = ACTIONS(334),
    [anon_sym_ModularityLabel] = ACTIONS(334),
    [anon_sym_Name] = ACTIONS(334),
    [anon_sym_NoPatch] = ACTIONS(334),
    [anon_sym_NoSource] = ACTIONS(334),
    [anon_sym_Packager] = ACTIONS(334),
    [anon_sym_Release] = ACTIONS(334),
    [anon_sym_SourceLicense] = ACTIONS(334),
    [anon_sym_Summary] = ACTIONS(334),
    [anon_sym_URL] = ACTIONS(334),
    [anon_sym_Url] = ACTIONS(334),
    [anon_sym_VCS] = ACTIONS(334),
    [anon_sym_Vendor] = ACTIONS(334),
    [anon_sym_Version] = ACTIONS(334),
    [aux_sym_tag_token1] = ACTIONS(334),
    [aux_sym_tag_token2] = ACTIONS(334),
    [anon_sym_Requires] = ACTIONS(334),
    [anon_sym_BuildArch] = ACTIONS(334),
    [anon_sym_BuildArchitectures] = ACTIONS(334),
    [anon_sym_BuildConflicts] = ACTIONS(334),
    [anon_sym_BuildPrereq] = ACTIONS(334),
    [anon_sym_BuildRequires] = ACTIONS(334),
    [anon_sym_Conflicts] = ACTIONS(334),
    [anon_sym_DocDir] = ACTIONS(334),
    [anon_sym_Enhances] = ACTIONS(334),
    [anon_sym_ExcludeArch] = ACTIONS(334),
    [anon_sym_ExcludeOS] = ACTIONS(334),
    [anon_sym_ExclusiveArch] = ACTIONS(334),
    [anon_sym_ExclusiveOS] = ACTIONS(334),
    [anon_sym_Obsoletes] = ACTIONS(334),
    [anon_sym_OrderWithRequires] = ACTIONS(334),
    [anon_sym_Prefix] = ACTIONS(334),
    [anon_sym_Prefixes] = ACTIONS(334),
    [anon_sym_Prereq] = ACTIONS(334),
    [anon_sym_Provides] = ACTIONS(334),
    [anon_sym_Recommends] = ACTIONS(334),
    [anon_sym_RemovePathPostfixes] = ACTIONS(334),
    [anon_sym_Suggests] = ACTIONS(334),
    [anon_sym_Supplements] = ACTIONS(334),
    [anon_sym_PERCENTdescription] = ACTIONS(334),
    [anon_sym_PERCENTpackage] = ACTIONS(334),
    [anon_sym_PERCENTprep] = ACTIONS(334),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(334),
    [anon_sym_PERCENTconf] = ACTIONS(334),
    [anon_sym_PERCENTbuild] = ACTIONS(334),
    [anon_sym_PERCENTinstall] = ACTIONS(334),
    [anon_sym_PERCENTcheck] = ACTIONS(334),
    [anon_sym_PERCENTclean] = ACTIONS(334),
    [anon_sym_PERCENTpre] = ACTIONS(334),
    [anon_sym_PERCENTpost] = ACTIONS(334),
    [anon_sym_PERCENTpreun] = ACTIONS(334),
    [anon_sym_PERCENTpostun] = ACTIONS(334),
    [anon_sym_PERCENTpretrans] = ACTIONS(334),
    [anon_sym_PERCENTposttrans] = ACTIONS(334),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(334),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(334),
    [anon_sym_PERCENTverify] = ACTIONS(334),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(334),
    [anon_sym_PERCENTtriggerin] = ACTIONS(334),
    [anon_sym_PERCENTtriggerun] = ACTIONS(334),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(334),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(334),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(334),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(334),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(334),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(334),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(334),
    [anon_sym_PERCENTfiles] = ACTIONS(334),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_PERCENTchangelog] = ACTIONS(334),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_PERCENTglobal] = ACTIONS(334),
    [anon_sym_PERCENTdefine] = ACTIONS(334),
    [anon_sym_PERCENTundefine] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(334),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(334),
  },
  [27] = {
    [sym_changelog_entry] = STATE(30),
    [aux_sym_changelog_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(339),
    [aux_sym__simple_statements_token1] = ACTIONS(339),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(341),
    [anon_sym_PERCENTifarch] = ACTIONS(341),
    [anon_sym_PERCENTifos] = ACTIONS(341),
    [anon_sym_PERCENTifnarch] = ACTIONS(341),
    [anon_sym_PERCENTifnos] = ACTIONS(341),
    [anon_sym_AutoProv] = ACTIONS(341),
    [anon_sym_AutoReq] = ACTIONS(341),
    [anon_sym_AutoReqProv] = ACTIONS(341),
    [anon_sym_BugUrl] = ACTIONS(341),
    [anon_sym_BuildRoot] = ACTIONS(341),
    [anon_sym_BuildSystem] = ACTIONS(341),
    [anon_sym_DistTag] = ACTIONS(341),
    [anon_sym_Distribution] = ACTIONS(341),
    [anon_sym_Epoch] = ACTIONS(341),
    [anon_sym_Group] = ACTIONS(341),
    [anon_sym_License] = ACTIONS(341),
    [anon_sym_ModularityLabel] = ACTIONS(341),
    [anon_sym_Name] = ACTIONS(341),
    [anon_sym_NoPatch] = ACTIONS(341),
    [anon_sym_NoSource] = ACTIONS(341),
    [anon_sym_Packager] = ACTIONS(341),
    [anon_sym_Release] = ACTIONS(341),
    [anon_sym_SourceLicense] = ACTIONS(341),
    [anon_sym_Summary] = ACTIONS(341),
    [anon_sym_URL] = ACTIONS(341),
    [anon_sym_Url] = ACTIONS(341),
    [anon_sym_VCS] = ACTIONS(341),
    [anon_sym_Vendor] = ACTIONS(341),
    [anon_sym_Version] = ACTIONS(341),
    [aux_sym_tag_token1] = ACTIONS(341),
    [aux_sym_tag_token2] = ACTIONS(341),
    [anon_sym_Requires] = ACTIONS(341),
    [anon_sym_BuildArch] = ACTIONS(341),
    [anon_sym_BuildArchitectures] = ACTIONS(341),
    [anon_sym_BuildConflicts] = ACTIONS(341),
    [anon_sym_BuildPrereq] = ACTIONS(341),
    [anon_sym_BuildRequires] = ACTIONS(341),
    [anon_sym_Conflicts] = ACTIONS(341),
    [anon_sym_DocDir] = ACTIONS(341),
    [anon_sym_Enhances] = ACTIONS(341),
    [anon_sym_ExcludeArch] = ACTIONS(341),
    [anon_sym_ExcludeOS] = ACTIONS(341),
    [anon_sym_ExclusiveArch] = ACTIONS(341),
    [anon_sym_ExclusiveOS] = ACTIONS(341),
    [anon_sym_Obsoletes] = ACTIONS(341),
    [anon_sym_OrderWithRequires] = ACTIONS(341),
    [anon_sym_Prefix] = ACTIONS(341),
    [anon_sym_Prefixes] = ACTIONS(341),
    [anon_sym_Prereq] = ACTIONS(341),
    [anon_sym_Provides] = ACTIONS(341),
    [anon_sym_Recommends] = ACTIONS(341),
    [anon_sym_RemovePathPostfixes] = ACTIONS(341),
    [anon_sym_Suggests] = ACTIONS(341),
    [anon_sym_Supplements] = ACTIONS(341),
    [anon_sym_PERCENTdescription] = ACTIONS(341),
    [anon_sym_PERCENTpackage] = ACTIONS(341),
    [anon_sym_PERCENTprep] = ACTIONS(341),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(341),
    [anon_sym_PERCENTconf] = ACTIONS(341),
    [anon_sym_PERCENTbuild] = ACTIONS(341),
    [anon_sym_PERCENTinstall] = ACTIONS(341),
    [anon_sym_PERCENTcheck] = ACTIONS(341),
    [anon_sym_PERCENTclean] = ACTIONS(341),
    [anon_sym_PERCENTpre] = ACTIONS(341),
    [anon_sym_PERCENTpost] = ACTIONS(341),
    [anon_sym_PERCENTpreun] = ACTIONS(341),
    [anon_sym_PERCENTpostun] = ACTIONS(341),
    [anon_sym_PERCENTpretrans] = ACTIONS(341),
    [anon_sym_PERCENTposttrans] = ACTIONS(341),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(341),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(341),
    [anon_sym_PERCENTverify] = ACTIONS(341),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(341),
    [anon_sym_PERCENTtriggerin] = ACTIONS(341),
    [anon_sym_PERCENTtriggerun] = ACTIONS(341),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(341),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(341),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(341),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(341),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(341),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(341),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(341),
    [anon_sym_PERCENTfiles] = ACTIONS(341),
    [anon_sym_PERCENTchangelog] = ACTIONS(341),
    [anon_sym_STAR] = ACTIONS(343),
    [anon_sym_PERCENTglobal] = ACTIONS(341),
    [anon_sym_PERCENTdefine] = ACTIONS(341),
    [anon_sym_PERCENTundefine] = ACTIONS(341),
    [anon_sym_PERCENT] = ACTIONS(341),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(341),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(341),
  },
  [28] = {
    [aux_sym_changelog_entry_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(345),
    [aux_sym__simple_statements_token1] = ACTIONS(345),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(347),
    [anon_sym_PERCENTifarch] = ACTIONS(347),
    [anon_sym_PERCENTifos] = ACTIONS(347),
    [anon_sym_PERCENTifnarch] = ACTIONS(347),
    [anon_sym_PERCENTifnos] = ACTIONS(347),
    [anon_sym_AutoProv] = ACTIONS(347),
    [anon_sym_AutoReq] = ACTIONS(347),
    [anon_sym_AutoReqProv] = ACTIONS(347),
    [anon_sym_BugUrl] = ACTIONS(347),
    [anon_sym_BuildRoot] = ACTIONS(347),
    [anon_sym_BuildSystem] = ACTIONS(347),
    [anon_sym_DistTag] = ACTIONS(347),
    [anon_sym_Distribution] = ACTIONS(347),
    [anon_sym_Epoch] = ACTIONS(347),
    [anon_sym_Group] = ACTIONS(347),
    [anon_sym_License] = ACTIONS(347),
    [anon_sym_ModularityLabel] = ACTIONS(347),
    [anon_sym_Name] = ACTIONS(347),
    [anon_sym_NoPatch] = ACTIONS(347),
    [anon_sym_NoSource] = ACTIONS(347),
    [anon_sym_Packager] = ACTIONS(347),
    [anon_sym_Release] = ACTIONS(347),
    [anon_sym_SourceLicense] = ACTIONS(347),
    [anon_sym_Summary] = ACTIONS(347),
    [anon_sym_URL] = ACTIONS(347),
    [anon_sym_Url] = ACTIONS(347),
    [anon_sym_VCS] = ACTIONS(347),
    [anon_sym_Vendor] = ACTIONS(347),
    [anon_sym_Version] = ACTIONS(347),
    [aux_sym_tag_token1] = ACTIONS(347),
    [aux_sym_tag_token2] = ACTIONS(347),
    [anon_sym_Requires] = ACTIONS(347),
    [anon_sym_BuildArch] = ACTIONS(347),
    [anon_sym_BuildArchitectures] = ACTIONS(347),
    [anon_sym_BuildConflicts] = ACTIONS(347),
    [anon_sym_BuildPrereq] = ACTIONS(347),
    [anon_sym_BuildRequires] = ACTIONS(347),
    [anon_sym_Conflicts] = ACTIONS(347),
    [anon_sym_DocDir] = ACTIONS(347),
    [anon_sym_Enhances] = ACTIONS(347),
    [anon_sym_ExcludeArch] = ACTIONS(347),
    [anon_sym_ExcludeOS] = ACTIONS(347),
    [anon_sym_ExclusiveArch] = ACTIONS(347),
    [anon_sym_ExclusiveOS] = ACTIONS(347),
    [anon_sym_Obsoletes] = ACTIONS(347),
    [anon_sym_OrderWithRequires] = ACTIONS(347),
    [anon_sym_Prefix] = ACTIONS(347),
    [anon_sym_Prefixes] = ACTIONS(347),
    [anon_sym_Prereq] = ACTIONS(347),
    [anon_sym_Provides] = ACTIONS(347),
    [anon_sym_Recommends] = ACTIONS(347),
    [anon_sym_RemovePathPostfixes] = ACTIONS(347),
    [anon_sym_Suggests] = ACTIONS(347),
    [anon_sym_Supplements] = ACTIONS(347),
    [anon_sym_PERCENTdescription] = ACTIONS(347),
    [anon_sym_PERCENTpackage] = ACTIONS(347),
    [anon_sym_PERCENTprep] = ACTIONS(347),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(347),
    [anon_sym_PERCENTconf] = ACTIONS(347),
    [anon_sym_PERCENTbuild] = ACTIONS(347),
    [anon_sym_PERCENTinstall] = ACTIONS(347),
    [anon_sym_PERCENTcheck] = ACTIONS(347),
    [anon_sym_PERCENTclean] = ACTIONS(347),
    [anon_sym_PERCENTpre] = ACTIONS(347),
    [anon_sym_PERCENTpost] = ACTIONS(347),
    [anon_sym_PERCENTpreun] = ACTIONS(347),
    [anon_sym_PERCENTpostun] = ACTIONS(347),
    [anon_sym_PERCENTpretrans] = ACTIONS(347),
    [anon_sym_PERCENTposttrans] = ACTIONS(347),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(347),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(347),
    [anon_sym_PERCENTverify] = ACTIONS(347),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(347),
    [anon_sym_PERCENTtriggerin] = ACTIONS(347),
    [anon_sym_PERCENTtriggerun] = ACTIONS(347),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(347),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(347),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(347),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(347),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(347),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(347),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(347),
    [anon_sym_PERCENTfiles] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_PERCENTchangelog] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_PERCENTglobal] = ACTIONS(347),
    [anon_sym_PERCENTdefine] = ACTIONS(347),
    [anon_sym_PERCENTundefine] = ACTIONS(347),
    [anon_sym_PERCENT] = ACTIONS(347),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(347),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(347),
  },
  [29] = {
    [sym_changelog_entry] = STATE(27),
    [aux_sym_changelog_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(351),
    [aux_sym__simple_statements_token1] = ACTIONS(351),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(353),
    [anon_sym_PERCENTifarch] = ACTIONS(353),
    [anon_sym_PERCENTifos] = ACTIONS(353),
    [anon_sym_PERCENTifnarch] = ACTIONS(353),
    [anon_sym_PERCENTifnos] = ACTIONS(353),
    [anon_sym_AutoProv] = ACTIONS(353),
    [anon_sym_AutoReq] = ACTIONS(353),
    [anon_sym_AutoReqProv] = ACTIONS(353),
    [anon_sym_BugUrl] = ACTIONS(353),
    [anon_sym_BuildRoot] = ACTIONS(353),
    [anon_sym_BuildSystem] = ACTIONS(353),
    [anon_sym_DistTag] = ACTIONS(353),
    [anon_sym_Distribution] = ACTIONS(353),
    [anon_sym_Epoch] = ACTIONS(353),
    [anon_sym_Group] = ACTIONS(353),
    [anon_sym_License] = ACTIONS(353),
    [anon_sym_ModularityLabel] = ACTIONS(353),
    [anon_sym_Name] = ACTIONS(353),
    [anon_sym_NoPatch] = ACTIONS(353),
    [anon_sym_NoSource] = ACTIONS(353),
    [anon_sym_Packager] = ACTIONS(353),
    [anon_sym_Release] = ACTIONS(353),
    [anon_sym_SourceLicense] = ACTIONS(353),
    [anon_sym_Summary] = ACTIONS(353),
    [anon_sym_URL] = ACTIONS(353),
    [anon_sym_Url] = ACTIONS(353),
    [anon_sym_VCS] = ACTIONS(353),
    [anon_sym_Vendor] = ACTIONS(353),
    [anon_sym_Version] = ACTIONS(353),
    [aux_sym_tag_token1] = ACTIONS(353),
    [aux_sym_tag_token2] = ACTIONS(353),
    [anon_sym_Requires] = ACTIONS(353),
    [anon_sym_BuildArch] = ACTIONS(353),
    [anon_sym_BuildArchitectures] = ACTIONS(353),
    [anon_sym_BuildConflicts] = ACTIONS(353),
    [anon_sym_BuildPrereq] = ACTIONS(353),
    [anon_sym_BuildRequires] = ACTIONS(353),
    [anon_sym_Conflicts] = ACTIONS(353),
    [anon_sym_DocDir] = ACTIONS(353),
    [anon_sym_Enhances] = ACTIONS(353),
    [anon_sym_ExcludeArch] = ACTIONS(353),
    [anon_sym_ExcludeOS] = ACTIONS(353),
    [anon_sym_ExclusiveArch] = ACTIONS(353),
    [anon_sym_ExclusiveOS] = ACTIONS(353),
    [anon_sym_Obsoletes] = ACTIONS(353),
    [anon_sym_OrderWithRequires] = ACTIONS(353),
    [anon_sym_Prefix] = ACTIONS(353),
    [anon_sym_Prefixes] = ACTIONS(353),
    [anon_sym_Prereq] = ACTIONS(353),
    [anon_sym_Provides] = ACTIONS(353),
    [anon_sym_Recommends] = ACTIONS(353),
    [anon_sym_RemovePathPostfixes] = ACTIONS(353),
    [anon_sym_Suggests] = ACTIONS(353),
    [anon_sym_Supplements] = ACTIONS(353),
    [anon_sym_PERCENTdescription] = ACTIONS(353),
    [anon_sym_PERCENTpackage] = ACTIONS(353),
    [anon_sym_PERCENTprep] = ACTIONS(353),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(353),
    [anon_sym_PERCENTconf] = ACTIONS(353),
    [anon_sym_PERCENTbuild] = ACTIONS(353),
    [anon_sym_PERCENTinstall] = ACTIONS(353),
    [anon_sym_PERCENTcheck] = ACTIONS(353),
    [anon_sym_PERCENTclean] = ACTIONS(353),
    [anon_sym_PERCENTpre] = ACTIONS(353),
    [anon_sym_PERCENTpost] = ACTIONS(353),
    [anon_sym_PERCENTpreun] = ACTIONS(353),
    [anon_sym_PERCENTpostun] = ACTIONS(353),
    [anon_sym_PERCENTpretrans] = ACTIONS(353),
    [anon_sym_PERCENTposttrans] = ACTIONS(353),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(353),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(353),
    [anon_sym_PERCENTverify] = ACTIONS(353),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(353),
    [anon_sym_PERCENTtriggerin] = ACTIONS(353),
    [anon_sym_PERCENTtriggerun] = ACTIONS(353),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(353),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(353),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(353),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(353),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(353),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(353),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(353),
    [anon_sym_PERCENTfiles] = ACTIONS(353),
    [anon_sym_PERCENTchangelog] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(343),
    [anon_sym_PERCENTglobal] = ACTIONS(353),
    [anon_sym_PERCENTdefine] = ACTIONS(353),
    [anon_sym_PERCENTundefine] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(353),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(353),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(353),
  },
  [30] = {
    [sym_changelog_entry] = STATE(30),
    [aux_sym_changelog_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(355),
    [aux_sym__simple_statements_token1] = ACTIONS(355),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(357),
    [anon_sym_PERCENTifarch] = ACTIONS(357),
    [anon_sym_PERCENTifos] = ACTIONS(357),
    [anon_sym_PERCENTifnarch] = ACTIONS(357),
    [anon_sym_PERCENTifnos] = ACTIONS(357),
    [anon_sym_AutoProv] = ACTIONS(357),
    [anon_sym_AutoReq] = ACTIONS(357),
    [anon_sym_AutoReqProv] = ACTIONS(357),
    [anon_sym_BugUrl] = ACTIONS(357),
    [anon_sym_BuildRoot] = ACTIONS(357),
    [anon_sym_BuildSystem] = ACTIONS(357),
    [anon_sym_DistTag] = ACTIONS(357),
    [anon_sym_Distribution] = ACTIONS(357),
    [anon_sym_Epoch] = ACTIONS(357),
    [anon_sym_Group] = ACTIONS(357),
    [anon_sym_License] = ACTIONS(357),
    [anon_sym_ModularityLabel] = ACTIONS(357),
    [anon_sym_Name] = ACTIONS(357),
    [anon_sym_NoPatch] = ACTIONS(357),
    [anon_sym_NoSource] = ACTIONS(357),
    [anon_sym_Packager] = ACTIONS(357),
    [anon_sym_Release] = ACTIONS(357),
    [anon_sym_SourceLicense] = ACTIONS(357),
    [anon_sym_Summary] = ACTIONS(357),
    [anon_sym_URL] = ACTIONS(357),
    [anon_sym_Url] = ACTIONS(357),
    [anon_sym_VCS] = ACTIONS(357),
    [anon_sym_Vendor] = ACTIONS(357),
    [anon_sym_Version] = ACTIONS(357),
    [aux_sym_tag_token1] = ACTIONS(357),
    [aux_sym_tag_token2] = ACTIONS(357),
    [anon_sym_Requires] = ACTIONS(357),
    [anon_sym_BuildArch] = ACTIONS(357),
    [anon_sym_BuildArchitectures] = ACTIONS(357),
    [anon_sym_BuildConflicts] = ACTIONS(357),
    [anon_sym_BuildPrereq] = ACTIONS(357),
    [anon_sym_BuildRequires] = ACTIONS(357),
    [anon_sym_Conflicts] = ACTIONS(357),
    [anon_sym_DocDir] = ACTIONS(357),
    [anon_sym_Enhances] = ACTIONS(357),
    [anon_sym_ExcludeArch] = ACTIONS(357),
    [anon_sym_ExcludeOS] = ACTIONS(357),
    [anon_sym_ExclusiveArch] = ACTIONS(357),
    [anon_sym_ExclusiveOS] = ACTIONS(357),
    [anon_sym_Obsoletes] = ACTIONS(357),
    [anon_sym_OrderWithRequires] = ACTIONS(357),
    [anon_sym_Prefix] = ACTIONS(357),
    [anon_sym_Prefixes] = ACTIONS(357),
    [anon_sym_Prereq] = ACTIONS(357),
    [anon_sym_Provides] = ACTIONS(357),
    [anon_sym_Recommends] = ACTIONS(357),
    [anon_sym_RemovePathPostfixes] = ACTIONS(357),
    [anon_sym_Suggests] = ACTIONS(357),
    [anon_sym_Supplements] = ACTIONS(357),
    [anon_sym_PERCENTdescription] = ACTIONS(357),
    [anon_sym_PERCENTpackage] = ACTIONS(357),
    [anon_sym_PERCENTprep] = ACTIONS(357),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(357),
    [anon_sym_PERCENTconf] = ACTIONS(357),
    [anon_sym_PERCENTbuild] = ACTIONS(357),
    [anon_sym_PERCENTinstall] = ACTIONS(357),
    [anon_sym_PERCENTcheck] = ACTIONS(357),
    [anon_sym_PERCENTclean] = ACTIONS(357),
    [anon_sym_PERCENTpre] = ACTIONS(357),
    [anon_sym_PERCENTpost] = ACTIONS(357),
    [anon_sym_PERCENTpreun] = ACTIONS(357),
    [anon_sym_PERCENTpostun] = ACTIONS(357),
    [anon_sym_PERCENTpretrans] = ACTIONS(357),
    [anon_sym_PERCENTposttrans] = ACTIONS(357),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(357),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(357),
    [anon_sym_PERCENTverify] = ACTIONS(357),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(357),
    [anon_sym_PERCENTtriggerin] = ACTIONS(357),
    [anon_sym_PERCENTtriggerun] = ACTIONS(357),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(357),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(357),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(357),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(357),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(357),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(357),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(357),
    [anon_sym_PERCENTfiles] = ACTIONS(357),
    [anon_sym_PERCENTchangelog] = ACTIONS(357),
    [anon_sym_STAR] = ACTIONS(359),
    [anon_sym_PERCENTglobal] = ACTIONS(357),
    [anon_sym_PERCENTdefine] = ACTIONS(357),
    [anon_sym_PERCENTundefine] = ACTIONS(357),
    [anon_sym_PERCENT] = ACTIONS(357),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(357),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(357),
  },
  [31] = {
    [aux_sym_changelog_entry_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(362),
    [aux_sym__simple_statements_token1] = ACTIONS(362),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(364),
    [anon_sym_PERCENTifarch] = ACTIONS(364),
    [anon_sym_PERCENTifos] = ACTIONS(364),
    [anon_sym_PERCENTifnarch] = ACTIONS(364),
    [anon_sym_PERCENTifnos] = ACTIONS(364),
    [anon_sym_AutoProv] = ACTIONS(364),
    [anon_sym_AutoReq] = ACTIONS(364),
    [anon_sym_AutoReqProv] = ACTIONS(364),
    [anon_sym_BugUrl] = ACTIONS(364),
    [anon_sym_BuildRoot] = ACTIONS(364),
    [anon_sym_BuildSystem] = ACTIONS(364),
    [anon_sym_DistTag] = ACTIONS(364),
    [anon_sym_Distribution] = ACTIONS(364),
    [anon_sym_Epoch] = ACTIONS(364),
    [anon_sym_Group] = ACTIONS(364),
    [anon_sym_License] = ACTIONS(364),
    [anon_sym_ModularityLabel] = ACTIONS(364),
    [anon_sym_Name] = ACTIONS(364),
    [anon_sym_NoPatch] = ACTIONS(364),
    [anon_sym_NoSource] = ACTIONS(364),
    [anon_sym_Packager] = ACTIONS(364),
    [anon_sym_Release] = ACTIONS(364),
    [anon_sym_SourceLicense] = ACTIONS(364),
    [anon_sym_Summary] = ACTIONS(364),
    [anon_sym_URL] = ACTIONS(364),
    [anon_sym_Url] = ACTIONS(364),
    [anon_sym_VCS] = ACTIONS(364),
    [anon_sym_Vendor] = ACTIONS(364),
    [anon_sym_Version] = ACTIONS(364),
    [aux_sym_tag_token1] = ACTIONS(364),
    [aux_sym_tag_token2] = ACTIONS(364),
    [anon_sym_Requires] = ACTIONS(364),
    [anon_sym_BuildArch] = ACTIONS(364),
    [anon_sym_BuildArchitectures] = ACTIONS(364),
    [anon_sym_BuildConflicts] = ACTIONS(364),
    [anon_sym_BuildPrereq] = ACTIONS(364),
    [anon_sym_BuildRequires] = ACTIONS(364),
    [anon_sym_Conflicts] = ACTIONS(364),
    [anon_sym_DocDir] = ACTIONS(364),
    [anon_sym_Enhances] = ACTIONS(364),
    [anon_sym_ExcludeArch] = ACTIONS(364),
    [anon_sym_ExcludeOS] = ACTIONS(364),
    [anon_sym_ExclusiveArch] = ACTIONS(364),
    [anon_sym_ExclusiveOS] = ACTIONS(364),
    [anon_sym_Obsoletes] = ACTIONS(364),
    [anon_sym_OrderWithRequires] = ACTIONS(364),
    [anon_sym_Prefix] = ACTIONS(364),
    [anon_sym_Prefixes] = ACTIONS(364),
    [anon_sym_Prereq] = ACTIONS(364),
    [anon_sym_Provides] = ACTIONS(364),
    [anon_sym_Recommends] = ACTIONS(364),
    [anon_sym_RemovePathPostfixes] = ACTIONS(364),
    [anon_sym_Suggests] = ACTIONS(364),
    [anon_sym_Supplements] = ACTIONS(364),
    [anon_sym_PERCENTdescription] = ACTIONS(364),
    [anon_sym_PERCENTpackage] = ACTIONS(364),
    [anon_sym_PERCENTprep] = ACTIONS(364),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(364),
    [anon_sym_PERCENTconf] = ACTIONS(364),
    [anon_sym_PERCENTbuild] = ACTIONS(364),
    [anon_sym_PERCENTinstall] = ACTIONS(364),
    [anon_sym_PERCENTcheck] = ACTIONS(364),
    [anon_sym_PERCENTclean] = ACTIONS(364),
    [anon_sym_PERCENTpre] = ACTIONS(364),
    [anon_sym_PERCENTpost] = ACTIONS(364),
    [anon_sym_PERCENTpreun] = ACTIONS(364),
    [anon_sym_PERCENTpostun] = ACTIONS(364),
    [anon_sym_PERCENTpretrans] = ACTIONS(364),
    [anon_sym_PERCENTposttrans] = ACTIONS(364),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(364),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(364),
    [anon_sym_PERCENTverify] = ACTIONS(364),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(364),
    [anon_sym_PERCENTtriggerin] = ACTIONS(364),
    [anon_sym_PERCENTtriggerun] = ACTIONS(364),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(364),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(364),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(364),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(364),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(364),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(364),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(364),
    [anon_sym_PERCENTfiles] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_PERCENTchangelog] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(364),
    [anon_sym_PERCENTglobal] = ACTIONS(364),
    [anon_sym_PERCENTdefine] = ACTIONS(364),
    [anon_sym_PERCENTundefine] = ACTIONS(364),
    [anon_sym_PERCENT] = ACTIONS(364),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(364),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(364),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(366),
    [aux_sym__simple_statements_token1] = ACTIONS(368),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(368),
    [anon_sym_PERCENTifarch] = ACTIONS(368),
    [anon_sym_PERCENTifos] = ACTIONS(368),
    [anon_sym_PERCENTifnarch] = ACTIONS(368),
    [anon_sym_PERCENTifnos] = ACTIONS(368),
    [anon_sym_AutoProv] = ACTIONS(368),
    [anon_sym_AutoReq] = ACTIONS(368),
    [anon_sym_AutoReqProv] = ACTIONS(368),
    [anon_sym_BugUrl] = ACTIONS(368),
    [anon_sym_BuildRoot] = ACTIONS(368),
    [anon_sym_BuildSystem] = ACTIONS(368),
    [anon_sym_DistTag] = ACTIONS(368),
    [anon_sym_Distribution] = ACTIONS(368),
    [anon_sym_Epoch] = ACTIONS(368),
    [anon_sym_Group] = ACTIONS(368),
    [anon_sym_License] = ACTIONS(368),
    [anon_sym_ModularityLabel] = ACTIONS(368),
    [anon_sym_Name] = ACTIONS(368),
    [anon_sym_NoPatch] = ACTIONS(368),
    [anon_sym_NoSource] = ACTIONS(368),
    [anon_sym_Packager] = ACTIONS(368),
    [anon_sym_Release] = ACTIONS(368),
    [anon_sym_SourceLicense] = ACTIONS(368),
    [anon_sym_Summary] = ACTIONS(368),
    [anon_sym_URL] = ACTIONS(368),
    [anon_sym_Url] = ACTIONS(368),
    [anon_sym_VCS] = ACTIONS(368),
    [anon_sym_Vendor] = ACTIONS(368),
    [anon_sym_Version] = ACTIONS(368),
    [aux_sym_tag_token1] = ACTIONS(368),
    [aux_sym_tag_token2] = ACTIONS(368),
    [anon_sym_Requires] = ACTIONS(368),
    [anon_sym_BuildArch] = ACTIONS(368),
    [anon_sym_BuildArchitectures] = ACTIONS(368),
    [anon_sym_BuildConflicts] = ACTIONS(368),
    [anon_sym_BuildPrereq] = ACTIONS(368),
    [anon_sym_BuildRequires] = ACTIONS(368),
    [anon_sym_Conflicts] = ACTIONS(368),
    [anon_sym_DocDir] = ACTIONS(368),
    [anon_sym_Enhances] = ACTIONS(368),
    [anon_sym_ExcludeArch] = ACTIONS(368),
    [anon_sym_ExcludeOS] = ACTIONS(368),
    [anon_sym_ExclusiveArch] = ACTIONS(368),
    [anon_sym_ExclusiveOS] = ACTIONS(368),
    [anon_sym_Obsoletes] = ACTIONS(368),
    [anon_sym_OrderWithRequires] = ACTIONS(368),
    [anon_sym_Prefix] = ACTIONS(368),
    [anon_sym_Prefixes] = ACTIONS(368),
    [anon_sym_Prereq] = ACTIONS(368),
    [anon_sym_Provides] = ACTIONS(368),
    [anon_sym_Recommends] = ACTIONS(368),
    [anon_sym_RemovePathPostfixes] = ACTIONS(368),
    [anon_sym_Suggests] = ACTIONS(368),
    [anon_sym_Supplements] = ACTIONS(368),
    [anon_sym_PERCENTdescription] = ACTIONS(368),
    [anon_sym_PERCENTpackage] = ACTIONS(368),
    [anon_sym_PERCENTprep] = ACTIONS(368),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(368),
    [anon_sym_PERCENTconf] = ACTIONS(368),
    [anon_sym_PERCENTbuild] = ACTIONS(368),
    [anon_sym_PERCENTinstall] = ACTIONS(368),
    [anon_sym_PERCENTcheck] = ACTIONS(368),
    [anon_sym_PERCENTclean] = ACTIONS(368),
    [anon_sym_PERCENTpre] = ACTIONS(368),
    [anon_sym_PERCENTpost] = ACTIONS(368),
    [anon_sym_PERCENTpreun] = ACTIONS(368),
    [anon_sym_PERCENTpostun] = ACTIONS(368),
    [anon_sym_PERCENTpretrans] = ACTIONS(368),
    [anon_sym_PERCENTposttrans] = ACTIONS(368),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(368),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(368),
    [anon_sym_PERCENTverify] = ACTIONS(368),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(368),
    [anon_sym_PERCENTtriggerin] = ACTIONS(368),
    [anon_sym_PERCENTtriggerun] = ACTIONS(368),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(368),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(368),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(368),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(368),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(368),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(368),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(368),
    [anon_sym_PERCENTfiles] = ACTIONS(368),
    [anon_sym_PERCENTchangelog] = ACTIONS(368),
    [anon_sym_PERCENTglobal] = ACTIONS(368),
    [anon_sym_PERCENTdefine] = ACTIONS(368),
    [anon_sym_PERCENTundefine] = ACTIONS(368),
    [sym_integer] = ACTIONS(368),
    [sym_float] = ACTIONS(368),
    [anon_sym_PERCENT] = ACTIONS(368),
    [sym_string_content] = ACTIONS(368),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(368),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(368),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [aux_sym__simple_statements_token1] = ACTIONS(370),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(372),
    [anon_sym_PERCENTifarch] = ACTIONS(372),
    [anon_sym_PERCENTifos] = ACTIONS(372),
    [anon_sym_PERCENTifnarch] = ACTIONS(372),
    [anon_sym_PERCENTifnos] = ACTIONS(372),
    [anon_sym_AutoProv] = ACTIONS(372),
    [anon_sym_AutoReq] = ACTIONS(372),
    [anon_sym_AutoReqProv] = ACTIONS(372),
    [anon_sym_BugUrl] = ACTIONS(372),
    [anon_sym_BuildRoot] = ACTIONS(372),
    [anon_sym_BuildSystem] = ACTIONS(372),
    [anon_sym_DistTag] = ACTIONS(372),
    [anon_sym_Distribution] = ACTIONS(372),
    [anon_sym_Epoch] = ACTIONS(372),
    [anon_sym_Group] = ACTIONS(372),
    [anon_sym_License] = ACTIONS(372),
    [anon_sym_ModularityLabel] = ACTIONS(372),
    [anon_sym_Name] = ACTIONS(372),
    [anon_sym_NoPatch] = ACTIONS(372),
    [anon_sym_NoSource] = ACTIONS(372),
    [anon_sym_Packager] = ACTIONS(372),
    [anon_sym_Release] = ACTIONS(372),
    [anon_sym_SourceLicense] = ACTIONS(372),
    [anon_sym_Summary] = ACTIONS(372),
    [anon_sym_URL] = ACTIONS(372),
    [anon_sym_Url] = ACTIONS(372),
    [anon_sym_VCS] = ACTIONS(372),
    [anon_sym_Vendor] = ACTIONS(372),
    [anon_sym_Version] = ACTIONS(372),
    [aux_sym_tag_token1] = ACTIONS(372),
    [aux_sym_tag_token2] = ACTIONS(372),
    [anon_sym_Requires] = ACTIONS(372),
    [anon_sym_BuildArch] = ACTIONS(372),
    [anon_sym_BuildArchitectures] = ACTIONS(372),
    [anon_sym_BuildConflicts] = ACTIONS(372),
    [anon_sym_BuildPrereq] = ACTIONS(372),
    [anon_sym_BuildRequires] = ACTIONS(372),
    [anon_sym_Conflicts] = ACTIONS(372),
    [anon_sym_DocDir] = ACTIONS(372),
    [anon_sym_Enhances] = ACTIONS(372),
    [anon_sym_ExcludeArch] = ACTIONS(372),
    [anon_sym_ExcludeOS] = ACTIONS(372),
    [anon_sym_ExclusiveArch] = ACTIONS(372),
    [anon_sym_ExclusiveOS] = ACTIONS(372),
    [anon_sym_Obsoletes] = ACTIONS(372),
    [anon_sym_OrderWithRequires] = ACTIONS(372),
    [anon_sym_Prefix] = ACTIONS(372),
    [anon_sym_Prefixes] = ACTIONS(372),
    [anon_sym_Prereq] = ACTIONS(372),
    [anon_sym_Provides] = ACTIONS(372),
    [anon_sym_Recommends] = ACTIONS(372),
    [anon_sym_RemovePathPostfixes] = ACTIONS(372),
    [anon_sym_Suggests] = ACTIONS(372),
    [anon_sym_Supplements] = ACTIONS(372),
    [anon_sym_PERCENTdescription] = ACTIONS(372),
    [anon_sym_PERCENTpackage] = ACTIONS(372),
    [anon_sym_PERCENTprep] = ACTIONS(372),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(372),
    [anon_sym_PERCENTconf] = ACTIONS(372),
    [anon_sym_PERCENTbuild] = ACTIONS(372),
    [anon_sym_PERCENTinstall] = ACTIONS(372),
    [anon_sym_PERCENTcheck] = ACTIONS(372),
    [anon_sym_PERCENTclean] = ACTIONS(372),
    [anon_sym_PERCENTpre] = ACTIONS(372),
    [anon_sym_PERCENTpost] = ACTIONS(372),
    [anon_sym_PERCENTpreun] = ACTIONS(372),
    [anon_sym_PERCENTpostun] = ACTIONS(372),
    [anon_sym_PERCENTpretrans] = ACTIONS(372),
    [anon_sym_PERCENTposttrans] = ACTIONS(372),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(372),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(372),
    [anon_sym_PERCENTverify] = ACTIONS(372),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(372),
    [anon_sym_PERCENTtriggerin] = ACTIONS(372),
    [anon_sym_PERCENTtriggerun] = ACTIONS(372),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(372),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(372),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(372),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(372),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(372),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(372),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(372),
    [anon_sym_PERCENTfiles] = ACTIONS(372),
    [anon_sym_DASH] = ACTIONS(372),
    [anon_sym_PERCENTchangelog] = ACTIONS(372),
    [anon_sym_STAR] = ACTIONS(372),
    [anon_sym_PERCENTglobal] = ACTIONS(372),
    [anon_sym_PERCENTdefine] = ACTIONS(372),
    [anon_sym_PERCENTundefine] = ACTIONS(372),
    [anon_sym_PERCENT] = ACTIONS(372),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(372),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(372),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(374),
    [aux_sym__simple_statements_token1] = ACTIONS(376),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(376),
    [anon_sym_PERCENTifarch] = ACTIONS(376),
    [anon_sym_PERCENTifos] = ACTIONS(376),
    [anon_sym_PERCENTifnarch] = ACTIONS(376),
    [anon_sym_PERCENTifnos] = ACTIONS(376),
    [anon_sym_AutoProv] = ACTIONS(376),
    [anon_sym_AutoReq] = ACTIONS(376),
    [anon_sym_AutoReqProv] = ACTIONS(376),
    [anon_sym_BugUrl] = ACTIONS(376),
    [anon_sym_BuildRoot] = ACTIONS(376),
    [anon_sym_BuildSystem] = ACTIONS(376),
    [anon_sym_DistTag] = ACTIONS(376),
    [anon_sym_Distribution] = ACTIONS(376),
    [anon_sym_Epoch] = ACTIONS(376),
    [anon_sym_Group] = ACTIONS(376),
    [anon_sym_License] = ACTIONS(376),
    [anon_sym_ModularityLabel] = ACTIONS(376),
    [anon_sym_Name] = ACTIONS(376),
    [anon_sym_NoPatch] = ACTIONS(376),
    [anon_sym_NoSource] = ACTIONS(376),
    [anon_sym_Packager] = ACTIONS(376),
    [anon_sym_Release] = ACTIONS(376),
    [anon_sym_SourceLicense] = ACTIONS(376),
    [anon_sym_Summary] = ACTIONS(376),
    [anon_sym_URL] = ACTIONS(376),
    [anon_sym_Url] = ACTIONS(376),
    [anon_sym_VCS] = ACTIONS(376),
    [anon_sym_Vendor] = ACTIONS(376),
    [anon_sym_Version] = ACTIONS(376),
    [aux_sym_tag_token1] = ACTIONS(376),
    [aux_sym_tag_token2] = ACTIONS(376),
    [anon_sym_Requires] = ACTIONS(376),
    [anon_sym_BuildArch] = ACTIONS(376),
    [anon_sym_BuildArchitectures] = ACTIONS(376),
    [anon_sym_BuildConflicts] = ACTIONS(376),
    [anon_sym_BuildPrereq] = ACTIONS(376),
    [anon_sym_BuildRequires] = ACTIONS(376),
    [anon_sym_Conflicts] = ACTIONS(376),
    [anon_sym_DocDir] = ACTIONS(376),
    [anon_sym_Enhances] = ACTIONS(376),
    [anon_sym_ExcludeArch] = ACTIONS(376),
    [anon_sym_ExcludeOS] = ACTIONS(376),
    [anon_sym_ExclusiveArch] = ACTIONS(376),
    [anon_sym_ExclusiveOS] = ACTIONS(376),
    [anon_sym_Obsoletes] = ACTIONS(376),
    [anon_sym_OrderWithRequires] = ACTIONS(376),
    [anon_sym_Prefix] = ACTIONS(376),
    [anon_sym_Prefixes] = ACTIONS(376),
    [anon_sym_Prereq] = ACTIONS(376),
    [anon_sym_Provides] = ACTIONS(376),
    [anon_sym_Recommends] = ACTIONS(376),
    [anon_sym_RemovePathPostfixes] = ACTIONS(376),
    [anon_sym_Suggests] = ACTIONS(376),
    [anon_sym_Supplements] = ACTIONS(376),
    [anon_sym_PERCENTdescription] = ACTIONS(376),
    [anon_sym_PERCENTpackage] = ACTIONS(376),
    [anon_sym_PERCENTprep] = ACTIONS(376),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(376),
    [anon_sym_PERCENTconf] = ACTIONS(376),
    [anon_sym_PERCENTbuild] = ACTIONS(376),
    [anon_sym_PERCENTinstall] = ACTIONS(376),
    [anon_sym_PERCENTcheck] = ACTIONS(376),
    [anon_sym_PERCENTclean] = ACTIONS(376),
    [anon_sym_PERCENTpre] = ACTIONS(376),
    [anon_sym_PERCENTpost] = ACTIONS(376),
    [anon_sym_PERCENTpreun] = ACTIONS(376),
    [anon_sym_PERCENTpostun] = ACTIONS(376),
    [anon_sym_PERCENTpretrans] = ACTIONS(376),
    [anon_sym_PERCENTposttrans] = ACTIONS(376),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(376),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(376),
    [anon_sym_PERCENTverify] = ACTIONS(376),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(376),
    [anon_sym_PERCENTtriggerin] = ACTIONS(376),
    [anon_sym_PERCENTtriggerun] = ACTIONS(376),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(376),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(376),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(376),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(376),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(376),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(376),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(376),
    [anon_sym_PERCENTfiles] = ACTIONS(376),
    [anon_sym_PERCENTchangelog] = ACTIONS(376),
    [anon_sym_PERCENTglobal] = ACTIONS(376),
    [anon_sym_PERCENTdefine] = ACTIONS(376),
    [anon_sym_PERCENTundefine] = ACTIONS(376),
    [anon_sym_PERCENT] = ACTIONS(376),
    [sym_string_content_with_newlines] = ACTIONS(376),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(376),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(376),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [aux_sym__simple_statements_token1] = ACTIONS(380),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(380),
    [anon_sym_PERCENTifarch] = ACTIONS(380),
    [anon_sym_PERCENTifos] = ACTIONS(380),
    [anon_sym_PERCENTifnarch] = ACTIONS(380),
    [anon_sym_PERCENTifnos] = ACTIONS(380),
    [anon_sym_AutoProv] = ACTIONS(380),
    [anon_sym_AutoReq] = ACTIONS(380),
    [anon_sym_AutoReqProv] = ACTIONS(380),
    [anon_sym_BugUrl] = ACTIONS(380),
    [anon_sym_BuildRoot] = ACTIONS(380),
    [anon_sym_BuildSystem] = ACTIONS(380),
    [anon_sym_DistTag] = ACTIONS(380),
    [anon_sym_Distribution] = ACTIONS(380),
    [anon_sym_Epoch] = ACTIONS(380),
    [anon_sym_Group] = ACTIONS(380),
    [anon_sym_License] = ACTIONS(380),
    [anon_sym_ModularityLabel] = ACTIONS(380),
    [anon_sym_Name] = ACTIONS(380),
    [anon_sym_NoPatch] = ACTIONS(380),
    [anon_sym_NoSource] = ACTIONS(380),
    [anon_sym_Packager] = ACTIONS(380),
    [anon_sym_Release] = ACTIONS(380),
    [anon_sym_SourceLicense] = ACTIONS(380),
    [anon_sym_Summary] = ACTIONS(380),
    [anon_sym_URL] = ACTIONS(380),
    [anon_sym_Url] = ACTIONS(380),
    [anon_sym_VCS] = ACTIONS(380),
    [anon_sym_Vendor] = ACTIONS(380),
    [anon_sym_Version] = ACTIONS(380),
    [aux_sym_tag_token1] = ACTIONS(380),
    [aux_sym_tag_token2] = ACTIONS(380),
    [anon_sym_Requires] = ACTIONS(380),
    [anon_sym_BuildArch] = ACTIONS(380),
    [anon_sym_BuildArchitectures] = ACTIONS(380),
    [anon_sym_BuildConflicts] = ACTIONS(380),
    [anon_sym_BuildPrereq] = ACTIONS(380),
    [anon_sym_BuildRequires] = ACTIONS(380),
    [anon_sym_Conflicts] = ACTIONS(380),
    [anon_sym_DocDir] = ACTIONS(380),
    [anon_sym_Enhances] = ACTIONS(380),
    [anon_sym_ExcludeArch] = ACTIONS(380),
    [anon_sym_ExcludeOS] = ACTIONS(380),
    [anon_sym_ExclusiveArch] = ACTIONS(380),
    [anon_sym_ExclusiveOS] = ACTIONS(380),
    [anon_sym_Obsoletes] = ACTIONS(380),
    [anon_sym_OrderWithRequires] = ACTIONS(380),
    [anon_sym_Prefix] = ACTIONS(380),
    [anon_sym_Prefixes] = ACTIONS(380),
    [anon_sym_Prereq] = ACTIONS(380),
    [anon_sym_Provides] = ACTIONS(380),
    [anon_sym_Recommends] = ACTIONS(380),
    [anon_sym_RemovePathPostfixes] = ACTIONS(380),
    [anon_sym_Suggests] = ACTIONS(380),
    [anon_sym_Supplements] = ACTIONS(380),
    [anon_sym_PERCENTdescription] = ACTIONS(380),
    [anon_sym_PERCENTpackage] = ACTIONS(380),
    [anon_sym_PERCENTprep] = ACTIONS(380),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(380),
    [anon_sym_PERCENTconf] = ACTIONS(380),
    [anon_sym_PERCENTbuild] = ACTIONS(380),
    [anon_sym_PERCENTinstall] = ACTIONS(380),
    [anon_sym_PERCENTcheck] = ACTIONS(380),
    [anon_sym_PERCENTclean] = ACTIONS(380),
    [anon_sym_PERCENTpre] = ACTIONS(380),
    [anon_sym_PERCENTpost] = ACTIONS(380),
    [anon_sym_PERCENTpreun] = ACTIONS(380),
    [anon_sym_PERCENTpostun] = ACTIONS(380),
    [anon_sym_PERCENTpretrans] = ACTIONS(380),
    [anon_sym_PERCENTposttrans] = ACTIONS(380),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(380),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(380),
    [anon_sym_PERCENTverify] = ACTIONS(380),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(380),
    [anon_sym_PERCENTtriggerin] = ACTIONS(380),
    [anon_sym_PERCENTtriggerun] = ACTIONS(380),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(380),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(380),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(380),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(380),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(380),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(380),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(380),
    [anon_sym_PERCENTfiles] = ACTIONS(380),
    [anon_sym_PERCENTchangelog] = ACTIONS(380),
    [anon_sym_PERCENTglobal] = ACTIONS(380),
    [anon_sym_PERCENTdefine] = ACTIONS(380),
    [anon_sym_PERCENTundefine] = ACTIONS(380),
    [anon_sym_PERCENT] = ACTIONS(380),
    [sym_string_content_with_newlines] = ACTIONS(380),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(380),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(380),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(366),
    [aux_sym__simple_statements_token1] = ACTIONS(368),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(368),
    [anon_sym_PERCENTifarch] = ACTIONS(368),
    [anon_sym_PERCENTifos] = ACTIONS(368),
    [anon_sym_PERCENTifnarch] = ACTIONS(368),
    [anon_sym_PERCENTifnos] = ACTIONS(368),
    [anon_sym_AutoProv] = ACTIONS(368),
    [anon_sym_AutoReq] = ACTIONS(368),
    [anon_sym_AutoReqProv] = ACTIONS(368),
    [anon_sym_BugUrl] = ACTIONS(368),
    [anon_sym_BuildRoot] = ACTIONS(368),
    [anon_sym_BuildSystem] = ACTIONS(368),
    [anon_sym_DistTag] = ACTIONS(368),
    [anon_sym_Distribution] = ACTIONS(368),
    [anon_sym_Epoch] = ACTIONS(368),
    [anon_sym_Group] = ACTIONS(368),
    [anon_sym_License] = ACTIONS(368),
    [anon_sym_ModularityLabel] = ACTIONS(368),
    [anon_sym_Name] = ACTIONS(368),
    [anon_sym_NoPatch] = ACTIONS(368),
    [anon_sym_NoSource] = ACTIONS(368),
    [anon_sym_Packager] = ACTIONS(368),
    [anon_sym_Release] = ACTIONS(368),
    [anon_sym_SourceLicense] = ACTIONS(368),
    [anon_sym_Summary] = ACTIONS(368),
    [anon_sym_URL] = ACTIONS(368),
    [anon_sym_Url] = ACTIONS(368),
    [anon_sym_VCS] = ACTIONS(368),
    [anon_sym_Vendor] = ACTIONS(368),
    [anon_sym_Version] = ACTIONS(368),
    [aux_sym_tag_token1] = ACTIONS(368),
    [aux_sym_tag_token2] = ACTIONS(368),
    [anon_sym_Requires] = ACTIONS(368),
    [anon_sym_BuildArch] = ACTIONS(368),
    [anon_sym_BuildArchitectures] = ACTIONS(368),
    [anon_sym_BuildConflicts] = ACTIONS(368),
    [anon_sym_BuildPrereq] = ACTIONS(368),
    [anon_sym_BuildRequires] = ACTIONS(368),
    [anon_sym_Conflicts] = ACTIONS(368),
    [anon_sym_DocDir] = ACTIONS(368),
    [anon_sym_Enhances] = ACTIONS(368),
    [anon_sym_ExcludeArch] = ACTIONS(368),
    [anon_sym_ExcludeOS] = ACTIONS(368),
    [anon_sym_ExclusiveArch] = ACTIONS(368),
    [anon_sym_ExclusiveOS] = ACTIONS(368),
    [anon_sym_Obsoletes] = ACTIONS(368),
    [anon_sym_OrderWithRequires] = ACTIONS(368),
    [anon_sym_Prefix] = ACTIONS(368),
    [anon_sym_Prefixes] = ACTIONS(368),
    [anon_sym_Prereq] = ACTIONS(368),
    [anon_sym_Provides] = ACTIONS(368),
    [anon_sym_Recommends] = ACTIONS(368),
    [anon_sym_RemovePathPostfixes] = ACTIONS(368),
    [anon_sym_Suggests] = ACTIONS(368),
    [anon_sym_Supplements] = ACTIONS(368),
    [anon_sym_PERCENTdescription] = ACTIONS(368),
    [anon_sym_PERCENTpackage] = ACTIONS(368),
    [anon_sym_PERCENTprep] = ACTIONS(368),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(368),
    [anon_sym_PERCENTconf] = ACTIONS(368),
    [anon_sym_PERCENTbuild] = ACTIONS(368),
    [anon_sym_PERCENTinstall] = ACTIONS(368),
    [anon_sym_PERCENTcheck] = ACTIONS(368),
    [anon_sym_PERCENTclean] = ACTIONS(368),
    [anon_sym_PERCENTpre] = ACTIONS(368),
    [anon_sym_PERCENTpost] = ACTIONS(368),
    [anon_sym_PERCENTpreun] = ACTIONS(368),
    [anon_sym_PERCENTpostun] = ACTIONS(368),
    [anon_sym_PERCENTpretrans] = ACTIONS(368),
    [anon_sym_PERCENTposttrans] = ACTIONS(368),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(368),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(368),
    [anon_sym_PERCENTverify] = ACTIONS(368),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(368),
    [anon_sym_PERCENTtriggerin] = ACTIONS(368),
    [anon_sym_PERCENTtriggerun] = ACTIONS(368),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(368),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(368),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(368),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(368),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(368),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(368),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(368),
    [anon_sym_PERCENTfiles] = ACTIONS(368),
    [anon_sym_PERCENTchangelog] = ACTIONS(368),
    [anon_sym_PERCENTglobal] = ACTIONS(368),
    [anon_sym_PERCENTdefine] = ACTIONS(368),
    [anon_sym_PERCENTundefine] = ACTIONS(368),
    [anon_sym_PERCENT] = ACTIONS(368),
    [sym_string_content_with_newlines] = ACTIONS(368),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(368),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(368),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [aux_sym__simple_statements_token1] = ACTIONS(318),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(318),
    [anon_sym_PERCENTifarch] = ACTIONS(318),
    [anon_sym_PERCENTifos] = ACTIONS(318),
    [anon_sym_PERCENTifnarch] = ACTIONS(318),
    [anon_sym_PERCENTifnos] = ACTIONS(318),
    [anon_sym_AutoProv] = ACTIONS(318),
    [anon_sym_AutoReq] = ACTIONS(318),
    [anon_sym_AutoReqProv] = ACTIONS(318),
    [anon_sym_BugUrl] = ACTIONS(318),
    [anon_sym_BuildRoot] = ACTIONS(318),
    [anon_sym_BuildSystem] = ACTIONS(318),
    [anon_sym_DistTag] = ACTIONS(318),
    [anon_sym_Distribution] = ACTIONS(318),
    [anon_sym_Epoch] = ACTIONS(318),
    [anon_sym_Group] = ACTIONS(318),
    [anon_sym_License] = ACTIONS(318),
    [anon_sym_ModularityLabel] = ACTIONS(318),
    [anon_sym_Name] = ACTIONS(318),
    [anon_sym_NoPatch] = ACTIONS(318),
    [anon_sym_NoSource] = ACTIONS(318),
    [anon_sym_Packager] = ACTIONS(318),
    [anon_sym_Release] = ACTIONS(318),
    [anon_sym_SourceLicense] = ACTIONS(318),
    [anon_sym_Summary] = ACTIONS(318),
    [anon_sym_URL] = ACTIONS(318),
    [anon_sym_Url] = ACTIONS(318),
    [anon_sym_VCS] = ACTIONS(318),
    [anon_sym_Vendor] = ACTIONS(318),
    [anon_sym_Version] = ACTIONS(318),
    [aux_sym_tag_token1] = ACTIONS(318),
    [aux_sym_tag_token2] = ACTIONS(318),
    [anon_sym_Requires] = ACTIONS(318),
    [anon_sym_BuildArch] = ACTIONS(318),
    [anon_sym_BuildArchitectures] = ACTIONS(318),
    [anon_sym_BuildConflicts] = ACTIONS(318),
    [anon_sym_BuildPrereq] = ACTIONS(318),
    [anon_sym_BuildRequires] = ACTIONS(318),
    [anon_sym_Conflicts] = ACTIONS(318),
    [anon_sym_DocDir] = ACTIONS(318),
    [anon_sym_Enhances] = ACTIONS(318),
    [anon_sym_ExcludeArch] = ACTIONS(318),
    [anon_sym_ExcludeOS] = ACTIONS(318),
    [anon_sym_ExclusiveArch] = ACTIONS(318),
    [anon_sym_ExclusiveOS] = ACTIONS(318),
    [anon_sym_Obsoletes] = ACTIONS(318),
    [anon_sym_OrderWithRequires] = ACTIONS(318),
    [anon_sym_Prefix] = ACTIONS(318),
    [anon_sym_Prefixes] = ACTIONS(318),
    [anon_sym_Prereq] = ACTIONS(318),
    [anon_sym_Provides] = ACTIONS(318),
    [anon_sym_Recommends] = ACTIONS(318),
    [anon_sym_RemovePathPostfixes] = ACTIONS(318),
    [anon_sym_Suggests] = ACTIONS(318),
    [anon_sym_Supplements] = ACTIONS(318),
    [anon_sym_PERCENTdescription] = ACTIONS(318),
    [anon_sym_PERCENTpackage] = ACTIONS(318),
    [anon_sym_PERCENTprep] = ACTIONS(318),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(318),
    [anon_sym_PERCENTconf] = ACTIONS(318),
    [anon_sym_PERCENTbuild] = ACTIONS(318),
    [anon_sym_PERCENTinstall] = ACTIONS(318),
    [anon_sym_PERCENTcheck] = ACTIONS(318),
    [anon_sym_PERCENTclean] = ACTIONS(318),
    [anon_sym_PERCENTpre] = ACTIONS(318),
    [anon_sym_PERCENTpost] = ACTIONS(318),
    [anon_sym_PERCENTpreun] = ACTIONS(318),
    [anon_sym_PERCENTpostun] = ACTIONS(318),
    [anon_sym_PERCENTpretrans] = ACTIONS(318),
    [anon_sym_PERCENTposttrans] = ACTIONS(318),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(318),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(318),
    [anon_sym_PERCENTverify] = ACTIONS(318),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(318),
    [anon_sym_PERCENTtriggerin] = ACTIONS(318),
    [anon_sym_PERCENTtriggerun] = ACTIONS(318),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(318),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(318),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(318),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(318),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(318),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(318),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(318),
    [anon_sym_PERCENTfiles] = ACTIONS(318),
    [anon_sym_PERCENTchangelog] = ACTIONS(318),
    [anon_sym_PERCENTglobal] = ACTIONS(318),
    [anon_sym_PERCENTdefine] = ACTIONS(318),
    [anon_sym_PERCENTundefine] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(318),
    [sym_string_content_with_newlines] = ACTIONS(318),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(318),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(318),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [aux_sym__simple_statements_token1] = ACTIONS(384),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(384),
    [anon_sym_PERCENTifarch] = ACTIONS(384),
    [anon_sym_PERCENTifos] = ACTIONS(384),
    [anon_sym_PERCENTifnarch] = ACTIONS(384),
    [anon_sym_PERCENTifnos] = ACTIONS(384),
    [anon_sym_AutoProv] = ACTIONS(384),
    [anon_sym_AutoReq] = ACTIONS(384),
    [anon_sym_AutoReqProv] = ACTIONS(384),
    [anon_sym_BugUrl] = ACTIONS(384),
    [anon_sym_BuildRoot] = ACTIONS(384),
    [anon_sym_BuildSystem] = ACTIONS(384),
    [anon_sym_DistTag] = ACTIONS(384),
    [anon_sym_Distribution] = ACTIONS(384),
    [anon_sym_Epoch] = ACTIONS(384),
    [anon_sym_Group] = ACTIONS(384),
    [anon_sym_License] = ACTIONS(384),
    [anon_sym_ModularityLabel] = ACTIONS(384),
    [anon_sym_Name] = ACTIONS(384),
    [anon_sym_NoPatch] = ACTIONS(384),
    [anon_sym_NoSource] = ACTIONS(384),
    [anon_sym_Packager] = ACTIONS(384),
    [anon_sym_Release] = ACTIONS(384),
    [anon_sym_SourceLicense] = ACTIONS(384),
    [anon_sym_Summary] = ACTIONS(384),
    [anon_sym_URL] = ACTIONS(384),
    [anon_sym_Url] = ACTIONS(384),
    [anon_sym_VCS] = ACTIONS(384),
    [anon_sym_Vendor] = ACTIONS(384),
    [anon_sym_Version] = ACTIONS(384),
    [aux_sym_tag_token1] = ACTIONS(384),
    [aux_sym_tag_token2] = ACTIONS(384),
    [anon_sym_Requires] = ACTIONS(384),
    [anon_sym_BuildArch] = ACTIONS(384),
    [anon_sym_BuildArchitectures] = ACTIONS(384),
    [anon_sym_BuildConflicts] = ACTIONS(384),
    [anon_sym_BuildPrereq] = ACTIONS(384),
    [anon_sym_BuildRequires] = ACTIONS(384),
    [anon_sym_Conflicts] = ACTIONS(384),
    [anon_sym_DocDir] = ACTIONS(384),
    [anon_sym_Enhances] = ACTIONS(384),
    [anon_sym_ExcludeArch] = ACTIONS(384),
    [anon_sym_ExcludeOS] = ACTIONS(384),
    [anon_sym_ExclusiveArch] = ACTIONS(384),
    [anon_sym_ExclusiveOS] = ACTIONS(384),
    [anon_sym_Obsoletes] = ACTIONS(384),
    [anon_sym_OrderWithRequires] = ACTIONS(384),
    [anon_sym_Prefix] = ACTIONS(384),
    [anon_sym_Prefixes] = ACTIONS(384),
    [anon_sym_Prereq] = ACTIONS(384),
    [anon_sym_Provides] = ACTIONS(384),
    [anon_sym_Recommends] = ACTIONS(384),
    [anon_sym_RemovePathPostfixes] = ACTIONS(384),
    [anon_sym_Suggests] = ACTIONS(384),
    [anon_sym_Supplements] = ACTIONS(384),
    [anon_sym_PERCENTdescription] = ACTIONS(384),
    [anon_sym_PERCENTpackage] = ACTIONS(384),
    [anon_sym_PERCENTprep] = ACTIONS(384),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(384),
    [anon_sym_PERCENTconf] = ACTIONS(384),
    [anon_sym_PERCENTbuild] = ACTIONS(384),
    [anon_sym_PERCENTinstall] = ACTIONS(384),
    [anon_sym_PERCENTcheck] = ACTIONS(384),
    [anon_sym_PERCENTclean] = ACTIONS(384),
    [anon_sym_PERCENTpre] = ACTIONS(384),
    [anon_sym_PERCENTpost] = ACTIONS(384),
    [anon_sym_PERCENTpreun] = ACTIONS(384),
    [anon_sym_PERCENTpostun] = ACTIONS(384),
    [anon_sym_PERCENTpretrans] = ACTIONS(384),
    [anon_sym_PERCENTposttrans] = ACTIONS(384),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(384),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(384),
    [anon_sym_PERCENTverify] = ACTIONS(384),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(384),
    [anon_sym_PERCENTtriggerin] = ACTIONS(384),
    [anon_sym_PERCENTtriggerun] = ACTIONS(384),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(384),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(384),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(384),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(384),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(384),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(384),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(384),
    [anon_sym_PERCENTfiles] = ACTIONS(384),
    [anon_sym_PERCENTchangelog] = ACTIONS(384),
    [anon_sym_PERCENTglobal] = ACTIONS(384),
    [anon_sym_PERCENTdefine] = ACTIONS(384),
    [anon_sym_PERCENTundefine] = ACTIONS(384),
    [anon_sym_PERCENT] = ACTIONS(384),
    [sym_string_content_with_newlines] = ACTIONS(384),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(384),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(384),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [aux_sym__simple_statements_token1] = ACTIONS(388),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(388),
    [anon_sym_PERCENTifarch] = ACTIONS(388),
    [anon_sym_PERCENTifos] = ACTIONS(388),
    [anon_sym_PERCENTifnarch] = ACTIONS(388),
    [anon_sym_PERCENTifnos] = ACTIONS(388),
    [anon_sym_AutoProv] = ACTIONS(388),
    [anon_sym_AutoReq] = ACTIONS(388),
    [anon_sym_AutoReqProv] = ACTIONS(388),
    [anon_sym_BugUrl] = ACTIONS(388),
    [anon_sym_BuildRoot] = ACTIONS(388),
    [anon_sym_BuildSystem] = ACTIONS(388),
    [anon_sym_DistTag] = ACTIONS(388),
    [anon_sym_Distribution] = ACTIONS(388),
    [anon_sym_Epoch] = ACTIONS(388),
    [anon_sym_Group] = ACTIONS(388),
    [anon_sym_License] = ACTIONS(388),
    [anon_sym_ModularityLabel] = ACTIONS(388),
    [anon_sym_Name] = ACTIONS(388),
    [anon_sym_NoPatch] = ACTIONS(388),
    [anon_sym_NoSource] = ACTIONS(388),
    [anon_sym_Packager] = ACTIONS(388),
    [anon_sym_Release] = ACTIONS(388),
    [anon_sym_SourceLicense] = ACTIONS(388),
    [anon_sym_Summary] = ACTIONS(388),
    [anon_sym_URL] = ACTIONS(388),
    [anon_sym_Url] = ACTIONS(388),
    [anon_sym_VCS] = ACTIONS(388),
    [anon_sym_Vendor] = ACTIONS(388),
    [anon_sym_Version] = ACTIONS(388),
    [aux_sym_tag_token1] = ACTIONS(388),
    [aux_sym_tag_token2] = ACTIONS(388),
    [anon_sym_Requires] = ACTIONS(388),
    [anon_sym_BuildArch] = ACTIONS(388),
    [anon_sym_BuildArchitectures] = ACTIONS(388),
    [anon_sym_BuildConflicts] = ACTIONS(388),
    [anon_sym_BuildPrereq] = ACTIONS(388),
    [anon_sym_BuildRequires] = ACTIONS(388),
    [anon_sym_Conflicts] = ACTIONS(388),
    [anon_sym_DocDir] = ACTIONS(388),
    [anon_sym_Enhances] = ACTIONS(388),
    [anon_sym_ExcludeArch] = ACTIONS(388),
    [anon_sym_ExcludeOS] = ACTIONS(388),
    [anon_sym_ExclusiveArch] = ACTIONS(388),
    [anon_sym_ExclusiveOS] = ACTIONS(388),
    [anon_sym_Obsoletes] = ACTIONS(388),
    [anon_sym_OrderWithRequires] = ACTIONS(388),
    [anon_sym_Prefix] = ACTIONS(388),
    [anon_sym_Prefixes] = ACTIONS(388),
    [anon_sym_Prereq] = ACTIONS(388),
    [anon_sym_Provides] = ACTIONS(388),
    [anon_sym_Recommends] = ACTIONS(388),
    [anon_sym_RemovePathPostfixes] = ACTIONS(388),
    [anon_sym_Suggests] = ACTIONS(388),
    [anon_sym_Supplements] = ACTIONS(388),
    [anon_sym_PERCENTdescription] = ACTIONS(388),
    [anon_sym_PERCENTpackage] = ACTIONS(388),
    [anon_sym_PERCENTprep] = ACTIONS(388),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(388),
    [anon_sym_PERCENTconf] = ACTIONS(388),
    [anon_sym_PERCENTbuild] = ACTIONS(388),
    [anon_sym_PERCENTinstall] = ACTIONS(388),
    [anon_sym_PERCENTcheck] = ACTIONS(388),
    [anon_sym_PERCENTclean] = ACTIONS(388),
    [anon_sym_PERCENTpre] = ACTIONS(388),
    [anon_sym_PERCENTpost] = ACTIONS(388),
    [anon_sym_PERCENTpreun] = ACTIONS(388),
    [anon_sym_PERCENTpostun] = ACTIONS(388),
    [anon_sym_PERCENTpretrans] = ACTIONS(388),
    [anon_sym_PERCENTposttrans] = ACTIONS(388),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(388),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(388),
    [anon_sym_PERCENTverify] = ACTIONS(388),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(388),
    [anon_sym_PERCENTtriggerin] = ACTIONS(388),
    [anon_sym_PERCENTtriggerun] = ACTIONS(388),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(388),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(388),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(388),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(388),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(388),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(388),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(388),
    [anon_sym_PERCENTfiles] = ACTIONS(388),
    [anon_sym_PERCENTchangelog] = ACTIONS(388),
    [anon_sym_PERCENTglobal] = ACTIONS(388),
    [anon_sym_PERCENTdefine] = ACTIONS(388),
    [anon_sym_PERCENTundefine] = ACTIONS(388),
    [anon_sym_PERCENT] = ACTIONS(388),
    [sym_string_content_with_newlines] = ACTIONS(388),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(388),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(388),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [aux_sym__simple_statements_token1] = ACTIONS(392),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(392),
    [anon_sym_PERCENTifarch] = ACTIONS(392),
    [anon_sym_PERCENTifos] = ACTIONS(392),
    [anon_sym_PERCENTifnarch] = ACTIONS(392),
    [anon_sym_PERCENTifnos] = ACTIONS(392),
    [anon_sym_AutoProv] = ACTIONS(392),
    [anon_sym_AutoReq] = ACTIONS(392),
    [anon_sym_AutoReqProv] = ACTIONS(392),
    [anon_sym_BugUrl] = ACTIONS(392),
    [anon_sym_BuildRoot] = ACTIONS(392),
    [anon_sym_BuildSystem] = ACTIONS(392),
    [anon_sym_DistTag] = ACTIONS(392),
    [anon_sym_Distribution] = ACTIONS(392),
    [anon_sym_Epoch] = ACTIONS(392),
    [anon_sym_Group] = ACTIONS(392),
    [anon_sym_License] = ACTIONS(392),
    [anon_sym_ModularityLabel] = ACTIONS(392),
    [anon_sym_Name] = ACTIONS(392),
    [anon_sym_NoPatch] = ACTIONS(392),
    [anon_sym_NoSource] = ACTIONS(392),
    [anon_sym_Packager] = ACTIONS(392),
    [anon_sym_Release] = ACTIONS(392),
    [anon_sym_SourceLicense] = ACTIONS(392),
    [anon_sym_Summary] = ACTIONS(392),
    [anon_sym_URL] = ACTIONS(392),
    [anon_sym_Url] = ACTIONS(392),
    [anon_sym_VCS] = ACTIONS(392),
    [anon_sym_Vendor] = ACTIONS(392),
    [anon_sym_Version] = ACTIONS(392),
    [aux_sym_tag_token1] = ACTIONS(392),
    [aux_sym_tag_token2] = ACTIONS(392),
    [anon_sym_Requires] = ACTIONS(392),
    [anon_sym_BuildArch] = ACTIONS(392),
    [anon_sym_BuildArchitectures] = ACTIONS(392),
    [anon_sym_BuildConflicts] = ACTIONS(392),
    [anon_sym_BuildPrereq] = ACTIONS(392),
    [anon_sym_BuildRequires] = ACTIONS(392),
    [anon_sym_Conflicts] = ACTIONS(392),
    [anon_sym_DocDir] = ACTIONS(392),
    [anon_sym_Enhances] = ACTIONS(392),
    [anon_sym_ExcludeArch] = ACTIONS(392),
    [anon_sym_ExcludeOS] = ACTIONS(392),
    [anon_sym_ExclusiveArch] = ACTIONS(392),
    [anon_sym_ExclusiveOS] = ACTIONS(392),
    [anon_sym_Obsoletes] = ACTIONS(392),
    [anon_sym_OrderWithRequires] = ACTIONS(392),
    [anon_sym_Prefix] = ACTIONS(392),
    [anon_sym_Prefixes] = ACTIONS(392),
    [anon_sym_Prereq] = ACTIONS(392),
    [anon_sym_Provides] = ACTIONS(392),
    [anon_sym_Recommends] = ACTIONS(392),
    [anon_sym_RemovePathPostfixes] = ACTIONS(392),
    [anon_sym_Suggests] = ACTIONS(392),
    [anon_sym_Supplements] = ACTIONS(392),
    [anon_sym_PERCENTdescription] = ACTIONS(392),
    [anon_sym_PERCENTpackage] = ACTIONS(392),
    [anon_sym_PERCENTprep] = ACTIONS(392),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(392),
    [anon_sym_PERCENTconf] = ACTIONS(392),
    [anon_sym_PERCENTbuild] = ACTIONS(392),
    [anon_sym_PERCENTinstall] = ACTIONS(392),
    [anon_sym_PERCENTcheck] = ACTIONS(392),
    [anon_sym_PERCENTclean] = ACTIONS(392),
    [anon_sym_PERCENTpre] = ACTIONS(392),
    [anon_sym_PERCENTpost] = ACTIONS(392),
    [anon_sym_PERCENTpreun] = ACTIONS(392),
    [anon_sym_PERCENTpostun] = ACTIONS(392),
    [anon_sym_PERCENTpretrans] = ACTIONS(392),
    [anon_sym_PERCENTposttrans] = ACTIONS(392),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(392),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(392),
    [anon_sym_PERCENTverify] = ACTIONS(392),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(392),
    [anon_sym_PERCENTtriggerin] = ACTIONS(392),
    [anon_sym_PERCENTtriggerun] = ACTIONS(392),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(392),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(392),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(392),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(392),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(392),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(392),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(392),
    [anon_sym_PERCENTfiles] = ACTIONS(392),
    [anon_sym_PERCENTchangelog] = ACTIONS(392),
    [anon_sym_PERCENTglobal] = ACTIONS(392),
    [anon_sym_PERCENTdefine] = ACTIONS(392),
    [anon_sym_PERCENTundefine] = ACTIONS(392),
    [anon_sym_PERCENT] = ACTIONS(392),
    [sym_string_content_with_newlines] = ACTIONS(392),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(392),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(392),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [aux_sym__simple_statements_token1] = ACTIONS(394),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(396),
    [anon_sym_PERCENTifarch] = ACTIONS(396),
    [anon_sym_PERCENTifos] = ACTIONS(396),
    [anon_sym_PERCENTifnarch] = ACTIONS(396),
    [anon_sym_PERCENTifnos] = ACTIONS(396),
    [anon_sym_AutoProv] = ACTIONS(396),
    [anon_sym_AutoReq] = ACTIONS(396),
    [anon_sym_AutoReqProv] = ACTIONS(396),
    [anon_sym_BugUrl] = ACTIONS(396),
    [anon_sym_BuildRoot] = ACTIONS(396),
    [anon_sym_BuildSystem] = ACTIONS(396),
    [anon_sym_DistTag] = ACTIONS(396),
    [anon_sym_Distribution] = ACTIONS(396),
    [anon_sym_Epoch] = ACTIONS(396),
    [anon_sym_Group] = ACTIONS(396),
    [anon_sym_License] = ACTIONS(396),
    [anon_sym_ModularityLabel] = ACTIONS(396),
    [anon_sym_Name] = ACTIONS(396),
    [anon_sym_NoPatch] = ACTIONS(396),
    [anon_sym_NoSource] = ACTIONS(396),
    [anon_sym_Packager] = ACTIONS(396),
    [anon_sym_Release] = ACTIONS(396),
    [anon_sym_SourceLicense] = ACTIONS(396),
    [anon_sym_Summary] = ACTIONS(396),
    [anon_sym_URL] = ACTIONS(396),
    [anon_sym_Url] = ACTIONS(396),
    [anon_sym_VCS] = ACTIONS(396),
    [anon_sym_Vendor] = ACTIONS(396),
    [anon_sym_Version] = ACTIONS(396),
    [aux_sym_tag_token1] = ACTIONS(396),
    [aux_sym_tag_token2] = ACTIONS(396),
    [anon_sym_Requires] = ACTIONS(396),
    [anon_sym_BuildArch] = ACTIONS(396),
    [anon_sym_BuildArchitectures] = ACTIONS(396),
    [anon_sym_BuildConflicts] = ACTIONS(396),
    [anon_sym_BuildPrereq] = ACTIONS(396),
    [anon_sym_BuildRequires] = ACTIONS(396),
    [anon_sym_Conflicts] = ACTIONS(396),
    [anon_sym_DocDir] = ACTIONS(396),
    [anon_sym_Enhances] = ACTIONS(396),
    [anon_sym_ExcludeArch] = ACTIONS(396),
    [anon_sym_ExcludeOS] = ACTIONS(396),
    [anon_sym_ExclusiveArch] = ACTIONS(396),
    [anon_sym_ExclusiveOS] = ACTIONS(396),
    [anon_sym_Obsoletes] = ACTIONS(396),
    [anon_sym_OrderWithRequires] = ACTIONS(396),
    [anon_sym_Prefix] = ACTIONS(396),
    [anon_sym_Prefixes] = ACTIONS(396),
    [anon_sym_Prereq] = ACTIONS(396),
    [anon_sym_Provides] = ACTIONS(396),
    [anon_sym_Recommends] = ACTIONS(396),
    [anon_sym_RemovePathPostfixes] = ACTIONS(396),
    [anon_sym_Suggests] = ACTIONS(396),
    [anon_sym_Supplements] = ACTIONS(396),
    [anon_sym_PERCENTdescription] = ACTIONS(396),
    [anon_sym_PERCENTpackage] = ACTIONS(396),
    [anon_sym_PERCENTprep] = ACTIONS(396),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(396),
    [anon_sym_PERCENTconf] = ACTIONS(396),
    [anon_sym_PERCENTbuild] = ACTIONS(396),
    [anon_sym_PERCENTinstall] = ACTIONS(396),
    [anon_sym_PERCENTcheck] = ACTIONS(396),
    [anon_sym_PERCENTclean] = ACTIONS(396),
    [anon_sym_PERCENTpre] = ACTIONS(396),
    [anon_sym_PERCENTpost] = ACTIONS(396),
    [anon_sym_PERCENTpreun] = ACTIONS(396),
    [anon_sym_PERCENTpostun] = ACTIONS(396),
    [anon_sym_PERCENTpretrans] = ACTIONS(396),
    [anon_sym_PERCENTposttrans] = ACTIONS(396),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(396),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(396),
    [anon_sym_PERCENTverify] = ACTIONS(396),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(396),
    [anon_sym_PERCENTtriggerin] = ACTIONS(396),
    [anon_sym_PERCENTtriggerun] = ACTIONS(396),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(396),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(396),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(396),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(396),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(396),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(396),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(396),
    [anon_sym_PERCENTfiles] = ACTIONS(396),
    [anon_sym_PERCENTchangelog] = ACTIONS(396),
    [anon_sym_PERCENTglobal] = ACTIONS(396),
    [anon_sym_PERCENTdefine] = ACTIONS(396),
    [anon_sym_PERCENTundefine] = ACTIONS(396),
    [anon_sym_PERCENT] = ACTIONS(396),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(396),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(396),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [aux_sym__simple_statements_token1] = ACTIONS(390),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(392),
    [anon_sym_PERCENTifarch] = ACTIONS(392),
    [anon_sym_PERCENTifos] = ACTIONS(392),
    [anon_sym_PERCENTifnarch] = ACTIONS(392),
    [anon_sym_PERCENTifnos] = ACTIONS(392),
    [anon_sym_AutoProv] = ACTIONS(392),
    [anon_sym_AutoReq] = ACTIONS(392),
    [anon_sym_AutoReqProv] = ACTIONS(392),
    [anon_sym_BugUrl] = ACTIONS(392),
    [anon_sym_BuildRoot] = ACTIONS(392),
    [anon_sym_BuildSystem] = ACTIONS(392),
    [anon_sym_DistTag] = ACTIONS(392),
    [anon_sym_Distribution] = ACTIONS(392),
    [anon_sym_Epoch] = ACTIONS(392),
    [anon_sym_Group] = ACTIONS(392),
    [anon_sym_License] = ACTIONS(392),
    [anon_sym_ModularityLabel] = ACTIONS(392),
    [anon_sym_Name] = ACTIONS(392),
    [anon_sym_NoPatch] = ACTIONS(392),
    [anon_sym_NoSource] = ACTIONS(392),
    [anon_sym_Packager] = ACTIONS(392),
    [anon_sym_Release] = ACTIONS(392),
    [anon_sym_SourceLicense] = ACTIONS(392),
    [anon_sym_Summary] = ACTIONS(392),
    [anon_sym_URL] = ACTIONS(392),
    [anon_sym_Url] = ACTIONS(392),
    [anon_sym_VCS] = ACTIONS(392),
    [anon_sym_Vendor] = ACTIONS(392),
    [anon_sym_Version] = ACTIONS(392),
    [aux_sym_tag_token1] = ACTIONS(392),
    [aux_sym_tag_token2] = ACTIONS(392),
    [anon_sym_Requires] = ACTIONS(392),
    [anon_sym_BuildArch] = ACTIONS(392),
    [anon_sym_BuildArchitectures] = ACTIONS(392),
    [anon_sym_BuildConflicts] = ACTIONS(392),
    [anon_sym_BuildPrereq] = ACTIONS(392),
    [anon_sym_BuildRequires] = ACTIONS(392),
    [anon_sym_Conflicts] = ACTIONS(392),
    [anon_sym_DocDir] = ACTIONS(392),
    [anon_sym_Enhances] = ACTIONS(392),
    [anon_sym_ExcludeArch] = ACTIONS(392),
    [anon_sym_ExcludeOS] = ACTIONS(392),
    [anon_sym_ExclusiveArch] = ACTIONS(392),
    [anon_sym_ExclusiveOS] = ACTIONS(392),
    [anon_sym_Obsoletes] = ACTIONS(392),
    [anon_sym_OrderWithRequires] = ACTIONS(392),
    [anon_sym_Prefix] = ACTIONS(392),
    [anon_sym_Prefixes] = ACTIONS(392),
    [anon_sym_Prereq] = ACTIONS(392),
    [anon_sym_Provides] = ACTIONS(392),
    [anon_sym_Recommends] = ACTIONS(392),
    [anon_sym_RemovePathPostfixes] = ACTIONS(392),
    [anon_sym_Suggests] = ACTIONS(392),
    [anon_sym_Supplements] = ACTIONS(392),
    [anon_sym_PERCENTdescription] = ACTIONS(392),
    [anon_sym_PERCENTpackage] = ACTIONS(392),
    [anon_sym_PERCENTprep] = ACTIONS(392),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(392),
    [anon_sym_PERCENTconf] = ACTIONS(392),
    [anon_sym_PERCENTbuild] = ACTIONS(392),
    [anon_sym_PERCENTinstall] = ACTIONS(392),
    [anon_sym_PERCENTcheck] = ACTIONS(392),
    [anon_sym_PERCENTclean] = ACTIONS(392),
    [anon_sym_PERCENTpre] = ACTIONS(392),
    [anon_sym_PERCENTpost] = ACTIONS(392),
    [anon_sym_PERCENTpreun] = ACTIONS(392),
    [anon_sym_PERCENTpostun] = ACTIONS(392),
    [anon_sym_PERCENTpretrans] = ACTIONS(392),
    [anon_sym_PERCENTposttrans] = ACTIONS(392),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(392),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(392),
    [anon_sym_PERCENTverify] = ACTIONS(392),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(392),
    [anon_sym_PERCENTtriggerin] = ACTIONS(392),
    [anon_sym_PERCENTtriggerun] = ACTIONS(392),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(392),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(392),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(392),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(392),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(392),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(392),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(392),
    [anon_sym_PERCENTfiles] = ACTIONS(392),
    [anon_sym_PERCENTchangelog] = ACTIONS(392),
    [anon_sym_PERCENTglobal] = ACTIONS(392),
    [anon_sym_PERCENTdefine] = ACTIONS(392),
    [anon_sym_PERCENTundefine] = ACTIONS(392),
    [anon_sym_PERCENT] = ACTIONS(392),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(392),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(392),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [aux_sym__simple_statements_token1] = ACTIONS(398),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(400),
    [anon_sym_PERCENTifarch] = ACTIONS(400),
    [anon_sym_PERCENTifos] = ACTIONS(400),
    [anon_sym_PERCENTifnarch] = ACTIONS(400),
    [anon_sym_PERCENTifnos] = ACTIONS(400),
    [anon_sym_AutoProv] = ACTIONS(400),
    [anon_sym_AutoReq] = ACTIONS(400),
    [anon_sym_AutoReqProv] = ACTIONS(400),
    [anon_sym_BugUrl] = ACTIONS(400),
    [anon_sym_BuildRoot] = ACTIONS(400),
    [anon_sym_BuildSystem] = ACTIONS(400),
    [anon_sym_DistTag] = ACTIONS(400),
    [anon_sym_Distribution] = ACTIONS(400),
    [anon_sym_Epoch] = ACTIONS(400),
    [anon_sym_Group] = ACTIONS(400),
    [anon_sym_License] = ACTIONS(400),
    [anon_sym_ModularityLabel] = ACTIONS(400),
    [anon_sym_Name] = ACTIONS(400),
    [anon_sym_NoPatch] = ACTIONS(400),
    [anon_sym_NoSource] = ACTIONS(400),
    [anon_sym_Packager] = ACTIONS(400),
    [anon_sym_Release] = ACTIONS(400),
    [anon_sym_SourceLicense] = ACTIONS(400),
    [anon_sym_Summary] = ACTIONS(400),
    [anon_sym_URL] = ACTIONS(400),
    [anon_sym_Url] = ACTIONS(400),
    [anon_sym_VCS] = ACTIONS(400),
    [anon_sym_Vendor] = ACTIONS(400),
    [anon_sym_Version] = ACTIONS(400),
    [aux_sym_tag_token1] = ACTIONS(400),
    [aux_sym_tag_token2] = ACTIONS(400),
    [anon_sym_Requires] = ACTIONS(400),
    [anon_sym_BuildArch] = ACTIONS(400),
    [anon_sym_BuildArchitectures] = ACTIONS(400),
    [anon_sym_BuildConflicts] = ACTIONS(400),
    [anon_sym_BuildPrereq] = ACTIONS(400),
    [anon_sym_BuildRequires] = ACTIONS(400),
    [anon_sym_Conflicts] = ACTIONS(400),
    [anon_sym_DocDir] = ACTIONS(400),
    [anon_sym_Enhances] = ACTIONS(400),
    [anon_sym_ExcludeArch] = ACTIONS(400),
    [anon_sym_ExcludeOS] = ACTIONS(400),
    [anon_sym_ExclusiveArch] = ACTIONS(400),
    [anon_sym_ExclusiveOS] = ACTIONS(400),
    [anon_sym_Obsoletes] = ACTIONS(400),
    [anon_sym_OrderWithRequires] = ACTIONS(400),
    [anon_sym_Prefix] = ACTIONS(400),
    [anon_sym_Prefixes] = ACTIONS(400),
    [anon_sym_Prereq] = ACTIONS(400),
    [anon_sym_Provides] = ACTIONS(400),
    [anon_sym_Recommends] = ACTIONS(400),
    [anon_sym_RemovePathPostfixes] = ACTIONS(400),
    [anon_sym_Suggests] = ACTIONS(400),
    [anon_sym_Supplements] = ACTIONS(400),
    [anon_sym_PERCENTdescription] = ACTIONS(400),
    [anon_sym_PERCENTpackage] = ACTIONS(400),
    [anon_sym_PERCENTprep] = ACTIONS(400),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(400),
    [anon_sym_PERCENTconf] = ACTIONS(400),
    [anon_sym_PERCENTbuild] = ACTIONS(400),
    [anon_sym_PERCENTinstall] = ACTIONS(400),
    [anon_sym_PERCENTcheck] = ACTIONS(400),
    [anon_sym_PERCENTclean] = ACTIONS(400),
    [anon_sym_PERCENTpre] = ACTIONS(400),
    [anon_sym_PERCENTpost] = ACTIONS(400),
    [anon_sym_PERCENTpreun] = ACTIONS(400),
    [anon_sym_PERCENTpostun] = ACTIONS(400),
    [anon_sym_PERCENTpretrans] = ACTIONS(400),
    [anon_sym_PERCENTposttrans] = ACTIONS(400),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(400),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(400),
    [anon_sym_PERCENTverify] = ACTIONS(400),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(400),
    [anon_sym_PERCENTtriggerin] = ACTIONS(400),
    [anon_sym_PERCENTtriggerun] = ACTIONS(400),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(400),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(400),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(400),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(400),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(400),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(400),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(400),
    [anon_sym_PERCENTfiles] = ACTIONS(400),
    [anon_sym_PERCENTchangelog] = ACTIONS(400),
    [anon_sym_PERCENTglobal] = ACTIONS(400),
    [anon_sym_PERCENTdefine] = ACTIONS(400),
    [anon_sym_PERCENTundefine] = ACTIONS(400),
    [anon_sym_PERCENT] = ACTIONS(400),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(400),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(400),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(402),
    [aux_sym__simple_statements_token1] = ACTIONS(402),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(404),
    [anon_sym_PERCENTifarch] = ACTIONS(404),
    [anon_sym_PERCENTifos] = ACTIONS(404),
    [anon_sym_PERCENTifnarch] = ACTIONS(404),
    [anon_sym_PERCENTifnos] = ACTIONS(404),
    [anon_sym_AutoProv] = ACTIONS(404),
    [anon_sym_AutoReq] = ACTIONS(404),
    [anon_sym_AutoReqProv] = ACTIONS(404),
    [anon_sym_BugUrl] = ACTIONS(404),
    [anon_sym_BuildRoot] = ACTIONS(404),
    [anon_sym_BuildSystem] = ACTIONS(404),
    [anon_sym_DistTag] = ACTIONS(404),
    [anon_sym_Distribution] = ACTIONS(404),
    [anon_sym_Epoch] = ACTIONS(404),
    [anon_sym_Group] = ACTIONS(404),
    [anon_sym_License] = ACTIONS(404),
    [anon_sym_ModularityLabel] = ACTIONS(404),
    [anon_sym_Name] = ACTIONS(404),
    [anon_sym_NoPatch] = ACTIONS(404),
    [anon_sym_NoSource] = ACTIONS(404),
    [anon_sym_Packager] = ACTIONS(404),
    [anon_sym_Release] = ACTIONS(404),
    [anon_sym_SourceLicense] = ACTIONS(404),
    [anon_sym_Summary] = ACTIONS(404),
    [anon_sym_URL] = ACTIONS(404),
    [anon_sym_Url] = ACTIONS(404),
    [anon_sym_VCS] = ACTIONS(404),
    [anon_sym_Vendor] = ACTIONS(404),
    [anon_sym_Version] = ACTIONS(404),
    [aux_sym_tag_token1] = ACTIONS(404),
    [aux_sym_tag_token2] = ACTIONS(404),
    [anon_sym_Requires] = ACTIONS(404),
    [anon_sym_BuildArch] = ACTIONS(404),
    [anon_sym_BuildArchitectures] = ACTIONS(404),
    [anon_sym_BuildConflicts] = ACTIONS(404),
    [anon_sym_BuildPrereq] = ACTIONS(404),
    [anon_sym_BuildRequires] = ACTIONS(404),
    [anon_sym_Conflicts] = ACTIONS(404),
    [anon_sym_DocDir] = ACTIONS(404),
    [anon_sym_Enhances] = ACTIONS(404),
    [anon_sym_ExcludeArch] = ACTIONS(404),
    [anon_sym_ExcludeOS] = ACTIONS(404),
    [anon_sym_ExclusiveArch] = ACTIONS(404),
    [anon_sym_ExclusiveOS] = ACTIONS(404),
    [anon_sym_Obsoletes] = ACTIONS(404),
    [anon_sym_OrderWithRequires] = ACTIONS(404),
    [anon_sym_Prefix] = ACTIONS(404),
    [anon_sym_Prefixes] = ACTIONS(404),
    [anon_sym_Prereq] = ACTIONS(404),
    [anon_sym_Provides] = ACTIONS(404),
    [anon_sym_Recommends] = ACTIONS(404),
    [anon_sym_RemovePathPostfixes] = ACTIONS(404),
    [anon_sym_Suggests] = ACTIONS(404),
    [anon_sym_Supplements] = ACTIONS(404),
    [anon_sym_PERCENTdescription] = ACTIONS(404),
    [anon_sym_PERCENTpackage] = ACTIONS(404),
    [anon_sym_PERCENTprep] = ACTIONS(404),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(404),
    [anon_sym_PERCENTconf] = ACTIONS(404),
    [anon_sym_PERCENTbuild] = ACTIONS(404),
    [anon_sym_PERCENTinstall] = ACTIONS(404),
    [anon_sym_PERCENTcheck] = ACTIONS(404),
    [anon_sym_PERCENTclean] = ACTIONS(404),
    [anon_sym_PERCENTpre] = ACTIONS(404),
    [anon_sym_PERCENTpost] = ACTIONS(404),
    [anon_sym_PERCENTpreun] = ACTIONS(404),
    [anon_sym_PERCENTpostun] = ACTIONS(404),
    [anon_sym_PERCENTpretrans] = ACTIONS(404),
    [anon_sym_PERCENTposttrans] = ACTIONS(404),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(404),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(404),
    [anon_sym_PERCENTverify] = ACTIONS(404),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(404),
    [anon_sym_PERCENTtriggerin] = ACTIONS(404),
    [anon_sym_PERCENTtriggerun] = ACTIONS(404),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(404),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(404),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(404),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(404),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(404),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(404),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(404),
    [anon_sym_PERCENTfiles] = ACTIONS(404),
    [anon_sym_PERCENTchangelog] = ACTIONS(404),
    [anon_sym_PERCENTglobal] = ACTIONS(404),
    [anon_sym_PERCENTdefine] = ACTIONS(404),
    [anon_sym_PERCENTundefine] = ACTIONS(404),
    [anon_sym_PERCENT] = ACTIONS(404),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(404),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(404),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(406),
    [aux_sym__simple_statements_token1] = ACTIONS(406),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(408),
    [anon_sym_PERCENTifarch] = ACTIONS(408),
    [anon_sym_PERCENTifos] = ACTIONS(408),
    [anon_sym_PERCENTifnarch] = ACTIONS(408),
    [anon_sym_PERCENTifnos] = ACTIONS(408),
    [anon_sym_AutoProv] = ACTIONS(408),
    [anon_sym_AutoReq] = ACTIONS(408),
    [anon_sym_AutoReqProv] = ACTIONS(408),
    [anon_sym_BugUrl] = ACTIONS(408),
    [anon_sym_BuildRoot] = ACTIONS(408),
    [anon_sym_BuildSystem] = ACTIONS(408),
    [anon_sym_DistTag] = ACTIONS(408),
    [anon_sym_Distribution] = ACTIONS(408),
    [anon_sym_Epoch] = ACTIONS(408),
    [anon_sym_Group] = ACTIONS(408),
    [anon_sym_License] = ACTIONS(408),
    [anon_sym_ModularityLabel] = ACTIONS(408),
    [anon_sym_Name] = ACTIONS(408),
    [anon_sym_NoPatch] = ACTIONS(408),
    [anon_sym_NoSource] = ACTIONS(408),
    [anon_sym_Packager] = ACTIONS(408),
    [anon_sym_Release] = ACTIONS(408),
    [anon_sym_SourceLicense] = ACTIONS(408),
    [anon_sym_Summary] = ACTIONS(408),
    [anon_sym_URL] = ACTIONS(408),
    [anon_sym_Url] = ACTIONS(408),
    [anon_sym_VCS] = ACTIONS(408),
    [anon_sym_Vendor] = ACTIONS(408),
    [anon_sym_Version] = ACTIONS(408),
    [aux_sym_tag_token1] = ACTIONS(408),
    [aux_sym_tag_token2] = ACTIONS(408),
    [anon_sym_Requires] = ACTIONS(408),
    [anon_sym_BuildArch] = ACTIONS(408),
    [anon_sym_BuildArchitectures] = ACTIONS(408),
    [anon_sym_BuildConflicts] = ACTIONS(408),
    [anon_sym_BuildPrereq] = ACTIONS(408),
    [anon_sym_BuildRequires] = ACTIONS(408),
    [anon_sym_Conflicts] = ACTIONS(408),
    [anon_sym_DocDir] = ACTIONS(408),
    [anon_sym_Enhances] = ACTIONS(408),
    [anon_sym_ExcludeArch] = ACTIONS(408),
    [anon_sym_ExcludeOS] = ACTIONS(408),
    [anon_sym_ExclusiveArch] = ACTIONS(408),
    [anon_sym_ExclusiveOS] = ACTIONS(408),
    [anon_sym_Obsoletes] = ACTIONS(408),
    [anon_sym_OrderWithRequires] = ACTIONS(408),
    [anon_sym_Prefix] = ACTIONS(408),
    [anon_sym_Prefixes] = ACTIONS(408),
    [anon_sym_Prereq] = ACTIONS(408),
    [anon_sym_Provides] = ACTIONS(408),
    [anon_sym_Recommends] = ACTIONS(408),
    [anon_sym_RemovePathPostfixes] = ACTIONS(408),
    [anon_sym_Suggests] = ACTIONS(408),
    [anon_sym_Supplements] = ACTIONS(408),
    [anon_sym_PERCENTdescription] = ACTIONS(408),
    [anon_sym_PERCENTpackage] = ACTIONS(408),
    [anon_sym_PERCENTprep] = ACTIONS(408),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(408),
    [anon_sym_PERCENTconf] = ACTIONS(408),
    [anon_sym_PERCENTbuild] = ACTIONS(408),
    [anon_sym_PERCENTinstall] = ACTIONS(408),
    [anon_sym_PERCENTcheck] = ACTIONS(408),
    [anon_sym_PERCENTclean] = ACTIONS(408),
    [anon_sym_PERCENTpre] = ACTIONS(408),
    [anon_sym_PERCENTpost] = ACTIONS(408),
    [anon_sym_PERCENTpreun] = ACTIONS(408),
    [anon_sym_PERCENTpostun] = ACTIONS(408),
    [anon_sym_PERCENTpretrans] = ACTIONS(408),
    [anon_sym_PERCENTposttrans] = ACTIONS(408),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(408),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(408),
    [anon_sym_PERCENTverify] = ACTIONS(408),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(408),
    [anon_sym_PERCENTtriggerin] = ACTIONS(408),
    [anon_sym_PERCENTtriggerun] = ACTIONS(408),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(408),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(408),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(408),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(408),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(408),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(408),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(408),
    [anon_sym_PERCENTfiles] = ACTIONS(408),
    [anon_sym_PERCENTchangelog] = ACTIONS(408),
    [anon_sym_PERCENTglobal] = ACTIONS(408),
    [anon_sym_PERCENTdefine] = ACTIONS(408),
    [anon_sym_PERCENTundefine] = ACTIONS(408),
    [anon_sym_PERCENT] = ACTIONS(408),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(408),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(408),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(410),
    [aux_sym__simple_statements_token1] = ACTIONS(410),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(412),
    [anon_sym_PERCENTifarch] = ACTIONS(412),
    [anon_sym_PERCENTifos] = ACTIONS(412),
    [anon_sym_PERCENTifnarch] = ACTIONS(412),
    [anon_sym_PERCENTifnos] = ACTIONS(412),
    [anon_sym_AutoProv] = ACTIONS(412),
    [anon_sym_AutoReq] = ACTIONS(412),
    [anon_sym_AutoReqProv] = ACTIONS(412),
    [anon_sym_BugUrl] = ACTIONS(412),
    [anon_sym_BuildRoot] = ACTIONS(412),
    [anon_sym_BuildSystem] = ACTIONS(412),
    [anon_sym_DistTag] = ACTIONS(412),
    [anon_sym_Distribution] = ACTIONS(412),
    [anon_sym_Epoch] = ACTIONS(412),
    [anon_sym_Group] = ACTIONS(412),
    [anon_sym_License] = ACTIONS(412),
    [anon_sym_ModularityLabel] = ACTIONS(412),
    [anon_sym_Name] = ACTIONS(412),
    [anon_sym_NoPatch] = ACTIONS(412),
    [anon_sym_NoSource] = ACTIONS(412),
    [anon_sym_Packager] = ACTIONS(412),
    [anon_sym_Release] = ACTIONS(412),
    [anon_sym_SourceLicense] = ACTIONS(412),
    [anon_sym_Summary] = ACTIONS(412),
    [anon_sym_URL] = ACTIONS(412),
    [anon_sym_Url] = ACTIONS(412),
    [anon_sym_VCS] = ACTIONS(412),
    [anon_sym_Vendor] = ACTIONS(412),
    [anon_sym_Version] = ACTIONS(412),
    [aux_sym_tag_token1] = ACTIONS(412),
    [aux_sym_tag_token2] = ACTIONS(412),
    [anon_sym_Requires] = ACTIONS(412),
    [anon_sym_BuildArch] = ACTIONS(412),
    [anon_sym_BuildArchitectures] = ACTIONS(412),
    [anon_sym_BuildConflicts] = ACTIONS(412),
    [anon_sym_BuildPrereq] = ACTIONS(412),
    [anon_sym_BuildRequires] = ACTIONS(412),
    [anon_sym_Conflicts] = ACTIONS(412),
    [anon_sym_DocDir] = ACTIONS(412),
    [anon_sym_Enhances] = ACTIONS(412),
    [anon_sym_ExcludeArch] = ACTIONS(412),
    [anon_sym_ExcludeOS] = ACTIONS(412),
    [anon_sym_ExclusiveArch] = ACTIONS(412),
    [anon_sym_ExclusiveOS] = ACTIONS(412),
    [anon_sym_Obsoletes] = ACTIONS(412),
    [anon_sym_OrderWithRequires] = ACTIONS(412),
    [anon_sym_Prefix] = ACTIONS(412),
    [anon_sym_Prefixes] = ACTIONS(412),
    [anon_sym_Prereq] = ACTIONS(412),
    [anon_sym_Provides] = ACTIONS(412),
    [anon_sym_Recommends] = ACTIONS(412),
    [anon_sym_RemovePathPostfixes] = ACTIONS(412),
    [anon_sym_Suggests] = ACTIONS(412),
    [anon_sym_Supplements] = ACTIONS(412),
    [anon_sym_PERCENTdescription] = ACTIONS(412),
    [anon_sym_PERCENTpackage] = ACTIONS(412),
    [anon_sym_PERCENTprep] = ACTIONS(412),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(412),
    [anon_sym_PERCENTconf] = ACTIONS(412),
    [anon_sym_PERCENTbuild] = ACTIONS(412),
    [anon_sym_PERCENTinstall] = ACTIONS(412),
    [anon_sym_PERCENTcheck] = ACTIONS(412),
    [anon_sym_PERCENTclean] = ACTIONS(412),
    [anon_sym_PERCENTpre] = ACTIONS(412),
    [anon_sym_PERCENTpost] = ACTIONS(412),
    [anon_sym_PERCENTpreun] = ACTIONS(412),
    [anon_sym_PERCENTpostun] = ACTIONS(412),
    [anon_sym_PERCENTpretrans] = ACTIONS(412),
    [anon_sym_PERCENTposttrans] = ACTIONS(412),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(412),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(412),
    [anon_sym_PERCENTverify] = ACTIONS(412),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(412),
    [anon_sym_PERCENTtriggerin] = ACTIONS(412),
    [anon_sym_PERCENTtriggerun] = ACTIONS(412),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(412),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(412),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(412),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(412),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(412),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(412),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(412),
    [anon_sym_PERCENTfiles] = ACTIONS(412),
    [anon_sym_PERCENTchangelog] = ACTIONS(412),
    [anon_sym_PERCENTglobal] = ACTIONS(412),
    [anon_sym_PERCENTdefine] = ACTIONS(412),
    [anon_sym_PERCENTundefine] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(412),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(412),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(412),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [aux_sym__simple_statements_token1] = ACTIONS(414),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(416),
    [anon_sym_PERCENTifarch] = ACTIONS(416),
    [anon_sym_PERCENTifos] = ACTIONS(416),
    [anon_sym_PERCENTifnarch] = ACTIONS(416),
    [anon_sym_PERCENTifnos] = ACTIONS(416),
    [anon_sym_AutoProv] = ACTIONS(416),
    [anon_sym_AutoReq] = ACTIONS(416),
    [anon_sym_AutoReqProv] = ACTIONS(416),
    [anon_sym_BugUrl] = ACTIONS(416),
    [anon_sym_BuildRoot] = ACTIONS(416),
    [anon_sym_BuildSystem] = ACTIONS(416),
    [anon_sym_DistTag] = ACTIONS(416),
    [anon_sym_Distribution] = ACTIONS(416),
    [anon_sym_Epoch] = ACTIONS(416),
    [anon_sym_Group] = ACTIONS(416),
    [anon_sym_License] = ACTIONS(416),
    [anon_sym_ModularityLabel] = ACTIONS(416),
    [anon_sym_Name] = ACTIONS(416),
    [anon_sym_NoPatch] = ACTIONS(416),
    [anon_sym_NoSource] = ACTIONS(416),
    [anon_sym_Packager] = ACTIONS(416),
    [anon_sym_Release] = ACTIONS(416),
    [anon_sym_SourceLicense] = ACTIONS(416),
    [anon_sym_Summary] = ACTIONS(416),
    [anon_sym_URL] = ACTIONS(416),
    [anon_sym_Url] = ACTIONS(416),
    [anon_sym_VCS] = ACTIONS(416),
    [anon_sym_Vendor] = ACTIONS(416),
    [anon_sym_Version] = ACTIONS(416),
    [aux_sym_tag_token1] = ACTIONS(416),
    [aux_sym_tag_token2] = ACTIONS(416),
    [anon_sym_Requires] = ACTIONS(416),
    [anon_sym_BuildArch] = ACTIONS(416),
    [anon_sym_BuildArchitectures] = ACTIONS(416),
    [anon_sym_BuildConflicts] = ACTIONS(416),
    [anon_sym_BuildPrereq] = ACTIONS(416),
    [anon_sym_BuildRequires] = ACTIONS(416),
    [anon_sym_Conflicts] = ACTIONS(416),
    [anon_sym_DocDir] = ACTIONS(416),
    [anon_sym_Enhances] = ACTIONS(416),
    [anon_sym_ExcludeArch] = ACTIONS(416),
    [anon_sym_ExcludeOS] = ACTIONS(416),
    [anon_sym_ExclusiveArch] = ACTIONS(416),
    [anon_sym_ExclusiveOS] = ACTIONS(416),
    [anon_sym_Obsoletes] = ACTIONS(416),
    [anon_sym_OrderWithRequires] = ACTIONS(416),
    [anon_sym_Prefix] = ACTIONS(416),
    [anon_sym_Prefixes] = ACTIONS(416),
    [anon_sym_Prereq] = ACTIONS(416),
    [anon_sym_Provides] = ACTIONS(416),
    [anon_sym_Recommends] = ACTIONS(416),
    [anon_sym_RemovePathPostfixes] = ACTIONS(416),
    [anon_sym_Suggests] = ACTIONS(416),
    [anon_sym_Supplements] = ACTIONS(416),
    [anon_sym_PERCENTdescription] = ACTIONS(416),
    [anon_sym_PERCENTpackage] = ACTIONS(416),
    [anon_sym_PERCENTprep] = ACTIONS(416),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(416),
    [anon_sym_PERCENTconf] = ACTIONS(416),
    [anon_sym_PERCENTbuild] = ACTIONS(416),
    [anon_sym_PERCENTinstall] = ACTIONS(416),
    [anon_sym_PERCENTcheck] = ACTIONS(416),
    [anon_sym_PERCENTclean] = ACTIONS(416),
    [anon_sym_PERCENTpre] = ACTIONS(416),
    [anon_sym_PERCENTpost] = ACTIONS(416),
    [anon_sym_PERCENTpreun] = ACTIONS(416),
    [anon_sym_PERCENTpostun] = ACTIONS(416),
    [anon_sym_PERCENTpretrans] = ACTIONS(416),
    [anon_sym_PERCENTposttrans] = ACTIONS(416),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(416),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(416),
    [anon_sym_PERCENTverify] = ACTIONS(416),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(416),
    [anon_sym_PERCENTtriggerin] = ACTIONS(416),
    [anon_sym_PERCENTtriggerun] = ACTIONS(416),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(416),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(416),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(416),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(416),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(416),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(416),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(416),
    [anon_sym_PERCENTfiles] = ACTIONS(416),
    [anon_sym_PERCENTchangelog] = ACTIONS(416),
    [anon_sym_PERCENTglobal] = ACTIONS(416),
    [anon_sym_PERCENTdefine] = ACTIONS(416),
    [anon_sym_PERCENTundefine] = ACTIONS(416),
    [anon_sym_PERCENT] = ACTIONS(416),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(416),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(416),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(418),
    [aux_sym__simple_statements_token1] = ACTIONS(418),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(420),
    [anon_sym_PERCENTifarch] = ACTIONS(420),
    [anon_sym_PERCENTifos] = ACTIONS(420),
    [anon_sym_PERCENTifnarch] = ACTIONS(420),
    [anon_sym_PERCENTifnos] = ACTIONS(420),
    [anon_sym_AutoProv] = ACTIONS(420),
    [anon_sym_AutoReq] = ACTIONS(420),
    [anon_sym_AutoReqProv] = ACTIONS(420),
    [anon_sym_BugUrl] = ACTIONS(420),
    [anon_sym_BuildRoot] = ACTIONS(420),
    [anon_sym_BuildSystem] = ACTIONS(420),
    [anon_sym_DistTag] = ACTIONS(420),
    [anon_sym_Distribution] = ACTIONS(420),
    [anon_sym_Epoch] = ACTIONS(420),
    [anon_sym_Group] = ACTIONS(420),
    [anon_sym_License] = ACTIONS(420),
    [anon_sym_ModularityLabel] = ACTIONS(420),
    [anon_sym_Name] = ACTIONS(420),
    [anon_sym_NoPatch] = ACTIONS(420),
    [anon_sym_NoSource] = ACTIONS(420),
    [anon_sym_Packager] = ACTIONS(420),
    [anon_sym_Release] = ACTIONS(420),
    [anon_sym_SourceLicense] = ACTIONS(420),
    [anon_sym_Summary] = ACTIONS(420),
    [anon_sym_URL] = ACTIONS(420),
    [anon_sym_Url] = ACTIONS(420),
    [anon_sym_VCS] = ACTIONS(420),
    [anon_sym_Vendor] = ACTIONS(420),
    [anon_sym_Version] = ACTIONS(420),
    [aux_sym_tag_token1] = ACTIONS(420),
    [aux_sym_tag_token2] = ACTIONS(420),
    [anon_sym_Requires] = ACTIONS(420),
    [anon_sym_BuildArch] = ACTIONS(420),
    [anon_sym_BuildArchitectures] = ACTIONS(420),
    [anon_sym_BuildConflicts] = ACTIONS(420),
    [anon_sym_BuildPrereq] = ACTIONS(420),
    [anon_sym_BuildRequires] = ACTIONS(420),
    [anon_sym_Conflicts] = ACTIONS(420),
    [anon_sym_DocDir] = ACTIONS(420),
    [anon_sym_Enhances] = ACTIONS(420),
    [anon_sym_ExcludeArch] = ACTIONS(420),
    [anon_sym_ExcludeOS] = ACTIONS(420),
    [anon_sym_ExclusiveArch] = ACTIONS(420),
    [anon_sym_ExclusiveOS] = ACTIONS(420),
    [anon_sym_Obsoletes] = ACTIONS(420),
    [anon_sym_OrderWithRequires] = ACTIONS(420),
    [anon_sym_Prefix] = ACTIONS(420),
    [anon_sym_Prefixes] = ACTIONS(420),
    [anon_sym_Prereq] = ACTIONS(420),
    [anon_sym_Provides] = ACTIONS(420),
    [anon_sym_Recommends] = ACTIONS(420),
    [anon_sym_RemovePathPostfixes] = ACTIONS(420),
    [anon_sym_Suggests] = ACTIONS(420),
    [anon_sym_Supplements] = ACTIONS(420),
    [anon_sym_PERCENTdescription] = ACTIONS(420),
    [anon_sym_PERCENTpackage] = ACTIONS(420),
    [anon_sym_PERCENTprep] = ACTIONS(420),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(420),
    [anon_sym_PERCENTconf] = ACTIONS(420),
    [anon_sym_PERCENTbuild] = ACTIONS(420),
    [anon_sym_PERCENTinstall] = ACTIONS(420),
    [anon_sym_PERCENTcheck] = ACTIONS(420),
    [anon_sym_PERCENTclean] = ACTIONS(420),
    [anon_sym_PERCENTpre] = ACTIONS(420),
    [anon_sym_PERCENTpost] = ACTIONS(420),
    [anon_sym_PERCENTpreun] = ACTIONS(420),
    [anon_sym_PERCENTpostun] = ACTIONS(420),
    [anon_sym_PERCENTpretrans] = ACTIONS(420),
    [anon_sym_PERCENTposttrans] = ACTIONS(420),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(420),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(420),
    [anon_sym_PERCENTverify] = ACTIONS(420),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(420),
    [anon_sym_PERCENTtriggerin] = ACTIONS(420),
    [anon_sym_PERCENTtriggerun] = ACTIONS(420),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(420),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(420),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(420),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(420),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(420),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(420),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(420),
    [anon_sym_PERCENTfiles] = ACTIONS(420),
    [anon_sym_PERCENTchangelog] = ACTIONS(420),
    [anon_sym_PERCENTglobal] = ACTIONS(420),
    [anon_sym_PERCENTdefine] = ACTIONS(420),
    [anon_sym_PERCENTundefine] = ACTIONS(420),
    [anon_sym_PERCENT] = ACTIONS(420),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(420),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(420),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [aux_sym__simple_statements_token1] = ACTIONS(382),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(384),
    [anon_sym_PERCENTifarch] = ACTIONS(384),
    [anon_sym_PERCENTifos] = ACTIONS(384),
    [anon_sym_PERCENTifnarch] = ACTIONS(384),
    [anon_sym_PERCENTifnos] = ACTIONS(384),
    [anon_sym_AutoProv] = ACTIONS(384),
    [anon_sym_AutoReq] = ACTIONS(384),
    [anon_sym_AutoReqProv] = ACTIONS(384),
    [anon_sym_BugUrl] = ACTIONS(384),
    [anon_sym_BuildRoot] = ACTIONS(384),
    [anon_sym_BuildSystem] = ACTIONS(384),
    [anon_sym_DistTag] = ACTIONS(384),
    [anon_sym_Distribution] = ACTIONS(384),
    [anon_sym_Epoch] = ACTIONS(384),
    [anon_sym_Group] = ACTIONS(384),
    [anon_sym_License] = ACTIONS(384),
    [anon_sym_ModularityLabel] = ACTIONS(384),
    [anon_sym_Name] = ACTIONS(384),
    [anon_sym_NoPatch] = ACTIONS(384),
    [anon_sym_NoSource] = ACTIONS(384),
    [anon_sym_Packager] = ACTIONS(384),
    [anon_sym_Release] = ACTIONS(384),
    [anon_sym_SourceLicense] = ACTIONS(384),
    [anon_sym_Summary] = ACTIONS(384),
    [anon_sym_URL] = ACTIONS(384),
    [anon_sym_Url] = ACTIONS(384),
    [anon_sym_VCS] = ACTIONS(384),
    [anon_sym_Vendor] = ACTIONS(384),
    [anon_sym_Version] = ACTIONS(384),
    [aux_sym_tag_token1] = ACTIONS(384),
    [aux_sym_tag_token2] = ACTIONS(384),
    [anon_sym_Requires] = ACTIONS(384),
    [anon_sym_BuildArch] = ACTIONS(384),
    [anon_sym_BuildArchitectures] = ACTIONS(384),
    [anon_sym_BuildConflicts] = ACTIONS(384),
    [anon_sym_BuildPrereq] = ACTIONS(384),
    [anon_sym_BuildRequires] = ACTIONS(384),
    [anon_sym_Conflicts] = ACTIONS(384),
    [anon_sym_DocDir] = ACTIONS(384),
    [anon_sym_Enhances] = ACTIONS(384),
    [anon_sym_ExcludeArch] = ACTIONS(384),
    [anon_sym_ExcludeOS] = ACTIONS(384),
    [anon_sym_ExclusiveArch] = ACTIONS(384),
    [anon_sym_ExclusiveOS] = ACTIONS(384),
    [anon_sym_Obsoletes] = ACTIONS(384),
    [anon_sym_OrderWithRequires] = ACTIONS(384),
    [anon_sym_Prefix] = ACTIONS(384),
    [anon_sym_Prefixes] = ACTIONS(384),
    [anon_sym_Prereq] = ACTIONS(384),
    [anon_sym_Provides] = ACTIONS(384),
    [anon_sym_Recommends] = ACTIONS(384),
    [anon_sym_RemovePathPostfixes] = ACTIONS(384),
    [anon_sym_Suggests] = ACTIONS(384),
    [anon_sym_Supplements] = ACTIONS(384),
    [anon_sym_PERCENTdescription] = ACTIONS(384),
    [anon_sym_PERCENTpackage] = ACTIONS(384),
    [anon_sym_PERCENTprep] = ACTIONS(384),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(384),
    [anon_sym_PERCENTconf] = ACTIONS(384),
    [anon_sym_PERCENTbuild] = ACTIONS(384),
    [anon_sym_PERCENTinstall] = ACTIONS(384),
    [anon_sym_PERCENTcheck] = ACTIONS(384),
    [anon_sym_PERCENTclean] = ACTIONS(384),
    [anon_sym_PERCENTpre] = ACTIONS(384),
    [anon_sym_PERCENTpost] = ACTIONS(384),
    [anon_sym_PERCENTpreun] = ACTIONS(384),
    [anon_sym_PERCENTpostun] = ACTIONS(384),
    [anon_sym_PERCENTpretrans] = ACTIONS(384),
    [anon_sym_PERCENTposttrans] = ACTIONS(384),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(384),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(384),
    [anon_sym_PERCENTverify] = ACTIONS(384),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(384),
    [anon_sym_PERCENTtriggerin] = ACTIONS(384),
    [anon_sym_PERCENTtriggerun] = ACTIONS(384),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(384),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(384),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(384),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(384),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(384),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(384),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(384),
    [anon_sym_PERCENTfiles] = ACTIONS(384),
    [anon_sym_PERCENTchangelog] = ACTIONS(384),
    [anon_sym_PERCENTglobal] = ACTIONS(384),
    [anon_sym_PERCENTdefine] = ACTIONS(384),
    [anon_sym_PERCENTundefine] = ACTIONS(384),
    [anon_sym_PERCENT] = ACTIONS(384),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(384),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(384),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(422),
    [aux_sym__simple_statements_token1] = ACTIONS(422),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(424),
    [anon_sym_PERCENTifarch] = ACTIONS(424),
    [anon_sym_PERCENTifos] = ACTIONS(424),
    [anon_sym_PERCENTifnarch] = ACTIONS(424),
    [anon_sym_PERCENTifnos] = ACTIONS(424),
    [anon_sym_AutoProv] = ACTIONS(424),
    [anon_sym_AutoReq] = ACTIONS(424),
    [anon_sym_AutoReqProv] = ACTIONS(424),
    [anon_sym_BugUrl] = ACTIONS(424),
    [anon_sym_BuildRoot] = ACTIONS(424),
    [anon_sym_BuildSystem] = ACTIONS(424),
    [anon_sym_DistTag] = ACTIONS(424),
    [anon_sym_Distribution] = ACTIONS(424),
    [anon_sym_Epoch] = ACTIONS(424),
    [anon_sym_Group] = ACTIONS(424),
    [anon_sym_License] = ACTIONS(424),
    [anon_sym_ModularityLabel] = ACTIONS(424),
    [anon_sym_Name] = ACTIONS(424),
    [anon_sym_NoPatch] = ACTIONS(424),
    [anon_sym_NoSource] = ACTIONS(424),
    [anon_sym_Packager] = ACTIONS(424),
    [anon_sym_Release] = ACTIONS(424),
    [anon_sym_SourceLicense] = ACTIONS(424),
    [anon_sym_Summary] = ACTIONS(424),
    [anon_sym_URL] = ACTIONS(424),
    [anon_sym_Url] = ACTIONS(424),
    [anon_sym_VCS] = ACTIONS(424),
    [anon_sym_Vendor] = ACTIONS(424),
    [anon_sym_Version] = ACTIONS(424),
    [aux_sym_tag_token1] = ACTIONS(424),
    [aux_sym_tag_token2] = ACTIONS(424),
    [anon_sym_Requires] = ACTIONS(424),
    [anon_sym_BuildArch] = ACTIONS(424),
    [anon_sym_BuildArchitectures] = ACTIONS(424),
    [anon_sym_BuildConflicts] = ACTIONS(424),
    [anon_sym_BuildPrereq] = ACTIONS(424),
    [anon_sym_BuildRequires] = ACTIONS(424),
    [anon_sym_Conflicts] = ACTIONS(424),
    [anon_sym_DocDir] = ACTIONS(424),
    [anon_sym_Enhances] = ACTIONS(424),
    [anon_sym_ExcludeArch] = ACTIONS(424),
    [anon_sym_ExcludeOS] = ACTIONS(424),
    [anon_sym_ExclusiveArch] = ACTIONS(424),
    [anon_sym_ExclusiveOS] = ACTIONS(424),
    [anon_sym_Obsoletes] = ACTIONS(424),
    [anon_sym_OrderWithRequires] = ACTIONS(424),
    [anon_sym_Prefix] = ACTIONS(424),
    [anon_sym_Prefixes] = ACTIONS(424),
    [anon_sym_Prereq] = ACTIONS(424),
    [anon_sym_Provides] = ACTIONS(424),
    [anon_sym_Recommends] = ACTIONS(424),
    [anon_sym_RemovePathPostfixes] = ACTIONS(424),
    [anon_sym_Suggests] = ACTIONS(424),
    [anon_sym_Supplements] = ACTIONS(424),
    [anon_sym_PERCENTdescription] = ACTIONS(424),
    [anon_sym_PERCENTpackage] = ACTIONS(424),
    [anon_sym_PERCENTprep] = ACTIONS(424),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(424),
    [anon_sym_PERCENTconf] = ACTIONS(424),
    [anon_sym_PERCENTbuild] = ACTIONS(424),
    [anon_sym_PERCENTinstall] = ACTIONS(424),
    [anon_sym_PERCENTcheck] = ACTIONS(424),
    [anon_sym_PERCENTclean] = ACTIONS(424),
    [anon_sym_PERCENTpre] = ACTIONS(424),
    [anon_sym_PERCENTpost] = ACTIONS(424),
    [anon_sym_PERCENTpreun] = ACTIONS(424),
    [anon_sym_PERCENTpostun] = ACTIONS(424),
    [anon_sym_PERCENTpretrans] = ACTIONS(424),
    [anon_sym_PERCENTposttrans] = ACTIONS(424),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(424),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(424),
    [anon_sym_PERCENTverify] = ACTIONS(424),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(424),
    [anon_sym_PERCENTtriggerin] = ACTIONS(424),
    [anon_sym_PERCENTtriggerun] = ACTIONS(424),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(424),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(424),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(424),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(424),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(424),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(424),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(424),
    [anon_sym_PERCENTfiles] = ACTIONS(424),
    [anon_sym_PERCENTchangelog] = ACTIONS(424),
    [anon_sym_PERCENTglobal] = ACTIONS(424),
    [anon_sym_PERCENTdefine] = ACTIONS(424),
    [anon_sym_PERCENTundefine] = ACTIONS(424),
    [anon_sym_PERCENT] = ACTIONS(424),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(424),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(424),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(426),
    [aux_sym__simple_statements_token1] = ACTIONS(426),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(428),
    [anon_sym_PERCENTifarch] = ACTIONS(428),
    [anon_sym_PERCENTifos] = ACTIONS(428),
    [anon_sym_PERCENTifnarch] = ACTIONS(428),
    [anon_sym_PERCENTifnos] = ACTIONS(428),
    [anon_sym_AutoProv] = ACTIONS(428),
    [anon_sym_AutoReq] = ACTIONS(428),
    [anon_sym_AutoReqProv] = ACTIONS(428),
    [anon_sym_BugUrl] = ACTIONS(428),
    [anon_sym_BuildRoot] = ACTIONS(428),
    [anon_sym_BuildSystem] = ACTIONS(428),
    [anon_sym_DistTag] = ACTIONS(428),
    [anon_sym_Distribution] = ACTIONS(428),
    [anon_sym_Epoch] = ACTIONS(428),
    [anon_sym_Group] = ACTIONS(428),
    [anon_sym_License] = ACTIONS(428),
    [anon_sym_ModularityLabel] = ACTIONS(428),
    [anon_sym_Name] = ACTIONS(428),
    [anon_sym_NoPatch] = ACTIONS(428),
    [anon_sym_NoSource] = ACTIONS(428),
    [anon_sym_Packager] = ACTIONS(428),
    [anon_sym_Release] = ACTIONS(428),
    [anon_sym_SourceLicense] = ACTIONS(428),
    [anon_sym_Summary] = ACTIONS(428),
    [anon_sym_URL] = ACTIONS(428),
    [anon_sym_Url] = ACTIONS(428),
    [anon_sym_VCS] = ACTIONS(428),
    [anon_sym_Vendor] = ACTIONS(428),
    [anon_sym_Version] = ACTIONS(428),
    [aux_sym_tag_token1] = ACTIONS(428),
    [aux_sym_tag_token2] = ACTIONS(428),
    [anon_sym_Requires] = ACTIONS(428),
    [anon_sym_BuildArch] = ACTIONS(428),
    [anon_sym_BuildArchitectures] = ACTIONS(428),
    [anon_sym_BuildConflicts] = ACTIONS(428),
    [anon_sym_BuildPrereq] = ACTIONS(428),
    [anon_sym_BuildRequires] = ACTIONS(428),
    [anon_sym_Conflicts] = ACTIONS(428),
    [anon_sym_DocDir] = ACTIONS(428),
    [anon_sym_Enhances] = ACTIONS(428),
    [anon_sym_ExcludeArch] = ACTIONS(428),
    [anon_sym_ExcludeOS] = ACTIONS(428),
    [anon_sym_ExclusiveArch] = ACTIONS(428),
    [anon_sym_ExclusiveOS] = ACTIONS(428),
    [anon_sym_Obsoletes] = ACTIONS(428),
    [anon_sym_OrderWithRequires] = ACTIONS(428),
    [anon_sym_Prefix] = ACTIONS(428),
    [anon_sym_Prefixes] = ACTIONS(428),
    [anon_sym_Prereq] = ACTIONS(428),
    [anon_sym_Provides] = ACTIONS(428),
    [anon_sym_Recommends] = ACTIONS(428),
    [anon_sym_RemovePathPostfixes] = ACTIONS(428),
    [anon_sym_Suggests] = ACTIONS(428),
    [anon_sym_Supplements] = ACTIONS(428),
    [anon_sym_PERCENTdescription] = ACTIONS(428),
    [anon_sym_PERCENTpackage] = ACTIONS(428),
    [anon_sym_PERCENTprep] = ACTIONS(428),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(428),
    [anon_sym_PERCENTconf] = ACTIONS(428),
    [anon_sym_PERCENTbuild] = ACTIONS(428),
    [anon_sym_PERCENTinstall] = ACTIONS(428),
    [anon_sym_PERCENTcheck] = ACTIONS(428),
    [anon_sym_PERCENTclean] = ACTIONS(428),
    [anon_sym_PERCENTpre] = ACTIONS(428),
    [anon_sym_PERCENTpost] = ACTIONS(428),
    [anon_sym_PERCENTpreun] = ACTIONS(428),
    [anon_sym_PERCENTpostun] = ACTIONS(428),
    [anon_sym_PERCENTpretrans] = ACTIONS(428),
    [anon_sym_PERCENTposttrans] = ACTIONS(428),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(428),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(428),
    [anon_sym_PERCENTverify] = ACTIONS(428),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(428),
    [anon_sym_PERCENTtriggerin] = ACTIONS(428),
    [anon_sym_PERCENTtriggerun] = ACTIONS(428),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(428),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(428),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(428),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(428),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(428),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(428),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(428),
    [anon_sym_PERCENTfiles] = ACTIONS(428),
    [anon_sym_PERCENTchangelog] = ACTIONS(428),
    [anon_sym_PERCENTglobal] = ACTIONS(428),
    [anon_sym_PERCENTdefine] = ACTIONS(428),
    [anon_sym_PERCENTundefine] = ACTIONS(428),
    [anon_sym_PERCENT] = ACTIONS(428),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(428),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(428),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(374),
    [aux_sym__simple_statements_token1] = ACTIONS(374),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(376),
    [anon_sym_PERCENTifarch] = ACTIONS(376),
    [anon_sym_PERCENTifos] = ACTIONS(376),
    [anon_sym_PERCENTifnarch] = ACTIONS(376),
    [anon_sym_PERCENTifnos] = ACTIONS(376),
    [anon_sym_AutoProv] = ACTIONS(376),
    [anon_sym_AutoReq] = ACTIONS(376),
    [anon_sym_AutoReqProv] = ACTIONS(376),
    [anon_sym_BugUrl] = ACTIONS(376),
    [anon_sym_BuildRoot] = ACTIONS(376),
    [anon_sym_BuildSystem] = ACTIONS(376),
    [anon_sym_DistTag] = ACTIONS(376),
    [anon_sym_Distribution] = ACTIONS(376),
    [anon_sym_Epoch] = ACTIONS(376),
    [anon_sym_Group] = ACTIONS(376),
    [anon_sym_License] = ACTIONS(376),
    [anon_sym_ModularityLabel] = ACTIONS(376),
    [anon_sym_Name] = ACTIONS(376),
    [anon_sym_NoPatch] = ACTIONS(376),
    [anon_sym_NoSource] = ACTIONS(376),
    [anon_sym_Packager] = ACTIONS(376),
    [anon_sym_Release] = ACTIONS(376),
    [anon_sym_SourceLicense] = ACTIONS(376),
    [anon_sym_Summary] = ACTIONS(376),
    [anon_sym_URL] = ACTIONS(376),
    [anon_sym_Url] = ACTIONS(376),
    [anon_sym_VCS] = ACTIONS(376),
    [anon_sym_Vendor] = ACTIONS(376),
    [anon_sym_Version] = ACTIONS(376),
    [aux_sym_tag_token1] = ACTIONS(376),
    [aux_sym_tag_token2] = ACTIONS(376),
    [anon_sym_Requires] = ACTIONS(376),
    [anon_sym_BuildArch] = ACTIONS(376),
    [anon_sym_BuildArchitectures] = ACTIONS(376),
    [anon_sym_BuildConflicts] = ACTIONS(376),
    [anon_sym_BuildPrereq] = ACTIONS(376),
    [anon_sym_BuildRequires] = ACTIONS(376),
    [anon_sym_Conflicts] = ACTIONS(376),
    [anon_sym_DocDir] = ACTIONS(376),
    [anon_sym_Enhances] = ACTIONS(376),
    [anon_sym_ExcludeArch] = ACTIONS(376),
    [anon_sym_ExcludeOS] = ACTIONS(376),
    [anon_sym_ExclusiveArch] = ACTIONS(376),
    [anon_sym_ExclusiveOS] = ACTIONS(376),
    [anon_sym_Obsoletes] = ACTIONS(376),
    [anon_sym_OrderWithRequires] = ACTIONS(376),
    [anon_sym_Prefix] = ACTIONS(376),
    [anon_sym_Prefixes] = ACTIONS(376),
    [anon_sym_Prereq] = ACTIONS(376),
    [anon_sym_Provides] = ACTIONS(376),
    [anon_sym_Recommends] = ACTIONS(376),
    [anon_sym_RemovePathPostfixes] = ACTIONS(376),
    [anon_sym_Suggests] = ACTIONS(376),
    [anon_sym_Supplements] = ACTIONS(376),
    [anon_sym_PERCENTdescription] = ACTIONS(376),
    [anon_sym_PERCENTpackage] = ACTIONS(376),
    [anon_sym_PERCENTprep] = ACTIONS(376),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(376),
    [anon_sym_PERCENTconf] = ACTIONS(376),
    [anon_sym_PERCENTbuild] = ACTIONS(376),
    [anon_sym_PERCENTinstall] = ACTIONS(376),
    [anon_sym_PERCENTcheck] = ACTIONS(376),
    [anon_sym_PERCENTclean] = ACTIONS(376),
    [anon_sym_PERCENTpre] = ACTIONS(376),
    [anon_sym_PERCENTpost] = ACTIONS(376),
    [anon_sym_PERCENTpreun] = ACTIONS(376),
    [anon_sym_PERCENTpostun] = ACTIONS(376),
    [anon_sym_PERCENTpretrans] = ACTIONS(376),
    [anon_sym_PERCENTposttrans] = ACTIONS(376),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(376),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(376),
    [anon_sym_PERCENTverify] = ACTIONS(376),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(376),
    [anon_sym_PERCENTtriggerin] = ACTIONS(376),
    [anon_sym_PERCENTtriggerun] = ACTIONS(376),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(376),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(376),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(376),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(376),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(376),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(376),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(376),
    [anon_sym_PERCENTfiles] = ACTIONS(376),
    [anon_sym_PERCENTchangelog] = ACTIONS(376),
    [anon_sym_PERCENTglobal] = ACTIONS(376),
    [anon_sym_PERCENTdefine] = ACTIONS(376),
    [anon_sym_PERCENTundefine] = ACTIONS(376),
    [anon_sym_PERCENT] = ACTIONS(376),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(376),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(376),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [aux_sym__simple_statements_token1] = ACTIONS(378),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(380),
    [anon_sym_PERCENTifarch] = ACTIONS(380),
    [anon_sym_PERCENTifos] = ACTIONS(380),
    [anon_sym_PERCENTifnarch] = ACTIONS(380),
    [anon_sym_PERCENTifnos] = ACTIONS(380),
    [anon_sym_AutoProv] = ACTIONS(380),
    [anon_sym_AutoReq] = ACTIONS(380),
    [anon_sym_AutoReqProv] = ACTIONS(380),
    [anon_sym_BugUrl] = ACTIONS(380),
    [anon_sym_BuildRoot] = ACTIONS(380),
    [anon_sym_BuildSystem] = ACTIONS(380),
    [anon_sym_DistTag] = ACTIONS(380),
    [anon_sym_Distribution] = ACTIONS(380),
    [anon_sym_Epoch] = ACTIONS(380),
    [anon_sym_Group] = ACTIONS(380),
    [anon_sym_License] = ACTIONS(380),
    [anon_sym_ModularityLabel] = ACTIONS(380),
    [anon_sym_Name] = ACTIONS(380),
    [anon_sym_NoPatch] = ACTIONS(380),
    [anon_sym_NoSource] = ACTIONS(380),
    [anon_sym_Packager] = ACTIONS(380),
    [anon_sym_Release] = ACTIONS(380),
    [anon_sym_SourceLicense] = ACTIONS(380),
    [anon_sym_Summary] = ACTIONS(380),
    [anon_sym_URL] = ACTIONS(380),
    [anon_sym_Url] = ACTIONS(380),
    [anon_sym_VCS] = ACTIONS(380),
    [anon_sym_Vendor] = ACTIONS(380),
    [anon_sym_Version] = ACTIONS(380),
    [aux_sym_tag_token1] = ACTIONS(380),
    [aux_sym_tag_token2] = ACTIONS(380),
    [anon_sym_Requires] = ACTIONS(380),
    [anon_sym_BuildArch] = ACTIONS(380),
    [anon_sym_BuildArchitectures] = ACTIONS(380),
    [anon_sym_BuildConflicts] = ACTIONS(380),
    [anon_sym_BuildPrereq] = ACTIONS(380),
    [anon_sym_BuildRequires] = ACTIONS(380),
    [anon_sym_Conflicts] = ACTIONS(380),
    [anon_sym_DocDir] = ACTIONS(380),
    [anon_sym_Enhances] = ACTIONS(380),
    [anon_sym_ExcludeArch] = ACTIONS(380),
    [anon_sym_ExcludeOS] = ACTIONS(380),
    [anon_sym_ExclusiveArch] = ACTIONS(380),
    [anon_sym_ExclusiveOS] = ACTIONS(380),
    [anon_sym_Obsoletes] = ACTIONS(380),
    [anon_sym_OrderWithRequires] = ACTIONS(380),
    [anon_sym_Prefix] = ACTIONS(380),
    [anon_sym_Prefixes] = ACTIONS(380),
    [anon_sym_Prereq] = ACTIONS(380),
    [anon_sym_Provides] = ACTIONS(380),
    [anon_sym_Recommends] = ACTIONS(380),
    [anon_sym_RemovePathPostfixes] = ACTIONS(380),
    [anon_sym_Suggests] = ACTIONS(380),
    [anon_sym_Supplements] = ACTIONS(380),
    [anon_sym_PERCENTdescription] = ACTIONS(380),
    [anon_sym_PERCENTpackage] = ACTIONS(380),
    [anon_sym_PERCENTprep] = ACTIONS(380),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(380),
    [anon_sym_PERCENTconf] = ACTIONS(380),
    [anon_sym_PERCENTbuild] = ACTIONS(380),
    [anon_sym_PERCENTinstall] = ACTIONS(380),
    [anon_sym_PERCENTcheck] = ACTIONS(380),
    [anon_sym_PERCENTclean] = ACTIONS(380),
    [anon_sym_PERCENTpre] = ACTIONS(380),
    [anon_sym_PERCENTpost] = ACTIONS(380),
    [anon_sym_PERCENTpreun] = ACTIONS(380),
    [anon_sym_PERCENTpostun] = ACTIONS(380),
    [anon_sym_PERCENTpretrans] = ACTIONS(380),
    [anon_sym_PERCENTposttrans] = ACTIONS(380),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(380),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(380),
    [anon_sym_PERCENTverify] = ACTIONS(380),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(380),
    [anon_sym_PERCENTtriggerin] = ACTIONS(380),
    [anon_sym_PERCENTtriggerun] = ACTIONS(380),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(380),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(380),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(380),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(380),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(380),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(380),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(380),
    [anon_sym_PERCENTfiles] = ACTIONS(380),
    [anon_sym_PERCENTchangelog] = ACTIONS(380),
    [anon_sym_PERCENTglobal] = ACTIONS(380),
    [anon_sym_PERCENTdefine] = ACTIONS(380),
    [anon_sym_PERCENTundefine] = ACTIONS(380),
    [anon_sym_PERCENT] = ACTIONS(380),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(380),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(380),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(430),
    [aux_sym__simple_statements_token1] = ACTIONS(430),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(432),
    [anon_sym_PERCENTifarch] = ACTIONS(432),
    [anon_sym_PERCENTifos] = ACTIONS(432),
    [anon_sym_PERCENTifnarch] = ACTIONS(432),
    [anon_sym_PERCENTifnos] = ACTIONS(432),
    [anon_sym_AutoProv] = ACTIONS(432),
    [anon_sym_AutoReq] = ACTIONS(432),
    [anon_sym_AutoReqProv] = ACTIONS(432),
    [anon_sym_BugUrl] = ACTIONS(432),
    [anon_sym_BuildRoot] = ACTIONS(432),
    [anon_sym_BuildSystem] = ACTIONS(432),
    [anon_sym_DistTag] = ACTIONS(432),
    [anon_sym_Distribution] = ACTIONS(432),
    [anon_sym_Epoch] = ACTIONS(432),
    [anon_sym_Group] = ACTIONS(432),
    [anon_sym_License] = ACTIONS(432),
    [anon_sym_ModularityLabel] = ACTIONS(432),
    [anon_sym_Name] = ACTIONS(432),
    [anon_sym_NoPatch] = ACTIONS(432),
    [anon_sym_NoSource] = ACTIONS(432),
    [anon_sym_Packager] = ACTIONS(432),
    [anon_sym_Release] = ACTIONS(432),
    [anon_sym_SourceLicense] = ACTIONS(432),
    [anon_sym_Summary] = ACTIONS(432),
    [anon_sym_URL] = ACTIONS(432),
    [anon_sym_Url] = ACTIONS(432),
    [anon_sym_VCS] = ACTIONS(432),
    [anon_sym_Vendor] = ACTIONS(432),
    [anon_sym_Version] = ACTIONS(432),
    [aux_sym_tag_token1] = ACTIONS(432),
    [aux_sym_tag_token2] = ACTIONS(432),
    [anon_sym_Requires] = ACTIONS(432),
    [anon_sym_BuildArch] = ACTIONS(432),
    [anon_sym_BuildArchitectures] = ACTIONS(432),
    [anon_sym_BuildConflicts] = ACTIONS(432),
    [anon_sym_BuildPrereq] = ACTIONS(432),
    [anon_sym_BuildRequires] = ACTIONS(432),
    [anon_sym_Conflicts] = ACTIONS(432),
    [anon_sym_DocDir] = ACTIONS(432),
    [anon_sym_Enhances] = ACTIONS(432),
    [anon_sym_ExcludeArch] = ACTIONS(432),
    [anon_sym_ExcludeOS] = ACTIONS(432),
    [anon_sym_ExclusiveArch] = ACTIONS(432),
    [anon_sym_ExclusiveOS] = ACTIONS(432),
    [anon_sym_Obsoletes] = ACTIONS(432),
    [anon_sym_OrderWithRequires] = ACTIONS(432),
    [anon_sym_Prefix] = ACTIONS(432),
    [anon_sym_Prefixes] = ACTIONS(432),
    [anon_sym_Prereq] = ACTIONS(432),
    [anon_sym_Provides] = ACTIONS(432),
    [anon_sym_Recommends] = ACTIONS(432),
    [anon_sym_RemovePathPostfixes] = ACTIONS(432),
    [anon_sym_Suggests] = ACTIONS(432),
    [anon_sym_Supplements] = ACTIONS(432),
    [anon_sym_PERCENTdescription] = ACTIONS(432),
    [anon_sym_PERCENTpackage] = ACTIONS(432),
    [anon_sym_PERCENTprep] = ACTIONS(432),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(432),
    [anon_sym_PERCENTconf] = ACTIONS(432),
    [anon_sym_PERCENTbuild] = ACTIONS(432),
    [anon_sym_PERCENTinstall] = ACTIONS(432),
    [anon_sym_PERCENTcheck] = ACTIONS(432),
    [anon_sym_PERCENTclean] = ACTIONS(432),
    [anon_sym_PERCENTpre] = ACTIONS(432),
    [anon_sym_PERCENTpost] = ACTIONS(432),
    [anon_sym_PERCENTpreun] = ACTIONS(432),
    [anon_sym_PERCENTpostun] = ACTIONS(432),
    [anon_sym_PERCENTpretrans] = ACTIONS(432),
    [anon_sym_PERCENTposttrans] = ACTIONS(432),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(432),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(432),
    [anon_sym_PERCENTverify] = ACTIONS(432),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(432),
    [anon_sym_PERCENTtriggerin] = ACTIONS(432),
    [anon_sym_PERCENTtriggerun] = ACTIONS(432),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(432),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(432),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(432),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(432),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(432),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(432),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(432),
    [anon_sym_PERCENTfiles] = ACTIONS(432),
    [anon_sym_PERCENTchangelog] = ACTIONS(432),
    [anon_sym_PERCENTglobal] = ACTIONS(432),
    [anon_sym_PERCENTdefine] = ACTIONS(432),
    [anon_sym_PERCENTundefine] = ACTIONS(432),
    [anon_sym_PERCENT] = ACTIONS(432),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(432),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(432),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(434),
    [aux_sym__simple_statements_token1] = ACTIONS(434),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(436),
    [anon_sym_PERCENTifarch] = ACTIONS(436),
    [anon_sym_PERCENTifos] = ACTIONS(436),
    [anon_sym_PERCENTifnarch] = ACTIONS(436),
    [anon_sym_PERCENTifnos] = ACTIONS(436),
    [anon_sym_AutoProv] = ACTIONS(436),
    [anon_sym_AutoReq] = ACTIONS(436),
    [anon_sym_AutoReqProv] = ACTIONS(436),
    [anon_sym_BugUrl] = ACTIONS(436),
    [anon_sym_BuildRoot] = ACTIONS(436),
    [anon_sym_BuildSystem] = ACTIONS(436),
    [anon_sym_DistTag] = ACTIONS(436),
    [anon_sym_Distribution] = ACTIONS(436),
    [anon_sym_Epoch] = ACTIONS(436),
    [anon_sym_Group] = ACTIONS(436),
    [anon_sym_License] = ACTIONS(436),
    [anon_sym_ModularityLabel] = ACTIONS(436),
    [anon_sym_Name] = ACTIONS(436),
    [anon_sym_NoPatch] = ACTIONS(436),
    [anon_sym_NoSource] = ACTIONS(436),
    [anon_sym_Packager] = ACTIONS(436),
    [anon_sym_Release] = ACTIONS(436),
    [anon_sym_SourceLicense] = ACTIONS(436),
    [anon_sym_Summary] = ACTIONS(436),
    [anon_sym_URL] = ACTIONS(436),
    [anon_sym_Url] = ACTIONS(436),
    [anon_sym_VCS] = ACTIONS(436),
    [anon_sym_Vendor] = ACTIONS(436),
    [anon_sym_Version] = ACTIONS(436),
    [aux_sym_tag_token1] = ACTIONS(436),
    [aux_sym_tag_token2] = ACTIONS(436),
    [anon_sym_Requires] = ACTIONS(436),
    [anon_sym_BuildArch] = ACTIONS(436),
    [anon_sym_BuildArchitectures] = ACTIONS(436),
    [anon_sym_BuildConflicts] = ACTIONS(436),
    [anon_sym_BuildPrereq] = ACTIONS(436),
    [anon_sym_BuildRequires] = ACTIONS(436),
    [anon_sym_Conflicts] = ACTIONS(436),
    [anon_sym_DocDir] = ACTIONS(436),
    [anon_sym_Enhances] = ACTIONS(436),
    [anon_sym_ExcludeArch] = ACTIONS(436),
    [anon_sym_ExcludeOS] = ACTIONS(436),
    [anon_sym_ExclusiveArch] = ACTIONS(436),
    [anon_sym_ExclusiveOS] = ACTIONS(436),
    [anon_sym_Obsoletes] = ACTIONS(436),
    [anon_sym_OrderWithRequires] = ACTIONS(436),
    [anon_sym_Prefix] = ACTIONS(436),
    [anon_sym_Prefixes] = ACTIONS(436),
    [anon_sym_Prereq] = ACTIONS(436),
    [anon_sym_Provides] = ACTIONS(436),
    [anon_sym_Recommends] = ACTIONS(436),
    [anon_sym_RemovePathPostfixes] = ACTIONS(436),
    [anon_sym_Suggests] = ACTIONS(436),
    [anon_sym_Supplements] = ACTIONS(436),
    [anon_sym_PERCENTdescription] = ACTIONS(436),
    [anon_sym_PERCENTpackage] = ACTIONS(436),
    [anon_sym_PERCENTprep] = ACTIONS(436),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(436),
    [anon_sym_PERCENTconf] = ACTIONS(436),
    [anon_sym_PERCENTbuild] = ACTIONS(436),
    [anon_sym_PERCENTinstall] = ACTIONS(436),
    [anon_sym_PERCENTcheck] = ACTIONS(436),
    [anon_sym_PERCENTclean] = ACTIONS(436),
    [anon_sym_PERCENTpre] = ACTIONS(436),
    [anon_sym_PERCENTpost] = ACTIONS(436),
    [anon_sym_PERCENTpreun] = ACTIONS(436),
    [anon_sym_PERCENTpostun] = ACTIONS(436),
    [anon_sym_PERCENTpretrans] = ACTIONS(436),
    [anon_sym_PERCENTposttrans] = ACTIONS(436),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(436),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(436),
    [anon_sym_PERCENTverify] = ACTIONS(436),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(436),
    [anon_sym_PERCENTtriggerin] = ACTIONS(436),
    [anon_sym_PERCENTtriggerun] = ACTIONS(436),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(436),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(436),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(436),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(436),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(436),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(436),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(436),
    [anon_sym_PERCENTfiles] = ACTIONS(436),
    [anon_sym_PERCENTchangelog] = ACTIONS(436),
    [anon_sym_PERCENTglobal] = ACTIONS(436),
    [anon_sym_PERCENTdefine] = ACTIONS(436),
    [anon_sym_PERCENTundefine] = ACTIONS(436),
    [anon_sym_PERCENT] = ACTIONS(436),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(436),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(436),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(438),
    [aux_sym__simple_statements_token1] = ACTIONS(438),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(440),
    [anon_sym_PERCENTifarch] = ACTIONS(440),
    [anon_sym_PERCENTifos] = ACTIONS(440),
    [anon_sym_PERCENTifnarch] = ACTIONS(440),
    [anon_sym_PERCENTifnos] = ACTIONS(440),
    [anon_sym_AutoProv] = ACTIONS(440),
    [anon_sym_AutoReq] = ACTIONS(440),
    [anon_sym_AutoReqProv] = ACTIONS(440),
    [anon_sym_BugUrl] = ACTIONS(440),
    [anon_sym_BuildRoot] = ACTIONS(440),
    [anon_sym_BuildSystem] = ACTIONS(440),
    [anon_sym_DistTag] = ACTIONS(440),
    [anon_sym_Distribution] = ACTIONS(440),
    [anon_sym_Epoch] = ACTIONS(440),
    [anon_sym_Group] = ACTIONS(440),
    [anon_sym_License] = ACTIONS(440),
    [anon_sym_ModularityLabel] = ACTIONS(440),
    [anon_sym_Name] = ACTIONS(440),
    [anon_sym_NoPatch] = ACTIONS(440),
    [anon_sym_NoSource] = ACTIONS(440),
    [anon_sym_Packager] = ACTIONS(440),
    [anon_sym_Release] = ACTIONS(440),
    [anon_sym_SourceLicense] = ACTIONS(440),
    [anon_sym_Summary] = ACTIONS(440),
    [anon_sym_URL] = ACTIONS(440),
    [anon_sym_Url] = ACTIONS(440),
    [anon_sym_VCS] = ACTIONS(440),
    [anon_sym_Vendor] = ACTIONS(440),
    [anon_sym_Version] = ACTIONS(440),
    [aux_sym_tag_token1] = ACTIONS(440),
    [aux_sym_tag_token2] = ACTIONS(440),
    [anon_sym_Requires] = ACTIONS(440),
    [anon_sym_BuildArch] = ACTIONS(440),
    [anon_sym_BuildArchitectures] = ACTIONS(440),
    [anon_sym_BuildConflicts] = ACTIONS(440),
    [anon_sym_BuildPrereq] = ACTIONS(440),
    [anon_sym_BuildRequires] = ACTIONS(440),
    [anon_sym_Conflicts] = ACTIONS(440),
    [anon_sym_DocDir] = ACTIONS(440),
    [anon_sym_Enhances] = ACTIONS(440),
    [anon_sym_ExcludeArch] = ACTIONS(440),
    [anon_sym_ExcludeOS] = ACTIONS(440),
    [anon_sym_ExclusiveArch] = ACTIONS(440),
    [anon_sym_ExclusiveOS] = ACTIONS(440),
    [anon_sym_Obsoletes] = ACTIONS(440),
    [anon_sym_OrderWithRequires] = ACTIONS(440),
    [anon_sym_Prefix] = ACTIONS(440),
    [anon_sym_Prefixes] = ACTIONS(440),
    [anon_sym_Prereq] = ACTIONS(440),
    [anon_sym_Provides] = ACTIONS(440),
    [anon_sym_Recommends] = ACTIONS(440),
    [anon_sym_RemovePathPostfixes] = ACTIONS(440),
    [anon_sym_Suggests] = ACTIONS(440),
    [anon_sym_Supplements] = ACTIONS(440),
    [anon_sym_PERCENTdescription] = ACTIONS(440),
    [anon_sym_PERCENTpackage] = ACTIONS(440),
    [anon_sym_PERCENTprep] = ACTIONS(440),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(440),
    [anon_sym_PERCENTconf] = ACTIONS(440),
    [anon_sym_PERCENTbuild] = ACTIONS(440),
    [anon_sym_PERCENTinstall] = ACTIONS(440),
    [anon_sym_PERCENTcheck] = ACTIONS(440),
    [anon_sym_PERCENTclean] = ACTIONS(440),
    [anon_sym_PERCENTpre] = ACTIONS(440),
    [anon_sym_PERCENTpost] = ACTIONS(440),
    [anon_sym_PERCENTpreun] = ACTIONS(440),
    [anon_sym_PERCENTpostun] = ACTIONS(440),
    [anon_sym_PERCENTpretrans] = ACTIONS(440),
    [anon_sym_PERCENTposttrans] = ACTIONS(440),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(440),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(440),
    [anon_sym_PERCENTverify] = ACTIONS(440),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(440),
    [anon_sym_PERCENTtriggerin] = ACTIONS(440),
    [anon_sym_PERCENTtriggerun] = ACTIONS(440),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(440),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(440),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(440),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(440),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(440),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(440),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(440),
    [anon_sym_PERCENTfiles] = ACTIONS(440),
    [anon_sym_PERCENTchangelog] = ACTIONS(440),
    [anon_sym_PERCENTglobal] = ACTIONS(440),
    [anon_sym_PERCENTdefine] = ACTIONS(440),
    [anon_sym_PERCENTundefine] = ACTIONS(440),
    [anon_sym_PERCENT] = ACTIONS(440),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(440),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(440),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(442),
    [aux_sym__simple_statements_token1] = ACTIONS(442),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(444),
    [anon_sym_PERCENTifarch] = ACTIONS(444),
    [anon_sym_PERCENTifos] = ACTIONS(444),
    [anon_sym_PERCENTifnarch] = ACTIONS(444),
    [anon_sym_PERCENTifnos] = ACTIONS(444),
    [anon_sym_AutoProv] = ACTIONS(444),
    [anon_sym_AutoReq] = ACTIONS(444),
    [anon_sym_AutoReqProv] = ACTIONS(444),
    [anon_sym_BugUrl] = ACTIONS(444),
    [anon_sym_BuildRoot] = ACTIONS(444),
    [anon_sym_BuildSystem] = ACTIONS(444),
    [anon_sym_DistTag] = ACTIONS(444),
    [anon_sym_Distribution] = ACTIONS(444),
    [anon_sym_Epoch] = ACTIONS(444),
    [anon_sym_Group] = ACTIONS(444),
    [anon_sym_License] = ACTIONS(444),
    [anon_sym_ModularityLabel] = ACTIONS(444),
    [anon_sym_Name] = ACTIONS(444),
    [anon_sym_NoPatch] = ACTIONS(444),
    [anon_sym_NoSource] = ACTIONS(444),
    [anon_sym_Packager] = ACTIONS(444),
    [anon_sym_Release] = ACTIONS(444),
    [anon_sym_SourceLicense] = ACTIONS(444),
    [anon_sym_Summary] = ACTIONS(444),
    [anon_sym_URL] = ACTIONS(444),
    [anon_sym_Url] = ACTIONS(444),
    [anon_sym_VCS] = ACTIONS(444),
    [anon_sym_Vendor] = ACTIONS(444),
    [anon_sym_Version] = ACTIONS(444),
    [aux_sym_tag_token1] = ACTIONS(444),
    [aux_sym_tag_token2] = ACTIONS(444),
    [anon_sym_Requires] = ACTIONS(444),
    [anon_sym_BuildArch] = ACTIONS(444),
    [anon_sym_BuildArchitectures] = ACTIONS(444),
    [anon_sym_BuildConflicts] = ACTIONS(444),
    [anon_sym_BuildPrereq] = ACTIONS(444),
    [anon_sym_BuildRequires] = ACTIONS(444),
    [anon_sym_Conflicts] = ACTIONS(444),
    [anon_sym_DocDir] = ACTIONS(444),
    [anon_sym_Enhances] = ACTIONS(444),
    [anon_sym_ExcludeArch] = ACTIONS(444),
    [anon_sym_ExcludeOS] = ACTIONS(444),
    [anon_sym_ExclusiveArch] = ACTIONS(444),
    [anon_sym_ExclusiveOS] = ACTIONS(444),
    [anon_sym_Obsoletes] = ACTIONS(444),
    [anon_sym_OrderWithRequires] = ACTIONS(444),
    [anon_sym_Prefix] = ACTIONS(444),
    [anon_sym_Prefixes] = ACTIONS(444),
    [anon_sym_Prereq] = ACTIONS(444),
    [anon_sym_Provides] = ACTIONS(444),
    [anon_sym_Recommends] = ACTIONS(444),
    [anon_sym_RemovePathPostfixes] = ACTIONS(444),
    [anon_sym_Suggests] = ACTIONS(444),
    [anon_sym_Supplements] = ACTIONS(444),
    [anon_sym_PERCENTdescription] = ACTIONS(444),
    [anon_sym_PERCENTpackage] = ACTIONS(444),
    [anon_sym_PERCENTprep] = ACTIONS(444),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(444),
    [anon_sym_PERCENTconf] = ACTIONS(444),
    [anon_sym_PERCENTbuild] = ACTIONS(444),
    [anon_sym_PERCENTinstall] = ACTIONS(444),
    [anon_sym_PERCENTcheck] = ACTIONS(444),
    [anon_sym_PERCENTclean] = ACTIONS(444),
    [anon_sym_PERCENTpre] = ACTIONS(444),
    [anon_sym_PERCENTpost] = ACTIONS(444),
    [anon_sym_PERCENTpreun] = ACTIONS(444),
    [anon_sym_PERCENTpostun] = ACTIONS(444),
    [anon_sym_PERCENTpretrans] = ACTIONS(444),
    [anon_sym_PERCENTposttrans] = ACTIONS(444),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(444),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(444),
    [anon_sym_PERCENTverify] = ACTIONS(444),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(444),
    [anon_sym_PERCENTtriggerin] = ACTIONS(444),
    [anon_sym_PERCENTtriggerun] = ACTIONS(444),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(444),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(444),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(444),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(444),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(444),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(444),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(444),
    [anon_sym_PERCENTfiles] = ACTIONS(444),
    [anon_sym_PERCENTchangelog] = ACTIONS(444),
    [anon_sym_PERCENTglobal] = ACTIONS(444),
    [anon_sym_PERCENTdefine] = ACTIONS(444),
    [anon_sym_PERCENTundefine] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(444),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(444),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(444),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(446),
    [aux_sym__simple_statements_token1] = ACTIONS(446),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(448),
    [anon_sym_PERCENTifarch] = ACTIONS(448),
    [anon_sym_PERCENTifos] = ACTIONS(448),
    [anon_sym_PERCENTifnarch] = ACTIONS(448),
    [anon_sym_PERCENTifnos] = ACTIONS(448),
    [anon_sym_AutoProv] = ACTIONS(448),
    [anon_sym_AutoReq] = ACTIONS(448),
    [anon_sym_AutoReqProv] = ACTIONS(448),
    [anon_sym_BugUrl] = ACTIONS(448),
    [anon_sym_BuildRoot] = ACTIONS(448),
    [anon_sym_BuildSystem] = ACTIONS(448),
    [anon_sym_DistTag] = ACTIONS(448),
    [anon_sym_Distribution] = ACTIONS(448),
    [anon_sym_Epoch] = ACTIONS(448),
    [anon_sym_Group] = ACTIONS(448),
    [anon_sym_License] = ACTIONS(448),
    [anon_sym_ModularityLabel] = ACTIONS(448),
    [anon_sym_Name] = ACTIONS(448),
    [anon_sym_NoPatch] = ACTIONS(448),
    [anon_sym_NoSource] = ACTIONS(448),
    [anon_sym_Packager] = ACTIONS(448),
    [anon_sym_Release] = ACTIONS(448),
    [anon_sym_SourceLicense] = ACTIONS(448),
    [anon_sym_Summary] = ACTIONS(448),
    [anon_sym_URL] = ACTIONS(448),
    [anon_sym_Url] = ACTIONS(448),
    [anon_sym_VCS] = ACTIONS(448),
    [anon_sym_Vendor] = ACTIONS(448),
    [anon_sym_Version] = ACTIONS(448),
    [aux_sym_tag_token1] = ACTIONS(448),
    [aux_sym_tag_token2] = ACTIONS(448),
    [anon_sym_Requires] = ACTIONS(448),
    [anon_sym_BuildArch] = ACTIONS(448),
    [anon_sym_BuildArchitectures] = ACTIONS(448),
    [anon_sym_BuildConflicts] = ACTIONS(448),
    [anon_sym_BuildPrereq] = ACTIONS(448),
    [anon_sym_BuildRequires] = ACTIONS(448),
    [anon_sym_Conflicts] = ACTIONS(448),
    [anon_sym_DocDir] = ACTIONS(448),
    [anon_sym_Enhances] = ACTIONS(448),
    [anon_sym_ExcludeArch] = ACTIONS(448),
    [anon_sym_ExcludeOS] = ACTIONS(448),
    [anon_sym_ExclusiveArch] = ACTIONS(448),
    [anon_sym_ExclusiveOS] = ACTIONS(448),
    [anon_sym_Obsoletes] = ACTIONS(448),
    [anon_sym_OrderWithRequires] = ACTIONS(448),
    [anon_sym_Prefix] = ACTIONS(448),
    [anon_sym_Prefixes] = ACTIONS(448),
    [anon_sym_Prereq] = ACTIONS(448),
    [anon_sym_Provides] = ACTIONS(448),
    [anon_sym_Recommends] = ACTIONS(448),
    [anon_sym_RemovePathPostfixes] = ACTIONS(448),
    [anon_sym_Suggests] = ACTIONS(448),
    [anon_sym_Supplements] = ACTIONS(448),
    [anon_sym_PERCENTdescription] = ACTIONS(448),
    [anon_sym_PERCENTpackage] = ACTIONS(448),
    [anon_sym_PERCENTprep] = ACTIONS(448),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(448),
    [anon_sym_PERCENTconf] = ACTIONS(448),
    [anon_sym_PERCENTbuild] = ACTIONS(448),
    [anon_sym_PERCENTinstall] = ACTIONS(448),
    [anon_sym_PERCENTcheck] = ACTIONS(448),
    [anon_sym_PERCENTclean] = ACTIONS(448),
    [anon_sym_PERCENTpre] = ACTIONS(448),
    [anon_sym_PERCENTpost] = ACTIONS(448),
    [anon_sym_PERCENTpreun] = ACTIONS(448),
    [anon_sym_PERCENTpostun] = ACTIONS(448),
    [anon_sym_PERCENTpretrans] = ACTIONS(448),
    [anon_sym_PERCENTposttrans] = ACTIONS(448),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(448),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(448),
    [anon_sym_PERCENTverify] = ACTIONS(448),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(448),
    [anon_sym_PERCENTtriggerin] = ACTIONS(448),
    [anon_sym_PERCENTtriggerun] = ACTIONS(448),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(448),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(448),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(448),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(448),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(448),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(448),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(448),
    [anon_sym_PERCENTfiles] = ACTIONS(448),
    [anon_sym_PERCENTchangelog] = ACTIONS(448),
    [anon_sym_PERCENTglobal] = ACTIONS(448),
    [anon_sym_PERCENTdefine] = ACTIONS(448),
    [anon_sym_PERCENTundefine] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(448),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(448),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(448),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(450),
    [aux_sym__simple_statements_token1] = ACTIONS(450),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(452),
    [anon_sym_PERCENTifarch] = ACTIONS(452),
    [anon_sym_PERCENTifos] = ACTIONS(452),
    [anon_sym_PERCENTifnarch] = ACTIONS(452),
    [anon_sym_PERCENTifnos] = ACTIONS(452),
    [anon_sym_AutoProv] = ACTIONS(452),
    [anon_sym_AutoReq] = ACTIONS(452),
    [anon_sym_AutoReqProv] = ACTIONS(452),
    [anon_sym_BugUrl] = ACTIONS(452),
    [anon_sym_BuildRoot] = ACTIONS(452),
    [anon_sym_BuildSystem] = ACTIONS(452),
    [anon_sym_DistTag] = ACTIONS(452),
    [anon_sym_Distribution] = ACTIONS(452),
    [anon_sym_Epoch] = ACTIONS(452),
    [anon_sym_Group] = ACTIONS(452),
    [anon_sym_License] = ACTIONS(452),
    [anon_sym_ModularityLabel] = ACTIONS(452),
    [anon_sym_Name] = ACTIONS(452),
    [anon_sym_NoPatch] = ACTIONS(452),
    [anon_sym_NoSource] = ACTIONS(452),
    [anon_sym_Packager] = ACTIONS(452),
    [anon_sym_Release] = ACTIONS(452),
    [anon_sym_SourceLicense] = ACTIONS(452),
    [anon_sym_Summary] = ACTIONS(452),
    [anon_sym_URL] = ACTIONS(452),
    [anon_sym_Url] = ACTIONS(452),
    [anon_sym_VCS] = ACTIONS(452),
    [anon_sym_Vendor] = ACTIONS(452),
    [anon_sym_Version] = ACTIONS(452),
    [aux_sym_tag_token1] = ACTIONS(452),
    [aux_sym_tag_token2] = ACTIONS(452),
    [anon_sym_Requires] = ACTIONS(452),
    [anon_sym_BuildArch] = ACTIONS(452),
    [anon_sym_BuildArchitectures] = ACTIONS(452),
    [anon_sym_BuildConflicts] = ACTIONS(452),
    [anon_sym_BuildPrereq] = ACTIONS(452),
    [anon_sym_BuildRequires] = ACTIONS(452),
    [anon_sym_Conflicts] = ACTIONS(452),
    [anon_sym_DocDir] = ACTIONS(452),
    [anon_sym_Enhances] = ACTIONS(452),
    [anon_sym_ExcludeArch] = ACTIONS(452),
    [anon_sym_ExcludeOS] = ACTIONS(452),
    [anon_sym_ExclusiveArch] = ACTIONS(452),
    [anon_sym_ExclusiveOS] = ACTIONS(452),
    [anon_sym_Obsoletes] = ACTIONS(452),
    [anon_sym_OrderWithRequires] = ACTIONS(452),
    [anon_sym_Prefix] = ACTIONS(452),
    [anon_sym_Prefixes] = ACTIONS(452),
    [anon_sym_Prereq] = ACTIONS(452),
    [anon_sym_Provides] = ACTIONS(452),
    [anon_sym_Recommends] = ACTIONS(452),
    [anon_sym_RemovePathPostfixes] = ACTIONS(452),
    [anon_sym_Suggests] = ACTIONS(452),
    [anon_sym_Supplements] = ACTIONS(452),
    [anon_sym_PERCENTdescription] = ACTIONS(452),
    [anon_sym_PERCENTpackage] = ACTIONS(452),
    [anon_sym_PERCENTprep] = ACTIONS(452),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(452),
    [anon_sym_PERCENTconf] = ACTIONS(452),
    [anon_sym_PERCENTbuild] = ACTIONS(452),
    [anon_sym_PERCENTinstall] = ACTIONS(452),
    [anon_sym_PERCENTcheck] = ACTIONS(452),
    [anon_sym_PERCENTclean] = ACTIONS(452),
    [anon_sym_PERCENTpre] = ACTIONS(452),
    [anon_sym_PERCENTpost] = ACTIONS(452),
    [anon_sym_PERCENTpreun] = ACTIONS(452),
    [anon_sym_PERCENTpostun] = ACTIONS(452),
    [anon_sym_PERCENTpretrans] = ACTIONS(452),
    [anon_sym_PERCENTposttrans] = ACTIONS(452),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(452),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(452),
    [anon_sym_PERCENTverify] = ACTIONS(452),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(452),
    [anon_sym_PERCENTtriggerin] = ACTIONS(452),
    [anon_sym_PERCENTtriggerun] = ACTIONS(452),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(452),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(452),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(452),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(452),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(452),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(452),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(452),
    [anon_sym_PERCENTfiles] = ACTIONS(452),
    [anon_sym_PERCENTchangelog] = ACTIONS(452),
    [anon_sym_PERCENTglobal] = ACTIONS(452),
    [anon_sym_PERCENTdefine] = ACTIONS(452),
    [anon_sym_PERCENTundefine] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(452),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(452),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(452),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(454),
    [aux_sym__simple_statements_token1] = ACTIONS(454),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(456),
    [anon_sym_PERCENTifarch] = ACTIONS(456),
    [anon_sym_PERCENTifos] = ACTIONS(456),
    [anon_sym_PERCENTifnarch] = ACTIONS(456),
    [anon_sym_PERCENTifnos] = ACTIONS(456),
    [anon_sym_AutoProv] = ACTIONS(456),
    [anon_sym_AutoReq] = ACTIONS(456),
    [anon_sym_AutoReqProv] = ACTIONS(456),
    [anon_sym_BugUrl] = ACTIONS(456),
    [anon_sym_BuildRoot] = ACTIONS(456),
    [anon_sym_BuildSystem] = ACTIONS(456),
    [anon_sym_DistTag] = ACTIONS(456),
    [anon_sym_Distribution] = ACTIONS(456),
    [anon_sym_Epoch] = ACTIONS(456),
    [anon_sym_Group] = ACTIONS(456),
    [anon_sym_License] = ACTIONS(456),
    [anon_sym_ModularityLabel] = ACTIONS(456),
    [anon_sym_Name] = ACTIONS(456),
    [anon_sym_NoPatch] = ACTIONS(456),
    [anon_sym_NoSource] = ACTIONS(456),
    [anon_sym_Packager] = ACTIONS(456),
    [anon_sym_Release] = ACTIONS(456),
    [anon_sym_SourceLicense] = ACTIONS(456),
    [anon_sym_Summary] = ACTIONS(456),
    [anon_sym_URL] = ACTIONS(456),
    [anon_sym_Url] = ACTIONS(456),
    [anon_sym_VCS] = ACTIONS(456),
    [anon_sym_Vendor] = ACTIONS(456),
    [anon_sym_Version] = ACTIONS(456),
    [aux_sym_tag_token1] = ACTIONS(456),
    [aux_sym_tag_token2] = ACTIONS(456),
    [anon_sym_Requires] = ACTIONS(456),
    [anon_sym_BuildArch] = ACTIONS(456),
    [anon_sym_BuildArchitectures] = ACTIONS(456),
    [anon_sym_BuildConflicts] = ACTIONS(456),
    [anon_sym_BuildPrereq] = ACTIONS(456),
    [anon_sym_BuildRequires] = ACTIONS(456),
    [anon_sym_Conflicts] = ACTIONS(456),
    [anon_sym_DocDir] = ACTIONS(456),
    [anon_sym_Enhances] = ACTIONS(456),
    [anon_sym_ExcludeArch] = ACTIONS(456),
    [anon_sym_ExcludeOS] = ACTIONS(456),
    [anon_sym_ExclusiveArch] = ACTIONS(456),
    [anon_sym_ExclusiveOS] = ACTIONS(456),
    [anon_sym_Obsoletes] = ACTIONS(456),
    [anon_sym_OrderWithRequires] = ACTIONS(456),
    [anon_sym_Prefix] = ACTIONS(456),
    [anon_sym_Prefixes] = ACTIONS(456),
    [anon_sym_Prereq] = ACTIONS(456),
    [anon_sym_Provides] = ACTIONS(456),
    [anon_sym_Recommends] = ACTIONS(456),
    [anon_sym_RemovePathPostfixes] = ACTIONS(456),
    [anon_sym_Suggests] = ACTIONS(456),
    [anon_sym_Supplements] = ACTIONS(456),
    [anon_sym_PERCENTdescription] = ACTIONS(456),
    [anon_sym_PERCENTpackage] = ACTIONS(456),
    [anon_sym_PERCENTprep] = ACTIONS(456),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(456),
    [anon_sym_PERCENTconf] = ACTIONS(456),
    [anon_sym_PERCENTbuild] = ACTIONS(456),
    [anon_sym_PERCENTinstall] = ACTIONS(456),
    [anon_sym_PERCENTcheck] = ACTIONS(456),
    [anon_sym_PERCENTclean] = ACTIONS(456),
    [anon_sym_PERCENTpre] = ACTIONS(456),
    [anon_sym_PERCENTpost] = ACTIONS(456),
    [anon_sym_PERCENTpreun] = ACTIONS(456),
    [anon_sym_PERCENTpostun] = ACTIONS(456),
    [anon_sym_PERCENTpretrans] = ACTIONS(456),
    [anon_sym_PERCENTposttrans] = ACTIONS(456),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(456),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(456),
    [anon_sym_PERCENTverify] = ACTIONS(456),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(456),
    [anon_sym_PERCENTtriggerin] = ACTIONS(456),
    [anon_sym_PERCENTtriggerun] = ACTIONS(456),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(456),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(456),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(456),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(456),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(456),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(456),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(456),
    [anon_sym_PERCENTfiles] = ACTIONS(456),
    [anon_sym_PERCENTchangelog] = ACTIONS(456),
    [anon_sym_PERCENTglobal] = ACTIONS(456),
    [anon_sym_PERCENTdefine] = ACTIONS(456),
    [anon_sym_PERCENTundefine] = ACTIONS(456),
    [anon_sym_PERCENT] = ACTIONS(456),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(456),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(456),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(458),
    [aux_sym__simple_statements_token1] = ACTIONS(458),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(460),
    [anon_sym_PERCENTifarch] = ACTIONS(460),
    [anon_sym_PERCENTifos] = ACTIONS(460),
    [anon_sym_PERCENTifnarch] = ACTIONS(460),
    [anon_sym_PERCENTifnos] = ACTIONS(460),
    [anon_sym_AutoProv] = ACTIONS(460),
    [anon_sym_AutoReq] = ACTIONS(460),
    [anon_sym_AutoReqProv] = ACTIONS(460),
    [anon_sym_BugUrl] = ACTIONS(460),
    [anon_sym_BuildRoot] = ACTIONS(460),
    [anon_sym_BuildSystem] = ACTIONS(460),
    [anon_sym_DistTag] = ACTIONS(460),
    [anon_sym_Distribution] = ACTIONS(460),
    [anon_sym_Epoch] = ACTIONS(460),
    [anon_sym_Group] = ACTIONS(460),
    [anon_sym_License] = ACTIONS(460),
    [anon_sym_ModularityLabel] = ACTIONS(460),
    [anon_sym_Name] = ACTIONS(460),
    [anon_sym_NoPatch] = ACTIONS(460),
    [anon_sym_NoSource] = ACTIONS(460),
    [anon_sym_Packager] = ACTIONS(460),
    [anon_sym_Release] = ACTIONS(460),
    [anon_sym_SourceLicense] = ACTIONS(460),
    [anon_sym_Summary] = ACTIONS(460),
    [anon_sym_URL] = ACTIONS(460),
    [anon_sym_Url] = ACTIONS(460),
    [anon_sym_VCS] = ACTIONS(460),
    [anon_sym_Vendor] = ACTIONS(460),
    [anon_sym_Version] = ACTIONS(460),
    [aux_sym_tag_token1] = ACTIONS(460),
    [aux_sym_tag_token2] = ACTIONS(460),
    [anon_sym_Requires] = ACTIONS(460),
    [anon_sym_BuildArch] = ACTIONS(460),
    [anon_sym_BuildArchitectures] = ACTIONS(460),
    [anon_sym_BuildConflicts] = ACTIONS(460),
    [anon_sym_BuildPrereq] = ACTIONS(460),
    [anon_sym_BuildRequires] = ACTIONS(460),
    [anon_sym_Conflicts] = ACTIONS(460),
    [anon_sym_DocDir] = ACTIONS(460),
    [anon_sym_Enhances] = ACTIONS(460),
    [anon_sym_ExcludeArch] = ACTIONS(460),
    [anon_sym_ExcludeOS] = ACTIONS(460),
    [anon_sym_ExclusiveArch] = ACTIONS(460),
    [anon_sym_ExclusiveOS] = ACTIONS(460),
    [anon_sym_Obsoletes] = ACTIONS(460),
    [anon_sym_OrderWithRequires] = ACTIONS(460),
    [anon_sym_Prefix] = ACTIONS(460),
    [anon_sym_Prefixes] = ACTIONS(460),
    [anon_sym_Prereq] = ACTIONS(460),
    [anon_sym_Provides] = ACTIONS(460),
    [anon_sym_Recommends] = ACTIONS(460),
    [anon_sym_RemovePathPostfixes] = ACTIONS(460),
    [anon_sym_Suggests] = ACTIONS(460),
    [anon_sym_Supplements] = ACTIONS(460),
    [anon_sym_PERCENTdescription] = ACTIONS(460),
    [anon_sym_PERCENTpackage] = ACTIONS(460),
    [anon_sym_PERCENTprep] = ACTIONS(460),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(460),
    [anon_sym_PERCENTconf] = ACTIONS(460),
    [anon_sym_PERCENTbuild] = ACTIONS(460),
    [anon_sym_PERCENTinstall] = ACTIONS(460),
    [anon_sym_PERCENTcheck] = ACTIONS(460),
    [anon_sym_PERCENTclean] = ACTIONS(460),
    [anon_sym_PERCENTpre] = ACTIONS(460),
    [anon_sym_PERCENTpost] = ACTIONS(460),
    [anon_sym_PERCENTpreun] = ACTIONS(460),
    [anon_sym_PERCENTpostun] = ACTIONS(460),
    [anon_sym_PERCENTpretrans] = ACTIONS(460),
    [anon_sym_PERCENTposttrans] = ACTIONS(460),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(460),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(460),
    [anon_sym_PERCENTverify] = ACTIONS(460),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(460),
    [anon_sym_PERCENTtriggerin] = ACTIONS(460),
    [anon_sym_PERCENTtriggerun] = ACTIONS(460),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(460),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(460),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(460),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(460),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(460),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(460),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(460),
    [anon_sym_PERCENTfiles] = ACTIONS(460),
    [anon_sym_PERCENTchangelog] = ACTIONS(460),
    [anon_sym_PERCENTglobal] = ACTIONS(460),
    [anon_sym_PERCENTdefine] = ACTIONS(460),
    [anon_sym_PERCENTundefine] = ACTIONS(460),
    [anon_sym_PERCENT] = ACTIONS(460),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(460),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(460),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(462),
    [aux_sym__simple_statements_token1] = ACTIONS(462),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(464),
    [anon_sym_PERCENTifarch] = ACTIONS(464),
    [anon_sym_PERCENTifos] = ACTIONS(464),
    [anon_sym_PERCENTifnarch] = ACTIONS(464),
    [anon_sym_PERCENTifnos] = ACTIONS(464),
    [anon_sym_AutoProv] = ACTIONS(464),
    [anon_sym_AutoReq] = ACTIONS(464),
    [anon_sym_AutoReqProv] = ACTIONS(464),
    [anon_sym_BugUrl] = ACTIONS(464),
    [anon_sym_BuildRoot] = ACTIONS(464),
    [anon_sym_BuildSystem] = ACTIONS(464),
    [anon_sym_DistTag] = ACTIONS(464),
    [anon_sym_Distribution] = ACTIONS(464),
    [anon_sym_Epoch] = ACTIONS(464),
    [anon_sym_Group] = ACTIONS(464),
    [anon_sym_License] = ACTIONS(464),
    [anon_sym_ModularityLabel] = ACTIONS(464),
    [anon_sym_Name] = ACTIONS(464),
    [anon_sym_NoPatch] = ACTIONS(464),
    [anon_sym_NoSource] = ACTIONS(464),
    [anon_sym_Packager] = ACTIONS(464),
    [anon_sym_Release] = ACTIONS(464),
    [anon_sym_SourceLicense] = ACTIONS(464),
    [anon_sym_Summary] = ACTIONS(464),
    [anon_sym_URL] = ACTIONS(464),
    [anon_sym_Url] = ACTIONS(464),
    [anon_sym_VCS] = ACTIONS(464),
    [anon_sym_Vendor] = ACTIONS(464),
    [anon_sym_Version] = ACTIONS(464),
    [aux_sym_tag_token1] = ACTIONS(464),
    [aux_sym_tag_token2] = ACTIONS(464),
    [anon_sym_Requires] = ACTIONS(464),
    [anon_sym_BuildArch] = ACTIONS(464),
    [anon_sym_BuildArchitectures] = ACTIONS(464),
    [anon_sym_BuildConflicts] = ACTIONS(464),
    [anon_sym_BuildPrereq] = ACTIONS(464),
    [anon_sym_BuildRequires] = ACTIONS(464),
    [anon_sym_Conflicts] = ACTIONS(464),
    [anon_sym_DocDir] = ACTIONS(464),
    [anon_sym_Enhances] = ACTIONS(464),
    [anon_sym_ExcludeArch] = ACTIONS(464),
    [anon_sym_ExcludeOS] = ACTIONS(464),
    [anon_sym_ExclusiveArch] = ACTIONS(464),
    [anon_sym_ExclusiveOS] = ACTIONS(464),
    [anon_sym_Obsoletes] = ACTIONS(464),
    [anon_sym_OrderWithRequires] = ACTIONS(464),
    [anon_sym_Prefix] = ACTIONS(464),
    [anon_sym_Prefixes] = ACTIONS(464),
    [anon_sym_Prereq] = ACTIONS(464),
    [anon_sym_Provides] = ACTIONS(464),
    [anon_sym_Recommends] = ACTIONS(464),
    [anon_sym_RemovePathPostfixes] = ACTIONS(464),
    [anon_sym_Suggests] = ACTIONS(464),
    [anon_sym_Supplements] = ACTIONS(464),
    [anon_sym_PERCENTdescription] = ACTIONS(464),
    [anon_sym_PERCENTpackage] = ACTIONS(464),
    [anon_sym_PERCENTprep] = ACTIONS(464),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(464),
    [anon_sym_PERCENTconf] = ACTIONS(464),
    [anon_sym_PERCENTbuild] = ACTIONS(464),
    [anon_sym_PERCENTinstall] = ACTIONS(464),
    [anon_sym_PERCENTcheck] = ACTIONS(464),
    [anon_sym_PERCENTclean] = ACTIONS(464),
    [anon_sym_PERCENTpre] = ACTIONS(464),
    [anon_sym_PERCENTpost] = ACTIONS(464),
    [anon_sym_PERCENTpreun] = ACTIONS(464),
    [anon_sym_PERCENTpostun] = ACTIONS(464),
    [anon_sym_PERCENTpretrans] = ACTIONS(464),
    [anon_sym_PERCENTposttrans] = ACTIONS(464),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(464),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(464),
    [anon_sym_PERCENTverify] = ACTIONS(464),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(464),
    [anon_sym_PERCENTtriggerin] = ACTIONS(464),
    [anon_sym_PERCENTtriggerun] = ACTIONS(464),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(464),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(464),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(464),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(464),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(464),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(464),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(464),
    [anon_sym_PERCENTfiles] = ACTIONS(464),
    [anon_sym_PERCENTchangelog] = ACTIONS(464),
    [anon_sym_PERCENTglobal] = ACTIONS(464),
    [anon_sym_PERCENTdefine] = ACTIONS(464),
    [anon_sym_PERCENTundefine] = ACTIONS(464),
    [anon_sym_PERCENT] = ACTIONS(464),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(464),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(464),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [aux_sym__simple_statements_token1] = ACTIONS(386),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(388),
    [anon_sym_PERCENTifarch] = ACTIONS(388),
    [anon_sym_PERCENTifos] = ACTIONS(388),
    [anon_sym_PERCENTifnarch] = ACTIONS(388),
    [anon_sym_PERCENTifnos] = ACTIONS(388),
    [anon_sym_AutoProv] = ACTIONS(388),
    [anon_sym_AutoReq] = ACTIONS(388),
    [anon_sym_AutoReqProv] = ACTIONS(388),
    [anon_sym_BugUrl] = ACTIONS(388),
    [anon_sym_BuildRoot] = ACTIONS(388),
    [anon_sym_BuildSystem] = ACTIONS(388),
    [anon_sym_DistTag] = ACTIONS(388),
    [anon_sym_Distribution] = ACTIONS(388),
    [anon_sym_Epoch] = ACTIONS(388),
    [anon_sym_Group] = ACTIONS(388),
    [anon_sym_License] = ACTIONS(388),
    [anon_sym_ModularityLabel] = ACTIONS(388),
    [anon_sym_Name] = ACTIONS(388),
    [anon_sym_NoPatch] = ACTIONS(388),
    [anon_sym_NoSource] = ACTIONS(388),
    [anon_sym_Packager] = ACTIONS(388),
    [anon_sym_Release] = ACTIONS(388),
    [anon_sym_SourceLicense] = ACTIONS(388),
    [anon_sym_Summary] = ACTIONS(388),
    [anon_sym_URL] = ACTIONS(388),
    [anon_sym_Url] = ACTIONS(388),
    [anon_sym_VCS] = ACTIONS(388),
    [anon_sym_Vendor] = ACTIONS(388),
    [anon_sym_Version] = ACTIONS(388),
    [aux_sym_tag_token1] = ACTIONS(388),
    [aux_sym_tag_token2] = ACTIONS(388),
    [anon_sym_Requires] = ACTIONS(388),
    [anon_sym_BuildArch] = ACTIONS(388),
    [anon_sym_BuildArchitectures] = ACTIONS(388),
    [anon_sym_BuildConflicts] = ACTIONS(388),
    [anon_sym_BuildPrereq] = ACTIONS(388),
    [anon_sym_BuildRequires] = ACTIONS(388),
    [anon_sym_Conflicts] = ACTIONS(388),
    [anon_sym_DocDir] = ACTIONS(388),
    [anon_sym_Enhances] = ACTIONS(388),
    [anon_sym_ExcludeArch] = ACTIONS(388),
    [anon_sym_ExcludeOS] = ACTIONS(388),
    [anon_sym_ExclusiveArch] = ACTIONS(388),
    [anon_sym_ExclusiveOS] = ACTIONS(388),
    [anon_sym_Obsoletes] = ACTIONS(388),
    [anon_sym_OrderWithRequires] = ACTIONS(388),
    [anon_sym_Prefix] = ACTIONS(388),
    [anon_sym_Prefixes] = ACTIONS(388),
    [anon_sym_Prereq] = ACTIONS(388),
    [anon_sym_Provides] = ACTIONS(388),
    [anon_sym_Recommends] = ACTIONS(388),
    [anon_sym_RemovePathPostfixes] = ACTIONS(388),
    [anon_sym_Suggests] = ACTIONS(388),
    [anon_sym_Supplements] = ACTIONS(388),
    [anon_sym_PERCENTdescription] = ACTIONS(388),
    [anon_sym_PERCENTpackage] = ACTIONS(388),
    [anon_sym_PERCENTprep] = ACTIONS(388),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(388),
    [anon_sym_PERCENTconf] = ACTIONS(388),
    [anon_sym_PERCENTbuild] = ACTIONS(388),
    [anon_sym_PERCENTinstall] = ACTIONS(388),
    [anon_sym_PERCENTcheck] = ACTIONS(388),
    [anon_sym_PERCENTclean] = ACTIONS(388),
    [anon_sym_PERCENTpre] = ACTIONS(388),
    [anon_sym_PERCENTpost] = ACTIONS(388),
    [anon_sym_PERCENTpreun] = ACTIONS(388),
    [anon_sym_PERCENTpostun] = ACTIONS(388),
    [anon_sym_PERCENTpretrans] = ACTIONS(388),
    [anon_sym_PERCENTposttrans] = ACTIONS(388),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(388),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(388),
    [anon_sym_PERCENTverify] = ACTIONS(388),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(388),
    [anon_sym_PERCENTtriggerin] = ACTIONS(388),
    [anon_sym_PERCENTtriggerun] = ACTIONS(388),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(388),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(388),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(388),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(388),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(388),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(388),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(388),
    [anon_sym_PERCENTfiles] = ACTIONS(388),
    [anon_sym_PERCENTchangelog] = ACTIONS(388),
    [anon_sym_PERCENTglobal] = ACTIONS(388),
    [anon_sym_PERCENTdefine] = ACTIONS(388),
    [anon_sym_PERCENTundefine] = ACTIONS(388),
    [anon_sym_PERCENT] = ACTIONS(388),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(388),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(388),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(466),
    [aux_sym__simple_statements_token1] = ACTIONS(466),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(468),
    [anon_sym_PERCENTifarch] = ACTIONS(468),
    [anon_sym_PERCENTifos] = ACTIONS(468),
    [anon_sym_PERCENTifnarch] = ACTIONS(468),
    [anon_sym_PERCENTifnos] = ACTIONS(468),
    [anon_sym_AutoProv] = ACTIONS(468),
    [anon_sym_AutoReq] = ACTIONS(468),
    [anon_sym_AutoReqProv] = ACTIONS(468),
    [anon_sym_BugUrl] = ACTIONS(468),
    [anon_sym_BuildRoot] = ACTIONS(468),
    [anon_sym_BuildSystem] = ACTIONS(468),
    [anon_sym_DistTag] = ACTIONS(468),
    [anon_sym_Distribution] = ACTIONS(468),
    [anon_sym_Epoch] = ACTIONS(468),
    [anon_sym_Group] = ACTIONS(468),
    [anon_sym_License] = ACTIONS(468),
    [anon_sym_ModularityLabel] = ACTIONS(468),
    [anon_sym_Name] = ACTIONS(468),
    [anon_sym_NoPatch] = ACTIONS(468),
    [anon_sym_NoSource] = ACTIONS(468),
    [anon_sym_Packager] = ACTIONS(468),
    [anon_sym_Release] = ACTIONS(468),
    [anon_sym_SourceLicense] = ACTIONS(468),
    [anon_sym_Summary] = ACTIONS(468),
    [anon_sym_URL] = ACTIONS(468),
    [anon_sym_Url] = ACTIONS(468),
    [anon_sym_VCS] = ACTIONS(468),
    [anon_sym_Vendor] = ACTIONS(468),
    [anon_sym_Version] = ACTIONS(468),
    [aux_sym_tag_token1] = ACTIONS(468),
    [aux_sym_tag_token2] = ACTIONS(468),
    [anon_sym_Requires] = ACTIONS(468),
    [anon_sym_BuildArch] = ACTIONS(468),
    [anon_sym_BuildArchitectures] = ACTIONS(468),
    [anon_sym_BuildConflicts] = ACTIONS(468),
    [anon_sym_BuildPrereq] = ACTIONS(468),
    [anon_sym_BuildRequires] = ACTIONS(468),
    [anon_sym_Conflicts] = ACTIONS(468),
    [anon_sym_DocDir] = ACTIONS(468),
    [anon_sym_Enhances] = ACTIONS(468),
    [anon_sym_ExcludeArch] = ACTIONS(468),
    [anon_sym_ExcludeOS] = ACTIONS(468),
    [anon_sym_ExclusiveArch] = ACTIONS(468),
    [anon_sym_ExclusiveOS] = ACTIONS(468),
    [anon_sym_Obsoletes] = ACTIONS(468),
    [anon_sym_OrderWithRequires] = ACTIONS(468),
    [anon_sym_Prefix] = ACTIONS(468),
    [anon_sym_Prefixes] = ACTIONS(468),
    [anon_sym_Prereq] = ACTIONS(468),
    [anon_sym_Provides] = ACTIONS(468),
    [anon_sym_Recommends] = ACTIONS(468),
    [anon_sym_RemovePathPostfixes] = ACTIONS(468),
    [anon_sym_Suggests] = ACTIONS(468),
    [anon_sym_Supplements] = ACTIONS(468),
    [anon_sym_PERCENTdescription] = ACTIONS(468),
    [anon_sym_PERCENTpackage] = ACTIONS(468),
    [anon_sym_PERCENTprep] = ACTIONS(468),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(468),
    [anon_sym_PERCENTconf] = ACTIONS(468),
    [anon_sym_PERCENTbuild] = ACTIONS(468),
    [anon_sym_PERCENTinstall] = ACTIONS(468),
    [anon_sym_PERCENTcheck] = ACTIONS(468),
    [anon_sym_PERCENTclean] = ACTIONS(468),
    [anon_sym_PERCENTpre] = ACTIONS(468),
    [anon_sym_PERCENTpost] = ACTIONS(468),
    [anon_sym_PERCENTpreun] = ACTIONS(468),
    [anon_sym_PERCENTpostun] = ACTIONS(468),
    [anon_sym_PERCENTpretrans] = ACTIONS(468),
    [anon_sym_PERCENTposttrans] = ACTIONS(468),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(468),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(468),
    [anon_sym_PERCENTverify] = ACTIONS(468),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(468),
    [anon_sym_PERCENTtriggerin] = ACTIONS(468),
    [anon_sym_PERCENTtriggerun] = ACTIONS(468),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(468),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(468),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(468),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(468),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(468),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(468),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(468),
    [anon_sym_PERCENTfiles] = ACTIONS(468),
    [anon_sym_PERCENTchangelog] = ACTIONS(468),
    [anon_sym_PERCENTglobal] = ACTIONS(468),
    [anon_sym_PERCENTdefine] = ACTIONS(468),
    [anon_sym_PERCENTundefine] = ACTIONS(468),
    [anon_sym_PERCENT] = ACTIONS(468),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(468),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(468),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(470),
    [aux_sym__simple_statements_token1] = ACTIONS(470),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(472),
    [anon_sym_PERCENTifarch] = ACTIONS(472),
    [anon_sym_PERCENTifos] = ACTIONS(472),
    [anon_sym_PERCENTifnarch] = ACTIONS(472),
    [anon_sym_PERCENTifnos] = ACTIONS(472),
    [anon_sym_AutoProv] = ACTIONS(472),
    [anon_sym_AutoReq] = ACTIONS(472),
    [anon_sym_AutoReqProv] = ACTIONS(472),
    [anon_sym_BugUrl] = ACTIONS(472),
    [anon_sym_BuildRoot] = ACTIONS(472),
    [anon_sym_BuildSystem] = ACTIONS(472),
    [anon_sym_DistTag] = ACTIONS(472),
    [anon_sym_Distribution] = ACTIONS(472),
    [anon_sym_Epoch] = ACTIONS(472),
    [anon_sym_Group] = ACTIONS(472),
    [anon_sym_License] = ACTIONS(472),
    [anon_sym_ModularityLabel] = ACTIONS(472),
    [anon_sym_Name] = ACTIONS(472),
    [anon_sym_NoPatch] = ACTIONS(472),
    [anon_sym_NoSource] = ACTIONS(472),
    [anon_sym_Packager] = ACTIONS(472),
    [anon_sym_Release] = ACTIONS(472),
    [anon_sym_SourceLicense] = ACTIONS(472),
    [anon_sym_Summary] = ACTIONS(472),
    [anon_sym_URL] = ACTIONS(472),
    [anon_sym_Url] = ACTIONS(472),
    [anon_sym_VCS] = ACTIONS(472),
    [anon_sym_Vendor] = ACTIONS(472),
    [anon_sym_Version] = ACTIONS(472),
    [aux_sym_tag_token1] = ACTIONS(472),
    [aux_sym_tag_token2] = ACTIONS(472),
    [anon_sym_Requires] = ACTIONS(472),
    [anon_sym_BuildArch] = ACTIONS(472),
    [anon_sym_BuildArchitectures] = ACTIONS(472),
    [anon_sym_BuildConflicts] = ACTIONS(472),
    [anon_sym_BuildPrereq] = ACTIONS(472),
    [anon_sym_BuildRequires] = ACTIONS(472),
    [anon_sym_Conflicts] = ACTIONS(472),
    [anon_sym_DocDir] = ACTIONS(472),
    [anon_sym_Enhances] = ACTIONS(472),
    [anon_sym_ExcludeArch] = ACTIONS(472),
    [anon_sym_ExcludeOS] = ACTIONS(472),
    [anon_sym_ExclusiveArch] = ACTIONS(472),
    [anon_sym_ExclusiveOS] = ACTIONS(472),
    [anon_sym_Obsoletes] = ACTIONS(472),
    [anon_sym_OrderWithRequires] = ACTIONS(472),
    [anon_sym_Prefix] = ACTIONS(472),
    [anon_sym_Prefixes] = ACTIONS(472),
    [anon_sym_Prereq] = ACTIONS(472),
    [anon_sym_Provides] = ACTIONS(472),
    [anon_sym_Recommends] = ACTIONS(472),
    [anon_sym_RemovePathPostfixes] = ACTIONS(472),
    [anon_sym_Suggests] = ACTIONS(472),
    [anon_sym_Supplements] = ACTIONS(472),
    [anon_sym_PERCENTdescription] = ACTIONS(472),
    [anon_sym_PERCENTpackage] = ACTIONS(472),
    [anon_sym_PERCENTprep] = ACTIONS(472),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(472),
    [anon_sym_PERCENTconf] = ACTIONS(472),
    [anon_sym_PERCENTbuild] = ACTIONS(472),
    [anon_sym_PERCENTinstall] = ACTIONS(472),
    [anon_sym_PERCENTcheck] = ACTIONS(472),
    [anon_sym_PERCENTclean] = ACTIONS(472),
    [anon_sym_PERCENTpre] = ACTIONS(472),
    [anon_sym_PERCENTpost] = ACTIONS(472),
    [anon_sym_PERCENTpreun] = ACTIONS(472),
    [anon_sym_PERCENTpostun] = ACTIONS(472),
    [anon_sym_PERCENTpretrans] = ACTIONS(472),
    [anon_sym_PERCENTposttrans] = ACTIONS(472),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(472),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(472),
    [anon_sym_PERCENTverify] = ACTIONS(472),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(472),
    [anon_sym_PERCENTtriggerin] = ACTIONS(472),
    [anon_sym_PERCENTtriggerun] = ACTIONS(472),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(472),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(472),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(472),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(472),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(472),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(472),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(472),
    [anon_sym_PERCENTfiles] = ACTIONS(472),
    [anon_sym_PERCENTchangelog] = ACTIONS(472),
    [anon_sym_PERCENTglobal] = ACTIONS(472),
    [anon_sym_PERCENTdefine] = ACTIONS(472),
    [anon_sym_PERCENTundefine] = ACTIONS(472),
    [anon_sym_PERCENT] = ACTIONS(472),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(472),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(472),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(474),
    [aux_sym__simple_statements_token1] = ACTIONS(474),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(476),
    [anon_sym_PERCENTifarch] = ACTIONS(476),
    [anon_sym_PERCENTifos] = ACTIONS(476),
    [anon_sym_PERCENTifnarch] = ACTIONS(476),
    [anon_sym_PERCENTifnos] = ACTIONS(476),
    [anon_sym_AutoProv] = ACTIONS(476),
    [anon_sym_AutoReq] = ACTIONS(476),
    [anon_sym_AutoReqProv] = ACTIONS(476),
    [anon_sym_BugUrl] = ACTIONS(476),
    [anon_sym_BuildRoot] = ACTIONS(476),
    [anon_sym_BuildSystem] = ACTIONS(476),
    [anon_sym_DistTag] = ACTIONS(476),
    [anon_sym_Distribution] = ACTIONS(476),
    [anon_sym_Epoch] = ACTIONS(476),
    [anon_sym_Group] = ACTIONS(476),
    [anon_sym_License] = ACTIONS(476),
    [anon_sym_ModularityLabel] = ACTIONS(476),
    [anon_sym_Name] = ACTIONS(476),
    [anon_sym_NoPatch] = ACTIONS(476),
    [anon_sym_NoSource] = ACTIONS(476),
    [anon_sym_Packager] = ACTIONS(476),
    [anon_sym_Release] = ACTIONS(476),
    [anon_sym_SourceLicense] = ACTIONS(476),
    [anon_sym_Summary] = ACTIONS(476),
    [anon_sym_URL] = ACTIONS(476),
    [anon_sym_Url] = ACTIONS(476),
    [anon_sym_VCS] = ACTIONS(476),
    [anon_sym_Vendor] = ACTIONS(476),
    [anon_sym_Version] = ACTIONS(476),
    [aux_sym_tag_token1] = ACTIONS(476),
    [aux_sym_tag_token2] = ACTIONS(476),
    [anon_sym_Requires] = ACTIONS(476),
    [anon_sym_BuildArch] = ACTIONS(476),
    [anon_sym_BuildArchitectures] = ACTIONS(476),
    [anon_sym_BuildConflicts] = ACTIONS(476),
    [anon_sym_BuildPrereq] = ACTIONS(476),
    [anon_sym_BuildRequires] = ACTIONS(476),
    [anon_sym_Conflicts] = ACTIONS(476),
    [anon_sym_DocDir] = ACTIONS(476),
    [anon_sym_Enhances] = ACTIONS(476),
    [anon_sym_ExcludeArch] = ACTIONS(476),
    [anon_sym_ExcludeOS] = ACTIONS(476),
    [anon_sym_ExclusiveArch] = ACTIONS(476),
    [anon_sym_ExclusiveOS] = ACTIONS(476),
    [anon_sym_Obsoletes] = ACTIONS(476),
    [anon_sym_OrderWithRequires] = ACTIONS(476),
    [anon_sym_Prefix] = ACTIONS(476),
    [anon_sym_Prefixes] = ACTIONS(476),
    [anon_sym_Prereq] = ACTIONS(476),
    [anon_sym_Provides] = ACTIONS(476),
    [anon_sym_Recommends] = ACTIONS(476),
    [anon_sym_RemovePathPostfixes] = ACTIONS(476),
    [anon_sym_Suggests] = ACTIONS(476),
    [anon_sym_Supplements] = ACTIONS(476),
    [anon_sym_PERCENTdescription] = ACTIONS(476),
    [anon_sym_PERCENTpackage] = ACTIONS(476),
    [anon_sym_PERCENTprep] = ACTIONS(476),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(476),
    [anon_sym_PERCENTconf] = ACTIONS(476),
    [anon_sym_PERCENTbuild] = ACTIONS(476),
    [anon_sym_PERCENTinstall] = ACTIONS(476),
    [anon_sym_PERCENTcheck] = ACTIONS(476),
    [anon_sym_PERCENTclean] = ACTIONS(476),
    [anon_sym_PERCENTpre] = ACTIONS(476),
    [anon_sym_PERCENTpost] = ACTIONS(476),
    [anon_sym_PERCENTpreun] = ACTIONS(476),
    [anon_sym_PERCENTpostun] = ACTIONS(476),
    [anon_sym_PERCENTpretrans] = ACTIONS(476),
    [anon_sym_PERCENTposttrans] = ACTIONS(476),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(476),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(476),
    [anon_sym_PERCENTverify] = ACTIONS(476),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(476),
    [anon_sym_PERCENTtriggerin] = ACTIONS(476),
    [anon_sym_PERCENTtriggerun] = ACTIONS(476),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(476),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(476),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(476),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(476),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(476),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(476),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(476),
    [anon_sym_PERCENTfiles] = ACTIONS(476),
    [anon_sym_PERCENTchangelog] = ACTIONS(476),
    [anon_sym_PERCENTglobal] = ACTIONS(476),
    [anon_sym_PERCENTdefine] = ACTIONS(476),
    [anon_sym_PERCENTundefine] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(476),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(476),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(476),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [aux_sym__simple_statements_token1] = ACTIONS(478),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(480),
    [anon_sym_PERCENTifarch] = ACTIONS(480),
    [anon_sym_PERCENTifos] = ACTIONS(480),
    [anon_sym_PERCENTifnarch] = ACTIONS(480),
    [anon_sym_PERCENTifnos] = ACTIONS(480),
    [anon_sym_AutoProv] = ACTIONS(480),
    [anon_sym_AutoReq] = ACTIONS(480),
    [anon_sym_AutoReqProv] = ACTIONS(480),
    [anon_sym_BugUrl] = ACTIONS(480),
    [anon_sym_BuildRoot] = ACTIONS(480),
    [anon_sym_BuildSystem] = ACTIONS(480),
    [anon_sym_DistTag] = ACTIONS(480),
    [anon_sym_Distribution] = ACTIONS(480),
    [anon_sym_Epoch] = ACTIONS(480),
    [anon_sym_Group] = ACTIONS(480),
    [anon_sym_License] = ACTIONS(480),
    [anon_sym_ModularityLabel] = ACTIONS(480),
    [anon_sym_Name] = ACTIONS(480),
    [anon_sym_NoPatch] = ACTIONS(480),
    [anon_sym_NoSource] = ACTIONS(480),
    [anon_sym_Packager] = ACTIONS(480),
    [anon_sym_Release] = ACTIONS(480),
    [anon_sym_SourceLicense] = ACTIONS(480),
    [anon_sym_Summary] = ACTIONS(480),
    [anon_sym_URL] = ACTIONS(480),
    [anon_sym_Url] = ACTIONS(480),
    [anon_sym_VCS] = ACTIONS(480),
    [anon_sym_Vendor] = ACTIONS(480),
    [anon_sym_Version] = ACTIONS(480),
    [aux_sym_tag_token1] = ACTIONS(480),
    [aux_sym_tag_token2] = ACTIONS(480),
    [anon_sym_Requires] = ACTIONS(480),
    [anon_sym_BuildArch] = ACTIONS(480),
    [anon_sym_BuildArchitectures] = ACTIONS(480),
    [anon_sym_BuildConflicts] = ACTIONS(480),
    [anon_sym_BuildPrereq] = ACTIONS(480),
    [anon_sym_BuildRequires] = ACTIONS(480),
    [anon_sym_Conflicts] = ACTIONS(480),
    [anon_sym_DocDir] = ACTIONS(480),
    [anon_sym_Enhances] = ACTIONS(480),
    [anon_sym_ExcludeArch] = ACTIONS(480),
    [anon_sym_ExcludeOS] = ACTIONS(480),
    [anon_sym_ExclusiveArch] = ACTIONS(480),
    [anon_sym_ExclusiveOS] = ACTIONS(480),
    [anon_sym_Obsoletes] = ACTIONS(480),
    [anon_sym_OrderWithRequires] = ACTIONS(480),
    [anon_sym_Prefix] = ACTIONS(480),
    [anon_sym_Prefixes] = ACTIONS(480),
    [anon_sym_Prereq] = ACTIONS(480),
    [anon_sym_Provides] = ACTIONS(480),
    [anon_sym_Recommends] = ACTIONS(480),
    [anon_sym_RemovePathPostfixes] = ACTIONS(480),
    [anon_sym_Suggests] = ACTIONS(480),
    [anon_sym_Supplements] = ACTIONS(480),
    [anon_sym_PERCENTdescription] = ACTIONS(480),
    [anon_sym_PERCENTpackage] = ACTIONS(480),
    [anon_sym_PERCENTprep] = ACTIONS(480),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(480),
    [anon_sym_PERCENTconf] = ACTIONS(480),
    [anon_sym_PERCENTbuild] = ACTIONS(480),
    [anon_sym_PERCENTinstall] = ACTIONS(480),
    [anon_sym_PERCENTcheck] = ACTIONS(480),
    [anon_sym_PERCENTclean] = ACTIONS(480),
    [anon_sym_PERCENTpre] = ACTIONS(480),
    [anon_sym_PERCENTpost] = ACTIONS(480),
    [anon_sym_PERCENTpreun] = ACTIONS(480),
    [anon_sym_PERCENTpostun] = ACTIONS(480),
    [anon_sym_PERCENTpretrans] = ACTIONS(480),
    [anon_sym_PERCENTposttrans] = ACTIONS(480),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(480),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(480),
    [anon_sym_PERCENTverify] = ACTIONS(480),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(480),
    [anon_sym_PERCENTtriggerin] = ACTIONS(480),
    [anon_sym_PERCENTtriggerun] = ACTIONS(480),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(480),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(480),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(480),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(480),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(480),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(480),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(480),
    [anon_sym_PERCENTfiles] = ACTIONS(480),
    [anon_sym_PERCENTchangelog] = ACTIONS(480),
    [anon_sym_PERCENTglobal] = ACTIONS(480),
    [anon_sym_PERCENTdefine] = ACTIONS(480),
    [anon_sym_PERCENTundefine] = ACTIONS(480),
    [anon_sym_PERCENT] = ACTIONS(480),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(480),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(480),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(482),
    [aux_sym__simple_statements_token1] = ACTIONS(482),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(484),
    [anon_sym_PERCENTifarch] = ACTIONS(484),
    [anon_sym_PERCENTifos] = ACTIONS(484),
    [anon_sym_PERCENTifnarch] = ACTIONS(484),
    [anon_sym_PERCENTifnos] = ACTIONS(484),
    [anon_sym_AutoProv] = ACTIONS(484),
    [anon_sym_AutoReq] = ACTIONS(484),
    [anon_sym_AutoReqProv] = ACTIONS(484),
    [anon_sym_BugUrl] = ACTIONS(484),
    [anon_sym_BuildRoot] = ACTIONS(484),
    [anon_sym_BuildSystem] = ACTIONS(484),
    [anon_sym_DistTag] = ACTIONS(484),
    [anon_sym_Distribution] = ACTIONS(484),
    [anon_sym_Epoch] = ACTIONS(484),
    [anon_sym_Group] = ACTIONS(484),
    [anon_sym_License] = ACTIONS(484),
    [anon_sym_ModularityLabel] = ACTIONS(484),
    [anon_sym_Name] = ACTIONS(484),
    [anon_sym_NoPatch] = ACTIONS(484),
    [anon_sym_NoSource] = ACTIONS(484),
    [anon_sym_Packager] = ACTIONS(484),
    [anon_sym_Release] = ACTIONS(484),
    [anon_sym_SourceLicense] = ACTIONS(484),
    [anon_sym_Summary] = ACTIONS(484),
    [anon_sym_URL] = ACTIONS(484),
    [anon_sym_Url] = ACTIONS(484),
    [anon_sym_VCS] = ACTIONS(484),
    [anon_sym_Vendor] = ACTIONS(484),
    [anon_sym_Version] = ACTIONS(484),
    [aux_sym_tag_token1] = ACTIONS(484),
    [aux_sym_tag_token2] = ACTIONS(484),
    [anon_sym_Requires] = ACTIONS(484),
    [anon_sym_BuildArch] = ACTIONS(484),
    [anon_sym_BuildArchitectures] = ACTIONS(484),
    [anon_sym_BuildConflicts] = ACTIONS(484),
    [anon_sym_BuildPrereq] = ACTIONS(484),
    [anon_sym_BuildRequires] = ACTIONS(484),
    [anon_sym_Conflicts] = ACTIONS(484),
    [anon_sym_DocDir] = ACTIONS(484),
    [anon_sym_Enhances] = ACTIONS(484),
    [anon_sym_ExcludeArch] = ACTIONS(484),
    [anon_sym_ExcludeOS] = ACTIONS(484),
    [anon_sym_ExclusiveArch] = ACTIONS(484),
    [anon_sym_ExclusiveOS] = ACTIONS(484),
    [anon_sym_Obsoletes] = ACTIONS(484),
    [anon_sym_OrderWithRequires] = ACTIONS(484),
    [anon_sym_Prefix] = ACTIONS(484),
    [anon_sym_Prefixes] = ACTIONS(484),
    [anon_sym_Prereq] = ACTIONS(484),
    [anon_sym_Provides] = ACTIONS(484),
    [anon_sym_Recommends] = ACTIONS(484),
    [anon_sym_RemovePathPostfixes] = ACTIONS(484),
    [anon_sym_Suggests] = ACTIONS(484),
    [anon_sym_Supplements] = ACTIONS(484),
    [anon_sym_PERCENTdescription] = ACTIONS(484),
    [anon_sym_PERCENTpackage] = ACTIONS(484),
    [anon_sym_PERCENTprep] = ACTIONS(484),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(484),
    [anon_sym_PERCENTconf] = ACTIONS(484),
    [anon_sym_PERCENTbuild] = ACTIONS(484),
    [anon_sym_PERCENTinstall] = ACTIONS(484),
    [anon_sym_PERCENTcheck] = ACTIONS(484),
    [anon_sym_PERCENTclean] = ACTIONS(484),
    [anon_sym_PERCENTpre] = ACTIONS(484),
    [anon_sym_PERCENTpost] = ACTIONS(484),
    [anon_sym_PERCENTpreun] = ACTIONS(484),
    [anon_sym_PERCENTpostun] = ACTIONS(484),
    [anon_sym_PERCENTpretrans] = ACTIONS(484),
    [anon_sym_PERCENTposttrans] = ACTIONS(484),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(484),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(484),
    [anon_sym_PERCENTverify] = ACTIONS(484),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(484),
    [anon_sym_PERCENTtriggerin] = ACTIONS(484),
    [anon_sym_PERCENTtriggerun] = ACTIONS(484),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(484),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(484),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(484),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(484),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(484),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(484),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(484),
    [anon_sym_PERCENTfiles] = ACTIONS(484),
    [anon_sym_PERCENTchangelog] = ACTIONS(484),
    [anon_sym_PERCENTglobal] = ACTIONS(484),
    [anon_sym_PERCENTdefine] = ACTIONS(484),
    [anon_sym_PERCENTundefine] = ACTIONS(484),
    [anon_sym_PERCENT] = ACTIONS(484),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(484),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(484),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(486),
    [aux_sym__simple_statements_token1] = ACTIONS(486),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(488),
    [anon_sym_PERCENTifarch] = ACTIONS(488),
    [anon_sym_PERCENTifos] = ACTIONS(488),
    [anon_sym_PERCENTifnarch] = ACTIONS(488),
    [anon_sym_PERCENTifnos] = ACTIONS(488),
    [anon_sym_AutoProv] = ACTIONS(488),
    [anon_sym_AutoReq] = ACTIONS(488),
    [anon_sym_AutoReqProv] = ACTIONS(488),
    [anon_sym_BugUrl] = ACTIONS(488),
    [anon_sym_BuildRoot] = ACTIONS(488),
    [anon_sym_BuildSystem] = ACTIONS(488),
    [anon_sym_DistTag] = ACTIONS(488),
    [anon_sym_Distribution] = ACTIONS(488),
    [anon_sym_Epoch] = ACTIONS(488),
    [anon_sym_Group] = ACTIONS(488),
    [anon_sym_License] = ACTIONS(488),
    [anon_sym_ModularityLabel] = ACTIONS(488),
    [anon_sym_Name] = ACTIONS(488),
    [anon_sym_NoPatch] = ACTIONS(488),
    [anon_sym_NoSource] = ACTIONS(488),
    [anon_sym_Packager] = ACTIONS(488),
    [anon_sym_Release] = ACTIONS(488),
    [anon_sym_SourceLicense] = ACTIONS(488),
    [anon_sym_Summary] = ACTIONS(488),
    [anon_sym_URL] = ACTIONS(488),
    [anon_sym_Url] = ACTIONS(488),
    [anon_sym_VCS] = ACTIONS(488),
    [anon_sym_Vendor] = ACTIONS(488),
    [anon_sym_Version] = ACTIONS(488),
    [aux_sym_tag_token1] = ACTIONS(488),
    [aux_sym_tag_token2] = ACTIONS(488),
    [anon_sym_Requires] = ACTIONS(488),
    [anon_sym_BuildArch] = ACTIONS(488),
    [anon_sym_BuildArchitectures] = ACTIONS(488),
    [anon_sym_BuildConflicts] = ACTIONS(488),
    [anon_sym_BuildPrereq] = ACTIONS(488),
    [anon_sym_BuildRequires] = ACTIONS(488),
    [anon_sym_Conflicts] = ACTIONS(488),
    [anon_sym_DocDir] = ACTIONS(488),
    [anon_sym_Enhances] = ACTIONS(488),
    [anon_sym_ExcludeArch] = ACTIONS(488),
    [anon_sym_ExcludeOS] = ACTIONS(488),
    [anon_sym_ExclusiveArch] = ACTIONS(488),
    [anon_sym_ExclusiveOS] = ACTIONS(488),
    [anon_sym_Obsoletes] = ACTIONS(488),
    [anon_sym_OrderWithRequires] = ACTIONS(488),
    [anon_sym_Prefix] = ACTIONS(488),
    [anon_sym_Prefixes] = ACTIONS(488),
    [anon_sym_Prereq] = ACTIONS(488),
    [anon_sym_Provides] = ACTIONS(488),
    [anon_sym_Recommends] = ACTIONS(488),
    [anon_sym_RemovePathPostfixes] = ACTIONS(488),
    [anon_sym_Suggests] = ACTIONS(488),
    [anon_sym_Supplements] = ACTIONS(488),
    [anon_sym_PERCENTdescription] = ACTIONS(488),
    [anon_sym_PERCENTpackage] = ACTIONS(488),
    [anon_sym_PERCENTprep] = ACTIONS(488),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(488),
    [anon_sym_PERCENTconf] = ACTIONS(488),
    [anon_sym_PERCENTbuild] = ACTIONS(488),
    [anon_sym_PERCENTinstall] = ACTIONS(488),
    [anon_sym_PERCENTcheck] = ACTIONS(488),
    [anon_sym_PERCENTclean] = ACTIONS(488),
    [anon_sym_PERCENTpre] = ACTIONS(488),
    [anon_sym_PERCENTpost] = ACTIONS(488),
    [anon_sym_PERCENTpreun] = ACTIONS(488),
    [anon_sym_PERCENTpostun] = ACTIONS(488),
    [anon_sym_PERCENTpretrans] = ACTIONS(488),
    [anon_sym_PERCENTposttrans] = ACTIONS(488),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(488),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(488),
    [anon_sym_PERCENTverify] = ACTIONS(488),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(488),
    [anon_sym_PERCENTtriggerin] = ACTIONS(488),
    [anon_sym_PERCENTtriggerun] = ACTIONS(488),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(488),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(488),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(488),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(488),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(488),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(488),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(488),
    [anon_sym_PERCENTfiles] = ACTIONS(488),
    [anon_sym_PERCENTchangelog] = ACTIONS(488),
    [anon_sym_PERCENTglobal] = ACTIONS(488),
    [anon_sym_PERCENTdefine] = ACTIONS(488),
    [anon_sym_PERCENTundefine] = ACTIONS(488),
    [anon_sym_PERCENT] = ACTIONS(488),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(488),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(488),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(490),
    [aux_sym__simple_statements_token1] = ACTIONS(490),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(492),
    [anon_sym_PERCENTifarch] = ACTIONS(492),
    [anon_sym_PERCENTifos] = ACTIONS(492),
    [anon_sym_PERCENTifnarch] = ACTIONS(492),
    [anon_sym_PERCENTifnos] = ACTIONS(492),
    [anon_sym_AutoProv] = ACTIONS(492),
    [anon_sym_AutoReq] = ACTIONS(492),
    [anon_sym_AutoReqProv] = ACTIONS(492),
    [anon_sym_BugUrl] = ACTIONS(492),
    [anon_sym_BuildRoot] = ACTIONS(492),
    [anon_sym_BuildSystem] = ACTIONS(492),
    [anon_sym_DistTag] = ACTIONS(492),
    [anon_sym_Distribution] = ACTIONS(492),
    [anon_sym_Epoch] = ACTIONS(492),
    [anon_sym_Group] = ACTIONS(492),
    [anon_sym_License] = ACTIONS(492),
    [anon_sym_ModularityLabel] = ACTIONS(492),
    [anon_sym_Name] = ACTIONS(492),
    [anon_sym_NoPatch] = ACTIONS(492),
    [anon_sym_NoSource] = ACTIONS(492),
    [anon_sym_Packager] = ACTIONS(492),
    [anon_sym_Release] = ACTIONS(492),
    [anon_sym_SourceLicense] = ACTIONS(492),
    [anon_sym_Summary] = ACTIONS(492),
    [anon_sym_URL] = ACTIONS(492),
    [anon_sym_Url] = ACTIONS(492),
    [anon_sym_VCS] = ACTIONS(492),
    [anon_sym_Vendor] = ACTIONS(492),
    [anon_sym_Version] = ACTIONS(492),
    [aux_sym_tag_token1] = ACTIONS(492),
    [aux_sym_tag_token2] = ACTIONS(492),
    [anon_sym_Requires] = ACTIONS(492),
    [anon_sym_BuildArch] = ACTIONS(492),
    [anon_sym_BuildArchitectures] = ACTIONS(492),
    [anon_sym_BuildConflicts] = ACTIONS(492),
    [anon_sym_BuildPrereq] = ACTIONS(492),
    [anon_sym_BuildRequires] = ACTIONS(492),
    [anon_sym_Conflicts] = ACTIONS(492),
    [anon_sym_DocDir] = ACTIONS(492),
    [anon_sym_Enhances] = ACTIONS(492),
    [anon_sym_ExcludeArch] = ACTIONS(492),
    [anon_sym_ExcludeOS] = ACTIONS(492),
    [anon_sym_ExclusiveArch] = ACTIONS(492),
    [anon_sym_ExclusiveOS] = ACTIONS(492),
    [anon_sym_Obsoletes] = ACTIONS(492),
    [anon_sym_OrderWithRequires] = ACTIONS(492),
    [anon_sym_Prefix] = ACTIONS(492),
    [anon_sym_Prefixes] = ACTIONS(492),
    [anon_sym_Prereq] = ACTIONS(492),
    [anon_sym_Provides] = ACTIONS(492),
    [anon_sym_Recommends] = ACTIONS(492),
    [anon_sym_RemovePathPostfixes] = ACTIONS(492),
    [anon_sym_Suggests] = ACTIONS(492),
    [anon_sym_Supplements] = ACTIONS(492),
    [anon_sym_PERCENTdescription] = ACTIONS(492),
    [anon_sym_PERCENTpackage] = ACTIONS(492),
    [anon_sym_PERCENTprep] = ACTIONS(492),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(492),
    [anon_sym_PERCENTconf] = ACTIONS(492),
    [anon_sym_PERCENTbuild] = ACTIONS(492),
    [anon_sym_PERCENTinstall] = ACTIONS(492),
    [anon_sym_PERCENTcheck] = ACTIONS(492),
    [anon_sym_PERCENTclean] = ACTIONS(492),
    [anon_sym_PERCENTpre] = ACTIONS(492),
    [anon_sym_PERCENTpost] = ACTIONS(492),
    [anon_sym_PERCENTpreun] = ACTIONS(492),
    [anon_sym_PERCENTpostun] = ACTIONS(492),
    [anon_sym_PERCENTpretrans] = ACTIONS(492),
    [anon_sym_PERCENTposttrans] = ACTIONS(492),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(492),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(492),
    [anon_sym_PERCENTverify] = ACTIONS(492),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(492),
    [anon_sym_PERCENTtriggerin] = ACTIONS(492),
    [anon_sym_PERCENTtriggerun] = ACTIONS(492),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(492),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(492),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(492),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(492),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(492),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(492),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(492),
    [anon_sym_PERCENTfiles] = ACTIONS(492),
    [anon_sym_PERCENTchangelog] = ACTIONS(492),
    [anon_sym_PERCENTglobal] = ACTIONS(492),
    [anon_sym_PERCENTdefine] = ACTIONS(492),
    [anon_sym_PERCENTundefine] = ACTIONS(492),
    [anon_sym_PERCENT] = ACTIONS(492),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(492),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(492),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_Requires,
    ACTIONS(509), 1,
      anon_sym_PERCENTdescription,
    STATE(74), 1,
      sym_tags,
    ACTIONS(497), 2,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
    ACTIONS(503), 2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    STATE(71), 2,
      sym_preamble,
      aux_sym_subsection_package_repeat1,
    STATE(484), 2,
      sym_tag,
      sym_dependency_tag,
    ACTIONS(506), 20,
      anon_sym_BuildArchitectures,
      anon_sym_BuildConflicts,
      anon_sym_BuildPrereq,
      anon_sym_BuildRequires,
      anon_sym_Conflicts,
      anon_sym_DocDir,
      anon_sym_Enhances,
      anon_sym_ExcludeArch,
      anon_sym_ExcludeOS,
      anon_sym_ExclusiveArch,
      anon_sym_ExclusiveOS,
      anon_sym_Obsoletes,
      anon_sym_OrderWithRequires,
      anon_sym_Prefixes,
      anon_sym_Prereq,
      anon_sym_Provides,
      anon_sym_Recommends,
      anon_sym_RemovePathPostfixes,
      anon_sym_Suggests,
      anon_sym_Supplements,
    ACTIONS(494), 24,
      anon_sym_AutoProv,
      anon_sym_AutoReqProv,
      anon_sym_BugUrl,
      anon_sym_BuildRoot,
      anon_sym_BuildSystem,
      anon_sym_DistTag,
      anon_sym_Distribution,
      anon_sym_Epoch,
      anon_sym_Group,
      anon_sym_License,
      anon_sym_ModularityLabel,
      anon_sym_Name,
      anon_sym_NoPatch,
      anon_sym_NoSource,
      anon_sym_Packager,
      anon_sym_Release,
      anon_sym_SourceLicense,
      anon_sym_Summary,
      anon_sym_URL,
      anon_sym_Url,
      anon_sym_VCS,
      anon_sym_Vendor,
      anon_sym_Version,
      aux_sym_tag_token1,
  [77] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_Requires,
    ACTIONS(517), 1,
      anon_sym_PERCENTdescription,
    STATE(74), 1,
      sym_tags,
    ACTIONS(13), 2,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
    ACTIONS(17), 2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    STATE(71), 2,
      sym_preamble,
      aux_sym_subsection_package_repeat1,
    STATE(484), 2,
      sym_tag,
      sym_dependency_tag,
    ACTIONS(515), 20,
      anon_sym_BuildArchitectures,
      anon_sym_BuildConflicts,
      anon_sym_BuildPrereq,
      anon_sym_BuildRequires,
      anon_sym_Conflicts,
      anon_sym_DocDir,
      anon_sym_Enhances,
      anon_sym_ExcludeArch,
      anon_sym_ExcludeOS,
      anon_sym_ExclusiveArch,
      anon_sym_ExclusiveOS,
      anon_sym_Obsoletes,
      anon_sym_OrderWithRequires,
      anon_sym_Prefixes,
      anon_sym_Prereq,
      anon_sym_Provides,
      anon_sym_Recommends,
      anon_sym_RemovePathPostfixes,
      anon_sym_Suggests,
      anon_sym_Supplements,
    ACTIONS(511), 24,
      anon_sym_AutoProv,
      anon_sym_AutoReqProv,
      anon_sym_BugUrl,
      anon_sym_BuildRoot,
      anon_sym_BuildSystem,
      anon_sym_DistTag,
      anon_sym_Distribution,
      anon_sym_Epoch,
      anon_sym_Group,
      anon_sym_License,
      anon_sym_ModularityLabel,
      anon_sym_Name,
      anon_sym_NoPatch,
      anon_sym_NoSource,
      anon_sym_Packager,
      anon_sym_Release,
      anon_sym_SourceLicense,
      anon_sym_Summary,
      anon_sym_URL,
      anon_sym_Url,
      anon_sym_VCS,
      anon_sym_Vendor,
      anon_sym_Version,
      aux_sym_tag_token1,
  [154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 5,
      anon_sym_PERCENTelif,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    ACTIONS(418), 50,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_AutoProv,
      anon_sym_AutoReqProv,
      anon_sym_BugUrl,
      anon_sym_BuildRoot,
      anon_sym_BuildSystem,
      anon_sym_DistTag,
      anon_sym_Distribution,
      anon_sym_Epoch,
      anon_sym_Group,
      anon_sym_License,
      anon_sym_ModularityLabel,
      anon_sym_Name,
      anon_sym_NoPatch,
      anon_sym_NoSource,
      anon_sym_Packager,
      anon_sym_Release,
      anon_sym_SourceLicense,
      anon_sym_Summary,
      anon_sym_URL,
      anon_sym_Url,
      anon_sym_VCS,
      anon_sym_Vendor,
      anon_sym_Version,
      aux_sym_tag_token1,
      anon_sym_Requires,
      anon_sym_BuildArchitectures,
      anon_sym_BuildConflicts,
      anon_sym_BuildPrereq,
      anon_sym_BuildRequires,
      anon_sym_Conflicts,
      anon_sym_DocDir,
      anon_sym_Enhances,
      anon_sym_ExcludeArch,
      anon_sym_ExcludeOS,
      anon_sym_ExclusiveArch,
      anon_sym_ExclusiveOS,
      anon_sym_Obsoletes,
      anon_sym_OrderWithRequires,
      anon_sym_Prefixes,
      anon_sym_Prereq,
      anon_sym_Provides,
      anon_sym_Recommends,
      anon_sym_RemovePathPostfixes,
      anon_sym_Suggests,
      anon_sym_Supplements,
      anon_sym_PERCENTdescription,
  [217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 5,
      anon_sym_PERCENTelif,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    ACTIONS(458), 50,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_AutoProv,
      anon_sym_AutoReqProv,
      anon_sym_BugUrl,
      anon_sym_BuildRoot,
      anon_sym_BuildSystem,
      anon_sym_DistTag,
      anon_sym_Distribution,
      anon_sym_Epoch,
      anon_sym_Group,
      anon_sym_License,
      anon_sym_ModularityLabel,
      anon_sym_Name,
      anon_sym_NoPatch,
      anon_sym_NoSource,
      anon_sym_Packager,
      anon_sym_Release,
      anon_sym_SourceLicense,
      anon_sym_Summary,
      anon_sym_URL,
      anon_sym_Url,
      anon_sym_VCS,
      anon_sym_Vendor,
      anon_sym_Version,
      aux_sym_tag_token1,
      anon_sym_Requires,
      anon_sym_BuildArchitectures,
      anon_sym_BuildConflicts,
      anon_sym_BuildPrereq,
      anon_sym_BuildRequires,
      anon_sym_Conflicts,
      anon_sym_DocDir,
      anon_sym_Enhances,
      anon_sym_ExcludeArch,
      anon_sym_ExcludeOS,
      anon_sym_ExclusiveArch,
      anon_sym_ExclusiveOS,
      anon_sym_Obsoletes,
      anon_sym_OrderWithRequires,
      anon_sym_Prefixes,
      anon_sym_Prereq,
      anon_sym_Provides,
      anon_sym_Recommends,
      anon_sym_RemovePathPostfixes,
      anon_sym_Suggests,
      anon_sym_Supplements,
      anon_sym_PERCENTdescription,
  [280] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_Requires,
    STATE(74), 1,
      sym_tags,
    ACTIONS(13), 2,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
    ACTIONS(17), 2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    STATE(72), 2,
      sym_preamble,
      aux_sym_subsection_package_repeat1,
    STATE(484), 2,
      sym_tag,
      sym_dependency_tag,
    ACTIONS(515), 20,
      anon_sym_BuildArchitectures,
      anon_sym_BuildConflicts,
      anon_sym_BuildPrereq,
      anon_sym_BuildRequires,
      anon_sym_Conflicts,
      anon_sym_DocDir,
      anon_sym_Enhances,
      anon_sym_ExcludeArch,
      anon_sym_ExcludeOS,
      anon_sym_ExclusiveArch,
      anon_sym_ExclusiveOS,
      anon_sym_Obsoletes,
      anon_sym_OrderWithRequires,
      anon_sym_Prefixes,
      anon_sym_Prereq,
      anon_sym_Provides,
      anon_sym_Recommends,
      anon_sym_RemovePathPostfixes,
      anon_sym_Suggests,
      anon_sym_Supplements,
    ACTIONS(511), 24,
      anon_sym_AutoProv,
      anon_sym_AutoReqProv,
      anon_sym_BugUrl,
      anon_sym_BuildRoot,
      anon_sym_BuildSystem,
      anon_sym_DistTag,
      anon_sym_Distribution,
      anon_sym_Epoch,
      anon_sym_Group,
      anon_sym_License,
      anon_sym_ModularityLabel,
      anon_sym_Name,
      anon_sym_NoPatch,
      anon_sym_NoSource,
      anon_sym_Packager,
      anon_sym_Release,
      anon_sym_SourceLicense,
      anon_sym_Summary,
      anon_sym_URL,
      anon_sym_Url,
      anon_sym_VCS,
      anon_sym_Vendor,
      anon_sym_Version,
      aux_sym_tag_token1,
  [354] = 16,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(179), 1,
      anon_sym_PERCENTattr,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(521), 1,
      anon_sym_PERCENTdefattr,
    STATE(99), 1,
      sym_attr,
    STATE(160), 1,
      sym_verify,
    STATE(337), 1,
      sym_string,
    ACTIONS(519), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(80), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(203), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(523), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [424] = 16,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(179), 1,
      anon_sym_PERCENTattr,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(521), 1,
      anon_sym_PERCENTdefattr,
    STATE(99), 1,
      sym_attr,
    STATE(160), 1,
      sym_verify,
    STATE(337), 1,
      sym_string,
    ACTIONS(519), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(76), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(199), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(523), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [494] = 16,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(179), 1,
      anon_sym_PERCENTattr,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(521), 1,
      anon_sym_PERCENTdefattr,
    STATE(99), 1,
      sym_attr,
    STATE(160), 1,
      sym_verify,
    STATE(337), 1,
      sym_string,
    ACTIONS(519), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(80), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(195), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(523), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [564] = 16,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(179), 1,
      anon_sym_PERCENTattr,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(521), 1,
      anon_sym_PERCENTdefattr,
    STATE(99), 1,
      sym_attr,
    STATE(160), 1,
      sym_verify,
    STATE(337), 1,
      sym_string,
    ACTIONS(519), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(78), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(169), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(523), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [634] = 16,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_PERCENTverify,
    ACTIONS(225), 1,
      anon_sym_PERCENTattr,
    ACTIONS(228), 1,
      anon_sym_PERCENT,
    ACTIONS(231), 1,
      sym_string_content,
    ACTIONS(234), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(528), 1,
      anon_sym_PERCENTdefattr,
    STATE(99), 1,
      sym_attr,
    STATE(160), 1,
      sym_verify,
    STATE(337), 1,
      sym_string,
    ACTIONS(525), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(80), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(211), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(531), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [704] = 16,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(179), 1,
      anon_sym_PERCENTattr,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(521), 1,
      anon_sym_PERCENTdefattr,
    STATE(99), 1,
      sym_attr,
    STATE(160), 1,
      sym_verify,
    STATE(337), 1,
      sym_string,
    ACTIONS(519), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(80), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(191), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(523), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [774] = 16,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(179), 1,
      anon_sym_PERCENTattr,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(521), 1,
      anon_sym_PERCENTdefattr,
    STATE(99), 1,
      sym_attr,
    STATE(160), 1,
      sym_verify,
    STATE(337), 1,
      sym_string,
    ACTIONS(519), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(81), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(207), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(523), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [844] = 16,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(179), 1,
      anon_sym_PERCENTattr,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(203), 1,
      anon_sym_PERCENTendif,
    ACTIONS(536), 1,
      anon_sym_PERCENTdefattr,
    STATE(101), 1,
      sym_attr,
    STATE(162), 1,
      sym_verify,
    STATE(377), 1,
      sym_string,
    ACTIONS(534), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(88), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(538), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [910] = 16,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_PERCENTendif,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(179), 1,
      anon_sym_PERCENTattr,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(536), 1,
      anon_sym_PERCENTdefattr,
    STATE(101), 1,
      sym_attr,
    STATE(162), 1,
      sym_verify,
    STATE(377), 1,
      sym_string,
    ACTIONS(534), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(87), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(538), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [976] = 16,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(179), 1,
      anon_sym_PERCENTattr,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(191), 1,
      anon_sym_PERCENTendif,
    ACTIONS(536), 1,
      anon_sym_PERCENTdefattr,
    STATE(101), 1,
      sym_attr,
    STATE(162), 1,
      sym_verify,
    STATE(377), 1,
      sym_string,
    ACTIONS(534), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(88), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(538), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1042] = 16,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(179), 1,
      anon_sym_PERCENTattr,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(207), 1,
      anon_sym_PERCENTendif,
    ACTIONS(536), 1,
      anon_sym_PERCENTdefattr,
    STATE(101), 1,
      sym_attr,
    STATE(162), 1,
      sym_verify,
    STATE(377), 1,
      sym_string,
    ACTIONS(534), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(85), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(538), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1108] = 16,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(179), 1,
      anon_sym_PERCENTattr,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(195), 1,
      anon_sym_PERCENTendif,
    ACTIONS(536), 1,
      anon_sym_PERCENTdefattr,
    STATE(101), 1,
      sym_attr,
    STATE(162), 1,
      sym_verify,
    STATE(377), 1,
      sym_string,
    ACTIONS(534), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(88), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(538), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1174] = 16,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_PERCENTendif,
    ACTIONS(216), 1,
      anon_sym_PERCENTverify,
    ACTIONS(225), 1,
      anon_sym_PERCENTattr,
    ACTIONS(228), 1,
      anon_sym_PERCENT,
    ACTIONS(231), 1,
      sym_string_content,
    ACTIONS(234), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(543), 1,
      anon_sym_PERCENTdefattr,
    STATE(101), 1,
      sym_attr,
    STATE(162), 1,
      sym_verify,
    STATE(377), 1,
      sym_string,
    ACTIONS(540), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(88), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(546), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1240] = 16,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(179), 1,
      anon_sym_PERCENTattr,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(199), 1,
      anon_sym_PERCENTendif,
    ACTIONS(536), 1,
      anon_sym_PERCENTdefattr,
    STATE(101), 1,
      sym_attr,
    STATE(162), 1,
      sym_verify,
    STATE(377), 1,
      sym_string,
    ACTIONS(534), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(83), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(538), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1306] = 14,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(179), 1,
      anon_sym_PERCENTattr,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(549), 1,
      anon_sym_PERCENTdefattr,
    STATE(100), 1,
      sym_attr,
    STATE(168), 1,
      sym_verify,
    STATE(363), 1,
      sym_string,
    STATE(435), 2,
      sym_defattr,
      sym_file,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(551), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1362] = 14,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(179), 1,
      anon_sym_PERCENTattr,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(549), 1,
      anon_sym_PERCENTdefattr,
    STATE(100), 1,
      sym_attr,
    STATE(168), 1,
      sym_verify,
    STATE(363), 1,
      sym_string,
    STATE(463), 2,
      sym_defattr,
      sym_file,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(551), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1418] = 14,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(179), 1,
      anon_sym_PERCENTattr,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(549), 1,
      anon_sym_PERCENTdefattr,
    STATE(100), 1,
      sym_attr,
    STATE(168), 1,
      sym_verify,
    STATE(363), 1,
      sym_string,
    STATE(449), 2,
      sym_defattr,
      sym_file,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(551), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1474] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(260), 24,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENTverify,
      anon_sym_PERCENTdefattr,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
      anon_sym_PERCENTattr,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1504] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(272), 24,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENTverify,
      anon_sym_PERCENTdefattr,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
      anon_sym_PERCENTattr,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1534] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(268), 24,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENTverify,
      anon_sym_PERCENTdefattr,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
      anon_sym_PERCENTattr,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1564] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(264), 24,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENTverify,
      anon_sym_PERCENTdefattr,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
      anon_sym_PERCENTattr,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1594] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(276), 24,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENTverify,
      anon_sym_PERCENTdefattr,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
      anon_sym_PERCENTattr,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1624] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(154), 1,
      sym_verify,
    STATE(414), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(553), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1667] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(167), 1,
      sym_verify,
    STATE(343), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(555), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1710] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(166), 1,
      sym_verify,
    STATE(367), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(557), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1753] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENTverify,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(161), 1,
      sym_verify,
    STATE(379), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(559), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1796] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(268), 20,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTverify,
      anon_sym_PERCENTdefattr,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
      anon_sym_PERCENTattr,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1822] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(264), 20,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTverify,
      anon_sym_PERCENTdefattr,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
      anon_sym_PERCENTattr,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1848] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(260), 20,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTverify,
      anon_sym_PERCENTdefattr,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
      anon_sym_PERCENTattr,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1874] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(272), 20,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTverify,
      anon_sym_PERCENTdefattr,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
      anon_sym_PERCENTattr,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1900] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(276), 20,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTverify,
      anon_sym_PERCENTdefattr,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
      anon_sym_PERCENTattr,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1926] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_string_content,
    ACTIONS(563), 1,
      anon_sym_PERCENT,
    ACTIONS(565), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(567), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(561), 2,
      sym_integer,
      sym_float,
    STATE(124), 2,
      aux_sym__value,
      sym_string,
    ACTIONS(280), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(137), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1964] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_PERCENT,
    ACTIONS(571), 1,
      sym_string_content_with_newlines,
    ACTIONS(573), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(575), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(235), 1,
      sym_string_with_newlines,
    ACTIONS(300), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(126), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [1997] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_PERCENT,
    ACTIONS(571), 1,
      sym_string_content_with_newlines,
    ACTIONS(573), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(575), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(238), 1,
      sym_string_with_newlines,
    ACTIONS(308), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(126), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2030] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(581), 1,
      anon_sym_PERCENT,
    ACTIONS(583), 1,
      sym_string_content,
    ACTIONS(585), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(587), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(131), 1,
      sym_macro_options,
    ACTIONS(579), 2,
      sym_integer,
      sym_float,
    STATE(118), 2,
      aux_sym__value,
      sym_string,
    STATE(136), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2067] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(581), 1,
      anon_sym_PERCENT,
    ACTIONS(583), 1,
      sym_string_content,
    ACTIONS(585), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(587), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(129), 1,
      sym_macro_options,
    ACTIONS(589), 2,
      sym_integer,
      sym_float,
    STATE(120), 2,
      aux_sym__value,
      sym_string,
    STATE(136), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2104] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_PERCENT,
    ACTIONS(571), 1,
      sym_string_content_with_newlines,
    ACTIONS(573), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(575), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(229), 1,
      sym_string_with_newlines,
    ACTIONS(288), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(126), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2137] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_PERCENT,
    ACTIONS(571), 1,
      sym_string_content_with_newlines,
    ACTIONS(573), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(575), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(226), 1,
      sym_string_with_newlines,
    ACTIONS(304), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(126), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2170] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_PERCENT,
    ACTIONS(594), 1,
      sym_string_content_with_newlines,
    ACTIONS(597), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(600), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(318), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(114), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2200] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_PERCENTendif,
    ACTIONS(284), 1,
      sym_string_content,
    ACTIONS(563), 1,
      anon_sym_PERCENT,
    ACTIONS(565), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(567), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(561), 2,
      sym_integer,
      sym_float,
    STATE(124), 2,
      aux_sym__value,
      sym_string,
    STATE(137), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2234] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_string_content,
    ACTIONS(563), 1,
      anon_sym_PERCENT,
    ACTIONS(565), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(567), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(603), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(605), 2,
      sym_integer,
      sym_float,
    STATE(125), 2,
      aux_sym__value,
      sym_string,
    STATE(137), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2268] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_PERCENT,
    ACTIONS(583), 1,
      sym_string_content,
    ACTIONS(585), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(587), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(607), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(609), 2,
      sym_integer,
      sym_float,
    STATE(127), 2,
      aux_sym__value,
      sym_string,
    STATE(136), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2302] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_PERCENT,
    ACTIONS(583), 1,
      sym_string_content,
    ACTIONS(585), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(587), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(611), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(609), 2,
      sym_integer,
      sym_float,
    STATE(127), 2,
      aux_sym__value,
      sym_string,
    STATE(136), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2336] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_PERCENT,
    ACTIONS(583), 1,
      sym_string_content,
    ACTIONS(585), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(587), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(613), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(609), 2,
      sym_integer,
      sym_float,
    STATE(127), 2,
      aux_sym__value,
      sym_string,
    STATE(136), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2370] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_PERCENT,
    ACTIONS(583), 1,
      sym_string_content,
    ACTIONS(585), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(587), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(615), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(609), 2,
      sym_integer,
      sym_float,
    STATE(127), 2,
      aux_sym__value,
      sym_string,
    STATE(136), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2404] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(617), 14,
      anon_sym_PERCENTverify,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [2424] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_PERCENT,
    ACTIONS(583), 1,
      sym_string_content,
    ACTIONS(585), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(587), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(619), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(609), 2,
      sym_integer,
      sym_float,
    STATE(127), 2,
      aux_sym__value,
      sym_string,
    STATE(136), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2458] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_PERCENT,
    ACTIONS(583), 1,
      sym_string_content,
    ACTIONS(585), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(587), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(621), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(609), 2,
      sym_integer,
      sym_float,
    STATE(127), 2,
      aux_sym__value,
      sym_string,
    STATE(136), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2492] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_string_content,
    ACTIONS(563), 1,
      anon_sym_PERCENT,
    ACTIONS(565), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(567), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(623), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(605), 2,
      sym_integer,
      sym_float,
    STATE(125), 2,
      aux_sym__value,
      sym_string,
    STATE(137), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2526] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(625), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(630), 1,
      anon_sym_PERCENT,
    ACTIONS(633), 1,
      sym_string_content,
    ACTIONS(636), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(639), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(627), 2,
      sym_integer,
      sym_float,
    STATE(125), 2,
      aux_sym__value,
      sym_string,
    STATE(137), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2560] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_PERCENT,
    ACTIONS(573), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(575), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(642), 1,
      sym_string_content_with_newlines,
    ACTIONS(312), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(114), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2590] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(644), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(649), 1,
      anon_sym_PERCENT,
    ACTIONS(652), 1,
      sym_string_content,
    ACTIONS(655), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(658), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(646), 2,
      sym_integer,
      sym_float,
    STATE(127), 2,
      aux_sym__value,
      sym_string,
    STATE(136), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2624] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_PERCENT,
    ACTIONS(583), 1,
      sym_string_content,
    ACTIONS(585), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(587), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(661), 2,
      sym_integer,
      sym_float,
    STATE(119), 2,
      aux_sym__value,
      sym_string,
    STATE(136), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2655] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_PERCENT,
    ACTIONS(583), 1,
      sym_string_content,
    ACTIONS(585), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(587), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(663), 2,
      sym_integer,
      sym_float,
    STATE(117), 2,
      aux_sym__value,
      sym_string,
    STATE(136), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RPAREN2,
    STATE(133), 1,
      aux_sym_verify_repeat1,
    ACTIONS(665), 11,
      anon_sym_filedigest,
      anon_sym_group,
      anon_sym_maj,
      anon_sym_md5,
      anon_sym_mode,
      anon_sym_min,
      anon_sym_mtime,
      anon_sym_not,
      anon_sym_owner,
      anon_sym_size,
      anon_sym_symlink,
  [2709] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_PERCENT,
    ACTIONS(583), 1,
      sym_string_content,
    ACTIONS(585), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(587), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(669), 2,
      sym_integer,
      sym_float,
    STATE(122), 2,
      aux_sym__value,
      sym_string,
    STATE(136), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RPAREN2,
    STATE(130), 1,
      aux_sym_verify_repeat1,
    ACTIONS(671), 11,
      anon_sym_filedigest,
      anon_sym_group,
      anon_sym_maj,
      anon_sym_md5,
      anon_sym_mode,
      anon_sym_min,
      anon_sym_mtime,
      anon_sym_not,
      anon_sym_owner,
      anon_sym_size,
      anon_sym_symlink,
  [2763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_RPAREN2,
    STATE(133), 1,
      aux_sym_verify_repeat1,
    ACTIONS(675), 11,
      anon_sym_filedigest,
      anon_sym_group,
      anon_sym_maj,
      anon_sym_md5,
      anon_sym_mode,
      anon_sym_min,
      anon_sym_mtime,
      anon_sym_not,
      anon_sym_owner,
      anon_sym_size,
      anon_sym_symlink,
  [2786] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_PERCENT,
    ACTIONS(583), 1,
      sym_string_content,
    ACTIONS(585), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(587), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(680), 2,
      sym_integer,
      sym_float,
    STATE(123), 2,
      aux_sym__value,
      sym_string,
    STATE(136), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2817] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(682), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(686), 1,
      anon_sym_PERCENT,
    ACTIONS(689), 1,
      sym_string_content,
    ACTIONS(692), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(695), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(684), 2,
      sym_integer,
      sym_float,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2847] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_PERCENT,
    ACTIONS(585), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(587), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(700), 1,
      sym_string_content,
    ACTIONS(698), 3,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
    STATE(138), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2875] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_PERCENT,
    ACTIONS(565), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(567), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(702), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(704), 1,
      sym_string_content,
    ACTIONS(698), 2,
      sym_integer,
      sym_float,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2905] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_PERCENT,
    ACTIONS(709), 1,
      sym_string_content,
    ACTIONS(712), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(715), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(684), 3,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
    STATE(138), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2933] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_PERCENTendif,
    ACTIONS(718), 1,
      anon_sym_PERCENT,
    ACTIONS(720), 1,
      sym_string_content_with_newlines,
    ACTIONS(722), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(724), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(226), 1,
      sym_string_with_newlines,
    STATE(151), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2962] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(368), 11,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [2979] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_PERCENTendif,
    ACTIONS(718), 1,
      anon_sym_PERCENT,
    ACTIONS(720), 1,
      sym_string_content_with_newlines,
    ACTIONS(722), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(724), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(238), 1,
      sym_string_with_newlines,
    STATE(151), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [3008] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_PERCENTendif,
    ACTIONS(718), 1,
      anon_sym_PERCENT,
    ACTIONS(720), 1,
      sym_string_content_with_newlines,
    ACTIONS(722), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(724), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(235), 1,
      sym_string_with_newlines,
    STATE(151), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [3037] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_PERCENTendif,
    ACTIONS(718), 1,
      anon_sym_PERCENT,
    ACTIONS(720), 1,
      sym_string_content_with_newlines,
    ACTIONS(722), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(724), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(229), 1,
      sym_string_with_newlines,
    STATE(151), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [3066] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_PERCENT,
    ACTIONS(728), 1,
      sym_string_content,
    ACTIONS(730), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(732), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(698), 2,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
    STATE(145), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3093] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_PERCENT,
    ACTIONS(737), 1,
      sym_string_content,
    ACTIONS(740), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(743), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(684), 2,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
    STATE(145), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3120] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_PERCENTendif,
    ACTIONS(746), 1,
      anon_sym_PERCENT,
    ACTIONS(749), 1,
      sym_string_content_with_newlines,
    ACTIONS(752), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(755), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(146), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [3146] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_PERCENT,
    ACTIONS(730), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(732), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(758), 1,
      sym_string_content,
    STATE(266), 1,
      sym_string,
    STATE(144), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3172] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(684), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(760), 1,
      anon_sym_PERCENT,
    ACTIONS(763), 1,
      sym_string_content,
    ACTIONS(766), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(769), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3198] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(698), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(772), 1,
      sym_string_content,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3224] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(414), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3250] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_PERCENTendif,
    ACTIONS(718), 1,
      anon_sym_PERCENT,
    ACTIONS(722), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(724), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(774), 1,
      sym_string_content_with_newlines,
    STATE(146), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [3276] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(361), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3302] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_PERCENT,
    ACTIONS(730), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(732), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(758), 1,
      sym_string_content,
    STATE(263), 1,
      sym_string,
    STATE(144), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3328] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(479), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3354] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(471), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3380] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(333), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3406] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(336), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3432] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_PERCENT,
    ACTIONS(730), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(732), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(758), 1,
      sym_string_content,
    STATE(258), 1,
      sym_string,
    STATE(144), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3458] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(339), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3484] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(343), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3510] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(381), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3536] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(379), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3562] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(362), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3588] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(370), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3614] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(433), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3640] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(369), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3666] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(348), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3692] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(367), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3718] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(352), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3744] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(365), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3770] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(183), 1,
      sym_string_content,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(349), 1,
      sym_string,
    STATE(149), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3796] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_PERCENT,
    ACTIONS(778), 1,
      sym_string_content,
    ACTIONS(780), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(782), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(347), 1,
      sym_single_word,
    STATE(312), 4,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
  [3821] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(380), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3836] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(376), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3851] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(384), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(331), 1,
      sym_qualifier,
    ACTIONS(784), 2,
      anon_sym_pre,
      anon_sym_post,
    ACTIONS(786), 6,
      anon_sym_postun,
      anon_sym_pretrans,
      anon_sym_posttrans,
      anon_sym_verify,
      anon_sym_interp,
      anon_sym_meta,
  [3885] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_PERCENT,
    ACTIONS(778), 1,
      sym_string_content,
    ACTIONS(780), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(782), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(313), 1,
      sym_single_word,
    STATE(312), 4,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
  [3910] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(318), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3925] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_PERCENT,
    ACTIONS(778), 1,
      sym_string_content,
    ACTIONS(780), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(782), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(432), 1,
      sym_single_word,
    STATE(312), 4,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
  [3950] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(388), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3965] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(392), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3980] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(368), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3995] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_PERCENTelif,
    ACTIONS(788), 1,
      anon_sym_PERCENTendif,
    ACTIONS(792), 1,
      anon_sym_PERCENTelse,
    STATE(205), 1,
      aux_sym_if_statement_repeat1,
    STATE(217), 1,
      sym_elif_clause,
    STATE(486), 1,
      sym_else_clause,
    ACTIONS(790), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [4021] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_PERCENTelif,
    ACTIONS(792), 1,
      anon_sym_PERCENTelse,
    ACTIONS(794), 1,
      anon_sym_PERCENTendif,
    STATE(183), 1,
      aux_sym_if_statement_repeat1,
    STATE(217), 1,
      sym_elif_clause,
    STATE(441), 1,
      sym_else_clause,
    ACTIONS(790), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [4047] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENTelif,
    ACTIONS(796), 1,
      anon_sym_STAR,
    STATE(186), 2,
      sym_changelog_entry,
      aux_sym_changelog_repeat1,
    ACTIONS(339), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4067] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_PERCENTelif,
    ACTIONS(798), 1,
      anon_sym_STAR,
    STATE(186), 2,
      sym_changelog_entry,
      aux_sym_changelog_repeat1,
    ACTIONS(355), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4087] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_PERCENTelif,
    ACTIONS(801), 1,
      anon_sym_DASH,
    STATE(189), 1,
      aux_sym_changelog_entry_repeat1,
    ACTIONS(345), 5,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_STAR,
  [4107] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_PERCENTelif,
    ACTIONS(792), 1,
      anon_sym_PERCENTelse,
    ACTIONS(803), 1,
      anon_sym_PERCENTendif,
    STATE(205), 1,
      aux_sym_if_statement_repeat1,
    STATE(217), 1,
      sym_elif_clause,
    STATE(386), 1,
      sym_else_clause,
    ACTIONS(790), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [4133] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_PERCENTelif,
    ACTIONS(801), 1,
      anon_sym_DASH,
    STATE(190), 1,
      aux_sym_changelog_entry_repeat1,
    ACTIONS(362), 5,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_STAR,
  [4153] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_PERCENTelif,
    ACTIONS(805), 1,
      anon_sym_DASH,
    STATE(190), 1,
      aux_sym_changelog_entry_repeat1,
    ACTIONS(332), 5,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_STAR,
  [4173] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_PERCENTelif,
    ACTIONS(796), 1,
      anon_sym_STAR,
    STATE(185), 2,
      sym_changelog_entry,
      aux_sym_changelog_repeat1,
    ACTIONS(351), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4193] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(386), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(388), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4208] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(390), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(392), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4223] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(368), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4236] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(382), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(384), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4251] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(376), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4266] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(380), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4279] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(378), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(380), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4294] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(366), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(368), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4309] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(392), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4322] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(376), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_PERCENTelif,
    ACTIONS(370), 6,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_DASH,
      anon_sym_STAR,
  [4350] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(388), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4363] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(384), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4376] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_PERCENTelif,
    STATE(205), 1,
      aux_sym_if_statement_repeat1,
    STATE(217), 1,
      sym_elif_clause,
    ACTIONS(808), 2,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelse,
    ACTIONS(813), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [4397] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(368), 7,
      anon_sym_PERCENTendif,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4410] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(384), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4422] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(388), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4434] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(376), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4446] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(816), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4458] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(380), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4470] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(392), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4482] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(368), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_PERCENTelif,
    ACTIONS(426), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4507] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(380), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_PERCENTelif,
    ACTIONS(466), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_PERCENTelif,
    ACTIONS(818), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_PERCENTelif,
    ACTIONS(390), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_PERCENTelif,
    ACTIONS(386), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_PERCENTelif,
    ACTIONS(382), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_PERCENTelif,
    ACTIONS(374), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_PERCENTelif,
    ACTIONS(442), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_PERCENTelif,
    ACTIONS(378), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4622] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(392), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4633] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(388), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_PERCENTelif,
    ACTIONS(482), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4657] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(384), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4668] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(376), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_PERCENTelif,
    ACTIONS(474), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_PERCENTelif,
    ACTIONS(478), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4705] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(368), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_PERCENTelif,
    ACTIONS(454), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_PERCENTelif,
    ACTIONS(822), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4742] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(380), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_PERCENTelif,
    ACTIONS(470), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_PERCENTelif,
    ACTIONS(394), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_PERCENTelif,
    ACTIONS(402), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_PERCENTelif,
    ACTIONS(462), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4805] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(376), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_PERCENTelif,
    ACTIONS(438), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_PERCENTelif,
    ACTIONS(406), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4842] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(384), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4853] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(388), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4864] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(392), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4875] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(368), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4886] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(318), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_PERCENTelif,
    ACTIONS(410), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_PERCENTelif,
    ACTIONS(414), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4923] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(826), 4,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4933] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(828), 4,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4943] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(830), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(832), 1,
      anon_sym_DASHn,
    ACTIONS(834), 1,
      anon_sym_DASHf,
  [4956] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(836), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(838), 1,
      anon_sym_DASHn,
    ACTIONS(840), 1,
      anon_sym_DASHf,
  [4969] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(842), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(844), 1,
      anon_sym_DASHn,
    ACTIONS(846), 1,
      anon_sym_DASHf,
  [4982] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(848), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(850), 1,
      anon_sym_DASHn,
  [4992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [5000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_COLON,
    ACTIONS(856), 1,
      anon_sym_RBRACE,
  [5010] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(858), 1,
      sym_string_content_with_newlines,
    ACTIONS(860), 1,
      sym_variable_name,
  [5020] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(864), 1,
      anon_sym_DASHf,
  [5030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_COLON,
    ACTIONS(868), 1,
      anon_sym_RBRACE,
  [5040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_COLON,
    ACTIONS(872), 1,
      anon_sym_RBRACE,
  [5050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_COLON,
    ACTIONS(876), 1,
      anon_sym_RBRACE,
  [5060] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(878), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(880), 1,
      anon_sym_DASHn,
  [5070] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(882), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(884), 1,
      anon_sym_DASHf,
  [5080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_COLON,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
  [5090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_COLON,
    ACTIONS(892), 1,
      anon_sym_RBRACE,
  [5100] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(894), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(896), 1,
      anon_sym_DASHf,
  [5110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_COLON,
    ACTIONS(900), 1,
      anon_sym_RBRACE,
  [5120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [5128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_COLON,
    ACTIONS(906), 1,
      anon_sym_RBRACE,
  [5138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_COLON,
    ACTIONS(910), 1,
      anon_sym_RBRACE,
  [5148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      sym_variable_name,
    ACTIONS(914), 1,
      anon_sym_QMARK,
  [5158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_variable_name,
    ACTIONS(918), 1,
      anon_sym_QMARK,
  [5168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_PERCENTdescription,
    STATE(56), 1,
      sym_subsection_description,
  [5178] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym_string_content_with_newlines,
    ACTIONS(924), 1,
      sym_variable_name,
  [5188] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym_string_content_with_newlines,
    ACTIONS(928), 1,
      sym_variable_name,
  [5198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_PERCENTdescription,
    STATE(240), 1,
      sym_subsection_description,
  [5208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      sym_variable_name,
    ACTIONS(934), 1,
      anon_sym_QMARK,
  [5218] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(938), 1,
      anon_sym_DASHn,
  [5228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_COLON,
    ACTIONS(942), 1,
      anon_sym_RBRACE,
  [5238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_COLON,
    ACTIONS(946), 1,
      anon_sym_RBRACE,
  [5248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_COLON,
    ACTIONS(950), 1,
      anon_sym_RBRACE,
  [5258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_COLON,
    ACTIONS(954), 1,
      anon_sym_RBRACE,
  [5268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      sym_variable_name,
    ACTIONS(958), 1,
      anon_sym_QMARK,
  [5278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_COLON,
    ACTIONS(962), 1,
      anon_sym_RBRACE,
  [5288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_COLON,
    ACTIONS(966), 1,
      anon_sym_RBRACE,
  [5298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      sym_variable_name,
    ACTIONS(970), 1,
      anon_sym_QMARK,
  [5308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      sym_variable_name,
    ACTIONS(974), 1,
      anon_sym_QMARK,
  [5318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      sym_variable_name,
    ACTIONS(978), 1,
      anon_sym_QMARK,
  [5328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      sym_variable_name,
    ACTIONS(982), 1,
      anon_sym_QMARK,
  [5338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      sym_variable_name,
    ACTIONS(986), 1,
      anon_sym_QMARK,
  [5348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_variable_name,
    ACTIONS(990), 1,
      anon_sym_QMARK,
  [5358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_COLON,
    ACTIONS(994), 1,
      anon_sym_LPAREN,
  [5368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [5376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [5384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_COLON,
    ACTIONS(1002), 1,
      anon_sym_RBRACE,
  [5394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_COLON,
    ACTIONS(1006), 1,
      anon_sym_RBRACE,
  [5404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [5412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_COLON,
    ACTIONS(1012), 1,
      anon_sym_RBRACE,
  [5422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_COLON,
    ACTIONS(1016), 1,
      anon_sym_RBRACE,
  [5432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_COLON,
    ACTIONS(1020), 1,
      anon_sym_RBRACE,
  [5442] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1022), 1,
      aux_sym__simple_statements_token1,
  [5449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_RBRACE,
  [5456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym_variable_name,
  [5463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      sym_variable_name,
  [5470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      sym_variable_name,
  [5477] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1032), 1,
      aux_sym__simple_statements_token1,
  [5484] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(382), 1,
      aux_sym__simple_statements_token1,
  [5491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      ts_builtin_sym_end,
  [5498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_COLON,
  [5505] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1038), 1,
      aux_sym__simple_statements_token1,
  [5512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_PERCENTendif,
  [5519] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1040), 1,
      aux_sym__simple_statements_token1,
  [5526] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1042), 1,
      aux_sym__simple_statements_token1,
  [5533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_PERCENTendif,
  [5540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_PERCENTendif,
  [5547] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1044), 1,
      aux_sym__simple_statements_token1,
  [5554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_PERCENTendif,
  [5561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym_variable_name,
  [5568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_DASHn,
  [5575] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1050), 1,
      aux_sym__simple_statements_token1,
  [5582] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1052), 1,
      aux_sym__simple_statements_token1,
  [5589] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1054), 1,
      aux_sym__simple_statements_token1,
  [5596] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1056), 1,
      aux_sym__simple_statements_token1,
  [5603] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1058), 1,
      aux_sym__simple_statements_token1,
  [5610] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1060), 1,
      aux_sym__simple_statements_token1,
  [5617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_RBRACE,
  [5624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
  [5631] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1066), 1,
      aux_sym__simple_statements_token1,
  [5638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      sym_variable_name,
  [5645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
  [5652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
  [5659] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1074), 1,
      aux_sym__simple_statements_token1,
  [5666] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1076), 1,
      aux_sym__simple_statements_token1,
  [5673] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1078), 1,
      aux_sym__simple_statements_token1,
  [5680] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1080), 1,
      aux_sym_if_statement_token1,
  [5687] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1082), 1,
      aux_sym__simple_statements_token1,
  [5694] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1084), 1,
      aux_sym__simple_statements_token1,
  [5701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_LPAREN2,
  [5708] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym__simple_statements_token1,
  [5715] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1088), 1,
      aux_sym__simple_statements_token1,
  [5722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_LPAREN,
  [5729] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1092), 1,
      aux_sym__simple_statements_token1,
  [5736] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1094), 1,
      aux_sym__simple_statements_token1,
  [5743] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1096), 1,
      aux_sym__simple_statements_token1,
  [5750] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym__simple_statements_token1,
  [5757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_RBRACE,
  [5764] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1102), 1,
      aux_sym__simple_statements_token1,
  [5771] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1104), 1,
      aux_sym__simple_statements_token1,
  [5778] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1106), 1,
      aux_sym__simple_statements_token1,
  [5785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_RBRACE,
  [5792] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1110), 1,
      aux_sym__simple_statements_token1,
  [5799] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1112), 1,
      aux_sym__simple_statements_token1,
  [5806] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1114), 1,
      aux_sym__simple_statements_token1,
  [5813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_LPAREN,
  [5820] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1118), 1,
      aux_sym__simple_statements_token1,
  [5827] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1120), 1,
      aux_sym__simple_statements_token1,
  [5834] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1122), 1,
      aux_sym__simple_statements_token1,
  [5841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      sym_variable_name,
  [5848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
  [5855] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(390), 1,
      aux_sym__simple_statements_token1,
  [5862] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(882), 1,
      aux_sym__simple_statements_token1,
  [5869] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1128), 1,
      aux_sym__simple_statements_token1,
  [5876] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1130), 1,
      aux_sym__simple_statements_token1,
  [5883] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1132), 1,
      aux_sym__simple_statements_token1,
  [5890] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(894), 1,
      aux_sym__simple_statements_token1,
  [5897] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(386), 1,
      aux_sym__simple_statements_token1,
  [5904] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1134), 1,
      aux_sym__simple_statements_token1,
  [5911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_RBRACE,
  [5918] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1138), 1,
      aux_sym__simple_statements_token1,
  [5925] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1140), 1,
      aux_sym__simple_statements_token1,
  [5932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_RBRACE,
  [5939] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1144), 1,
      aux_sym__simple_statements_token1,
  [5946] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1146), 1,
      aux_sym__simple_statements_token1,
  [5953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      sym_variable_name,
  [5960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
  [5967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
  [5974] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1154), 1,
      aux_sym__simple_statements_token1,
  [5981] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1156), 1,
      sym_string_content,
  [5988] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1158), 1,
      aux_sym__simple_statements_token1,
  [5995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_RBRACE,
  [6002] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1162), 1,
      aux_sym__simple_statements_token1,
  [6009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_RBRACE,
  [6016] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1166), 1,
      aux_sym__simple_statements_token1,
  [6023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym_variable_name,
  [6030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
  [6037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      anon_sym_PERCENTendif,
  [6044] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1174), 1,
      aux_sym__simple_statements_token1,
  [6051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_RBRACE,
  [6058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      anon_sym_RBRACE,
  [6065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      sym_variable_name,
  [6072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_RPAREN,
  [6079] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1184), 1,
      aux_sym_if_statement_token1,
  [6086] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1186), 1,
      aux_sym__simple_statements_token1,
  [6093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      anon_sym_RBRACE,
  [6100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_RBRACE,
  [6107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      sym_variable_name,
  [6114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_RPAREN,
  [6121] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym__simple_statements_token1,
  [6128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      anon_sym_PERCENTendif,
  [6135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_RBRACE,
  [6142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_RBRACE,
  [6149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      sym_variable_name,
  [6156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
  [6163] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(378), 1,
      aux_sym__simple_statements_token1,
  [6170] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(366), 1,
      aux_sym__simple_statements_token1,
  [6177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_RPAREN,
  [6184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      anon_sym_RBRACE,
  [6191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
  [6198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      anon_sym_COLON,
  [6205] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1214), 1,
      aux_sym__simple_statements_token1,
  [6212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      anon_sym_RBRACE,
  [6219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      anon_sym_RBRACE,
  [6226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_RPAREN,
  [6233] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1222), 1,
      aux_sym__simple_statements_token1,
  [6240] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1224), 1,
      aux_sym__simple_statements_token1,
  [6247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      anon_sym_RBRACE,
  [6254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      anon_sym_RBRACE,
  [6261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      sym_variable_name,
  [6268] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1232), 1,
      aux_sym__simple_statements_token1,
  [6275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_RPAREN,
  [6282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
  [6289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      aux_sym_defattr_token2,
  [6296] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1240), 1,
      aux_sym_if_statement_token1,
  [6303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      sym_variable_name,
  [6310] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1244), 1,
      aux_sym__simple_statements_token1,
  [6317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 1,
      aux_sym_defattr_token2,
  [6324] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1248), 1,
      aux_sym__simple_statements_token1,
  [6331] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1250), 1,
      sym_string_content,
  [6338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_RBRACE,
  [6345] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1254), 1,
      sym_string_content,
  [6352] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1256), 1,
      sym_string_content,
  [6359] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1258), 1,
      aux_sym__simple_statements_token1,
  [6366] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1260), 1,
      aux_sym__simple_statements_token1,
  [6373] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1262), 1,
      sym_string_content,
  [6380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 1,
      anon_sym_PERCENTendif,
  [6387] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1266), 1,
      aux_sym__simple_statements_token1,
  [6394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
  [6401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 1,
      anon_sym_COMMA,
  [6408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_COMMA,
  [6415] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1274), 1,
      aux_sym__simple_statements_token1,
  [6422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      anon_sym_PERCENTendif,
  [6429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      sym_variable_name,
  [6436] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1280), 1,
      aux_sym__simple_statements_token1,
  [6443] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1282), 1,
      aux_sym__simple_statements_token1,
  [6450] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1284), 1,
      sym_string_content,
  [6457] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1286), 1,
      aux_sym__simple_statements_token1,
  [6464] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1288), 1,
      sym_string_content,
  [6471] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1290), 1,
      sym_string_content,
  [6478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_PERCENTendif,
  [6485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
  [6492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
  [6499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      sym_variable_name,
  [6506] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1300), 1,
      aux_sym__simple_statements_token1,
  [6513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_COLON,
  [6520] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1302), 1,
      sym_string_content,
  [6527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      aux_sym_defattr_token2,
  [6534] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1306), 1,
      sym_string_content,
  [6541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
  [6548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      aux_sym_defattr_token2,
  [6555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      sym_variable_name,
  [6562] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1314), 1,
      sym_string_content,
  [6569] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1316), 1,
      sym_string_content,
  [6576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_PERCENTendif,
  [6583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1320), 1,
      sym_variable_name,
  [6590] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1322), 1,
      sym_string_content,
  [6597] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1324), 1,
      sym_string_content,
  [6604] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1326), 1,
      aux_sym__simple_statements_token1,
  [6611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      sym_variable_name,
  [6618] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1330), 1,
      sym_string_content,
  [6625] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1332), 1,
      sym_string_content,
  [6632] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1334), 1,
      aux_sym__simple_statements_token1,
  [6639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      sym_variable_name,
  [6646] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1338), 1,
      sym_string_content,
  [6653] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1340), 1,
      sym_string_content,
  [6660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      anon_sym_PERCENTendif,
  [6667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      sym_variable_name,
  [6674] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1346), 1,
      sym_string_content,
  [6681] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1348), 1,
      sym_string_content,
  [6688] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1350), 1,
      aux_sym__simple_statements_token1,
  [6695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      sym_variable_name,
  [6702] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1354), 1,
      sym_string_content,
  [6709] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1356), 1,
      sym_string_content,
  [6716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      sym_variable_name,
  [6723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1360), 1,
      anon_sym_COLON,
  [6730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_DASHn,
  [6737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1364), 1,
      anon_sym_PERCENTendif,
  [6744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1366), 1,
      aux_sym_defattr_token2,
  [6751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      anon_sym_COLON,
  [6758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1370), 1,
      aux_sym_defattr_token2,
  [6765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1372), 1,
      aux_sym_defattr_token2,
  [6772] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1374), 1,
      aux_sym__simple_statements_token1,
  [6779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 1,
      anon_sym_COMMA,
  [6786] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1378), 1,
      aux_sym__simple_statements_token1,
  [6793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1380), 1,
      anon_sym_COMMA,
  [6800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      anon_sym_COMMA,
  [6807] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1384), 1,
      aux_sym_if_statement_token1,
  [6814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      aux_sym_defattr_token2,
  [6821] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1388), 1,
      aux_sym_if_statement_token1,
  [6828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1390), 1,
      aux_sym_defattr_token2,
  [6835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1392), 1,
      aux_sym_defattr_token2,
  [6842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1394), 1,
      anon_sym_COMMA,
  [6849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      anon_sym_COMMA,
  [6856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1398), 1,
      anon_sym_COMMA,
  [6863] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1400), 1,
      aux_sym__simple_statements_token1,
  [6870] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1402), 1,
      aux_sym__simple_statements_token1,
  [6877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_COMMA,
  [6884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1406), 1,
      anon_sym_LPAREN,
  [6891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1408), 1,
      anon_sym_LPAREN,
  [6898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(71)] = 0,
  [SMALL_STATE(72)] = 77,
  [SMALL_STATE(73)] = 154,
  [SMALL_STATE(74)] = 217,
  [SMALL_STATE(75)] = 280,
  [SMALL_STATE(76)] = 354,
  [SMALL_STATE(77)] = 424,
  [SMALL_STATE(78)] = 494,
  [SMALL_STATE(79)] = 564,
  [SMALL_STATE(80)] = 634,
  [SMALL_STATE(81)] = 704,
  [SMALL_STATE(82)] = 774,
  [SMALL_STATE(83)] = 844,
  [SMALL_STATE(84)] = 910,
  [SMALL_STATE(85)] = 976,
  [SMALL_STATE(86)] = 1042,
  [SMALL_STATE(87)] = 1108,
  [SMALL_STATE(88)] = 1174,
  [SMALL_STATE(89)] = 1240,
  [SMALL_STATE(90)] = 1306,
  [SMALL_STATE(91)] = 1362,
  [SMALL_STATE(92)] = 1418,
  [SMALL_STATE(93)] = 1474,
  [SMALL_STATE(94)] = 1504,
  [SMALL_STATE(95)] = 1534,
  [SMALL_STATE(96)] = 1564,
  [SMALL_STATE(97)] = 1594,
  [SMALL_STATE(98)] = 1624,
  [SMALL_STATE(99)] = 1667,
  [SMALL_STATE(100)] = 1710,
  [SMALL_STATE(101)] = 1753,
  [SMALL_STATE(102)] = 1796,
  [SMALL_STATE(103)] = 1822,
  [SMALL_STATE(104)] = 1848,
  [SMALL_STATE(105)] = 1874,
  [SMALL_STATE(106)] = 1900,
  [SMALL_STATE(107)] = 1926,
  [SMALL_STATE(108)] = 1964,
  [SMALL_STATE(109)] = 1997,
  [SMALL_STATE(110)] = 2030,
  [SMALL_STATE(111)] = 2067,
  [SMALL_STATE(112)] = 2104,
  [SMALL_STATE(113)] = 2137,
  [SMALL_STATE(114)] = 2170,
  [SMALL_STATE(115)] = 2200,
  [SMALL_STATE(116)] = 2234,
  [SMALL_STATE(117)] = 2268,
  [SMALL_STATE(118)] = 2302,
  [SMALL_STATE(119)] = 2336,
  [SMALL_STATE(120)] = 2370,
  [SMALL_STATE(121)] = 2404,
  [SMALL_STATE(122)] = 2424,
  [SMALL_STATE(123)] = 2458,
  [SMALL_STATE(124)] = 2492,
  [SMALL_STATE(125)] = 2526,
  [SMALL_STATE(126)] = 2560,
  [SMALL_STATE(127)] = 2590,
  [SMALL_STATE(128)] = 2624,
  [SMALL_STATE(129)] = 2655,
  [SMALL_STATE(130)] = 2686,
  [SMALL_STATE(131)] = 2709,
  [SMALL_STATE(132)] = 2740,
  [SMALL_STATE(133)] = 2763,
  [SMALL_STATE(134)] = 2786,
  [SMALL_STATE(135)] = 2817,
  [SMALL_STATE(136)] = 2847,
  [SMALL_STATE(137)] = 2875,
  [SMALL_STATE(138)] = 2905,
  [SMALL_STATE(139)] = 2933,
  [SMALL_STATE(140)] = 2962,
  [SMALL_STATE(141)] = 2979,
  [SMALL_STATE(142)] = 3008,
  [SMALL_STATE(143)] = 3037,
  [SMALL_STATE(144)] = 3066,
  [SMALL_STATE(145)] = 3093,
  [SMALL_STATE(146)] = 3120,
  [SMALL_STATE(147)] = 3146,
  [SMALL_STATE(148)] = 3172,
  [SMALL_STATE(149)] = 3198,
  [SMALL_STATE(150)] = 3224,
  [SMALL_STATE(151)] = 3250,
  [SMALL_STATE(152)] = 3276,
  [SMALL_STATE(153)] = 3302,
  [SMALL_STATE(154)] = 3328,
  [SMALL_STATE(155)] = 3354,
  [SMALL_STATE(156)] = 3380,
  [SMALL_STATE(157)] = 3406,
  [SMALL_STATE(158)] = 3432,
  [SMALL_STATE(159)] = 3458,
  [SMALL_STATE(160)] = 3484,
  [SMALL_STATE(161)] = 3510,
  [SMALL_STATE(162)] = 3536,
  [SMALL_STATE(163)] = 3562,
  [SMALL_STATE(164)] = 3588,
  [SMALL_STATE(165)] = 3614,
  [SMALL_STATE(166)] = 3640,
  [SMALL_STATE(167)] = 3666,
  [SMALL_STATE(168)] = 3692,
  [SMALL_STATE(169)] = 3718,
  [SMALL_STATE(170)] = 3744,
  [SMALL_STATE(171)] = 3770,
  [SMALL_STATE(172)] = 3796,
  [SMALL_STATE(173)] = 3821,
  [SMALL_STATE(174)] = 3836,
  [SMALL_STATE(175)] = 3851,
  [SMALL_STATE(176)] = 3866,
  [SMALL_STATE(177)] = 3885,
  [SMALL_STATE(178)] = 3910,
  [SMALL_STATE(179)] = 3925,
  [SMALL_STATE(180)] = 3950,
  [SMALL_STATE(181)] = 3965,
  [SMALL_STATE(182)] = 3980,
  [SMALL_STATE(183)] = 3995,
  [SMALL_STATE(184)] = 4021,
  [SMALL_STATE(185)] = 4047,
  [SMALL_STATE(186)] = 4067,
  [SMALL_STATE(187)] = 4087,
  [SMALL_STATE(188)] = 4107,
  [SMALL_STATE(189)] = 4133,
  [SMALL_STATE(190)] = 4153,
  [SMALL_STATE(191)] = 4173,
  [SMALL_STATE(192)] = 4193,
  [SMALL_STATE(193)] = 4208,
  [SMALL_STATE(194)] = 4223,
  [SMALL_STATE(195)] = 4236,
  [SMALL_STATE(196)] = 4251,
  [SMALL_STATE(197)] = 4266,
  [SMALL_STATE(198)] = 4279,
  [SMALL_STATE(199)] = 4294,
  [SMALL_STATE(200)] = 4309,
  [SMALL_STATE(201)] = 4322,
  [SMALL_STATE(202)] = 4335,
  [SMALL_STATE(203)] = 4350,
  [SMALL_STATE(204)] = 4363,
  [SMALL_STATE(205)] = 4376,
  [SMALL_STATE(206)] = 4397,
  [SMALL_STATE(207)] = 4410,
  [SMALL_STATE(208)] = 4422,
  [SMALL_STATE(209)] = 4434,
  [SMALL_STATE(210)] = 4446,
  [SMALL_STATE(211)] = 4458,
  [SMALL_STATE(212)] = 4470,
  [SMALL_STATE(213)] = 4482,
  [SMALL_STATE(214)] = 4494,
  [SMALL_STATE(215)] = 4507,
  [SMALL_STATE(216)] = 4518,
  [SMALL_STATE(217)] = 4531,
  [SMALL_STATE(218)] = 4544,
  [SMALL_STATE(219)] = 4557,
  [SMALL_STATE(220)] = 4570,
  [SMALL_STATE(221)] = 4583,
  [SMALL_STATE(222)] = 4596,
  [SMALL_STATE(223)] = 4609,
  [SMALL_STATE(224)] = 4622,
  [SMALL_STATE(225)] = 4633,
  [SMALL_STATE(226)] = 4644,
  [SMALL_STATE(227)] = 4657,
  [SMALL_STATE(228)] = 4668,
  [SMALL_STATE(229)] = 4679,
  [SMALL_STATE(230)] = 4692,
  [SMALL_STATE(231)] = 4705,
  [SMALL_STATE(232)] = 4716,
  [SMALL_STATE(233)] = 4729,
  [SMALL_STATE(234)] = 4742,
  [SMALL_STATE(235)] = 4753,
  [SMALL_STATE(236)] = 4766,
  [SMALL_STATE(237)] = 4779,
  [SMALL_STATE(238)] = 4792,
  [SMALL_STATE(239)] = 4805,
  [SMALL_STATE(240)] = 4816,
  [SMALL_STATE(241)] = 4829,
  [SMALL_STATE(242)] = 4842,
  [SMALL_STATE(243)] = 4853,
  [SMALL_STATE(244)] = 4864,
  [SMALL_STATE(245)] = 4875,
  [SMALL_STATE(246)] = 4886,
  [SMALL_STATE(247)] = 4897,
  [SMALL_STATE(248)] = 4910,
  [SMALL_STATE(249)] = 4923,
  [SMALL_STATE(250)] = 4933,
  [SMALL_STATE(251)] = 4943,
  [SMALL_STATE(252)] = 4956,
  [SMALL_STATE(253)] = 4969,
  [SMALL_STATE(254)] = 4982,
  [SMALL_STATE(255)] = 4992,
  [SMALL_STATE(256)] = 5000,
  [SMALL_STATE(257)] = 5010,
  [SMALL_STATE(258)] = 5020,
  [SMALL_STATE(259)] = 5030,
  [SMALL_STATE(260)] = 5040,
  [SMALL_STATE(261)] = 5050,
  [SMALL_STATE(262)] = 5060,
  [SMALL_STATE(263)] = 5070,
  [SMALL_STATE(264)] = 5080,
  [SMALL_STATE(265)] = 5090,
  [SMALL_STATE(266)] = 5100,
  [SMALL_STATE(267)] = 5110,
  [SMALL_STATE(268)] = 5120,
  [SMALL_STATE(269)] = 5128,
  [SMALL_STATE(270)] = 5138,
  [SMALL_STATE(271)] = 5148,
  [SMALL_STATE(272)] = 5158,
  [SMALL_STATE(273)] = 5168,
  [SMALL_STATE(274)] = 5178,
  [SMALL_STATE(275)] = 5188,
  [SMALL_STATE(276)] = 5198,
  [SMALL_STATE(277)] = 5208,
  [SMALL_STATE(278)] = 5218,
  [SMALL_STATE(279)] = 5228,
  [SMALL_STATE(280)] = 5238,
  [SMALL_STATE(281)] = 5248,
  [SMALL_STATE(282)] = 5258,
  [SMALL_STATE(283)] = 5268,
  [SMALL_STATE(284)] = 5278,
  [SMALL_STATE(285)] = 5288,
  [SMALL_STATE(286)] = 5298,
  [SMALL_STATE(287)] = 5308,
  [SMALL_STATE(288)] = 5318,
  [SMALL_STATE(289)] = 5328,
  [SMALL_STATE(290)] = 5338,
  [SMALL_STATE(291)] = 5348,
  [SMALL_STATE(292)] = 5358,
  [SMALL_STATE(293)] = 5368,
  [SMALL_STATE(294)] = 5376,
  [SMALL_STATE(295)] = 5384,
  [SMALL_STATE(296)] = 5394,
  [SMALL_STATE(297)] = 5404,
  [SMALL_STATE(298)] = 5412,
  [SMALL_STATE(299)] = 5422,
  [SMALL_STATE(300)] = 5432,
  [SMALL_STATE(301)] = 5442,
  [SMALL_STATE(302)] = 5449,
  [SMALL_STATE(303)] = 5456,
  [SMALL_STATE(304)] = 5463,
  [SMALL_STATE(305)] = 5470,
  [SMALL_STATE(306)] = 5477,
  [SMALL_STATE(307)] = 5484,
  [SMALL_STATE(308)] = 5491,
  [SMALL_STATE(309)] = 5498,
  [SMALL_STATE(310)] = 5505,
  [SMALL_STATE(311)] = 5512,
  [SMALL_STATE(312)] = 5519,
  [SMALL_STATE(313)] = 5526,
  [SMALL_STATE(314)] = 5533,
  [SMALL_STATE(315)] = 5540,
  [SMALL_STATE(316)] = 5547,
  [SMALL_STATE(317)] = 5554,
  [SMALL_STATE(318)] = 5561,
  [SMALL_STATE(319)] = 5568,
  [SMALL_STATE(320)] = 5575,
  [SMALL_STATE(321)] = 5582,
  [SMALL_STATE(322)] = 5589,
  [SMALL_STATE(323)] = 5596,
  [SMALL_STATE(324)] = 5603,
  [SMALL_STATE(325)] = 5610,
  [SMALL_STATE(326)] = 5617,
  [SMALL_STATE(327)] = 5624,
  [SMALL_STATE(328)] = 5631,
  [SMALL_STATE(329)] = 5638,
  [SMALL_STATE(330)] = 5645,
  [SMALL_STATE(331)] = 5652,
  [SMALL_STATE(332)] = 5659,
  [SMALL_STATE(333)] = 5666,
  [SMALL_STATE(334)] = 5673,
  [SMALL_STATE(335)] = 5680,
  [SMALL_STATE(336)] = 5687,
  [SMALL_STATE(337)] = 5694,
  [SMALL_STATE(338)] = 5701,
  [SMALL_STATE(339)] = 5708,
  [SMALL_STATE(340)] = 5715,
  [SMALL_STATE(341)] = 5722,
  [SMALL_STATE(342)] = 5729,
  [SMALL_STATE(343)] = 5736,
  [SMALL_STATE(344)] = 5743,
  [SMALL_STATE(345)] = 5750,
  [SMALL_STATE(346)] = 5757,
  [SMALL_STATE(347)] = 5764,
  [SMALL_STATE(348)] = 5771,
  [SMALL_STATE(349)] = 5778,
  [SMALL_STATE(350)] = 5785,
  [SMALL_STATE(351)] = 5792,
  [SMALL_STATE(352)] = 5799,
  [SMALL_STATE(353)] = 5806,
  [SMALL_STATE(354)] = 5813,
  [SMALL_STATE(355)] = 5820,
  [SMALL_STATE(356)] = 5827,
  [SMALL_STATE(357)] = 5834,
  [SMALL_STATE(358)] = 5841,
  [SMALL_STATE(359)] = 5848,
  [SMALL_STATE(360)] = 5855,
  [SMALL_STATE(361)] = 5862,
  [SMALL_STATE(362)] = 5869,
  [SMALL_STATE(363)] = 5876,
  [SMALL_STATE(364)] = 5883,
  [SMALL_STATE(365)] = 5890,
  [SMALL_STATE(366)] = 5897,
  [SMALL_STATE(367)] = 5904,
  [SMALL_STATE(368)] = 5911,
  [SMALL_STATE(369)] = 5918,
  [SMALL_STATE(370)] = 5925,
  [SMALL_STATE(371)] = 5932,
  [SMALL_STATE(372)] = 5939,
  [SMALL_STATE(373)] = 5946,
  [SMALL_STATE(374)] = 5953,
  [SMALL_STATE(375)] = 5960,
  [SMALL_STATE(376)] = 5967,
  [SMALL_STATE(377)] = 5974,
  [SMALL_STATE(378)] = 5981,
  [SMALL_STATE(379)] = 5988,
  [SMALL_STATE(380)] = 5995,
  [SMALL_STATE(381)] = 6002,
  [SMALL_STATE(382)] = 6009,
  [SMALL_STATE(383)] = 6016,
  [SMALL_STATE(384)] = 6023,
  [SMALL_STATE(385)] = 6030,
  [SMALL_STATE(386)] = 6037,
  [SMALL_STATE(387)] = 6044,
  [SMALL_STATE(388)] = 6051,
  [SMALL_STATE(389)] = 6058,
  [SMALL_STATE(390)] = 6065,
  [SMALL_STATE(391)] = 6072,
  [SMALL_STATE(392)] = 6079,
  [SMALL_STATE(393)] = 6086,
  [SMALL_STATE(394)] = 6093,
  [SMALL_STATE(395)] = 6100,
  [SMALL_STATE(396)] = 6107,
  [SMALL_STATE(397)] = 6114,
  [SMALL_STATE(398)] = 6121,
  [SMALL_STATE(399)] = 6128,
  [SMALL_STATE(400)] = 6135,
  [SMALL_STATE(401)] = 6142,
  [SMALL_STATE(402)] = 6149,
  [SMALL_STATE(403)] = 6156,
  [SMALL_STATE(404)] = 6163,
  [SMALL_STATE(405)] = 6170,
  [SMALL_STATE(406)] = 6177,
  [SMALL_STATE(407)] = 6184,
  [SMALL_STATE(408)] = 6191,
  [SMALL_STATE(409)] = 6198,
  [SMALL_STATE(410)] = 6205,
  [SMALL_STATE(411)] = 6212,
  [SMALL_STATE(412)] = 6219,
  [SMALL_STATE(413)] = 6226,
  [SMALL_STATE(414)] = 6233,
  [SMALL_STATE(415)] = 6240,
  [SMALL_STATE(416)] = 6247,
  [SMALL_STATE(417)] = 6254,
  [SMALL_STATE(418)] = 6261,
  [SMALL_STATE(419)] = 6268,
  [SMALL_STATE(420)] = 6275,
  [SMALL_STATE(421)] = 6282,
  [SMALL_STATE(422)] = 6289,
  [SMALL_STATE(423)] = 6296,
  [SMALL_STATE(424)] = 6303,
  [SMALL_STATE(425)] = 6310,
  [SMALL_STATE(426)] = 6317,
  [SMALL_STATE(427)] = 6324,
  [SMALL_STATE(428)] = 6331,
  [SMALL_STATE(429)] = 6338,
  [SMALL_STATE(430)] = 6345,
  [SMALL_STATE(431)] = 6352,
  [SMALL_STATE(432)] = 6359,
  [SMALL_STATE(433)] = 6366,
  [SMALL_STATE(434)] = 6373,
  [SMALL_STATE(435)] = 6380,
  [SMALL_STATE(436)] = 6387,
  [SMALL_STATE(437)] = 6394,
  [SMALL_STATE(438)] = 6401,
  [SMALL_STATE(439)] = 6408,
  [SMALL_STATE(440)] = 6415,
  [SMALL_STATE(441)] = 6422,
  [SMALL_STATE(442)] = 6429,
  [SMALL_STATE(443)] = 6436,
  [SMALL_STATE(444)] = 6443,
  [SMALL_STATE(445)] = 6450,
  [SMALL_STATE(446)] = 6457,
  [SMALL_STATE(447)] = 6464,
  [SMALL_STATE(448)] = 6471,
  [SMALL_STATE(449)] = 6478,
  [SMALL_STATE(450)] = 6485,
  [SMALL_STATE(451)] = 6492,
  [SMALL_STATE(452)] = 6499,
  [SMALL_STATE(453)] = 6506,
  [SMALL_STATE(454)] = 6513,
  [SMALL_STATE(455)] = 6520,
  [SMALL_STATE(456)] = 6527,
  [SMALL_STATE(457)] = 6534,
  [SMALL_STATE(458)] = 6541,
  [SMALL_STATE(459)] = 6548,
  [SMALL_STATE(460)] = 6555,
  [SMALL_STATE(461)] = 6562,
  [SMALL_STATE(462)] = 6569,
  [SMALL_STATE(463)] = 6576,
  [SMALL_STATE(464)] = 6583,
  [SMALL_STATE(465)] = 6590,
  [SMALL_STATE(466)] = 6597,
  [SMALL_STATE(467)] = 6604,
  [SMALL_STATE(468)] = 6611,
  [SMALL_STATE(469)] = 6618,
  [SMALL_STATE(470)] = 6625,
  [SMALL_STATE(471)] = 6632,
  [SMALL_STATE(472)] = 6639,
  [SMALL_STATE(473)] = 6646,
  [SMALL_STATE(474)] = 6653,
  [SMALL_STATE(475)] = 6660,
  [SMALL_STATE(476)] = 6667,
  [SMALL_STATE(477)] = 6674,
  [SMALL_STATE(478)] = 6681,
  [SMALL_STATE(479)] = 6688,
  [SMALL_STATE(480)] = 6695,
  [SMALL_STATE(481)] = 6702,
  [SMALL_STATE(482)] = 6709,
  [SMALL_STATE(483)] = 6716,
  [SMALL_STATE(484)] = 6723,
  [SMALL_STATE(485)] = 6730,
  [SMALL_STATE(486)] = 6737,
  [SMALL_STATE(487)] = 6744,
  [SMALL_STATE(488)] = 6751,
  [SMALL_STATE(489)] = 6758,
  [SMALL_STATE(490)] = 6765,
  [SMALL_STATE(491)] = 6772,
  [SMALL_STATE(492)] = 6779,
  [SMALL_STATE(493)] = 6786,
  [SMALL_STATE(494)] = 6793,
  [SMALL_STATE(495)] = 6800,
  [SMALL_STATE(496)] = 6807,
  [SMALL_STATE(497)] = 6814,
  [SMALL_STATE(498)] = 6821,
  [SMALL_STATE(499)] = 6828,
  [SMALL_STATE(500)] = 6835,
  [SMALL_STATE(501)] = 6842,
  [SMALL_STATE(502)] = 6849,
  [SMALL_STATE(503)] = 6856,
  [SMALL_STATE(504)] = 6863,
  [SMALL_STATE(505)] = 6870,
  [SMALL_STATE(506)] = 6877,
  [SMALL_STATE(507)] = 6884,
  [SMALL_STATE(508)] = 6891,
  [SMALL_STATE(509)] = 6898,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(423),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(364),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(345),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(342),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(340),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(406),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 6, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 6, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 5, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 5, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 7, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 7, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 4, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(341),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(354),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(385),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 3, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_files, 6, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_files, 6, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 4, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file, 4, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defattr, 9, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defattr, 9, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_expansion, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_expansion, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_buildrequires, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate_buildrequires, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prep_scriptlet, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prep_scriptlet, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 4, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 4, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 2, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_with_newlines, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_with_newlines, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog_entry, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog_entry, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog, 2, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0), SHIFT_REPEAT(447),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog_entry, 4, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog_entry, 4, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expansion, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expansion, 2, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changelog_entry_repeat1, 3, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changelog_entry_repeat1, 3, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 3, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 3, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_expansion, 2, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_expansion, 2, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 4, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 4, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 5, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 5, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 6, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 6, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conf_scriptlet, 2, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conf_scriptlet, 2, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 11),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 11),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_scriptlet, 2, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_scriptlet, 2, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_install_scriptlet, 2, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_install_scriptlet, 2, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_scriptlet, 2, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_scriptlet, 2, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clean_scriptlet, 2, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clean_scriptlet, 2, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 4, 0, 2),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags, 4, 0, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 12),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, 0, 12),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 4, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 4, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 8),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 8),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 7),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 7),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection, 2, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_undefinition, 3, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_undefinition, 3, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 5),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 5),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 10),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 10),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_description, 4, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_description, 4, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 1, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_invocation, 3, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_invocation, 3, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prep_scriptlet, 3, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prep_scriptlet, 3, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_buildrequires, 3, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate_buildrequires, 3, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 5, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 5, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 5, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 5, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 9),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 9),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 3),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_package, 4, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(496),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(507),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(509),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 8, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value, 2, 0, 0),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(125),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(358),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(137),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(272),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(359),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0),
  [646] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(127),
  [649] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(390),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(136),
  [655] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(288),
  [658] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(397),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verify_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_repeat1, 2, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [686] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(358),
  [689] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [695] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [706] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [734] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [737] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [743] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [746] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [749] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [752] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [755] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(413),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [760] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [763] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [766] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [769] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(385),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 4),
  [810] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 4), SHIFT_REPEAT(392),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 4), SHIFT_REPEAT(392),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_options, 2, 0, 0),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, 0, 1),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, 0, 1),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_clause, 4, 0, 5),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_clause, 4, 0, 5),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verify, 4, 0, 0),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verify, 3, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_tag, 1, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1034] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_word, 1, 0, 0),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1, 0, 0),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_tag, 4, 0, 0),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 3, 0, 6),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [1356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_rpmspec(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
