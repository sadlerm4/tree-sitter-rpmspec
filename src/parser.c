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
#define STATE_COUNT 549
#define LARGE_STATE_COUNT 73
#define SYMBOL_COUNT 201
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
  sym_defattr = 175,
  sym_file = 176,
  sym_attr = 177,
  sym_verify = 178,
  sym_changelog = 179,
  sym_changelog_entry = 180,
  sym_macro_definition = 181,
  sym_macro_options = 182,
  sym_macro_undefinition = 183,
  sym_macro_invocation = 184,
  sym_string_with_newlines = 185,
  sym_string = 186,
  sym_single_word = 187,
  sym__macro_expansion = 188,
  sym_simple_expansion = 189,
  sym_full_expansion = 190,
  sym_shell_expansion = 191,
  aux_sym_spec_repeat1 = 192,
  aux_sym_if_statement_repeat1 = 193,
  aux_sym_subsection_package_repeat1 = 194,
  aux_sym_files_repeat1 = 195,
  aux_sym_verify_repeat1 = 196,
  aux_sym_changelog_repeat1 = 197,
  aux_sym_changelog_entry_repeat1 = 198,
  aux_sym_string_with_newlines_repeat1 = 199,
  aux_sym_string_repeat1 = 200,
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
  [3] = 2,
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
  [36] = 36,
  [37] = 31,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 36,
  [49] = 49,
  [50] = 35,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 34,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 40,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 38,
  [72] = 72,
  [73] = 73,
  [74] = 69,
  [75] = 41,
  [76] = 76,
  [77] = 77,
  [78] = 10,
  [79] = 11,
  [80] = 13,
  [81] = 14,
  [82] = 8,
  [83] = 12,
  [84] = 9,
  [85] = 8,
  [86] = 9,
  [87] = 12,
  [88] = 14,
  [89] = 13,
  [90] = 11,
  [91] = 10,
  [92] = 18,
  [93] = 93,
  [94] = 93,
  [95] = 17,
  [96] = 16,
  [97] = 93,
  [98] = 93,
  [99] = 15,
  [100] = 19,
  [101] = 16,
  [102] = 15,
  [103] = 18,
  [104] = 17,
  [105] = 21,
  [106] = 106,
  [107] = 106,
  [108] = 20,
  [109] = 23,
  [110] = 19,
  [111] = 22,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 114,
  [116] = 25,
  [117] = 117,
  [118] = 24,
  [119] = 119,
  [120] = 119,
  [121] = 113,
  [122] = 112,
  [123] = 123,
  [124] = 117,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 128,
  [131] = 129,
  [132] = 126,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 134,
  [137] = 31,
  [138] = 135,
  [139] = 23,
  [140] = 135,
  [141] = 134,
  [142] = 20,
  [143] = 21,
  [144] = 22,
  [145] = 145,
  [146] = 134,
  [147] = 147,
  [148] = 40,
  [149] = 149,
  [150] = 147,
  [151] = 149,
  [152] = 152,
  [153] = 25,
  [154] = 145,
  [155] = 155,
  [156] = 24,
  [157] = 157,
  [158] = 149,
  [159] = 157,
  [160] = 149,
  [161] = 161,
  [162] = 152,
  [163] = 155,
  [164] = 164,
  [165] = 135,
  [166] = 147,
  [167] = 36,
  [168] = 157,
  [169] = 155,
  [170] = 35,
  [171] = 34,
  [172] = 155,
  [173] = 38,
  [174] = 164,
  [175] = 152,
  [176] = 145,
  [177] = 177,
  [178] = 39,
  [179] = 40,
  [180] = 180,
  [181] = 31,
  [182] = 36,
  [183] = 183,
  [184] = 177,
  [185] = 38,
  [186] = 35,
  [187] = 34,
  [188] = 30,
  [189] = 32,
  [190] = 190,
  [191] = 26,
  [192] = 192,
  [193] = 27,
  [194] = 31,
  [195] = 195,
  [196] = 192,
  [197] = 197,
  [198] = 29,
  [199] = 195,
  [200] = 190,
  [201] = 197,
  [202] = 28,
  [203] = 35,
  [204] = 36,
  [205] = 38,
  [206] = 34,
  [207] = 35,
  [208] = 40,
  [209] = 38,
  [210] = 31,
  [211] = 211,
  [212] = 40,
  [213] = 31,
  [214] = 33,
  [215] = 36,
  [216] = 34,
  [217] = 38,
  [218] = 218,
  [219] = 219,
  [220] = 31,
  [221] = 40,
  [222] = 35,
  [223] = 38,
  [224] = 224,
  [225] = 35,
  [226] = 36,
  [227] = 40,
  [228] = 36,
  [229] = 34,
  [230] = 34,
  [231] = 72,
  [232] = 16,
  [233] = 38,
  [234] = 38,
  [235] = 68,
  [236] = 40,
  [237] = 63,
  [238] = 60,
  [239] = 58,
  [240] = 55,
  [241] = 15,
  [242] = 34,
  [243] = 59,
  [244] = 46,
  [245] = 45,
  [246] = 44,
  [247] = 54,
  [248] = 36,
  [249] = 70,
  [250] = 56,
  [251] = 57,
  [252] = 17,
  [253] = 18,
  [254] = 36,
  [255] = 255,
  [256] = 47,
  [257] = 64,
  [258] = 42,
  [259] = 65,
  [260] = 61,
  [261] = 53,
  [262] = 43,
  [263] = 66,
  [264] = 49,
  [265] = 35,
  [266] = 39,
  [267] = 51,
  [268] = 52,
  [269] = 31,
  [270] = 40,
  [271] = 271,
  [272] = 31,
  [273] = 35,
  [274] = 34,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 277,
  [279] = 277,
  [280] = 280,
  [281] = 281,
  [282] = 281,
  [283] = 281,
  [284] = 284,
  [285] = 284,
  [286] = 284,
  [287] = 284,
  [288] = 284,
  [289] = 284,
  [290] = 284,
  [291] = 291,
  [292] = 284,
  [293] = 293,
  [294] = 284,
  [295] = 284,
  [296] = 296,
  [297] = 297,
  [298] = 284,
  [299] = 280,
  [300] = 297,
  [301] = 280,
  [302] = 297,
  [303] = 280,
  [304] = 297,
  [305] = 280,
  [306] = 297,
  [307] = 280,
  [308] = 297,
  [309] = 280,
  [310] = 297,
  [311] = 280,
  [312] = 297,
  [313] = 313,
  [314] = 296,
  [315] = 297,
  [316] = 297,
  [317] = 317,
  [318] = 293,
  [319] = 317,
  [320] = 320,
  [321] = 293,
  [322] = 281,
  [323] = 280,
  [324] = 313,
  [325] = 297,
  [326] = 317,
  [327] = 280,
  [328] = 280,
  [329] = 313,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 36,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 363,
  [365] = 348,
  [366] = 347,
  [367] = 367,
  [368] = 343,
  [369] = 338,
  [370] = 337,
  [371] = 371,
  [372] = 336,
  [373] = 334,
  [374] = 333,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 331,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 352,
  [389] = 353,
  [390] = 360,
  [391] = 361,
  [392] = 363,
  [393] = 348,
  [394] = 347,
  [395] = 338,
  [396] = 336,
  [397] = 377,
  [398] = 378,
  [399] = 379,
  [400] = 387,
  [401] = 360,
  [402] = 361,
  [403] = 348,
  [404] = 338,
  [405] = 336,
  [406] = 377,
  [407] = 379,
  [408] = 387,
  [409] = 360,
  [410] = 361,
  [411] = 411,
  [412] = 375,
  [413] = 336,
  [414] = 379,
  [415] = 360,
  [416] = 361,
  [417] = 417,
  [418] = 376,
  [419] = 336,
  [420] = 379,
  [421] = 360,
  [422] = 361,
  [423] = 423,
  [424] = 424,
  [425] = 336,
  [426] = 379,
  [427] = 360,
  [428] = 361,
  [429] = 377,
  [430] = 378,
  [431] = 336,
  [432] = 379,
  [433] = 361,
  [434] = 379,
  [435] = 380,
  [436] = 336,
  [437] = 379,
  [438] = 361,
  [439] = 439,
  [440] = 440,
  [441] = 336,
  [442] = 379,
  [443] = 361,
  [444] = 444,
  [445] = 382,
  [446] = 336,
  [447] = 379,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 383,
  [453] = 362,
  [454] = 451,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 346,
  [460] = 460,
  [461] = 344,
  [462] = 462,
  [463] = 361,
  [464] = 340,
  [465] = 465,
  [466] = 360,
  [467] = 448,
  [468] = 468,
  [469] = 335,
  [470] = 332,
  [471] = 359,
  [472] = 384,
  [473] = 411,
  [474] = 440,
  [475] = 449,
  [476] = 330,
  [477] = 477,
  [478] = 385,
  [479] = 357,
  [480] = 356,
  [481] = 355,
  [482] = 451,
  [483] = 354,
  [484] = 353,
  [485] = 344,
  [486] = 352,
  [487] = 487,
  [488] = 335,
  [489] = 477,
  [490] = 490,
  [491] = 451,
  [492] = 492,
  [493] = 386,
  [494] = 344,
  [495] = 495,
  [496] = 335,
  [497] = 477,
  [498] = 498,
  [499] = 451,
  [500] = 344,
  [501] = 335,
  [502] = 502,
  [503] = 451,
  [504] = 344,
  [505] = 335,
  [506] = 477,
  [507] = 451,
  [508] = 344,
  [509] = 335,
  [510] = 510,
  [511] = 451,
  [512] = 344,
  [513] = 335,
  [514] = 387,
  [515] = 451,
  [516] = 344,
  [517] = 335,
  [518] = 31,
  [519] = 451,
  [520] = 344,
  [521] = 335,
  [522] = 35,
  [523] = 451,
  [524] = 344,
  [525] = 335,
  [526] = 468,
  [527] = 460,
  [528] = 457,
  [529] = 417,
  [530] = 498,
  [531] = 498,
  [532] = 498,
  [533] = 450,
  [534] = 487,
  [535] = 487,
  [536] = 487,
  [537] = 458,
  [538] = 458,
  [539] = 458,
  [540] = 423,
  [541] = 423,
  [542] = 423,
  [543] = 34,
  [544] = 38,
  [545] = 40,
  [546] = 350,
  [547] = 350,
  [548] = 350,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(646);
      ADVANCE_MAP(
        '#', 662,
        '%', 824,
        '(', 798,
        ')', 810,
        '*', 812,
        ',', 786,
        '-', 783,
        ':', 681,
        '?', 1415,
        'A', 581,
        'B', 582,
        'C', 411,
        'D', 269,
        'E', 357,
        'G', 462,
        'L', 277,
        'M', 407,
        'N', 60,
        'O', 94,
        'P', 61,
        'R', 142,
        'S', 413,
        'U', 51,
        'V', 43,
      );
      if (lookahead == '\\') SKIP(642);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == 'f') ADVANCE(275);
      if (lookahead == 'g') ADVANCE(465);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == 'm') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead == 's') ADVANCE(270);
      if (lookahead == 'v') ADVANCE(170);
      if (lookahead == '}') ADVANCE(1417);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(641);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 647,
        '\r', 1,
        '#', 662,
        '%', 829,
        '*', 812,
        '-', 783,
        'A', 581,
        'B', 582,
        'C', 411,
        'D', 269,
        'E', 357,
        'G', 462,
        'L', 277,
        'M', 407,
        'N', 60,
        'O', 94,
        'P', 61,
        'R', 142,
        'S', 413,
        'U', 51,
        'V', 43,
      );
      if (lookahead == '\\') SKIP(614);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 648,
        '\r', 2,
        '#', 661,
        '%', 824,
        'A', 1388,
        'B', 1389,
        'C', 1301,
        'D', 1253,
        'E', 1292,
        'G', 1331,
        'L', 1258,
        'M', 1302,
        'N', 1153,
        'O', 1165,
        'P', 1154,
        'R', 1199,
        'S', 1305,
        'U', 1145,
        'V', 1137,
      );
      if (lookahead == '\\') SKIP(615);
      if (lookahead == 'e') ADVANCE(1276);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1114);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 649,
        '\r', 3,
        '#', 660,
        '%', 829,
        'A', 1090,
        'B', 1091,
        'C', 1003,
        'D', 955,
        'E', 994,
        'G', 1033,
        'L', 959,
        'M', 1004,
        'N', 856,
        'O', 868,
        'P', 857,
        'R', 902,
        'S', 1007,
        'U', 848,
        'V', 840,
        '\\', 16,
        '\t', 833,
        0x0b, 833,
        '\f', 833,
        ' ', 833,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(816);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '-') ADVANCE(1133);
      if (lookahead == '0') ADVANCE(817);
      if (lookahead == '\\') SKIP(623);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1127);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(816);
      if (lookahead == '\r') SKIP(30);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '-') ADVANCE(1133);
      if (lookahead == '0') ADVANCE(817);
      if (lookahead == '\\') SKIP(623);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1127);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(650);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '\\') SKIP(628);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 651,
        '\r', 7,
        '#', 661,
        '%', 825,
        'A', 1388,
        'B', 1389,
        'C', 1301,
        'D', 1253,
        'E', 1292,
        'G', 1331,
        'L', 1258,
        'M', 1302,
        'N', 1153,
        'O', 1165,
        'P', 1154,
        'R', 1199,
        'S', 1305,
        'U', 1145,
        'V', 1137,
      );
      if (lookahead == '\\') SKIP(616);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 652,
        '\r', 8,
        '#', 661,
        '%', 829,
        '-', 1133,
        '0', 817,
        'A', 1388,
        'B', 1389,
        'C', 1301,
        'D', 1253,
        'E', 1292,
        'G', 1331,
        'L', 1258,
        'M', 1302,
        'N', 1153,
        'O', 1165,
        'P', 1154,
        'R', 1199,
        'S', 1305,
        'U', 1145,
        'V', 1137,
      );
      if (lookahead == '\\') SKIP(617);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1116);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(653);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '-') ADVANCE(1133);
      if (lookahead == '0') ADVANCE(817);
      if (lookahead == '\\') SKIP(620);
      if (lookahead == 'e') ADVANCE(1276);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1117);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(654);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '-') ADVANCE(1133);
      if (lookahead == '0') ADVANCE(817);
      if (lookahead == '\\') SKIP(622);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1118);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(655);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '-') ADVANCE(1133);
      if (lookahead == '0') ADVANCE(817);
      if (lookahead == '\\') SKIP(634);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1119);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(656);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '\\') SKIP(625);
      if (lookahead == 'e') ADVANCE(1276);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '-') ADVANCE(1232);
      if (lookahead == '\\') SKIP(626);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(658);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '\\') SKIP(627);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(659);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '\\') SKIP(632);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 16:
      if (lookahead == '\r') ADVANCE(1113);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(833);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 17:
      if (lookahead == '\r') ADVANCE(1113);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(834);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(1113);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(835);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 19:
      if (lookahead == '\r') ADVANCE(1113);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(836);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 20:
      if (lookahead == '\r') ADVANCE(1113);
      if (lookahead != 0) ADVANCE(1112);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(662);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(798);
      if (lookahead == ')') ADVANCE(810);
      if (lookahead == '-') ADVANCE(783);
      if (lookahead == '\\') SKIP(624);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == 'f') ADVANCE(275);
      if (lookahead == 'g') ADVANCE(465);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 's') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '-') ADVANCE(783);
      if (lookahead == '\\') SKIP(624);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == 'f') ADVANCE(275);
      if (lookahead == 'g') ADVANCE(465);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 's') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '(') ADVANCE(722);
      if (lookahead == ')') ADVANCE(723);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == ':') ADVANCE(681);
      if (lookahead == '?') ADVANCE(1415);
      if (lookahead == '\\') SKIP(629);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1414);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '(') ADVANCE(722);
      if (lookahead == ')') ADVANCE(723);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == ':') ADVANCE(681);
      if (lookahead == '\\') SKIP(629);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1414);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') SKIP(630);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(826);
      if (lookahead == '\\') SKIP(618);
      if (lookahead == 'e') ADVANCE(1276);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '\\') SKIP(631);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(28);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '(') ADVANCE(722);
      if (lookahead == '-') ADVANCE(1133);
      if (lookahead == '0') ADVANCE(817);
      if (lookahead == '\\') SKIP(621);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1126);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '-') ADVANCE(1133);
      if (lookahead == '0') ADVANCE(817);
      if (lookahead == '\\') SKIP(623);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1127);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '\\') SKIP(633);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(31);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(827);
      if (lookahead == '\\') SKIP(619);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(32);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') SKIP(635);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1130);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(660);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(981);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(34);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(660);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(35);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(660);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(836);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1414);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(1112);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '5') ADVANCE(802);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(473);
      if (lookahead == 'C') ADVANCE(436);
      if (lookahead == 'P') ADVANCE(495);
      if (lookahead == 'R') ADVANCE(171);
      if (lookahead == 'S') ADVANCE(612);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(475);
      if (lookahead == 'O') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(476);
      if (lookahead == 'O') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(287);
      END_STATE();
    case 45:
      if (lookahead == 'L') ADVANCE(703);
      END_STATE();
    case 46:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'P') ADVANCE(73);
      if (lookahead == 'S') ADVANCE(435);
      END_STATE();
    case 48:
      if (lookahead == 'P') ADVANCE(472);
      if (lookahead == 'R') ADVANCE(169);
      END_STATE();
    case 49:
      if (lookahead == 'P') ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == 'P') ADVANCE(432);
      END_STATE();
    case 51:
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 52:
      if (lookahead == 'R') ADVANCE(215);
      END_STATE();
    case 53:
      if (lookahead == 'S') ADVANCE(705);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(735);
      END_STATE();
    case 55:
      if (lookahead == 'S') ADVANCE(737);
      END_STATE();
    case 56:
      if (lookahead == 'T') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 57:
      if (lookahead == 'U') ADVANCE(468);
      END_STATE();
    case 58:
      if (lookahead == 'W') ADVANCE(291);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(720);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(526);
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(560);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(340);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(561);
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(461);
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
      if (lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(559);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(568);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 94:
      if (lookahead == 'b') ADVANCE(528);
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 95:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 96:
      if (lookahead == 'b') ADVANCE(185);
      END_STATE();
    case 97:
      if (lookahead == 'b') ADVANCE(599);
      END_STATE();
    case 98:
      if (lookahead == 'b') ADVANCE(598);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(323);
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(791);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(320);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(335);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(415);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'm') ADVANCE(410);
      if (lookahead == 'q') ADVANCE(592);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(563);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(550);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(571);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(474);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(566);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(324);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(757);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(587);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(422);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(514);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(498);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(808);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(796);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(752);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'h') ADVANCE(430);
      if (lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 217:
      if (lookahead == 'f') ADVANCE(664);
      if (lookahead == 'n') ADVANCE(539);
      END_STATE();
    case 218:
      if (lookahead == 'f') ADVANCE(756);
      END_STATE();
    case 219:
      if (lookahead == 'f') ADVANCE(677);
      END_STATE();
    case 220:
      if (lookahead == 'f') ADVANCE(608);
      END_STATE();
    case 221:
      if (lookahead == 'f') ADVANCE(676);
      END_STATE();
    case 222:
      if (lookahead == 'f') ADVANCE(755);
      END_STATE();
    case 223:
      if (lookahead == 'f') ADVANCE(781);
      if (lookahead == 'n') ADVANCE(751);
      END_STATE();
    case 224:
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 225:
      if (lookahead == 'f') ADVANCE(609);
      END_STATE();
    case 226:
      if (lookahead == 'f') ADVANCE(346);
      END_STATE();
    case 227:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 228:
      if (lookahead == 'f') ADVANCE(271);
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 229:
      if (lookahead == 'f') ADVANCE(88);
      END_STATE();
    case 230:
      if (lookahead == 'f') ADVANCE(304);
      END_STATE();
    case 231:
      if (lookahead == 'f') ADVANCE(274);
      END_STATE();
    case 232:
      if (lookahead == 'f') ADVANCE(278);
      END_STATE();
    case 233:
      if (lookahead == 'f') ADVANCE(285);
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 234:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 235:
      if (lookahead == 'f') ADVANCE(311);
      END_STATE();
    case 236:
      if (lookahead == 'f') ADVANCE(347);
      END_STATE();
    case 237:
      if (lookahead == 'g') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 238:
      if (lookahead == 'g') ADVANCE(243);
      if (lookahead == 'm') ADVANCE(349);
      if (lookahead == 'p') ADVANCE(441);
      END_STATE();
    case 239:
      if (lookahead == 'g') ADVANCE(789);
      END_STATE();
    case 240:
      if (lookahead == 'g') ADVANCE(690);
      END_STATE();
    case 241:
      if (lookahead == 'g') ADVANCE(811);
      END_STATE();
    case 242:
      if (lookahead == 'g') ADVANCE(416);
      END_STATE();
    case 243:
      if (lookahead == 'g') ADVANCE(210);
      END_STATE();
    case 244:
      if (lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 245:
      if (lookahead == 'g') ADVANCE(163);
      END_STATE();
    case 246:
      if (lookahead == 'g') ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 248:
      if (lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 249:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 250:
      if (lookahead == 'g') ADVANCE(205);
      END_STATE();
    case 251:
      if (lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 252:
      if (lookahead == 'g') ADVANCE(249);
      END_STATE();
    case 253:
      if (lookahead == 'g') ADVANCE(250);
      END_STATE();
    case 254:
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 255:
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 256:
      if (lookahead == 'h') ADVANCE(692);
      END_STATE();
    case 257:
      if (lookahead == 'h') ADVANCE(708);
      END_STATE();
    case 258:
      if (lookahead == 'h') ADVANCE(665);
      END_STATE();
    case 259:
      if (lookahead == 'h') ADVANCE(697);
      END_STATE();
    case 260:
      if (lookahead == 'h') ADVANCE(667);
      END_STATE();
    case 261:
      if (lookahead == 'h') ADVANCE(678);
      END_STATE();
    case 262:
      if (lookahead == 'h') ADVANCE(726);
      END_STATE();
    case 263:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 264:
      if (lookahead == 'h') ADVANCE(734);
      END_STATE();
    case 265:
      if (lookahead == 'h') ADVANCE(736);
      END_STATE();
    case 266:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 267:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(430);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(524);
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == 'y') ADVANCE(355);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(606);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'n') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(455);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'p') ADVANCE(431);
      if (lookahead == 'u') ADVANCE(366);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'p') ADVANCE(433);
      if (lookahead == 'u') ADVANCE(371);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(374);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 'u') ADVANCE(375);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 306:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 307:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 309:
      if (lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 310:
      if (lookahead == 'i') ADVANCE(483);
      END_STATE();
    case 311:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 312:
      if (lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 313:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 314:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 316:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 318:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 319:
      if (lookahead == 'j') ADVANCE(801);
      END_STATE();
    case 320:
      if (lookahead == 'k') ADVANCE(759);
      END_STATE();
    case 321:
      if (lookahead == 'k') ADVANCE(809);
      END_STATE();
    case 322:
      if (lookahead == 'k') ADVANCE(795);
      END_STATE();
    case 323:
      if (lookahead == 'k') ADVANCE(93);
      END_STATE();
    case 324:
      if (lookahead == 'k') ADVANCE(91);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(704);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(687);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(813);
      END_STATE();
    case 330:
      if (lookahead == 'l') ADVANCE(758);
      END_STATE();
    case 331:
      if (lookahead == 'l') ADVANCE(695);
      END_STATE();
    case 332:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 333:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 334:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(583);
      END_STATE();
    case 336:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 337:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 338:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 340:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 341:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 342:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 343:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 345:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 346:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 347:
      if (lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 348:
      if (lookahead == 'm') ADVANCE(689);
      END_STATE();
    case 349:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 350:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 351:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 352:
      if (lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 353:
      if (lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 354:
      if (lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 355:
      if (lookahead == 'm') ADVANCE(339);
      END_STATE();
    case 356:
      if (lookahead == 'm') ADVANCE(353);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead == 'p') ADVANCE(419);
      if (lookahead == 'x') ADVANCE(107);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(804);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(760);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(763);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(764);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(707);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(771);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(772);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(750);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(691);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(770);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(774);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(775);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(773);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(776);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(777);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(778);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(779);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(751);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(576);
      END_STATE();
    case 379:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 380:
      if (lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 382:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 383:
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 384:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 385:
      if (lookahead == 'n') ADVANCE(527);
      END_STATE();
    case 386:
      if (lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 387:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 388:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 389:
      if (lookahead == 'n') ADVANCE(508);
      END_STATE();
    case 390:
      if (lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 391:
      if (lookahead == 'n') ADVANCE(512);
      END_STATE();
    case 392:
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 393:
      if (lookahead == 'n') ADVANCE(515);
      END_STATE();
    case 394:
      if (lookahead == 'n') ADVANCE(517);
      END_STATE();
    case 395:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 396:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 397:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 398:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 399:
      if (lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 400:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 401:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 402:
      if (lookahead == 'n') ADVANCE(537);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 404:
      if (lookahead == 'n') ADVANCE(538);
      END_STATE();
    case 405:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 406:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 409:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 410:
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 411:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 412:
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 413:
      if (lookahead == 'o') ADVANCE(586);
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 414:
      if (lookahead == 'o') ADVANCE(545);
      END_STATE();
    case 415:
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 416:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 417:
      if (lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 418:
      if (lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 419:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 420:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 421:
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 422:
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 423:
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 424:
      if (lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 425:
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 426:
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 427:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 428:
      if (lookahead == 'o') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 429:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 430:
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 431:
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead == 'r') ADVANCE(207);
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
      if (lookahead == 'p') ADVANCE(693);
      END_STATE();
    case 438:
      if (lookahead == 'p') ADVANCE(800);
      END_STATE();
    case 439:
      if (lookahead == 'p') ADVANCE(719);
      END_STATE();
    case 440:
      if (lookahead == 'p') ADVANCE(578);
      END_STATE();
    case 441:
      if (lookahead == 'p') ADVANCE(344);
      END_STATE();
    case 442:
      if (lookahead == 'q') ADVANCE(744);
      END_STATE();
    case 443:
      if (lookahead == 'q') ADVANCE(685);
      END_STATE();
    case 444:
      if (lookahead == 'q') ADVANCE(729);
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
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(790);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(797);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(807);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(732);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(706);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(792);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(782);
      END_STATE();
    case 457:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 458:
      if (lookahead == 'r') ADVANCE(699);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(296);
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
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 467:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 471:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 472:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 473:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 474:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 475:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 476:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 477:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 478:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 479:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 480:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 481:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 482:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 483:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 484:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 485:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 486:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 487:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 488:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 489:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 490:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 491:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 492:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 493:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 494:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 495:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 496:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 497:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 498:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 499:
      if (lookahead == 's') ADVANCE(666);
      END_STATE();
    case 500:
      if (lookahead == 's') ADVANCE(780);
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 501:
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 502:
      if (lookahead == 's') ADVANCE(679);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(733);
      END_STATE();
    case 504:
      if (lookahead == 's') ADVANCE(743);
      END_STATE();
    case 505:
      if (lookahead == 's') ADVANCE(745);
      END_STATE();
    case 506:
      if (lookahead == 's') ADVANCE(721);
      END_STATE();
    case 507:
      if (lookahead == 's') ADVANCE(748);
      END_STATE();
    case 508:
      if (lookahead == 's') ADVANCE(716);
      END_STATE();
    case 509:
      if (lookahead == 's') ADVANCE(765);
      END_STATE();
    case 510:
      if (lookahead == 's') ADVANCE(731);
      END_STATE();
    case 511:
      if (lookahead == 's') ADVANCE(738);
      END_STATE();
    case 512:
      if (lookahead == 's') ADVANCE(717);
      END_STATE();
    case 513:
      if (lookahead == 's') ADVANCE(766);
      END_STATE();
    case 514:
      if (lookahead == 's') ADVANCE(746);
      END_STATE();
    case 515:
      if (lookahead == 's') ADVANCE(767);
      END_STATE();
    case 516:
      if (lookahead == 's') ADVANCE(749);
      END_STATE();
    case 517:
      if (lookahead == 's') ADVANCE(768);
      END_STATE();
    case 518:
      if (lookahead == 's') ADVANCE(730);
      END_STATE();
    case 519:
      if (lookahead == 's') ADVANCE(728);
      END_STATE();
    case 520:
      if (lookahead == 's') ADVANCE(739);
      END_STATE();
    case 521:
      if (lookahead == 's') ADVANCE(727);
      END_STATE();
    case 522:
      if (lookahead == 's') ADVANCE(747);
      END_STATE();
    case 523:
      if (lookahead == 's') ADVANCE(754);
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
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 528:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 529:
      if (lookahead == 's') ADVANCE(298);
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
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 536:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 537:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 538:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 539:
      if (lookahead == 's') ADVANCE(574);
      END_STATE();
    case 540:
      if (lookahead == 's') ADVANCE(541);
      END_STATE();
    case 541:
      if (lookahead == 's') ADVANCE(290);
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
      if (lookahead == 't') ADVANCE(806);
      END_STATE();
    case 546:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 547:
      if (lookahead == 't') ADVANCE(714);
      END_STATE();
    case 548:
      if (lookahead == 't') ADVANCE(762);
      END_STATE();
    case 549:
      if (lookahead == 't') ADVANCE(793);
      END_STATE();
    case 550:
      if (lookahead == 't') ADVANCE(788);
      END_STATE();
    case 551:
      if (lookahead == 't') ADVANCE(688);
      END_STATE();
    case 552:
      if (lookahead == 't') ADVANCE(799);
      END_STATE();
    case 553:
      if (lookahead == 't') ADVANCE(64);
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
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 558:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 559:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 560:
      if (lookahead == 't') ADVANCE(106);
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
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 568:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 570:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 571:
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 572:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 573:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 574:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 575:
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 576:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 579:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 581:
      if (lookahead == 'u') ADVANCE(556);
      END_STATE();
    case 582:
      if (lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 583:
      if (lookahead == 'u') ADVANCE(135);
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
      if (lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 588:
      if (lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 589:
      if (lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 590:
      if (lookahead == 'u') ADVANCE(376);
      END_STATE();
    case 591:
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 592:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 593:
      if (lookahead == 'u') ADVANCE(308);
      END_STATE();
    case 594:
      if (lookahead == 'u') ADVANCE(310);
      END_STATE();
    case 595:
      if (lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 596:
      if (lookahead == 'u') ADVANCE(484);
      END_STATE();
    case 597:
      if (lookahead == 'u') ADVANCE(491);
      END_STATE();
    case 598:
      if (lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 599:
      if (lookahead == 'u') ADVANCE(579);
      END_STATE();
    case 600:
      if (lookahead == 'v') ADVANCE(682);
      END_STATE();
    case 601:
      if (lookahead == 'v') ADVANCE(686);
      END_STATE();
    case 602:
      if (lookahead == 'v') ADVANCE(306);
      END_STATE();
    case 603:
      if (lookahead == 'v') ADVANCE(155);
      END_STATE();
    case 604:
      if (lookahead == 'v') ADVANCE(198);
      END_STATE();
    case 605:
      if (lookahead == 'w') ADVANCE(403);
      END_STATE();
    case 606:
      if (lookahead == 'x') ADVANCE(742);
      END_STATE();
    case 607:
      if (lookahead == 'x') ADVANCE(195);
      END_STATE();
    case 608:
      if (lookahead == 'y') ADVANCE(718);
      END_STATE();
    case 609:
      if (lookahead == 'y') ADVANCE(769);
      END_STATE();
    case 610:
      if (lookahead == 'y') ADVANCE(702);
      END_STATE();
    case 611:
      if (lookahead == 'y') ADVANCE(46);
      END_STATE();
    case 612:
      if (lookahead == 'y') ADVANCE(543);
      END_STATE();
    case 613:
      if (lookahead == 'z') ADVANCE(150);
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
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 616:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(7);
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
          lookahead == ' ') SKIP(27);
      END_STATE();
    case 619:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(32);
      END_STATE();
    case 620:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 621:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(29);
      END_STATE();
    case 622:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 623:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 624:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(23);
      END_STATE();
    case 625:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(12);
      END_STATE();
    case 626:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(13);
      END_STATE();
    case 627:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(14);
      END_STATE();
    case 628:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 629:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(25);
      END_STATE();
    case 630:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(26);
      END_STATE();
    case 631:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(28);
      END_STATE();
    case 632:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(15);
      END_STATE();
    case 633:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(31);
      END_STATE();
    case 634:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 635:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(33);
      END_STATE();
    case 636:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(822);
      END_STATE();
    case 637:
      if (eof) ADVANCE(646);
      ADVANCE_MAP(
        '\n', 647,
        '\r', 1,
        '#', 662,
        '%', 829,
        '*', 812,
        '-', 783,
        'A', 581,
        'B', 582,
        'C', 411,
        'D', 269,
        'E', 357,
        'G', 462,
        'L', 277,
        'M', 407,
        'N', 60,
        'O', 94,
        'P', 61,
        'R', 142,
        'S', 413,
        'U', 51,
        'V', 43,
      );
      if (lookahead == '\\') SKIP(643);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(637);
      END_STATE();
    case 638:
      if (eof) ADVANCE(646);
      ADVANCE_MAP(
        '\n', 649,
        '\r', 3,
        '#', 660,
        '%', 829,
        'A', 1090,
        'B', 1091,
        'C', 1003,
        'D', 955,
        'E', 994,
        'G', 1033,
        'L', 959,
        'M', 1004,
        'N', 856,
        'O', 868,
        'P', 857,
        'R', 902,
        'S', 1007,
        'U', 848,
        'V', 840,
        '\\', 16,
        '\t', 833,
        0x0b, 833,
        '\f', 833,
        ' ', 833,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 639:
      if (eof) ADVANCE(646);
      ADVANCE_MAP(
        '\n', 651,
        '\r', 7,
        '#', 661,
        '%', 825,
        'A', 1388,
        'B', 1389,
        'C', 1301,
        'D', 1253,
        'E', 1292,
        'G', 1331,
        'L', 1258,
        'M', 1302,
        'N', 1153,
        'O', 1165,
        'P', 1154,
        'R', 1199,
        'S', 1305,
        'U', 1145,
        'V', 1137,
      );
      if (lookahead == '\\') SKIP(644);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 640:
      if (eof) ADVANCE(646);
      ADVANCE_MAP(
        '\n', 652,
        '\r', 8,
        '#', 661,
        '%', 829,
        '-', 1133,
        '0', 817,
        'A', 1388,
        'B', 1389,
        'C', 1301,
        'D', 1253,
        'E', 1292,
        'G', 1331,
        'L', 1258,
        'M', 1302,
        'N', 1153,
        'O', 1165,
        'P', 1154,
        'R', 1199,
        'S', 1305,
        'U', 1145,
        'V', 1137,
      );
      if (lookahead == '\\') SKIP(645);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1116);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 641:
      if (eof) ADVANCE(646);
      ADVANCE_MAP(
        '#', 662,
        '%', 824,
        '(', 722,
        ')', 723,
        '*', 812,
        ',', 786,
        '-', 783,
        ':', 681,
        'A', 581,
        'B', 582,
        'C', 411,
        'D', 269,
        'E', 357,
        'G', 462,
        'L', 277,
        'M', 407,
        'N', 60,
        'O', 94,
        'P', 61,
        'R', 142,
        'S', 413,
        'U', 51,
        'V', 43,
      );
      if (lookahead == '\\') SKIP(642);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == 'f') ADVANCE(275);
      if (lookahead == 'g') ADVANCE(465);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == 'm') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead == 's') ADVANCE(270);
      if (lookahead == 'v') ADVANCE(170);
      if (lookahead == '}') ADVANCE(1417);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(641);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      END_STATE();
    case 642:
      if (eof) ADVANCE(646);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(641);
      END_STATE();
    case 643:
      if (eof) ADVANCE(646);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(637);
      END_STATE();
    case 644:
      if (eof) ADVANCE(646);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(639);
      END_STATE();
    case 645:
      if (eof) ADVANCE(646);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(640);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(648);
      if (lookahead == '\r') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1114);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(833);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(650);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(651);
      if (lookahead == '\r') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1115);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(652);
      if (lookahead == '\r') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(653);
      if (lookahead == '\r') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1117);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(654);
      if (lookahead == '\r') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1118);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(655);
      if (lookahead == '\r') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1119);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(656);
      if (lookahead == '\r') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1120);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1121);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(658);
      if (lookahead == '\r') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1122);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(659);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1123);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(663);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '`') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(660);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(661);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(662);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(660);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_PERCENTif);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_PERCENTifarch);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_PERCENTifos);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_PERCENTifnarch);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_PERCENTifnos);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == ' ') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(675);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '#') ADVANCE(662);
      if (lookahead == '%') ADVANCE(671);
      if (lookahead == '\\') ADVANCE(674);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(670);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(675);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'd') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(675);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'l') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(675);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'n') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(675);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(670);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(675);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(675);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_PERCENTendif);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_PERCENTelif);
      if (lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_elifarch);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_PERCENTelifos);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_PERCENTelse);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_AutoProv);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(1340);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(1041);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(477);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_AutoReqProv);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_BugUrl);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_BuildRoot);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_BuildSystem);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_DistTag);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_Distribution);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_Epoch);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_Group);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_License);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_ModularityLabel);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_Name);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_NoPatch);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_NoSource);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_Packager);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_Release);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_SourceLicense);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_Summary);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_URL);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_Url);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_VCS);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_Vendor);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_Version);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(708);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(712);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(712);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(712);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_pre);
      if (lookahead == 't') ADVANCE(489);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_post);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead == 'u') ADVANCE(362);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_postun);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_pretrans);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_posttrans);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_verify);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_interp);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_Requires);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(1386);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(1088);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(570);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_BuildArchitectures);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_BuildConflicts);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_BuildPrereq);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_BuildRequires);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_DocDir);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_Enhances);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_ExcludeArch);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_ExcludeOS);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_ExclusiveArch);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_ExclusiveOS);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_Obsoletes);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_OrderWithRequires);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_Prefix);
      if (lookahead == 'e') ADVANCE(1349);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_Prefix);
      if (lookahead == 'e') ADVANCE(1051);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_Prefix);
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_Prefixes);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_Prereq);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_Provides);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_Recommends);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_RemovePathPostfixes);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_Suggests);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_Supplements);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_PERCENTdescription);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_DASHn);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_PERCENTpackage);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_PERCENTprep);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_PERCENTgenerate_buildrequires);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_PERCENTconf);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_PERCENTconf);
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_PERCENTbuild);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_PERCENTinstall);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_PERCENTcheck);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_PERCENTclean);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_PERCENTpre);
      if (lookahead == 'p') ADVANCE(753);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead == 'u') ADVANCE(361);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_PERCENTpost);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(363);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_PERCENTpreun);
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_PERCENTpostun);
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_PERCENTpretrans);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_PERCENTposttrans);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_PERCENTpreuntrans);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_PERCENTpostuntrans);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_PERCENTverify);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_PERCENTtriggerprein);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_PERCENTtriggerin);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_PERCENTtriggerun);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_PERCENTtriggerpostun);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_PERCENTfiletriggerin);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_PERCENTfiletriggerun);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_PERCENTfiletriggerpostun);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_PERCENTtransfiletriggerin);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_PERCENTtransfiletriggerun);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_PERCENTtransfiletriggerpostun);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_PERCENTfiles);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_PERCENTdefattr);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_defattr_token1);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_defattr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_defattr_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_PERCENTartifact);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_PERCENTconfig);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_PERCENTdir);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_PERCENTdoc);
      if (lookahead == 'd') ADVANCE(292);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_PERCENTdocdir);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_PERCENTghost);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_PERCENTlicense);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_PERCENTmissingok);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_PERCENTreadme);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_PERCENTattr);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_filedigest);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_maj);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_mtime);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_owner);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_symlink);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_PERCENTchangelog);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_PERCENTglobal);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_PERCENTdefine);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_PERCENTundefine);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_macro_invocation_token1);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(1412);
      if (lookahead == '.') ADVANCE(1410);
      if (lookahead == '_') ADVANCE(1132);
      if (lookahead == 'x') ADVANCE(1411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(1412);
      if (lookahead == '.') ADVANCE(1410);
      if (lookahead == '_') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(1412);
      if (lookahead == 'x') ADVANCE(1411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(1412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(822);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(822);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1418,
        'a', 464,
        'b', 591,
        'c', 254,
        'd', 143,
        'e', 325,
        'f', 302,
        'g', 212,
        'i', 217,
        'l', 316,
        'm', 276,
        'p', 67,
        'r', 144,
        't', 448,
        'u', 398,
        'v', 201,
        '{', 1416,
      );
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1418,
        'a', 464,
        'b', 591,
        'c', 254,
        'd', 143,
        'f', 302,
        'g', 212,
        'i', 217,
        'l', 316,
        'm', 276,
        'p', 67,
        'r', 144,
        't', 448,
        'u', 398,
        'v', 201,
        '{', 1416,
      );
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1418,
        'a', 464,
        'c', 427,
        'd', 206,
        'e', 325,
        'g', 268,
        'l', 316,
        'm', 276,
        'r', 144,
        'v', 201,
        '{', 1416,
      );
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1418,
        'a', 464,
        'c', 427,
        'd', 206,
        'e', 382,
        'g', 268,
        'l', 316,
        'm', 276,
        'r', 144,
        'v', 201,
        '{', 1416,
      );
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1418,
        'a', 463,
        'c', 427,
        'd', 279,
        'g', 268,
        'l', 316,
        'm', 276,
        'r', 144,
        'v', 201,
        '{', 1416,
      );
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1418,
        'b', 591,
        'c', 255,
        'd', 168,
        'f', 302,
        'g', 213,
        'i', 217,
        'p', 67,
        't', 448,
        'u', 398,
        'v', 201,
        '{', 1416,
      );
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '(') ADVANCE(1418);
      if (lookahead == 'd') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == '{') ADVANCE(1416);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '(') ADVANCE(1418);
      if (lookahead == 'd') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == '{') ADVANCE(1416);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '(') ADVANCE(1418);
      if (lookahead == 'd') ADVANCE(381);
      if (lookahead == '{') ADVANCE(1416);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      ADVANCE_MAP(
        '\n', 649,
        '\r', 3,
        '#', 660,
        '%', 829,
        'A', 1090,
        'B', 1091,
        'C', 1003,
        'D', 955,
        'E', 994,
        'G', 1033,
        'L', 959,
        'M', 1004,
        'N', 856,
        'O', 868,
        'P', 857,
        'R', 902,
        'S', 1007,
        'U', 848,
        'V', 840,
        '\\', 16,
        '\t', 833,
        0x0b, 833,
        '\f', 833,
        ' ', 833,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '#') ADVANCE(660);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(981);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(34);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '#') ADVANCE(660);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(35);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '#') ADVANCE(660);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(836);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1414);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(1112);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'A') ADVANCE(1037);
      if (lookahead == 'C') ADVANCE(1020);
      if (lookahead == 'P') ADVANCE(1044);
      if (lookahead == 'R') ADVANCE(910);
      if (lookahead == 'S') ADVANCE(1111);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'A') ADVANCE(1038);
      if (lookahead == 'O') ADVANCE(851);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'A') ADVANCE(1040);
      if (lookahead == 'O') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'C') ADVANCE(850);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'D') ADVANCE(961);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'L') ADVANCE(703);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'L') ADVANCE(860);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'P') ADVANCE(861);
      if (lookahead == 'S') ADVANCE(1019);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'P') ADVANCE(1018);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'P') ADVANCE(1039);
      if (lookahead == 'R') ADVANCE(907);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'P') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'R') ADVANCE(842);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'R') ADVANCE(934);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'S') ADVANCE(705);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'S') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'S') ADVANCE(737);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'T') ADVANCE(859);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'U') ADVANCE(1035);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'W') ADVANCE(963);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(987);
      if (lookahead == 'o') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1112);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(872);
      if (lookahead == 'r') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1112);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1112);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1112);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1112);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(1079);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1112);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(1032);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1112);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(1036);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1112);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1112);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1112);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1112);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(1042);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1112);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(1067);
      if (lookahead == 'r') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(974);
      if (lookahead == 't') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(1008);
      if (lookahead == 'l') ADVANCE(914);
      if (lookahead == 'm') ADVANCE(1006);
      if (lookahead == 'q') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(1085);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(906);
      if (lookahead == 's') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(935);
      if (lookahead == 'o') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1026);
      if (lookahead == 'o') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1024);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1061);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1062);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1063);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(956);
      if (lookahead == 'r') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'g') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'g') ADVANCE(854);
      if (lookahead == 'i') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'g') ADVANCE(943);
      if (lookahead == 'm') ADVANCE(988);
      if (lookahead == 'p') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'g') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'g') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(1064);
      if (lookahead == 'o') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'k') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(1092);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(951);
      if (lookahead == 'p') ADVANCE(1012);
      if (lookahead == 'x') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(893);
      if (lookahead == 'r') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(1093);
      if (lookahead == 'u') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'q') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'q') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'q') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'q') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'q') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(1082);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(1075);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(1089);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'y') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'y') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'y') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1112);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_string_content);
      ADVANCE_MAP(
        '\n', 648,
        '\r', 2,
        '#', 661,
        '%', 824,
        'A', 1388,
        'B', 1389,
        'C', 1301,
        'D', 1253,
        'E', 1292,
        'G', 1331,
        'L', 1258,
        'M', 1302,
        'N', 1153,
        'O', 1165,
        'P', 1154,
        'R', 1199,
        'S', 1305,
        'U', 1145,
        'V', 1137,
      );
      if (lookahead == '\\') SKIP(615);
      if (lookahead == 'e') ADVANCE(1276);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1114);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_string_content);
      ADVANCE_MAP(
        '\n', 651,
        '\r', 7,
        '#', 661,
        '%', 825,
        'A', 1388,
        'B', 1389,
        'C', 1301,
        'D', 1253,
        'E', 1292,
        'G', 1331,
        'L', 1258,
        'M', 1302,
        'N', 1153,
        'O', 1165,
        'P', 1154,
        'R', 1199,
        'S', 1305,
        'U', 1145,
        'V', 1137,
      );
      if (lookahead == '\\') SKIP(616);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_string_content);
      ADVANCE_MAP(
        '\n', 652,
        '\r', 8,
        '#', 661,
        '%', 829,
        '-', 1133,
        '0', 817,
        'A', 1388,
        'B', 1389,
        'C', 1301,
        'D', 1253,
        'E', 1292,
        'G', 1331,
        'L', 1258,
        'M', 1302,
        'N', 1153,
        'O', 1165,
        'P', 1154,
        'R', 1199,
        'S', 1305,
        'U', 1145,
        'V', 1137,
      );
      if (lookahead == '\\') SKIP(617);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1116);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(653);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '-') ADVANCE(1133);
      if (lookahead == '0') ADVANCE(817);
      if (lookahead == '\\') SKIP(620);
      if (lookahead == 'e') ADVANCE(1276);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1117);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(654);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '-') ADVANCE(1133);
      if (lookahead == '0') ADVANCE(817);
      if (lookahead == '\\') SKIP(622);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1118);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(655);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '-') ADVANCE(1133);
      if (lookahead == '0') ADVANCE(817);
      if (lookahead == '\\') SKIP(634);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1119);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(656);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '\\') SKIP(625);
      if (lookahead == 'e') ADVANCE(1276);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '-') ADVANCE(1232);
      if (lookahead == '\\') SKIP(626);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(658);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '\\') SKIP(627);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(659);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '\\') SKIP(632);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(826);
      if (lookahead == '\\') SKIP(618);
      if (lookahead == 'e') ADVANCE(1276);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '\\') SKIP(631);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(28);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '(') ADVANCE(722);
      if (lookahead == '-') ADVANCE(1133);
      if (lookahead == '0') ADVANCE(817);
      if (lookahead == '\\') SKIP(621);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1126);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '-') ADVANCE(1133);
      if (lookahead == '0') ADVANCE(817);
      if (lookahead == '\\') SKIP(623);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1127);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '\\') SKIP(633);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(31);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(827);
      if (lookahead == '\\') SKIP(619);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(32);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') SKIP(635);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1130);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '.') ADVANCE(1410);
      if (lookahead == '_') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '_' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '.') ADVANCE(1410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '0') ADVANCE(819);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(1336);
      if (lookahead == 'C') ADVANCE(1318);
      if (lookahead == 'P') ADVANCE(1342);
      if (lookahead == 'R') ADVANCE(1207);
      if (lookahead == 'S') ADVANCE(1409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(1338);
      if (lookahead == 'O') ADVANCE(1148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(1339);
      if (lookahead == 'O') ADVANCE(1149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'C') ADVANCE(1147);
      if (lookahead == 'e') ADVANCE(1294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'D') ADVANCE(1259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'L') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'L') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(1158);
      if (lookahead == 'S') ADVANCE(1317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(1316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(1337);
      if (lookahead == 'R') ADVANCE(1205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(1164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'R') ADVANCE(1139);
      if (lookahead == 'r') ADVANCE(1273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'R') ADVANCE(1231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'T') ADVANCE(1156);
      if (lookahead == 'r') ADVANCE(1255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'U') ADVANCE(1333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'W') ADVANCE(1261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1285);
      if (lookahead == 'o') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1413);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1169);
      if (lookahead == 'r') ADVANCE(1200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1413);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1413);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1413);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1413);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1413);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1413);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1413);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1413);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1413);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1413);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1413);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'b') ADVANCE(1365);
      if (lookahead == 'r') ADVANCE(1188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'b') ADVANCE(1218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'b') ADVANCE(1394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1272);
      if (lookahead == 't') ADVANCE(1172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1306);
      if (lookahead == 'l') ADVANCE(1211);
      if (lookahead == 'm') ADVANCE(1304);
      if (lookahead == 'q') ADVANCE(1395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1203);
      if (lookahead == 's') ADVANCE(1266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1233);
      if (lookahead == 'o') ADVANCE(1402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1324);
      if (lookahead == 'o') ADVANCE(1313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
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
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
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
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1254);
      if (lookahead == 'r') ADVANCE(1201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(1151);
      if (lookahead == 'i') ADVANCE(1277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(1241);
      if (lookahead == 'm') ADVANCE(1286);
      if (lookahead == 'p') ADVANCE(1320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(1219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(1146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1362);
      if (lookahead == 'o') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'k') ADVANCE(1161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1249);
      if (lookahead == 'p') ADVANCE(1310);
      if (lookahead == 'x') ADVANCE(1173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1190);
      if (lookahead == 'r') ADVANCE(1364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1391);
      if (lookahead == 'u') ADVANCE(1240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
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
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'p') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'p') ADVANCE(1280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(1396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(1399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(1265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(1202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(1227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'x') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'x') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'y') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'y') ADVANCE(1140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'y') ADVANCE(1370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_string_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_string_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_string_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(1413);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1413);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1414);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_PERCENT_LPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 637},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 639},
  [5] = {.lex_state = 639},
  [6] = {.lex_state = 637},
  [7] = {.lex_state = 637},
  [8] = {.lex_state = 639},
  [9] = {.lex_state = 639},
  [10] = {.lex_state = 639},
  [11] = {.lex_state = 639},
  [12] = {.lex_state = 639},
  [13] = {.lex_state = 639},
  [14] = {.lex_state = 639},
  [15] = {.lex_state = 639},
  [16] = {.lex_state = 639},
  [17] = {.lex_state = 639},
  [18] = {.lex_state = 639},
  [19] = {.lex_state = 640},
  [20] = {.lex_state = 638},
  [21] = {.lex_state = 638},
  [22] = {.lex_state = 638},
  [23] = {.lex_state = 638},
  [24] = {.lex_state = 638},
  [25] = {.lex_state = 638},
  [26] = {.lex_state = 637},
  [27] = {.lex_state = 637},
  [28] = {.lex_state = 637},
  [29] = {.lex_state = 637},
  [30] = {.lex_state = 637},
  [31] = {.lex_state = 640},
  [32] = {.lex_state = 637},
  [33] = {.lex_state = 637},
  [34] = {.lex_state = 638},
  [35] = {.lex_state = 638},
  [36] = {.lex_state = 638},
  [37] = {.lex_state = 638},
  [38] = {.lex_state = 638},
  [39] = {.lex_state = 638},
  [40] = {.lex_state = 638},
  [41] = {.lex_state = 637},
  [42] = {.lex_state = 637},
  [43] = {.lex_state = 637},
  [44] = {.lex_state = 637},
  [45] = {.lex_state = 637},
  [46] = {.lex_state = 637},
  [47] = {.lex_state = 637},
  [48] = {.lex_state = 637},
  [49] = {.lex_state = 637},
  [50] = {.lex_state = 637},
  [51] = {.lex_state = 637},
  [52] = {.lex_state = 637},
  [53] = {.lex_state = 637},
  [54] = {.lex_state = 637},
  [55] = {.lex_state = 637},
  [56] = {.lex_state = 637},
  [57] = {.lex_state = 637},
  [58] = {.lex_state = 637},
  [59] = {.lex_state = 637},
  [60] = {.lex_state = 637},
  [61] = {.lex_state = 637},
  [62] = {.lex_state = 637},
  [63] = {.lex_state = 637},
  [64] = {.lex_state = 637},
  [65] = {.lex_state = 637},
  [66] = {.lex_state = 637},
  [67] = {.lex_state = 637},
  [68] = {.lex_state = 637},
  [69] = {.lex_state = 637},
  [70] = {.lex_state = 637},
  [71] = {.lex_state = 637},
  [72] = {.lex_state = 637},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 27},
  [79] = {.lex_state = 27},
  [80] = {.lex_state = 27},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 27},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 32},
  [86] = {.lex_state = 32},
  [87] = {.lex_state = 32},
  [88] = {.lex_state = 32},
  [89] = {.lex_state = 32},
  [90] = {.lex_state = 32},
  [91] = {.lex_state = 32},
  [92] = {.lex_state = 27},
  [93] = {.lex_state = 28},
  [94] = {.lex_state = 28},
  [95] = {.lex_state = 27},
  [96] = {.lex_state = 27},
  [97] = {.lex_state = 28},
  [98] = {.lex_state = 28},
  [99] = {.lex_state = 27},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 32},
  [102] = {.lex_state = 32},
  [103] = {.lex_state = 32},
  [104] = {.lex_state = 32},
  [105] = {.lex_state = 34},
  [106] = {.lex_state = 29},
  [107] = {.lex_state = 29},
  [108] = {.lex_state = 34},
  [109] = {.lex_state = 34},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 34},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 34},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 34},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 28},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 22},
  [126] = {.lex_state = 30},
  [127] = {.lex_state = 22},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 30},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 30},
  [132] = {.lex_state = 30},
  [133] = {.lex_state = 22},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 35},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 35},
  [143] = {.lex_state = 35},
  [144] = {.lex_state = 35},
  [145] = {.lex_state = 31},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 31},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 31},
  [150] = {.lex_state = 31},
  [151] = {.lex_state = 31},
  [152] = {.lex_state = 31},
  [153] = {.lex_state = 35},
  [154] = {.lex_state = 31},
  [155] = {.lex_state = 31},
  [156] = {.lex_state = 35},
  [157] = {.lex_state = 31},
  [158] = {.lex_state = 31},
  [159] = {.lex_state = 31},
  [160] = {.lex_state = 31},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 31},
  [163] = {.lex_state = 31},
  [164] = {.lex_state = 31},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 31},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 31},
  [169] = {.lex_state = 31},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 31},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 31},
  [175] = {.lex_state = 31},
  [176] = {.lex_state = 31},
  [177] = {.lex_state = 31},
  [178] = {.lex_state = 34},
  [179] = {.lex_state = 34},
  [180] = {.lex_state = 31},
  [181] = {.lex_state = 34},
  [182] = {.lex_state = 34},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 31},
  [185] = {.lex_state = 34},
  [186] = {.lex_state = 34},
  [187] = {.lex_state = 34},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 11},
  [206] = {.lex_state = 11},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 11},
  [213] = {.lex_state = 11},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 11},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 15},
  [218] = {.lex_state = 22},
  [219] = {.lex_state = 30},
  [220] = {.lex_state = 13},
  [221] = {.lex_state = 15},
  [222] = {.lex_state = 15},
  [223] = {.lex_state = 13},
  [224] = {.lex_state = 15},
  [225] = {.lex_state = 13},
  [226] = {.lex_state = 15},
  [227] = {.lex_state = 13},
  [228] = {.lex_state = 13},
  [229] = {.lex_state = 13},
  [230] = {.lex_state = 15},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 35},
  [234] = {.lex_state = 14},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 14},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 35},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 35},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 14},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 35},
  [266] = {.lex_state = 35},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 35},
  [270] = {.lex_state = 35},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 14},
  [273] = {.lex_state = 14},
  [274] = {.lex_state = 14},
  [275] = {.lex_state = 31},
  [276] = {.lex_state = 31},
  [277] = {.lex_state = 6},
  [278] = {.lex_state = 6},
  [279] = {.lex_state = 6},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 22},
  [282] = {.lex_state = 22},
  [283] = {.lex_state = 22},
  [284] = {.lex_state = 24},
  [285] = {.lex_state = 24},
  [286] = {.lex_state = 24},
  [287] = {.lex_state = 24},
  [288] = {.lex_state = 24},
  [289] = {.lex_state = 24},
  [290] = {.lex_state = 24},
  [291] = {.lex_state = 24},
  [292] = {.lex_state = 24},
  [293] = {.lex_state = 6},
  [294] = {.lex_state = 24},
  [295] = {.lex_state = 24},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 24},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 6},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 36},
  [318] = {.lex_state = 6},
  [319] = {.lex_state = 36},
  [320] = {.lex_state = 22},
  [321] = {.lex_state = 6},
  [322] = {.lex_state = 22},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 6},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 36},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 6},
  [330] = {.lex_state = 637},
  [331] = {.lex_state = 637},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 637},
  [334] = {.lex_state = 637},
  [335] = {.lex_state = 33},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 637},
  [338] = {.lex_state = 637},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 637},
  [342] = {.lex_state = 670},
  [343] = {.lex_state = 637},
  [344] = {.lex_state = 33},
  [345] = {.lex_state = 24},
  [346] = {.lex_state = 33},
  [347] = {.lex_state = 637},
  [348] = {.lex_state = 637},
  [349] = {.lex_state = 24},
  [350] = {.lex_state = 24},
  [351] = {.lex_state = 22},
  [352] = {.lex_state = 637},
  [353] = {.lex_state = 637},
  [354] = {.lex_state = 637},
  [355] = {.lex_state = 637},
  [356] = {.lex_state = 637},
  [357] = {.lex_state = 637},
  [358] = {.lex_state = 637},
  [359] = {.lex_state = 637},
  [360] = {.lex_state = 24},
  [361] = {.lex_state = 24},
  [362] = {.lex_state = 637},
  [363] = {.lex_state = 637},
  [364] = {.lex_state = 637},
  [365] = {.lex_state = 637},
  [366] = {.lex_state = 637},
  [367] = {.lex_state = 24},
  [368] = {.lex_state = 637},
  [369] = {.lex_state = 637},
  [370] = {.lex_state = 637},
  [371] = {.lex_state = 24},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 637},
  [374] = {.lex_state = 637},
  [375] = {.lex_state = 637},
  [376] = {.lex_state = 637},
  [377] = {.lex_state = 637},
  [378] = {.lex_state = 637},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 637},
  [381] = {.lex_state = 637},
  [382] = {.lex_state = 637},
  [383] = {.lex_state = 637},
  [384] = {.lex_state = 637},
  [385] = {.lex_state = 637},
  [386] = {.lex_state = 637},
  [387] = {.lex_state = 637},
  [388] = {.lex_state = 637},
  [389] = {.lex_state = 637},
  [390] = {.lex_state = 24},
  [391] = {.lex_state = 24},
  [392] = {.lex_state = 637},
  [393] = {.lex_state = 637},
  [394] = {.lex_state = 637},
  [395] = {.lex_state = 637},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 637},
  [398] = {.lex_state = 637},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 637},
  [401] = {.lex_state = 24},
  [402] = {.lex_state = 24},
  [403] = {.lex_state = 637},
  [404] = {.lex_state = 637},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 637},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 637},
  [409] = {.lex_state = 24},
  [410] = {.lex_state = 24},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 637},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 24},
  [416] = {.lex_state = 24},
  [417] = {.lex_state = 24},
  [418] = {.lex_state = 637},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 24},
  [422] = {.lex_state = 24},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 24},
  [428] = {.lex_state = 24},
  [429] = {.lex_state = 637},
  [430] = {.lex_state = 637},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 24},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 637},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 24},
  [439] = {.lex_state = 637},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 24},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 637},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 24},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 670},
  [451] = {.lex_state = 24},
  [452] = {.lex_state = 637},
  [453] = {.lex_state = 637},
  [454] = {.lex_state = 24},
  [455] = {.lex_state = 637},
  [456] = {.lex_state = 637},
  [457] = {.lex_state = 637},
  [458] = {.lex_state = 26},
  [459] = {.lex_state = 33},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 33},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 24},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 26},
  [466] = {.lex_state = 24},
  [467] = {.lex_state = 24},
  [468] = {.lex_state = 24},
  [469] = {.lex_state = 33},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 637},
  [472] = {.lex_state = 637},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 637},
  [477] = {.lex_state = 24},
  [478] = {.lex_state = 637},
  [479] = {.lex_state = 637},
  [480] = {.lex_state = 637},
  [481] = {.lex_state = 637},
  [482] = {.lex_state = 24},
  [483] = {.lex_state = 637},
  [484] = {.lex_state = 637},
  [485] = {.lex_state = 33},
  [486] = {.lex_state = 637},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 33},
  [489] = {.lex_state = 24},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 24},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 637},
  [494] = {.lex_state = 33},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 33},
  [497] = {.lex_state = 24},
  [498] = {.lex_state = 26},
  [499] = {.lex_state = 24},
  [500] = {.lex_state = 33},
  [501] = {.lex_state = 33},
  [502] = {.lex_state = 26},
  [503] = {.lex_state = 24},
  [504] = {.lex_state = 33},
  [505] = {.lex_state = 33},
  [506] = {.lex_state = 24},
  [507] = {.lex_state = 24},
  [508] = {.lex_state = 33},
  [509] = {.lex_state = 33},
  [510] = {.lex_state = 24},
  [511] = {.lex_state = 24},
  [512] = {.lex_state = 33},
  [513] = {.lex_state = 33},
  [514] = {.lex_state = 637},
  [515] = {.lex_state = 24},
  [516] = {.lex_state = 33},
  [517] = {.lex_state = 33},
  [518] = {.lex_state = 637},
  [519] = {.lex_state = 24},
  [520] = {.lex_state = 33},
  [521] = {.lex_state = 33},
  [522] = {.lex_state = 637},
  [523] = {.lex_state = 24},
  [524] = {.lex_state = 33},
  [525] = {.lex_state = 33},
  [526] = {.lex_state = 24},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 637},
  [529] = {.lex_state = 24},
  [530] = {.lex_state = 26},
  [531] = {.lex_state = 26},
  [532] = {.lex_state = 26},
  [533] = {.lex_state = 670},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 26},
  [538] = {.lex_state = 26},
  [539] = {.lex_state = 26},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 637},
  [544] = {.lex_state = 637},
  [545] = {.lex_state = 637},
  [546] = {.lex_state = 24},
  [547] = {.lex_state = 24},
  [548] = {.lex_state = 24},
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
    [sym_spec] = STATE(462),
    [sym__statements] = STATE(7),
    [sym_if_statement] = STATE(7),
    [sym_preamble] = STATE(7),
    [sym_tags] = STATE(41),
    [sym_tag] = STATE(460),
    [sym_dependency_tag] = STATE(460),
    [sym_description] = STATE(7),
    [sym_subsection] = STATE(7),
    [sym_subsection_package] = STATE(296),
    [sym_prep_scriptlet] = STATE(7),
    [sym_generate_buildrequires] = STATE(7),
    [sym_conf_scriptlet] = STATE(7),
    [sym_build_scriptlet] = STATE(7),
    [sym_install_scriptlet] = STATE(7),
    [sym_check_scriptlet] = STATE(7),
    [sym_clean_scriptlet] = STATE(7),
    [sym__runtime_scriptlet] = STATE(7),
    [sym__triggers] = STATE(7),
    [sym__file_triggers] = STATE(7),
    [sym_files] = STATE(7),
    [sym_changelog] = STATE(7),
    [sym_macro_definition] = STATE(7),
    [sym_macro_undefinition] = STATE(7),
    [sym_macro_invocation] = STATE(7),
    [sym__macro_expansion] = STATE(7),
    [sym_simple_expansion] = STATE(19),
    [sym_full_expansion] = STATE(7),
    [sym_shell_expansion] = STATE(7),
    [aux_sym_spec_repeat1] = STATE(7),
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
    [sym_if_statement] = STATE(199),
    [sym_elif_clause] = STATE(255),
    [sym_else_clause] = STATE(464),
    [sym_preamble] = STATE(199),
    [sym_tags] = STATE(75),
    [sym_tag] = STATE(527),
    [sym_dependency_tag] = STATE(527),
    [sym_description] = STATE(199),
    [sym_subsection] = STATE(199),
    [sym_subsection_package] = STATE(314),
    [sym_prep_scriptlet] = STATE(199),
    [sym_generate_buildrequires] = STATE(199),
    [sym_conf_scriptlet] = STATE(199),
    [sym_build_scriptlet] = STATE(199),
    [sym_install_scriptlet] = STATE(199),
    [sym_check_scriptlet] = STATE(199),
    [sym_clean_scriptlet] = STATE(199),
    [sym__runtime_scriptlet] = STATE(199),
    [sym__triggers] = STATE(199),
    [sym__file_triggers] = STATE(199),
    [sym_files] = STATE(199),
    [sym_defattr] = STATE(199),
    [sym_file] = STATE(199),
    [sym_attr] = STATE(97),
    [sym_verify] = STATE(151),
    [sym_changelog] = STATE(199),
    [sym_macro_definition] = STATE(199),
    [sym_macro_undefinition] = STATE(199),
    [sym_macro_invocation] = STATE(199),
    [sym_string] = STATE(365),
    [sym__macro_expansion] = STATE(130),
    [sym_simple_expansion] = STATE(100),
    [sym_full_expansion] = STATE(130),
    [sym_shell_expansion] = STATE(130),
    [aux_sym_if_statement_repeat1] = STATE(200),
    [aux_sym_string_repeat1] = STATE(165),
    [aux_sym__simple_statements_token1] = ACTIONS(53),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(55),
    [anon_sym_PERCENTifarch] = ACTIONS(55),
    [anon_sym_PERCENTifos] = ACTIONS(55),
    [anon_sym_PERCENTifnarch] = ACTIONS(55),
    [anon_sym_PERCENTifnos] = ACTIONS(55),
    [anon_sym_PERCENTendif] = ACTIONS(57),
    [anon_sym_PERCENTelif] = ACTIONS(59),
    [anon_sym_elifarch] = ACTIONS(59),
    [anon_sym_PERCENTelifos] = ACTIONS(59),
    [anon_sym_PERCENTelse] = ACTIONS(61),
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
    [anon_sym_PERCENTdescription] = ACTIONS(63),
    [anon_sym_PERCENTpackage] = ACTIONS(21),
    [anon_sym_PERCENTprep] = ACTIONS(65),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(67),
    [anon_sym_PERCENTconf] = ACTIONS(69),
    [anon_sym_PERCENTbuild] = ACTIONS(71),
    [anon_sym_PERCENTinstall] = ACTIONS(73),
    [anon_sym_PERCENTcheck] = ACTIONS(75),
    [anon_sym_PERCENTclean] = ACTIONS(77),
    [anon_sym_PERCENTpre] = ACTIONS(53),
    [anon_sym_PERCENTpost] = ACTIONS(53),
    [anon_sym_PERCENTpreun] = ACTIONS(53),
    [anon_sym_PERCENTpostun] = ACTIONS(53),
    [anon_sym_PERCENTpretrans] = ACTIONS(53),
    [anon_sym_PERCENTposttrans] = ACTIONS(53),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(53),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(53),
    [anon_sym_PERCENTverify] = ACTIONS(79),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(53),
    [anon_sym_PERCENTtriggerin] = ACTIONS(53),
    [anon_sym_PERCENTtriggerun] = ACTIONS(53),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(53),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(53),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(53),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(53),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(53),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(53),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(53),
    [anon_sym_PERCENTfiles] = ACTIONS(81),
    [anon_sym_PERCENTdefattr] = ACTIONS(83),
    [anon_sym_PERCENTartifact] = ACTIONS(85),
    [anon_sym_PERCENTconfig] = ACTIONS(85),
    [anon_sym_PERCENTdir] = ACTIONS(85),
    [anon_sym_PERCENTdoc] = ACTIONS(85),
    [anon_sym_PERCENTdocdir] = ACTIONS(85),
    [anon_sym_PERCENTghost] = ACTIONS(85),
    [anon_sym_PERCENTlicense] = ACTIONS(85),
    [anon_sym_PERCENTmissingok] = ACTIONS(85),
    [anon_sym_PERCENTreadme] = ACTIONS(85),
    [anon_sym_PERCENTattr] = ACTIONS(87),
    [anon_sym_PERCENTchangelog] = ACTIONS(89),
    [anon_sym_PERCENTglobal] = ACTIONS(91),
    [anon_sym_PERCENTdefine] = ACTIONS(91),
    [anon_sym_PERCENTundefine] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(95),
    [sym_string_content] = ACTIONS(97),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(99),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(101),
  },
  [3] = {
    [sym_if_statement] = STATE(195),
    [sym_elif_clause] = STATE(255),
    [sym_else_clause] = STATE(340),
    [sym_preamble] = STATE(195),
    [sym_tags] = STATE(75),
    [sym_tag] = STATE(527),
    [sym_dependency_tag] = STATE(527),
    [sym_description] = STATE(195),
    [sym_subsection] = STATE(195),
    [sym_subsection_package] = STATE(314),
    [sym_prep_scriptlet] = STATE(195),
    [sym_generate_buildrequires] = STATE(195),
    [sym_conf_scriptlet] = STATE(195),
    [sym_build_scriptlet] = STATE(195),
    [sym_install_scriptlet] = STATE(195),
    [sym_check_scriptlet] = STATE(195),
    [sym_clean_scriptlet] = STATE(195),
    [sym__runtime_scriptlet] = STATE(195),
    [sym__triggers] = STATE(195),
    [sym__file_triggers] = STATE(195),
    [sym_files] = STATE(195),
    [sym_defattr] = STATE(195),
    [sym_file] = STATE(195),
    [sym_attr] = STATE(97),
    [sym_verify] = STATE(151),
    [sym_changelog] = STATE(195),
    [sym_macro_definition] = STATE(195),
    [sym_macro_undefinition] = STATE(195),
    [sym_macro_invocation] = STATE(195),
    [sym_string] = STATE(365),
    [sym__macro_expansion] = STATE(128),
    [sym_simple_expansion] = STATE(100),
    [sym_full_expansion] = STATE(128),
    [sym_shell_expansion] = STATE(128),
    [aux_sym_if_statement_repeat1] = STATE(190),
    [aux_sym_string_repeat1] = STATE(165),
    [aux_sym__simple_statements_token1] = ACTIONS(103),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(55),
    [anon_sym_PERCENTifarch] = ACTIONS(55),
    [anon_sym_PERCENTifos] = ACTIONS(55),
    [anon_sym_PERCENTifnarch] = ACTIONS(55),
    [anon_sym_PERCENTifnos] = ACTIONS(55),
    [anon_sym_PERCENTendif] = ACTIONS(105),
    [anon_sym_PERCENTelif] = ACTIONS(59),
    [anon_sym_elifarch] = ACTIONS(59),
    [anon_sym_PERCENTelifos] = ACTIONS(59),
    [anon_sym_PERCENTelse] = ACTIONS(61),
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
    [anon_sym_PERCENTdescription] = ACTIONS(63),
    [anon_sym_PERCENTpackage] = ACTIONS(21),
    [anon_sym_PERCENTprep] = ACTIONS(65),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(67),
    [anon_sym_PERCENTconf] = ACTIONS(69),
    [anon_sym_PERCENTbuild] = ACTIONS(71),
    [anon_sym_PERCENTinstall] = ACTIONS(73),
    [anon_sym_PERCENTcheck] = ACTIONS(75),
    [anon_sym_PERCENTclean] = ACTIONS(77),
    [anon_sym_PERCENTpre] = ACTIONS(103),
    [anon_sym_PERCENTpost] = ACTIONS(103),
    [anon_sym_PERCENTpreun] = ACTIONS(103),
    [anon_sym_PERCENTpostun] = ACTIONS(103),
    [anon_sym_PERCENTpretrans] = ACTIONS(103),
    [anon_sym_PERCENTposttrans] = ACTIONS(103),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(103),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(103),
    [anon_sym_PERCENTverify] = ACTIONS(79),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(103),
    [anon_sym_PERCENTtriggerin] = ACTIONS(103),
    [anon_sym_PERCENTtriggerun] = ACTIONS(103),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(103),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(103),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(103),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(103),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(103),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(103),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(103),
    [anon_sym_PERCENTfiles] = ACTIONS(81),
    [anon_sym_PERCENTdefattr] = ACTIONS(83),
    [anon_sym_PERCENTartifact] = ACTIONS(85),
    [anon_sym_PERCENTconfig] = ACTIONS(85),
    [anon_sym_PERCENTdir] = ACTIONS(85),
    [anon_sym_PERCENTdoc] = ACTIONS(85),
    [anon_sym_PERCENTdocdir] = ACTIONS(85),
    [anon_sym_PERCENTghost] = ACTIONS(85),
    [anon_sym_PERCENTlicense] = ACTIONS(85),
    [anon_sym_PERCENTmissingok] = ACTIONS(85),
    [anon_sym_PERCENTreadme] = ACTIONS(85),
    [anon_sym_PERCENTattr] = ACTIONS(87),
    [anon_sym_PERCENTchangelog] = ACTIONS(89),
    [anon_sym_PERCENTglobal] = ACTIONS(91),
    [anon_sym_PERCENTdefine] = ACTIONS(91),
    [anon_sym_PERCENTundefine] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(95),
    [sym_string_content] = ACTIONS(97),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(99),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(101),
  },
  [4] = {
    [sym_if_statement] = STATE(444),
    [sym_preamble] = STATE(444),
    [sym_tags] = STATE(75),
    [sym_tag] = STATE(527),
    [sym_dependency_tag] = STATE(527),
    [sym_description] = STATE(444),
    [sym_subsection] = STATE(444),
    [sym_subsection_package] = STATE(314),
    [sym_prep_scriptlet] = STATE(444),
    [sym_generate_buildrequires] = STATE(444),
    [sym_conf_scriptlet] = STATE(444),
    [sym_build_scriptlet] = STATE(444),
    [sym_install_scriptlet] = STATE(444),
    [sym_check_scriptlet] = STATE(444),
    [sym_clean_scriptlet] = STATE(444),
    [sym__runtime_scriptlet] = STATE(444),
    [sym__triggers] = STATE(444),
    [sym__file_triggers] = STATE(444),
    [sym_files] = STATE(444),
    [sym_defattr] = STATE(444),
    [sym_file] = STATE(444),
    [sym_attr] = STATE(97),
    [sym_verify] = STATE(151),
    [sym_changelog] = STATE(444),
    [sym_macro_definition] = STATE(444),
    [sym_macro_undefinition] = STATE(444),
    [sym_macro_invocation] = STATE(444),
    [sym_string] = STATE(365),
    [sym__macro_expansion] = STATE(224),
    [sym_simple_expansion] = STATE(110),
    [sym_full_expansion] = STATE(224),
    [sym_shell_expansion] = STATE(224),
    [aux_sym_string_repeat1] = STATE(165),
    [aux_sym__simple_statements_token1] = ACTIONS(107),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(55),
    [anon_sym_PERCENTifarch] = ACTIONS(55),
    [anon_sym_PERCENTifos] = ACTIONS(55),
    [anon_sym_PERCENTifnarch] = ACTIONS(55),
    [anon_sym_PERCENTifnos] = ACTIONS(55),
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
    [anon_sym_PERCENTdescription] = ACTIONS(109),
    [anon_sym_PERCENTpackage] = ACTIONS(21),
    [anon_sym_PERCENTprep] = ACTIONS(111),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(113),
    [anon_sym_PERCENTconf] = ACTIONS(69),
    [anon_sym_PERCENTbuild] = ACTIONS(71),
    [anon_sym_PERCENTinstall] = ACTIONS(73),
    [anon_sym_PERCENTcheck] = ACTIONS(75),
    [anon_sym_PERCENTclean] = ACTIONS(77),
    [anon_sym_PERCENTpre] = ACTIONS(107),
    [anon_sym_PERCENTpost] = ACTIONS(107),
    [anon_sym_PERCENTpreun] = ACTIONS(107),
    [anon_sym_PERCENTpostun] = ACTIONS(107),
    [anon_sym_PERCENTpretrans] = ACTIONS(107),
    [anon_sym_PERCENTposttrans] = ACTIONS(107),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(107),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(107),
    [anon_sym_PERCENTverify] = ACTIONS(79),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(107),
    [anon_sym_PERCENTtriggerin] = ACTIONS(107),
    [anon_sym_PERCENTtriggerun] = ACTIONS(107),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(107),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(107),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(107),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(107),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(107),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(107),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(107),
    [anon_sym_PERCENTfiles] = ACTIONS(115),
    [anon_sym_PERCENTdefattr] = ACTIONS(83),
    [anon_sym_PERCENTartifact] = ACTIONS(85),
    [anon_sym_PERCENTconfig] = ACTIONS(85),
    [anon_sym_PERCENTdir] = ACTIONS(85),
    [anon_sym_PERCENTdoc] = ACTIONS(85),
    [anon_sym_PERCENTdocdir] = ACTIONS(85),
    [anon_sym_PERCENTghost] = ACTIONS(85),
    [anon_sym_PERCENTlicense] = ACTIONS(85),
    [anon_sym_PERCENTmissingok] = ACTIONS(85),
    [anon_sym_PERCENTreadme] = ACTIONS(85),
    [anon_sym_PERCENTattr] = ACTIONS(87),
    [anon_sym_PERCENTchangelog] = ACTIONS(89),
    [anon_sym_PERCENTglobal] = ACTIONS(91),
    [anon_sym_PERCENTdefine] = ACTIONS(91),
    [anon_sym_PERCENTundefine] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(117),
    [sym_string_content] = ACTIONS(97),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(119),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(121),
  },
  [5] = {
    [sym_if_statement] = STATE(271),
    [sym_preamble] = STATE(271),
    [sym_tags] = STATE(75),
    [sym_tag] = STATE(527),
    [sym_dependency_tag] = STATE(527),
    [sym_description] = STATE(271),
    [sym_subsection] = STATE(271),
    [sym_subsection_package] = STATE(314),
    [sym_prep_scriptlet] = STATE(271),
    [sym_generate_buildrequires] = STATE(271),
    [sym_conf_scriptlet] = STATE(271),
    [sym_build_scriptlet] = STATE(271),
    [sym_install_scriptlet] = STATE(271),
    [sym_check_scriptlet] = STATE(271),
    [sym_clean_scriptlet] = STATE(271),
    [sym__runtime_scriptlet] = STATE(271),
    [sym__triggers] = STATE(271),
    [sym__file_triggers] = STATE(271),
    [sym_files] = STATE(271),
    [sym_defattr] = STATE(271),
    [sym_file] = STATE(271),
    [sym_attr] = STATE(97),
    [sym_verify] = STATE(151),
    [sym_changelog] = STATE(271),
    [sym_macro_definition] = STATE(271),
    [sym_macro_undefinition] = STATE(271),
    [sym_macro_invocation] = STATE(271),
    [sym_string] = STATE(365),
    [sym__macro_expansion] = STATE(161),
    [sym_simple_expansion] = STATE(100),
    [sym_full_expansion] = STATE(161),
    [sym_shell_expansion] = STATE(161),
    [aux_sym_string_repeat1] = STATE(165),
    [aux_sym__simple_statements_token1] = ACTIONS(123),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(55),
    [anon_sym_PERCENTifarch] = ACTIONS(55),
    [anon_sym_PERCENTifos] = ACTIONS(55),
    [anon_sym_PERCENTifnarch] = ACTIONS(55),
    [anon_sym_PERCENTifnos] = ACTIONS(55),
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
    [anon_sym_PERCENTdescription] = ACTIONS(63),
    [anon_sym_PERCENTpackage] = ACTIONS(21),
    [anon_sym_PERCENTprep] = ACTIONS(65),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(67),
    [anon_sym_PERCENTconf] = ACTIONS(69),
    [anon_sym_PERCENTbuild] = ACTIONS(71),
    [anon_sym_PERCENTinstall] = ACTIONS(73),
    [anon_sym_PERCENTcheck] = ACTIONS(75),
    [anon_sym_PERCENTclean] = ACTIONS(77),
    [anon_sym_PERCENTpre] = ACTIONS(123),
    [anon_sym_PERCENTpost] = ACTIONS(123),
    [anon_sym_PERCENTpreun] = ACTIONS(123),
    [anon_sym_PERCENTpostun] = ACTIONS(123),
    [anon_sym_PERCENTpretrans] = ACTIONS(123),
    [anon_sym_PERCENTposttrans] = ACTIONS(123),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(123),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(123),
    [anon_sym_PERCENTverify] = ACTIONS(79),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(123),
    [anon_sym_PERCENTtriggerin] = ACTIONS(123),
    [anon_sym_PERCENTtriggerun] = ACTIONS(123),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(123),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(123),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(123),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(123),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(123),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(123),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(123),
    [anon_sym_PERCENTfiles] = ACTIONS(81),
    [anon_sym_PERCENTdefattr] = ACTIONS(83),
    [anon_sym_PERCENTartifact] = ACTIONS(85),
    [anon_sym_PERCENTconfig] = ACTIONS(85),
    [anon_sym_PERCENTdir] = ACTIONS(85),
    [anon_sym_PERCENTdoc] = ACTIONS(85),
    [anon_sym_PERCENTdocdir] = ACTIONS(85),
    [anon_sym_PERCENTghost] = ACTIONS(85),
    [anon_sym_PERCENTlicense] = ACTIONS(85),
    [anon_sym_PERCENTmissingok] = ACTIONS(85),
    [anon_sym_PERCENTreadme] = ACTIONS(85),
    [anon_sym_PERCENTattr] = ACTIONS(87),
    [anon_sym_PERCENTchangelog] = ACTIONS(89),
    [anon_sym_PERCENTglobal] = ACTIONS(91),
    [anon_sym_PERCENTdefine] = ACTIONS(91),
    [anon_sym_PERCENTundefine] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(95),
    [sym_string_content] = ACTIONS(97),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(99),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(101),
  },
  [6] = {
    [sym__statements] = STATE(6),
    [sym_if_statement] = STATE(6),
    [sym_preamble] = STATE(6),
    [sym_tags] = STATE(41),
    [sym_tag] = STATE(460),
    [sym_dependency_tag] = STATE(460),
    [sym_description] = STATE(6),
    [sym_subsection] = STATE(6),
    [sym_subsection_package] = STATE(296),
    [sym_prep_scriptlet] = STATE(6),
    [sym_generate_buildrequires] = STATE(6),
    [sym_conf_scriptlet] = STATE(6),
    [sym_build_scriptlet] = STATE(6),
    [sym_install_scriptlet] = STATE(6),
    [sym_check_scriptlet] = STATE(6),
    [sym_clean_scriptlet] = STATE(6),
    [sym__runtime_scriptlet] = STATE(6),
    [sym__triggers] = STATE(6),
    [sym__file_triggers] = STATE(6),
    [sym_files] = STATE(6),
    [sym_changelog] = STATE(6),
    [sym_macro_definition] = STATE(6),
    [sym_macro_undefinition] = STATE(6),
    [sym_macro_invocation] = STATE(6),
    [sym__macro_expansion] = STATE(6),
    [sym_simple_expansion] = STATE(19),
    [sym_full_expansion] = STATE(6),
    [sym_shell_expansion] = STATE(6),
    [aux_sym_spec_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(125),
    [aux_sym__simple_statements_token1] = ACTIONS(127),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(130),
    [anon_sym_PERCENTifarch] = ACTIONS(130),
    [anon_sym_PERCENTifos] = ACTIONS(130),
    [anon_sym_PERCENTifnarch] = ACTIONS(130),
    [anon_sym_PERCENTifnos] = ACTIONS(130),
    [anon_sym_AutoProv] = ACTIONS(133),
    [anon_sym_AutoReq] = ACTIONS(133),
    [anon_sym_AutoReqProv] = ACTIONS(133),
    [anon_sym_BugUrl] = ACTIONS(133),
    [anon_sym_BuildRoot] = ACTIONS(133),
    [anon_sym_BuildSystem] = ACTIONS(133),
    [anon_sym_DistTag] = ACTIONS(133),
    [anon_sym_Distribution] = ACTIONS(133),
    [anon_sym_Epoch] = ACTIONS(133),
    [anon_sym_Group] = ACTIONS(133),
    [anon_sym_License] = ACTIONS(133),
    [anon_sym_ModularityLabel] = ACTIONS(133),
    [anon_sym_Name] = ACTIONS(133),
    [anon_sym_NoPatch] = ACTIONS(133),
    [anon_sym_NoSource] = ACTIONS(133),
    [anon_sym_Packager] = ACTIONS(133),
    [anon_sym_Release] = ACTIONS(133),
    [anon_sym_SourceLicense] = ACTIONS(133),
    [anon_sym_Summary] = ACTIONS(133),
    [anon_sym_URL] = ACTIONS(133),
    [anon_sym_Url] = ACTIONS(133),
    [anon_sym_VCS] = ACTIONS(133),
    [anon_sym_Vendor] = ACTIONS(133),
    [anon_sym_Version] = ACTIONS(133),
    [aux_sym_tag_token1] = ACTIONS(133),
    [aux_sym_tag_token2] = ACTIONS(133),
    [anon_sym_Requires] = ACTIONS(136),
    [anon_sym_BuildArch] = ACTIONS(139),
    [anon_sym_BuildArchitectures] = ACTIONS(139),
    [anon_sym_BuildConflicts] = ACTIONS(139),
    [anon_sym_BuildPrereq] = ACTIONS(139),
    [anon_sym_BuildRequires] = ACTIONS(139),
    [anon_sym_Conflicts] = ACTIONS(139),
    [anon_sym_DocDir] = ACTIONS(139),
    [anon_sym_Enhances] = ACTIONS(139),
    [anon_sym_ExcludeArch] = ACTIONS(139),
    [anon_sym_ExcludeOS] = ACTIONS(139),
    [anon_sym_ExclusiveArch] = ACTIONS(139),
    [anon_sym_ExclusiveOS] = ACTIONS(139),
    [anon_sym_Obsoletes] = ACTIONS(139),
    [anon_sym_OrderWithRequires] = ACTIONS(139),
    [anon_sym_Prefix] = ACTIONS(139),
    [anon_sym_Prefixes] = ACTIONS(139),
    [anon_sym_Prereq] = ACTIONS(139),
    [anon_sym_Provides] = ACTIONS(139),
    [anon_sym_Recommends] = ACTIONS(139),
    [anon_sym_RemovePathPostfixes] = ACTIONS(139),
    [anon_sym_Suggests] = ACTIONS(139),
    [anon_sym_Supplements] = ACTIONS(139),
    [anon_sym_PERCENTdescription] = ACTIONS(142),
    [anon_sym_PERCENTpackage] = ACTIONS(145),
    [anon_sym_PERCENTprep] = ACTIONS(148),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(151),
    [anon_sym_PERCENTconf] = ACTIONS(154),
    [anon_sym_PERCENTbuild] = ACTIONS(157),
    [anon_sym_PERCENTinstall] = ACTIONS(160),
    [anon_sym_PERCENTcheck] = ACTIONS(163),
    [anon_sym_PERCENTclean] = ACTIONS(166),
    [anon_sym_PERCENTpre] = ACTIONS(169),
    [anon_sym_PERCENTpost] = ACTIONS(169),
    [anon_sym_PERCENTpreun] = ACTIONS(169),
    [anon_sym_PERCENTpostun] = ACTIONS(169),
    [anon_sym_PERCENTpretrans] = ACTIONS(169),
    [anon_sym_PERCENTposttrans] = ACTIONS(169),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(169),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(169),
    [anon_sym_PERCENTverify] = ACTIONS(169),
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
    [anon_sym_PERCENTfiles] = ACTIONS(172),
    [anon_sym_PERCENTchangelog] = ACTIONS(175),
    [anon_sym_PERCENTglobal] = ACTIONS(178),
    [anon_sym_PERCENTdefine] = ACTIONS(178),
    [anon_sym_PERCENTundefine] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(184),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(187),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(190),
  },
  [7] = {
    [sym__statements] = STATE(6),
    [sym_if_statement] = STATE(6),
    [sym_preamble] = STATE(6),
    [sym_tags] = STATE(41),
    [sym_tag] = STATE(460),
    [sym_dependency_tag] = STATE(460),
    [sym_description] = STATE(6),
    [sym_subsection] = STATE(6),
    [sym_subsection_package] = STATE(296),
    [sym_prep_scriptlet] = STATE(6),
    [sym_generate_buildrequires] = STATE(6),
    [sym_conf_scriptlet] = STATE(6),
    [sym_build_scriptlet] = STATE(6),
    [sym_install_scriptlet] = STATE(6),
    [sym_check_scriptlet] = STATE(6),
    [sym_clean_scriptlet] = STATE(6),
    [sym__runtime_scriptlet] = STATE(6),
    [sym__triggers] = STATE(6),
    [sym__file_triggers] = STATE(6),
    [sym_files] = STATE(6),
    [sym_changelog] = STATE(6),
    [sym_macro_definition] = STATE(6),
    [sym_macro_undefinition] = STATE(6),
    [sym_macro_invocation] = STATE(6),
    [sym__macro_expansion] = STATE(6),
    [sym_simple_expansion] = STATE(19),
    [sym_full_expansion] = STATE(6),
    [sym_shell_expansion] = STATE(6),
    [aux_sym_spec_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(193),
    [aux_sym__simple_statements_token1] = ACTIONS(195),
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
    [anon_sym_PERCENTpre] = ACTIONS(197),
    [anon_sym_PERCENTpost] = ACTIONS(197),
    [anon_sym_PERCENTpreun] = ACTIONS(197),
    [anon_sym_PERCENTpostun] = ACTIONS(197),
    [anon_sym_PERCENTpretrans] = ACTIONS(197),
    [anon_sym_PERCENTposttrans] = ACTIONS(197),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(197),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(197),
    [anon_sym_PERCENTverify] = ACTIONS(197),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(197),
    [anon_sym_PERCENTtriggerin] = ACTIONS(197),
    [anon_sym_PERCENTtriggerun] = ACTIONS(197),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(197),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(197),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(197),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(197),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(197),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(197),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(197),
    [anon_sym_PERCENTfiles] = ACTIONS(39),
    [anon_sym_PERCENTchangelog] = ACTIONS(41),
    [anon_sym_PERCENTglobal] = ACTIONS(43),
    [anon_sym_PERCENTdefine] = ACTIONS(43),
    [anon_sym_PERCENTundefine] = ACTIONS(45),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(49),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(51),
  },
  [8] = {
    [sym_defattr] = STATE(9),
    [sym_file] = STATE(9),
    [sym_attr] = STATE(94),
    [sym_verify] = STATE(160),
    [sym_string] = STATE(348),
    [sym__macro_expansion] = STATE(165),
    [sym_simple_expansion] = STATE(165),
    [sym_full_expansion] = STATE(165),
    [sym_shell_expansion] = STATE(165),
    [aux_sym_files_repeat1] = STATE(9),
    [aux_sym_string_repeat1] = STATE(165),
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym__simple_statements_token1] = ACTIONS(201),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(201),
    [anon_sym_PERCENTifarch] = ACTIONS(201),
    [anon_sym_PERCENTifos] = ACTIONS(201),
    [anon_sym_PERCENTifnarch] = ACTIONS(201),
    [anon_sym_PERCENTifnos] = ACTIONS(201),
    [anon_sym_AutoProv] = ACTIONS(201),
    [anon_sym_AutoReq] = ACTIONS(201),
    [anon_sym_AutoReqProv] = ACTIONS(201),
    [anon_sym_BugUrl] = ACTIONS(201),
    [anon_sym_BuildRoot] = ACTIONS(201),
    [anon_sym_BuildSystem] = ACTIONS(201),
    [anon_sym_DistTag] = ACTIONS(201),
    [anon_sym_Distribution] = ACTIONS(201),
    [anon_sym_Epoch] = ACTIONS(201),
    [anon_sym_Group] = ACTIONS(201),
    [anon_sym_License] = ACTIONS(201),
    [anon_sym_ModularityLabel] = ACTIONS(201),
    [anon_sym_Name] = ACTIONS(201),
    [anon_sym_NoPatch] = ACTIONS(201),
    [anon_sym_NoSource] = ACTIONS(201),
    [anon_sym_Packager] = ACTIONS(201),
    [anon_sym_Release] = ACTIONS(201),
    [anon_sym_SourceLicense] = ACTIONS(201),
    [anon_sym_Summary] = ACTIONS(201),
    [anon_sym_URL] = ACTIONS(201),
    [anon_sym_Url] = ACTIONS(201),
    [anon_sym_VCS] = ACTIONS(201),
    [anon_sym_Vendor] = ACTIONS(201),
    [anon_sym_Version] = ACTIONS(201),
    [aux_sym_tag_token1] = ACTIONS(201),
    [aux_sym_tag_token2] = ACTIONS(201),
    [anon_sym_Requires] = ACTIONS(201),
    [anon_sym_BuildArch] = ACTIONS(201),
    [anon_sym_BuildArchitectures] = ACTIONS(201),
    [anon_sym_BuildConflicts] = ACTIONS(201),
    [anon_sym_BuildPrereq] = ACTIONS(201),
    [anon_sym_BuildRequires] = ACTIONS(201),
    [anon_sym_Conflicts] = ACTIONS(201),
    [anon_sym_DocDir] = ACTIONS(201),
    [anon_sym_Enhances] = ACTIONS(201),
    [anon_sym_ExcludeArch] = ACTIONS(201),
    [anon_sym_ExcludeOS] = ACTIONS(201),
    [anon_sym_ExclusiveArch] = ACTIONS(201),
    [anon_sym_ExclusiveOS] = ACTIONS(201),
    [anon_sym_Obsoletes] = ACTIONS(201),
    [anon_sym_OrderWithRequires] = ACTIONS(201),
    [anon_sym_Prefix] = ACTIONS(201),
    [anon_sym_Prefixes] = ACTIONS(201),
    [anon_sym_Prereq] = ACTIONS(201),
    [anon_sym_Provides] = ACTIONS(201),
    [anon_sym_Recommends] = ACTIONS(201),
    [anon_sym_RemovePathPostfixes] = ACTIONS(201),
    [anon_sym_Suggests] = ACTIONS(201),
    [anon_sym_Supplements] = ACTIONS(201),
    [anon_sym_PERCENTdescription] = ACTIONS(201),
    [anon_sym_PERCENTpackage] = ACTIONS(201),
    [anon_sym_PERCENTprep] = ACTIONS(201),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(201),
    [anon_sym_PERCENTconf] = ACTIONS(201),
    [anon_sym_PERCENTbuild] = ACTIONS(201),
    [anon_sym_PERCENTinstall] = ACTIONS(201),
    [anon_sym_PERCENTcheck] = ACTIONS(201),
    [anon_sym_PERCENTclean] = ACTIONS(201),
    [anon_sym_PERCENTpre] = ACTIONS(201),
    [anon_sym_PERCENTpost] = ACTIONS(201),
    [anon_sym_PERCENTpreun] = ACTIONS(201),
    [anon_sym_PERCENTpostun] = ACTIONS(201),
    [anon_sym_PERCENTpretrans] = ACTIONS(201),
    [anon_sym_PERCENTposttrans] = ACTIONS(201),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(201),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(201),
    [anon_sym_PERCENTverify] = ACTIONS(203),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(201),
    [anon_sym_PERCENTtriggerin] = ACTIONS(201),
    [anon_sym_PERCENTtriggerun] = ACTIONS(201),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(201),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(201),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(201),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(201),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(201),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(201),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(201),
    [anon_sym_PERCENTfiles] = ACTIONS(201),
    [anon_sym_PERCENTdefattr] = ACTIONS(205),
    [anon_sym_PERCENTartifact] = ACTIONS(207),
    [anon_sym_PERCENTconfig] = ACTIONS(207),
    [anon_sym_PERCENTdir] = ACTIONS(207),
    [anon_sym_PERCENTdoc] = ACTIONS(207),
    [anon_sym_PERCENTdocdir] = ACTIONS(207),
    [anon_sym_PERCENTghost] = ACTIONS(207),
    [anon_sym_PERCENTlicense] = ACTIONS(207),
    [anon_sym_PERCENTmissingok] = ACTIONS(207),
    [anon_sym_PERCENTreadme] = ACTIONS(207),
    [anon_sym_PERCENTattr] = ACTIONS(87),
    [anon_sym_PERCENTchangelog] = ACTIONS(201),
    [anon_sym_PERCENTglobal] = ACTIONS(201),
    [anon_sym_PERCENTdefine] = ACTIONS(201),
    [anon_sym_PERCENTundefine] = ACTIONS(201),
    [anon_sym_PERCENT] = ACTIONS(209),
    [sym_string_content] = ACTIONS(97),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(211),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(213),
  },
  [9] = {
    [sym_defattr] = STATE(11),
    [sym_file] = STATE(11),
    [sym_attr] = STATE(94),
    [sym_verify] = STATE(160),
    [sym_string] = STATE(348),
    [sym__macro_expansion] = STATE(165),
    [sym_simple_expansion] = STATE(165),
    [sym_full_expansion] = STATE(165),
    [sym_shell_expansion] = STATE(165),
    [aux_sym_files_repeat1] = STATE(11),
    [aux_sym_string_repeat1] = STATE(165),
    [ts_builtin_sym_end] = ACTIONS(215),
    [aux_sym__simple_statements_token1] = ACTIONS(217),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(217),
    [anon_sym_PERCENTifarch] = ACTIONS(217),
    [anon_sym_PERCENTifos] = ACTIONS(217),
    [anon_sym_PERCENTifnarch] = ACTIONS(217),
    [anon_sym_PERCENTifnos] = ACTIONS(217),
    [anon_sym_AutoProv] = ACTIONS(217),
    [anon_sym_AutoReq] = ACTIONS(217),
    [anon_sym_AutoReqProv] = ACTIONS(217),
    [anon_sym_BugUrl] = ACTIONS(217),
    [anon_sym_BuildRoot] = ACTIONS(217),
    [anon_sym_BuildSystem] = ACTIONS(217),
    [anon_sym_DistTag] = ACTIONS(217),
    [anon_sym_Distribution] = ACTIONS(217),
    [anon_sym_Epoch] = ACTIONS(217),
    [anon_sym_Group] = ACTIONS(217),
    [anon_sym_License] = ACTIONS(217),
    [anon_sym_ModularityLabel] = ACTIONS(217),
    [anon_sym_Name] = ACTIONS(217),
    [anon_sym_NoPatch] = ACTIONS(217),
    [anon_sym_NoSource] = ACTIONS(217),
    [anon_sym_Packager] = ACTIONS(217),
    [anon_sym_Release] = ACTIONS(217),
    [anon_sym_SourceLicense] = ACTIONS(217),
    [anon_sym_Summary] = ACTIONS(217),
    [anon_sym_URL] = ACTIONS(217),
    [anon_sym_Url] = ACTIONS(217),
    [anon_sym_VCS] = ACTIONS(217),
    [anon_sym_Vendor] = ACTIONS(217),
    [anon_sym_Version] = ACTIONS(217),
    [aux_sym_tag_token1] = ACTIONS(217),
    [aux_sym_tag_token2] = ACTIONS(217),
    [anon_sym_Requires] = ACTIONS(217),
    [anon_sym_BuildArch] = ACTIONS(217),
    [anon_sym_BuildArchitectures] = ACTIONS(217),
    [anon_sym_BuildConflicts] = ACTIONS(217),
    [anon_sym_BuildPrereq] = ACTIONS(217),
    [anon_sym_BuildRequires] = ACTIONS(217),
    [anon_sym_Conflicts] = ACTIONS(217),
    [anon_sym_DocDir] = ACTIONS(217),
    [anon_sym_Enhances] = ACTIONS(217),
    [anon_sym_ExcludeArch] = ACTIONS(217),
    [anon_sym_ExcludeOS] = ACTIONS(217),
    [anon_sym_ExclusiveArch] = ACTIONS(217),
    [anon_sym_ExclusiveOS] = ACTIONS(217),
    [anon_sym_Obsoletes] = ACTIONS(217),
    [anon_sym_OrderWithRequires] = ACTIONS(217),
    [anon_sym_Prefix] = ACTIONS(217),
    [anon_sym_Prefixes] = ACTIONS(217),
    [anon_sym_Prereq] = ACTIONS(217),
    [anon_sym_Provides] = ACTIONS(217),
    [anon_sym_Recommends] = ACTIONS(217),
    [anon_sym_RemovePathPostfixes] = ACTIONS(217),
    [anon_sym_Suggests] = ACTIONS(217),
    [anon_sym_Supplements] = ACTIONS(217),
    [anon_sym_PERCENTdescription] = ACTIONS(217),
    [anon_sym_PERCENTpackage] = ACTIONS(217),
    [anon_sym_PERCENTprep] = ACTIONS(217),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(217),
    [anon_sym_PERCENTconf] = ACTIONS(217),
    [anon_sym_PERCENTbuild] = ACTIONS(217),
    [anon_sym_PERCENTinstall] = ACTIONS(217),
    [anon_sym_PERCENTcheck] = ACTIONS(217),
    [anon_sym_PERCENTclean] = ACTIONS(217),
    [anon_sym_PERCENTpre] = ACTIONS(217),
    [anon_sym_PERCENTpost] = ACTIONS(217),
    [anon_sym_PERCENTpreun] = ACTIONS(217),
    [anon_sym_PERCENTpostun] = ACTIONS(217),
    [anon_sym_PERCENTpretrans] = ACTIONS(217),
    [anon_sym_PERCENTposttrans] = ACTIONS(217),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(217),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(217),
    [anon_sym_PERCENTverify] = ACTIONS(203),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(217),
    [anon_sym_PERCENTtriggerin] = ACTIONS(217),
    [anon_sym_PERCENTtriggerun] = ACTIONS(217),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(217),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(217),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(217),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(217),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(217),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(217),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(217),
    [anon_sym_PERCENTfiles] = ACTIONS(217),
    [anon_sym_PERCENTdefattr] = ACTIONS(205),
    [anon_sym_PERCENTartifact] = ACTIONS(207),
    [anon_sym_PERCENTconfig] = ACTIONS(207),
    [anon_sym_PERCENTdir] = ACTIONS(207),
    [anon_sym_PERCENTdoc] = ACTIONS(207),
    [anon_sym_PERCENTdocdir] = ACTIONS(207),
    [anon_sym_PERCENTghost] = ACTIONS(207),
    [anon_sym_PERCENTlicense] = ACTIONS(207),
    [anon_sym_PERCENTmissingok] = ACTIONS(207),
    [anon_sym_PERCENTreadme] = ACTIONS(207),
    [anon_sym_PERCENTattr] = ACTIONS(87),
    [anon_sym_PERCENTchangelog] = ACTIONS(217),
    [anon_sym_PERCENTglobal] = ACTIONS(217),
    [anon_sym_PERCENTdefine] = ACTIONS(217),
    [anon_sym_PERCENTundefine] = ACTIONS(217),
    [anon_sym_PERCENT] = ACTIONS(209),
    [sym_string_content] = ACTIONS(97),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(211),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(213),
  },
  [10] = {
    [sym_defattr] = STATE(14),
    [sym_file] = STATE(14),
    [sym_attr] = STATE(94),
    [sym_verify] = STATE(160),
    [sym_string] = STATE(348),
    [sym__macro_expansion] = STATE(165),
    [sym_simple_expansion] = STATE(165),
    [sym_full_expansion] = STATE(165),
    [sym_shell_expansion] = STATE(165),
    [aux_sym_files_repeat1] = STATE(14),
    [aux_sym_string_repeat1] = STATE(165),
    [ts_builtin_sym_end] = ACTIONS(219),
    [aux_sym__simple_statements_token1] = ACTIONS(221),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(221),
    [anon_sym_PERCENTifarch] = ACTIONS(221),
    [anon_sym_PERCENTifos] = ACTIONS(221),
    [anon_sym_PERCENTifnarch] = ACTIONS(221),
    [anon_sym_PERCENTifnos] = ACTIONS(221),
    [anon_sym_AutoProv] = ACTIONS(221),
    [anon_sym_AutoReq] = ACTIONS(221),
    [anon_sym_AutoReqProv] = ACTIONS(221),
    [anon_sym_BugUrl] = ACTIONS(221),
    [anon_sym_BuildRoot] = ACTIONS(221),
    [anon_sym_BuildSystem] = ACTIONS(221),
    [anon_sym_DistTag] = ACTIONS(221),
    [anon_sym_Distribution] = ACTIONS(221),
    [anon_sym_Epoch] = ACTIONS(221),
    [anon_sym_Group] = ACTIONS(221),
    [anon_sym_License] = ACTIONS(221),
    [anon_sym_ModularityLabel] = ACTIONS(221),
    [anon_sym_Name] = ACTIONS(221),
    [anon_sym_NoPatch] = ACTIONS(221),
    [anon_sym_NoSource] = ACTIONS(221),
    [anon_sym_Packager] = ACTIONS(221),
    [anon_sym_Release] = ACTIONS(221),
    [anon_sym_SourceLicense] = ACTIONS(221),
    [anon_sym_Summary] = ACTIONS(221),
    [anon_sym_URL] = ACTIONS(221),
    [anon_sym_Url] = ACTIONS(221),
    [anon_sym_VCS] = ACTIONS(221),
    [anon_sym_Vendor] = ACTIONS(221),
    [anon_sym_Version] = ACTIONS(221),
    [aux_sym_tag_token1] = ACTIONS(221),
    [aux_sym_tag_token2] = ACTIONS(221),
    [anon_sym_Requires] = ACTIONS(221),
    [anon_sym_BuildArch] = ACTIONS(221),
    [anon_sym_BuildArchitectures] = ACTIONS(221),
    [anon_sym_BuildConflicts] = ACTIONS(221),
    [anon_sym_BuildPrereq] = ACTIONS(221),
    [anon_sym_BuildRequires] = ACTIONS(221),
    [anon_sym_Conflicts] = ACTIONS(221),
    [anon_sym_DocDir] = ACTIONS(221),
    [anon_sym_Enhances] = ACTIONS(221),
    [anon_sym_ExcludeArch] = ACTIONS(221),
    [anon_sym_ExcludeOS] = ACTIONS(221),
    [anon_sym_ExclusiveArch] = ACTIONS(221),
    [anon_sym_ExclusiveOS] = ACTIONS(221),
    [anon_sym_Obsoletes] = ACTIONS(221),
    [anon_sym_OrderWithRequires] = ACTIONS(221),
    [anon_sym_Prefix] = ACTIONS(221),
    [anon_sym_Prefixes] = ACTIONS(221),
    [anon_sym_Prereq] = ACTIONS(221),
    [anon_sym_Provides] = ACTIONS(221),
    [anon_sym_Recommends] = ACTIONS(221),
    [anon_sym_RemovePathPostfixes] = ACTIONS(221),
    [anon_sym_Suggests] = ACTIONS(221),
    [anon_sym_Supplements] = ACTIONS(221),
    [anon_sym_PERCENTdescription] = ACTIONS(221),
    [anon_sym_PERCENTpackage] = ACTIONS(221),
    [anon_sym_PERCENTprep] = ACTIONS(221),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(221),
    [anon_sym_PERCENTconf] = ACTIONS(221),
    [anon_sym_PERCENTbuild] = ACTIONS(221),
    [anon_sym_PERCENTinstall] = ACTIONS(221),
    [anon_sym_PERCENTcheck] = ACTIONS(221),
    [anon_sym_PERCENTclean] = ACTIONS(221),
    [anon_sym_PERCENTpre] = ACTIONS(221),
    [anon_sym_PERCENTpost] = ACTIONS(221),
    [anon_sym_PERCENTpreun] = ACTIONS(221),
    [anon_sym_PERCENTpostun] = ACTIONS(221),
    [anon_sym_PERCENTpretrans] = ACTIONS(221),
    [anon_sym_PERCENTposttrans] = ACTIONS(221),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(221),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(221),
    [anon_sym_PERCENTverify] = ACTIONS(203),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(221),
    [anon_sym_PERCENTtriggerin] = ACTIONS(221),
    [anon_sym_PERCENTtriggerun] = ACTIONS(221),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(221),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(221),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(221),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(221),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(221),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(221),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(221),
    [anon_sym_PERCENTfiles] = ACTIONS(221),
    [anon_sym_PERCENTdefattr] = ACTIONS(205),
    [anon_sym_PERCENTartifact] = ACTIONS(207),
    [anon_sym_PERCENTconfig] = ACTIONS(207),
    [anon_sym_PERCENTdir] = ACTIONS(207),
    [anon_sym_PERCENTdoc] = ACTIONS(207),
    [anon_sym_PERCENTdocdir] = ACTIONS(207),
    [anon_sym_PERCENTghost] = ACTIONS(207),
    [anon_sym_PERCENTlicense] = ACTIONS(207),
    [anon_sym_PERCENTmissingok] = ACTIONS(207),
    [anon_sym_PERCENTreadme] = ACTIONS(207),
    [anon_sym_PERCENTattr] = ACTIONS(87),
    [anon_sym_PERCENTchangelog] = ACTIONS(221),
    [anon_sym_PERCENTglobal] = ACTIONS(221),
    [anon_sym_PERCENTdefine] = ACTIONS(221),
    [anon_sym_PERCENTundefine] = ACTIONS(221),
    [anon_sym_PERCENT] = ACTIONS(209),
    [sym_string_content] = ACTIONS(97),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(211),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(213),
  },
  [11] = {
    [sym_defattr] = STATE(11),
    [sym_file] = STATE(11),
    [sym_attr] = STATE(94),
    [sym_verify] = STATE(160),
    [sym_string] = STATE(348),
    [sym__macro_expansion] = STATE(165),
    [sym_simple_expansion] = STATE(165),
    [sym_full_expansion] = STATE(165),
    [sym_shell_expansion] = STATE(165),
    [aux_sym_files_repeat1] = STATE(11),
    [aux_sym_string_repeat1] = STATE(165),
    [ts_builtin_sym_end] = ACTIONS(223),
    [aux_sym__simple_statements_token1] = ACTIONS(225),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(225),
    [anon_sym_PERCENTifarch] = ACTIONS(225),
    [anon_sym_PERCENTifos] = ACTIONS(225),
    [anon_sym_PERCENTifnarch] = ACTIONS(225),
    [anon_sym_PERCENTifnos] = ACTIONS(225),
    [anon_sym_AutoProv] = ACTIONS(225),
    [anon_sym_AutoReq] = ACTIONS(225),
    [anon_sym_AutoReqProv] = ACTIONS(225),
    [anon_sym_BugUrl] = ACTIONS(225),
    [anon_sym_BuildRoot] = ACTIONS(225),
    [anon_sym_BuildSystem] = ACTIONS(225),
    [anon_sym_DistTag] = ACTIONS(225),
    [anon_sym_Distribution] = ACTIONS(225),
    [anon_sym_Epoch] = ACTIONS(225),
    [anon_sym_Group] = ACTIONS(225),
    [anon_sym_License] = ACTIONS(225),
    [anon_sym_ModularityLabel] = ACTIONS(225),
    [anon_sym_Name] = ACTIONS(225),
    [anon_sym_NoPatch] = ACTIONS(225),
    [anon_sym_NoSource] = ACTIONS(225),
    [anon_sym_Packager] = ACTIONS(225),
    [anon_sym_Release] = ACTIONS(225),
    [anon_sym_SourceLicense] = ACTIONS(225),
    [anon_sym_Summary] = ACTIONS(225),
    [anon_sym_URL] = ACTIONS(225),
    [anon_sym_Url] = ACTIONS(225),
    [anon_sym_VCS] = ACTIONS(225),
    [anon_sym_Vendor] = ACTIONS(225),
    [anon_sym_Version] = ACTIONS(225),
    [aux_sym_tag_token1] = ACTIONS(225),
    [aux_sym_tag_token2] = ACTIONS(225),
    [anon_sym_Requires] = ACTIONS(225),
    [anon_sym_BuildArch] = ACTIONS(225),
    [anon_sym_BuildArchitectures] = ACTIONS(225),
    [anon_sym_BuildConflicts] = ACTIONS(225),
    [anon_sym_BuildPrereq] = ACTIONS(225),
    [anon_sym_BuildRequires] = ACTIONS(225),
    [anon_sym_Conflicts] = ACTIONS(225),
    [anon_sym_DocDir] = ACTIONS(225),
    [anon_sym_Enhances] = ACTIONS(225),
    [anon_sym_ExcludeArch] = ACTIONS(225),
    [anon_sym_ExcludeOS] = ACTIONS(225),
    [anon_sym_ExclusiveArch] = ACTIONS(225),
    [anon_sym_ExclusiveOS] = ACTIONS(225),
    [anon_sym_Obsoletes] = ACTIONS(225),
    [anon_sym_OrderWithRequires] = ACTIONS(225),
    [anon_sym_Prefix] = ACTIONS(225),
    [anon_sym_Prefixes] = ACTIONS(225),
    [anon_sym_Prereq] = ACTIONS(225),
    [anon_sym_Provides] = ACTIONS(225),
    [anon_sym_Recommends] = ACTIONS(225),
    [anon_sym_RemovePathPostfixes] = ACTIONS(225),
    [anon_sym_Suggests] = ACTIONS(225),
    [anon_sym_Supplements] = ACTIONS(225),
    [anon_sym_PERCENTdescription] = ACTIONS(225),
    [anon_sym_PERCENTpackage] = ACTIONS(225),
    [anon_sym_PERCENTprep] = ACTIONS(225),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(225),
    [anon_sym_PERCENTconf] = ACTIONS(225),
    [anon_sym_PERCENTbuild] = ACTIONS(225),
    [anon_sym_PERCENTinstall] = ACTIONS(225),
    [anon_sym_PERCENTcheck] = ACTIONS(225),
    [anon_sym_PERCENTclean] = ACTIONS(225),
    [anon_sym_PERCENTpre] = ACTIONS(225),
    [anon_sym_PERCENTpost] = ACTIONS(225),
    [anon_sym_PERCENTpreun] = ACTIONS(225),
    [anon_sym_PERCENTpostun] = ACTIONS(225),
    [anon_sym_PERCENTpretrans] = ACTIONS(225),
    [anon_sym_PERCENTposttrans] = ACTIONS(225),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(225),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(225),
    [anon_sym_PERCENTverify] = ACTIONS(227),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(225),
    [anon_sym_PERCENTtriggerin] = ACTIONS(225),
    [anon_sym_PERCENTtriggerun] = ACTIONS(225),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(225),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(225),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(225),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(225),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(225),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(225),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(225),
    [anon_sym_PERCENTfiles] = ACTIONS(225),
    [anon_sym_PERCENTdefattr] = ACTIONS(230),
    [anon_sym_PERCENTartifact] = ACTIONS(233),
    [anon_sym_PERCENTconfig] = ACTIONS(233),
    [anon_sym_PERCENTdir] = ACTIONS(233),
    [anon_sym_PERCENTdoc] = ACTIONS(233),
    [anon_sym_PERCENTdocdir] = ACTIONS(233),
    [anon_sym_PERCENTghost] = ACTIONS(233),
    [anon_sym_PERCENTlicense] = ACTIONS(233),
    [anon_sym_PERCENTmissingok] = ACTIONS(233),
    [anon_sym_PERCENTreadme] = ACTIONS(233),
    [anon_sym_PERCENTattr] = ACTIONS(236),
    [anon_sym_PERCENTchangelog] = ACTIONS(225),
    [anon_sym_PERCENTglobal] = ACTIONS(225),
    [anon_sym_PERCENTdefine] = ACTIONS(225),
    [anon_sym_PERCENTundefine] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(239),
    [sym_string_content] = ACTIONS(242),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(245),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(248),
  },
  [12] = {
    [sym_defattr] = STATE(13),
    [sym_file] = STATE(13),
    [sym_attr] = STATE(94),
    [sym_verify] = STATE(160),
    [sym_string] = STATE(348),
    [sym__macro_expansion] = STATE(165),
    [sym_simple_expansion] = STATE(165),
    [sym_full_expansion] = STATE(165),
    [sym_shell_expansion] = STATE(165),
    [aux_sym_files_repeat1] = STATE(13),
    [aux_sym_string_repeat1] = STATE(165),
    [ts_builtin_sym_end] = ACTIONS(251),
    [aux_sym__simple_statements_token1] = ACTIONS(253),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(253),
    [anon_sym_PERCENTifarch] = ACTIONS(253),
    [anon_sym_PERCENTifos] = ACTIONS(253),
    [anon_sym_PERCENTifnarch] = ACTIONS(253),
    [anon_sym_PERCENTifnos] = ACTIONS(253),
    [anon_sym_AutoProv] = ACTIONS(253),
    [anon_sym_AutoReq] = ACTIONS(253),
    [anon_sym_AutoReqProv] = ACTIONS(253),
    [anon_sym_BugUrl] = ACTIONS(253),
    [anon_sym_BuildRoot] = ACTIONS(253),
    [anon_sym_BuildSystem] = ACTIONS(253),
    [anon_sym_DistTag] = ACTIONS(253),
    [anon_sym_Distribution] = ACTIONS(253),
    [anon_sym_Epoch] = ACTIONS(253),
    [anon_sym_Group] = ACTIONS(253),
    [anon_sym_License] = ACTIONS(253),
    [anon_sym_ModularityLabel] = ACTIONS(253),
    [anon_sym_Name] = ACTIONS(253),
    [anon_sym_NoPatch] = ACTIONS(253),
    [anon_sym_NoSource] = ACTIONS(253),
    [anon_sym_Packager] = ACTIONS(253),
    [anon_sym_Release] = ACTIONS(253),
    [anon_sym_SourceLicense] = ACTIONS(253),
    [anon_sym_Summary] = ACTIONS(253),
    [anon_sym_URL] = ACTIONS(253),
    [anon_sym_Url] = ACTIONS(253),
    [anon_sym_VCS] = ACTIONS(253),
    [anon_sym_Vendor] = ACTIONS(253),
    [anon_sym_Version] = ACTIONS(253),
    [aux_sym_tag_token1] = ACTIONS(253),
    [aux_sym_tag_token2] = ACTIONS(253),
    [anon_sym_Requires] = ACTIONS(253),
    [anon_sym_BuildArch] = ACTIONS(253),
    [anon_sym_BuildArchitectures] = ACTIONS(253),
    [anon_sym_BuildConflicts] = ACTIONS(253),
    [anon_sym_BuildPrereq] = ACTIONS(253),
    [anon_sym_BuildRequires] = ACTIONS(253),
    [anon_sym_Conflicts] = ACTIONS(253),
    [anon_sym_DocDir] = ACTIONS(253),
    [anon_sym_Enhances] = ACTIONS(253),
    [anon_sym_ExcludeArch] = ACTIONS(253),
    [anon_sym_ExcludeOS] = ACTIONS(253),
    [anon_sym_ExclusiveArch] = ACTIONS(253),
    [anon_sym_ExclusiveOS] = ACTIONS(253),
    [anon_sym_Obsoletes] = ACTIONS(253),
    [anon_sym_OrderWithRequires] = ACTIONS(253),
    [anon_sym_Prefix] = ACTIONS(253),
    [anon_sym_Prefixes] = ACTIONS(253),
    [anon_sym_Prereq] = ACTIONS(253),
    [anon_sym_Provides] = ACTIONS(253),
    [anon_sym_Recommends] = ACTIONS(253),
    [anon_sym_RemovePathPostfixes] = ACTIONS(253),
    [anon_sym_Suggests] = ACTIONS(253),
    [anon_sym_Supplements] = ACTIONS(253),
    [anon_sym_PERCENTdescription] = ACTIONS(253),
    [anon_sym_PERCENTpackage] = ACTIONS(253),
    [anon_sym_PERCENTprep] = ACTIONS(253),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(253),
    [anon_sym_PERCENTconf] = ACTIONS(253),
    [anon_sym_PERCENTbuild] = ACTIONS(253),
    [anon_sym_PERCENTinstall] = ACTIONS(253),
    [anon_sym_PERCENTcheck] = ACTIONS(253),
    [anon_sym_PERCENTclean] = ACTIONS(253),
    [anon_sym_PERCENTpre] = ACTIONS(253),
    [anon_sym_PERCENTpost] = ACTIONS(253),
    [anon_sym_PERCENTpreun] = ACTIONS(253),
    [anon_sym_PERCENTpostun] = ACTIONS(253),
    [anon_sym_PERCENTpretrans] = ACTIONS(253),
    [anon_sym_PERCENTposttrans] = ACTIONS(253),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(253),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(253),
    [anon_sym_PERCENTverify] = ACTIONS(203),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(253),
    [anon_sym_PERCENTtriggerin] = ACTIONS(253),
    [anon_sym_PERCENTtriggerun] = ACTIONS(253),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(253),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(253),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(253),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(253),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(253),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(253),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(253),
    [anon_sym_PERCENTfiles] = ACTIONS(253),
    [anon_sym_PERCENTdefattr] = ACTIONS(205),
    [anon_sym_PERCENTartifact] = ACTIONS(207),
    [anon_sym_PERCENTconfig] = ACTIONS(207),
    [anon_sym_PERCENTdir] = ACTIONS(207),
    [anon_sym_PERCENTdoc] = ACTIONS(207),
    [anon_sym_PERCENTdocdir] = ACTIONS(207),
    [anon_sym_PERCENTghost] = ACTIONS(207),
    [anon_sym_PERCENTlicense] = ACTIONS(207),
    [anon_sym_PERCENTmissingok] = ACTIONS(207),
    [anon_sym_PERCENTreadme] = ACTIONS(207),
    [anon_sym_PERCENTattr] = ACTIONS(87),
    [anon_sym_PERCENTchangelog] = ACTIONS(253),
    [anon_sym_PERCENTglobal] = ACTIONS(253),
    [anon_sym_PERCENTdefine] = ACTIONS(253),
    [anon_sym_PERCENTundefine] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(209),
    [sym_string_content] = ACTIONS(97),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(211),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(213),
  },
  [13] = {
    [sym_defattr] = STATE(11),
    [sym_file] = STATE(11),
    [sym_attr] = STATE(94),
    [sym_verify] = STATE(160),
    [sym_string] = STATE(348),
    [sym__macro_expansion] = STATE(165),
    [sym_simple_expansion] = STATE(165),
    [sym_full_expansion] = STATE(165),
    [sym_shell_expansion] = STATE(165),
    [aux_sym_files_repeat1] = STATE(11),
    [aux_sym_string_repeat1] = STATE(165),
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym__simple_statements_token1] = ACTIONS(257),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(257),
    [anon_sym_PERCENTifarch] = ACTIONS(257),
    [anon_sym_PERCENTifos] = ACTIONS(257),
    [anon_sym_PERCENTifnarch] = ACTIONS(257),
    [anon_sym_PERCENTifnos] = ACTIONS(257),
    [anon_sym_AutoProv] = ACTIONS(257),
    [anon_sym_AutoReq] = ACTIONS(257),
    [anon_sym_AutoReqProv] = ACTIONS(257),
    [anon_sym_BugUrl] = ACTIONS(257),
    [anon_sym_BuildRoot] = ACTIONS(257),
    [anon_sym_BuildSystem] = ACTIONS(257),
    [anon_sym_DistTag] = ACTIONS(257),
    [anon_sym_Distribution] = ACTIONS(257),
    [anon_sym_Epoch] = ACTIONS(257),
    [anon_sym_Group] = ACTIONS(257),
    [anon_sym_License] = ACTIONS(257),
    [anon_sym_ModularityLabel] = ACTIONS(257),
    [anon_sym_Name] = ACTIONS(257),
    [anon_sym_NoPatch] = ACTIONS(257),
    [anon_sym_NoSource] = ACTIONS(257),
    [anon_sym_Packager] = ACTIONS(257),
    [anon_sym_Release] = ACTIONS(257),
    [anon_sym_SourceLicense] = ACTIONS(257),
    [anon_sym_Summary] = ACTIONS(257),
    [anon_sym_URL] = ACTIONS(257),
    [anon_sym_Url] = ACTIONS(257),
    [anon_sym_VCS] = ACTIONS(257),
    [anon_sym_Vendor] = ACTIONS(257),
    [anon_sym_Version] = ACTIONS(257),
    [aux_sym_tag_token1] = ACTIONS(257),
    [aux_sym_tag_token2] = ACTIONS(257),
    [anon_sym_Requires] = ACTIONS(257),
    [anon_sym_BuildArch] = ACTIONS(257),
    [anon_sym_BuildArchitectures] = ACTIONS(257),
    [anon_sym_BuildConflicts] = ACTIONS(257),
    [anon_sym_BuildPrereq] = ACTIONS(257),
    [anon_sym_BuildRequires] = ACTIONS(257),
    [anon_sym_Conflicts] = ACTIONS(257),
    [anon_sym_DocDir] = ACTIONS(257),
    [anon_sym_Enhances] = ACTIONS(257),
    [anon_sym_ExcludeArch] = ACTIONS(257),
    [anon_sym_ExcludeOS] = ACTIONS(257),
    [anon_sym_ExclusiveArch] = ACTIONS(257),
    [anon_sym_ExclusiveOS] = ACTIONS(257),
    [anon_sym_Obsoletes] = ACTIONS(257),
    [anon_sym_OrderWithRequires] = ACTIONS(257),
    [anon_sym_Prefix] = ACTIONS(257),
    [anon_sym_Prefixes] = ACTIONS(257),
    [anon_sym_Prereq] = ACTIONS(257),
    [anon_sym_Provides] = ACTIONS(257),
    [anon_sym_Recommends] = ACTIONS(257),
    [anon_sym_RemovePathPostfixes] = ACTIONS(257),
    [anon_sym_Suggests] = ACTIONS(257),
    [anon_sym_Supplements] = ACTIONS(257),
    [anon_sym_PERCENTdescription] = ACTIONS(257),
    [anon_sym_PERCENTpackage] = ACTIONS(257),
    [anon_sym_PERCENTprep] = ACTIONS(257),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(257),
    [anon_sym_PERCENTconf] = ACTIONS(257),
    [anon_sym_PERCENTbuild] = ACTIONS(257),
    [anon_sym_PERCENTinstall] = ACTIONS(257),
    [anon_sym_PERCENTcheck] = ACTIONS(257),
    [anon_sym_PERCENTclean] = ACTIONS(257),
    [anon_sym_PERCENTpre] = ACTIONS(257),
    [anon_sym_PERCENTpost] = ACTIONS(257),
    [anon_sym_PERCENTpreun] = ACTIONS(257),
    [anon_sym_PERCENTpostun] = ACTIONS(257),
    [anon_sym_PERCENTpretrans] = ACTIONS(257),
    [anon_sym_PERCENTposttrans] = ACTIONS(257),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(257),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(257),
    [anon_sym_PERCENTverify] = ACTIONS(203),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(257),
    [anon_sym_PERCENTtriggerin] = ACTIONS(257),
    [anon_sym_PERCENTtriggerun] = ACTIONS(257),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(257),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(257),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(257),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(257),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(257),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(257),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(257),
    [anon_sym_PERCENTfiles] = ACTIONS(257),
    [anon_sym_PERCENTdefattr] = ACTIONS(205),
    [anon_sym_PERCENTartifact] = ACTIONS(207),
    [anon_sym_PERCENTconfig] = ACTIONS(207),
    [anon_sym_PERCENTdir] = ACTIONS(207),
    [anon_sym_PERCENTdoc] = ACTIONS(207),
    [anon_sym_PERCENTdocdir] = ACTIONS(207),
    [anon_sym_PERCENTghost] = ACTIONS(207),
    [anon_sym_PERCENTlicense] = ACTIONS(207),
    [anon_sym_PERCENTmissingok] = ACTIONS(207),
    [anon_sym_PERCENTreadme] = ACTIONS(207),
    [anon_sym_PERCENTattr] = ACTIONS(87),
    [anon_sym_PERCENTchangelog] = ACTIONS(257),
    [anon_sym_PERCENTglobal] = ACTIONS(257),
    [anon_sym_PERCENTdefine] = ACTIONS(257),
    [anon_sym_PERCENTundefine] = ACTIONS(257),
    [anon_sym_PERCENT] = ACTIONS(209),
    [sym_string_content] = ACTIONS(97),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(211),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(213),
  },
  [14] = {
    [sym_defattr] = STATE(11),
    [sym_file] = STATE(11),
    [sym_attr] = STATE(94),
    [sym_verify] = STATE(160),
    [sym_string] = STATE(348),
    [sym__macro_expansion] = STATE(165),
    [sym_simple_expansion] = STATE(165),
    [sym_full_expansion] = STATE(165),
    [sym_shell_expansion] = STATE(165),
    [aux_sym_files_repeat1] = STATE(11),
    [aux_sym_string_repeat1] = STATE(165),
    [ts_builtin_sym_end] = ACTIONS(259),
    [aux_sym__simple_statements_token1] = ACTIONS(261),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(261),
    [anon_sym_PERCENTifarch] = ACTIONS(261),
    [anon_sym_PERCENTifos] = ACTIONS(261),
    [anon_sym_PERCENTifnarch] = ACTIONS(261),
    [anon_sym_PERCENTifnos] = ACTIONS(261),
    [anon_sym_AutoProv] = ACTIONS(261),
    [anon_sym_AutoReq] = ACTIONS(261),
    [anon_sym_AutoReqProv] = ACTIONS(261),
    [anon_sym_BugUrl] = ACTIONS(261),
    [anon_sym_BuildRoot] = ACTIONS(261),
    [anon_sym_BuildSystem] = ACTIONS(261),
    [anon_sym_DistTag] = ACTIONS(261),
    [anon_sym_Distribution] = ACTIONS(261),
    [anon_sym_Epoch] = ACTIONS(261),
    [anon_sym_Group] = ACTIONS(261),
    [anon_sym_License] = ACTIONS(261),
    [anon_sym_ModularityLabel] = ACTIONS(261),
    [anon_sym_Name] = ACTIONS(261),
    [anon_sym_NoPatch] = ACTIONS(261),
    [anon_sym_NoSource] = ACTIONS(261),
    [anon_sym_Packager] = ACTIONS(261),
    [anon_sym_Release] = ACTIONS(261),
    [anon_sym_SourceLicense] = ACTIONS(261),
    [anon_sym_Summary] = ACTIONS(261),
    [anon_sym_URL] = ACTIONS(261),
    [anon_sym_Url] = ACTIONS(261),
    [anon_sym_VCS] = ACTIONS(261),
    [anon_sym_Vendor] = ACTIONS(261),
    [anon_sym_Version] = ACTIONS(261),
    [aux_sym_tag_token1] = ACTIONS(261),
    [aux_sym_tag_token2] = ACTIONS(261),
    [anon_sym_Requires] = ACTIONS(261),
    [anon_sym_BuildArch] = ACTIONS(261),
    [anon_sym_BuildArchitectures] = ACTIONS(261),
    [anon_sym_BuildConflicts] = ACTIONS(261),
    [anon_sym_BuildPrereq] = ACTIONS(261),
    [anon_sym_BuildRequires] = ACTIONS(261),
    [anon_sym_Conflicts] = ACTIONS(261),
    [anon_sym_DocDir] = ACTIONS(261),
    [anon_sym_Enhances] = ACTIONS(261),
    [anon_sym_ExcludeArch] = ACTIONS(261),
    [anon_sym_ExcludeOS] = ACTIONS(261),
    [anon_sym_ExclusiveArch] = ACTIONS(261),
    [anon_sym_ExclusiveOS] = ACTIONS(261),
    [anon_sym_Obsoletes] = ACTIONS(261),
    [anon_sym_OrderWithRequires] = ACTIONS(261),
    [anon_sym_Prefix] = ACTIONS(261),
    [anon_sym_Prefixes] = ACTIONS(261),
    [anon_sym_Prereq] = ACTIONS(261),
    [anon_sym_Provides] = ACTIONS(261),
    [anon_sym_Recommends] = ACTIONS(261),
    [anon_sym_RemovePathPostfixes] = ACTIONS(261),
    [anon_sym_Suggests] = ACTIONS(261),
    [anon_sym_Supplements] = ACTIONS(261),
    [anon_sym_PERCENTdescription] = ACTIONS(261),
    [anon_sym_PERCENTpackage] = ACTIONS(261),
    [anon_sym_PERCENTprep] = ACTIONS(261),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(261),
    [anon_sym_PERCENTconf] = ACTIONS(261),
    [anon_sym_PERCENTbuild] = ACTIONS(261),
    [anon_sym_PERCENTinstall] = ACTIONS(261),
    [anon_sym_PERCENTcheck] = ACTIONS(261),
    [anon_sym_PERCENTclean] = ACTIONS(261),
    [anon_sym_PERCENTpre] = ACTIONS(261),
    [anon_sym_PERCENTpost] = ACTIONS(261),
    [anon_sym_PERCENTpreun] = ACTIONS(261),
    [anon_sym_PERCENTpostun] = ACTIONS(261),
    [anon_sym_PERCENTpretrans] = ACTIONS(261),
    [anon_sym_PERCENTposttrans] = ACTIONS(261),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(261),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(261),
    [anon_sym_PERCENTverify] = ACTIONS(203),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(261),
    [anon_sym_PERCENTtriggerin] = ACTIONS(261),
    [anon_sym_PERCENTtriggerun] = ACTIONS(261),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(261),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(261),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(261),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(261),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(261),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(261),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(261),
    [anon_sym_PERCENTfiles] = ACTIONS(261),
    [anon_sym_PERCENTdefattr] = ACTIONS(205),
    [anon_sym_PERCENTartifact] = ACTIONS(207),
    [anon_sym_PERCENTconfig] = ACTIONS(207),
    [anon_sym_PERCENTdir] = ACTIONS(207),
    [anon_sym_PERCENTdoc] = ACTIONS(207),
    [anon_sym_PERCENTdocdir] = ACTIONS(207),
    [anon_sym_PERCENTghost] = ACTIONS(207),
    [anon_sym_PERCENTlicense] = ACTIONS(207),
    [anon_sym_PERCENTmissingok] = ACTIONS(207),
    [anon_sym_PERCENTreadme] = ACTIONS(207),
    [anon_sym_PERCENTattr] = ACTIONS(87),
    [anon_sym_PERCENTchangelog] = ACTIONS(261),
    [anon_sym_PERCENTglobal] = ACTIONS(261),
    [anon_sym_PERCENTdefine] = ACTIONS(261),
    [anon_sym_PERCENTundefine] = ACTIONS(261),
    [anon_sym_PERCENT] = ACTIONS(209),
    [sym_string_content] = ACTIONS(97),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(211),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(213),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym__simple_statements_token1] = ACTIONS(265),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(265),
    [anon_sym_PERCENTifarch] = ACTIONS(265),
    [anon_sym_PERCENTifos] = ACTIONS(265),
    [anon_sym_PERCENTifnarch] = ACTIONS(265),
    [anon_sym_PERCENTifnos] = ACTIONS(265),
    [anon_sym_AutoProv] = ACTIONS(265),
    [anon_sym_AutoReq] = ACTIONS(265),
    [anon_sym_AutoReqProv] = ACTIONS(265),
    [anon_sym_BugUrl] = ACTIONS(265),
    [anon_sym_BuildRoot] = ACTIONS(265),
    [anon_sym_BuildSystem] = ACTIONS(265),
    [anon_sym_DistTag] = ACTIONS(265),
    [anon_sym_Distribution] = ACTIONS(265),
    [anon_sym_Epoch] = ACTIONS(265),
    [anon_sym_Group] = ACTIONS(265),
    [anon_sym_License] = ACTIONS(265),
    [anon_sym_ModularityLabel] = ACTIONS(265),
    [anon_sym_Name] = ACTIONS(265),
    [anon_sym_NoPatch] = ACTIONS(265),
    [anon_sym_NoSource] = ACTIONS(265),
    [anon_sym_Packager] = ACTIONS(265),
    [anon_sym_Release] = ACTIONS(265),
    [anon_sym_SourceLicense] = ACTIONS(265),
    [anon_sym_Summary] = ACTIONS(265),
    [anon_sym_URL] = ACTIONS(265),
    [anon_sym_Url] = ACTIONS(265),
    [anon_sym_VCS] = ACTIONS(265),
    [anon_sym_Vendor] = ACTIONS(265),
    [anon_sym_Version] = ACTIONS(265),
    [aux_sym_tag_token1] = ACTIONS(265),
    [aux_sym_tag_token2] = ACTIONS(265),
    [anon_sym_Requires] = ACTIONS(265),
    [anon_sym_BuildArch] = ACTIONS(265),
    [anon_sym_BuildArchitectures] = ACTIONS(265),
    [anon_sym_BuildConflicts] = ACTIONS(265),
    [anon_sym_BuildPrereq] = ACTIONS(265),
    [anon_sym_BuildRequires] = ACTIONS(265),
    [anon_sym_Conflicts] = ACTIONS(265),
    [anon_sym_DocDir] = ACTIONS(265),
    [anon_sym_Enhances] = ACTIONS(265),
    [anon_sym_ExcludeArch] = ACTIONS(265),
    [anon_sym_ExcludeOS] = ACTIONS(265),
    [anon_sym_ExclusiveArch] = ACTIONS(265),
    [anon_sym_ExclusiveOS] = ACTIONS(265),
    [anon_sym_Obsoletes] = ACTIONS(265),
    [anon_sym_OrderWithRequires] = ACTIONS(265),
    [anon_sym_Prefix] = ACTIONS(265),
    [anon_sym_Prefixes] = ACTIONS(265),
    [anon_sym_Prereq] = ACTIONS(265),
    [anon_sym_Provides] = ACTIONS(265),
    [anon_sym_Recommends] = ACTIONS(265),
    [anon_sym_RemovePathPostfixes] = ACTIONS(265),
    [anon_sym_Suggests] = ACTIONS(265),
    [anon_sym_Supplements] = ACTIONS(265),
    [anon_sym_PERCENTdescription] = ACTIONS(265),
    [anon_sym_PERCENTpackage] = ACTIONS(265),
    [anon_sym_PERCENTprep] = ACTIONS(265),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(265),
    [anon_sym_PERCENTconf] = ACTIONS(265),
    [anon_sym_PERCENTbuild] = ACTIONS(265),
    [anon_sym_PERCENTinstall] = ACTIONS(265),
    [anon_sym_PERCENTcheck] = ACTIONS(265),
    [anon_sym_PERCENTclean] = ACTIONS(265),
    [anon_sym_PERCENTpre] = ACTIONS(265),
    [anon_sym_PERCENTpost] = ACTIONS(265),
    [anon_sym_PERCENTpreun] = ACTIONS(265),
    [anon_sym_PERCENTpostun] = ACTIONS(265),
    [anon_sym_PERCENTpretrans] = ACTIONS(265),
    [anon_sym_PERCENTposttrans] = ACTIONS(265),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(265),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(265),
    [anon_sym_PERCENTverify] = ACTIONS(265),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(265),
    [anon_sym_PERCENTtriggerin] = ACTIONS(265),
    [anon_sym_PERCENTtriggerun] = ACTIONS(265),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(265),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(265),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(265),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(265),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(265),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(265),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(265),
    [anon_sym_PERCENTfiles] = ACTIONS(265),
    [anon_sym_PERCENTdefattr] = ACTIONS(265),
    [anon_sym_PERCENTartifact] = ACTIONS(265),
    [anon_sym_PERCENTconfig] = ACTIONS(265),
    [anon_sym_PERCENTdir] = ACTIONS(265),
    [anon_sym_PERCENTdoc] = ACTIONS(265),
    [anon_sym_PERCENTdocdir] = ACTIONS(265),
    [anon_sym_PERCENTghost] = ACTIONS(265),
    [anon_sym_PERCENTlicense] = ACTIONS(265),
    [anon_sym_PERCENTmissingok] = ACTIONS(265),
    [anon_sym_PERCENTreadme] = ACTIONS(265),
    [anon_sym_PERCENTattr] = ACTIONS(265),
    [anon_sym_PERCENTchangelog] = ACTIONS(265),
    [anon_sym_PERCENTglobal] = ACTIONS(265),
    [anon_sym_PERCENTdefine] = ACTIONS(265),
    [anon_sym_PERCENTundefine] = ACTIONS(265),
    [anon_sym_PERCENT] = ACTIONS(265),
    [sym_string_content] = ACTIONS(265),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(265),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(265),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym__simple_statements_token1] = ACTIONS(269),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(269),
    [anon_sym_PERCENTifarch] = ACTIONS(269),
    [anon_sym_PERCENTifos] = ACTIONS(269),
    [anon_sym_PERCENTifnarch] = ACTIONS(269),
    [anon_sym_PERCENTifnos] = ACTIONS(269),
    [anon_sym_AutoProv] = ACTIONS(269),
    [anon_sym_AutoReq] = ACTIONS(269),
    [anon_sym_AutoReqProv] = ACTIONS(269),
    [anon_sym_BugUrl] = ACTIONS(269),
    [anon_sym_BuildRoot] = ACTIONS(269),
    [anon_sym_BuildSystem] = ACTIONS(269),
    [anon_sym_DistTag] = ACTIONS(269),
    [anon_sym_Distribution] = ACTIONS(269),
    [anon_sym_Epoch] = ACTIONS(269),
    [anon_sym_Group] = ACTIONS(269),
    [anon_sym_License] = ACTIONS(269),
    [anon_sym_ModularityLabel] = ACTIONS(269),
    [anon_sym_Name] = ACTIONS(269),
    [anon_sym_NoPatch] = ACTIONS(269),
    [anon_sym_NoSource] = ACTIONS(269),
    [anon_sym_Packager] = ACTIONS(269),
    [anon_sym_Release] = ACTIONS(269),
    [anon_sym_SourceLicense] = ACTIONS(269),
    [anon_sym_Summary] = ACTIONS(269),
    [anon_sym_URL] = ACTIONS(269),
    [anon_sym_Url] = ACTIONS(269),
    [anon_sym_VCS] = ACTIONS(269),
    [anon_sym_Vendor] = ACTIONS(269),
    [anon_sym_Version] = ACTIONS(269),
    [aux_sym_tag_token1] = ACTIONS(269),
    [aux_sym_tag_token2] = ACTIONS(269),
    [anon_sym_Requires] = ACTIONS(269),
    [anon_sym_BuildArch] = ACTIONS(269),
    [anon_sym_BuildArchitectures] = ACTIONS(269),
    [anon_sym_BuildConflicts] = ACTIONS(269),
    [anon_sym_BuildPrereq] = ACTIONS(269),
    [anon_sym_BuildRequires] = ACTIONS(269),
    [anon_sym_Conflicts] = ACTIONS(269),
    [anon_sym_DocDir] = ACTIONS(269),
    [anon_sym_Enhances] = ACTIONS(269),
    [anon_sym_ExcludeArch] = ACTIONS(269),
    [anon_sym_ExcludeOS] = ACTIONS(269),
    [anon_sym_ExclusiveArch] = ACTIONS(269),
    [anon_sym_ExclusiveOS] = ACTIONS(269),
    [anon_sym_Obsoletes] = ACTIONS(269),
    [anon_sym_OrderWithRequires] = ACTIONS(269),
    [anon_sym_Prefix] = ACTIONS(269),
    [anon_sym_Prefixes] = ACTIONS(269),
    [anon_sym_Prereq] = ACTIONS(269),
    [anon_sym_Provides] = ACTIONS(269),
    [anon_sym_Recommends] = ACTIONS(269),
    [anon_sym_RemovePathPostfixes] = ACTIONS(269),
    [anon_sym_Suggests] = ACTIONS(269),
    [anon_sym_Supplements] = ACTIONS(269),
    [anon_sym_PERCENTdescription] = ACTIONS(269),
    [anon_sym_PERCENTpackage] = ACTIONS(269),
    [anon_sym_PERCENTprep] = ACTIONS(269),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(269),
    [anon_sym_PERCENTconf] = ACTIONS(269),
    [anon_sym_PERCENTbuild] = ACTIONS(269),
    [anon_sym_PERCENTinstall] = ACTIONS(269),
    [anon_sym_PERCENTcheck] = ACTIONS(269),
    [anon_sym_PERCENTclean] = ACTIONS(269),
    [anon_sym_PERCENTpre] = ACTIONS(269),
    [anon_sym_PERCENTpost] = ACTIONS(269),
    [anon_sym_PERCENTpreun] = ACTIONS(269),
    [anon_sym_PERCENTpostun] = ACTIONS(269),
    [anon_sym_PERCENTpretrans] = ACTIONS(269),
    [anon_sym_PERCENTposttrans] = ACTIONS(269),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(269),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(269),
    [anon_sym_PERCENTverify] = ACTIONS(269),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(269),
    [anon_sym_PERCENTtriggerin] = ACTIONS(269),
    [anon_sym_PERCENTtriggerun] = ACTIONS(269),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(269),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(269),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(269),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(269),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(269),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(269),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(269),
    [anon_sym_PERCENTfiles] = ACTIONS(269),
    [anon_sym_PERCENTdefattr] = ACTIONS(269),
    [anon_sym_PERCENTartifact] = ACTIONS(269),
    [anon_sym_PERCENTconfig] = ACTIONS(269),
    [anon_sym_PERCENTdir] = ACTIONS(269),
    [anon_sym_PERCENTdoc] = ACTIONS(269),
    [anon_sym_PERCENTdocdir] = ACTIONS(269),
    [anon_sym_PERCENTghost] = ACTIONS(269),
    [anon_sym_PERCENTlicense] = ACTIONS(269),
    [anon_sym_PERCENTmissingok] = ACTIONS(269),
    [anon_sym_PERCENTreadme] = ACTIONS(269),
    [anon_sym_PERCENTattr] = ACTIONS(269),
    [anon_sym_PERCENTchangelog] = ACTIONS(269),
    [anon_sym_PERCENTglobal] = ACTIONS(269),
    [anon_sym_PERCENTdefine] = ACTIONS(269),
    [anon_sym_PERCENTundefine] = ACTIONS(269),
    [anon_sym_PERCENT] = ACTIONS(269),
    [sym_string_content] = ACTIONS(269),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(269),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(269),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [aux_sym__simple_statements_token1] = ACTIONS(273),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(273),
    [anon_sym_PERCENTifarch] = ACTIONS(273),
    [anon_sym_PERCENTifos] = ACTIONS(273),
    [anon_sym_PERCENTifnarch] = ACTIONS(273),
    [anon_sym_PERCENTifnos] = ACTIONS(273),
    [anon_sym_AutoProv] = ACTIONS(273),
    [anon_sym_AutoReq] = ACTIONS(273),
    [anon_sym_AutoReqProv] = ACTIONS(273),
    [anon_sym_BugUrl] = ACTIONS(273),
    [anon_sym_BuildRoot] = ACTIONS(273),
    [anon_sym_BuildSystem] = ACTIONS(273),
    [anon_sym_DistTag] = ACTIONS(273),
    [anon_sym_Distribution] = ACTIONS(273),
    [anon_sym_Epoch] = ACTIONS(273),
    [anon_sym_Group] = ACTIONS(273),
    [anon_sym_License] = ACTIONS(273),
    [anon_sym_ModularityLabel] = ACTIONS(273),
    [anon_sym_Name] = ACTIONS(273),
    [anon_sym_NoPatch] = ACTIONS(273),
    [anon_sym_NoSource] = ACTIONS(273),
    [anon_sym_Packager] = ACTIONS(273),
    [anon_sym_Release] = ACTIONS(273),
    [anon_sym_SourceLicense] = ACTIONS(273),
    [anon_sym_Summary] = ACTIONS(273),
    [anon_sym_URL] = ACTIONS(273),
    [anon_sym_Url] = ACTIONS(273),
    [anon_sym_VCS] = ACTIONS(273),
    [anon_sym_Vendor] = ACTIONS(273),
    [anon_sym_Version] = ACTIONS(273),
    [aux_sym_tag_token1] = ACTIONS(273),
    [aux_sym_tag_token2] = ACTIONS(273),
    [anon_sym_Requires] = ACTIONS(273),
    [anon_sym_BuildArch] = ACTIONS(273),
    [anon_sym_BuildArchitectures] = ACTIONS(273),
    [anon_sym_BuildConflicts] = ACTIONS(273),
    [anon_sym_BuildPrereq] = ACTIONS(273),
    [anon_sym_BuildRequires] = ACTIONS(273),
    [anon_sym_Conflicts] = ACTIONS(273),
    [anon_sym_DocDir] = ACTIONS(273),
    [anon_sym_Enhances] = ACTIONS(273),
    [anon_sym_ExcludeArch] = ACTIONS(273),
    [anon_sym_ExcludeOS] = ACTIONS(273),
    [anon_sym_ExclusiveArch] = ACTIONS(273),
    [anon_sym_ExclusiveOS] = ACTIONS(273),
    [anon_sym_Obsoletes] = ACTIONS(273),
    [anon_sym_OrderWithRequires] = ACTIONS(273),
    [anon_sym_Prefix] = ACTIONS(273),
    [anon_sym_Prefixes] = ACTIONS(273),
    [anon_sym_Prereq] = ACTIONS(273),
    [anon_sym_Provides] = ACTIONS(273),
    [anon_sym_Recommends] = ACTIONS(273),
    [anon_sym_RemovePathPostfixes] = ACTIONS(273),
    [anon_sym_Suggests] = ACTIONS(273),
    [anon_sym_Supplements] = ACTIONS(273),
    [anon_sym_PERCENTdescription] = ACTIONS(273),
    [anon_sym_PERCENTpackage] = ACTIONS(273),
    [anon_sym_PERCENTprep] = ACTIONS(273),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(273),
    [anon_sym_PERCENTconf] = ACTIONS(273),
    [anon_sym_PERCENTbuild] = ACTIONS(273),
    [anon_sym_PERCENTinstall] = ACTIONS(273),
    [anon_sym_PERCENTcheck] = ACTIONS(273),
    [anon_sym_PERCENTclean] = ACTIONS(273),
    [anon_sym_PERCENTpre] = ACTIONS(273),
    [anon_sym_PERCENTpost] = ACTIONS(273),
    [anon_sym_PERCENTpreun] = ACTIONS(273),
    [anon_sym_PERCENTpostun] = ACTIONS(273),
    [anon_sym_PERCENTpretrans] = ACTIONS(273),
    [anon_sym_PERCENTposttrans] = ACTIONS(273),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(273),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(273),
    [anon_sym_PERCENTverify] = ACTIONS(273),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(273),
    [anon_sym_PERCENTtriggerin] = ACTIONS(273),
    [anon_sym_PERCENTtriggerun] = ACTIONS(273),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(273),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(273),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(273),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(273),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(273),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(273),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(273),
    [anon_sym_PERCENTfiles] = ACTIONS(273),
    [anon_sym_PERCENTdefattr] = ACTIONS(273),
    [anon_sym_PERCENTartifact] = ACTIONS(273),
    [anon_sym_PERCENTconfig] = ACTIONS(273),
    [anon_sym_PERCENTdir] = ACTIONS(273),
    [anon_sym_PERCENTdoc] = ACTIONS(273),
    [anon_sym_PERCENTdocdir] = ACTIONS(273),
    [anon_sym_PERCENTghost] = ACTIONS(273),
    [anon_sym_PERCENTlicense] = ACTIONS(273),
    [anon_sym_PERCENTmissingok] = ACTIONS(273),
    [anon_sym_PERCENTreadme] = ACTIONS(273),
    [anon_sym_PERCENTattr] = ACTIONS(273),
    [anon_sym_PERCENTchangelog] = ACTIONS(273),
    [anon_sym_PERCENTglobal] = ACTIONS(273),
    [anon_sym_PERCENTdefine] = ACTIONS(273),
    [anon_sym_PERCENTundefine] = ACTIONS(273),
    [anon_sym_PERCENT] = ACTIONS(273),
    [sym_string_content] = ACTIONS(273),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(273),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(273),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [aux_sym__simple_statements_token1] = ACTIONS(277),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(277),
    [anon_sym_PERCENTifarch] = ACTIONS(277),
    [anon_sym_PERCENTifos] = ACTIONS(277),
    [anon_sym_PERCENTifnarch] = ACTIONS(277),
    [anon_sym_PERCENTifnos] = ACTIONS(277),
    [anon_sym_AutoProv] = ACTIONS(277),
    [anon_sym_AutoReq] = ACTIONS(277),
    [anon_sym_AutoReqProv] = ACTIONS(277),
    [anon_sym_BugUrl] = ACTIONS(277),
    [anon_sym_BuildRoot] = ACTIONS(277),
    [anon_sym_BuildSystem] = ACTIONS(277),
    [anon_sym_DistTag] = ACTIONS(277),
    [anon_sym_Distribution] = ACTIONS(277),
    [anon_sym_Epoch] = ACTIONS(277),
    [anon_sym_Group] = ACTIONS(277),
    [anon_sym_License] = ACTIONS(277),
    [anon_sym_ModularityLabel] = ACTIONS(277),
    [anon_sym_Name] = ACTIONS(277),
    [anon_sym_NoPatch] = ACTIONS(277),
    [anon_sym_NoSource] = ACTIONS(277),
    [anon_sym_Packager] = ACTIONS(277),
    [anon_sym_Release] = ACTIONS(277),
    [anon_sym_SourceLicense] = ACTIONS(277),
    [anon_sym_Summary] = ACTIONS(277),
    [anon_sym_URL] = ACTIONS(277),
    [anon_sym_Url] = ACTIONS(277),
    [anon_sym_VCS] = ACTIONS(277),
    [anon_sym_Vendor] = ACTIONS(277),
    [anon_sym_Version] = ACTIONS(277),
    [aux_sym_tag_token1] = ACTIONS(277),
    [aux_sym_tag_token2] = ACTIONS(277),
    [anon_sym_Requires] = ACTIONS(277),
    [anon_sym_BuildArch] = ACTIONS(277),
    [anon_sym_BuildArchitectures] = ACTIONS(277),
    [anon_sym_BuildConflicts] = ACTIONS(277),
    [anon_sym_BuildPrereq] = ACTIONS(277),
    [anon_sym_BuildRequires] = ACTIONS(277),
    [anon_sym_Conflicts] = ACTIONS(277),
    [anon_sym_DocDir] = ACTIONS(277),
    [anon_sym_Enhances] = ACTIONS(277),
    [anon_sym_ExcludeArch] = ACTIONS(277),
    [anon_sym_ExcludeOS] = ACTIONS(277),
    [anon_sym_ExclusiveArch] = ACTIONS(277),
    [anon_sym_ExclusiveOS] = ACTIONS(277),
    [anon_sym_Obsoletes] = ACTIONS(277),
    [anon_sym_OrderWithRequires] = ACTIONS(277),
    [anon_sym_Prefix] = ACTIONS(277),
    [anon_sym_Prefixes] = ACTIONS(277),
    [anon_sym_Prereq] = ACTIONS(277),
    [anon_sym_Provides] = ACTIONS(277),
    [anon_sym_Recommends] = ACTIONS(277),
    [anon_sym_RemovePathPostfixes] = ACTIONS(277),
    [anon_sym_Suggests] = ACTIONS(277),
    [anon_sym_Supplements] = ACTIONS(277),
    [anon_sym_PERCENTdescription] = ACTIONS(277),
    [anon_sym_PERCENTpackage] = ACTIONS(277),
    [anon_sym_PERCENTprep] = ACTIONS(277),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(277),
    [anon_sym_PERCENTconf] = ACTIONS(277),
    [anon_sym_PERCENTbuild] = ACTIONS(277),
    [anon_sym_PERCENTinstall] = ACTIONS(277),
    [anon_sym_PERCENTcheck] = ACTIONS(277),
    [anon_sym_PERCENTclean] = ACTIONS(277),
    [anon_sym_PERCENTpre] = ACTIONS(277),
    [anon_sym_PERCENTpost] = ACTIONS(277),
    [anon_sym_PERCENTpreun] = ACTIONS(277),
    [anon_sym_PERCENTpostun] = ACTIONS(277),
    [anon_sym_PERCENTpretrans] = ACTIONS(277),
    [anon_sym_PERCENTposttrans] = ACTIONS(277),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(277),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(277),
    [anon_sym_PERCENTverify] = ACTIONS(277),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(277),
    [anon_sym_PERCENTtriggerin] = ACTIONS(277),
    [anon_sym_PERCENTtriggerun] = ACTIONS(277),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(277),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(277),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(277),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(277),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(277),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(277),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(277),
    [anon_sym_PERCENTfiles] = ACTIONS(277),
    [anon_sym_PERCENTdefattr] = ACTIONS(277),
    [anon_sym_PERCENTartifact] = ACTIONS(277),
    [anon_sym_PERCENTconfig] = ACTIONS(277),
    [anon_sym_PERCENTdir] = ACTIONS(277),
    [anon_sym_PERCENTdoc] = ACTIONS(277),
    [anon_sym_PERCENTdocdir] = ACTIONS(277),
    [anon_sym_PERCENTghost] = ACTIONS(277),
    [anon_sym_PERCENTlicense] = ACTIONS(277),
    [anon_sym_PERCENTmissingok] = ACTIONS(277),
    [anon_sym_PERCENTreadme] = ACTIONS(277),
    [anon_sym_PERCENTattr] = ACTIONS(277),
    [anon_sym_PERCENTchangelog] = ACTIONS(277),
    [anon_sym_PERCENTglobal] = ACTIONS(277),
    [anon_sym_PERCENTdefine] = ACTIONS(277),
    [anon_sym_PERCENTundefine] = ACTIONS(277),
    [anon_sym_PERCENT] = ACTIONS(277),
    [sym_string_content] = ACTIONS(277),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(277),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(277),
  },
  [19] = {
    [aux_sym__value] = STATE(112),
    [sym_string] = STATE(112),
    [sym__macro_expansion] = STATE(135),
    [sym_simple_expansion] = STATE(135),
    [sym_full_expansion] = STATE(135),
    [sym_shell_expansion] = STATE(135),
    [aux_sym_string_repeat1] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym__simple_statements_token1] = ACTIONS(281),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(281),
    [anon_sym_PERCENTifarch] = ACTIONS(281),
    [anon_sym_PERCENTifos] = ACTIONS(281),
    [anon_sym_PERCENTifnarch] = ACTIONS(281),
    [anon_sym_PERCENTifnos] = ACTIONS(281),
    [anon_sym_AutoProv] = ACTIONS(281),
    [anon_sym_AutoReq] = ACTIONS(281),
    [anon_sym_AutoReqProv] = ACTIONS(281),
    [anon_sym_BugUrl] = ACTIONS(281),
    [anon_sym_BuildRoot] = ACTIONS(281),
    [anon_sym_BuildSystem] = ACTIONS(281),
    [anon_sym_DistTag] = ACTIONS(281),
    [anon_sym_Distribution] = ACTIONS(281),
    [anon_sym_Epoch] = ACTIONS(281),
    [anon_sym_Group] = ACTIONS(281),
    [anon_sym_License] = ACTIONS(281),
    [anon_sym_ModularityLabel] = ACTIONS(281),
    [anon_sym_Name] = ACTIONS(281),
    [anon_sym_NoPatch] = ACTIONS(281),
    [anon_sym_NoSource] = ACTIONS(281),
    [anon_sym_Packager] = ACTIONS(281),
    [anon_sym_Release] = ACTIONS(281),
    [anon_sym_SourceLicense] = ACTIONS(281),
    [anon_sym_Summary] = ACTIONS(281),
    [anon_sym_URL] = ACTIONS(281),
    [anon_sym_Url] = ACTIONS(281),
    [anon_sym_VCS] = ACTIONS(281),
    [anon_sym_Vendor] = ACTIONS(281),
    [anon_sym_Version] = ACTIONS(281),
    [aux_sym_tag_token1] = ACTIONS(281),
    [aux_sym_tag_token2] = ACTIONS(281),
    [anon_sym_Requires] = ACTIONS(281),
    [anon_sym_BuildArch] = ACTIONS(281),
    [anon_sym_BuildArchitectures] = ACTIONS(281),
    [anon_sym_BuildConflicts] = ACTIONS(281),
    [anon_sym_BuildPrereq] = ACTIONS(281),
    [anon_sym_BuildRequires] = ACTIONS(281),
    [anon_sym_Conflicts] = ACTIONS(281),
    [anon_sym_DocDir] = ACTIONS(281),
    [anon_sym_Enhances] = ACTIONS(281),
    [anon_sym_ExcludeArch] = ACTIONS(281),
    [anon_sym_ExcludeOS] = ACTIONS(281),
    [anon_sym_ExclusiveArch] = ACTIONS(281),
    [anon_sym_ExclusiveOS] = ACTIONS(281),
    [anon_sym_Obsoletes] = ACTIONS(281),
    [anon_sym_OrderWithRequires] = ACTIONS(281),
    [anon_sym_Prefix] = ACTIONS(281),
    [anon_sym_Prefixes] = ACTIONS(281),
    [anon_sym_Prereq] = ACTIONS(281),
    [anon_sym_Provides] = ACTIONS(281),
    [anon_sym_Recommends] = ACTIONS(281),
    [anon_sym_RemovePathPostfixes] = ACTIONS(281),
    [anon_sym_Suggests] = ACTIONS(281),
    [anon_sym_Supplements] = ACTIONS(281),
    [anon_sym_PERCENTdescription] = ACTIONS(281),
    [anon_sym_PERCENTpackage] = ACTIONS(281),
    [anon_sym_PERCENTprep] = ACTIONS(281),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(281),
    [anon_sym_PERCENTconf] = ACTIONS(281),
    [anon_sym_PERCENTbuild] = ACTIONS(281),
    [anon_sym_PERCENTinstall] = ACTIONS(281),
    [anon_sym_PERCENTcheck] = ACTIONS(281),
    [anon_sym_PERCENTclean] = ACTIONS(281),
    [anon_sym_PERCENTpre] = ACTIONS(281),
    [anon_sym_PERCENTpost] = ACTIONS(281),
    [anon_sym_PERCENTpreun] = ACTIONS(281),
    [anon_sym_PERCENTpostun] = ACTIONS(281),
    [anon_sym_PERCENTpretrans] = ACTIONS(281),
    [anon_sym_PERCENTposttrans] = ACTIONS(281),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(281),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(281),
    [anon_sym_PERCENTverify] = ACTIONS(281),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(281),
    [anon_sym_PERCENTtriggerin] = ACTIONS(281),
    [anon_sym_PERCENTtriggerun] = ACTIONS(281),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(281),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(281),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(281),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(281),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(281),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(281),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(281),
    [anon_sym_PERCENTfiles] = ACTIONS(281),
    [anon_sym_PERCENTchangelog] = ACTIONS(281),
    [anon_sym_PERCENTglobal] = ACTIONS(281),
    [anon_sym_PERCENTdefine] = ACTIONS(281),
    [anon_sym_PERCENTundefine] = ACTIONS(281),
    [sym_integer] = ACTIONS(283),
    [sym_float] = ACTIONS(283),
    [anon_sym_PERCENT] = ACTIONS(281),
    [sym_string_content] = ACTIONS(285),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(281),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(281),
  },
  [20] = {
    [sym_string_with_newlines] = STATE(61),
    [sym__macro_expansion] = STATE(24),
    [sym_simple_expansion] = STATE(24),
    [sym_full_expansion] = STATE(24),
    [sym_shell_expansion] = STATE(24),
    [aux_sym_string_with_newlines_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(287),
    [aux_sym__simple_statements_token1] = ACTIONS(289),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(289),
    [anon_sym_PERCENTifarch] = ACTIONS(289),
    [anon_sym_PERCENTifos] = ACTIONS(289),
    [anon_sym_PERCENTifnarch] = ACTIONS(289),
    [anon_sym_PERCENTifnos] = ACTIONS(289),
    [anon_sym_AutoProv] = ACTIONS(289),
    [anon_sym_AutoReq] = ACTIONS(289),
    [anon_sym_AutoReqProv] = ACTIONS(289),
    [anon_sym_BugUrl] = ACTIONS(289),
    [anon_sym_BuildRoot] = ACTIONS(289),
    [anon_sym_BuildSystem] = ACTIONS(289),
    [anon_sym_DistTag] = ACTIONS(289),
    [anon_sym_Distribution] = ACTIONS(289),
    [anon_sym_Epoch] = ACTIONS(289),
    [anon_sym_Group] = ACTIONS(289),
    [anon_sym_License] = ACTIONS(289),
    [anon_sym_ModularityLabel] = ACTIONS(289),
    [anon_sym_Name] = ACTIONS(289),
    [anon_sym_NoPatch] = ACTIONS(289),
    [anon_sym_NoSource] = ACTIONS(289),
    [anon_sym_Packager] = ACTIONS(289),
    [anon_sym_Release] = ACTIONS(289),
    [anon_sym_SourceLicense] = ACTIONS(289),
    [anon_sym_Summary] = ACTIONS(289),
    [anon_sym_URL] = ACTIONS(289),
    [anon_sym_Url] = ACTIONS(289),
    [anon_sym_VCS] = ACTIONS(289),
    [anon_sym_Vendor] = ACTIONS(289),
    [anon_sym_Version] = ACTIONS(289),
    [aux_sym_tag_token1] = ACTIONS(289),
    [aux_sym_tag_token2] = ACTIONS(289),
    [anon_sym_Requires] = ACTIONS(289),
    [anon_sym_BuildArch] = ACTIONS(289),
    [anon_sym_BuildArchitectures] = ACTIONS(289),
    [anon_sym_BuildConflicts] = ACTIONS(289),
    [anon_sym_BuildPrereq] = ACTIONS(289),
    [anon_sym_BuildRequires] = ACTIONS(289),
    [anon_sym_Conflicts] = ACTIONS(289),
    [anon_sym_DocDir] = ACTIONS(289),
    [anon_sym_Enhances] = ACTIONS(289),
    [anon_sym_ExcludeArch] = ACTIONS(289),
    [anon_sym_ExcludeOS] = ACTIONS(289),
    [anon_sym_ExclusiveArch] = ACTIONS(289),
    [anon_sym_ExclusiveOS] = ACTIONS(289),
    [anon_sym_Obsoletes] = ACTIONS(289),
    [anon_sym_OrderWithRequires] = ACTIONS(289),
    [anon_sym_Prefix] = ACTIONS(289),
    [anon_sym_Prefixes] = ACTIONS(289),
    [anon_sym_Prereq] = ACTIONS(289),
    [anon_sym_Provides] = ACTIONS(289),
    [anon_sym_Recommends] = ACTIONS(289),
    [anon_sym_RemovePathPostfixes] = ACTIONS(289),
    [anon_sym_Suggests] = ACTIONS(289),
    [anon_sym_Supplements] = ACTIONS(289),
    [anon_sym_PERCENTdescription] = ACTIONS(289),
    [anon_sym_PERCENTpackage] = ACTIONS(289),
    [anon_sym_PERCENTprep] = ACTIONS(289),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(289),
    [anon_sym_PERCENTconf] = ACTIONS(289),
    [anon_sym_PERCENTbuild] = ACTIONS(289),
    [anon_sym_PERCENTinstall] = ACTIONS(289),
    [anon_sym_PERCENTcheck] = ACTIONS(289),
    [anon_sym_PERCENTclean] = ACTIONS(289),
    [anon_sym_PERCENTpre] = ACTIONS(289),
    [anon_sym_PERCENTpost] = ACTIONS(289),
    [anon_sym_PERCENTpreun] = ACTIONS(289),
    [anon_sym_PERCENTpostun] = ACTIONS(289),
    [anon_sym_PERCENTpretrans] = ACTIONS(289),
    [anon_sym_PERCENTposttrans] = ACTIONS(289),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(289),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(289),
    [anon_sym_PERCENTverify] = ACTIONS(289),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(289),
    [anon_sym_PERCENTtriggerin] = ACTIONS(289),
    [anon_sym_PERCENTtriggerun] = ACTIONS(289),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(289),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(289),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(289),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(289),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(289),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(289),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(289),
    [anon_sym_PERCENTfiles] = ACTIONS(289),
    [anon_sym_PERCENTchangelog] = ACTIONS(289),
    [anon_sym_PERCENTglobal] = ACTIONS(289),
    [anon_sym_PERCENTdefine] = ACTIONS(289),
    [anon_sym_PERCENTundefine] = ACTIONS(289),
    [anon_sym_PERCENT] = ACTIONS(291),
    [sym_string_content_with_newlines] = ACTIONS(293),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(295),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(297),
  },
  [21] = {
    [sym_string_with_newlines] = STATE(72),
    [sym__macro_expansion] = STATE(24),
    [sym_simple_expansion] = STATE(24),
    [sym_full_expansion] = STATE(24),
    [sym_shell_expansion] = STATE(24),
    [aux_sym_string_with_newlines_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym__simple_statements_token1] = ACTIONS(301),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(301),
    [anon_sym_PERCENTifarch] = ACTIONS(301),
    [anon_sym_PERCENTifos] = ACTIONS(301),
    [anon_sym_PERCENTifnarch] = ACTIONS(301),
    [anon_sym_PERCENTifnos] = ACTIONS(301),
    [anon_sym_AutoProv] = ACTIONS(301),
    [anon_sym_AutoReq] = ACTIONS(301),
    [anon_sym_AutoReqProv] = ACTIONS(301),
    [anon_sym_BugUrl] = ACTIONS(301),
    [anon_sym_BuildRoot] = ACTIONS(301),
    [anon_sym_BuildSystem] = ACTIONS(301),
    [anon_sym_DistTag] = ACTIONS(301),
    [anon_sym_Distribution] = ACTIONS(301),
    [anon_sym_Epoch] = ACTIONS(301),
    [anon_sym_Group] = ACTIONS(301),
    [anon_sym_License] = ACTIONS(301),
    [anon_sym_ModularityLabel] = ACTIONS(301),
    [anon_sym_Name] = ACTIONS(301),
    [anon_sym_NoPatch] = ACTIONS(301),
    [anon_sym_NoSource] = ACTIONS(301),
    [anon_sym_Packager] = ACTIONS(301),
    [anon_sym_Release] = ACTIONS(301),
    [anon_sym_SourceLicense] = ACTIONS(301),
    [anon_sym_Summary] = ACTIONS(301),
    [anon_sym_URL] = ACTIONS(301),
    [anon_sym_Url] = ACTIONS(301),
    [anon_sym_VCS] = ACTIONS(301),
    [anon_sym_Vendor] = ACTIONS(301),
    [anon_sym_Version] = ACTIONS(301),
    [aux_sym_tag_token1] = ACTIONS(301),
    [aux_sym_tag_token2] = ACTIONS(301),
    [anon_sym_Requires] = ACTIONS(301),
    [anon_sym_BuildArch] = ACTIONS(301),
    [anon_sym_BuildArchitectures] = ACTIONS(301),
    [anon_sym_BuildConflicts] = ACTIONS(301),
    [anon_sym_BuildPrereq] = ACTIONS(301),
    [anon_sym_BuildRequires] = ACTIONS(301),
    [anon_sym_Conflicts] = ACTIONS(301),
    [anon_sym_DocDir] = ACTIONS(301),
    [anon_sym_Enhances] = ACTIONS(301),
    [anon_sym_ExcludeArch] = ACTIONS(301),
    [anon_sym_ExcludeOS] = ACTIONS(301),
    [anon_sym_ExclusiveArch] = ACTIONS(301),
    [anon_sym_ExclusiveOS] = ACTIONS(301),
    [anon_sym_Obsoletes] = ACTIONS(301),
    [anon_sym_OrderWithRequires] = ACTIONS(301),
    [anon_sym_Prefix] = ACTIONS(301),
    [anon_sym_Prefixes] = ACTIONS(301),
    [anon_sym_Prereq] = ACTIONS(301),
    [anon_sym_Provides] = ACTIONS(301),
    [anon_sym_Recommends] = ACTIONS(301),
    [anon_sym_RemovePathPostfixes] = ACTIONS(301),
    [anon_sym_Suggests] = ACTIONS(301),
    [anon_sym_Supplements] = ACTIONS(301),
    [anon_sym_PERCENTdescription] = ACTIONS(301),
    [anon_sym_PERCENTpackage] = ACTIONS(301),
    [anon_sym_PERCENTprep] = ACTIONS(301),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(301),
    [anon_sym_PERCENTconf] = ACTIONS(301),
    [anon_sym_PERCENTbuild] = ACTIONS(301),
    [anon_sym_PERCENTinstall] = ACTIONS(301),
    [anon_sym_PERCENTcheck] = ACTIONS(301),
    [anon_sym_PERCENTclean] = ACTIONS(301),
    [anon_sym_PERCENTpre] = ACTIONS(301),
    [anon_sym_PERCENTpost] = ACTIONS(301),
    [anon_sym_PERCENTpreun] = ACTIONS(301),
    [anon_sym_PERCENTpostun] = ACTIONS(301),
    [anon_sym_PERCENTpretrans] = ACTIONS(301),
    [anon_sym_PERCENTposttrans] = ACTIONS(301),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(301),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(301),
    [anon_sym_PERCENTverify] = ACTIONS(301),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(301),
    [anon_sym_PERCENTtriggerin] = ACTIONS(301),
    [anon_sym_PERCENTtriggerun] = ACTIONS(301),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(301),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(301),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(301),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(301),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(301),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(301),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(301),
    [anon_sym_PERCENTfiles] = ACTIONS(301),
    [anon_sym_PERCENTchangelog] = ACTIONS(301),
    [anon_sym_PERCENTglobal] = ACTIONS(301),
    [anon_sym_PERCENTdefine] = ACTIONS(301),
    [anon_sym_PERCENTundefine] = ACTIONS(301),
    [anon_sym_PERCENT] = ACTIONS(291),
    [sym_string_content_with_newlines] = ACTIONS(293),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(295),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(297),
  },
  [22] = {
    [sym_string_with_newlines] = STATE(65),
    [sym__macro_expansion] = STATE(24),
    [sym_simple_expansion] = STATE(24),
    [sym_full_expansion] = STATE(24),
    [sym_shell_expansion] = STATE(24),
    [aux_sym_string_with_newlines_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(303),
    [aux_sym__simple_statements_token1] = ACTIONS(305),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(305),
    [anon_sym_PERCENTifarch] = ACTIONS(305),
    [anon_sym_PERCENTifos] = ACTIONS(305),
    [anon_sym_PERCENTifnarch] = ACTIONS(305),
    [anon_sym_PERCENTifnos] = ACTIONS(305),
    [anon_sym_AutoProv] = ACTIONS(305),
    [anon_sym_AutoReq] = ACTIONS(305),
    [anon_sym_AutoReqProv] = ACTIONS(305),
    [anon_sym_BugUrl] = ACTIONS(305),
    [anon_sym_BuildRoot] = ACTIONS(305),
    [anon_sym_BuildSystem] = ACTIONS(305),
    [anon_sym_DistTag] = ACTIONS(305),
    [anon_sym_Distribution] = ACTIONS(305),
    [anon_sym_Epoch] = ACTIONS(305),
    [anon_sym_Group] = ACTIONS(305),
    [anon_sym_License] = ACTIONS(305),
    [anon_sym_ModularityLabel] = ACTIONS(305),
    [anon_sym_Name] = ACTIONS(305),
    [anon_sym_NoPatch] = ACTIONS(305),
    [anon_sym_NoSource] = ACTIONS(305),
    [anon_sym_Packager] = ACTIONS(305),
    [anon_sym_Release] = ACTIONS(305),
    [anon_sym_SourceLicense] = ACTIONS(305),
    [anon_sym_Summary] = ACTIONS(305),
    [anon_sym_URL] = ACTIONS(305),
    [anon_sym_Url] = ACTIONS(305),
    [anon_sym_VCS] = ACTIONS(305),
    [anon_sym_Vendor] = ACTIONS(305),
    [anon_sym_Version] = ACTIONS(305),
    [aux_sym_tag_token1] = ACTIONS(305),
    [aux_sym_tag_token2] = ACTIONS(305),
    [anon_sym_Requires] = ACTIONS(305),
    [anon_sym_BuildArch] = ACTIONS(305),
    [anon_sym_BuildArchitectures] = ACTIONS(305),
    [anon_sym_BuildConflicts] = ACTIONS(305),
    [anon_sym_BuildPrereq] = ACTIONS(305),
    [anon_sym_BuildRequires] = ACTIONS(305),
    [anon_sym_Conflicts] = ACTIONS(305),
    [anon_sym_DocDir] = ACTIONS(305),
    [anon_sym_Enhances] = ACTIONS(305),
    [anon_sym_ExcludeArch] = ACTIONS(305),
    [anon_sym_ExcludeOS] = ACTIONS(305),
    [anon_sym_ExclusiveArch] = ACTIONS(305),
    [anon_sym_ExclusiveOS] = ACTIONS(305),
    [anon_sym_Obsoletes] = ACTIONS(305),
    [anon_sym_OrderWithRequires] = ACTIONS(305),
    [anon_sym_Prefix] = ACTIONS(305),
    [anon_sym_Prefixes] = ACTIONS(305),
    [anon_sym_Prereq] = ACTIONS(305),
    [anon_sym_Provides] = ACTIONS(305),
    [anon_sym_Recommends] = ACTIONS(305),
    [anon_sym_RemovePathPostfixes] = ACTIONS(305),
    [anon_sym_Suggests] = ACTIONS(305),
    [anon_sym_Supplements] = ACTIONS(305),
    [anon_sym_PERCENTdescription] = ACTIONS(305),
    [anon_sym_PERCENTpackage] = ACTIONS(305),
    [anon_sym_PERCENTprep] = ACTIONS(305),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(305),
    [anon_sym_PERCENTconf] = ACTIONS(305),
    [anon_sym_PERCENTbuild] = ACTIONS(305),
    [anon_sym_PERCENTinstall] = ACTIONS(305),
    [anon_sym_PERCENTcheck] = ACTIONS(305),
    [anon_sym_PERCENTclean] = ACTIONS(305),
    [anon_sym_PERCENTpre] = ACTIONS(305),
    [anon_sym_PERCENTpost] = ACTIONS(305),
    [anon_sym_PERCENTpreun] = ACTIONS(305),
    [anon_sym_PERCENTpostun] = ACTIONS(305),
    [anon_sym_PERCENTpretrans] = ACTIONS(305),
    [anon_sym_PERCENTposttrans] = ACTIONS(305),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(305),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(305),
    [anon_sym_PERCENTverify] = ACTIONS(305),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(305),
    [anon_sym_PERCENTtriggerin] = ACTIONS(305),
    [anon_sym_PERCENTtriggerun] = ACTIONS(305),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(305),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(305),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(305),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(305),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(305),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(305),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(305),
    [anon_sym_PERCENTfiles] = ACTIONS(305),
    [anon_sym_PERCENTchangelog] = ACTIONS(305),
    [anon_sym_PERCENTglobal] = ACTIONS(305),
    [anon_sym_PERCENTdefine] = ACTIONS(305),
    [anon_sym_PERCENTundefine] = ACTIONS(305),
    [anon_sym_PERCENT] = ACTIONS(291),
    [sym_string_content_with_newlines] = ACTIONS(293),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(295),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(297),
  },
  [23] = {
    [sym_string_with_newlines] = STATE(42),
    [sym__macro_expansion] = STATE(24),
    [sym_simple_expansion] = STATE(24),
    [sym_full_expansion] = STATE(24),
    [sym_shell_expansion] = STATE(24),
    [aux_sym_string_with_newlines_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(307),
    [aux_sym__simple_statements_token1] = ACTIONS(309),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(309),
    [anon_sym_PERCENTifarch] = ACTIONS(309),
    [anon_sym_PERCENTifos] = ACTIONS(309),
    [anon_sym_PERCENTifnarch] = ACTIONS(309),
    [anon_sym_PERCENTifnos] = ACTIONS(309),
    [anon_sym_AutoProv] = ACTIONS(309),
    [anon_sym_AutoReq] = ACTIONS(309),
    [anon_sym_AutoReqProv] = ACTIONS(309),
    [anon_sym_BugUrl] = ACTIONS(309),
    [anon_sym_BuildRoot] = ACTIONS(309),
    [anon_sym_BuildSystem] = ACTIONS(309),
    [anon_sym_DistTag] = ACTIONS(309),
    [anon_sym_Distribution] = ACTIONS(309),
    [anon_sym_Epoch] = ACTIONS(309),
    [anon_sym_Group] = ACTIONS(309),
    [anon_sym_License] = ACTIONS(309),
    [anon_sym_ModularityLabel] = ACTIONS(309),
    [anon_sym_Name] = ACTIONS(309),
    [anon_sym_NoPatch] = ACTIONS(309),
    [anon_sym_NoSource] = ACTIONS(309),
    [anon_sym_Packager] = ACTIONS(309),
    [anon_sym_Release] = ACTIONS(309),
    [anon_sym_SourceLicense] = ACTIONS(309),
    [anon_sym_Summary] = ACTIONS(309),
    [anon_sym_URL] = ACTIONS(309),
    [anon_sym_Url] = ACTIONS(309),
    [anon_sym_VCS] = ACTIONS(309),
    [anon_sym_Vendor] = ACTIONS(309),
    [anon_sym_Version] = ACTIONS(309),
    [aux_sym_tag_token1] = ACTIONS(309),
    [aux_sym_tag_token2] = ACTIONS(309),
    [anon_sym_Requires] = ACTIONS(309),
    [anon_sym_BuildArch] = ACTIONS(309),
    [anon_sym_BuildArchitectures] = ACTIONS(309),
    [anon_sym_BuildConflicts] = ACTIONS(309),
    [anon_sym_BuildPrereq] = ACTIONS(309),
    [anon_sym_BuildRequires] = ACTIONS(309),
    [anon_sym_Conflicts] = ACTIONS(309),
    [anon_sym_DocDir] = ACTIONS(309),
    [anon_sym_Enhances] = ACTIONS(309),
    [anon_sym_ExcludeArch] = ACTIONS(309),
    [anon_sym_ExcludeOS] = ACTIONS(309),
    [anon_sym_ExclusiveArch] = ACTIONS(309),
    [anon_sym_ExclusiveOS] = ACTIONS(309),
    [anon_sym_Obsoletes] = ACTIONS(309),
    [anon_sym_OrderWithRequires] = ACTIONS(309),
    [anon_sym_Prefix] = ACTIONS(309),
    [anon_sym_Prefixes] = ACTIONS(309),
    [anon_sym_Prereq] = ACTIONS(309),
    [anon_sym_Provides] = ACTIONS(309),
    [anon_sym_Recommends] = ACTIONS(309),
    [anon_sym_RemovePathPostfixes] = ACTIONS(309),
    [anon_sym_Suggests] = ACTIONS(309),
    [anon_sym_Supplements] = ACTIONS(309),
    [anon_sym_PERCENTdescription] = ACTIONS(309),
    [anon_sym_PERCENTpackage] = ACTIONS(309),
    [anon_sym_PERCENTprep] = ACTIONS(309),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(309),
    [anon_sym_PERCENTconf] = ACTIONS(309),
    [anon_sym_PERCENTbuild] = ACTIONS(309),
    [anon_sym_PERCENTinstall] = ACTIONS(309),
    [anon_sym_PERCENTcheck] = ACTIONS(309),
    [anon_sym_PERCENTclean] = ACTIONS(309),
    [anon_sym_PERCENTpre] = ACTIONS(309),
    [anon_sym_PERCENTpost] = ACTIONS(309),
    [anon_sym_PERCENTpreun] = ACTIONS(309),
    [anon_sym_PERCENTpostun] = ACTIONS(309),
    [anon_sym_PERCENTpretrans] = ACTIONS(309),
    [anon_sym_PERCENTposttrans] = ACTIONS(309),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(309),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(309),
    [anon_sym_PERCENTverify] = ACTIONS(309),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(309),
    [anon_sym_PERCENTtriggerin] = ACTIONS(309),
    [anon_sym_PERCENTtriggerun] = ACTIONS(309),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(309),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(309),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(309),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(309),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(309),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(309),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(309),
    [anon_sym_PERCENTfiles] = ACTIONS(309),
    [anon_sym_PERCENTchangelog] = ACTIONS(309),
    [anon_sym_PERCENTglobal] = ACTIONS(309),
    [anon_sym_PERCENTdefine] = ACTIONS(309),
    [anon_sym_PERCENTundefine] = ACTIONS(309),
    [anon_sym_PERCENT] = ACTIONS(291),
    [sym_string_content_with_newlines] = ACTIONS(293),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(295),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(297),
  },
  [24] = {
    [sym__macro_expansion] = STATE(25),
    [sym_simple_expansion] = STATE(25),
    [sym_full_expansion] = STATE(25),
    [sym_shell_expansion] = STATE(25),
    [aux_sym_string_with_newlines_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(311),
    [aux_sym__simple_statements_token1] = ACTIONS(313),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(313),
    [anon_sym_PERCENTifarch] = ACTIONS(313),
    [anon_sym_PERCENTifos] = ACTIONS(313),
    [anon_sym_PERCENTifnarch] = ACTIONS(313),
    [anon_sym_PERCENTifnos] = ACTIONS(313),
    [anon_sym_AutoProv] = ACTIONS(313),
    [anon_sym_AutoReq] = ACTIONS(313),
    [anon_sym_AutoReqProv] = ACTIONS(313),
    [anon_sym_BugUrl] = ACTIONS(313),
    [anon_sym_BuildRoot] = ACTIONS(313),
    [anon_sym_BuildSystem] = ACTIONS(313),
    [anon_sym_DistTag] = ACTIONS(313),
    [anon_sym_Distribution] = ACTIONS(313),
    [anon_sym_Epoch] = ACTIONS(313),
    [anon_sym_Group] = ACTIONS(313),
    [anon_sym_License] = ACTIONS(313),
    [anon_sym_ModularityLabel] = ACTIONS(313),
    [anon_sym_Name] = ACTIONS(313),
    [anon_sym_NoPatch] = ACTIONS(313),
    [anon_sym_NoSource] = ACTIONS(313),
    [anon_sym_Packager] = ACTIONS(313),
    [anon_sym_Release] = ACTIONS(313),
    [anon_sym_SourceLicense] = ACTIONS(313),
    [anon_sym_Summary] = ACTIONS(313),
    [anon_sym_URL] = ACTIONS(313),
    [anon_sym_Url] = ACTIONS(313),
    [anon_sym_VCS] = ACTIONS(313),
    [anon_sym_Vendor] = ACTIONS(313),
    [anon_sym_Version] = ACTIONS(313),
    [aux_sym_tag_token1] = ACTIONS(313),
    [aux_sym_tag_token2] = ACTIONS(313),
    [anon_sym_Requires] = ACTIONS(313),
    [anon_sym_BuildArch] = ACTIONS(313),
    [anon_sym_BuildArchitectures] = ACTIONS(313),
    [anon_sym_BuildConflicts] = ACTIONS(313),
    [anon_sym_BuildPrereq] = ACTIONS(313),
    [anon_sym_BuildRequires] = ACTIONS(313),
    [anon_sym_Conflicts] = ACTIONS(313),
    [anon_sym_DocDir] = ACTIONS(313),
    [anon_sym_Enhances] = ACTIONS(313),
    [anon_sym_ExcludeArch] = ACTIONS(313),
    [anon_sym_ExcludeOS] = ACTIONS(313),
    [anon_sym_ExclusiveArch] = ACTIONS(313),
    [anon_sym_ExclusiveOS] = ACTIONS(313),
    [anon_sym_Obsoletes] = ACTIONS(313),
    [anon_sym_OrderWithRequires] = ACTIONS(313),
    [anon_sym_Prefix] = ACTIONS(313),
    [anon_sym_Prefixes] = ACTIONS(313),
    [anon_sym_Prereq] = ACTIONS(313),
    [anon_sym_Provides] = ACTIONS(313),
    [anon_sym_Recommends] = ACTIONS(313),
    [anon_sym_RemovePathPostfixes] = ACTIONS(313),
    [anon_sym_Suggests] = ACTIONS(313),
    [anon_sym_Supplements] = ACTIONS(313),
    [anon_sym_PERCENTdescription] = ACTIONS(313),
    [anon_sym_PERCENTpackage] = ACTIONS(313),
    [anon_sym_PERCENTprep] = ACTIONS(313),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(313),
    [anon_sym_PERCENTconf] = ACTIONS(313),
    [anon_sym_PERCENTbuild] = ACTIONS(313),
    [anon_sym_PERCENTinstall] = ACTIONS(313),
    [anon_sym_PERCENTcheck] = ACTIONS(313),
    [anon_sym_PERCENTclean] = ACTIONS(313),
    [anon_sym_PERCENTpre] = ACTIONS(313),
    [anon_sym_PERCENTpost] = ACTIONS(313),
    [anon_sym_PERCENTpreun] = ACTIONS(313),
    [anon_sym_PERCENTpostun] = ACTIONS(313),
    [anon_sym_PERCENTpretrans] = ACTIONS(313),
    [anon_sym_PERCENTposttrans] = ACTIONS(313),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(313),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(313),
    [anon_sym_PERCENTverify] = ACTIONS(313),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(313),
    [anon_sym_PERCENTtriggerin] = ACTIONS(313),
    [anon_sym_PERCENTtriggerun] = ACTIONS(313),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(313),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(313),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(313),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(313),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(313),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(313),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(313),
    [anon_sym_PERCENTfiles] = ACTIONS(313),
    [anon_sym_PERCENTchangelog] = ACTIONS(313),
    [anon_sym_PERCENTglobal] = ACTIONS(313),
    [anon_sym_PERCENTdefine] = ACTIONS(313),
    [anon_sym_PERCENTundefine] = ACTIONS(313),
    [anon_sym_PERCENT] = ACTIONS(291),
    [sym_string_content_with_newlines] = ACTIONS(315),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(295),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(297),
  },
  [25] = {
    [sym__macro_expansion] = STATE(25),
    [sym_simple_expansion] = STATE(25),
    [sym_full_expansion] = STATE(25),
    [sym_shell_expansion] = STATE(25),
    [aux_sym_string_with_newlines_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(317),
    [aux_sym__simple_statements_token1] = ACTIONS(319),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(319),
    [anon_sym_PERCENTifarch] = ACTIONS(319),
    [anon_sym_PERCENTifos] = ACTIONS(319),
    [anon_sym_PERCENTifnarch] = ACTIONS(319),
    [anon_sym_PERCENTifnos] = ACTIONS(319),
    [anon_sym_AutoProv] = ACTIONS(319),
    [anon_sym_AutoReq] = ACTIONS(319),
    [anon_sym_AutoReqProv] = ACTIONS(319),
    [anon_sym_BugUrl] = ACTIONS(319),
    [anon_sym_BuildRoot] = ACTIONS(319),
    [anon_sym_BuildSystem] = ACTIONS(319),
    [anon_sym_DistTag] = ACTIONS(319),
    [anon_sym_Distribution] = ACTIONS(319),
    [anon_sym_Epoch] = ACTIONS(319),
    [anon_sym_Group] = ACTIONS(319),
    [anon_sym_License] = ACTIONS(319),
    [anon_sym_ModularityLabel] = ACTIONS(319),
    [anon_sym_Name] = ACTIONS(319),
    [anon_sym_NoPatch] = ACTIONS(319),
    [anon_sym_NoSource] = ACTIONS(319),
    [anon_sym_Packager] = ACTIONS(319),
    [anon_sym_Release] = ACTIONS(319),
    [anon_sym_SourceLicense] = ACTIONS(319),
    [anon_sym_Summary] = ACTIONS(319),
    [anon_sym_URL] = ACTIONS(319),
    [anon_sym_Url] = ACTIONS(319),
    [anon_sym_VCS] = ACTIONS(319),
    [anon_sym_Vendor] = ACTIONS(319),
    [anon_sym_Version] = ACTIONS(319),
    [aux_sym_tag_token1] = ACTIONS(319),
    [aux_sym_tag_token2] = ACTIONS(319),
    [anon_sym_Requires] = ACTIONS(319),
    [anon_sym_BuildArch] = ACTIONS(319),
    [anon_sym_BuildArchitectures] = ACTIONS(319),
    [anon_sym_BuildConflicts] = ACTIONS(319),
    [anon_sym_BuildPrereq] = ACTIONS(319),
    [anon_sym_BuildRequires] = ACTIONS(319),
    [anon_sym_Conflicts] = ACTIONS(319),
    [anon_sym_DocDir] = ACTIONS(319),
    [anon_sym_Enhances] = ACTIONS(319),
    [anon_sym_ExcludeArch] = ACTIONS(319),
    [anon_sym_ExcludeOS] = ACTIONS(319),
    [anon_sym_ExclusiveArch] = ACTIONS(319),
    [anon_sym_ExclusiveOS] = ACTIONS(319),
    [anon_sym_Obsoletes] = ACTIONS(319),
    [anon_sym_OrderWithRequires] = ACTIONS(319),
    [anon_sym_Prefix] = ACTIONS(319),
    [anon_sym_Prefixes] = ACTIONS(319),
    [anon_sym_Prereq] = ACTIONS(319),
    [anon_sym_Provides] = ACTIONS(319),
    [anon_sym_Recommends] = ACTIONS(319),
    [anon_sym_RemovePathPostfixes] = ACTIONS(319),
    [anon_sym_Suggests] = ACTIONS(319),
    [anon_sym_Supplements] = ACTIONS(319),
    [anon_sym_PERCENTdescription] = ACTIONS(319),
    [anon_sym_PERCENTpackage] = ACTIONS(319),
    [anon_sym_PERCENTprep] = ACTIONS(319),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(319),
    [anon_sym_PERCENTconf] = ACTIONS(319),
    [anon_sym_PERCENTbuild] = ACTIONS(319),
    [anon_sym_PERCENTinstall] = ACTIONS(319),
    [anon_sym_PERCENTcheck] = ACTIONS(319),
    [anon_sym_PERCENTclean] = ACTIONS(319),
    [anon_sym_PERCENTpre] = ACTIONS(319),
    [anon_sym_PERCENTpost] = ACTIONS(319),
    [anon_sym_PERCENTpreun] = ACTIONS(319),
    [anon_sym_PERCENTpostun] = ACTIONS(319),
    [anon_sym_PERCENTpretrans] = ACTIONS(319),
    [anon_sym_PERCENTposttrans] = ACTIONS(319),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(319),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(319),
    [anon_sym_PERCENTverify] = ACTIONS(319),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(319),
    [anon_sym_PERCENTtriggerin] = ACTIONS(319),
    [anon_sym_PERCENTtriggerun] = ACTIONS(319),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(319),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(319),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(319),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(319),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(319),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(319),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(319),
    [anon_sym_PERCENTfiles] = ACTIONS(319),
    [anon_sym_PERCENTchangelog] = ACTIONS(319),
    [anon_sym_PERCENTglobal] = ACTIONS(319),
    [anon_sym_PERCENTdefine] = ACTIONS(319),
    [anon_sym_PERCENTundefine] = ACTIONS(319),
    [anon_sym_PERCENT] = ACTIONS(321),
    [sym_string_content_with_newlines] = ACTIONS(324),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(327),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(330),
  },
  [26] = {
    [sym_changelog_entry] = STATE(26),
    [aux_sym_changelog_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(333),
    [aux_sym__simple_statements_token1] = ACTIONS(333),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(335),
    [anon_sym_PERCENTifarch] = ACTIONS(335),
    [anon_sym_PERCENTifos] = ACTIONS(335),
    [anon_sym_PERCENTifnarch] = ACTIONS(335),
    [anon_sym_PERCENTifnos] = ACTIONS(335),
    [anon_sym_AutoProv] = ACTIONS(335),
    [anon_sym_AutoReq] = ACTIONS(335),
    [anon_sym_AutoReqProv] = ACTIONS(335),
    [anon_sym_BugUrl] = ACTIONS(335),
    [anon_sym_BuildRoot] = ACTIONS(335),
    [anon_sym_BuildSystem] = ACTIONS(335),
    [anon_sym_DistTag] = ACTIONS(335),
    [anon_sym_Distribution] = ACTIONS(335),
    [anon_sym_Epoch] = ACTIONS(335),
    [anon_sym_Group] = ACTIONS(335),
    [anon_sym_License] = ACTIONS(335),
    [anon_sym_ModularityLabel] = ACTIONS(335),
    [anon_sym_Name] = ACTIONS(335),
    [anon_sym_NoPatch] = ACTIONS(335),
    [anon_sym_NoSource] = ACTIONS(335),
    [anon_sym_Packager] = ACTIONS(335),
    [anon_sym_Release] = ACTIONS(335),
    [anon_sym_SourceLicense] = ACTIONS(335),
    [anon_sym_Summary] = ACTIONS(335),
    [anon_sym_URL] = ACTIONS(335),
    [anon_sym_Url] = ACTIONS(335),
    [anon_sym_VCS] = ACTIONS(335),
    [anon_sym_Vendor] = ACTIONS(335),
    [anon_sym_Version] = ACTIONS(335),
    [aux_sym_tag_token1] = ACTIONS(335),
    [aux_sym_tag_token2] = ACTIONS(335),
    [anon_sym_Requires] = ACTIONS(335),
    [anon_sym_BuildArch] = ACTIONS(335),
    [anon_sym_BuildArchitectures] = ACTIONS(335),
    [anon_sym_BuildConflicts] = ACTIONS(335),
    [anon_sym_BuildPrereq] = ACTIONS(335),
    [anon_sym_BuildRequires] = ACTIONS(335),
    [anon_sym_Conflicts] = ACTIONS(335),
    [anon_sym_DocDir] = ACTIONS(335),
    [anon_sym_Enhances] = ACTIONS(335),
    [anon_sym_ExcludeArch] = ACTIONS(335),
    [anon_sym_ExcludeOS] = ACTIONS(335),
    [anon_sym_ExclusiveArch] = ACTIONS(335),
    [anon_sym_ExclusiveOS] = ACTIONS(335),
    [anon_sym_Obsoletes] = ACTIONS(335),
    [anon_sym_OrderWithRequires] = ACTIONS(335),
    [anon_sym_Prefix] = ACTIONS(335),
    [anon_sym_Prefixes] = ACTIONS(335),
    [anon_sym_Prereq] = ACTIONS(335),
    [anon_sym_Provides] = ACTIONS(335),
    [anon_sym_Recommends] = ACTIONS(335),
    [anon_sym_RemovePathPostfixes] = ACTIONS(335),
    [anon_sym_Suggests] = ACTIONS(335),
    [anon_sym_Supplements] = ACTIONS(335),
    [anon_sym_PERCENTdescription] = ACTIONS(335),
    [anon_sym_PERCENTpackage] = ACTIONS(335),
    [anon_sym_PERCENTprep] = ACTIONS(335),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(335),
    [anon_sym_PERCENTconf] = ACTIONS(335),
    [anon_sym_PERCENTbuild] = ACTIONS(335),
    [anon_sym_PERCENTinstall] = ACTIONS(335),
    [anon_sym_PERCENTcheck] = ACTIONS(335),
    [anon_sym_PERCENTclean] = ACTIONS(335),
    [anon_sym_PERCENTpre] = ACTIONS(335),
    [anon_sym_PERCENTpost] = ACTIONS(335),
    [anon_sym_PERCENTpreun] = ACTIONS(335),
    [anon_sym_PERCENTpostun] = ACTIONS(335),
    [anon_sym_PERCENTpretrans] = ACTIONS(335),
    [anon_sym_PERCENTposttrans] = ACTIONS(335),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(335),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(335),
    [anon_sym_PERCENTverify] = ACTIONS(335),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(335),
    [anon_sym_PERCENTtriggerin] = ACTIONS(335),
    [anon_sym_PERCENTtriggerun] = ACTIONS(335),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(335),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(335),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(335),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(335),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(335),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(335),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(335),
    [anon_sym_PERCENTfiles] = ACTIONS(335),
    [anon_sym_PERCENTchangelog] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(337),
    [anon_sym_PERCENTglobal] = ACTIONS(335),
    [anon_sym_PERCENTdefine] = ACTIONS(335),
    [anon_sym_PERCENTundefine] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(335),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(335),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(335),
  },
  [27] = {
    [aux_sym_changelog_entry_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(340),
    [aux_sym__simple_statements_token1] = ACTIONS(340),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(342),
    [anon_sym_PERCENTifarch] = ACTIONS(342),
    [anon_sym_PERCENTifos] = ACTIONS(342),
    [anon_sym_PERCENTifnarch] = ACTIONS(342),
    [anon_sym_PERCENTifnos] = ACTIONS(342),
    [anon_sym_AutoProv] = ACTIONS(342),
    [anon_sym_AutoReq] = ACTIONS(342),
    [anon_sym_AutoReqProv] = ACTIONS(342),
    [anon_sym_BugUrl] = ACTIONS(342),
    [anon_sym_BuildRoot] = ACTIONS(342),
    [anon_sym_BuildSystem] = ACTIONS(342),
    [anon_sym_DistTag] = ACTIONS(342),
    [anon_sym_Distribution] = ACTIONS(342),
    [anon_sym_Epoch] = ACTIONS(342),
    [anon_sym_Group] = ACTIONS(342),
    [anon_sym_License] = ACTIONS(342),
    [anon_sym_ModularityLabel] = ACTIONS(342),
    [anon_sym_Name] = ACTIONS(342),
    [anon_sym_NoPatch] = ACTIONS(342),
    [anon_sym_NoSource] = ACTIONS(342),
    [anon_sym_Packager] = ACTIONS(342),
    [anon_sym_Release] = ACTIONS(342),
    [anon_sym_SourceLicense] = ACTIONS(342),
    [anon_sym_Summary] = ACTIONS(342),
    [anon_sym_URL] = ACTIONS(342),
    [anon_sym_Url] = ACTIONS(342),
    [anon_sym_VCS] = ACTIONS(342),
    [anon_sym_Vendor] = ACTIONS(342),
    [anon_sym_Version] = ACTIONS(342),
    [aux_sym_tag_token1] = ACTIONS(342),
    [aux_sym_tag_token2] = ACTIONS(342),
    [anon_sym_Requires] = ACTIONS(342),
    [anon_sym_BuildArch] = ACTIONS(342),
    [anon_sym_BuildArchitectures] = ACTIONS(342),
    [anon_sym_BuildConflicts] = ACTIONS(342),
    [anon_sym_BuildPrereq] = ACTIONS(342),
    [anon_sym_BuildRequires] = ACTIONS(342),
    [anon_sym_Conflicts] = ACTIONS(342),
    [anon_sym_DocDir] = ACTIONS(342),
    [anon_sym_Enhances] = ACTIONS(342),
    [anon_sym_ExcludeArch] = ACTIONS(342),
    [anon_sym_ExcludeOS] = ACTIONS(342),
    [anon_sym_ExclusiveArch] = ACTIONS(342),
    [anon_sym_ExclusiveOS] = ACTIONS(342),
    [anon_sym_Obsoletes] = ACTIONS(342),
    [anon_sym_OrderWithRequires] = ACTIONS(342),
    [anon_sym_Prefix] = ACTIONS(342),
    [anon_sym_Prefixes] = ACTIONS(342),
    [anon_sym_Prereq] = ACTIONS(342),
    [anon_sym_Provides] = ACTIONS(342),
    [anon_sym_Recommends] = ACTIONS(342),
    [anon_sym_RemovePathPostfixes] = ACTIONS(342),
    [anon_sym_Suggests] = ACTIONS(342),
    [anon_sym_Supplements] = ACTIONS(342),
    [anon_sym_PERCENTdescription] = ACTIONS(342),
    [anon_sym_PERCENTpackage] = ACTIONS(342),
    [anon_sym_PERCENTprep] = ACTIONS(342),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(342),
    [anon_sym_PERCENTconf] = ACTIONS(342),
    [anon_sym_PERCENTbuild] = ACTIONS(342),
    [anon_sym_PERCENTinstall] = ACTIONS(342),
    [anon_sym_PERCENTcheck] = ACTIONS(342),
    [anon_sym_PERCENTclean] = ACTIONS(342),
    [anon_sym_PERCENTpre] = ACTIONS(342),
    [anon_sym_PERCENTpost] = ACTIONS(342),
    [anon_sym_PERCENTpreun] = ACTIONS(342),
    [anon_sym_PERCENTpostun] = ACTIONS(342),
    [anon_sym_PERCENTpretrans] = ACTIONS(342),
    [anon_sym_PERCENTposttrans] = ACTIONS(342),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(342),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(342),
    [anon_sym_PERCENTverify] = ACTIONS(342),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(342),
    [anon_sym_PERCENTtriggerin] = ACTIONS(342),
    [anon_sym_PERCENTtriggerun] = ACTIONS(342),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(342),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(342),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(342),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(342),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(342),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(342),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(342),
    [anon_sym_PERCENTfiles] = ACTIONS(342),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_PERCENTchangelog] = ACTIONS(342),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_PERCENTglobal] = ACTIONS(342),
    [anon_sym_PERCENTdefine] = ACTIONS(342),
    [anon_sym_PERCENTundefine] = ACTIONS(342),
    [anon_sym_PERCENT] = ACTIONS(342),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(342),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(342),
  },
  [28] = {
    [aux_sym_changelog_entry_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(347),
    [aux_sym__simple_statements_token1] = ACTIONS(347),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(349),
    [anon_sym_PERCENTifarch] = ACTIONS(349),
    [anon_sym_PERCENTifos] = ACTIONS(349),
    [anon_sym_PERCENTifnarch] = ACTIONS(349),
    [anon_sym_PERCENTifnos] = ACTIONS(349),
    [anon_sym_AutoProv] = ACTIONS(349),
    [anon_sym_AutoReq] = ACTIONS(349),
    [anon_sym_AutoReqProv] = ACTIONS(349),
    [anon_sym_BugUrl] = ACTIONS(349),
    [anon_sym_BuildRoot] = ACTIONS(349),
    [anon_sym_BuildSystem] = ACTIONS(349),
    [anon_sym_DistTag] = ACTIONS(349),
    [anon_sym_Distribution] = ACTIONS(349),
    [anon_sym_Epoch] = ACTIONS(349),
    [anon_sym_Group] = ACTIONS(349),
    [anon_sym_License] = ACTIONS(349),
    [anon_sym_ModularityLabel] = ACTIONS(349),
    [anon_sym_Name] = ACTIONS(349),
    [anon_sym_NoPatch] = ACTIONS(349),
    [anon_sym_NoSource] = ACTIONS(349),
    [anon_sym_Packager] = ACTIONS(349),
    [anon_sym_Release] = ACTIONS(349),
    [anon_sym_SourceLicense] = ACTIONS(349),
    [anon_sym_Summary] = ACTIONS(349),
    [anon_sym_URL] = ACTIONS(349),
    [anon_sym_Url] = ACTIONS(349),
    [anon_sym_VCS] = ACTIONS(349),
    [anon_sym_Vendor] = ACTIONS(349),
    [anon_sym_Version] = ACTIONS(349),
    [aux_sym_tag_token1] = ACTIONS(349),
    [aux_sym_tag_token2] = ACTIONS(349),
    [anon_sym_Requires] = ACTIONS(349),
    [anon_sym_BuildArch] = ACTIONS(349),
    [anon_sym_BuildArchitectures] = ACTIONS(349),
    [anon_sym_BuildConflicts] = ACTIONS(349),
    [anon_sym_BuildPrereq] = ACTIONS(349),
    [anon_sym_BuildRequires] = ACTIONS(349),
    [anon_sym_Conflicts] = ACTIONS(349),
    [anon_sym_DocDir] = ACTIONS(349),
    [anon_sym_Enhances] = ACTIONS(349),
    [anon_sym_ExcludeArch] = ACTIONS(349),
    [anon_sym_ExcludeOS] = ACTIONS(349),
    [anon_sym_ExclusiveArch] = ACTIONS(349),
    [anon_sym_ExclusiveOS] = ACTIONS(349),
    [anon_sym_Obsoletes] = ACTIONS(349),
    [anon_sym_OrderWithRequires] = ACTIONS(349),
    [anon_sym_Prefix] = ACTIONS(349),
    [anon_sym_Prefixes] = ACTIONS(349),
    [anon_sym_Prereq] = ACTIONS(349),
    [anon_sym_Provides] = ACTIONS(349),
    [anon_sym_Recommends] = ACTIONS(349),
    [anon_sym_RemovePathPostfixes] = ACTIONS(349),
    [anon_sym_Suggests] = ACTIONS(349),
    [anon_sym_Supplements] = ACTIONS(349),
    [anon_sym_PERCENTdescription] = ACTIONS(349),
    [anon_sym_PERCENTpackage] = ACTIONS(349),
    [anon_sym_PERCENTprep] = ACTIONS(349),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(349),
    [anon_sym_PERCENTconf] = ACTIONS(349),
    [anon_sym_PERCENTbuild] = ACTIONS(349),
    [anon_sym_PERCENTinstall] = ACTIONS(349),
    [anon_sym_PERCENTcheck] = ACTIONS(349),
    [anon_sym_PERCENTclean] = ACTIONS(349),
    [anon_sym_PERCENTpre] = ACTIONS(349),
    [anon_sym_PERCENTpost] = ACTIONS(349),
    [anon_sym_PERCENTpreun] = ACTIONS(349),
    [anon_sym_PERCENTpostun] = ACTIONS(349),
    [anon_sym_PERCENTpretrans] = ACTIONS(349),
    [anon_sym_PERCENTposttrans] = ACTIONS(349),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(349),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(349),
    [anon_sym_PERCENTverify] = ACTIONS(349),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(349),
    [anon_sym_PERCENTtriggerin] = ACTIONS(349),
    [anon_sym_PERCENTtriggerun] = ACTIONS(349),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(349),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(349),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(349),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(349),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(349),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(349),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(349),
    [anon_sym_PERCENTfiles] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(351),
    [anon_sym_PERCENTchangelog] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_PERCENTglobal] = ACTIONS(349),
    [anon_sym_PERCENTdefine] = ACTIONS(349),
    [anon_sym_PERCENTundefine] = ACTIONS(349),
    [anon_sym_PERCENT] = ACTIONS(349),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(349),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(349),
  },
  [29] = {
    [sym_changelog_entry] = STATE(26),
    [aux_sym_changelog_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(353),
    [aux_sym__simple_statements_token1] = ACTIONS(353),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(355),
    [anon_sym_PERCENTifarch] = ACTIONS(355),
    [anon_sym_PERCENTifos] = ACTIONS(355),
    [anon_sym_PERCENTifnarch] = ACTIONS(355),
    [anon_sym_PERCENTifnos] = ACTIONS(355),
    [anon_sym_AutoProv] = ACTIONS(355),
    [anon_sym_AutoReq] = ACTIONS(355),
    [anon_sym_AutoReqProv] = ACTIONS(355),
    [anon_sym_BugUrl] = ACTIONS(355),
    [anon_sym_BuildRoot] = ACTIONS(355),
    [anon_sym_BuildSystem] = ACTIONS(355),
    [anon_sym_DistTag] = ACTIONS(355),
    [anon_sym_Distribution] = ACTIONS(355),
    [anon_sym_Epoch] = ACTIONS(355),
    [anon_sym_Group] = ACTIONS(355),
    [anon_sym_License] = ACTIONS(355),
    [anon_sym_ModularityLabel] = ACTIONS(355),
    [anon_sym_Name] = ACTIONS(355),
    [anon_sym_NoPatch] = ACTIONS(355),
    [anon_sym_NoSource] = ACTIONS(355),
    [anon_sym_Packager] = ACTIONS(355),
    [anon_sym_Release] = ACTIONS(355),
    [anon_sym_SourceLicense] = ACTIONS(355),
    [anon_sym_Summary] = ACTIONS(355),
    [anon_sym_URL] = ACTIONS(355),
    [anon_sym_Url] = ACTIONS(355),
    [anon_sym_VCS] = ACTIONS(355),
    [anon_sym_Vendor] = ACTIONS(355),
    [anon_sym_Version] = ACTIONS(355),
    [aux_sym_tag_token1] = ACTIONS(355),
    [aux_sym_tag_token2] = ACTIONS(355),
    [anon_sym_Requires] = ACTIONS(355),
    [anon_sym_BuildArch] = ACTIONS(355),
    [anon_sym_BuildArchitectures] = ACTIONS(355),
    [anon_sym_BuildConflicts] = ACTIONS(355),
    [anon_sym_BuildPrereq] = ACTIONS(355),
    [anon_sym_BuildRequires] = ACTIONS(355),
    [anon_sym_Conflicts] = ACTIONS(355),
    [anon_sym_DocDir] = ACTIONS(355),
    [anon_sym_Enhances] = ACTIONS(355),
    [anon_sym_ExcludeArch] = ACTIONS(355),
    [anon_sym_ExcludeOS] = ACTIONS(355),
    [anon_sym_ExclusiveArch] = ACTIONS(355),
    [anon_sym_ExclusiveOS] = ACTIONS(355),
    [anon_sym_Obsoletes] = ACTIONS(355),
    [anon_sym_OrderWithRequires] = ACTIONS(355),
    [anon_sym_Prefix] = ACTIONS(355),
    [anon_sym_Prefixes] = ACTIONS(355),
    [anon_sym_Prereq] = ACTIONS(355),
    [anon_sym_Provides] = ACTIONS(355),
    [anon_sym_Recommends] = ACTIONS(355),
    [anon_sym_RemovePathPostfixes] = ACTIONS(355),
    [anon_sym_Suggests] = ACTIONS(355),
    [anon_sym_Supplements] = ACTIONS(355),
    [anon_sym_PERCENTdescription] = ACTIONS(355),
    [anon_sym_PERCENTpackage] = ACTIONS(355),
    [anon_sym_PERCENTprep] = ACTIONS(355),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(355),
    [anon_sym_PERCENTconf] = ACTIONS(355),
    [anon_sym_PERCENTbuild] = ACTIONS(355),
    [anon_sym_PERCENTinstall] = ACTIONS(355),
    [anon_sym_PERCENTcheck] = ACTIONS(355),
    [anon_sym_PERCENTclean] = ACTIONS(355),
    [anon_sym_PERCENTpre] = ACTIONS(355),
    [anon_sym_PERCENTpost] = ACTIONS(355),
    [anon_sym_PERCENTpreun] = ACTIONS(355),
    [anon_sym_PERCENTpostun] = ACTIONS(355),
    [anon_sym_PERCENTpretrans] = ACTIONS(355),
    [anon_sym_PERCENTposttrans] = ACTIONS(355),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(355),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(355),
    [anon_sym_PERCENTverify] = ACTIONS(355),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(355),
    [anon_sym_PERCENTtriggerin] = ACTIONS(355),
    [anon_sym_PERCENTtriggerun] = ACTIONS(355),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(355),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(355),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(355),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(355),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(355),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(355),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(355),
    [anon_sym_PERCENTfiles] = ACTIONS(355),
    [anon_sym_PERCENTchangelog] = ACTIONS(355),
    [anon_sym_STAR] = ACTIONS(357),
    [anon_sym_PERCENTglobal] = ACTIONS(355),
    [anon_sym_PERCENTdefine] = ACTIONS(355),
    [anon_sym_PERCENTundefine] = ACTIONS(355),
    [anon_sym_PERCENT] = ACTIONS(355),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(355),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(355),
  },
  [30] = {
    [aux_sym_changelog_entry_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(359),
    [aux_sym__simple_statements_token1] = ACTIONS(359),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(361),
    [anon_sym_PERCENTifarch] = ACTIONS(361),
    [anon_sym_PERCENTifos] = ACTIONS(361),
    [anon_sym_PERCENTifnarch] = ACTIONS(361),
    [anon_sym_PERCENTifnos] = ACTIONS(361),
    [anon_sym_AutoProv] = ACTIONS(361),
    [anon_sym_AutoReq] = ACTIONS(361),
    [anon_sym_AutoReqProv] = ACTIONS(361),
    [anon_sym_BugUrl] = ACTIONS(361),
    [anon_sym_BuildRoot] = ACTIONS(361),
    [anon_sym_BuildSystem] = ACTIONS(361),
    [anon_sym_DistTag] = ACTIONS(361),
    [anon_sym_Distribution] = ACTIONS(361),
    [anon_sym_Epoch] = ACTIONS(361),
    [anon_sym_Group] = ACTIONS(361),
    [anon_sym_License] = ACTIONS(361),
    [anon_sym_ModularityLabel] = ACTIONS(361),
    [anon_sym_Name] = ACTIONS(361),
    [anon_sym_NoPatch] = ACTIONS(361),
    [anon_sym_NoSource] = ACTIONS(361),
    [anon_sym_Packager] = ACTIONS(361),
    [anon_sym_Release] = ACTIONS(361),
    [anon_sym_SourceLicense] = ACTIONS(361),
    [anon_sym_Summary] = ACTIONS(361),
    [anon_sym_URL] = ACTIONS(361),
    [anon_sym_Url] = ACTIONS(361),
    [anon_sym_VCS] = ACTIONS(361),
    [anon_sym_Vendor] = ACTIONS(361),
    [anon_sym_Version] = ACTIONS(361),
    [aux_sym_tag_token1] = ACTIONS(361),
    [aux_sym_tag_token2] = ACTIONS(361),
    [anon_sym_Requires] = ACTIONS(361),
    [anon_sym_BuildArch] = ACTIONS(361),
    [anon_sym_BuildArchitectures] = ACTIONS(361),
    [anon_sym_BuildConflicts] = ACTIONS(361),
    [anon_sym_BuildPrereq] = ACTIONS(361),
    [anon_sym_BuildRequires] = ACTIONS(361),
    [anon_sym_Conflicts] = ACTIONS(361),
    [anon_sym_DocDir] = ACTIONS(361),
    [anon_sym_Enhances] = ACTIONS(361),
    [anon_sym_ExcludeArch] = ACTIONS(361),
    [anon_sym_ExcludeOS] = ACTIONS(361),
    [anon_sym_ExclusiveArch] = ACTIONS(361),
    [anon_sym_ExclusiveOS] = ACTIONS(361),
    [anon_sym_Obsoletes] = ACTIONS(361),
    [anon_sym_OrderWithRequires] = ACTIONS(361),
    [anon_sym_Prefix] = ACTIONS(361),
    [anon_sym_Prefixes] = ACTIONS(361),
    [anon_sym_Prereq] = ACTIONS(361),
    [anon_sym_Provides] = ACTIONS(361),
    [anon_sym_Recommends] = ACTIONS(361),
    [anon_sym_RemovePathPostfixes] = ACTIONS(361),
    [anon_sym_Suggests] = ACTIONS(361),
    [anon_sym_Supplements] = ACTIONS(361),
    [anon_sym_PERCENTdescription] = ACTIONS(361),
    [anon_sym_PERCENTpackage] = ACTIONS(361),
    [anon_sym_PERCENTprep] = ACTIONS(361),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(361),
    [anon_sym_PERCENTconf] = ACTIONS(361),
    [anon_sym_PERCENTbuild] = ACTIONS(361),
    [anon_sym_PERCENTinstall] = ACTIONS(361),
    [anon_sym_PERCENTcheck] = ACTIONS(361),
    [anon_sym_PERCENTclean] = ACTIONS(361),
    [anon_sym_PERCENTpre] = ACTIONS(361),
    [anon_sym_PERCENTpost] = ACTIONS(361),
    [anon_sym_PERCENTpreun] = ACTIONS(361),
    [anon_sym_PERCENTpostun] = ACTIONS(361),
    [anon_sym_PERCENTpretrans] = ACTIONS(361),
    [anon_sym_PERCENTposttrans] = ACTIONS(361),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(361),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(361),
    [anon_sym_PERCENTverify] = ACTIONS(361),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(361),
    [anon_sym_PERCENTtriggerin] = ACTIONS(361),
    [anon_sym_PERCENTtriggerun] = ACTIONS(361),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(361),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(361),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(361),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(361),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(361),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(361),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(361),
    [anon_sym_PERCENTfiles] = ACTIONS(361),
    [anon_sym_DASH] = ACTIONS(351),
    [anon_sym_PERCENTchangelog] = ACTIONS(361),
    [anon_sym_STAR] = ACTIONS(361),
    [anon_sym_PERCENTglobal] = ACTIONS(361),
    [anon_sym_PERCENTdefine] = ACTIONS(361),
    [anon_sym_PERCENTundefine] = ACTIONS(361),
    [anon_sym_PERCENT] = ACTIONS(361),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(361),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(361),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym__simple_statements_token1] = ACTIONS(365),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(365),
    [anon_sym_PERCENTifarch] = ACTIONS(365),
    [anon_sym_PERCENTifos] = ACTIONS(365),
    [anon_sym_PERCENTifnarch] = ACTIONS(365),
    [anon_sym_PERCENTifnos] = ACTIONS(365),
    [anon_sym_AutoProv] = ACTIONS(365),
    [anon_sym_AutoReq] = ACTIONS(365),
    [anon_sym_AutoReqProv] = ACTIONS(365),
    [anon_sym_BugUrl] = ACTIONS(365),
    [anon_sym_BuildRoot] = ACTIONS(365),
    [anon_sym_BuildSystem] = ACTIONS(365),
    [anon_sym_DistTag] = ACTIONS(365),
    [anon_sym_Distribution] = ACTIONS(365),
    [anon_sym_Epoch] = ACTIONS(365),
    [anon_sym_Group] = ACTIONS(365),
    [anon_sym_License] = ACTIONS(365),
    [anon_sym_ModularityLabel] = ACTIONS(365),
    [anon_sym_Name] = ACTIONS(365),
    [anon_sym_NoPatch] = ACTIONS(365),
    [anon_sym_NoSource] = ACTIONS(365),
    [anon_sym_Packager] = ACTIONS(365),
    [anon_sym_Release] = ACTIONS(365),
    [anon_sym_SourceLicense] = ACTIONS(365),
    [anon_sym_Summary] = ACTIONS(365),
    [anon_sym_URL] = ACTIONS(365),
    [anon_sym_Url] = ACTIONS(365),
    [anon_sym_VCS] = ACTIONS(365),
    [anon_sym_Vendor] = ACTIONS(365),
    [anon_sym_Version] = ACTIONS(365),
    [aux_sym_tag_token1] = ACTIONS(365),
    [aux_sym_tag_token2] = ACTIONS(365),
    [anon_sym_Requires] = ACTIONS(365),
    [anon_sym_BuildArch] = ACTIONS(365),
    [anon_sym_BuildArchitectures] = ACTIONS(365),
    [anon_sym_BuildConflicts] = ACTIONS(365),
    [anon_sym_BuildPrereq] = ACTIONS(365),
    [anon_sym_BuildRequires] = ACTIONS(365),
    [anon_sym_Conflicts] = ACTIONS(365),
    [anon_sym_DocDir] = ACTIONS(365),
    [anon_sym_Enhances] = ACTIONS(365),
    [anon_sym_ExcludeArch] = ACTIONS(365),
    [anon_sym_ExcludeOS] = ACTIONS(365),
    [anon_sym_ExclusiveArch] = ACTIONS(365),
    [anon_sym_ExclusiveOS] = ACTIONS(365),
    [anon_sym_Obsoletes] = ACTIONS(365),
    [anon_sym_OrderWithRequires] = ACTIONS(365),
    [anon_sym_Prefix] = ACTIONS(365),
    [anon_sym_Prefixes] = ACTIONS(365),
    [anon_sym_Prereq] = ACTIONS(365),
    [anon_sym_Provides] = ACTIONS(365),
    [anon_sym_Recommends] = ACTIONS(365),
    [anon_sym_RemovePathPostfixes] = ACTIONS(365),
    [anon_sym_Suggests] = ACTIONS(365),
    [anon_sym_Supplements] = ACTIONS(365),
    [anon_sym_PERCENTdescription] = ACTIONS(365),
    [anon_sym_PERCENTpackage] = ACTIONS(365),
    [anon_sym_PERCENTprep] = ACTIONS(365),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(365),
    [anon_sym_PERCENTconf] = ACTIONS(365),
    [anon_sym_PERCENTbuild] = ACTIONS(365),
    [anon_sym_PERCENTinstall] = ACTIONS(365),
    [anon_sym_PERCENTcheck] = ACTIONS(365),
    [anon_sym_PERCENTclean] = ACTIONS(365),
    [anon_sym_PERCENTpre] = ACTIONS(365),
    [anon_sym_PERCENTpost] = ACTIONS(365),
    [anon_sym_PERCENTpreun] = ACTIONS(365),
    [anon_sym_PERCENTpostun] = ACTIONS(365),
    [anon_sym_PERCENTpretrans] = ACTIONS(365),
    [anon_sym_PERCENTposttrans] = ACTIONS(365),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(365),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(365),
    [anon_sym_PERCENTverify] = ACTIONS(365),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(365),
    [anon_sym_PERCENTtriggerin] = ACTIONS(365),
    [anon_sym_PERCENTtriggerun] = ACTIONS(365),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(365),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(365),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(365),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(365),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(365),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(365),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(365),
    [anon_sym_PERCENTfiles] = ACTIONS(365),
    [anon_sym_PERCENTchangelog] = ACTIONS(365),
    [anon_sym_PERCENTglobal] = ACTIONS(365),
    [anon_sym_PERCENTdefine] = ACTIONS(365),
    [anon_sym_PERCENTundefine] = ACTIONS(365),
    [sym_integer] = ACTIONS(365),
    [sym_float] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [sym_string_content] = ACTIONS(365),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(365),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(365),
  },
  [32] = {
    [sym_changelog_entry] = STATE(29),
    [aux_sym_changelog_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(367),
    [aux_sym__simple_statements_token1] = ACTIONS(367),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(369),
    [anon_sym_PERCENTifarch] = ACTIONS(369),
    [anon_sym_PERCENTifos] = ACTIONS(369),
    [anon_sym_PERCENTifnarch] = ACTIONS(369),
    [anon_sym_PERCENTifnos] = ACTIONS(369),
    [anon_sym_AutoProv] = ACTIONS(369),
    [anon_sym_AutoReq] = ACTIONS(369),
    [anon_sym_AutoReqProv] = ACTIONS(369),
    [anon_sym_BugUrl] = ACTIONS(369),
    [anon_sym_BuildRoot] = ACTIONS(369),
    [anon_sym_BuildSystem] = ACTIONS(369),
    [anon_sym_DistTag] = ACTIONS(369),
    [anon_sym_Distribution] = ACTIONS(369),
    [anon_sym_Epoch] = ACTIONS(369),
    [anon_sym_Group] = ACTIONS(369),
    [anon_sym_License] = ACTIONS(369),
    [anon_sym_ModularityLabel] = ACTIONS(369),
    [anon_sym_Name] = ACTIONS(369),
    [anon_sym_NoPatch] = ACTIONS(369),
    [anon_sym_NoSource] = ACTIONS(369),
    [anon_sym_Packager] = ACTIONS(369),
    [anon_sym_Release] = ACTIONS(369),
    [anon_sym_SourceLicense] = ACTIONS(369),
    [anon_sym_Summary] = ACTIONS(369),
    [anon_sym_URL] = ACTIONS(369),
    [anon_sym_Url] = ACTIONS(369),
    [anon_sym_VCS] = ACTIONS(369),
    [anon_sym_Vendor] = ACTIONS(369),
    [anon_sym_Version] = ACTIONS(369),
    [aux_sym_tag_token1] = ACTIONS(369),
    [aux_sym_tag_token2] = ACTIONS(369),
    [anon_sym_Requires] = ACTIONS(369),
    [anon_sym_BuildArch] = ACTIONS(369),
    [anon_sym_BuildArchitectures] = ACTIONS(369),
    [anon_sym_BuildConflicts] = ACTIONS(369),
    [anon_sym_BuildPrereq] = ACTIONS(369),
    [anon_sym_BuildRequires] = ACTIONS(369),
    [anon_sym_Conflicts] = ACTIONS(369),
    [anon_sym_DocDir] = ACTIONS(369),
    [anon_sym_Enhances] = ACTIONS(369),
    [anon_sym_ExcludeArch] = ACTIONS(369),
    [anon_sym_ExcludeOS] = ACTIONS(369),
    [anon_sym_ExclusiveArch] = ACTIONS(369),
    [anon_sym_ExclusiveOS] = ACTIONS(369),
    [anon_sym_Obsoletes] = ACTIONS(369),
    [anon_sym_OrderWithRequires] = ACTIONS(369),
    [anon_sym_Prefix] = ACTIONS(369),
    [anon_sym_Prefixes] = ACTIONS(369),
    [anon_sym_Prereq] = ACTIONS(369),
    [anon_sym_Provides] = ACTIONS(369),
    [anon_sym_Recommends] = ACTIONS(369),
    [anon_sym_RemovePathPostfixes] = ACTIONS(369),
    [anon_sym_Suggests] = ACTIONS(369),
    [anon_sym_Supplements] = ACTIONS(369),
    [anon_sym_PERCENTdescription] = ACTIONS(369),
    [anon_sym_PERCENTpackage] = ACTIONS(369),
    [anon_sym_PERCENTprep] = ACTIONS(369),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(369),
    [anon_sym_PERCENTconf] = ACTIONS(369),
    [anon_sym_PERCENTbuild] = ACTIONS(369),
    [anon_sym_PERCENTinstall] = ACTIONS(369),
    [anon_sym_PERCENTcheck] = ACTIONS(369),
    [anon_sym_PERCENTclean] = ACTIONS(369),
    [anon_sym_PERCENTpre] = ACTIONS(369),
    [anon_sym_PERCENTpost] = ACTIONS(369),
    [anon_sym_PERCENTpreun] = ACTIONS(369),
    [anon_sym_PERCENTpostun] = ACTIONS(369),
    [anon_sym_PERCENTpretrans] = ACTIONS(369),
    [anon_sym_PERCENTposttrans] = ACTIONS(369),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(369),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(369),
    [anon_sym_PERCENTverify] = ACTIONS(369),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(369),
    [anon_sym_PERCENTtriggerin] = ACTIONS(369),
    [anon_sym_PERCENTtriggerun] = ACTIONS(369),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(369),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(369),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(369),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(369),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(369),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(369),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(369),
    [anon_sym_PERCENTfiles] = ACTIONS(369),
    [anon_sym_PERCENTchangelog] = ACTIONS(369),
    [anon_sym_STAR] = ACTIONS(357),
    [anon_sym_PERCENTglobal] = ACTIONS(369),
    [anon_sym_PERCENTdefine] = ACTIONS(369),
    [anon_sym_PERCENTundefine] = ACTIONS(369),
    [anon_sym_PERCENT] = ACTIONS(369),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(369),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(369),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym__simple_statements_token1] = ACTIONS(371),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(373),
    [anon_sym_PERCENTifarch] = ACTIONS(373),
    [anon_sym_PERCENTifos] = ACTIONS(373),
    [anon_sym_PERCENTifnarch] = ACTIONS(373),
    [anon_sym_PERCENTifnos] = ACTIONS(373),
    [anon_sym_AutoProv] = ACTIONS(373),
    [anon_sym_AutoReq] = ACTIONS(373),
    [anon_sym_AutoReqProv] = ACTIONS(373),
    [anon_sym_BugUrl] = ACTIONS(373),
    [anon_sym_BuildRoot] = ACTIONS(373),
    [anon_sym_BuildSystem] = ACTIONS(373),
    [anon_sym_DistTag] = ACTIONS(373),
    [anon_sym_Distribution] = ACTIONS(373),
    [anon_sym_Epoch] = ACTIONS(373),
    [anon_sym_Group] = ACTIONS(373),
    [anon_sym_License] = ACTIONS(373),
    [anon_sym_ModularityLabel] = ACTIONS(373),
    [anon_sym_Name] = ACTIONS(373),
    [anon_sym_NoPatch] = ACTIONS(373),
    [anon_sym_NoSource] = ACTIONS(373),
    [anon_sym_Packager] = ACTIONS(373),
    [anon_sym_Release] = ACTIONS(373),
    [anon_sym_SourceLicense] = ACTIONS(373),
    [anon_sym_Summary] = ACTIONS(373),
    [anon_sym_URL] = ACTIONS(373),
    [anon_sym_Url] = ACTIONS(373),
    [anon_sym_VCS] = ACTIONS(373),
    [anon_sym_Vendor] = ACTIONS(373),
    [anon_sym_Version] = ACTIONS(373),
    [aux_sym_tag_token1] = ACTIONS(373),
    [aux_sym_tag_token2] = ACTIONS(373),
    [anon_sym_Requires] = ACTIONS(373),
    [anon_sym_BuildArch] = ACTIONS(373),
    [anon_sym_BuildArchitectures] = ACTIONS(373),
    [anon_sym_BuildConflicts] = ACTIONS(373),
    [anon_sym_BuildPrereq] = ACTIONS(373),
    [anon_sym_BuildRequires] = ACTIONS(373),
    [anon_sym_Conflicts] = ACTIONS(373),
    [anon_sym_DocDir] = ACTIONS(373),
    [anon_sym_Enhances] = ACTIONS(373),
    [anon_sym_ExcludeArch] = ACTIONS(373),
    [anon_sym_ExcludeOS] = ACTIONS(373),
    [anon_sym_ExclusiveArch] = ACTIONS(373),
    [anon_sym_ExclusiveOS] = ACTIONS(373),
    [anon_sym_Obsoletes] = ACTIONS(373),
    [anon_sym_OrderWithRequires] = ACTIONS(373),
    [anon_sym_Prefix] = ACTIONS(373),
    [anon_sym_Prefixes] = ACTIONS(373),
    [anon_sym_Prereq] = ACTIONS(373),
    [anon_sym_Provides] = ACTIONS(373),
    [anon_sym_Recommends] = ACTIONS(373),
    [anon_sym_RemovePathPostfixes] = ACTIONS(373),
    [anon_sym_Suggests] = ACTIONS(373),
    [anon_sym_Supplements] = ACTIONS(373),
    [anon_sym_PERCENTdescription] = ACTIONS(373),
    [anon_sym_PERCENTpackage] = ACTIONS(373),
    [anon_sym_PERCENTprep] = ACTIONS(373),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(373),
    [anon_sym_PERCENTconf] = ACTIONS(373),
    [anon_sym_PERCENTbuild] = ACTIONS(373),
    [anon_sym_PERCENTinstall] = ACTIONS(373),
    [anon_sym_PERCENTcheck] = ACTIONS(373),
    [anon_sym_PERCENTclean] = ACTIONS(373),
    [anon_sym_PERCENTpre] = ACTIONS(373),
    [anon_sym_PERCENTpost] = ACTIONS(373),
    [anon_sym_PERCENTpreun] = ACTIONS(373),
    [anon_sym_PERCENTpostun] = ACTIONS(373),
    [anon_sym_PERCENTpretrans] = ACTIONS(373),
    [anon_sym_PERCENTposttrans] = ACTIONS(373),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(373),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(373),
    [anon_sym_PERCENTverify] = ACTIONS(373),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(373),
    [anon_sym_PERCENTtriggerin] = ACTIONS(373),
    [anon_sym_PERCENTtriggerun] = ACTIONS(373),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(373),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(373),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(373),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(373),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(373),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(373),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(373),
    [anon_sym_PERCENTfiles] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [anon_sym_PERCENTchangelog] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(373),
    [anon_sym_PERCENTglobal] = ACTIONS(373),
    [anon_sym_PERCENTdefine] = ACTIONS(373),
    [anon_sym_PERCENTundefine] = ACTIONS(373),
    [anon_sym_PERCENT] = ACTIONS(373),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(373),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(373),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [aux_sym__simple_statements_token1] = ACTIONS(377),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(377),
    [anon_sym_PERCENTifarch] = ACTIONS(377),
    [anon_sym_PERCENTifos] = ACTIONS(377),
    [anon_sym_PERCENTifnarch] = ACTIONS(377),
    [anon_sym_PERCENTifnos] = ACTIONS(377),
    [anon_sym_AutoProv] = ACTIONS(377),
    [anon_sym_AutoReq] = ACTIONS(377),
    [anon_sym_AutoReqProv] = ACTIONS(377),
    [anon_sym_BugUrl] = ACTIONS(377),
    [anon_sym_BuildRoot] = ACTIONS(377),
    [anon_sym_BuildSystem] = ACTIONS(377),
    [anon_sym_DistTag] = ACTIONS(377),
    [anon_sym_Distribution] = ACTIONS(377),
    [anon_sym_Epoch] = ACTIONS(377),
    [anon_sym_Group] = ACTIONS(377),
    [anon_sym_License] = ACTIONS(377),
    [anon_sym_ModularityLabel] = ACTIONS(377),
    [anon_sym_Name] = ACTIONS(377),
    [anon_sym_NoPatch] = ACTIONS(377),
    [anon_sym_NoSource] = ACTIONS(377),
    [anon_sym_Packager] = ACTIONS(377),
    [anon_sym_Release] = ACTIONS(377),
    [anon_sym_SourceLicense] = ACTIONS(377),
    [anon_sym_Summary] = ACTIONS(377),
    [anon_sym_URL] = ACTIONS(377),
    [anon_sym_Url] = ACTIONS(377),
    [anon_sym_VCS] = ACTIONS(377),
    [anon_sym_Vendor] = ACTIONS(377),
    [anon_sym_Version] = ACTIONS(377),
    [aux_sym_tag_token1] = ACTIONS(377),
    [aux_sym_tag_token2] = ACTIONS(377),
    [anon_sym_Requires] = ACTIONS(377),
    [anon_sym_BuildArch] = ACTIONS(377),
    [anon_sym_BuildArchitectures] = ACTIONS(377),
    [anon_sym_BuildConflicts] = ACTIONS(377),
    [anon_sym_BuildPrereq] = ACTIONS(377),
    [anon_sym_BuildRequires] = ACTIONS(377),
    [anon_sym_Conflicts] = ACTIONS(377),
    [anon_sym_DocDir] = ACTIONS(377),
    [anon_sym_Enhances] = ACTIONS(377),
    [anon_sym_ExcludeArch] = ACTIONS(377),
    [anon_sym_ExcludeOS] = ACTIONS(377),
    [anon_sym_ExclusiveArch] = ACTIONS(377),
    [anon_sym_ExclusiveOS] = ACTIONS(377),
    [anon_sym_Obsoletes] = ACTIONS(377),
    [anon_sym_OrderWithRequires] = ACTIONS(377),
    [anon_sym_Prefix] = ACTIONS(377),
    [anon_sym_Prefixes] = ACTIONS(377),
    [anon_sym_Prereq] = ACTIONS(377),
    [anon_sym_Provides] = ACTIONS(377),
    [anon_sym_Recommends] = ACTIONS(377),
    [anon_sym_RemovePathPostfixes] = ACTIONS(377),
    [anon_sym_Suggests] = ACTIONS(377),
    [anon_sym_Supplements] = ACTIONS(377),
    [anon_sym_PERCENTdescription] = ACTIONS(377),
    [anon_sym_PERCENTpackage] = ACTIONS(377),
    [anon_sym_PERCENTprep] = ACTIONS(377),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(377),
    [anon_sym_PERCENTconf] = ACTIONS(377),
    [anon_sym_PERCENTbuild] = ACTIONS(377),
    [anon_sym_PERCENTinstall] = ACTIONS(377),
    [anon_sym_PERCENTcheck] = ACTIONS(377),
    [anon_sym_PERCENTclean] = ACTIONS(377),
    [anon_sym_PERCENTpre] = ACTIONS(377),
    [anon_sym_PERCENTpost] = ACTIONS(377),
    [anon_sym_PERCENTpreun] = ACTIONS(377),
    [anon_sym_PERCENTpostun] = ACTIONS(377),
    [anon_sym_PERCENTpretrans] = ACTIONS(377),
    [anon_sym_PERCENTposttrans] = ACTIONS(377),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(377),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(377),
    [anon_sym_PERCENTverify] = ACTIONS(377),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(377),
    [anon_sym_PERCENTtriggerin] = ACTIONS(377),
    [anon_sym_PERCENTtriggerun] = ACTIONS(377),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(377),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(377),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(377),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(377),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(377),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(377),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(377),
    [anon_sym_PERCENTfiles] = ACTIONS(377),
    [anon_sym_PERCENTchangelog] = ACTIONS(377),
    [anon_sym_PERCENTglobal] = ACTIONS(377),
    [anon_sym_PERCENTdefine] = ACTIONS(377),
    [anon_sym_PERCENTundefine] = ACTIONS(377),
    [anon_sym_PERCENT] = ACTIONS(377),
    [sym_string_content_with_newlines] = ACTIONS(377),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(377),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(377),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym__simple_statements_token1] = ACTIONS(381),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(381),
    [anon_sym_PERCENTifarch] = ACTIONS(381),
    [anon_sym_PERCENTifos] = ACTIONS(381),
    [anon_sym_PERCENTifnarch] = ACTIONS(381),
    [anon_sym_PERCENTifnos] = ACTIONS(381),
    [anon_sym_AutoProv] = ACTIONS(381),
    [anon_sym_AutoReq] = ACTIONS(381),
    [anon_sym_AutoReqProv] = ACTIONS(381),
    [anon_sym_BugUrl] = ACTIONS(381),
    [anon_sym_BuildRoot] = ACTIONS(381),
    [anon_sym_BuildSystem] = ACTIONS(381),
    [anon_sym_DistTag] = ACTIONS(381),
    [anon_sym_Distribution] = ACTIONS(381),
    [anon_sym_Epoch] = ACTIONS(381),
    [anon_sym_Group] = ACTIONS(381),
    [anon_sym_License] = ACTIONS(381),
    [anon_sym_ModularityLabel] = ACTIONS(381),
    [anon_sym_Name] = ACTIONS(381),
    [anon_sym_NoPatch] = ACTIONS(381),
    [anon_sym_NoSource] = ACTIONS(381),
    [anon_sym_Packager] = ACTIONS(381),
    [anon_sym_Release] = ACTIONS(381),
    [anon_sym_SourceLicense] = ACTIONS(381),
    [anon_sym_Summary] = ACTIONS(381),
    [anon_sym_URL] = ACTIONS(381),
    [anon_sym_Url] = ACTIONS(381),
    [anon_sym_VCS] = ACTIONS(381),
    [anon_sym_Vendor] = ACTIONS(381),
    [anon_sym_Version] = ACTIONS(381),
    [aux_sym_tag_token1] = ACTIONS(381),
    [aux_sym_tag_token2] = ACTIONS(381),
    [anon_sym_Requires] = ACTIONS(381),
    [anon_sym_BuildArch] = ACTIONS(381),
    [anon_sym_BuildArchitectures] = ACTIONS(381),
    [anon_sym_BuildConflicts] = ACTIONS(381),
    [anon_sym_BuildPrereq] = ACTIONS(381),
    [anon_sym_BuildRequires] = ACTIONS(381),
    [anon_sym_Conflicts] = ACTIONS(381),
    [anon_sym_DocDir] = ACTIONS(381),
    [anon_sym_Enhances] = ACTIONS(381),
    [anon_sym_ExcludeArch] = ACTIONS(381),
    [anon_sym_ExcludeOS] = ACTIONS(381),
    [anon_sym_ExclusiveArch] = ACTIONS(381),
    [anon_sym_ExclusiveOS] = ACTIONS(381),
    [anon_sym_Obsoletes] = ACTIONS(381),
    [anon_sym_OrderWithRequires] = ACTIONS(381),
    [anon_sym_Prefix] = ACTIONS(381),
    [anon_sym_Prefixes] = ACTIONS(381),
    [anon_sym_Prereq] = ACTIONS(381),
    [anon_sym_Provides] = ACTIONS(381),
    [anon_sym_Recommends] = ACTIONS(381),
    [anon_sym_RemovePathPostfixes] = ACTIONS(381),
    [anon_sym_Suggests] = ACTIONS(381),
    [anon_sym_Supplements] = ACTIONS(381),
    [anon_sym_PERCENTdescription] = ACTIONS(381),
    [anon_sym_PERCENTpackage] = ACTIONS(381),
    [anon_sym_PERCENTprep] = ACTIONS(381),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(381),
    [anon_sym_PERCENTconf] = ACTIONS(381),
    [anon_sym_PERCENTbuild] = ACTIONS(381),
    [anon_sym_PERCENTinstall] = ACTIONS(381),
    [anon_sym_PERCENTcheck] = ACTIONS(381),
    [anon_sym_PERCENTclean] = ACTIONS(381),
    [anon_sym_PERCENTpre] = ACTIONS(381),
    [anon_sym_PERCENTpost] = ACTIONS(381),
    [anon_sym_PERCENTpreun] = ACTIONS(381),
    [anon_sym_PERCENTpostun] = ACTIONS(381),
    [anon_sym_PERCENTpretrans] = ACTIONS(381),
    [anon_sym_PERCENTposttrans] = ACTIONS(381),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(381),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(381),
    [anon_sym_PERCENTverify] = ACTIONS(381),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(381),
    [anon_sym_PERCENTtriggerin] = ACTIONS(381),
    [anon_sym_PERCENTtriggerun] = ACTIONS(381),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(381),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(381),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(381),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(381),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(381),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(381),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(381),
    [anon_sym_PERCENTfiles] = ACTIONS(381),
    [anon_sym_PERCENTchangelog] = ACTIONS(381),
    [anon_sym_PERCENTglobal] = ACTIONS(381),
    [anon_sym_PERCENTdefine] = ACTIONS(381),
    [anon_sym_PERCENTundefine] = ACTIONS(381),
    [anon_sym_PERCENT] = ACTIONS(381),
    [sym_string_content_with_newlines] = ACTIONS(381),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(381),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(381),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [aux_sym__simple_statements_token1] = ACTIONS(385),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(385),
    [anon_sym_PERCENTifarch] = ACTIONS(385),
    [anon_sym_PERCENTifos] = ACTIONS(385),
    [anon_sym_PERCENTifnarch] = ACTIONS(385),
    [anon_sym_PERCENTifnos] = ACTIONS(385),
    [anon_sym_AutoProv] = ACTIONS(385),
    [anon_sym_AutoReq] = ACTIONS(385),
    [anon_sym_AutoReqProv] = ACTIONS(385),
    [anon_sym_BugUrl] = ACTIONS(385),
    [anon_sym_BuildRoot] = ACTIONS(385),
    [anon_sym_BuildSystem] = ACTIONS(385),
    [anon_sym_DistTag] = ACTIONS(385),
    [anon_sym_Distribution] = ACTIONS(385),
    [anon_sym_Epoch] = ACTIONS(385),
    [anon_sym_Group] = ACTIONS(385),
    [anon_sym_License] = ACTIONS(385),
    [anon_sym_ModularityLabel] = ACTIONS(385),
    [anon_sym_Name] = ACTIONS(385),
    [anon_sym_NoPatch] = ACTIONS(385),
    [anon_sym_NoSource] = ACTIONS(385),
    [anon_sym_Packager] = ACTIONS(385),
    [anon_sym_Release] = ACTIONS(385),
    [anon_sym_SourceLicense] = ACTIONS(385),
    [anon_sym_Summary] = ACTIONS(385),
    [anon_sym_URL] = ACTIONS(385),
    [anon_sym_Url] = ACTIONS(385),
    [anon_sym_VCS] = ACTIONS(385),
    [anon_sym_Vendor] = ACTIONS(385),
    [anon_sym_Version] = ACTIONS(385),
    [aux_sym_tag_token1] = ACTIONS(385),
    [aux_sym_tag_token2] = ACTIONS(385),
    [anon_sym_Requires] = ACTIONS(385),
    [anon_sym_BuildArch] = ACTIONS(385),
    [anon_sym_BuildArchitectures] = ACTIONS(385),
    [anon_sym_BuildConflicts] = ACTIONS(385),
    [anon_sym_BuildPrereq] = ACTIONS(385),
    [anon_sym_BuildRequires] = ACTIONS(385),
    [anon_sym_Conflicts] = ACTIONS(385),
    [anon_sym_DocDir] = ACTIONS(385),
    [anon_sym_Enhances] = ACTIONS(385),
    [anon_sym_ExcludeArch] = ACTIONS(385),
    [anon_sym_ExcludeOS] = ACTIONS(385),
    [anon_sym_ExclusiveArch] = ACTIONS(385),
    [anon_sym_ExclusiveOS] = ACTIONS(385),
    [anon_sym_Obsoletes] = ACTIONS(385),
    [anon_sym_OrderWithRequires] = ACTIONS(385),
    [anon_sym_Prefix] = ACTIONS(385),
    [anon_sym_Prefixes] = ACTIONS(385),
    [anon_sym_Prereq] = ACTIONS(385),
    [anon_sym_Provides] = ACTIONS(385),
    [anon_sym_Recommends] = ACTIONS(385),
    [anon_sym_RemovePathPostfixes] = ACTIONS(385),
    [anon_sym_Suggests] = ACTIONS(385),
    [anon_sym_Supplements] = ACTIONS(385),
    [anon_sym_PERCENTdescription] = ACTIONS(385),
    [anon_sym_PERCENTpackage] = ACTIONS(385),
    [anon_sym_PERCENTprep] = ACTIONS(385),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(385),
    [anon_sym_PERCENTconf] = ACTIONS(385),
    [anon_sym_PERCENTbuild] = ACTIONS(385),
    [anon_sym_PERCENTinstall] = ACTIONS(385),
    [anon_sym_PERCENTcheck] = ACTIONS(385),
    [anon_sym_PERCENTclean] = ACTIONS(385),
    [anon_sym_PERCENTpre] = ACTIONS(385),
    [anon_sym_PERCENTpost] = ACTIONS(385),
    [anon_sym_PERCENTpreun] = ACTIONS(385),
    [anon_sym_PERCENTpostun] = ACTIONS(385),
    [anon_sym_PERCENTpretrans] = ACTIONS(385),
    [anon_sym_PERCENTposttrans] = ACTIONS(385),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(385),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(385),
    [anon_sym_PERCENTverify] = ACTIONS(385),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(385),
    [anon_sym_PERCENTtriggerin] = ACTIONS(385),
    [anon_sym_PERCENTtriggerun] = ACTIONS(385),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(385),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(385),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(385),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(385),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(385),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(385),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(385),
    [anon_sym_PERCENTfiles] = ACTIONS(385),
    [anon_sym_PERCENTchangelog] = ACTIONS(385),
    [anon_sym_PERCENTglobal] = ACTIONS(385),
    [anon_sym_PERCENTdefine] = ACTIONS(385),
    [anon_sym_PERCENTundefine] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(385),
    [sym_string_content_with_newlines] = ACTIONS(385),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(385),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(385),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym__simple_statements_token1] = ACTIONS(365),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(365),
    [anon_sym_PERCENTifarch] = ACTIONS(365),
    [anon_sym_PERCENTifos] = ACTIONS(365),
    [anon_sym_PERCENTifnarch] = ACTIONS(365),
    [anon_sym_PERCENTifnos] = ACTIONS(365),
    [anon_sym_AutoProv] = ACTIONS(365),
    [anon_sym_AutoReq] = ACTIONS(365),
    [anon_sym_AutoReqProv] = ACTIONS(365),
    [anon_sym_BugUrl] = ACTIONS(365),
    [anon_sym_BuildRoot] = ACTIONS(365),
    [anon_sym_BuildSystem] = ACTIONS(365),
    [anon_sym_DistTag] = ACTIONS(365),
    [anon_sym_Distribution] = ACTIONS(365),
    [anon_sym_Epoch] = ACTIONS(365),
    [anon_sym_Group] = ACTIONS(365),
    [anon_sym_License] = ACTIONS(365),
    [anon_sym_ModularityLabel] = ACTIONS(365),
    [anon_sym_Name] = ACTIONS(365),
    [anon_sym_NoPatch] = ACTIONS(365),
    [anon_sym_NoSource] = ACTIONS(365),
    [anon_sym_Packager] = ACTIONS(365),
    [anon_sym_Release] = ACTIONS(365),
    [anon_sym_SourceLicense] = ACTIONS(365),
    [anon_sym_Summary] = ACTIONS(365),
    [anon_sym_URL] = ACTIONS(365),
    [anon_sym_Url] = ACTIONS(365),
    [anon_sym_VCS] = ACTIONS(365),
    [anon_sym_Vendor] = ACTIONS(365),
    [anon_sym_Version] = ACTIONS(365),
    [aux_sym_tag_token1] = ACTIONS(365),
    [aux_sym_tag_token2] = ACTIONS(365),
    [anon_sym_Requires] = ACTIONS(365),
    [anon_sym_BuildArch] = ACTIONS(365),
    [anon_sym_BuildArchitectures] = ACTIONS(365),
    [anon_sym_BuildConflicts] = ACTIONS(365),
    [anon_sym_BuildPrereq] = ACTIONS(365),
    [anon_sym_BuildRequires] = ACTIONS(365),
    [anon_sym_Conflicts] = ACTIONS(365),
    [anon_sym_DocDir] = ACTIONS(365),
    [anon_sym_Enhances] = ACTIONS(365),
    [anon_sym_ExcludeArch] = ACTIONS(365),
    [anon_sym_ExcludeOS] = ACTIONS(365),
    [anon_sym_ExclusiveArch] = ACTIONS(365),
    [anon_sym_ExclusiveOS] = ACTIONS(365),
    [anon_sym_Obsoletes] = ACTIONS(365),
    [anon_sym_OrderWithRequires] = ACTIONS(365),
    [anon_sym_Prefix] = ACTIONS(365),
    [anon_sym_Prefixes] = ACTIONS(365),
    [anon_sym_Prereq] = ACTIONS(365),
    [anon_sym_Provides] = ACTIONS(365),
    [anon_sym_Recommends] = ACTIONS(365),
    [anon_sym_RemovePathPostfixes] = ACTIONS(365),
    [anon_sym_Suggests] = ACTIONS(365),
    [anon_sym_Supplements] = ACTIONS(365),
    [anon_sym_PERCENTdescription] = ACTIONS(365),
    [anon_sym_PERCENTpackage] = ACTIONS(365),
    [anon_sym_PERCENTprep] = ACTIONS(365),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(365),
    [anon_sym_PERCENTconf] = ACTIONS(365),
    [anon_sym_PERCENTbuild] = ACTIONS(365),
    [anon_sym_PERCENTinstall] = ACTIONS(365),
    [anon_sym_PERCENTcheck] = ACTIONS(365),
    [anon_sym_PERCENTclean] = ACTIONS(365),
    [anon_sym_PERCENTpre] = ACTIONS(365),
    [anon_sym_PERCENTpost] = ACTIONS(365),
    [anon_sym_PERCENTpreun] = ACTIONS(365),
    [anon_sym_PERCENTpostun] = ACTIONS(365),
    [anon_sym_PERCENTpretrans] = ACTIONS(365),
    [anon_sym_PERCENTposttrans] = ACTIONS(365),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(365),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(365),
    [anon_sym_PERCENTverify] = ACTIONS(365),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(365),
    [anon_sym_PERCENTtriggerin] = ACTIONS(365),
    [anon_sym_PERCENTtriggerun] = ACTIONS(365),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(365),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(365),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(365),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(365),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(365),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(365),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(365),
    [anon_sym_PERCENTfiles] = ACTIONS(365),
    [anon_sym_PERCENTchangelog] = ACTIONS(365),
    [anon_sym_PERCENTglobal] = ACTIONS(365),
    [anon_sym_PERCENTdefine] = ACTIONS(365),
    [anon_sym_PERCENTundefine] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [sym_string_content_with_newlines] = ACTIONS(365),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(365),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(365),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(387),
    [aux_sym__simple_statements_token1] = ACTIONS(389),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(389),
    [anon_sym_PERCENTifarch] = ACTIONS(389),
    [anon_sym_PERCENTifos] = ACTIONS(389),
    [anon_sym_PERCENTifnarch] = ACTIONS(389),
    [anon_sym_PERCENTifnos] = ACTIONS(389),
    [anon_sym_AutoProv] = ACTIONS(389),
    [anon_sym_AutoReq] = ACTIONS(389),
    [anon_sym_AutoReqProv] = ACTIONS(389),
    [anon_sym_BugUrl] = ACTIONS(389),
    [anon_sym_BuildRoot] = ACTIONS(389),
    [anon_sym_BuildSystem] = ACTIONS(389),
    [anon_sym_DistTag] = ACTIONS(389),
    [anon_sym_Distribution] = ACTIONS(389),
    [anon_sym_Epoch] = ACTIONS(389),
    [anon_sym_Group] = ACTIONS(389),
    [anon_sym_License] = ACTIONS(389),
    [anon_sym_ModularityLabel] = ACTIONS(389),
    [anon_sym_Name] = ACTIONS(389),
    [anon_sym_NoPatch] = ACTIONS(389),
    [anon_sym_NoSource] = ACTIONS(389),
    [anon_sym_Packager] = ACTIONS(389),
    [anon_sym_Release] = ACTIONS(389),
    [anon_sym_SourceLicense] = ACTIONS(389),
    [anon_sym_Summary] = ACTIONS(389),
    [anon_sym_URL] = ACTIONS(389),
    [anon_sym_Url] = ACTIONS(389),
    [anon_sym_VCS] = ACTIONS(389),
    [anon_sym_Vendor] = ACTIONS(389),
    [anon_sym_Version] = ACTIONS(389),
    [aux_sym_tag_token1] = ACTIONS(389),
    [aux_sym_tag_token2] = ACTIONS(389),
    [anon_sym_Requires] = ACTIONS(389),
    [anon_sym_BuildArch] = ACTIONS(389),
    [anon_sym_BuildArchitectures] = ACTIONS(389),
    [anon_sym_BuildConflicts] = ACTIONS(389),
    [anon_sym_BuildPrereq] = ACTIONS(389),
    [anon_sym_BuildRequires] = ACTIONS(389),
    [anon_sym_Conflicts] = ACTIONS(389),
    [anon_sym_DocDir] = ACTIONS(389),
    [anon_sym_Enhances] = ACTIONS(389),
    [anon_sym_ExcludeArch] = ACTIONS(389),
    [anon_sym_ExcludeOS] = ACTIONS(389),
    [anon_sym_ExclusiveArch] = ACTIONS(389),
    [anon_sym_ExclusiveOS] = ACTIONS(389),
    [anon_sym_Obsoletes] = ACTIONS(389),
    [anon_sym_OrderWithRequires] = ACTIONS(389),
    [anon_sym_Prefix] = ACTIONS(389),
    [anon_sym_Prefixes] = ACTIONS(389),
    [anon_sym_Prereq] = ACTIONS(389),
    [anon_sym_Provides] = ACTIONS(389),
    [anon_sym_Recommends] = ACTIONS(389),
    [anon_sym_RemovePathPostfixes] = ACTIONS(389),
    [anon_sym_Suggests] = ACTIONS(389),
    [anon_sym_Supplements] = ACTIONS(389),
    [anon_sym_PERCENTdescription] = ACTIONS(389),
    [anon_sym_PERCENTpackage] = ACTIONS(389),
    [anon_sym_PERCENTprep] = ACTIONS(389),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(389),
    [anon_sym_PERCENTconf] = ACTIONS(389),
    [anon_sym_PERCENTbuild] = ACTIONS(389),
    [anon_sym_PERCENTinstall] = ACTIONS(389),
    [anon_sym_PERCENTcheck] = ACTIONS(389),
    [anon_sym_PERCENTclean] = ACTIONS(389),
    [anon_sym_PERCENTpre] = ACTIONS(389),
    [anon_sym_PERCENTpost] = ACTIONS(389),
    [anon_sym_PERCENTpreun] = ACTIONS(389),
    [anon_sym_PERCENTpostun] = ACTIONS(389),
    [anon_sym_PERCENTpretrans] = ACTIONS(389),
    [anon_sym_PERCENTposttrans] = ACTIONS(389),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(389),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(389),
    [anon_sym_PERCENTverify] = ACTIONS(389),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(389),
    [anon_sym_PERCENTtriggerin] = ACTIONS(389),
    [anon_sym_PERCENTtriggerun] = ACTIONS(389),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(389),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(389),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(389),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(389),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(389),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(389),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(389),
    [anon_sym_PERCENTfiles] = ACTIONS(389),
    [anon_sym_PERCENTchangelog] = ACTIONS(389),
    [anon_sym_PERCENTglobal] = ACTIONS(389),
    [anon_sym_PERCENTdefine] = ACTIONS(389),
    [anon_sym_PERCENTundefine] = ACTIONS(389),
    [anon_sym_PERCENT] = ACTIONS(389),
    [sym_string_content_with_newlines] = ACTIONS(389),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(389),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(389),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [aux_sym__simple_statements_token1] = ACTIONS(319),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(319),
    [anon_sym_PERCENTifarch] = ACTIONS(319),
    [anon_sym_PERCENTifos] = ACTIONS(319),
    [anon_sym_PERCENTifnarch] = ACTIONS(319),
    [anon_sym_PERCENTifnos] = ACTIONS(319),
    [anon_sym_AutoProv] = ACTIONS(319),
    [anon_sym_AutoReq] = ACTIONS(319),
    [anon_sym_AutoReqProv] = ACTIONS(319),
    [anon_sym_BugUrl] = ACTIONS(319),
    [anon_sym_BuildRoot] = ACTIONS(319),
    [anon_sym_BuildSystem] = ACTIONS(319),
    [anon_sym_DistTag] = ACTIONS(319),
    [anon_sym_Distribution] = ACTIONS(319),
    [anon_sym_Epoch] = ACTIONS(319),
    [anon_sym_Group] = ACTIONS(319),
    [anon_sym_License] = ACTIONS(319),
    [anon_sym_ModularityLabel] = ACTIONS(319),
    [anon_sym_Name] = ACTIONS(319),
    [anon_sym_NoPatch] = ACTIONS(319),
    [anon_sym_NoSource] = ACTIONS(319),
    [anon_sym_Packager] = ACTIONS(319),
    [anon_sym_Release] = ACTIONS(319),
    [anon_sym_SourceLicense] = ACTIONS(319),
    [anon_sym_Summary] = ACTIONS(319),
    [anon_sym_URL] = ACTIONS(319),
    [anon_sym_Url] = ACTIONS(319),
    [anon_sym_VCS] = ACTIONS(319),
    [anon_sym_Vendor] = ACTIONS(319),
    [anon_sym_Version] = ACTIONS(319),
    [aux_sym_tag_token1] = ACTIONS(319),
    [aux_sym_tag_token2] = ACTIONS(319),
    [anon_sym_Requires] = ACTIONS(319),
    [anon_sym_BuildArch] = ACTIONS(319),
    [anon_sym_BuildArchitectures] = ACTIONS(319),
    [anon_sym_BuildConflicts] = ACTIONS(319),
    [anon_sym_BuildPrereq] = ACTIONS(319),
    [anon_sym_BuildRequires] = ACTIONS(319),
    [anon_sym_Conflicts] = ACTIONS(319),
    [anon_sym_DocDir] = ACTIONS(319),
    [anon_sym_Enhances] = ACTIONS(319),
    [anon_sym_ExcludeArch] = ACTIONS(319),
    [anon_sym_ExcludeOS] = ACTIONS(319),
    [anon_sym_ExclusiveArch] = ACTIONS(319),
    [anon_sym_ExclusiveOS] = ACTIONS(319),
    [anon_sym_Obsoletes] = ACTIONS(319),
    [anon_sym_OrderWithRequires] = ACTIONS(319),
    [anon_sym_Prefix] = ACTIONS(319),
    [anon_sym_Prefixes] = ACTIONS(319),
    [anon_sym_Prereq] = ACTIONS(319),
    [anon_sym_Provides] = ACTIONS(319),
    [anon_sym_Recommends] = ACTIONS(319),
    [anon_sym_RemovePathPostfixes] = ACTIONS(319),
    [anon_sym_Suggests] = ACTIONS(319),
    [anon_sym_Supplements] = ACTIONS(319),
    [anon_sym_PERCENTdescription] = ACTIONS(319),
    [anon_sym_PERCENTpackage] = ACTIONS(319),
    [anon_sym_PERCENTprep] = ACTIONS(319),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(319),
    [anon_sym_PERCENTconf] = ACTIONS(319),
    [anon_sym_PERCENTbuild] = ACTIONS(319),
    [anon_sym_PERCENTinstall] = ACTIONS(319),
    [anon_sym_PERCENTcheck] = ACTIONS(319),
    [anon_sym_PERCENTclean] = ACTIONS(319),
    [anon_sym_PERCENTpre] = ACTIONS(319),
    [anon_sym_PERCENTpost] = ACTIONS(319),
    [anon_sym_PERCENTpreun] = ACTIONS(319),
    [anon_sym_PERCENTpostun] = ACTIONS(319),
    [anon_sym_PERCENTpretrans] = ACTIONS(319),
    [anon_sym_PERCENTposttrans] = ACTIONS(319),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(319),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(319),
    [anon_sym_PERCENTverify] = ACTIONS(319),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(319),
    [anon_sym_PERCENTtriggerin] = ACTIONS(319),
    [anon_sym_PERCENTtriggerun] = ACTIONS(319),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(319),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(319),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(319),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(319),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(319),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(319),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(319),
    [anon_sym_PERCENTfiles] = ACTIONS(319),
    [anon_sym_PERCENTchangelog] = ACTIONS(319),
    [anon_sym_PERCENTglobal] = ACTIONS(319),
    [anon_sym_PERCENTdefine] = ACTIONS(319),
    [anon_sym_PERCENTundefine] = ACTIONS(319),
    [anon_sym_PERCENT] = ACTIONS(319),
    [sym_string_content_with_newlines] = ACTIONS(319),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(319),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(319),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [aux_sym__simple_statements_token1] = ACTIONS(393),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(393),
    [anon_sym_PERCENTifarch] = ACTIONS(393),
    [anon_sym_PERCENTifos] = ACTIONS(393),
    [anon_sym_PERCENTifnarch] = ACTIONS(393),
    [anon_sym_PERCENTifnos] = ACTIONS(393),
    [anon_sym_AutoProv] = ACTIONS(393),
    [anon_sym_AutoReq] = ACTIONS(393),
    [anon_sym_AutoReqProv] = ACTIONS(393),
    [anon_sym_BugUrl] = ACTIONS(393),
    [anon_sym_BuildRoot] = ACTIONS(393),
    [anon_sym_BuildSystem] = ACTIONS(393),
    [anon_sym_DistTag] = ACTIONS(393),
    [anon_sym_Distribution] = ACTIONS(393),
    [anon_sym_Epoch] = ACTIONS(393),
    [anon_sym_Group] = ACTIONS(393),
    [anon_sym_License] = ACTIONS(393),
    [anon_sym_ModularityLabel] = ACTIONS(393),
    [anon_sym_Name] = ACTIONS(393),
    [anon_sym_NoPatch] = ACTIONS(393),
    [anon_sym_NoSource] = ACTIONS(393),
    [anon_sym_Packager] = ACTIONS(393),
    [anon_sym_Release] = ACTIONS(393),
    [anon_sym_SourceLicense] = ACTIONS(393),
    [anon_sym_Summary] = ACTIONS(393),
    [anon_sym_URL] = ACTIONS(393),
    [anon_sym_Url] = ACTIONS(393),
    [anon_sym_VCS] = ACTIONS(393),
    [anon_sym_Vendor] = ACTIONS(393),
    [anon_sym_Version] = ACTIONS(393),
    [aux_sym_tag_token1] = ACTIONS(393),
    [aux_sym_tag_token2] = ACTIONS(393),
    [anon_sym_Requires] = ACTIONS(393),
    [anon_sym_BuildArch] = ACTIONS(393),
    [anon_sym_BuildArchitectures] = ACTIONS(393),
    [anon_sym_BuildConflicts] = ACTIONS(393),
    [anon_sym_BuildPrereq] = ACTIONS(393),
    [anon_sym_BuildRequires] = ACTIONS(393),
    [anon_sym_Conflicts] = ACTIONS(393),
    [anon_sym_DocDir] = ACTIONS(393),
    [anon_sym_Enhances] = ACTIONS(393),
    [anon_sym_ExcludeArch] = ACTIONS(393),
    [anon_sym_ExcludeOS] = ACTIONS(393),
    [anon_sym_ExclusiveArch] = ACTIONS(393),
    [anon_sym_ExclusiveOS] = ACTIONS(393),
    [anon_sym_Obsoletes] = ACTIONS(393),
    [anon_sym_OrderWithRequires] = ACTIONS(393),
    [anon_sym_Prefix] = ACTIONS(393),
    [anon_sym_Prefixes] = ACTIONS(393),
    [anon_sym_Prereq] = ACTIONS(393),
    [anon_sym_Provides] = ACTIONS(393),
    [anon_sym_Recommends] = ACTIONS(393),
    [anon_sym_RemovePathPostfixes] = ACTIONS(393),
    [anon_sym_Suggests] = ACTIONS(393),
    [anon_sym_Supplements] = ACTIONS(393),
    [anon_sym_PERCENTdescription] = ACTIONS(393),
    [anon_sym_PERCENTpackage] = ACTIONS(393),
    [anon_sym_PERCENTprep] = ACTIONS(393),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(393),
    [anon_sym_PERCENTconf] = ACTIONS(393),
    [anon_sym_PERCENTbuild] = ACTIONS(393),
    [anon_sym_PERCENTinstall] = ACTIONS(393),
    [anon_sym_PERCENTcheck] = ACTIONS(393),
    [anon_sym_PERCENTclean] = ACTIONS(393),
    [anon_sym_PERCENTpre] = ACTIONS(393),
    [anon_sym_PERCENTpost] = ACTIONS(393),
    [anon_sym_PERCENTpreun] = ACTIONS(393),
    [anon_sym_PERCENTpostun] = ACTIONS(393),
    [anon_sym_PERCENTpretrans] = ACTIONS(393),
    [anon_sym_PERCENTposttrans] = ACTIONS(393),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(393),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(393),
    [anon_sym_PERCENTverify] = ACTIONS(393),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(393),
    [anon_sym_PERCENTtriggerin] = ACTIONS(393),
    [anon_sym_PERCENTtriggerun] = ACTIONS(393),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(393),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(393),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(393),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(393),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(393),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(393),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(393),
    [anon_sym_PERCENTfiles] = ACTIONS(393),
    [anon_sym_PERCENTchangelog] = ACTIONS(393),
    [anon_sym_PERCENTglobal] = ACTIONS(393),
    [anon_sym_PERCENTdefine] = ACTIONS(393),
    [anon_sym_PERCENTundefine] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [sym_string_content_with_newlines] = ACTIONS(393),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(393),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(393),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [aux_sym__simple_statements_token1] = ACTIONS(395),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(397),
    [anon_sym_PERCENTifarch] = ACTIONS(397),
    [anon_sym_PERCENTifos] = ACTIONS(397),
    [anon_sym_PERCENTifnarch] = ACTIONS(397),
    [anon_sym_PERCENTifnos] = ACTIONS(397),
    [anon_sym_AutoProv] = ACTIONS(397),
    [anon_sym_AutoReq] = ACTIONS(397),
    [anon_sym_AutoReqProv] = ACTIONS(397),
    [anon_sym_BugUrl] = ACTIONS(397),
    [anon_sym_BuildRoot] = ACTIONS(397),
    [anon_sym_BuildSystem] = ACTIONS(397),
    [anon_sym_DistTag] = ACTIONS(397),
    [anon_sym_Distribution] = ACTIONS(397),
    [anon_sym_Epoch] = ACTIONS(397),
    [anon_sym_Group] = ACTIONS(397),
    [anon_sym_License] = ACTIONS(397),
    [anon_sym_ModularityLabel] = ACTIONS(397),
    [anon_sym_Name] = ACTIONS(397),
    [anon_sym_NoPatch] = ACTIONS(397),
    [anon_sym_NoSource] = ACTIONS(397),
    [anon_sym_Packager] = ACTIONS(397),
    [anon_sym_Release] = ACTIONS(397),
    [anon_sym_SourceLicense] = ACTIONS(397),
    [anon_sym_Summary] = ACTIONS(397),
    [anon_sym_URL] = ACTIONS(397),
    [anon_sym_Url] = ACTIONS(397),
    [anon_sym_VCS] = ACTIONS(397),
    [anon_sym_Vendor] = ACTIONS(397),
    [anon_sym_Version] = ACTIONS(397),
    [aux_sym_tag_token1] = ACTIONS(397),
    [aux_sym_tag_token2] = ACTIONS(397),
    [anon_sym_Requires] = ACTIONS(397),
    [anon_sym_BuildArch] = ACTIONS(397),
    [anon_sym_BuildArchitectures] = ACTIONS(397),
    [anon_sym_BuildConflicts] = ACTIONS(397),
    [anon_sym_BuildPrereq] = ACTIONS(397),
    [anon_sym_BuildRequires] = ACTIONS(397),
    [anon_sym_Conflicts] = ACTIONS(397),
    [anon_sym_DocDir] = ACTIONS(397),
    [anon_sym_Enhances] = ACTIONS(397),
    [anon_sym_ExcludeArch] = ACTIONS(397),
    [anon_sym_ExcludeOS] = ACTIONS(397),
    [anon_sym_ExclusiveArch] = ACTIONS(397),
    [anon_sym_ExclusiveOS] = ACTIONS(397),
    [anon_sym_Obsoletes] = ACTIONS(397),
    [anon_sym_OrderWithRequires] = ACTIONS(397),
    [anon_sym_Prefix] = ACTIONS(397),
    [anon_sym_Prefixes] = ACTIONS(397),
    [anon_sym_Prereq] = ACTIONS(397),
    [anon_sym_Provides] = ACTIONS(397),
    [anon_sym_Recommends] = ACTIONS(397),
    [anon_sym_RemovePathPostfixes] = ACTIONS(397),
    [anon_sym_Suggests] = ACTIONS(397),
    [anon_sym_Supplements] = ACTIONS(397),
    [anon_sym_PERCENTdescription] = ACTIONS(397),
    [anon_sym_PERCENTpackage] = ACTIONS(397),
    [anon_sym_PERCENTprep] = ACTIONS(397),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(397),
    [anon_sym_PERCENTconf] = ACTIONS(397),
    [anon_sym_PERCENTbuild] = ACTIONS(397),
    [anon_sym_PERCENTinstall] = ACTIONS(397),
    [anon_sym_PERCENTcheck] = ACTIONS(397),
    [anon_sym_PERCENTclean] = ACTIONS(397),
    [anon_sym_PERCENTpre] = ACTIONS(397),
    [anon_sym_PERCENTpost] = ACTIONS(397),
    [anon_sym_PERCENTpreun] = ACTIONS(397),
    [anon_sym_PERCENTpostun] = ACTIONS(397),
    [anon_sym_PERCENTpretrans] = ACTIONS(397),
    [anon_sym_PERCENTposttrans] = ACTIONS(397),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(397),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(397),
    [anon_sym_PERCENTverify] = ACTIONS(397),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(397),
    [anon_sym_PERCENTtriggerin] = ACTIONS(397),
    [anon_sym_PERCENTtriggerun] = ACTIONS(397),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(397),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(397),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(397),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(397),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(397),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(397),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(397),
    [anon_sym_PERCENTfiles] = ACTIONS(397),
    [anon_sym_PERCENTchangelog] = ACTIONS(397),
    [anon_sym_PERCENTglobal] = ACTIONS(397),
    [anon_sym_PERCENTdefine] = ACTIONS(397),
    [anon_sym_PERCENTundefine] = ACTIONS(397),
    [anon_sym_PERCENT] = ACTIONS(397),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(397),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(397),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [aux_sym__simple_statements_token1] = ACTIONS(399),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(401),
    [anon_sym_PERCENTifarch] = ACTIONS(401),
    [anon_sym_PERCENTifos] = ACTIONS(401),
    [anon_sym_PERCENTifnarch] = ACTIONS(401),
    [anon_sym_PERCENTifnos] = ACTIONS(401),
    [anon_sym_AutoProv] = ACTIONS(401),
    [anon_sym_AutoReq] = ACTIONS(401),
    [anon_sym_AutoReqProv] = ACTIONS(401),
    [anon_sym_BugUrl] = ACTIONS(401),
    [anon_sym_BuildRoot] = ACTIONS(401),
    [anon_sym_BuildSystem] = ACTIONS(401),
    [anon_sym_DistTag] = ACTIONS(401),
    [anon_sym_Distribution] = ACTIONS(401),
    [anon_sym_Epoch] = ACTIONS(401),
    [anon_sym_Group] = ACTIONS(401),
    [anon_sym_License] = ACTIONS(401),
    [anon_sym_ModularityLabel] = ACTIONS(401),
    [anon_sym_Name] = ACTIONS(401),
    [anon_sym_NoPatch] = ACTIONS(401),
    [anon_sym_NoSource] = ACTIONS(401),
    [anon_sym_Packager] = ACTIONS(401),
    [anon_sym_Release] = ACTIONS(401),
    [anon_sym_SourceLicense] = ACTIONS(401),
    [anon_sym_Summary] = ACTIONS(401),
    [anon_sym_URL] = ACTIONS(401),
    [anon_sym_Url] = ACTIONS(401),
    [anon_sym_VCS] = ACTIONS(401),
    [anon_sym_Vendor] = ACTIONS(401),
    [anon_sym_Version] = ACTIONS(401),
    [aux_sym_tag_token1] = ACTIONS(401),
    [aux_sym_tag_token2] = ACTIONS(401),
    [anon_sym_Requires] = ACTIONS(401),
    [anon_sym_BuildArch] = ACTIONS(401),
    [anon_sym_BuildArchitectures] = ACTIONS(401),
    [anon_sym_BuildConflicts] = ACTIONS(401),
    [anon_sym_BuildPrereq] = ACTIONS(401),
    [anon_sym_BuildRequires] = ACTIONS(401),
    [anon_sym_Conflicts] = ACTIONS(401),
    [anon_sym_DocDir] = ACTIONS(401),
    [anon_sym_Enhances] = ACTIONS(401),
    [anon_sym_ExcludeArch] = ACTIONS(401),
    [anon_sym_ExcludeOS] = ACTIONS(401),
    [anon_sym_ExclusiveArch] = ACTIONS(401),
    [anon_sym_ExclusiveOS] = ACTIONS(401),
    [anon_sym_Obsoletes] = ACTIONS(401),
    [anon_sym_OrderWithRequires] = ACTIONS(401),
    [anon_sym_Prefix] = ACTIONS(401),
    [anon_sym_Prefixes] = ACTIONS(401),
    [anon_sym_Prereq] = ACTIONS(401),
    [anon_sym_Provides] = ACTIONS(401),
    [anon_sym_Recommends] = ACTIONS(401),
    [anon_sym_RemovePathPostfixes] = ACTIONS(401),
    [anon_sym_Suggests] = ACTIONS(401),
    [anon_sym_Supplements] = ACTIONS(401),
    [anon_sym_PERCENTdescription] = ACTIONS(401),
    [anon_sym_PERCENTpackage] = ACTIONS(401),
    [anon_sym_PERCENTprep] = ACTIONS(401),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(401),
    [anon_sym_PERCENTconf] = ACTIONS(401),
    [anon_sym_PERCENTbuild] = ACTIONS(401),
    [anon_sym_PERCENTinstall] = ACTIONS(401),
    [anon_sym_PERCENTcheck] = ACTIONS(401),
    [anon_sym_PERCENTclean] = ACTIONS(401),
    [anon_sym_PERCENTpre] = ACTIONS(401),
    [anon_sym_PERCENTpost] = ACTIONS(401),
    [anon_sym_PERCENTpreun] = ACTIONS(401),
    [anon_sym_PERCENTpostun] = ACTIONS(401),
    [anon_sym_PERCENTpretrans] = ACTIONS(401),
    [anon_sym_PERCENTposttrans] = ACTIONS(401),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(401),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(401),
    [anon_sym_PERCENTverify] = ACTIONS(401),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(401),
    [anon_sym_PERCENTtriggerin] = ACTIONS(401),
    [anon_sym_PERCENTtriggerun] = ACTIONS(401),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(401),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(401),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(401),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(401),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(401),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(401),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(401),
    [anon_sym_PERCENTfiles] = ACTIONS(401),
    [anon_sym_PERCENTchangelog] = ACTIONS(401),
    [anon_sym_PERCENTglobal] = ACTIONS(401),
    [anon_sym_PERCENTdefine] = ACTIONS(401),
    [anon_sym_PERCENTundefine] = ACTIONS(401),
    [anon_sym_PERCENT] = ACTIONS(401),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(401),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(401),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(403),
    [aux_sym__simple_statements_token1] = ACTIONS(403),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(405),
    [anon_sym_PERCENTifarch] = ACTIONS(405),
    [anon_sym_PERCENTifos] = ACTIONS(405),
    [anon_sym_PERCENTifnarch] = ACTIONS(405),
    [anon_sym_PERCENTifnos] = ACTIONS(405),
    [anon_sym_AutoProv] = ACTIONS(405),
    [anon_sym_AutoReq] = ACTIONS(405),
    [anon_sym_AutoReqProv] = ACTIONS(405),
    [anon_sym_BugUrl] = ACTIONS(405),
    [anon_sym_BuildRoot] = ACTIONS(405),
    [anon_sym_BuildSystem] = ACTIONS(405),
    [anon_sym_DistTag] = ACTIONS(405),
    [anon_sym_Distribution] = ACTIONS(405),
    [anon_sym_Epoch] = ACTIONS(405),
    [anon_sym_Group] = ACTIONS(405),
    [anon_sym_License] = ACTIONS(405),
    [anon_sym_ModularityLabel] = ACTIONS(405),
    [anon_sym_Name] = ACTIONS(405),
    [anon_sym_NoPatch] = ACTIONS(405),
    [anon_sym_NoSource] = ACTIONS(405),
    [anon_sym_Packager] = ACTIONS(405),
    [anon_sym_Release] = ACTIONS(405),
    [anon_sym_SourceLicense] = ACTIONS(405),
    [anon_sym_Summary] = ACTIONS(405),
    [anon_sym_URL] = ACTIONS(405),
    [anon_sym_Url] = ACTIONS(405),
    [anon_sym_VCS] = ACTIONS(405),
    [anon_sym_Vendor] = ACTIONS(405),
    [anon_sym_Version] = ACTIONS(405),
    [aux_sym_tag_token1] = ACTIONS(405),
    [aux_sym_tag_token2] = ACTIONS(405),
    [anon_sym_Requires] = ACTIONS(405),
    [anon_sym_BuildArch] = ACTIONS(405),
    [anon_sym_BuildArchitectures] = ACTIONS(405),
    [anon_sym_BuildConflicts] = ACTIONS(405),
    [anon_sym_BuildPrereq] = ACTIONS(405),
    [anon_sym_BuildRequires] = ACTIONS(405),
    [anon_sym_Conflicts] = ACTIONS(405),
    [anon_sym_DocDir] = ACTIONS(405),
    [anon_sym_Enhances] = ACTIONS(405),
    [anon_sym_ExcludeArch] = ACTIONS(405),
    [anon_sym_ExcludeOS] = ACTIONS(405),
    [anon_sym_ExclusiveArch] = ACTIONS(405),
    [anon_sym_ExclusiveOS] = ACTIONS(405),
    [anon_sym_Obsoletes] = ACTIONS(405),
    [anon_sym_OrderWithRequires] = ACTIONS(405),
    [anon_sym_Prefix] = ACTIONS(405),
    [anon_sym_Prefixes] = ACTIONS(405),
    [anon_sym_Prereq] = ACTIONS(405),
    [anon_sym_Provides] = ACTIONS(405),
    [anon_sym_Recommends] = ACTIONS(405),
    [anon_sym_RemovePathPostfixes] = ACTIONS(405),
    [anon_sym_Suggests] = ACTIONS(405),
    [anon_sym_Supplements] = ACTIONS(405),
    [anon_sym_PERCENTdescription] = ACTIONS(405),
    [anon_sym_PERCENTpackage] = ACTIONS(405),
    [anon_sym_PERCENTprep] = ACTIONS(405),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(405),
    [anon_sym_PERCENTconf] = ACTIONS(405),
    [anon_sym_PERCENTbuild] = ACTIONS(405),
    [anon_sym_PERCENTinstall] = ACTIONS(405),
    [anon_sym_PERCENTcheck] = ACTIONS(405),
    [anon_sym_PERCENTclean] = ACTIONS(405),
    [anon_sym_PERCENTpre] = ACTIONS(405),
    [anon_sym_PERCENTpost] = ACTIONS(405),
    [anon_sym_PERCENTpreun] = ACTIONS(405),
    [anon_sym_PERCENTpostun] = ACTIONS(405),
    [anon_sym_PERCENTpretrans] = ACTIONS(405),
    [anon_sym_PERCENTposttrans] = ACTIONS(405),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(405),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(405),
    [anon_sym_PERCENTverify] = ACTIONS(405),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(405),
    [anon_sym_PERCENTtriggerin] = ACTIONS(405),
    [anon_sym_PERCENTtriggerun] = ACTIONS(405),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(405),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(405),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(405),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(405),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(405),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(405),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(405),
    [anon_sym_PERCENTfiles] = ACTIONS(405),
    [anon_sym_PERCENTchangelog] = ACTIONS(405),
    [anon_sym_PERCENTglobal] = ACTIONS(405),
    [anon_sym_PERCENTdefine] = ACTIONS(405),
    [anon_sym_PERCENTundefine] = ACTIONS(405),
    [anon_sym_PERCENT] = ACTIONS(405),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(405),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(405),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [aux_sym__simple_statements_token1] = ACTIONS(407),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(409),
    [anon_sym_PERCENTifarch] = ACTIONS(409),
    [anon_sym_PERCENTifos] = ACTIONS(409),
    [anon_sym_PERCENTifnarch] = ACTIONS(409),
    [anon_sym_PERCENTifnos] = ACTIONS(409),
    [anon_sym_AutoProv] = ACTIONS(409),
    [anon_sym_AutoReq] = ACTIONS(409),
    [anon_sym_AutoReqProv] = ACTIONS(409),
    [anon_sym_BugUrl] = ACTIONS(409),
    [anon_sym_BuildRoot] = ACTIONS(409),
    [anon_sym_BuildSystem] = ACTIONS(409),
    [anon_sym_DistTag] = ACTIONS(409),
    [anon_sym_Distribution] = ACTIONS(409),
    [anon_sym_Epoch] = ACTIONS(409),
    [anon_sym_Group] = ACTIONS(409),
    [anon_sym_License] = ACTIONS(409),
    [anon_sym_ModularityLabel] = ACTIONS(409),
    [anon_sym_Name] = ACTIONS(409),
    [anon_sym_NoPatch] = ACTIONS(409),
    [anon_sym_NoSource] = ACTIONS(409),
    [anon_sym_Packager] = ACTIONS(409),
    [anon_sym_Release] = ACTIONS(409),
    [anon_sym_SourceLicense] = ACTIONS(409),
    [anon_sym_Summary] = ACTIONS(409),
    [anon_sym_URL] = ACTIONS(409),
    [anon_sym_Url] = ACTIONS(409),
    [anon_sym_VCS] = ACTIONS(409),
    [anon_sym_Vendor] = ACTIONS(409),
    [anon_sym_Version] = ACTIONS(409),
    [aux_sym_tag_token1] = ACTIONS(409),
    [aux_sym_tag_token2] = ACTIONS(409),
    [anon_sym_Requires] = ACTIONS(409),
    [anon_sym_BuildArch] = ACTIONS(409),
    [anon_sym_BuildArchitectures] = ACTIONS(409),
    [anon_sym_BuildConflicts] = ACTIONS(409),
    [anon_sym_BuildPrereq] = ACTIONS(409),
    [anon_sym_BuildRequires] = ACTIONS(409),
    [anon_sym_Conflicts] = ACTIONS(409),
    [anon_sym_DocDir] = ACTIONS(409),
    [anon_sym_Enhances] = ACTIONS(409),
    [anon_sym_ExcludeArch] = ACTIONS(409),
    [anon_sym_ExcludeOS] = ACTIONS(409),
    [anon_sym_ExclusiveArch] = ACTIONS(409),
    [anon_sym_ExclusiveOS] = ACTIONS(409),
    [anon_sym_Obsoletes] = ACTIONS(409),
    [anon_sym_OrderWithRequires] = ACTIONS(409),
    [anon_sym_Prefix] = ACTIONS(409),
    [anon_sym_Prefixes] = ACTIONS(409),
    [anon_sym_Prereq] = ACTIONS(409),
    [anon_sym_Provides] = ACTIONS(409),
    [anon_sym_Recommends] = ACTIONS(409),
    [anon_sym_RemovePathPostfixes] = ACTIONS(409),
    [anon_sym_Suggests] = ACTIONS(409),
    [anon_sym_Supplements] = ACTIONS(409),
    [anon_sym_PERCENTdescription] = ACTIONS(409),
    [anon_sym_PERCENTpackage] = ACTIONS(409),
    [anon_sym_PERCENTprep] = ACTIONS(409),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(409),
    [anon_sym_PERCENTconf] = ACTIONS(409),
    [anon_sym_PERCENTbuild] = ACTIONS(409),
    [anon_sym_PERCENTinstall] = ACTIONS(409),
    [anon_sym_PERCENTcheck] = ACTIONS(409),
    [anon_sym_PERCENTclean] = ACTIONS(409),
    [anon_sym_PERCENTpre] = ACTIONS(409),
    [anon_sym_PERCENTpost] = ACTIONS(409),
    [anon_sym_PERCENTpreun] = ACTIONS(409),
    [anon_sym_PERCENTpostun] = ACTIONS(409),
    [anon_sym_PERCENTpretrans] = ACTIONS(409),
    [anon_sym_PERCENTposttrans] = ACTIONS(409),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(409),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(409),
    [anon_sym_PERCENTverify] = ACTIONS(409),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(409),
    [anon_sym_PERCENTtriggerin] = ACTIONS(409),
    [anon_sym_PERCENTtriggerun] = ACTIONS(409),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(409),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(409),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(409),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(409),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(409),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(409),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(409),
    [anon_sym_PERCENTfiles] = ACTIONS(409),
    [anon_sym_PERCENTchangelog] = ACTIONS(409),
    [anon_sym_PERCENTglobal] = ACTIONS(409),
    [anon_sym_PERCENTdefine] = ACTIONS(409),
    [anon_sym_PERCENTundefine] = ACTIONS(409),
    [anon_sym_PERCENT] = ACTIONS(409),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(409),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(409),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [aux_sym__simple_statements_token1] = ACTIONS(407),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(409),
    [anon_sym_PERCENTifarch] = ACTIONS(409),
    [anon_sym_PERCENTifos] = ACTIONS(409),
    [anon_sym_PERCENTifnarch] = ACTIONS(409),
    [anon_sym_PERCENTifnos] = ACTIONS(409),
    [anon_sym_AutoProv] = ACTIONS(409),
    [anon_sym_AutoReq] = ACTIONS(409),
    [anon_sym_AutoReqProv] = ACTIONS(409),
    [anon_sym_BugUrl] = ACTIONS(409),
    [anon_sym_BuildRoot] = ACTIONS(409),
    [anon_sym_BuildSystem] = ACTIONS(409),
    [anon_sym_DistTag] = ACTIONS(409),
    [anon_sym_Distribution] = ACTIONS(409),
    [anon_sym_Epoch] = ACTIONS(409),
    [anon_sym_Group] = ACTIONS(409),
    [anon_sym_License] = ACTIONS(409),
    [anon_sym_ModularityLabel] = ACTIONS(409),
    [anon_sym_Name] = ACTIONS(409),
    [anon_sym_NoPatch] = ACTIONS(409),
    [anon_sym_NoSource] = ACTIONS(409),
    [anon_sym_Packager] = ACTIONS(409),
    [anon_sym_Release] = ACTIONS(409),
    [anon_sym_SourceLicense] = ACTIONS(409),
    [anon_sym_Summary] = ACTIONS(409),
    [anon_sym_URL] = ACTIONS(409),
    [anon_sym_Url] = ACTIONS(409),
    [anon_sym_VCS] = ACTIONS(409),
    [anon_sym_Vendor] = ACTIONS(409),
    [anon_sym_Version] = ACTIONS(409),
    [aux_sym_tag_token1] = ACTIONS(409),
    [aux_sym_tag_token2] = ACTIONS(409),
    [anon_sym_Requires] = ACTIONS(409),
    [anon_sym_BuildArch] = ACTIONS(409),
    [anon_sym_BuildArchitectures] = ACTIONS(409),
    [anon_sym_BuildConflicts] = ACTIONS(409),
    [anon_sym_BuildPrereq] = ACTIONS(409),
    [anon_sym_BuildRequires] = ACTIONS(409),
    [anon_sym_Conflicts] = ACTIONS(409),
    [anon_sym_DocDir] = ACTIONS(409),
    [anon_sym_Enhances] = ACTIONS(409),
    [anon_sym_ExcludeArch] = ACTIONS(409),
    [anon_sym_ExcludeOS] = ACTIONS(409),
    [anon_sym_ExclusiveArch] = ACTIONS(409),
    [anon_sym_ExclusiveOS] = ACTIONS(409),
    [anon_sym_Obsoletes] = ACTIONS(409),
    [anon_sym_OrderWithRequires] = ACTIONS(409),
    [anon_sym_Prefix] = ACTIONS(409),
    [anon_sym_Prefixes] = ACTIONS(409),
    [anon_sym_Prereq] = ACTIONS(409),
    [anon_sym_Provides] = ACTIONS(409),
    [anon_sym_Recommends] = ACTIONS(409),
    [anon_sym_RemovePathPostfixes] = ACTIONS(409),
    [anon_sym_Suggests] = ACTIONS(409),
    [anon_sym_Supplements] = ACTIONS(409),
    [anon_sym_PERCENTdescription] = ACTIONS(409),
    [anon_sym_PERCENTpackage] = ACTIONS(409),
    [anon_sym_PERCENTprep] = ACTIONS(409),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(409),
    [anon_sym_PERCENTconf] = ACTIONS(409),
    [anon_sym_PERCENTbuild] = ACTIONS(409),
    [anon_sym_PERCENTinstall] = ACTIONS(409),
    [anon_sym_PERCENTcheck] = ACTIONS(409),
    [anon_sym_PERCENTclean] = ACTIONS(409),
    [anon_sym_PERCENTpre] = ACTIONS(409),
    [anon_sym_PERCENTpost] = ACTIONS(409),
    [anon_sym_PERCENTpreun] = ACTIONS(409),
    [anon_sym_PERCENTpostun] = ACTIONS(409),
    [anon_sym_PERCENTpretrans] = ACTIONS(409),
    [anon_sym_PERCENTposttrans] = ACTIONS(409),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(409),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(409),
    [anon_sym_PERCENTverify] = ACTIONS(409),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(409),
    [anon_sym_PERCENTtriggerin] = ACTIONS(409),
    [anon_sym_PERCENTtriggerun] = ACTIONS(409),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(409),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(409),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(409),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(409),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(409),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(409),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(409),
    [anon_sym_PERCENTfiles] = ACTIONS(409),
    [anon_sym_PERCENTchangelog] = ACTIONS(409),
    [anon_sym_PERCENTglobal] = ACTIONS(409),
    [anon_sym_PERCENTdefine] = ACTIONS(409),
    [anon_sym_PERCENTundefine] = ACTIONS(409),
    [anon_sym_PERCENT] = ACTIONS(409),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(409),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(409),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [aux_sym__simple_statements_token1] = ACTIONS(411),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(413),
    [anon_sym_PERCENTifarch] = ACTIONS(413),
    [anon_sym_PERCENTifos] = ACTIONS(413),
    [anon_sym_PERCENTifnarch] = ACTIONS(413),
    [anon_sym_PERCENTifnos] = ACTIONS(413),
    [anon_sym_AutoProv] = ACTIONS(413),
    [anon_sym_AutoReq] = ACTIONS(413),
    [anon_sym_AutoReqProv] = ACTIONS(413),
    [anon_sym_BugUrl] = ACTIONS(413),
    [anon_sym_BuildRoot] = ACTIONS(413),
    [anon_sym_BuildSystem] = ACTIONS(413),
    [anon_sym_DistTag] = ACTIONS(413),
    [anon_sym_Distribution] = ACTIONS(413),
    [anon_sym_Epoch] = ACTIONS(413),
    [anon_sym_Group] = ACTIONS(413),
    [anon_sym_License] = ACTIONS(413),
    [anon_sym_ModularityLabel] = ACTIONS(413),
    [anon_sym_Name] = ACTIONS(413),
    [anon_sym_NoPatch] = ACTIONS(413),
    [anon_sym_NoSource] = ACTIONS(413),
    [anon_sym_Packager] = ACTIONS(413),
    [anon_sym_Release] = ACTIONS(413),
    [anon_sym_SourceLicense] = ACTIONS(413),
    [anon_sym_Summary] = ACTIONS(413),
    [anon_sym_URL] = ACTIONS(413),
    [anon_sym_Url] = ACTIONS(413),
    [anon_sym_VCS] = ACTIONS(413),
    [anon_sym_Vendor] = ACTIONS(413),
    [anon_sym_Version] = ACTIONS(413),
    [aux_sym_tag_token1] = ACTIONS(413),
    [aux_sym_tag_token2] = ACTIONS(413),
    [anon_sym_Requires] = ACTIONS(413),
    [anon_sym_BuildArch] = ACTIONS(413),
    [anon_sym_BuildArchitectures] = ACTIONS(413),
    [anon_sym_BuildConflicts] = ACTIONS(413),
    [anon_sym_BuildPrereq] = ACTIONS(413),
    [anon_sym_BuildRequires] = ACTIONS(413),
    [anon_sym_Conflicts] = ACTIONS(413),
    [anon_sym_DocDir] = ACTIONS(413),
    [anon_sym_Enhances] = ACTIONS(413),
    [anon_sym_ExcludeArch] = ACTIONS(413),
    [anon_sym_ExcludeOS] = ACTIONS(413),
    [anon_sym_ExclusiveArch] = ACTIONS(413),
    [anon_sym_ExclusiveOS] = ACTIONS(413),
    [anon_sym_Obsoletes] = ACTIONS(413),
    [anon_sym_OrderWithRequires] = ACTIONS(413),
    [anon_sym_Prefix] = ACTIONS(413),
    [anon_sym_Prefixes] = ACTIONS(413),
    [anon_sym_Prereq] = ACTIONS(413),
    [anon_sym_Provides] = ACTIONS(413),
    [anon_sym_Recommends] = ACTIONS(413),
    [anon_sym_RemovePathPostfixes] = ACTIONS(413),
    [anon_sym_Suggests] = ACTIONS(413),
    [anon_sym_Supplements] = ACTIONS(413),
    [anon_sym_PERCENTdescription] = ACTIONS(413),
    [anon_sym_PERCENTpackage] = ACTIONS(413),
    [anon_sym_PERCENTprep] = ACTIONS(413),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(413),
    [anon_sym_PERCENTconf] = ACTIONS(413),
    [anon_sym_PERCENTbuild] = ACTIONS(413),
    [anon_sym_PERCENTinstall] = ACTIONS(413),
    [anon_sym_PERCENTcheck] = ACTIONS(413),
    [anon_sym_PERCENTclean] = ACTIONS(413),
    [anon_sym_PERCENTpre] = ACTIONS(413),
    [anon_sym_PERCENTpost] = ACTIONS(413),
    [anon_sym_PERCENTpreun] = ACTIONS(413),
    [anon_sym_PERCENTpostun] = ACTIONS(413),
    [anon_sym_PERCENTpretrans] = ACTIONS(413),
    [anon_sym_PERCENTposttrans] = ACTIONS(413),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(413),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(413),
    [anon_sym_PERCENTverify] = ACTIONS(413),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(413),
    [anon_sym_PERCENTtriggerin] = ACTIONS(413),
    [anon_sym_PERCENTtriggerun] = ACTIONS(413),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(413),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(413),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(413),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(413),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(413),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(413),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(413),
    [anon_sym_PERCENTfiles] = ACTIONS(413),
    [anon_sym_PERCENTchangelog] = ACTIONS(413),
    [anon_sym_PERCENTglobal] = ACTIONS(413),
    [anon_sym_PERCENTdefine] = ACTIONS(413),
    [anon_sym_PERCENTundefine] = ACTIONS(413),
    [anon_sym_PERCENT] = ACTIONS(413),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(413),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(413),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [aux_sym__simple_statements_token1] = ACTIONS(415),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(417),
    [anon_sym_PERCENTifarch] = ACTIONS(417),
    [anon_sym_PERCENTifos] = ACTIONS(417),
    [anon_sym_PERCENTifnarch] = ACTIONS(417),
    [anon_sym_PERCENTifnos] = ACTIONS(417),
    [anon_sym_AutoProv] = ACTIONS(417),
    [anon_sym_AutoReq] = ACTIONS(417),
    [anon_sym_AutoReqProv] = ACTIONS(417),
    [anon_sym_BugUrl] = ACTIONS(417),
    [anon_sym_BuildRoot] = ACTIONS(417),
    [anon_sym_BuildSystem] = ACTIONS(417),
    [anon_sym_DistTag] = ACTIONS(417),
    [anon_sym_Distribution] = ACTIONS(417),
    [anon_sym_Epoch] = ACTIONS(417),
    [anon_sym_Group] = ACTIONS(417),
    [anon_sym_License] = ACTIONS(417),
    [anon_sym_ModularityLabel] = ACTIONS(417),
    [anon_sym_Name] = ACTIONS(417),
    [anon_sym_NoPatch] = ACTIONS(417),
    [anon_sym_NoSource] = ACTIONS(417),
    [anon_sym_Packager] = ACTIONS(417),
    [anon_sym_Release] = ACTIONS(417),
    [anon_sym_SourceLicense] = ACTIONS(417),
    [anon_sym_Summary] = ACTIONS(417),
    [anon_sym_URL] = ACTIONS(417),
    [anon_sym_Url] = ACTIONS(417),
    [anon_sym_VCS] = ACTIONS(417),
    [anon_sym_Vendor] = ACTIONS(417),
    [anon_sym_Version] = ACTIONS(417),
    [aux_sym_tag_token1] = ACTIONS(417),
    [aux_sym_tag_token2] = ACTIONS(417),
    [anon_sym_Requires] = ACTIONS(417),
    [anon_sym_BuildArch] = ACTIONS(417),
    [anon_sym_BuildArchitectures] = ACTIONS(417),
    [anon_sym_BuildConflicts] = ACTIONS(417),
    [anon_sym_BuildPrereq] = ACTIONS(417),
    [anon_sym_BuildRequires] = ACTIONS(417),
    [anon_sym_Conflicts] = ACTIONS(417),
    [anon_sym_DocDir] = ACTIONS(417),
    [anon_sym_Enhances] = ACTIONS(417),
    [anon_sym_ExcludeArch] = ACTIONS(417),
    [anon_sym_ExcludeOS] = ACTIONS(417),
    [anon_sym_ExclusiveArch] = ACTIONS(417),
    [anon_sym_ExclusiveOS] = ACTIONS(417),
    [anon_sym_Obsoletes] = ACTIONS(417),
    [anon_sym_OrderWithRequires] = ACTIONS(417),
    [anon_sym_Prefix] = ACTIONS(417),
    [anon_sym_Prefixes] = ACTIONS(417),
    [anon_sym_Prereq] = ACTIONS(417),
    [anon_sym_Provides] = ACTIONS(417),
    [anon_sym_Recommends] = ACTIONS(417),
    [anon_sym_RemovePathPostfixes] = ACTIONS(417),
    [anon_sym_Suggests] = ACTIONS(417),
    [anon_sym_Supplements] = ACTIONS(417),
    [anon_sym_PERCENTdescription] = ACTIONS(417),
    [anon_sym_PERCENTpackage] = ACTIONS(417),
    [anon_sym_PERCENTprep] = ACTIONS(417),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(417),
    [anon_sym_PERCENTconf] = ACTIONS(417),
    [anon_sym_PERCENTbuild] = ACTIONS(417),
    [anon_sym_PERCENTinstall] = ACTIONS(417),
    [anon_sym_PERCENTcheck] = ACTIONS(417),
    [anon_sym_PERCENTclean] = ACTIONS(417),
    [anon_sym_PERCENTpre] = ACTIONS(417),
    [anon_sym_PERCENTpost] = ACTIONS(417),
    [anon_sym_PERCENTpreun] = ACTIONS(417),
    [anon_sym_PERCENTpostun] = ACTIONS(417),
    [anon_sym_PERCENTpretrans] = ACTIONS(417),
    [anon_sym_PERCENTposttrans] = ACTIONS(417),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(417),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(417),
    [anon_sym_PERCENTverify] = ACTIONS(417),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(417),
    [anon_sym_PERCENTtriggerin] = ACTIONS(417),
    [anon_sym_PERCENTtriggerun] = ACTIONS(417),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(417),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(417),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(417),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(417),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(417),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(417),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(417),
    [anon_sym_PERCENTfiles] = ACTIONS(417),
    [anon_sym_PERCENTchangelog] = ACTIONS(417),
    [anon_sym_PERCENTglobal] = ACTIONS(417),
    [anon_sym_PERCENTdefine] = ACTIONS(417),
    [anon_sym_PERCENTundefine] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(417),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(417),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(417),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [aux_sym__simple_statements_token1] = ACTIONS(383),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(385),
    [anon_sym_PERCENTifarch] = ACTIONS(385),
    [anon_sym_PERCENTifos] = ACTIONS(385),
    [anon_sym_PERCENTifnarch] = ACTIONS(385),
    [anon_sym_PERCENTifnos] = ACTIONS(385),
    [anon_sym_AutoProv] = ACTIONS(385),
    [anon_sym_AutoReq] = ACTIONS(385),
    [anon_sym_AutoReqProv] = ACTIONS(385),
    [anon_sym_BugUrl] = ACTIONS(385),
    [anon_sym_BuildRoot] = ACTIONS(385),
    [anon_sym_BuildSystem] = ACTIONS(385),
    [anon_sym_DistTag] = ACTIONS(385),
    [anon_sym_Distribution] = ACTIONS(385),
    [anon_sym_Epoch] = ACTIONS(385),
    [anon_sym_Group] = ACTIONS(385),
    [anon_sym_License] = ACTIONS(385),
    [anon_sym_ModularityLabel] = ACTIONS(385),
    [anon_sym_Name] = ACTIONS(385),
    [anon_sym_NoPatch] = ACTIONS(385),
    [anon_sym_NoSource] = ACTIONS(385),
    [anon_sym_Packager] = ACTIONS(385),
    [anon_sym_Release] = ACTIONS(385),
    [anon_sym_SourceLicense] = ACTIONS(385),
    [anon_sym_Summary] = ACTIONS(385),
    [anon_sym_URL] = ACTIONS(385),
    [anon_sym_Url] = ACTIONS(385),
    [anon_sym_VCS] = ACTIONS(385),
    [anon_sym_Vendor] = ACTIONS(385),
    [anon_sym_Version] = ACTIONS(385),
    [aux_sym_tag_token1] = ACTIONS(385),
    [aux_sym_tag_token2] = ACTIONS(385),
    [anon_sym_Requires] = ACTIONS(385),
    [anon_sym_BuildArch] = ACTIONS(385),
    [anon_sym_BuildArchitectures] = ACTIONS(385),
    [anon_sym_BuildConflicts] = ACTIONS(385),
    [anon_sym_BuildPrereq] = ACTIONS(385),
    [anon_sym_BuildRequires] = ACTIONS(385),
    [anon_sym_Conflicts] = ACTIONS(385),
    [anon_sym_DocDir] = ACTIONS(385),
    [anon_sym_Enhances] = ACTIONS(385),
    [anon_sym_ExcludeArch] = ACTIONS(385),
    [anon_sym_ExcludeOS] = ACTIONS(385),
    [anon_sym_ExclusiveArch] = ACTIONS(385),
    [anon_sym_ExclusiveOS] = ACTIONS(385),
    [anon_sym_Obsoletes] = ACTIONS(385),
    [anon_sym_OrderWithRequires] = ACTIONS(385),
    [anon_sym_Prefix] = ACTIONS(385),
    [anon_sym_Prefixes] = ACTIONS(385),
    [anon_sym_Prereq] = ACTIONS(385),
    [anon_sym_Provides] = ACTIONS(385),
    [anon_sym_Recommends] = ACTIONS(385),
    [anon_sym_RemovePathPostfixes] = ACTIONS(385),
    [anon_sym_Suggests] = ACTIONS(385),
    [anon_sym_Supplements] = ACTIONS(385),
    [anon_sym_PERCENTdescription] = ACTIONS(385),
    [anon_sym_PERCENTpackage] = ACTIONS(385),
    [anon_sym_PERCENTprep] = ACTIONS(385),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(385),
    [anon_sym_PERCENTconf] = ACTIONS(385),
    [anon_sym_PERCENTbuild] = ACTIONS(385),
    [anon_sym_PERCENTinstall] = ACTIONS(385),
    [anon_sym_PERCENTcheck] = ACTIONS(385),
    [anon_sym_PERCENTclean] = ACTIONS(385),
    [anon_sym_PERCENTpre] = ACTIONS(385),
    [anon_sym_PERCENTpost] = ACTIONS(385),
    [anon_sym_PERCENTpreun] = ACTIONS(385),
    [anon_sym_PERCENTpostun] = ACTIONS(385),
    [anon_sym_PERCENTpretrans] = ACTIONS(385),
    [anon_sym_PERCENTposttrans] = ACTIONS(385),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(385),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(385),
    [anon_sym_PERCENTverify] = ACTIONS(385),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(385),
    [anon_sym_PERCENTtriggerin] = ACTIONS(385),
    [anon_sym_PERCENTtriggerun] = ACTIONS(385),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(385),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(385),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(385),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(385),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(385),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(385),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(385),
    [anon_sym_PERCENTfiles] = ACTIONS(385),
    [anon_sym_PERCENTchangelog] = ACTIONS(385),
    [anon_sym_PERCENTglobal] = ACTIONS(385),
    [anon_sym_PERCENTdefine] = ACTIONS(385),
    [anon_sym_PERCENTundefine] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(385),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(385),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(385),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(419),
    [aux_sym__simple_statements_token1] = ACTIONS(419),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(421),
    [anon_sym_PERCENTifarch] = ACTIONS(421),
    [anon_sym_PERCENTifos] = ACTIONS(421),
    [anon_sym_PERCENTifnarch] = ACTIONS(421),
    [anon_sym_PERCENTifnos] = ACTIONS(421),
    [anon_sym_AutoProv] = ACTIONS(421),
    [anon_sym_AutoReq] = ACTIONS(421),
    [anon_sym_AutoReqProv] = ACTIONS(421),
    [anon_sym_BugUrl] = ACTIONS(421),
    [anon_sym_BuildRoot] = ACTIONS(421),
    [anon_sym_BuildSystem] = ACTIONS(421),
    [anon_sym_DistTag] = ACTIONS(421),
    [anon_sym_Distribution] = ACTIONS(421),
    [anon_sym_Epoch] = ACTIONS(421),
    [anon_sym_Group] = ACTIONS(421),
    [anon_sym_License] = ACTIONS(421),
    [anon_sym_ModularityLabel] = ACTIONS(421),
    [anon_sym_Name] = ACTIONS(421),
    [anon_sym_NoPatch] = ACTIONS(421),
    [anon_sym_NoSource] = ACTIONS(421),
    [anon_sym_Packager] = ACTIONS(421),
    [anon_sym_Release] = ACTIONS(421),
    [anon_sym_SourceLicense] = ACTIONS(421),
    [anon_sym_Summary] = ACTIONS(421),
    [anon_sym_URL] = ACTIONS(421),
    [anon_sym_Url] = ACTIONS(421),
    [anon_sym_VCS] = ACTIONS(421),
    [anon_sym_Vendor] = ACTIONS(421),
    [anon_sym_Version] = ACTIONS(421),
    [aux_sym_tag_token1] = ACTIONS(421),
    [aux_sym_tag_token2] = ACTIONS(421),
    [anon_sym_Requires] = ACTIONS(421),
    [anon_sym_BuildArch] = ACTIONS(421),
    [anon_sym_BuildArchitectures] = ACTIONS(421),
    [anon_sym_BuildConflicts] = ACTIONS(421),
    [anon_sym_BuildPrereq] = ACTIONS(421),
    [anon_sym_BuildRequires] = ACTIONS(421),
    [anon_sym_Conflicts] = ACTIONS(421),
    [anon_sym_DocDir] = ACTIONS(421),
    [anon_sym_Enhances] = ACTIONS(421),
    [anon_sym_ExcludeArch] = ACTIONS(421),
    [anon_sym_ExcludeOS] = ACTIONS(421),
    [anon_sym_ExclusiveArch] = ACTIONS(421),
    [anon_sym_ExclusiveOS] = ACTIONS(421),
    [anon_sym_Obsoletes] = ACTIONS(421),
    [anon_sym_OrderWithRequires] = ACTIONS(421),
    [anon_sym_Prefix] = ACTIONS(421),
    [anon_sym_Prefixes] = ACTIONS(421),
    [anon_sym_Prereq] = ACTIONS(421),
    [anon_sym_Provides] = ACTIONS(421),
    [anon_sym_Recommends] = ACTIONS(421),
    [anon_sym_RemovePathPostfixes] = ACTIONS(421),
    [anon_sym_Suggests] = ACTIONS(421),
    [anon_sym_Supplements] = ACTIONS(421),
    [anon_sym_PERCENTdescription] = ACTIONS(421),
    [anon_sym_PERCENTpackage] = ACTIONS(421),
    [anon_sym_PERCENTprep] = ACTIONS(421),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(421),
    [anon_sym_PERCENTconf] = ACTIONS(421),
    [anon_sym_PERCENTbuild] = ACTIONS(421),
    [anon_sym_PERCENTinstall] = ACTIONS(421),
    [anon_sym_PERCENTcheck] = ACTIONS(421),
    [anon_sym_PERCENTclean] = ACTIONS(421),
    [anon_sym_PERCENTpre] = ACTIONS(421),
    [anon_sym_PERCENTpost] = ACTIONS(421),
    [anon_sym_PERCENTpreun] = ACTIONS(421),
    [anon_sym_PERCENTpostun] = ACTIONS(421),
    [anon_sym_PERCENTpretrans] = ACTIONS(421),
    [anon_sym_PERCENTposttrans] = ACTIONS(421),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(421),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(421),
    [anon_sym_PERCENTverify] = ACTIONS(421),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(421),
    [anon_sym_PERCENTtriggerin] = ACTIONS(421),
    [anon_sym_PERCENTtriggerun] = ACTIONS(421),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(421),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(421),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(421),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(421),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(421),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(421),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(421),
    [anon_sym_PERCENTfiles] = ACTIONS(421),
    [anon_sym_PERCENTchangelog] = ACTIONS(421),
    [anon_sym_PERCENTglobal] = ACTIONS(421),
    [anon_sym_PERCENTdefine] = ACTIONS(421),
    [anon_sym_PERCENTundefine] = ACTIONS(421),
    [anon_sym_PERCENT] = ACTIONS(421),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(421),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(421),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym__simple_statements_token1] = ACTIONS(379),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(381),
    [anon_sym_PERCENTifarch] = ACTIONS(381),
    [anon_sym_PERCENTifos] = ACTIONS(381),
    [anon_sym_PERCENTifnarch] = ACTIONS(381),
    [anon_sym_PERCENTifnos] = ACTIONS(381),
    [anon_sym_AutoProv] = ACTIONS(381),
    [anon_sym_AutoReq] = ACTIONS(381),
    [anon_sym_AutoReqProv] = ACTIONS(381),
    [anon_sym_BugUrl] = ACTIONS(381),
    [anon_sym_BuildRoot] = ACTIONS(381),
    [anon_sym_BuildSystem] = ACTIONS(381),
    [anon_sym_DistTag] = ACTIONS(381),
    [anon_sym_Distribution] = ACTIONS(381),
    [anon_sym_Epoch] = ACTIONS(381),
    [anon_sym_Group] = ACTIONS(381),
    [anon_sym_License] = ACTIONS(381),
    [anon_sym_ModularityLabel] = ACTIONS(381),
    [anon_sym_Name] = ACTIONS(381),
    [anon_sym_NoPatch] = ACTIONS(381),
    [anon_sym_NoSource] = ACTIONS(381),
    [anon_sym_Packager] = ACTIONS(381),
    [anon_sym_Release] = ACTIONS(381),
    [anon_sym_SourceLicense] = ACTIONS(381),
    [anon_sym_Summary] = ACTIONS(381),
    [anon_sym_URL] = ACTIONS(381),
    [anon_sym_Url] = ACTIONS(381),
    [anon_sym_VCS] = ACTIONS(381),
    [anon_sym_Vendor] = ACTIONS(381),
    [anon_sym_Version] = ACTIONS(381),
    [aux_sym_tag_token1] = ACTIONS(381),
    [aux_sym_tag_token2] = ACTIONS(381),
    [anon_sym_Requires] = ACTIONS(381),
    [anon_sym_BuildArch] = ACTIONS(381),
    [anon_sym_BuildArchitectures] = ACTIONS(381),
    [anon_sym_BuildConflicts] = ACTIONS(381),
    [anon_sym_BuildPrereq] = ACTIONS(381),
    [anon_sym_BuildRequires] = ACTIONS(381),
    [anon_sym_Conflicts] = ACTIONS(381),
    [anon_sym_DocDir] = ACTIONS(381),
    [anon_sym_Enhances] = ACTIONS(381),
    [anon_sym_ExcludeArch] = ACTIONS(381),
    [anon_sym_ExcludeOS] = ACTIONS(381),
    [anon_sym_ExclusiveArch] = ACTIONS(381),
    [anon_sym_ExclusiveOS] = ACTIONS(381),
    [anon_sym_Obsoletes] = ACTIONS(381),
    [anon_sym_OrderWithRequires] = ACTIONS(381),
    [anon_sym_Prefix] = ACTIONS(381),
    [anon_sym_Prefixes] = ACTIONS(381),
    [anon_sym_Prereq] = ACTIONS(381),
    [anon_sym_Provides] = ACTIONS(381),
    [anon_sym_Recommends] = ACTIONS(381),
    [anon_sym_RemovePathPostfixes] = ACTIONS(381),
    [anon_sym_Suggests] = ACTIONS(381),
    [anon_sym_Supplements] = ACTIONS(381),
    [anon_sym_PERCENTdescription] = ACTIONS(381),
    [anon_sym_PERCENTpackage] = ACTIONS(381),
    [anon_sym_PERCENTprep] = ACTIONS(381),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(381),
    [anon_sym_PERCENTconf] = ACTIONS(381),
    [anon_sym_PERCENTbuild] = ACTIONS(381),
    [anon_sym_PERCENTinstall] = ACTIONS(381),
    [anon_sym_PERCENTcheck] = ACTIONS(381),
    [anon_sym_PERCENTclean] = ACTIONS(381),
    [anon_sym_PERCENTpre] = ACTIONS(381),
    [anon_sym_PERCENTpost] = ACTIONS(381),
    [anon_sym_PERCENTpreun] = ACTIONS(381),
    [anon_sym_PERCENTpostun] = ACTIONS(381),
    [anon_sym_PERCENTpretrans] = ACTIONS(381),
    [anon_sym_PERCENTposttrans] = ACTIONS(381),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(381),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(381),
    [anon_sym_PERCENTverify] = ACTIONS(381),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(381),
    [anon_sym_PERCENTtriggerin] = ACTIONS(381),
    [anon_sym_PERCENTtriggerun] = ACTIONS(381),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(381),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(381),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(381),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(381),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(381),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(381),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(381),
    [anon_sym_PERCENTfiles] = ACTIONS(381),
    [anon_sym_PERCENTchangelog] = ACTIONS(381),
    [anon_sym_PERCENTglobal] = ACTIONS(381),
    [anon_sym_PERCENTdefine] = ACTIONS(381),
    [anon_sym_PERCENTundefine] = ACTIONS(381),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(381),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(381),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [aux_sym__simple_statements_token1] = ACTIONS(423),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(425),
    [anon_sym_PERCENTifarch] = ACTIONS(425),
    [anon_sym_PERCENTifos] = ACTIONS(425),
    [anon_sym_PERCENTifnarch] = ACTIONS(425),
    [anon_sym_PERCENTifnos] = ACTIONS(425),
    [anon_sym_AutoProv] = ACTIONS(425),
    [anon_sym_AutoReq] = ACTIONS(425),
    [anon_sym_AutoReqProv] = ACTIONS(425),
    [anon_sym_BugUrl] = ACTIONS(425),
    [anon_sym_BuildRoot] = ACTIONS(425),
    [anon_sym_BuildSystem] = ACTIONS(425),
    [anon_sym_DistTag] = ACTIONS(425),
    [anon_sym_Distribution] = ACTIONS(425),
    [anon_sym_Epoch] = ACTIONS(425),
    [anon_sym_Group] = ACTIONS(425),
    [anon_sym_License] = ACTIONS(425),
    [anon_sym_ModularityLabel] = ACTIONS(425),
    [anon_sym_Name] = ACTIONS(425),
    [anon_sym_NoPatch] = ACTIONS(425),
    [anon_sym_NoSource] = ACTIONS(425),
    [anon_sym_Packager] = ACTIONS(425),
    [anon_sym_Release] = ACTIONS(425),
    [anon_sym_SourceLicense] = ACTIONS(425),
    [anon_sym_Summary] = ACTIONS(425),
    [anon_sym_URL] = ACTIONS(425),
    [anon_sym_Url] = ACTIONS(425),
    [anon_sym_VCS] = ACTIONS(425),
    [anon_sym_Vendor] = ACTIONS(425),
    [anon_sym_Version] = ACTIONS(425),
    [aux_sym_tag_token1] = ACTIONS(425),
    [aux_sym_tag_token2] = ACTIONS(425),
    [anon_sym_Requires] = ACTIONS(425),
    [anon_sym_BuildArch] = ACTIONS(425),
    [anon_sym_BuildArchitectures] = ACTIONS(425),
    [anon_sym_BuildConflicts] = ACTIONS(425),
    [anon_sym_BuildPrereq] = ACTIONS(425),
    [anon_sym_BuildRequires] = ACTIONS(425),
    [anon_sym_Conflicts] = ACTIONS(425),
    [anon_sym_DocDir] = ACTIONS(425),
    [anon_sym_Enhances] = ACTIONS(425),
    [anon_sym_ExcludeArch] = ACTIONS(425),
    [anon_sym_ExcludeOS] = ACTIONS(425),
    [anon_sym_ExclusiveArch] = ACTIONS(425),
    [anon_sym_ExclusiveOS] = ACTIONS(425),
    [anon_sym_Obsoletes] = ACTIONS(425),
    [anon_sym_OrderWithRequires] = ACTIONS(425),
    [anon_sym_Prefix] = ACTIONS(425),
    [anon_sym_Prefixes] = ACTIONS(425),
    [anon_sym_Prereq] = ACTIONS(425),
    [anon_sym_Provides] = ACTIONS(425),
    [anon_sym_Recommends] = ACTIONS(425),
    [anon_sym_RemovePathPostfixes] = ACTIONS(425),
    [anon_sym_Suggests] = ACTIONS(425),
    [anon_sym_Supplements] = ACTIONS(425),
    [anon_sym_PERCENTdescription] = ACTIONS(425),
    [anon_sym_PERCENTpackage] = ACTIONS(425),
    [anon_sym_PERCENTprep] = ACTIONS(425),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(425),
    [anon_sym_PERCENTconf] = ACTIONS(425),
    [anon_sym_PERCENTbuild] = ACTIONS(425),
    [anon_sym_PERCENTinstall] = ACTIONS(425),
    [anon_sym_PERCENTcheck] = ACTIONS(425),
    [anon_sym_PERCENTclean] = ACTIONS(425),
    [anon_sym_PERCENTpre] = ACTIONS(425),
    [anon_sym_PERCENTpost] = ACTIONS(425),
    [anon_sym_PERCENTpreun] = ACTIONS(425),
    [anon_sym_PERCENTpostun] = ACTIONS(425),
    [anon_sym_PERCENTpretrans] = ACTIONS(425),
    [anon_sym_PERCENTposttrans] = ACTIONS(425),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(425),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(425),
    [anon_sym_PERCENTverify] = ACTIONS(425),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(425),
    [anon_sym_PERCENTtriggerin] = ACTIONS(425),
    [anon_sym_PERCENTtriggerun] = ACTIONS(425),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(425),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(425),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(425),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(425),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(425),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(425),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(425),
    [anon_sym_PERCENTfiles] = ACTIONS(425),
    [anon_sym_PERCENTchangelog] = ACTIONS(425),
    [anon_sym_PERCENTglobal] = ACTIONS(425),
    [anon_sym_PERCENTdefine] = ACTIONS(425),
    [anon_sym_PERCENTundefine] = ACTIONS(425),
    [anon_sym_PERCENT] = ACTIONS(425),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(425),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(425),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [aux_sym__simple_statements_token1] = ACTIONS(427),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(429),
    [anon_sym_PERCENTifarch] = ACTIONS(429),
    [anon_sym_PERCENTifos] = ACTIONS(429),
    [anon_sym_PERCENTifnarch] = ACTIONS(429),
    [anon_sym_PERCENTifnos] = ACTIONS(429),
    [anon_sym_AutoProv] = ACTIONS(429),
    [anon_sym_AutoReq] = ACTIONS(429),
    [anon_sym_AutoReqProv] = ACTIONS(429),
    [anon_sym_BugUrl] = ACTIONS(429),
    [anon_sym_BuildRoot] = ACTIONS(429),
    [anon_sym_BuildSystem] = ACTIONS(429),
    [anon_sym_DistTag] = ACTIONS(429),
    [anon_sym_Distribution] = ACTIONS(429),
    [anon_sym_Epoch] = ACTIONS(429),
    [anon_sym_Group] = ACTIONS(429),
    [anon_sym_License] = ACTIONS(429),
    [anon_sym_ModularityLabel] = ACTIONS(429),
    [anon_sym_Name] = ACTIONS(429),
    [anon_sym_NoPatch] = ACTIONS(429),
    [anon_sym_NoSource] = ACTIONS(429),
    [anon_sym_Packager] = ACTIONS(429),
    [anon_sym_Release] = ACTIONS(429),
    [anon_sym_SourceLicense] = ACTIONS(429),
    [anon_sym_Summary] = ACTIONS(429),
    [anon_sym_URL] = ACTIONS(429),
    [anon_sym_Url] = ACTIONS(429),
    [anon_sym_VCS] = ACTIONS(429),
    [anon_sym_Vendor] = ACTIONS(429),
    [anon_sym_Version] = ACTIONS(429),
    [aux_sym_tag_token1] = ACTIONS(429),
    [aux_sym_tag_token2] = ACTIONS(429),
    [anon_sym_Requires] = ACTIONS(429),
    [anon_sym_BuildArch] = ACTIONS(429),
    [anon_sym_BuildArchitectures] = ACTIONS(429),
    [anon_sym_BuildConflicts] = ACTIONS(429),
    [anon_sym_BuildPrereq] = ACTIONS(429),
    [anon_sym_BuildRequires] = ACTIONS(429),
    [anon_sym_Conflicts] = ACTIONS(429),
    [anon_sym_DocDir] = ACTIONS(429),
    [anon_sym_Enhances] = ACTIONS(429),
    [anon_sym_ExcludeArch] = ACTIONS(429),
    [anon_sym_ExcludeOS] = ACTIONS(429),
    [anon_sym_ExclusiveArch] = ACTIONS(429),
    [anon_sym_ExclusiveOS] = ACTIONS(429),
    [anon_sym_Obsoletes] = ACTIONS(429),
    [anon_sym_OrderWithRequires] = ACTIONS(429),
    [anon_sym_Prefix] = ACTIONS(429),
    [anon_sym_Prefixes] = ACTIONS(429),
    [anon_sym_Prereq] = ACTIONS(429),
    [anon_sym_Provides] = ACTIONS(429),
    [anon_sym_Recommends] = ACTIONS(429),
    [anon_sym_RemovePathPostfixes] = ACTIONS(429),
    [anon_sym_Suggests] = ACTIONS(429),
    [anon_sym_Supplements] = ACTIONS(429),
    [anon_sym_PERCENTdescription] = ACTIONS(429),
    [anon_sym_PERCENTpackage] = ACTIONS(429),
    [anon_sym_PERCENTprep] = ACTIONS(429),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(429),
    [anon_sym_PERCENTconf] = ACTIONS(429),
    [anon_sym_PERCENTbuild] = ACTIONS(429),
    [anon_sym_PERCENTinstall] = ACTIONS(429),
    [anon_sym_PERCENTcheck] = ACTIONS(429),
    [anon_sym_PERCENTclean] = ACTIONS(429),
    [anon_sym_PERCENTpre] = ACTIONS(429),
    [anon_sym_PERCENTpost] = ACTIONS(429),
    [anon_sym_PERCENTpreun] = ACTIONS(429),
    [anon_sym_PERCENTpostun] = ACTIONS(429),
    [anon_sym_PERCENTpretrans] = ACTIONS(429),
    [anon_sym_PERCENTposttrans] = ACTIONS(429),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(429),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(429),
    [anon_sym_PERCENTverify] = ACTIONS(429),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(429),
    [anon_sym_PERCENTtriggerin] = ACTIONS(429),
    [anon_sym_PERCENTtriggerun] = ACTIONS(429),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(429),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(429),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(429),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(429),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(429),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(429),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(429),
    [anon_sym_PERCENTfiles] = ACTIONS(429),
    [anon_sym_PERCENTchangelog] = ACTIONS(429),
    [anon_sym_PERCENTglobal] = ACTIONS(429),
    [anon_sym_PERCENTdefine] = ACTIONS(429),
    [anon_sym_PERCENTundefine] = ACTIONS(429),
    [anon_sym_PERCENT] = ACTIONS(429),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(429),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(429),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [aux_sym__simple_statements_token1] = ACTIONS(431),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(433),
    [anon_sym_PERCENTifarch] = ACTIONS(433),
    [anon_sym_PERCENTifos] = ACTIONS(433),
    [anon_sym_PERCENTifnarch] = ACTIONS(433),
    [anon_sym_PERCENTifnos] = ACTIONS(433),
    [anon_sym_AutoProv] = ACTIONS(433),
    [anon_sym_AutoReq] = ACTIONS(433),
    [anon_sym_AutoReqProv] = ACTIONS(433),
    [anon_sym_BugUrl] = ACTIONS(433),
    [anon_sym_BuildRoot] = ACTIONS(433),
    [anon_sym_BuildSystem] = ACTIONS(433),
    [anon_sym_DistTag] = ACTIONS(433),
    [anon_sym_Distribution] = ACTIONS(433),
    [anon_sym_Epoch] = ACTIONS(433),
    [anon_sym_Group] = ACTIONS(433),
    [anon_sym_License] = ACTIONS(433),
    [anon_sym_ModularityLabel] = ACTIONS(433),
    [anon_sym_Name] = ACTIONS(433),
    [anon_sym_NoPatch] = ACTIONS(433),
    [anon_sym_NoSource] = ACTIONS(433),
    [anon_sym_Packager] = ACTIONS(433),
    [anon_sym_Release] = ACTIONS(433),
    [anon_sym_SourceLicense] = ACTIONS(433),
    [anon_sym_Summary] = ACTIONS(433),
    [anon_sym_URL] = ACTIONS(433),
    [anon_sym_Url] = ACTIONS(433),
    [anon_sym_VCS] = ACTIONS(433),
    [anon_sym_Vendor] = ACTIONS(433),
    [anon_sym_Version] = ACTIONS(433),
    [aux_sym_tag_token1] = ACTIONS(433),
    [aux_sym_tag_token2] = ACTIONS(433),
    [anon_sym_Requires] = ACTIONS(433),
    [anon_sym_BuildArch] = ACTIONS(433),
    [anon_sym_BuildArchitectures] = ACTIONS(433),
    [anon_sym_BuildConflicts] = ACTIONS(433),
    [anon_sym_BuildPrereq] = ACTIONS(433),
    [anon_sym_BuildRequires] = ACTIONS(433),
    [anon_sym_Conflicts] = ACTIONS(433),
    [anon_sym_DocDir] = ACTIONS(433),
    [anon_sym_Enhances] = ACTIONS(433),
    [anon_sym_ExcludeArch] = ACTIONS(433),
    [anon_sym_ExcludeOS] = ACTIONS(433),
    [anon_sym_ExclusiveArch] = ACTIONS(433),
    [anon_sym_ExclusiveOS] = ACTIONS(433),
    [anon_sym_Obsoletes] = ACTIONS(433),
    [anon_sym_OrderWithRequires] = ACTIONS(433),
    [anon_sym_Prefix] = ACTIONS(433),
    [anon_sym_Prefixes] = ACTIONS(433),
    [anon_sym_Prereq] = ACTIONS(433),
    [anon_sym_Provides] = ACTIONS(433),
    [anon_sym_Recommends] = ACTIONS(433),
    [anon_sym_RemovePathPostfixes] = ACTIONS(433),
    [anon_sym_Suggests] = ACTIONS(433),
    [anon_sym_Supplements] = ACTIONS(433),
    [anon_sym_PERCENTdescription] = ACTIONS(433),
    [anon_sym_PERCENTpackage] = ACTIONS(433),
    [anon_sym_PERCENTprep] = ACTIONS(433),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(433),
    [anon_sym_PERCENTconf] = ACTIONS(433),
    [anon_sym_PERCENTbuild] = ACTIONS(433),
    [anon_sym_PERCENTinstall] = ACTIONS(433),
    [anon_sym_PERCENTcheck] = ACTIONS(433),
    [anon_sym_PERCENTclean] = ACTIONS(433),
    [anon_sym_PERCENTpre] = ACTIONS(433),
    [anon_sym_PERCENTpost] = ACTIONS(433),
    [anon_sym_PERCENTpreun] = ACTIONS(433),
    [anon_sym_PERCENTpostun] = ACTIONS(433),
    [anon_sym_PERCENTpretrans] = ACTIONS(433),
    [anon_sym_PERCENTposttrans] = ACTIONS(433),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(433),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(433),
    [anon_sym_PERCENTverify] = ACTIONS(433),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(433),
    [anon_sym_PERCENTtriggerin] = ACTIONS(433),
    [anon_sym_PERCENTtriggerun] = ACTIONS(433),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(433),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(433),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(433),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(433),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(433),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(433),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(433),
    [anon_sym_PERCENTfiles] = ACTIONS(433),
    [anon_sym_PERCENTchangelog] = ACTIONS(433),
    [anon_sym_PERCENTglobal] = ACTIONS(433),
    [anon_sym_PERCENTdefine] = ACTIONS(433),
    [anon_sym_PERCENTundefine] = ACTIONS(433),
    [anon_sym_PERCENT] = ACTIONS(433),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(433),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(433),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [aux_sym__simple_statements_token1] = ACTIONS(435),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(437),
    [anon_sym_PERCENTifarch] = ACTIONS(437),
    [anon_sym_PERCENTifos] = ACTIONS(437),
    [anon_sym_PERCENTifnarch] = ACTIONS(437),
    [anon_sym_PERCENTifnos] = ACTIONS(437),
    [anon_sym_AutoProv] = ACTIONS(437),
    [anon_sym_AutoReq] = ACTIONS(437),
    [anon_sym_AutoReqProv] = ACTIONS(437),
    [anon_sym_BugUrl] = ACTIONS(437),
    [anon_sym_BuildRoot] = ACTIONS(437),
    [anon_sym_BuildSystem] = ACTIONS(437),
    [anon_sym_DistTag] = ACTIONS(437),
    [anon_sym_Distribution] = ACTIONS(437),
    [anon_sym_Epoch] = ACTIONS(437),
    [anon_sym_Group] = ACTIONS(437),
    [anon_sym_License] = ACTIONS(437),
    [anon_sym_ModularityLabel] = ACTIONS(437),
    [anon_sym_Name] = ACTIONS(437),
    [anon_sym_NoPatch] = ACTIONS(437),
    [anon_sym_NoSource] = ACTIONS(437),
    [anon_sym_Packager] = ACTIONS(437),
    [anon_sym_Release] = ACTIONS(437),
    [anon_sym_SourceLicense] = ACTIONS(437),
    [anon_sym_Summary] = ACTIONS(437),
    [anon_sym_URL] = ACTIONS(437),
    [anon_sym_Url] = ACTIONS(437),
    [anon_sym_VCS] = ACTIONS(437),
    [anon_sym_Vendor] = ACTIONS(437),
    [anon_sym_Version] = ACTIONS(437),
    [aux_sym_tag_token1] = ACTIONS(437),
    [aux_sym_tag_token2] = ACTIONS(437),
    [anon_sym_Requires] = ACTIONS(437),
    [anon_sym_BuildArch] = ACTIONS(437),
    [anon_sym_BuildArchitectures] = ACTIONS(437),
    [anon_sym_BuildConflicts] = ACTIONS(437),
    [anon_sym_BuildPrereq] = ACTIONS(437),
    [anon_sym_BuildRequires] = ACTIONS(437),
    [anon_sym_Conflicts] = ACTIONS(437),
    [anon_sym_DocDir] = ACTIONS(437),
    [anon_sym_Enhances] = ACTIONS(437),
    [anon_sym_ExcludeArch] = ACTIONS(437),
    [anon_sym_ExcludeOS] = ACTIONS(437),
    [anon_sym_ExclusiveArch] = ACTIONS(437),
    [anon_sym_ExclusiveOS] = ACTIONS(437),
    [anon_sym_Obsoletes] = ACTIONS(437),
    [anon_sym_OrderWithRequires] = ACTIONS(437),
    [anon_sym_Prefix] = ACTIONS(437),
    [anon_sym_Prefixes] = ACTIONS(437),
    [anon_sym_Prereq] = ACTIONS(437),
    [anon_sym_Provides] = ACTIONS(437),
    [anon_sym_Recommends] = ACTIONS(437),
    [anon_sym_RemovePathPostfixes] = ACTIONS(437),
    [anon_sym_Suggests] = ACTIONS(437),
    [anon_sym_Supplements] = ACTIONS(437),
    [anon_sym_PERCENTdescription] = ACTIONS(437),
    [anon_sym_PERCENTpackage] = ACTIONS(437),
    [anon_sym_PERCENTprep] = ACTIONS(437),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(437),
    [anon_sym_PERCENTconf] = ACTIONS(437),
    [anon_sym_PERCENTbuild] = ACTIONS(437),
    [anon_sym_PERCENTinstall] = ACTIONS(437),
    [anon_sym_PERCENTcheck] = ACTIONS(437),
    [anon_sym_PERCENTclean] = ACTIONS(437),
    [anon_sym_PERCENTpre] = ACTIONS(437),
    [anon_sym_PERCENTpost] = ACTIONS(437),
    [anon_sym_PERCENTpreun] = ACTIONS(437),
    [anon_sym_PERCENTpostun] = ACTIONS(437),
    [anon_sym_PERCENTpretrans] = ACTIONS(437),
    [anon_sym_PERCENTposttrans] = ACTIONS(437),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(437),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(437),
    [anon_sym_PERCENTverify] = ACTIONS(437),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(437),
    [anon_sym_PERCENTtriggerin] = ACTIONS(437),
    [anon_sym_PERCENTtriggerun] = ACTIONS(437),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(437),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(437),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(437),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(437),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(437),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(437),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(437),
    [anon_sym_PERCENTfiles] = ACTIONS(437),
    [anon_sym_PERCENTchangelog] = ACTIONS(437),
    [anon_sym_PERCENTglobal] = ACTIONS(437),
    [anon_sym_PERCENTdefine] = ACTIONS(437),
    [anon_sym_PERCENTundefine] = ACTIONS(437),
    [anon_sym_PERCENT] = ACTIONS(437),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(437),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(437),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(439),
    [aux_sym__simple_statements_token1] = ACTIONS(439),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(441),
    [anon_sym_PERCENTifarch] = ACTIONS(441),
    [anon_sym_PERCENTifos] = ACTIONS(441),
    [anon_sym_PERCENTifnarch] = ACTIONS(441),
    [anon_sym_PERCENTifnos] = ACTIONS(441),
    [anon_sym_AutoProv] = ACTIONS(441),
    [anon_sym_AutoReq] = ACTIONS(441),
    [anon_sym_AutoReqProv] = ACTIONS(441),
    [anon_sym_BugUrl] = ACTIONS(441),
    [anon_sym_BuildRoot] = ACTIONS(441),
    [anon_sym_BuildSystem] = ACTIONS(441),
    [anon_sym_DistTag] = ACTIONS(441),
    [anon_sym_Distribution] = ACTIONS(441),
    [anon_sym_Epoch] = ACTIONS(441),
    [anon_sym_Group] = ACTIONS(441),
    [anon_sym_License] = ACTIONS(441),
    [anon_sym_ModularityLabel] = ACTIONS(441),
    [anon_sym_Name] = ACTIONS(441),
    [anon_sym_NoPatch] = ACTIONS(441),
    [anon_sym_NoSource] = ACTIONS(441),
    [anon_sym_Packager] = ACTIONS(441),
    [anon_sym_Release] = ACTIONS(441),
    [anon_sym_SourceLicense] = ACTIONS(441),
    [anon_sym_Summary] = ACTIONS(441),
    [anon_sym_URL] = ACTIONS(441),
    [anon_sym_Url] = ACTIONS(441),
    [anon_sym_VCS] = ACTIONS(441),
    [anon_sym_Vendor] = ACTIONS(441),
    [anon_sym_Version] = ACTIONS(441),
    [aux_sym_tag_token1] = ACTIONS(441),
    [aux_sym_tag_token2] = ACTIONS(441),
    [anon_sym_Requires] = ACTIONS(441),
    [anon_sym_BuildArch] = ACTIONS(441),
    [anon_sym_BuildArchitectures] = ACTIONS(441),
    [anon_sym_BuildConflicts] = ACTIONS(441),
    [anon_sym_BuildPrereq] = ACTIONS(441),
    [anon_sym_BuildRequires] = ACTIONS(441),
    [anon_sym_Conflicts] = ACTIONS(441),
    [anon_sym_DocDir] = ACTIONS(441),
    [anon_sym_Enhances] = ACTIONS(441),
    [anon_sym_ExcludeArch] = ACTIONS(441),
    [anon_sym_ExcludeOS] = ACTIONS(441),
    [anon_sym_ExclusiveArch] = ACTIONS(441),
    [anon_sym_ExclusiveOS] = ACTIONS(441),
    [anon_sym_Obsoletes] = ACTIONS(441),
    [anon_sym_OrderWithRequires] = ACTIONS(441),
    [anon_sym_Prefix] = ACTIONS(441),
    [anon_sym_Prefixes] = ACTIONS(441),
    [anon_sym_Prereq] = ACTIONS(441),
    [anon_sym_Provides] = ACTIONS(441),
    [anon_sym_Recommends] = ACTIONS(441),
    [anon_sym_RemovePathPostfixes] = ACTIONS(441),
    [anon_sym_Suggests] = ACTIONS(441),
    [anon_sym_Supplements] = ACTIONS(441),
    [anon_sym_PERCENTdescription] = ACTIONS(441),
    [anon_sym_PERCENTpackage] = ACTIONS(441),
    [anon_sym_PERCENTprep] = ACTIONS(441),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(441),
    [anon_sym_PERCENTconf] = ACTIONS(441),
    [anon_sym_PERCENTbuild] = ACTIONS(441),
    [anon_sym_PERCENTinstall] = ACTIONS(441),
    [anon_sym_PERCENTcheck] = ACTIONS(441),
    [anon_sym_PERCENTclean] = ACTIONS(441),
    [anon_sym_PERCENTpre] = ACTIONS(441),
    [anon_sym_PERCENTpost] = ACTIONS(441),
    [anon_sym_PERCENTpreun] = ACTIONS(441),
    [anon_sym_PERCENTpostun] = ACTIONS(441),
    [anon_sym_PERCENTpretrans] = ACTIONS(441),
    [anon_sym_PERCENTposttrans] = ACTIONS(441),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(441),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(441),
    [anon_sym_PERCENTverify] = ACTIONS(441),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(441),
    [anon_sym_PERCENTtriggerin] = ACTIONS(441),
    [anon_sym_PERCENTtriggerun] = ACTIONS(441),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(441),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(441),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(441),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(441),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(441),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(441),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(441),
    [anon_sym_PERCENTfiles] = ACTIONS(441),
    [anon_sym_PERCENTchangelog] = ACTIONS(441),
    [anon_sym_PERCENTglobal] = ACTIONS(441),
    [anon_sym_PERCENTdefine] = ACTIONS(441),
    [anon_sym_PERCENTundefine] = ACTIONS(441),
    [anon_sym_PERCENT] = ACTIONS(441),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(441),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(441),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [aux_sym__simple_statements_token1] = ACTIONS(443),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(445),
    [anon_sym_PERCENTifarch] = ACTIONS(445),
    [anon_sym_PERCENTifos] = ACTIONS(445),
    [anon_sym_PERCENTifnarch] = ACTIONS(445),
    [anon_sym_PERCENTifnos] = ACTIONS(445),
    [anon_sym_AutoProv] = ACTIONS(445),
    [anon_sym_AutoReq] = ACTIONS(445),
    [anon_sym_AutoReqProv] = ACTIONS(445),
    [anon_sym_BugUrl] = ACTIONS(445),
    [anon_sym_BuildRoot] = ACTIONS(445),
    [anon_sym_BuildSystem] = ACTIONS(445),
    [anon_sym_DistTag] = ACTIONS(445),
    [anon_sym_Distribution] = ACTIONS(445),
    [anon_sym_Epoch] = ACTIONS(445),
    [anon_sym_Group] = ACTIONS(445),
    [anon_sym_License] = ACTIONS(445),
    [anon_sym_ModularityLabel] = ACTIONS(445),
    [anon_sym_Name] = ACTIONS(445),
    [anon_sym_NoPatch] = ACTIONS(445),
    [anon_sym_NoSource] = ACTIONS(445),
    [anon_sym_Packager] = ACTIONS(445),
    [anon_sym_Release] = ACTIONS(445),
    [anon_sym_SourceLicense] = ACTIONS(445),
    [anon_sym_Summary] = ACTIONS(445),
    [anon_sym_URL] = ACTIONS(445),
    [anon_sym_Url] = ACTIONS(445),
    [anon_sym_VCS] = ACTIONS(445),
    [anon_sym_Vendor] = ACTIONS(445),
    [anon_sym_Version] = ACTIONS(445),
    [aux_sym_tag_token1] = ACTIONS(445),
    [aux_sym_tag_token2] = ACTIONS(445),
    [anon_sym_Requires] = ACTIONS(445),
    [anon_sym_BuildArch] = ACTIONS(445),
    [anon_sym_BuildArchitectures] = ACTIONS(445),
    [anon_sym_BuildConflicts] = ACTIONS(445),
    [anon_sym_BuildPrereq] = ACTIONS(445),
    [anon_sym_BuildRequires] = ACTIONS(445),
    [anon_sym_Conflicts] = ACTIONS(445),
    [anon_sym_DocDir] = ACTIONS(445),
    [anon_sym_Enhances] = ACTIONS(445),
    [anon_sym_ExcludeArch] = ACTIONS(445),
    [anon_sym_ExcludeOS] = ACTIONS(445),
    [anon_sym_ExclusiveArch] = ACTIONS(445),
    [anon_sym_ExclusiveOS] = ACTIONS(445),
    [anon_sym_Obsoletes] = ACTIONS(445),
    [anon_sym_OrderWithRequires] = ACTIONS(445),
    [anon_sym_Prefix] = ACTIONS(445),
    [anon_sym_Prefixes] = ACTIONS(445),
    [anon_sym_Prereq] = ACTIONS(445),
    [anon_sym_Provides] = ACTIONS(445),
    [anon_sym_Recommends] = ACTIONS(445),
    [anon_sym_RemovePathPostfixes] = ACTIONS(445),
    [anon_sym_Suggests] = ACTIONS(445),
    [anon_sym_Supplements] = ACTIONS(445),
    [anon_sym_PERCENTdescription] = ACTIONS(445),
    [anon_sym_PERCENTpackage] = ACTIONS(445),
    [anon_sym_PERCENTprep] = ACTIONS(445),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(445),
    [anon_sym_PERCENTconf] = ACTIONS(445),
    [anon_sym_PERCENTbuild] = ACTIONS(445),
    [anon_sym_PERCENTinstall] = ACTIONS(445),
    [anon_sym_PERCENTcheck] = ACTIONS(445),
    [anon_sym_PERCENTclean] = ACTIONS(445),
    [anon_sym_PERCENTpre] = ACTIONS(445),
    [anon_sym_PERCENTpost] = ACTIONS(445),
    [anon_sym_PERCENTpreun] = ACTIONS(445),
    [anon_sym_PERCENTpostun] = ACTIONS(445),
    [anon_sym_PERCENTpretrans] = ACTIONS(445),
    [anon_sym_PERCENTposttrans] = ACTIONS(445),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(445),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(445),
    [anon_sym_PERCENTverify] = ACTIONS(445),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(445),
    [anon_sym_PERCENTtriggerin] = ACTIONS(445),
    [anon_sym_PERCENTtriggerun] = ACTIONS(445),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(445),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(445),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(445),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(445),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(445),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(445),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(445),
    [anon_sym_PERCENTfiles] = ACTIONS(445),
    [anon_sym_PERCENTchangelog] = ACTIONS(445),
    [anon_sym_PERCENTglobal] = ACTIONS(445),
    [anon_sym_PERCENTdefine] = ACTIONS(445),
    [anon_sym_PERCENTundefine] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(445),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(445),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(445),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [aux_sym__simple_statements_token1] = ACTIONS(443),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(445),
    [anon_sym_PERCENTifarch] = ACTIONS(445),
    [anon_sym_PERCENTifos] = ACTIONS(445),
    [anon_sym_PERCENTifnarch] = ACTIONS(445),
    [anon_sym_PERCENTifnos] = ACTIONS(445),
    [anon_sym_AutoProv] = ACTIONS(445),
    [anon_sym_AutoReq] = ACTIONS(445),
    [anon_sym_AutoReqProv] = ACTIONS(445),
    [anon_sym_BugUrl] = ACTIONS(445),
    [anon_sym_BuildRoot] = ACTIONS(445),
    [anon_sym_BuildSystem] = ACTIONS(445),
    [anon_sym_DistTag] = ACTIONS(445),
    [anon_sym_Distribution] = ACTIONS(445),
    [anon_sym_Epoch] = ACTIONS(445),
    [anon_sym_Group] = ACTIONS(445),
    [anon_sym_License] = ACTIONS(445),
    [anon_sym_ModularityLabel] = ACTIONS(445),
    [anon_sym_Name] = ACTIONS(445),
    [anon_sym_NoPatch] = ACTIONS(445),
    [anon_sym_NoSource] = ACTIONS(445),
    [anon_sym_Packager] = ACTIONS(445),
    [anon_sym_Release] = ACTIONS(445),
    [anon_sym_SourceLicense] = ACTIONS(445),
    [anon_sym_Summary] = ACTIONS(445),
    [anon_sym_URL] = ACTIONS(445),
    [anon_sym_Url] = ACTIONS(445),
    [anon_sym_VCS] = ACTIONS(445),
    [anon_sym_Vendor] = ACTIONS(445),
    [anon_sym_Version] = ACTIONS(445),
    [aux_sym_tag_token1] = ACTIONS(445),
    [aux_sym_tag_token2] = ACTIONS(445),
    [anon_sym_Requires] = ACTIONS(445),
    [anon_sym_BuildArch] = ACTIONS(445),
    [anon_sym_BuildArchitectures] = ACTIONS(445),
    [anon_sym_BuildConflicts] = ACTIONS(445),
    [anon_sym_BuildPrereq] = ACTIONS(445),
    [anon_sym_BuildRequires] = ACTIONS(445),
    [anon_sym_Conflicts] = ACTIONS(445),
    [anon_sym_DocDir] = ACTIONS(445),
    [anon_sym_Enhances] = ACTIONS(445),
    [anon_sym_ExcludeArch] = ACTIONS(445),
    [anon_sym_ExcludeOS] = ACTIONS(445),
    [anon_sym_ExclusiveArch] = ACTIONS(445),
    [anon_sym_ExclusiveOS] = ACTIONS(445),
    [anon_sym_Obsoletes] = ACTIONS(445),
    [anon_sym_OrderWithRequires] = ACTIONS(445),
    [anon_sym_Prefix] = ACTIONS(445),
    [anon_sym_Prefixes] = ACTIONS(445),
    [anon_sym_Prereq] = ACTIONS(445),
    [anon_sym_Provides] = ACTIONS(445),
    [anon_sym_Recommends] = ACTIONS(445),
    [anon_sym_RemovePathPostfixes] = ACTIONS(445),
    [anon_sym_Suggests] = ACTIONS(445),
    [anon_sym_Supplements] = ACTIONS(445),
    [anon_sym_PERCENTdescription] = ACTIONS(445),
    [anon_sym_PERCENTpackage] = ACTIONS(445),
    [anon_sym_PERCENTprep] = ACTIONS(445),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(445),
    [anon_sym_PERCENTconf] = ACTIONS(445),
    [anon_sym_PERCENTbuild] = ACTIONS(445),
    [anon_sym_PERCENTinstall] = ACTIONS(445),
    [anon_sym_PERCENTcheck] = ACTIONS(445),
    [anon_sym_PERCENTclean] = ACTIONS(445),
    [anon_sym_PERCENTpre] = ACTIONS(445),
    [anon_sym_PERCENTpost] = ACTIONS(445),
    [anon_sym_PERCENTpreun] = ACTIONS(445),
    [anon_sym_PERCENTpostun] = ACTIONS(445),
    [anon_sym_PERCENTpretrans] = ACTIONS(445),
    [anon_sym_PERCENTposttrans] = ACTIONS(445),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(445),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(445),
    [anon_sym_PERCENTverify] = ACTIONS(445),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(445),
    [anon_sym_PERCENTtriggerin] = ACTIONS(445),
    [anon_sym_PERCENTtriggerun] = ACTIONS(445),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(445),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(445),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(445),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(445),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(445),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(445),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(445),
    [anon_sym_PERCENTfiles] = ACTIONS(445),
    [anon_sym_PERCENTchangelog] = ACTIONS(445),
    [anon_sym_PERCENTglobal] = ACTIONS(445),
    [anon_sym_PERCENTdefine] = ACTIONS(445),
    [anon_sym_PERCENTundefine] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(445),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(445),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(445),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym__simple_statements_token1] = ACTIONS(447),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(449),
    [anon_sym_PERCENTifarch] = ACTIONS(449),
    [anon_sym_PERCENTifos] = ACTIONS(449),
    [anon_sym_PERCENTifnarch] = ACTIONS(449),
    [anon_sym_PERCENTifnos] = ACTIONS(449),
    [anon_sym_AutoProv] = ACTIONS(449),
    [anon_sym_AutoReq] = ACTIONS(449),
    [anon_sym_AutoReqProv] = ACTIONS(449),
    [anon_sym_BugUrl] = ACTIONS(449),
    [anon_sym_BuildRoot] = ACTIONS(449),
    [anon_sym_BuildSystem] = ACTIONS(449),
    [anon_sym_DistTag] = ACTIONS(449),
    [anon_sym_Distribution] = ACTIONS(449),
    [anon_sym_Epoch] = ACTIONS(449),
    [anon_sym_Group] = ACTIONS(449),
    [anon_sym_License] = ACTIONS(449),
    [anon_sym_ModularityLabel] = ACTIONS(449),
    [anon_sym_Name] = ACTIONS(449),
    [anon_sym_NoPatch] = ACTIONS(449),
    [anon_sym_NoSource] = ACTIONS(449),
    [anon_sym_Packager] = ACTIONS(449),
    [anon_sym_Release] = ACTIONS(449),
    [anon_sym_SourceLicense] = ACTIONS(449),
    [anon_sym_Summary] = ACTIONS(449),
    [anon_sym_URL] = ACTIONS(449),
    [anon_sym_Url] = ACTIONS(449),
    [anon_sym_VCS] = ACTIONS(449),
    [anon_sym_Vendor] = ACTIONS(449),
    [anon_sym_Version] = ACTIONS(449),
    [aux_sym_tag_token1] = ACTIONS(449),
    [aux_sym_tag_token2] = ACTIONS(449),
    [anon_sym_Requires] = ACTIONS(449),
    [anon_sym_BuildArch] = ACTIONS(449),
    [anon_sym_BuildArchitectures] = ACTIONS(449),
    [anon_sym_BuildConflicts] = ACTIONS(449),
    [anon_sym_BuildPrereq] = ACTIONS(449),
    [anon_sym_BuildRequires] = ACTIONS(449),
    [anon_sym_Conflicts] = ACTIONS(449),
    [anon_sym_DocDir] = ACTIONS(449),
    [anon_sym_Enhances] = ACTIONS(449),
    [anon_sym_ExcludeArch] = ACTIONS(449),
    [anon_sym_ExcludeOS] = ACTIONS(449),
    [anon_sym_ExclusiveArch] = ACTIONS(449),
    [anon_sym_ExclusiveOS] = ACTIONS(449),
    [anon_sym_Obsoletes] = ACTIONS(449),
    [anon_sym_OrderWithRequires] = ACTIONS(449),
    [anon_sym_Prefix] = ACTIONS(449),
    [anon_sym_Prefixes] = ACTIONS(449),
    [anon_sym_Prereq] = ACTIONS(449),
    [anon_sym_Provides] = ACTIONS(449),
    [anon_sym_Recommends] = ACTIONS(449),
    [anon_sym_RemovePathPostfixes] = ACTIONS(449),
    [anon_sym_Suggests] = ACTIONS(449),
    [anon_sym_Supplements] = ACTIONS(449),
    [anon_sym_PERCENTdescription] = ACTIONS(449),
    [anon_sym_PERCENTpackage] = ACTIONS(449),
    [anon_sym_PERCENTprep] = ACTIONS(449),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(449),
    [anon_sym_PERCENTconf] = ACTIONS(449),
    [anon_sym_PERCENTbuild] = ACTIONS(449),
    [anon_sym_PERCENTinstall] = ACTIONS(449),
    [anon_sym_PERCENTcheck] = ACTIONS(449),
    [anon_sym_PERCENTclean] = ACTIONS(449),
    [anon_sym_PERCENTpre] = ACTIONS(449),
    [anon_sym_PERCENTpost] = ACTIONS(449),
    [anon_sym_PERCENTpreun] = ACTIONS(449),
    [anon_sym_PERCENTpostun] = ACTIONS(449),
    [anon_sym_PERCENTpretrans] = ACTIONS(449),
    [anon_sym_PERCENTposttrans] = ACTIONS(449),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(449),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(449),
    [anon_sym_PERCENTverify] = ACTIONS(449),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(449),
    [anon_sym_PERCENTtriggerin] = ACTIONS(449),
    [anon_sym_PERCENTtriggerun] = ACTIONS(449),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(449),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(449),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(449),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(449),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(449),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(449),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(449),
    [anon_sym_PERCENTfiles] = ACTIONS(449),
    [anon_sym_PERCENTchangelog] = ACTIONS(449),
    [anon_sym_PERCENTglobal] = ACTIONS(449),
    [anon_sym_PERCENTdefine] = ACTIONS(449),
    [anon_sym_PERCENTundefine] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(449),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(449),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(449),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [aux_sym__simple_statements_token1] = ACTIONS(451),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(453),
    [anon_sym_PERCENTifarch] = ACTIONS(453),
    [anon_sym_PERCENTifos] = ACTIONS(453),
    [anon_sym_PERCENTifnarch] = ACTIONS(453),
    [anon_sym_PERCENTifnos] = ACTIONS(453),
    [anon_sym_AutoProv] = ACTIONS(453),
    [anon_sym_AutoReq] = ACTIONS(453),
    [anon_sym_AutoReqProv] = ACTIONS(453),
    [anon_sym_BugUrl] = ACTIONS(453),
    [anon_sym_BuildRoot] = ACTIONS(453),
    [anon_sym_BuildSystem] = ACTIONS(453),
    [anon_sym_DistTag] = ACTIONS(453),
    [anon_sym_Distribution] = ACTIONS(453),
    [anon_sym_Epoch] = ACTIONS(453),
    [anon_sym_Group] = ACTIONS(453),
    [anon_sym_License] = ACTIONS(453),
    [anon_sym_ModularityLabel] = ACTIONS(453),
    [anon_sym_Name] = ACTIONS(453),
    [anon_sym_NoPatch] = ACTIONS(453),
    [anon_sym_NoSource] = ACTIONS(453),
    [anon_sym_Packager] = ACTIONS(453),
    [anon_sym_Release] = ACTIONS(453),
    [anon_sym_SourceLicense] = ACTIONS(453),
    [anon_sym_Summary] = ACTIONS(453),
    [anon_sym_URL] = ACTIONS(453),
    [anon_sym_Url] = ACTIONS(453),
    [anon_sym_VCS] = ACTIONS(453),
    [anon_sym_Vendor] = ACTIONS(453),
    [anon_sym_Version] = ACTIONS(453),
    [aux_sym_tag_token1] = ACTIONS(453),
    [aux_sym_tag_token2] = ACTIONS(453),
    [anon_sym_Requires] = ACTIONS(453),
    [anon_sym_BuildArch] = ACTIONS(453),
    [anon_sym_BuildArchitectures] = ACTIONS(453),
    [anon_sym_BuildConflicts] = ACTIONS(453),
    [anon_sym_BuildPrereq] = ACTIONS(453),
    [anon_sym_BuildRequires] = ACTIONS(453),
    [anon_sym_Conflicts] = ACTIONS(453),
    [anon_sym_DocDir] = ACTIONS(453),
    [anon_sym_Enhances] = ACTIONS(453),
    [anon_sym_ExcludeArch] = ACTIONS(453),
    [anon_sym_ExcludeOS] = ACTIONS(453),
    [anon_sym_ExclusiveArch] = ACTIONS(453),
    [anon_sym_ExclusiveOS] = ACTIONS(453),
    [anon_sym_Obsoletes] = ACTIONS(453),
    [anon_sym_OrderWithRequires] = ACTIONS(453),
    [anon_sym_Prefix] = ACTIONS(453),
    [anon_sym_Prefixes] = ACTIONS(453),
    [anon_sym_Prereq] = ACTIONS(453),
    [anon_sym_Provides] = ACTIONS(453),
    [anon_sym_Recommends] = ACTIONS(453),
    [anon_sym_RemovePathPostfixes] = ACTIONS(453),
    [anon_sym_Suggests] = ACTIONS(453),
    [anon_sym_Supplements] = ACTIONS(453),
    [anon_sym_PERCENTdescription] = ACTIONS(453),
    [anon_sym_PERCENTpackage] = ACTIONS(453),
    [anon_sym_PERCENTprep] = ACTIONS(453),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(453),
    [anon_sym_PERCENTconf] = ACTIONS(453),
    [anon_sym_PERCENTbuild] = ACTIONS(453),
    [anon_sym_PERCENTinstall] = ACTIONS(453),
    [anon_sym_PERCENTcheck] = ACTIONS(453),
    [anon_sym_PERCENTclean] = ACTIONS(453),
    [anon_sym_PERCENTpre] = ACTIONS(453),
    [anon_sym_PERCENTpost] = ACTIONS(453),
    [anon_sym_PERCENTpreun] = ACTIONS(453),
    [anon_sym_PERCENTpostun] = ACTIONS(453),
    [anon_sym_PERCENTpretrans] = ACTIONS(453),
    [anon_sym_PERCENTposttrans] = ACTIONS(453),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(453),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(453),
    [anon_sym_PERCENTverify] = ACTIONS(453),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(453),
    [anon_sym_PERCENTtriggerin] = ACTIONS(453),
    [anon_sym_PERCENTtriggerun] = ACTIONS(453),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(453),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(453),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(453),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(453),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(453),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(453),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(453),
    [anon_sym_PERCENTfiles] = ACTIONS(453),
    [anon_sym_PERCENTchangelog] = ACTIONS(453),
    [anon_sym_PERCENTglobal] = ACTIONS(453),
    [anon_sym_PERCENTdefine] = ACTIONS(453),
    [anon_sym_PERCENTundefine] = ACTIONS(453),
    [anon_sym_PERCENT] = ACTIONS(453),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(453),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(453),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [aux_sym__simple_statements_token1] = ACTIONS(455),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(457),
    [anon_sym_PERCENTifarch] = ACTIONS(457),
    [anon_sym_PERCENTifos] = ACTIONS(457),
    [anon_sym_PERCENTifnarch] = ACTIONS(457),
    [anon_sym_PERCENTifnos] = ACTIONS(457),
    [anon_sym_AutoProv] = ACTIONS(457),
    [anon_sym_AutoReq] = ACTIONS(457),
    [anon_sym_AutoReqProv] = ACTIONS(457),
    [anon_sym_BugUrl] = ACTIONS(457),
    [anon_sym_BuildRoot] = ACTIONS(457),
    [anon_sym_BuildSystem] = ACTIONS(457),
    [anon_sym_DistTag] = ACTIONS(457),
    [anon_sym_Distribution] = ACTIONS(457),
    [anon_sym_Epoch] = ACTIONS(457),
    [anon_sym_Group] = ACTIONS(457),
    [anon_sym_License] = ACTIONS(457),
    [anon_sym_ModularityLabel] = ACTIONS(457),
    [anon_sym_Name] = ACTIONS(457),
    [anon_sym_NoPatch] = ACTIONS(457),
    [anon_sym_NoSource] = ACTIONS(457),
    [anon_sym_Packager] = ACTIONS(457),
    [anon_sym_Release] = ACTIONS(457),
    [anon_sym_SourceLicense] = ACTIONS(457),
    [anon_sym_Summary] = ACTIONS(457),
    [anon_sym_URL] = ACTIONS(457),
    [anon_sym_Url] = ACTIONS(457),
    [anon_sym_VCS] = ACTIONS(457),
    [anon_sym_Vendor] = ACTIONS(457),
    [anon_sym_Version] = ACTIONS(457),
    [aux_sym_tag_token1] = ACTIONS(457),
    [aux_sym_tag_token2] = ACTIONS(457),
    [anon_sym_Requires] = ACTIONS(457),
    [anon_sym_BuildArch] = ACTIONS(457),
    [anon_sym_BuildArchitectures] = ACTIONS(457),
    [anon_sym_BuildConflicts] = ACTIONS(457),
    [anon_sym_BuildPrereq] = ACTIONS(457),
    [anon_sym_BuildRequires] = ACTIONS(457),
    [anon_sym_Conflicts] = ACTIONS(457),
    [anon_sym_DocDir] = ACTIONS(457),
    [anon_sym_Enhances] = ACTIONS(457),
    [anon_sym_ExcludeArch] = ACTIONS(457),
    [anon_sym_ExcludeOS] = ACTIONS(457),
    [anon_sym_ExclusiveArch] = ACTIONS(457),
    [anon_sym_ExclusiveOS] = ACTIONS(457),
    [anon_sym_Obsoletes] = ACTIONS(457),
    [anon_sym_OrderWithRequires] = ACTIONS(457),
    [anon_sym_Prefix] = ACTIONS(457),
    [anon_sym_Prefixes] = ACTIONS(457),
    [anon_sym_Prereq] = ACTIONS(457),
    [anon_sym_Provides] = ACTIONS(457),
    [anon_sym_Recommends] = ACTIONS(457),
    [anon_sym_RemovePathPostfixes] = ACTIONS(457),
    [anon_sym_Suggests] = ACTIONS(457),
    [anon_sym_Supplements] = ACTIONS(457),
    [anon_sym_PERCENTdescription] = ACTIONS(457),
    [anon_sym_PERCENTpackage] = ACTIONS(457),
    [anon_sym_PERCENTprep] = ACTIONS(457),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(457),
    [anon_sym_PERCENTconf] = ACTIONS(457),
    [anon_sym_PERCENTbuild] = ACTIONS(457),
    [anon_sym_PERCENTinstall] = ACTIONS(457),
    [anon_sym_PERCENTcheck] = ACTIONS(457),
    [anon_sym_PERCENTclean] = ACTIONS(457),
    [anon_sym_PERCENTpre] = ACTIONS(457),
    [anon_sym_PERCENTpost] = ACTIONS(457),
    [anon_sym_PERCENTpreun] = ACTIONS(457),
    [anon_sym_PERCENTpostun] = ACTIONS(457),
    [anon_sym_PERCENTpretrans] = ACTIONS(457),
    [anon_sym_PERCENTposttrans] = ACTIONS(457),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(457),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(457),
    [anon_sym_PERCENTverify] = ACTIONS(457),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(457),
    [anon_sym_PERCENTtriggerin] = ACTIONS(457),
    [anon_sym_PERCENTtriggerun] = ACTIONS(457),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(457),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(457),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(457),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(457),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(457),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(457),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(457),
    [anon_sym_PERCENTfiles] = ACTIONS(457),
    [anon_sym_PERCENTchangelog] = ACTIONS(457),
    [anon_sym_PERCENTglobal] = ACTIONS(457),
    [anon_sym_PERCENTdefine] = ACTIONS(457),
    [anon_sym_PERCENTundefine] = ACTIONS(457),
    [anon_sym_PERCENT] = ACTIONS(457),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(457),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(457),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [aux_sym__simple_statements_token1] = ACTIONS(459),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(461),
    [anon_sym_PERCENTifarch] = ACTIONS(461),
    [anon_sym_PERCENTifos] = ACTIONS(461),
    [anon_sym_PERCENTifnarch] = ACTIONS(461),
    [anon_sym_PERCENTifnos] = ACTIONS(461),
    [anon_sym_AutoProv] = ACTIONS(461),
    [anon_sym_AutoReq] = ACTIONS(461),
    [anon_sym_AutoReqProv] = ACTIONS(461),
    [anon_sym_BugUrl] = ACTIONS(461),
    [anon_sym_BuildRoot] = ACTIONS(461),
    [anon_sym_BuildSystem] = ACTIONS(461),
    [anon_sym_DistTag] = ACTIONS(461),
    [anon_sym_Distribution] = ACTIONS(461),
    [anon_sym_Epoch] = ACTIONS(461),
    [anon_sym_Group] = ACTIONS(461),
    [anon_sym_License] = ACTIONS(461),
    [anon_sym_ModularityLabel] = ACTIONS(461),
    [anon_sym_Name] = ACTIONS(461),
    [anon_sym_NoPatch] = ACTIONS(461),
    [anon_sym_NoSource] = ACTIONS(461),
    [anon_sym_Packager] = ACTIONS(461),
    [anon_sym_Release] = ACTIONS(461),
    [anon_sym_SourceLicense] = ACTIONS(461),
    [anon_sym_Summary] = ACTIONS(461),
    [anon_sym_URL] = ACTIONS(461),
    [anon_sym_Url] = ACTIONS(461),
    [anon_sym_VCS] = ACTIONS(461),
    [anon_sym_Vendor] = ACTIONS(461),
    [anon_sym_Version] = ACTIONS(461),
    [aux_sym_tag_token1] = ACTIONS(461),
    [aux_sym_tag_token2] = ACTIONS(461),
    [anon_sym_Requires] = ACTIONS(461),
    [anon_sym_BuildArch] = ACTIONS(461),
    [anon_sym_BuildArchitectures] = ACTIONS(461),
    [anon_sym_BuildConflicts] = ACTIONS(461),
    [anon_sym_BuildPrereq] = ACTIONS(461),
    [anon_sym_BuildRequires] = ACTIONS(461),
    [anon_sym_Conflicts] = ACTIONS(461),
    [anon_sym_DocDir] = ACTIONS(461),
    [anon_sym_Enhances] = ACTIONS(461),
    [anon_sym_ExcludeArch] = ACTIONS(461),
    [anon_sym_ExcludeOS] = ACTIONS(461),
    [anon_sym_ExclusiveArch] = ACTIONS(461),
    [anon_sym_ExclusiveOS] = ACTIONS(461),
    [anon_sym_Obsoletes] = ACTIONS(461),
    [anon_sym_OrderWithRequires] = ACTIONS(461),
    [anon_sym_Prefix] = ACTIONS(461),
    [anon_sym_Prefixes] = ACTIONS(461),
    [anon_sym_Prereq] = ACTIONS(461),
    [anon_sym_Provides] = ACTIONS(461),
    [anon_sym_Recommends] = ACTIONS(461),
    [anon_sym_RemovePathPostfixes] = ACTIONS(461),
    [anon_sym_Suggests] = ACTIONS(461),
    [anon_sym_Supplements] = ACTIONS(461),
    [anon_sym_PERCENTdescription] = ACTIONS(461),
    [anon_sym_PERCENTpackage] = ACTIONS(461),
    [anon_sym_PERCENTprep] = ACTIONS(461),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(461),
    [anon_sym_PERCENTconf] = ACTIONS(461),
    [anon_sym_PERCENTbuild] = ACTIONS(461),
    [anon_sym_PERCENTinstall] = ACTIONS(461),
    [anon_sym_PERCENTcheck] = ACTIONS(461),
    [anon_sym_PERCENTclean] = ACTIONS(461),
    [anon_sym_PERCENTpre] = ACTIONS(461),
    [anon_sym_PERCENTpost] = ACTIONS(461),
    [anon_sym_PERCENTpreun] = ACTIONS(461),
    [anon_sym_PERCENTpostun] = ACTIONS(461),
    [anon_sym_PERCENTpretrans] = ACTIONS(461),
    [anon_sym_PERCENTposttrans] = ACTIONS(461),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(461),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(461),
    [anon_sym_PERCENTverify] = ACTIONS(461),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(461),
    [anon_sym_PERCENTtriggerin] = ACTIONS(461),
    [anon_sym_PERCENTtriggerun] = ACTIONS(461),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(461),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(461),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(461),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(461),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(461),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(461),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(461),
    [anon_sym_PERCENTfiles] = ACTIONS(461),
    [anon_sym_PERCENTchangelog] = ACTIONS(461),
    [anon_sym_PERCENTglobal] = ACTIONS(461),
    [anon_sym_PERCENTdefine] = ACTIONS(461),
    [anon_sym_PERCENTundefine] = ACTIONS(461),
    [anon_sym_PERCENT] = ACTIONS(461),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(461),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(461),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [aux_sym__simple_statements_token1] = ACTIONS(375),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(377),
    [anon_sym_PERCENTifarch] = ACTIONS(377),
    [anon_sym_PERCENTifos] = ACTIONS(377),
    [anon_sym_PERCENTifnarch] = ACTIONS(377),
    [anon_sym_PERCENTifnos] = ACTIONS(377),
    [anon_sym_AutoProv] = ACTIONS(377),
    [anon_sym_AutoReq] = ACTIONS(377),
    [anon_sym_AutoReqProv] = ACTIONS(377),
    [anon_sym_BugUrl] = ACTIONS(377),
    [anon_sym_BuildRoot] = ACTIONS(377),
    [anon_sym_BuildSystem] = ACTIONS(377),
    [anon_sym_DistTag] = ACTIONS(377),
    [anon_sym_Distribution] = ACTIONS(377),
    [anon_sym_Epoch] = ACTIONS(377),
    [anon_sym_Group] = ACTIONS(377),
    [anon_sym_License] = ACTIONS(377),
    [anon_sym_ModularityLabel] = ACTIONS(377),
    [anon_sym_Name] = ACTIONS(377),
    [anon_sym_NoPatch] = ACTIONS(377),
    [anon_sym_NoSource] = ACTIONS(377),
    [anon_sym_Packager] = ACTIONS(377),
    [anon_sym_Release] = ACTIONS(377),
    [anon_sym_SourceLicense] = ACTIONS(377),
    [anon_sym_Summary] = ACTIONS(377),
    [anon_sym_URL] = ACTIONS(377),
    [anon_sym_Url] = ACTIONS(377),
    [anon_sym_VCS] = ACTIONS(377),
    [anon_sym_Vendor] = ACTIONS(377),
    [anon_sym_Version] = ACTIONS(377),
    [aux_sym_tag_token1] = ACTIONS(377),
    [aux_sym_tag_token2] = ACTIONS(377),
    [anon_sym_Requires] = ACTIONS(377),
    [anon_sym_BuildArch] = ACTIONS(377),
    [anon_sym_BuildArchitectures] = ACTIONS(377),
    [anon_sym_BuildConflicts] = ACTIONS(377),
    [anon_sym_BuildPrereq] = ACTIONS(377),
    [anon_sym_BuildRequires] = ACTIONS(377),
    [anon_sym_Conflicts] = ACTIONS(377),
    [anon_sym_DocDir] = ACTIONS(377),
    [anon_sym_Enhances] = ACTIONS(377),
    [anon_sym_ExcludeArch] = ACTIONS(377),
    [anon_sym_ExcludeOS] = ACTIONS(377),
    [anon_sym_ExclusiveArch] = ACTIONS(377),
    [anon_sym_ExclusiveOS] = ACTIONS(377),
    [anon_sym_Obsoletes] = ACTIONS(377),
    [anon_sym_OrderWithRequires] = ACTIONS(377),
    [anon_sym_Prefix] = ACTIONS(377),
    [anon_sym_Prefixes] = ACTIONS(377),
    [anon_sym_Prereq] = ACTIONS(377),
    [anon_sym_Provides] = ACTIONS(377),
    [anon_sym_Recommends] = ACTIONS(377),
    [anon_sym_RemovePathPostfixes] = ACTIONS(377),
    [anon_sym_Suggests] = ACTIONS(377),
    [anon_sym_Supplements] = ACTIONS(377),
    [anon_sym_PERCENTdescription] = ACTIONS(377),
    [anon_sym_PERCENTpackage] = ACTIONS(377),
    [anon_sym_PERCENTprep] = ACTIONS(377),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(377),
    [anon_sym_PERCENTconf] = ACTIONS(377),
    [anon_sym_PERCENTbuild] = ACTIONS(377),
    [anon_sym_PERCENTinstall] = ACTIONS(377),
    [anon_sym_PERCENTcheck] = ACTIONS(377),
    [anon_sym_PERCENTclean] = ACTIONS(377),
    [anon_sym_PERCENTpre] = ACTIONS(377),
    [anon_sym_PERCENTpost] = ACTIONS(377),
    [anon_sym_PERCENTpreun] = ACTIONS(377),
    [anon_sym_PERCENTpostun] = ACTIONS(377),
    [anon_sym_PERCENTpretrans] = ACTIONS(377),
    [anon_sym_PERCENTposttrans] = ACTIONS(377),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(377),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(377),
    [anon_sym_PERCENTverify] = ACTIONS(377),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(377),
    [anon_sym_PERCENTtriggerin] = ACTIONS(377),
    [anon_sym_PERCENTtriggerun] = ACTIONS(377),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(377),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(377),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(377),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(377),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(377),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(377),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(377),
    [anon_sym_PERCENTfiles] = ACTIONS(377),
    [anon_sym_PERCENTchangelog] = ACTIONS(377),
    [anon_sym_PERCENTglobal] = ACTIONS(377),
    [anon_sym_PERCENTdefine] = ACTIONS(377),
    [anon_sym_PERCENTundefine] = ACTIONS(377),
    [anon_sym_PERCENT] = ACTIONS(377),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(377),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(377),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [aux_sym__simple_statements_token1] = ACTIONS(463),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(465),
    [anon_sym_PERCENTifarch] = ACTIONS(465),
    [anon_sym_PERCENTifos] = ACTIONS(465),
    [anon_sym_PERCENTifnarch] = ACTIONS(465),
    [anon_sym_PERCENTifnos] = ACTIONS(465),
    [anon_sym_AutoProv] = ACTIONS(465),
    [anon_sym_AutoReq] = ACTIONS(465),
    [anon_sym_AutoReqProv] = ACTIONS(465),
    [anon_sym_BugUrl] = ACTIONS(465),
    [anon_sym_BuildRoot] = ACTIONS(465),
    [anon_sym_BuildSystem] = ACTIONS(465),
    [anon_sym_DistTag] = ACTIONS(465),
    [anon_sym_Distribution] = ACTIONS(465),
    [anon_sym_Epoch] = ACTIONS(465),
    [anon_sym_Group] = ACTIONS(465),
    [anon_sym_License] = ACTIONS(465),
    [anon_sym_ModularityLabel] = ACTIONS(465),
    [anon_sym_Name] = ACTIONS(465),
    [anon_sym_NoPatch] = ACTIONS(465),
    [anon_sym_NoSource] = ACTIONS(465),
    [anon_sym_Packager] = ACTIONS(465),
    [anon_sym_Release] = ACTIONS(465),
    [anon_sym_SourceLicense] = ACTIONS(465),
    [anon_sym_Summary] = ACTIONS(465),
    [anon_sym_URL] = ACTIONS(465),
    [anon_sym_Url] = ACTIONS(465),
    [anon_sym_VCS] = ACTIONS(465),
    [anon_sym_Vendor] = ACTIONS(465),
    [anon_sym_Version] = ACTIONS(465),
    [aux_sym_tag_token1] = ACTIONS(465),
    [aux_sym_tag_token2] = ACTIONS(465),
    [anon_sym_Requires] = ACTIONS(465),
    [anon_sym_BuildArch] = ACTIONS(465),
    [anon_sym_BuildArchitectures] = ACTIONS(465),
    [anon_sym_BuildConflicts] = ACTIONS(465),
    [anon_sym_BuildPrereq] = ACTIONS(465),
    [anon_sym_BuildRequires] = ACTIONS(465),
    [anon_sym_Conflicts] = ACTIONS(465),
    [anon_sym_DocDir] = ACTIONS(465),
    [anon_sym_Enhances] = ACTIONS(465),
    [anon_sym_ExcludeArch] = ACTIONS(465),
    [anon_sym_ExcludeOS] = ACTIONS(465),
    [anon_sym_ExclusiveArch] = ACTIONS(465),
    [anon_sym_ExclusiveOS] = ACTIONS(465),
    [anon_sym_Obsoletes] = ACTIONS(465),
    [anon_sym_OrderWithRequires] = ACTIONS(465),
    [anon_sym_Prefix] = ACTIONS(465),
    [anon_sym_Prefixes] = ACTIONS(465),
    [anon_sym_Prereq] = ACTIONS(465),
    [anon_sym_Provides] = ACTIONS(465),
    [anon_sym_Recommends] = ACTIONS(465),
    [anon_sym_RemovePathPostfixes] = ACTIONS(465),
    [anon_sym_Suggests] = ACTIONS(465),
    [anon_sym_Supplements] = ACTIONS(465),
    [anon_sym_PERCENTdescription] = ACTIONS(465),
    [anon_sym_PERCENTpackage] = ACTIONS(465),
    [anon_sym_PERCENTprep] = ACTIONS(465),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(465),
    [anon_sym_PERCENTconf] = ACTIONS(465),
    [anon_sym_PERCENTbuild] = ACTIONS(465),
    [anon_sym_PERCENTinstall] = ACTIONS(465),
    [anon_sym_PERCENTcheck] = ACTIONS(465),
    [anon_sym_PERCENTclean] = ACTIONS(465),
    [anon_sym_PERCENTpre] = ACTIONS(465),
    [anon_sym_PERCENTpost] = ACTIONS(465),
    [anon_sym_PERCENTpreun] = ACTIONS(465),
    [anon_sym_PERCENTpostun] = ACTIONS(465),
    [anon_sym_PERCENTpretrans] = ACTIONS(465),
    [anon_sym_PERCENTposttrans] = ACTIONS(465),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(465),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(465),
    [anon_sym_PERCENTverify] = ACTIONS(465),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(465),
    [anon_sym_PERCENTtriggerin] = ACTIONS(465),
    [anon_sym_PERCENTtriggerun] = ACTIONS(465),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(465),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(465),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(465),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(465),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(465),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(465),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(465),
    [anon_sym_PERCENTfiles] = ACTIONS(465),
    [anon_sym_PERCENTchangelog] = ACTIONS(465),
    [anon_sym_PERCENTglobal] = ACTIONS(465),
    [anon_sym_PERCENTdefine] = ACTIONS(465),
    [anon_sym_PERCENTundefine] = ACTIONS(465),
    [anon_sym_PERCENT] = ACTIONS(465),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(465),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(465),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [aux_sym__simple_statements_token1] = ACTIONS(467),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(469),
    [anon_sym_PERCENTifarch] = ACTIONS(469),
    [anon_sym_PERCENTifos] = ACTIONS(469),
    [anon_sym_PERCENTifnarch] = ACTIONS(469),
    [anon_sym_PERCENTifnos] = ACTIONS(469),
    [anon_sym_AutoProv] = ACTIONS(469),
    [anon_sym_AutoReq] = ACTIONS(469),
    [anon_sym_AutoReqProv] = ACTIONS(469),
    [anon_sym_BugUrl] = ACTIONS(469),
    [anon_sym_BuildRoot] = ACTIONS(469),
    [anon_sym_BuildSystem] = ACTIONS(469),
    [anon_sym_DistTag] = ACTIONS(469),
    [anon_sym_Distribution] = ACTIONS(469),
    [anon_sym_Epoch] = ACTIONS(469),
    [anon_sym_Group] = ACTIONS(469),
    [anon_sym_License] = ACTIONS(469),
    [anon_sym_ModularityLabel] = ACTIONS(469),
    [anon_sym_Name] = ACTIONS(469),
    [anon_sym_NoPatch] = ACTIONS(469),
    [anon_sym_NoSource] = ACTIONS(469),
    [anon_sym_Packager] = ACTIONS(469),
    [anon_sym_Release] = ACTIONS(469),
    [anon_sym_SourceLicense] = ACTIONS(469),
    [anon_sym_Summary] = ACTIONS(469),
    [anon_sym_URL] = ACTIONS(469),
    [anon_sym_Url] = ACTIONS(469),
    [anon_sym_VCS] = ACTIONS(469),
    [anon_sym_Vendor] = ACTIONS(469),
    [anon_sym_Version] = ACTIONS(469),
    [aux_sym_tag_token1] = ACTIONS(469),
    [aux_sym_tag_token2] = ACTIONS(469),
    [anon_sym_Requires] = ACTIONS(469),
    [anon_sym_BuildArch] = ACTIONS(469),
    [anon_sym_BuildArchitectures] = ACTIONS(469),
    [anon_sym_BuildConflicts] = ACTIONS(469),
    [anon_sym_BuildPrereq] = ACTIONS(469),
    [anon_sym_BuildRequires] = ACTIONS(469),
    [anon_sym_Conflicts] = ACTIONS(469),
    [anon_sym_DocDir] = ACTIONS(469),
    [anon_sym_Enhances] = ACTIONS(469),
    [anon_sym_ExcludeArch] = ACTIONS(469),
    [anon_sym_ExcludeOS] = ACTIONS(469),
    [anon_sym_ExclusiveArch] = ACTIONS(469),
    [anon_sym_ExclusiveOS] = ACTIONS(469),
    [anon_sym_Obsoletes] = ACTIONS(469),
    [anon_sym_OrderWithRequires] = ACTIONS(469),
    [anon_sym_Prefix] = ACTIONS(469),
    [anon_sym_Prefixes] = ACTIONS(469),
    [anon_sym_Prereq] = ACTIONS(469),
    [anon_sym_Provides] = ACTIONS(469),
    [anon_sym_Recommends] = ACTIONS(469),
    [anon_sym_RemovePathPostfixes] = ACTIONS(469),
    [anon_sym_Suggests] = ACTIONS(469),
    [anon_sym_Supplements] = ACTIONS(469),
    [anon_sym_PERCENTdescription] = ACTIONS(469),
    [anon_sym_PERCENTpackage] = ACTIONS(469),
    [anon_sym_PERCENTprep] = ACTIONS(469),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(469),
    [anon_sym_PERCENTconf] = ACTIONS(469),
    [anon_sym_PERCENTbuild] = ACTIONS(469),
    [anon_sym_PERCENTinstall] = ACTIONS(469),
    [anon_sym_PERCENTcheck] = ACTIONS(469),
    [anon_sym_PERCENTclean] = ACTIONS(469),
    [anon_sym_PERCENTpre] = ACTIONS(469),
    [anon_sym_PERCENTpost] = ACTIONS(469),
    [anon_sym_PERCENTpreun] = ACTIONS(469),
    [anon_sym_PERCENTpostun] = ACTIONS(469),
    [anon_sym_PERCENTpretrans] = ACTIONS(469),
    [anon_sym_PERCENTposttrans] = ACTIONS(469),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(469),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(469),
    [anon_sym_PERCENTverify] = ACTIONS(469),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(469),
    [anon_sym_PERCENTtriggerin] = ACTIONS(469),
    [anon_sym_PERCENTtriggerun] = ACTIONS(469),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(469),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(469),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(469),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(469),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(469),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(469),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(469),
    [anon_sym_PERCENTfiles] = ACTIONS(469),
    [anon_sym_PERCENTchangelog] = ACTIONS(469),
    [anon_sym_PERCENTglobal] = ACTIONS(469),
    [anon_sym_PERCENTdefine] = ACTIONS(469),
    [anon_sym_PERCENTundefine] = ACTIONS(469),
    [anon_sym_PERCENT] = ACTIONS(469),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(469),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(469),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [aux_sym__simple_statements_token1] = ACTIONS(471),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(473),
    [anon_sym_PERCENTifarch] = ACTIONS(473),
    [anon_sym_PERCENTifos] = ACTIONS(473),
    [anon_sym_PERCENTifnarch] = ACTIONS(473),
    [anon_sym_PERCENTifnos] = ACTIONS(473),
    [anon_sym_AutoProv] = ACTIONS(473),
    [anon_sym_AutoReq] = ACTIONS(473),
    [anon_sym_AutoReqProv] = ACTIONS(473),
    [anon_sym_BugUrl] = ACTIONS(473),
    [anon_sym_BuildRoot] = ACTIONS(473),
    [anon_sym_BuildSystem] = ACTIONS(473),
    [anon_sym_DistTag] = ACTIONS(473),
    [anon_sym_Distribution] = ACTIONS(473),
    [anon_sym_Epoch] = ACTIONS(473),
    [anon_sym_Group] = ACTIONS(473),
    [anon_sym_License] = ACTIONS(473),
    [anon_sym_ModularityLabel] = ACTIONS(473),
    [anon_sym_Name] = ACTIONS(473),
    [anon_sym_NoPatch] = ACTIONS(473),
    [anon_sym_NoSource] = ACTIONS(473),
    [anon_sym_Packager] = ACTIONS(473),
    [anon_sym_Release] = ACTIONS(473),
    [anon_sym_SourceLicense] = ACTIONS(473),
    [anon_sym_Summary] = ACTIONS(473),
    [anon_sym_URL] = ACTIONS(473),
    [anon_sym_Url] = ACTIONS(473),
    [anon_sym_VCS] = ACTIONS(473),
    [anon_sym_Vendor] = ACTIONS(473),
    [anon_sym_Version] = ACTIONS(473),
    [aux_sym_tag_token1] = ACTIONS(473),
    [aux_sym_tag_token2] = ACTIONS(473),
    [anon_sym_Requires] = ACTIONS(473),
    [anon_sym_BuildArch] = ACTIONS(473),
    [anon_sym_BuildArchitectures] = ACTIONS(473),
    [anon_sym_BuildConflicts] = ACTIONS(473),
    [anon_sym_BuildPrereq] = ACTIONS(473),
    [anon_sym_BuildRequires] = ACTIONS(473),
    [anon_sym_Conflicts] = ACTIONS(473),
    [anon_sym_DocDir] = ACTIONS(473),
    [anon_sym_Enhances] = ACTIONS(473),
    [anon_sym_ExcludeArch] = ACTIONS(473),
    [anon_sym_ExcludeOS] = ACTIONS(473),
    [anon_sym_ExclusiveArch] = ACTIONS(473),
    [anon_sym_ExclusiveOS] = ACTIONS(473),
    [anon_sym_Obsoletes] = ACTIONS(473),
    [anon_sym_OrderWithRequires] = ACTIONS(473),
    [anon_sym_Prefix] = ACTIONS(473),
    [anon_sym_Prefixes] = ACTIONS(473),
    [anon_sym_Prereq] = ACTIONS(473),
    [anon_sym_Provides] = ACTIONS(473),
    [anon_sym_Recommends] = ACTIONS(473),
    [anon_sym_RemovePathPostfixes] = ACTIONS(473),
    [anon_sym_Suggests] = ACTIONS(473),
    [anon_sym_Supplements] = ACTIONS(473),
    [anon_sym_PERCENTdescription] = ACTIONS(473),
    [anon_sym_PERCENTpackage] = ACTIONS(473),
    [anon_sym_PERCENTprep] = ACTIONS(473),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(473),
    [anon_sym_PERCENTconf] = ACTIONS(473),
    [anon_sym_PERCENTbuild] = ACTIONS(473),
    [anon_sym_PERCENTinstall] = ACTIONS(473),
    [anon_sym_PERCENTcheck] = ACTIONS(473),
    [anon_sym_PERCENTclean] = ACTIONS(473),
    [anon_sym_PERCENTpre] = ACTIONS(473),
    [anon_sym_PERCENTpost] = ACTIONS(473),
    [anon_sym_PERCENTpreun] = ACTIONS(473),
    [anon_sym_PERCENTpostun] = ACTIONS(473),
    [anon_sym_PERCENTpretrans] = ACTIONS(473),
    [anon_sym_PERCENTposttrans] = ACTIONS(473),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(473),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(473),
    [anon_sym_PERCENTverify] = ACTIONS(473),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(473),
    [anon_sym_PERCENTtriggerin] = ACTIONS(473),
    [anon_sym_PERCENTtriggerun] = ACTIONS(473),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(473),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(473),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(473),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(473),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(473),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(473),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(473),
    [anon_sym_PERCENTfiles] = ACTIONS(473),
    [anon_sym_PERCENTchangelog] = ACTIONS(473),
    [anon_sym_PERCENTglobal] = ACTIONS(473),
    [anon_sym_PERCENTdefine] = ACTIONS(473),
    [anon_sym_PERCENTundefine] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(473),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(473),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(473),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [aux_sym__simple_statements_token1] = ACTIONS(475),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(477),
    [anon_sym_PERCENTifarch] = ACTIONS(477),
    [anon_sym_PERCENTifos] = ACTIONS(477),
    [anon_sym_PERCENTifnarch] = ACTIONS(477),
    [anon_sym_PERCENTifnos] = ACTIONS(477),
    [anon_sym_AutoProv] = ACTIONS(477),
    [anon_sym_AutoReq] = ACTIONS(477),
    [anon_sym_AutoReqProv] = ACTIONS(477),
    [anon_sym_BugUrl] = ACTIONS(477),
    [anon_sym_BuildRoot] = ACTIONS(477),
    [anon_sym_BuildSystem] = ACTIONS(477),
    [anon_sym_DistTag] = ACTIONS(477),
    [anon_sym_Distribution] = ACTIONS(477),
    [anon_sym_Epoch] = ACTIONS(477),
    [anon_sym_Group] = ACTIONS(477),
    [anon_sym_License] = ACTIONS(477),
    [anon_sym_ModularityLabel] = ACTIONS(477),
    [anon_sym_Name] = ACTIONS(477),
    [anon_sym_NoPatch] = ACTIONS(477),
    [anon_sym_NoSource] = ACTIONS(477),
    [anon_sym_Packager] = ACTIONS(477),
    [anon_sym_Release] = ACTIONS(477),
    [anon_sym_SourceLicense] = ACTIONS(477),
    [anon_sym_Summary] = ACTIONS(477),
    [anon_sym_URL] = ACTIONS(477),
    [anon_sym_Url] = ACTIONS(477),
    [anon_sym_VCS] = ACTIONS(477),
    [anon_sym_Vendor] = ACTIONS(477),
    [anon_sym_Version] = ACTIONS(477),
    [aux_sym_tag_token1] = ACTIONS(477),
    [aux_sym_tag_token2] = ACTIONS(477),
    [anon_sym_Requires] = ACTIONS(477),
    [anon_sym_BuildArch] = ACTIONS(477),
    [anon_sym_BuildArchitectures] = ACTIONS(477),
    [anon_sym_BuildConflicts] = ACTIONS(477),
    [anon_sym_BuildPrereq] = ACTIONS(477),
    [anon_sym_BuildRequires] = ACTIONS(477),
    [anon_sym_Conflicts] = ACTIONS(477),
    [anon_sym_DocDir] = ACTIONS(477),
    [anon_sym_Enhances] = ACTIONS(477),
    [anon_sym_ExcludeArch] = ACTIONS(477),
    [anon_sym_ExcludeOS] = ACTIONS(477),
    [anon_sym_ExclusiveArch] = ACTIONS(477),
    [anon_sym_ExclusiveOS] = ACTIONS(477),
    [anon_sym_Obsoletes] = ACTIONS(477),
    [anon_sym_OrderWithRequires] = ACTIONS(477),
    [anon_sym_Prefix] = ACTIONS(477),
    [anon_sym_Prefixes] = ACTIONS(477),
    [anon_sym_Prereq] = ACTIONS(477),
    [anon_sym_Provides] = ACTIONS(477),
    [anon_sym_Recommends] = ACTIONS(477),
    [anon_sym_RemovePathPostfixes] = ACTIONS(477),
    [anon_sym_Suggests] = ACTIONS(477),
    [anon_sym_Supplements] = ACTIONS(477),
    [anon_sym_PERCENTdescription] = ACTIONS(477),
    [anon_sym_PERCENTpackage] = ACTIONS(477),
    [anon_sym_PERCENTprep] = ACTIONS(477),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(477),
    [anon_sym_PERCENTconf] = ACTIONS(477),
    [anon_sym_PERCENTbuild] = ACTIONS(477),
    [anon_sym_PERCENTinstall] = ACTIONS(477),
    [anon_sym_PERCENTcheck] = ACTIONS(477),
    [anon_sym_PERCENTclean] = ACTIONS(477),
    [anon_sym_PERCENTpre] = ACTIONS(477),
    [anon_sym_PERCENTpost] = ACTIONS(477),
    [anon_sym_PERCENTpreun] = ACTIONS(477),
    [anon_sym_PERCENTpostun] = ACTIONS(477),
    [anon_sym_PERCENTpretrans] = ACTIONS(477),
    [anon_sym_PERCENTposttrans] = ACTIONS(477),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(477),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(477),
    [anon_sym_PERCENTverify] = ACTIONS(477),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(477),
    [anon_sym_PERCENTtriggerin] = ACTIONS(477),
    [anon_sym_PERCENTtriggerun] = ACTIONS(477),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(477),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(477),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(477),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(477),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(477),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(477),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(477),
    [anon_sym_PERCENTfiles] = ACTIONS(477),
    [anon_sym_PERCENTchangelog] = ACTIONS(477),
    [anon_sym_PERCENTglobal] = ACTIONS(477),
    [anon_sym_PERCENTdefine] = ACTIONS(477),
    [anon_sym_PERCENTundefine] = ACTIONS(477),
    [anon_sym_PERCENT] = ACTIONS(477),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(477),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(477),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [aux_sym__simple_statements_token1] = ACTIONS(391),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(393),
    [anon_sym_PERCENTifarch] = ACTIONS(393),
    [anon_sym_PERCENTifos] = ACTIONS(393),
    [anon_sym_PERCENTifnarch] = ACTIONS(393),
    [anon_sym_PERCENTifnos] = ACTIONS(393),
    [anon_sym_AutoProv] = ACTIONS(393),
    [anon_sym_AutoReq] = ACTIONS(393),
    [anon_sym_AutoReqProv] = ACTIONS(393),
    [anon_sym_BugUrl] = ACTIONS(393),
    [anon_sym_BuildRoot] = ACTIONS(393),
    [anon_sym_BuildSystem] = ACTIONS(393),
    [anon_sym_DistTag] = ACTIONS(393),
    [anon_sym_Distribution] = ACTIONS(393),
    [anon_sym_Epoch] = ACTIONS(393),
    [anon_sym_Group] = ACTIONS(393),
    [anon_sym_License] = ACTIONS(393),
    [anon_sym_ModularityLabel] = ACTIONS(393),
    [anon_sym_Name] = ACTIONS(393),
    [anon_sym_NoPatch] = ACTIONS(393),
    [anon_sym_NoSource] = ACTIONS(393),
    [anon_sym_Packager] = ACTIONS(393),
    [anon_sym_Release] = ACTIONS(393),
    [anon_sym_SourceLicense] = ACTIONS(393),
    [anon_sym_Summary] = ACTIONS(393),
    [anon_sym_URL] = ACTIONS(393),
    [anon_sym_Url] = ACTIONS(393),
    [anon_sym_VCS] = ACTIONS(393),
    [anon_sym_Vendor] = ACTIONS(393),
    [anon_sym_Version] = ACTIONS(393),
    [aux_sym_tag_token1] = ACTIONS(393),
    [aux_sym_tag_token2] = ACTIONS(393),
    [anon_sym_Requires] = ACTIONS(393),
    [anon_sym_BuildArch] = ACTIONS(393),
    [anon_sym_BuildArchitectures] = ACTIONS(393),
    [anon_sym_BuildConflicts] = ACTIONS(393),
    [anon_sym_BuildPrereq] = ACTIONS(393),
    [anon_sym_BuildRequires] = ACTIONS(393),
    [anon_sym_Conflicts] = ACTIONS(393),
    [anon_sym_DocDir] = ACTIONS(393),
    [anon_sym_Enhances] = ACTIONS(393),
    [anon_sym_ExcludeArch] = ACTIONS(393),
    [anon_sym_ExcludeOS] = ACTIONS(393),
    [anon_sym_ExclusiveArch] = ACTIONS(393),
    [anon_sym_ExclusiveOS] = ACTIONS(393),
    [anon_sym_Obsoletes] = ACTIONS(393),
    [anon_sym_OrderWithRequires] = ACTIONS(393),
    [anon_sym_Prefix] = ACTIONS(393),
    [anon_sym_Prefixes] = ACTIONS(393),
    [anon_sym_Prereq] = ACTIONS(393),
    [anon_sym_Provides] = ACTIONS(393),
    [anon_sym_Recommends] = ACTIONS(393),
    [anon_sym_RemovePathPostfixes] = ACTIONS(393),
    [anon_sym_Suggests] = ACTIONS(393),
    [anon_sym_Supplements] = ACTIONS(393),
    [anon_sym_PERCENTdescription] = ACTIONS(393),
    [anon_sym_PERCENTpackage] = ACTIONS(393),
    [anon_sym_PERCENTprep] = ACTIONS(393),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(393),
    [anon_sym_PERCENTconf] = ACTIONS(393),
    [anon_sym_PERCENTbuild] = ACTIONS(393),
    [anon_sym_PERCENTinstall] = ACTIONS(393),
    [anon_sym_PERCENTcheck] = ACTIONS(393),
    [anon_sym_PERCENTclean] = ACTIONS(393),
    [anon_sym_PERCENTpre] = ACTIONS(393),
    [anon_sym_PERCENTpost] = ACTIONS(393),
    [anon_sym_PERCENTpreun] = ACTIONS(393),
    [anon_sym_PERCENTpostun] = ACTIONS(393),
    [anon_sym_PERCENTpretrans] = ACTIONS(393),
    [anon_sym_PERCENTposttrans] = ACTIONS(393),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(393),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(393),
    [anon_sym_PERCENTverify] = ACTIONS(393),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(393),
    [anon_sym_PERCENTtriggerin] = ACTIONS(393),
    [anon_sym_PERCENTtriggerun] = ACTIONS(393),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(393),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(393),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(393),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(393),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(393),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(393),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(393),
    [anon_sym_PERCENTfiles] = ACTIONS(393),
    [anon_sym_PERCENTchangelog] = ACTIONS(393),
    [anon_sym_PERCENTglobal] = ACTIONS(393),
    [anon_sym_PERCENTdefine] = ACTIONS(393),
    [anon_sym_PERCENTundefine] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(393),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(393),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [aux_sym__simple_statements_token1] = ACTIONS(479),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(481),
    [anon_sym_PERCENTifarch] = ACTIONS(481),
    [anon_sym_PERCENTifos] = ACTIONS(481),
    [anon_sym_PERCENTifnarch] = ACTIONS(481),
    [anon_sym_PERCENTifnos] = ACTIONS(481),
    [anon_sym_AutoProv] = ACTIONS(481),
    [anon_sym_AutoReq] = ACTIONS(481),
    [anon_sym_AutoReqProv] = ACTIONS(481),
    [anon_sym_BugUrl] = ACTIONS(481),
    [anon_sym_BuildRoot] = ACTIONS(481),
    [anon_sym_BuildSystem] = ACTIONS(481),
    [anon_sym_DistTag] = ACTIONS(481),
    [anon_sym_Distribution] = ACTIONS(481),
    [anon_sym_Epoch] = ACTIONS(481),
    [anon_sym_Group] = ACTIONS(481),
    [anon_sym_License] = ACTIONS(481),
    [anon_sym_ModularityLabel] = ACTIONS(481),
    [anon_sym_Name] = ACTIONS(481),
    [anon_sym_NoPatch] = ACTIONS(481),
    [anon_sym_NoSource] = ACTIONS(481),
    [anon_sym_Packager] = ACTIONS(481),
    [anon_sym_Release] = ACTIONS(481),
    [anon_sym_SourceLicense] = ACTIONS(481),
    [anon_sym_Summary] = ACTIONS(481),
    [anon_sym_URL] = ACTIONS(481),
    [anon_sym_Url] = ACTIONS(481),
    [anon_sym_VCS] = ACTIONS(481),
    [anon_sym_Vendor] = ACTIONS(481),
    [anon_sym_Version] = ACTIONS(481),
    [aux_sym_tag_token1] = ACTIONS(481),
    [aux_sym_tag_token2] = ACTIONS(481),
    [anon_sym_Requires] = ACTIONS(481),
    [anon_sym_BuildArch] = ACTIONS(481),
    [anon_sym_BuildArchitectures] = ACTIONS(481),
    [anon_sym_BuildConflicts] = ACTIONS(481),
    [anon_sym_BuildPrereq] = ACTIONS(481),
    [anon_sym_BuildRequires] = ACTIONS(481),
    [anon_sym_Conflicts] = ACTIONS(481),
    [anon_sym_DocDir] = ACTIONS(481),
    [anon_sym_Enhances] = ACTIONS(481),
    [anon_sym_ExcludeArch] = ACTIONS(481),
    [anon_sym_ExcludeOS] = ACTIONS(481),
    [anon_sym_ExclusiveArch] = ACTIONS(481),
    [anon_sym_ExclusiveOS] = ACTIONS(481),
    [anon_sym_Obsoletes] = ACTIONS(481),
    [anon_sym_OrderWithRequires] = ACTIONS(481),
    [anon_sym_Prefix] = ACTIONS(481),
    [anon_sym_Prefixes] = ACTIONS(481),
    [anon_sym_Prereq] = ACTIONS(481),
    [anon_sym_Provides] = ACTIONS(481),
    [anon_sym_Recommends] = ACTIONS(481),
    [anon_sym_RemovePathPostfixes] = ACTIONS(481),
    [anon_sym_Suggests] = ACTIONS(481),
    [anon_sym_Supplements] = ACTIONS(481),
    [anon_sym_PERCENTdescription] = ACTIONS(481),
    [anon_sym_PERCENTpackage] = ACTIONS(481),
    [anon_sym_PERCENTprep] = ACTIONS(481),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(481),
    [anon_sym_PERCENTconf] = ACTIONS(481),
    [anon_sym_PERCENTbuild] = ACTIONS(481),
    [anon_sym_PERCENTinstall] = ACTIONS(481),
    [anon_sym_PERCENTcheck] = ACTIONS(481),
    [anon_sym_PERCENTclean] = ACTIONS(481),
    [anon_sym_PERCENTpre] = ACTIONS(481),
    [anon_sym_PERCENTpost] = ACTIONS(481),
    [anon_sym_PERCENTpreun] = ACTIONS(481),
    [anon_sym_PERCENTpostun] = ACTIONS(481),
    [anon_sym_PERCENTpretrans] = ACTIONS(481),
    [anon_sym_PERCENTposttrans] = ACTIONS(481),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(481),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(481),
    [anon_sym_PERCENTverify] = ACTIONS(481),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(481),
    [anon_sym_PERCENTtriggerin] = ACTIONS(481),
    [anon_sym_PERCENTtriggerun] = ACTIONS(481),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(481),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(481),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(481),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(481),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(481),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(481),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(481),
    [anon_sym_PERCENTfiles] = ACTIONS(481),
    [anon_sym_PERCENTchangelog] = ACTIONS(481),
    [anon_sym_PERCENTglobal] = ACTIONS(481),
    [anon_sym_PERCENTdefine] = ACTIONS(481),
    [anon_sym_PERCENTundefine] = ACTIONS(481),
    [anon_sym_PERCENT] = ACTIONS(481),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(481),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(481),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [aux_sym__simple_statements_token1] = ACTIONS(483),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(485),
    [anon_sym_PERCENTifarch] = ACTIONS(485),
    [anon_sym_PERCENTifos] = ACTIONS(485),
    [anon_sym_PERCENTifnarch] = ACTIONS(485),
    [anon_sym_PERCENTifnos] = ACTIONS(485),
    [anon_sym_AutoProv] = ACTIONS(485),
    [anon_sym_AutoReq] = ACTIONS(485),
    [anon_sym_AutoReqProv] = ACTIONS(485),
    [anon_sym_BugUrl] = ACTIONS(485),
    [anon_sym_BuildRoot] = ACTIONS(485),
    [anon_sym_BuildSystem] = ACTIONS(485),
    [anon_sym_DistTag] = ACTIONS(485),
    [anon_sym_Distribution] = ACTIONS(485),
    [anon_sym_Epoch] = ACTIONS(485),
    [anon_sym_Group] = ACTIONS(485),
    [anon_sym_License] = ACTIONS(485),
    [anon_sym_ModularityLabel] = ACTIONS(485),
    [anon_sym_Name] = ACTIONS(485),
    [anon_sym_NoPatch] = ACTIONS(485),
    [anon_sym_NoSource] = ACTIONS(485),
    [anon_sym_Packager] = ACTIONS(485),
    [anon_sym_Release] = ACTIONS(485),
    [anon_sym_SourceLicense] = ACTIONS(485),
    [anon_sym_Summary] = ACTIONS(485),
    [anon_sym_URL] = ACTIONS(485),
    [anon_sym_Url] = ACTIONS(485),
    [anon_sym_VCS] = ACTIONS(485),
    [anon_sym_Vendor] = ACTIONS(485),
    [anon_sym_Version] = ACTIONS(485),
    [aux_sym_tag_token1] = ACTIONS(485),
    [aux_sym_tag_token2] = ACTIONS(485),
    [anon_sym_Requires] = ACTIONS(485),
    [anon_sym_BuildArch] = ACTIONS(485),
    [anon_sym_BuildArchitectures] = ACTIONS(485),
    [anon_sym_BuildConflicts] = ACTIONS(485),
    [anon_sym_BuildPrereq] = ACTIONS(485),
    [anon_sym_BuildRequires] = ACTIONS(485),
    [anon_sym_Conflicts] = ACTIONS(485),
    [anon_sym_DocDir] = ACTIONS(485),
    [anon_sym_Enhances] = ACTIONS(485),
    [anon_sym_ExcludeArch] = ACTIONS(485),
    [anon_sym_ExcludeOS] = ACTIONS(485),
    [anon_sym_ExclusiveArch] = ACTIONS(485),
    [anon_sym_ExclusiveOS] = ACTIONS(485),
    [anon_sym_Obsoletes] = ACTIONS(485),
    [anon_sym_OrderWithRequires] = ACTIONS(485),
    [anon_sym_Prefix] = ACTIONS(485),
    [anon_sym_Prefixes] = ACTIONS(485),
    [anon_sym_Prereq] = ACTIONS(485),
    [anon_sym_Provides] = ACTIONS(485),
    [anon_sym_Recommends] = ACTIONS(485),
    [anon_sym_RemovePathPostfixes] = ACTIONS(485),
    [anon_sym_Suggests] = ACTIONS(485),
    [anon_sym_Supplements] = ACTIONS(485),
    [anon_sym_PERCENTdescription] = ACTIONS(485),
    [anon_sym_PERCENTpackage] = ACTIONS(485),
    [anon_sym_PERCENTprep] = ACTIONS(485),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(485),
    [anon_sym_PERCENTconf] = ACTIONS(485),
    [anon_sym_PERCENTbuild] = ACTIONS(485),
    [anon_sym_PERCENTinstall] = ACTIONS(485),
    [anon_sym_PERCENTcheck] = ACTIONS(485),
    [anon_sym_PERCENTclean] = ACTIONS(485),
    [anon_sym_PERCENTpre] = ACTIONS(485),
    [anon_sym_PERCENTpost] = ACTIONS(485),
    [anon_sym_PERCENTpreun] = ACTIONS(485),
    [anon_sym_PERCENTpostun] = ACTIONS(485),
    [anon_sym_PERCENTpretrans] = ACTIONS(485),
    [anon_sym_PERCENTposttrans] = ACTIONS(485),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(485),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(485),
    [anon_sym_PERCENTverify] = ACTIONS(485),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(485),
    [anon_sym_PERCENTtriggerin] = ACTIONS(485),
    [anon_sym_PERCENTtriggerun] = ACTIONS(485),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(485),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(485),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(485),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(485),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(485),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(485),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(485),
    [anon_sym_PERCENTfiles] = ACTIONS(485),
    [anon_sym_PERCENTchangelog] = ACTIONS(485),
    [anon_sym_PERCENTglobal] = ACTIONS(485),
    [anon_sym_PERCENTdefine] = ACTIONS(485),
    [anon_sym_PERCENTundefine] = ACTIONS(485),
    [anon_sym_PERCENT] = ACTIONS(485),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(485),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(485),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [aux_sym__simple_statements_token1] = ACTIONS(487),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(489),
    [anon_sym_PERCENTifarch] = ACTIONS(489),
    [anon_sym_PERCENTifos] = ACTIONS(489),
    [anon_sym_PERCENTifnarch] = ACTIONS(489),
    [anon_sym_PERCENTifnos] = ACTIONS(489),
    [anon_sym_AutoProv] = ACTIONS(489),
    [anon_sym_AutoReq] = ACTIONS(489),
    [anon_sym_AutoReqProv] = ACTIONS(489),
    [anon_sym_BugUrl] = ACTIONS(489),
    [anon_sym_BuildRoot] = ACTIONS(489),
    [anon_sym_BuildSystem] = ACTIONS(489),
    [anon_sym_DistTag] = ACTIONS(489),
    [anon_sym_Distribution] = ACTIONS(489),
    [anon_sym_Epoch] = ACTIONS(489),
    [anon_sym_Group] = ACTIONS(489),
    [anon_sym_License] = ACTIONS(489),
    [anon_sym_ModularityLabel] = ACTIONS(489),
    [anon_sym_Name] = ACTIONS(489),
    [anon_sym_NoPatch] = ACTIONS(489),
    [anon_sym_NoSource] = ACTIONS(489),
    [anon_sym_Packager] = ACTIONS(489),
    [anon_sym_Release] = ACTIONS(489),
    [anon_sym_SourceLicense] = ACTIONS(489),
    [anon_sym_Summary] = ACTIONS(489),
    [anon_sym_URL] = ACTIONS(489),
    [anon_sym_Url] = ACTIONS(489),
    [anon_sym_VCS] = ACTIONS(489),
    [anon_sym_Vendor] = ACTIONS(489),
    [anon_sym_Version] = ACTIONS(489),
    [aux_sym_tag_token1] = ACTIONS(489),
    [aux_sym_tag_token2] = ACTIONS(489),
    [anon_sym_Requires] = ACTIONS(489),
    [anon_sym_BuildArch] = ACTIONS(489),
    [anon_sym_BuildArchitectures] = ACTIONS(489),
    [anon_sym_BuildConflicts] = ACTIONS(489),
    [anon_sym_BuildPrereq] = ACTIONS(489),
    [anon_sym_BuildRequires] = ACTIONS(489),
    [anon_sym_Conflicts] = ACTIONS(489),
    [anon_sym_DocDir] = ACTIONS(489),
    [anon_sym_Enhances] = ACTIONS(489),
    [anon_sym_ExcludeArch] = ACTIONS(489),
    [anon_sym_ExcludeOS] = ACTIONS(489),
    [anon_sym_ExclusiveArch] = ACTIONS(489),
    [anon_sym_ExclusiveOS] = ACTIONS(489),
    [anon_sym_Obsoletes] = ACTIONS(489),
    [anon_sym_OrderWithRequires] = ACTIONS(489),
    [anon_sym_Prefix] = ACTIONS(489),
    [anon_sym_Prefixes] = ACTIONS(489),
    [anon_sym_Prereq] = ACTIONS(489),
    [anon_sym_Provides] = ACTIONS(489),
    [anon_sym_Recommends] = ACTIONS(489),
    [anon_sym_RemovePathPostfixes] = ACTIONS(489),
    [anon_sym_Suggests] = ACTIONS(489),
    [anon_sym_Supplements] = ACTIONS(489),
    [anon_sym_PERCENTdescription] = ACTIONS(489),
    [anon_sym_PERCENTpackage] = ACTIONS(489),
    [anon_sym_PERCENTprep] = ACTIONS(489),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(489),
    [anon_sym_PERCENTconf] = ACTIONS(489),
    [anon_sym_PERCENTbuild] = ACTIONS(489),
    [anon_sym_PERCENTinstall] = ACTIONS(489),
    [anon_sym_PERCENTcheck] = ACTIONS(489),
    [anon_sym_PERCENTclean] = ACTIONS(489),
    [anon_sym_PERCENTpre] = ACTIONS(489),
    [anon_sym_PERCENTpost] = ACTIONS(489),
    [anon_sym_PERCENTpreun] = ACTIONS(489),
    [anon_sym_PERCENTpostun] = ACTIONS(489),
    [anon_sym_PERCENTpretrans] = ACTIONS(489),
    [anon_sym_PERCENTposttrans] = ACTIONS(489),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(489),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(489),
    [anon_sym_PERCENTverify] = ACTIONS(489),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(489),
    [anon_sym_PERCENTtriggerin] = ACTIONS(489),
    [anon_sym_PERCENTtriggerun] = ACTIONS(489),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(489),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(489),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(489),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(489),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(489),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(489),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(489),
    [anon_sym_PERCENTfiles] = ACTIONS(489),
    [anon_sym_PERCENTchangelog] = ACTIONS(489),
    [anon_sym_PERCENTglobal] = ACTIONS(489),
    [anon_sym_PERCENTdefine] = ACTIONS(489),
    [anon_sym_PERCENTundefine] = ACTIONS(489),
    [anon_sym_PERCENT] = ACTIONS(489),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(489),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(489),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(387),
    [aux_sym__simple_statements_token1] = ACTIONS(387),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(389),
    [anon_sym_PERCENTifarch] = ACTIONS(389),
    [anon_sym_PERCENTifos] = ACTIONS(389),
    [anon_sym_PERCENTifnarch] = ACTIONS(389),
    [anon_sym_PERCENTifnos] = ACTIONS(389),
    [anon_sym_AutoProv] = ACTIONS(389),
    [anon_sym_AutoReq] = ACTIONS(389),
    [anon_sym_AutoReqProv] = ACTIONS(389),
    [anon_sym_BugUrl] = ACTIONS(389),
    [anon_sym_BuildRoot] = ACTIONS(389),
    [anon_sym_BuildSystem] = ACTIONS(389),
    [anon_sym_DistTag] = ACTIONS(389),
    [anon_sym_Distribution] = ACTIONS(389),
    [anon_sym_Epoch] = ACTIONS(389),
    [anon_sym_Group] = ACTIONS(389),
    [anon_sym_License] = ACTIONS(389),
    [anon_sym_ModularityLabel] = ACTIONS(389),
    [anon_sym_Name] = ACTIONS(389),
    [anon_sym_NoPatch] = ACTIONS(389),
    [anon_sym_NoSource] = ACTIONS(389),
    [anon_sym_Packager] = ACTIONS(389),
    [anon_sym_Release] = ACTIONS(389),
    [anon_sym_SourceLicense] = ACTIONS(389),
    [anon_sym_Summary] = ACTIONS(389),
    [anon_sym_URL] = ACTIONS(389),
    [anon_sym_Url] = ACTIONS(389),
    [anon_sym_VCS] = ACTIONS(389),
    [anon_sym_Vendor] = ACTIONS(389),
    [anon_sym_Version] = ACTIONS(389),
    [aux_sym_tag_token1] = ACTIONS(389),
    [aux_sym_tag_token2] = ACTIONS(389),
    [anon_sym_Requires] = ACTIONS(389),
    [anon_sym_BuildArch] = ACTIONS(389),
    [anon_sym_BuildArchitectures] = ACTIONS(389),
    [anon_sym_BuildConflicts] = ACTIONS(389),
    [anon_sym_BuildPrereq] = ACTIONS(389),
    [anon_sym_BuildRequires] = ACTIONS(389),
    [anon_sym_Conflicts] = ACTIONS(389),
    [anon_sym_DocDir] = ACTIONS(389),
    [anon_sym_Enhances] = ACTIONS(389),
    [anon_sym_ExcludeArch] = ACTIONS(389),
    [anon_sym_ExcludeOS] = ACTIONS(389),
    [anon_sym_ExclusiveArch] = ACTIONS(389),
    [anon_sym_ExclusiveOS] = ACTIONS(389),
    [anon_sym_Obsoletes] = ACTIONS(389),
    [anon_sym_OrderWithRequires] = ACTIONS(389),
    [anon_sym_Prefix] = ACTIONS(389),
    [anon_sym_Prefixes] = ACTIONS(389),
    [anon_sym_Prereq] = ACTIONS(389),
    [anon_sym_Provides] = ACTIONS(389),
    [anon_sym_Recommends] = ACTIONS(389),
    [anon_sym_RemovePathPostfixes] = ACTIONS(389),
    [anon_sym_Suggests] = ACTIONS(389),
    [anon_sym_Supplements] = ACTIONS(389),
    [anon_sym_PERCENTdescription] = ACTIONS(389),
    [anon_sym_PERCENTpackage] = ACTIONS(389),
    [anon_sym_PERCENTprep] = ACTIONS(389),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(389),
    [anon_sym_PERCENTconf] = ACTIONS(389),
    [anon_sym_PERCENTbuild] = ACTIONS(389),
    [anon_sym_PERCENTinstall] = ACTIONS(389),
    [anon_sym_PERCENTcheck] = ACTIONS(389),
    [anon_sym_PERCENTclean] = ACTIONS(389),
    [anon_sym_PERCENTpre] = ACTIONS(389),
    [anon_sym_PERCENTpost] = ACTIONS(389),
    [anon_sym_PERCENTpreun] = ACTIONS(389),
    [anon_sym_PERCENTpostun] = ACTIONS(389),
    [anon_sym_PERCENTpretrans] = ACTIONS(389),
    [anon_sym_PERCENTposttrans] = ACTIONS(389),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(389),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(389),
    [anon_sym_PERCENTverify] = ACTIONS(389),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(389),
    [anon_sym_PERCENTtriggerin] = ACTIONS(389),
    [anon_sym_PERCENTtriggerun] = ACTIONS(389),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(389),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(389),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(389),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(389),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(389),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(389),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(389),
    [anon_sym_PERCENTfiles] = ACTIONS(389),
    [anon_sym_PERCENTchangelog] = ACTIONS(389),
    [anon_sym_PERCENTglobal] = ACTIONS(389),
    [anon_sym_PERCENTdefine] = ACTIONS(389),
    [anon_sym_PERCENTundefine] = ACTIONS(389),
    [anon_sym_PERCENT] = ACTIONS(389),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(389),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(389),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [aux_sym__simple_statements_token1] = ACTIONS(491),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(493),
    [anon_sym_PERCENTifarch] = ACTIONS(493),
    [anon_sym_PERCENTifos] = ACTIONS(493),
    [anon_sym_PERCENTifnarch] = ACTIONS(493),
    [anon_sym_PERCENTifnos] = ACTIONS(493),
    [anon_sym_AutoProv] = ACTIONS(493),
    [anon_sym_AutoReq] = ACTIONS(493),
    [anon_sym_AutoReqProv] = ACTIONS(493),
    [anon_sym_BugUrl] = ACTIONS(493),
    [anon_sym_BuildRoot] = ACTIONS(493),
    [anon_sym_BuildSystem] = ACTIONS(493),
    [anon_sym_DistTag] = ACTIONS(493),
    [anon_sym_Distribution] = ACTIONS(493),
    [anon_sym_Epoch] = ACTIONS(493),
    [anon_sym_Group] = ACTIONS(493),
    [anon_sym_License] = ACTIONS(493),
    [anon_sym_ModularityLabel] = ACTIONS(493),
    [anon_sym_Name] = ACTIONS(493),
    [anon_sym_NoPatch] = ACTIONS(493),
    [anon_sym_NoSource] = ACTIONS(493),
    [anon_sym_Packager] = ACTIONS(493),
    [anon_sym_Release] = ACTIONS(493),
    [anon_sym_SourceLicense] = ACTIONS(493),
    [anon_sym_Summary] = ACTIONS(493),
    [anon_sym_URL] = ACTIONS(493),
    [anon_sym_Url] = ACTIONS(493),
    [anon_sym_VCS] = ACTIONS(493),
    [anon_sym_Vendor] = ACTIONS(493),
    [anon_sym_Version] = ACTIONS(493),
    [aux_sym_tag_token1] = ACTIONS(493),
    [aux_sym_tag_token2] = ACTIONS(493),
    [anon_sym_Requires] = ACTIONS(493),
    [anon_sym_BuildArch] = ACTIONS(493),
    [anon_sym_BuildArchitectures] = ACTIONS(493),
    [anon_sym_BuildConflicts] = ACTIONS(493),
    [anon_sym_BuildPrereq] = ACTIONS(493),
    [anon_sym_BuildRequires] = ACTIONS(493),
    [anon_sym_Conflicts] = ACTIONS(493),
    [anon_sym_DocDir] = ACTIONS(493),
    [anon_sym_Enhances] = ACTIONS(493),
    [anon_sym_ExcludeArch] = ACTIONS(493),
    [anon_sym_ExcludeOS] = ACTIONS(493),
    [anon_sym_ExclusiveArch] = ACTIONS(493),
    [anon_sym_ExclusiveOS] = ACTIONS(493),
    [anon_sym_Obsoletes] = ACTIONS(493),
    [anon_sym_OrderWithRequires] = ACTIONS(493),
    [anon_sym_Prefix] = ACTIONS(493),
    [anon_sym_Prefixes] = ACTIONS(493),
    [anon_sym_Prereq] = ACTIONS(493),
    [anon_sym_Provides] = ACTIONS(493),
    [anon_sym_Recommends] = ACTIONS(493),
    [anon_sym_RemovePathPostfixes] = ACTIONS(493),
    [anon_sym_Suggests] = ACTIONS(493),
    [anon_sym_Supplements] = ACTIONS(493),
    [anon_sym_PERCENTdescription] = ACTIONS(493),
    [anon_sym_PERCENTpackage] = ACTIONS(493),
    [anon_sym_PERCENTprep] = ACTIONS(493),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(493),
    [anon_sym_PERCENTconf] = ACTIONS(493),
    [anon_sym_PERCENTbuild] = ACTIONS(493),
    [anon_sym_PERCENTinstall] = ACTIONS(493),
    [anon_sym_PERCENTcheck] = ACTIONS(493),
    [anon_sym_PERCENTclean] = ACTIONS(493),
    [anon_sym_PERCENTpre] = ACTIONS(493),
    [anon_sym_PERCENTpost] = ACTIONS(493),
    [anon_sym_PERCENTpreun] = ACTIONS(493),
    [anon_sym_PERCENTpostun] = ACTIONS(493),
    [anon_sym_PERCENTpretrans] = ACTIONS(493),
    [anon_sym_PERCENTposttrans] = ACTIONS(493),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(493),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(493),
    [anon_sym_PERCENTverify] = ACTIONS(493),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(493),
    [anon_sym_PERCENTtriggerin] = ACTIONS(493),
    [anon_sym_PERCENTtriggerun] = ACTIONS(493),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(493),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(493),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(493),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(493),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(493),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(493),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(493),
    [anon_sym_PERCENTfiles] = ACTIONS(493),
    [anon_sym_PERCENTchangelog] = ACTIONS(493),
    [anon_sym_PERCENTglobal] = ACTIONS(493),
    [anon_sym_PERCENTdefine] = ACTIONS(493),
    [anon_sym_PERCENTundefine] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(493),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(493),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(493),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_Requires,
    ACTIONS(510), 1,
      anon_sym_PERCENTdescription,
    STATE(75), 1,
      sym_tags,
    ACTIONS(498), 2,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
    ACTIONS(504), 2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    STATE(73), 2,
      sym_preamble,
      aux_sym_subsection_package_repeat1,
    STATE(527), 2,
      sym_tag,
      sym_dependency_tag,
    ACTIONS(507), 20,
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
    ACTIONS(495), 24,
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
  [77] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 5,
      anon_sym_PERCENTelif,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    ACTIONS(483), 50,
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
  [140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 5,
      anon_sym_PERCENTelif,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    ACTIONS(395), 50,
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
  [203] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_Requires,
    ACTIONS(518), 1,
      anon_sym_PERCENTdescription,
    STATE(75), 1,
      sym_tags,
    ACTIONS(13), 2,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
    ACTIONS(17), 2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    STATE(73), 2,
      sym_preamble,
      aux_sym_subsection_package_repeat1,
    STATE(527), 2,
      sym_tag,
      sym_dependency_tag,
    ACTIONS(516), 20,
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
    ACTIONS(512), 24,
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
  [280] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_Requires,
    STATE(75), 1,
      sym_tags,
    ACTIONS(13), 2,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
    ACTIONS(17), 2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    STATE(76), 2,
      sym_preamble,
      aux_sym_subsection_package_repeat1,
    STATE(527), 2,
      sym_tag,
      sym_dependency_tag,
    ACTIONS(516), 20,
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
    ACTIONS(512), 24,
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
  [354] = 15,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PERCENTattr,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(203), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(520), 1,
      anon_sym_PERCENTdefattr,
    STATE(98), 1,
      sym_attr,
    STATE(158), 1,
      sym_verify,
    STATE(393), 1,
      sym_string,
    STATE(81), 3,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(221), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(522), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [418] = 15,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_PERCENTverify,
    ACTIONS(236), 1,
      anon_sym_PERCENTattr,
    ACTIONS(239), 1,
      anon_sym_PERCENT,
    ACTIONS(242), 1,
      sym_string_content,
    ACTIONS(245), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(248), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(524), 1,
      anon_sym_PERCENTdefattr,
    STATE(98), 1,
      sym_attr,
    STATE(158), 1,
      sym_verify,
    STATE(393), 1,
      sym_string,
    STATE(79), 3,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(225), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(527), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [482] = 15,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PERCENTattr,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(203), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(520), 1,
      anon_sym_PERCENTdefattr,
    STATE(98), 1,
      sym_attr,
    STATE(158), 1,
      sym_verify,
    STATE(393), 1,
      sym_string,
    STATE(79), 3,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(257), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(522), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [546] = 15,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PERCENTattr,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(203), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(520), 1,
      anon_sym_PERCENTdefattr,
    STATE(98), 1,
      sym_attr,
    STATE(158), 1,
      sym_verify,
    STATE(393), 1,
      sym_string,
    STATE(79), 3,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(261), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(522), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [610] = 15,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PERCENTattr,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(203), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(520), 1,
      anon_sym_PERCENTdefattr,
    STATE(98), 1,
      sym_attr,
    STATE(158), 1,
      sym_verify,
    STATE(393), 1,
      sym_string,
    STATE(84), 3,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(201), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(522), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [674] = 15,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PERCENTattr,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(203), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(520), 1,
      anon_sym_PERCENTdefattr,
    STATE(98), 1,
      sym_attr,
    STATE(158), 1,
      sym_verify,
    STATE(393), 1,
      sym_string,
    STATE(80), 3,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(253), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(522), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [738] = 15,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PERCENTattr,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(203), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(520), 1,
      anon_sym_PERCENTdefattr,
    STATE(98), 1,
      sym_attr,
    STATE(158), 1,
      sym_verify,
    STATE(393), 1,
      sym_string,
    STATE(79), 3,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(217), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(522), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [802] = 15,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PERCENTattr,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(201), 1,
      anon_sym_PERCENTendif,
    ACTIONS(203), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(530), 1,
      anon_sym_PERCENTdefattr,
    STATE(93), 1,
      sym_attr,
    STATE(149), 1,
      sym_verify,
    STATE(403), 1,
      sym_string,
    STATE(86), 3,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(532), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [862] = 15,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PERCENTattr,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(203), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(217), 1,
      anon_sym_PERCENTendif,
    ACTIONS(530), 1,
      anon_sym_PERCENTdefattr,
    STATE(93), 1,
      sym_attr,
    STATE(149), 1,
      sym_verify,
    STATE(403), 1,
      sym_string,
    STATE(90), 3,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(532), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [922] = 15,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PERCENTattr,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(203), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(253), 1,
      anon_sym_PERCENTendif,
    ACTIONS(530), 1,
      anon_sym_PERCENTdefattr,
    STATE(93), 1,
      sym_attr,
    STATE(149), 1,
      sym_verify,
    STATE(403), 1,
      sym_string,
    STATE(89), 3,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(532), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [982] = 15,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PERCENTattr,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(203), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(261), 1,
      anon_sym_PERCENTendif,
    ACTIONS(530), 1,
      anon_sym_PERCENTdefattr,
    STATE(93), 1,
      sym_attr,
    STATE(149), 1,
      sym_verify,
    STATE(403), 1,
      sym_string,
    STATE(90), 3,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(532), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1042] = 15,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PERCENTattr,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(203), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(257), 1,
      anon_sym_PERCENTendif,
    ACTIONS(530), 1,
      anon_sym_PERCENTdefattr,
    STATE(93), 1,
      sym_attr,
    STATE(149), 1,
      sym_verify,
    STATE(403), 1,
      sym_string,
    STATE(90), 3,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(532), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1102] = 15,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_PERCENTendif,
    ACTIONS(227), 1,
      anon_sym_PERCENTverify,
    ACTIONS(236), 1,
      anon_sym_PERCENTattr,
    ACTIONS(239), 1,
      anon_sym_PERCENT,
    ACTIONS(242), 1,
      sym_string_content,
    ACTIONS(245), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(248), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(534), 1,
      anon_sym_PERCENTdefattr,
    STATE(93), 1,
      sym_attr,
    STATE(149), 1,
      sym_verify,
    STATE(403), 1,
      sym_string,
    STATE(90), 3,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(537), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1162] = 15,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PERCENTattr,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(203), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(221), 1,
      anon_sym_PERCENTendif,
    ACTIONS(530), 1,
      anon_sym_PERCENTdefattr,
    STATE(93), 1,
      sym_attr,
    STATE(149), 1,
      sym_verify,
    STATE(403), 1,
      sym_string,
    STATE(88), 3,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(532), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1222] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(277), 21,
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
  [1249] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(203), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(163), 1,
      sym_verify,
    STATE(404), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(540), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1292] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(203), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(172), 1,
      sym_verify,
    STATE(338), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(542), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1335] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(273), 21,
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
  [1362] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(269), 21,
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
  [1389] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(203), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(169), 1,
      sym_verify,
    STATE(369), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(544), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [1432] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(203), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(155), 1,
      sym_verify,
    STATE(395), 1,
      sym_string,
    STATE(165), 5,
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
  [1475] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(265), 21,
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
  [1502] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(548), 2,
      sym_integer,
      sym_float,
    STATE(122), 2,
      aux_sym__value,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(281), 10,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1533] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(269), 17,
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
  [1556] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(265), 17,
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
  [1579] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(277), 17,
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
  [1602] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(273), 17,
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
  [1625] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_PERCENT,
    ACTIONS(552), 1,
      sym_string_content_with_newlines,
    ACTIONS(554), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(556), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(231), 1,
      sym_string_with_newlines,
    ACTIONS(301), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(118), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [1658] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      anon_sym_PERCENT,
    ACTIONS(564), 1,
      sym_string_content,
    ACTIONS(566), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(568), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(132), 1,
      sym_macro_options,
    ACTIONS(560), 2,
      sym_integer,
      sym_float,
    STATE(119), 2,
      aux_sym__value,
      sym_string,
    STATE(138), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1695] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      anon_sym_PERCENT,
    ACTIONS(564), 1,
      sym_string_content,
    ACTIONS(566), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(568), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(126), 1,
      sym_macro_options,
    ACTIONS(570), 2,
      sym_integer,
      sym_float,
    STATE(120), 2,
      aux_sym__value,
      sym_string,
    STATE(138), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1732] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_PERCENT,
    ACTIONS(552), 1,
      sym_string_content_with_newlines,
    ACTIONS(554), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(556), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(260), 1,
      sym_string_with_newlines,
    ACTIONS(289), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(118), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [1765] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_PERCENT,
    ACTIONS(552), 1,
      sym_string_content_with_newlines,
    ACTIONS(554), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(556), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(258), 1,
      sym_string_with_newlines,
    ACTIONS(309), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(118), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [1798] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(548), 2,
      sym_integer,
      sym_float,
    STATE(122), 2,
      aux_sym__value,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(281), 6,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1825] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_PERCENT,
    ACTIONS(552), 1,
      sym_string_content_with_newlines,
    ACTIONS(554), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(556), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(259), 1,
      sym_string_with_newlines,
    ACTIONS(305), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(118), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [1858] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_string_content,
    ACTIONS(572), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(576), 1,
      anon_sym_PERCENT,
    ACTIONS(578), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(580), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(574), 2,
      sym_integer,
      sym_float,
    STATE(124), 2,
      aux_sym__value,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1892] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_PERCENT,
    ACTIONS(564), 1,
      sym_string_content,
    ACTIONS(566), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(568), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(582), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(584), 2,
      sym_integer,
      sym_float,
    STATE(117), 2,
      aux_sym__value,
      sym_string,
    STATE(138), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1926] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_PERCENT,
    ACTIONS(564), 1,
      sym_string_content,
    ACTIONS(566), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(568), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(586), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(584), 2,
      sym_integer,
      sym_float,
    STATE(117), 2,
      aux_sym__value,
      sym_string,
    STATE(138), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1960] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_PERCENT,
    ACTIONS(564), 1,
      sym_string_content,
    ACTIONS(566), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(568), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(588), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(584), 2,
      sym_integer,
      sym_float,
    STATE(117), 2,
      aux_sym__value,
      sym_string,
    STATE(138), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1994] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_PERCENT,
    ACTIONS(593), 1,
      sym_string_content_with_newlines,
    ACTIONS(596), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(599), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(319), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(116), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2024] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(602), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(607), 1,
      anon_sym_PERCENT,
    ACTIONS(610), 1,
      sym_string_content,
    ACTIONS(613), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(616), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(604), 2,
      sym_integer,
      sym_float,
    STATE(117), 2,
      aux_sym__value,
      sym_string,
    STATE(138), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2058] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_PERCENT,
    ACTIONS(554), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(556), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(619), 1,
      sym_string_content_with_newlines,
    ACTIONS(313), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(116), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2088] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_PERCENT,
    ACTIONS(564), 1,
      sym_string_content,
    ACTIONS(566), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(568), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(621), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(584), 2,
      sym_integer,
      sym_float,
    STATE(117), 2,
      aux_sym__value,
      sym_string,
    STATE(138), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2122] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_PERCENT,
    ACTIONS(564), 1,
      sym_string_content,
    ACTIONS(566), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(568), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(623), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(584), 2,
      sym_integer,
      sym_float,
    STATE(117), 2,
      aux_sym__value,
      sym_string,
    STATE(138), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2156] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_PERCENT,
    ACTIONS(564), 1,
      sym_string_content,
    ACTIONS(566), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(568), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(625), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(584), 2,
      sym_integer,
      sym_float,
    STATE(117), 2,
      aux_sym__value,
      sym_string,
    STATE(138), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2190] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_string_content,
    ACTIONS(576), 1,
      anon_sym_PERCENT,
    ACTIONS(578), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(580), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(627), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(574), 2,
      sym_integer,
      sym_float,
    STATE(124), 2,
      aux_sym__value,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2224] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(629), 14,
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
  [2244] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(631), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(636), 1,
      anon_sym_PERCENT,
    ACTIONS(639), 1,
      sym_string_content,
    ACTIONS(642), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(645), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(633), 2,
      sym_integer,
      sym_float,
    STATE(124), 2,
      aux_sym__value,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_RPAREN2,
    STATE(127), 1,
      aux_sym_verify_repeat1,
    ACTIONS(648), 11,
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
  [2301] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_PERCENT,
    ACTIONS(564), 1,
      sym_string_content,
    ACTIONS(566), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(568), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(652), 2,
      sym_integer,
      sym_float,
    STATE(113), 2,
      aux_sym__value,
      sym_string,
    STATE(138), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RPAREN2,
    STATE(127), 1,
      aux_sym_verify_repeat1,
    ACTIONS(654), 11,
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
  [2355] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_PERCENTelse,
    ACTIONS(661), 1,
      anon_sym_PERCENTendif,
    STATE(196), 1,
      aux_sym_if_statement_repeat1,
    STATE(255), 1,
      sym_elif_clause,
    STATE(332), 1,
      sym_else_clause,
    ACTIONS(59), 3,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
    ACTIONS(659), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [2386] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_PERCENT,
    ACTIONS(564), 1,
      sym_string_content,
    ACTIONS(566), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(568), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(663), 2,
      sym_integer,
      sym_float,
    STATE(115), 2,
      aux_sym__value,
      sym_string,
    STATE(138), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2417] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_PERCENTelse,
    ACTIONS(665), 1,
      anon_sym_PERCENTendif,
    STATE(192), 1,
      aux_sym_if_statement_repeat1,
    STATE(255), 1,
      sym_elif_clause,
    STATE(470), 1,
      sym_else_clause,
    ACTIONS(59), 3,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
    ACTIONS(659), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [2448] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_PERCENT,
    ACTIONS(564), 1,
      sym_string_content,
    ACTIONS(566), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(568), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(667), 2,
      sym_integer,
      sym_float,
    STATE(114), 2,
      aux_sym__value,
      sym_string,
    STATE(138), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2479] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_PERCENT,
    ACTIONS(564), 1,
      sym_string_content,
    ACTIONS(566), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(568), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(669), 2,
      sym_integer,
      sym_float,
    STATE(121), 2,
      aux_sym__value,
      sym_string,
    STATE(138), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RPAREN2,
    STATE(125), 1,
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
  [2533] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_PERCENT,
    ACTIONS(680), 1,
      sym_string_content,
    ACTIONS(683), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(686), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(675), 3,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
    STATE(134), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2561] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_PERCENT,
    ACTIONS(578), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(580), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(689), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(693), 1,
      sym_string_content,
    ACTIONS(691), 2,
      sym_integer,
      sym_float,
    STATE(136), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2591] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(695), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(697), 1,
      anon_sym_PERCENT,
    ACTIONS(700), 1,
      sym_string_content,
    ACTIONS(703), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(706), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(675), 2,
      sym_integer,
      sym_float,
    STATE(136), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2621] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(365), 12,
      aux_sym__simple_statements_token1,
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
  [2639] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_PERCENT,
    ACTIONS(566), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(568), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(709), 1,
      sym_string_content,
    ACTIONS(691), 3,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
    STATE(134), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2667] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_PERCENTendif,
    ACTIONS(711), 1,
      anon_sym_PERCENT,
    ACTIONS(713), 1,
      sym_string_content_with_newlines,
    ACTIONS(715), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(717), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(258), 1,
      sym_string_with_newlines,
    STATE(156), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2696] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_PERCENT,
    ACTIONS(721), 1,
      sym_string_content,
    ACTIONS(723), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(725), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(691), 2,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
    STATE(141), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2723] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_PERCENT,
    ACTIONS(730), 1,
      sym_string_content,
    ACTIONS(733), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(736), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(675), 2,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
    STATE(141), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2750] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_PERCENTendif,
    ACTIONS(711), 1,
      anon_sym_PERCENT,
    ACTIONS(713), 1,
      sym_string_content_with_newlines,
    ACTIONS(715), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(717), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(260), 1,
      sym_string_with_newlines,
    STATE(156), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2779] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_PERCENTendif,
    ACTIONS(711), 1,
      anon_sym_PERCENT,
    ACTIONS(713), 1,
      sym_string_content_with_newlines,
    ACTIONS(715), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(717), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(231), 1,
      sym_string_with_newlines,
    STATE(156), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2808] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_PERCENTendif,
    ACTIONS(711), 1,
      anon_sym_PERCENT,
    ACTIONS(713), 1,
      sym_string_content_with_newlines,
    ACTIONS(715), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(717), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(259), 1,
      sym_string_with_newlines,
    STATE(156), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2837] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_PERCENT,
    ACTIONS(723), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(725), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(739), 1,
      sym_string_content,
    STATE(329), 1,
      sym_string,
    STATE(140), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2863] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(675), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(741), 1,
      anon_sym_PERCENT,
    ACTIONS(744), 1,
      sym_string_content,
    ACTIONS(747), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(750), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(146), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2889] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(430), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2915] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(393), 10,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [2931] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(404), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2957] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(398), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2983] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(369), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3009] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(363), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3035] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_PERCENTendif,
    ACTIONS(753), 1,
      anon_sym_PERCENT,
    ACTIONS(756), 1,
      sym_string_content_with_newlines,
    ACTIONS(759), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(762), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(153), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [3061] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_PERCENT,
    ACTIONS(723), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(725), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(739), 1,
      sym_string_content,
    STATE(313), 1,
      sym_string,
    STATE(140), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3087] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(397), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3113] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_PERCENTendif,
    ACTIONS(711), 1,
      anon_sym_PERCENT,
    ACTIONS(715), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(717), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(765), 1,
      sym_string_content_with_newlines,
    STATE(153), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [3139] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(347), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3165] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(395), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3191] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(394), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3217] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(338), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3243] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(659), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(767), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [3261] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(392), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3287] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(406), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3313] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(386), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3339] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(691), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(769), 1,
      sym_string_content,
    STATE(146), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3365] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(378), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3391] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(385), 10,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3407] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(366), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3433] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(377), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3459] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(381), 10,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3475] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(377), 10,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3491] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(429), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3517] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(389), 10,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3533] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(493), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3559] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_string_content,
    ACTIONS(209), 1,
      anon_sym_PERCENT,
    ACTIONS(211), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(213), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(364), 1,
      sym_string,
    STATE(165), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3585] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_PERCENT,
    ACTIONS(723), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(725), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(739), 1,
      sym_string_content,
    STATE(324), 1,
      sym_string,
    STATE(140), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3611] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_PERCENT,
    ACTIONS(773), 1,
      sym_string_content,
    ACTIONS(775), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(777), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(373), 1,
      sym_single_word,
    STATE(456), 4,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
  [3636] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(319), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3651] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(393), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3666] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_PERCENT,
    ACTIONS(773), 1,
      sym_string_content,
    ACTIONS(775), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(777), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(455), 1,
      sym_single_word,
    STATE(456), 4,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
  [3691] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(365), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3706] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(385), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(367), 1,
      sym_qualifier,
    ACTIONS(779), 2,
      anon_sym_pre,
      anon_sym_post,
    ACTIONS(781), 6,
      anon_sym_postun,
      anon_sym_pretrans,
      anon_sym_posttrans,
      anon_sym_verify,
      anon_sym_interp,
      anon_sym_meta,
  [3740] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_PERCENT,
    ACTIONS(773), 1,
      sym_string_content,
    ACTIONS(775), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(777), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(334), 1,
      sym_single_word,
    STATE(456), 4,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
  [3765] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(389), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3780] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(381), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3795] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(377), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3810] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_PERCENTelif,
    ACTIONS(783), 1,
      anon_sym_DASH,
    STATE(193), 1,
      aux_sym_changelog_entry_repeat1,
    ACTIONS(359), 5,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_STAR,
  [3830] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_PERCENTelif,
    ACTIONS(785), 1,
      anon_sym_STAR,
    STATE(198), 2,
      sym_changelog_entry,
      aux_sym_changelog_repeat1,
    ACTIONS(367), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [3850] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_PERCENTelif,
    ACTIONS(787), 1,
      anon_sym_PERCENTendif,
    ACTIONS(791), 1,
      anon_sym_PERCENTelse,
    STATE(211), 1,
      aux_sym_if_statement_repeat1,
    STATE(255), 1,
      sym_elif_clause,
    STATE(411), 1,
      sym_else_clause,
    ACTIONS(789), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [3876] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_PERCENTelif,
    ACTIONS(793), 1,
      anon_sym_STAR,
    STATE(191), 2,
      sym_changelog_entry,
      aux_sym_changelog_repeat1,
    ACTIONS(333), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [3896] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_PERCENTelif,
    ACTIONS(791), 1,
      anon_sym_PERCENTelse,
    ACTIONS(796), 1,
      anon_sym_PERCENTendif,
    STATE(211), 1,
      aux_sym_if_statement_repeat1,
    STATE(255), 1,
      sym_elif_clause,
    STATE(475), 1,
      sym_else_clause,
    ACTIONS(789), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [3922] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_PERCENTelif,
    ACTIONS(798), 1,
      anon_sym_DASH,
    STATE(193), 1,
      aux_sym_changelog_entry_repeat1,
    ACTIONS(340), 5,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_STAR,
  [3942] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(365), 8,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3956] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_PERCENTelif,
    ACTIONS(791), 1,
      anon_sym_PERCENTelse,
    ACTIONS(801), 1,
      anon_sym_PERCENTendif,
    STATE(197), 1,
      aux_sym_if_statement_repeat1,
    STATE(255), 1,
      sym_elif_clause,
    STATE(332), 1,
      sym_else_clause,
    ACTIONS(789), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [3982] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_PERCENTelif,
    ACTIONS(791), 1,
      anon_sym_PERCENTelse,
    ACTIONS(803), 1,
      anon_sym_PERCENTendif,
    STATE(211), 1,
      aux_sym_if_statement_repeat1,
    STATE(255), 1,
      sym_elif_clause,
    STATE(449), 1,
      sym_else_clause,
    ACTIONS(789), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [4008] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_PERCENTelif,
    ACTIONS(791), 1,
      anon_sym_PERCENTelse,
    ACTIONS(805), 1,
      anon_sym_PERCENTendif,
    STATE(211), 1,
      aux_sym_if_statement_repeat1,
    STATE(255), 1,
      sym_elif_clause,
    STATE(440), 1,
      sym_else_clause,
    ACTIONS(789), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [4034] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_PERCENTelif,
    ACTIONS(785), 1,
      anon_sym_STAR,
    STATE(191), 2,
      sym_changelog_entry,
      aux_sym_changelog_repeat1,
    ACTIONS(353), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4054] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_PERCENTelif,
    ACTIONS(791), 1,
      anon_sym_PERCENTelse,
    ACTIONS(807), 1,
      anon_sym_PERCENTendif,
    STATE(201), 1,
      aux_sym_if_statement_repeat1,
    STATE(255), 1,
      sym_elif_clause,
    STATE(470), 1,
      sym_else_clause,
    ACTIONS(789), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [4080] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_PERCENTelif,
    ACTIONS(791), 1,
      anon_sym_PERCENTelse,
    ACTIONS(809), 1,
      anon_sym_PERCENTendif,
    STATE(211), 1,
      aux_sym_if_statement_repeat1,
    STATE(255), 1,
      sym_elif_clause,
    STATE(473), 1,
      sym_else_clause,
    ACTIONS(789), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [4106] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_PERCENTelif,
    ACTIONS(791), 1,
      anon_sym_PERCENTelse,
    ACTIONS(811), 1,
      anon_sym_PERCENTendif,
    STATE(211), 1,
      aux_sym_if_statement_repeat1,
    STATE(255), 1,
      sym_elif_clause,
    STATE(474), 1,
      sym_else_clause,
    ACTIONS(789), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [4132] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_PERCENTelif,
    ACTIONS(783), 1,
      anon_sym_DASH,
    STATE(188), 1,
      aux_sym_changelog_entry_repeat1,
    ACTIONS(347), 5,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_STAR,
  [4152] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(381), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4167] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(383), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(385), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4182] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(389), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4195] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(377), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4208] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(381), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4221] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(391), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(393), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4236] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(387), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(389), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4251] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(363), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(365), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4266] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_PERCENTelif,
    STATE(211), 1,
      aux_sym_if_statement_repeat1,
    STATE(255), 1,
      sym_elif_clause,
    ACTIONS(813), 2,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelse,
    ACTIONS(818), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [4287] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(393), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4300] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(365), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_PERCENTelif,
    ACTIONS(371), 6,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_DASH,
      anon_sym_STAR,
  [4328] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(385), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4341] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(375), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(377), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4356] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(389), 6,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_PERCENTelif,
    ACTIONS(825), 1,
      anon_sym_LPAREN2,
    ACTIONS(821), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4384] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(827), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4396] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(365), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4408] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(393), 6,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4420] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(381), 6,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4432] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(389), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4444] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_PERCENTendif,
    ACTIONS(659), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4458] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(381), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4470] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(385), 6,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4482] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(393), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4494] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(385), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4506] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(377), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4518] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(377), 6,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_PERCENTelif,
    ACTIONS(491), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_PERCENTelif,
    ACTIONS(267), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4556] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(389), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4567] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(389), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_PERCENTelif,
    ACTIONS(479), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4591] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(393), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_PERCENTelif,
    ACTIONS(463), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_PERCENTelif,
    ACTIONS(455), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_PERCENTelif,
    ACTIONS(447), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_PERCENTelif,
    ACTIONS(439), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_PERCENTelif,
    ACTIONS(263), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4667] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(377), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_PERCENTelif,
    ACTIONS(451), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_PERCENTelif,
    ACTIONS(411), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_PERCENTelif,
    ACTIONS(407), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_PERCENTelif,
    ACTIONS(407), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_PERCENTelif,
    ACTIONS(435), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4743] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(385), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_PERCENTelif,
    ACTIONS(487), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_PERCENTelif,
    ACTIONS(443), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_PERCENTelif,
    ACTIONS(443), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_PERCENTelif,
    ACTIONS(271), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_PERCENTelif,
    ACTIONS(275), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4819] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(385), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_PERCENTelif,
    ACTIONS(831), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_PERCENTelif,
    ACTIONS(415), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_PERCENTelif,
    ACTIONS(467), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_PERCENTelif,
    ACTIONS(399), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_PERCENTelif,
    ACTIONS(471), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_PERCENTelif,
    ACTIONS(459), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_PERCENTelif,
    ACTIONS(431), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_PERCENTelif,
    ACTIONS(403), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_PERCENTelif,
    ACTIONS(475), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_PERCENTelif,
    ACTIONS(419), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4960] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(381), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4971] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(319), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_PERCENTelif,
    ACTIONS(423), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_PERCENTelif,
    ACTIONS(427), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [5008] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(365), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [5019] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(393), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [5030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_PERCENTelif,
    ACTIONS(835), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [5043] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(365), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [5054] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(381), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [5065] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(377), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [5076] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(837), 4,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [5086] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(839), 4,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [5096] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(841), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(843), 1,
      anon_sym_DASHn,
    ACTIONS(845), 1,
      anon_sym_DASHf,
  [5109] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(847), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(849), 1,
      anon_sym_DASHn,
    ACTIONS(851), 1,
      anon_sym_DASHf,
  [5122] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(853), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(855), 1,
      anon_sym_DASHn,
    ACTIONS(857), 1,
      anon_sym_DASHf,
  [5135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_COLON,
    ACTIONS(861), 1,
      anon_sym_RBRACE,
  [5145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [5153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [5161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [5169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_variable_name,
    ACTIONS(871), 1,
      anon_sym_QMARK,
  [5179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_variable_name,
    ACTIONS(875), 1,
      anon_sym_QMARK,
  [5189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym_variable_name,
    ACTIONS(879), 1,
      anon_sym_QMARK,
  [5199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      sym_variable_name,
    ACTIONS(883), 1,
      anon_sym_QMARK,
  [5209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      sym_variable_name,
    ACTIONS(887), 1,
      anon_sym_QMARK,
  [5219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym_variable_name,
    ACTIONS(891), 1,
      anon_sym_QMARK,
  [5229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      sym_variable_name,
    ACTIONS(895), 1,
      anon_sym_QMARK,
  [5239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_COLON,
    ACTIONS(899), 1,
      anon_sym_LPAREN,
  [5249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym_variable_name,
    ACTIONS(903), 1,
      anon_sym_QMARK,
  [5259] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(905), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(907), 1,
      anon_sym_DASHn,
  [5269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      sym_variable_name,
    ACTIONS(911), 1,
      anon_sym_QMARK,
  [5279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym_variable_name,
    ACTIONS(915), 1,
      anon_sym_QMARK,
  [5289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_PERCENTdescription,
    STATE(53), 1,
      sym_subsection_description,
  [5299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_COLON,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
  [5309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      sym_variable_name,
    ACTIONS(925), 1,
      anon_sym_QMARK,
  [5319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_COLON,
    ACTIONS(929), 1,
      anon_sym_RBRACE,
  [5329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_COLON,
    ACTIONS(933), 1,
      anon_sym_RBRACE,
  [5339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_COLON,
    ACTIONS(937), 1,
      anon_sym_RBRACE,
  [5349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_COLON,
    ACTIONS(941), 1,
      anon_sym_RBRACE,
  [5359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_COLON,
    ACTIONS(945), 1,
      anon_sym_RBRACE,
  [5369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_COLON,
    ACTIONS(949), 1,
      anon_sym_RBRACE,
  [5379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_COLON,
    ACTIONS(953), 1,
      anon_sym_RBRACE,
  [5389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_COLON,
    ACTIONS(957), 1,
      anon_sym_RBRACE,
  [5399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_COLON,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
  [5409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_COLON,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
  [5419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_COLON,
    ACTIONS(969), 1,
      anon_sym_RBRACE,
  [5429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_COLON,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
  [5439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_COLON,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
  [5449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_COLON,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
  [5459] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(983), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(985), 1,
      anon_sym_DASHf,
  [5469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_PERCENTdescription,
    STATE(261), 1,
      sym_subsection_description,
  [5479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_COLON,
    ACTIONS(991), 1,
      anon_sym_RBRACE,
  [5489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_COLON,
    ACTIONS(995), 1,
      anon_sym_RBRACE,
  [5499] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym_string_content_with_newlines,
    ACTIONS(999), 1,
      sym_variable_name,
  [5509] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1001), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(1003), 1,
      anon_sym_DASHn,
  [5519] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym_string_content_with_newlines,
    ACTIONS(1007), 1,
      sym_variable_name,
  [5529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [5537] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1011), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(1013), 1,
      anon_sym_DASHn,
  [5547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [5555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_COLON,
    ACTIONS(1019), 1,
      anon_sym_RBRACE,
  [5565] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1021), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(1023), 1,
      anon_sym_DASHf,
  [5575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_COLON,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
  [5585] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1029), 1,
      sym_string_content_with_newlines,
    ACTIONS(1031), 1,
      sym_variable_name,
  [5595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_COLON,
    ACTIONS(1035), 1,
      anon_sym_RBRACE,
  [5605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_COLON,
    ACTIONS(1039), 1,
      anon_sym_RBRACE,
  [5615] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1041), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(1043), 1,
      anon_sym_DASHf,
  [5625] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1045), 1,
      aux_sym__simple_statements_token1,
  [5632] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1047), 1,
      aux_sym__simple_statements_token1,
  [5639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_PERCENTendif,
  [5646] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1051), 1,
      aux_sym__simple_statements_token1,
  [5653] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1053), 1,
      aux_sym__simple_statements_token1,
  [5660] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym_string_content,
  [5667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_RBRACE,
  [5674] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1059), 1,
      aux_sym__simple_statements_token1,
  [5681] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1061), 1,
      aux_sym__simple_statements_token1,
  [5688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_COLON,
  [5695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_PERCENTendif,
  [5702] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1067), 1,
      aux_sym__simple_statements_token1,
  [5709] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1069), 1,
      aux_sym_if_statement_token1,
  [5716] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1071), 1,
      aux_sym__simple_statements_token1,
  [5723] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym_string_content,
  [5730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
  [5737] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1077), 1,
      sym_string_content,
  [5744] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(983), 1,
      aux_sym__simple_statements_token1,
  [5751] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1079), 1,
      aux_sym__simple_statements_token1,
  [5758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_LPAREN,
  [5765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_LPAREN,
  [5772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_LPAREN2,
  [5779] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1085), 1,
      aux_sym__simple_statements_token1,
  [5786] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1087), 1,
      aux_sym__simple_statements_token1,
  [5793] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1089), 1,
      aux_sym__simple_statements_token1,
  [5800] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1091), 1,
      aux_sym__simple_statements_token1,
  [5807] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1093), 1,
      aux_sym__simple_statements_token1,
  [5814] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1095), 1,
      aux_sym__simple_statements_token1,
  [5821] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(383), 1,
      aux_sym__simple_statements_token1,
  [5828] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym__simple_statements_token1,
  [5835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      sym_variable_name,
  [5842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
  [5849] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1103), 1,
      aux_sym__simple_statements_token1,
  [5856] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1105), 1,
      aux_sym__simple_statements_token1,
  [5863] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1107), 1,
      aux_sym__simple_statements_token1,
  [5870] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1109), 1,
      aux_sym__simple_statements_token1,
  [5877] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1021), 1,
      aux_sym__simple_statements_token1,
  [5884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
  [5891] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1113), 1,
      aux_sym__simple_statements_token1,
  [5898] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1115), 1,
      aux_sym__simple_statements_token1,
  [5905] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1117), 1,
      aux_sym__simple_statements_token1,
  [5912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
  [5919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_RBRACE,
  [5926] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1123), 1,
      aux_sym__simple_statements_token1,
  [5933] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1125), 1,
      aux_sym__simple_statements_token1,
  [5940] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1127), 1,
      aux_sym__simple_statements_token1,
  [5947] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1129), 1,
      aux_sym__simple_statements_token1,
  [5954] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1131), 1,
      aux_sym__simple_statements_token1,
  [5961] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1133), 1,
      aux_sym__simple_statements_token1,
  [5968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_RBRACE,
  [5975] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1137), 1,
      aux_sym__simple_statements_token1,
  [5982] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1139), 1,
      aux_sym__simple_statements_token1,
  [5989] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1141), 1,
      aux_sym__simple_statements_token1,
  [5996] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1143), 1,
      aux_sym__simple_statements_token1,
  [6003] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1145), 1,
      aux_sym__simple_statements_token1,
  [6010] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1147), 1,
      aux_sym__simple_statements_token1,
  [6017] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1149), 1,
      aux_sym__simple_statements_token1,
  [6024] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1151), 1,
      aux_sym__simple_statements_token1,
  [6031] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1153), 1,
      aux_sym__simple_statements_token1,
  [6038] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym__simple_statements_token1,
  [6045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      sym_variable_name,
  [6052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
  [6059] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1161), 1,
      aux_sym__simple_statements_token1,
  [6066] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1163), 1,
      aux_sym__simple_statements_token1,
  [6073] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1041), 1,
      aux_sym__simple_statements_token1,
  [6080] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1165), 1,
      aux_sym__simple_statements_token1,
  [6087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_RBRACE,
  [6094] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1169), 1,
      aux_sym__simple_statements_token1,
  [6101] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1171), 1,
      aux_sym__simple_statements_token1,
  [6108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_RBRACE,
  [6115] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1175), 1,
      aux_sym__simple_statements_token1,
  [6122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      sym_variable_name,
  [6129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
  [6136] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1181), 1,
      aux_sym__simple_statements_token1,
  [6143] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1183), 1,
      aux_sym__simple_statements_token1,
  [6150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_RBRACE,
  [6157] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1187), 1,
      aux_sym__simple_statements_token1,
  [6164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      anon_sym_RBRACE,
  [6171] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1191), 1,
      aux_sym__simple_statements_token1,
  [6178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 1,
      sym_variable_name,
  [6185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
  [6192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_PERCENTendif,
  [6199] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1199), 1,
      aux_sym__simple_statements_token1,
  [6206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 1,
      anon_sym_RBRACE,
  [6213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 1,
      anon_sym_RBRACE,
  [6220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      sym_variable_name,
  [6227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
  [6234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_DASHn,
  [6241] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1211), 1,
      aux_sym__simple_statements_token1,
  [6248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      anon_sym_RBRACE,
  [6255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      anon_sym_RBRACE,
  [6262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      sym_variable_name,
  [6269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
  [6276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
  [6283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      anon_sym_COMMA,
  [6290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      anon_sym_RBRACE,
  [6297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      anon_sym_RBRACE,
  [6304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 1,
      sym_variable_name,
  [6311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
  [6318] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1233), 1,
      aux_sym__simple_statements_token1,
  [6325] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1235), 1,
      aux_sym__simple_statements_token1,
  [6332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      anon_sym_RBRACE,
  [6339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      anon_sym_RBRACE,
  [6346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
  [6353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      anon_sym_RBRACE,
  [6360] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1245), 1,
      aux_sym__simple_statements_token1,
  [6367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 1,
      anon_sym_RBRACE,
  [6374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_RBRACE,
  [6381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      anon_sym_RPAREN,
  [6388] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1253), 1,
      aux_sym__simple_statements_token1,
  [6395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      anon_sym_PERCENTendif,
  [6402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1257), 1,
      anon_sym_RBRACE,
  [6409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      anon_sym_RBRACE,
  [6416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
  [6423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 1,
      anon_sym_PERCENTendif,
  [6430] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1265), 1,
      aux_sym__simple_statements_token1,
  [6437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      anon_sym_RBRACE,
  [6444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      anon_sym_RBRACE,
  [6451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      sym_variable_name,
  [6458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1273), 1,
      anon_sym_PERCENTendif,
  [6465] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1275), 1,
      aux_sym_if_statement_token1,
  [6472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1277), 1,
      sym_variable_name,
  [6479] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1279), 1,
      aux_sym__simple_statements_token1,
  [6486] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1281), 1,
      aux_sym__simple_statements_token1,
  [6493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 1,
      sym_variable_name,
  [6500] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1285), 1,
      aux_sym__simple_statements_token1,
  [6507] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1287), 1,
      aux_sym__simple_statements_token1,
  [6514] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1289), 1,
      aux_sym__simple_statements_token1,
  [6521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      aux_sym_defattr_token2,
  [6528] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1293), 1,
      sym_string_content,
  [6535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 1,
      anon_sym_COLON,
  [6542] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1297), 1,
      sym_string_content,
  [6549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 1,
      ts_builtin_sym_end,
  [6556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
  [6563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_PERCENTendif,
  [6570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      aux_sym_defattr_token2,
  [6577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      sym_variable_name,
  [6584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      sym_variable_name,
  [6591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      sym_variable_name,
  [6598] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1313), 1,
      sym_string_content,
  [6605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_PERCENTendif,
  [6612] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1317), 1,
      aux_sym__simple_statements_token1,
  [6619] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym__simple_statements_token1,
  [6626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 1,
      anon_sym_PERCENTendif,
  [6633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 1,
      anon_sym_PERCENTendif,
  [6640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 1,
      anon_sym_PERCENTendif,
  [6647] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1327), 1,
      aux_sym__simple_statements_token1,
  [6654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
  [6661] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1331), 1,
      aux_sym__simple_statements_token1,
  [6668] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1333), 1,
      aux_sym__simple_statements_token1,
  [6675] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1335), 1,
      aux_sym__simple_statements_token1,
  [6682] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1337), 1,
      aux_sym__simple_statements_token1,
  [6689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1339), 1,
      sym_variable_name,
  [6696] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1341), 1,
      aux_sym__simple_statements_token1,
  [6703] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1343), 1,
      aux_sym__simple_statements_token1,
  [6710] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1345), 1,
      sym_string_content,
  [6717] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1347), 1,
      aux_sym__simple_statements_token1,
  [6724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
  [6731] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1351), 1,
      sym_string_content,
  [6738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
  [6745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
  [6752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 1,
      sym_variable_name,
  [6759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_COLON,
  [6766] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1359), 1,
      aux_sym__simple_statements_token1,
  [6773] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1361), 1,
      sym_string_content,
  [6780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_COLON,
  [6787] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1365), 1,
      sym_string_content,
  [6794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
  [6801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      aux_sym_defattr_token2,
  [6808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 1,
      sym_variable_name,
  [6815] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1373), 1,
      sym_string_content,
  [6822] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1375), 1,
      sym_string_content,
  [6829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1377), 1,
      aux_sym_defattr_token2,
  [6836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 1,
      sym_variable_name,
  [6843] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1381), 1,
      sym_string_content,
  [6850] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1383), 1,
      sym_string_content,
  [6857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
  [6864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 1,
      sym_variable_name,
  [6871] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1389), 1,
      sym_string_content,
  [6878] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1391), 1,
      sym_string_content,
  [6885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 1,
      anon_sym_RPAREN,
  [6892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 1,
      sym_variable_name,
  [6899] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1397), 1,
      sym_string_content,
  [6906] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1399), 1,
      sym_string_content,
  [6913] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1401), 1,
      aux_sym__simple_statements_token1,
  [6920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1403), 1,
      sym_variable_name,
  [6927] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1405), 1,
      sym_string_content,
  [6934] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1407), 1,
      sym_string_content,
  [6941] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(363), 1,
      aux_sym__simple_statements_token1,
  [6948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 1,
      sym_variable_name,
  [6955] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1411), 1,
      sym_string_content,
  [6962] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1413), 1,
      sym_string_content,
  [6969] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym__simple_statements_token1,
  [6976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 1,
      sym_variable_name,
  [6983] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1417), 1,
      sym_string_content,
  [6990] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1419), 1,
      sym_string_content,
  [6997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1421), 1,
      sym_variable_name,
  [7004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 1,
      anon_sym_COLON,
  [7011] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1425), 1,
      aux_sym__simple_statements_token1,
  [7018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1427), 1,
      anon_sym_DASHn,
  [7025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 1,
      aux_sym_defattr_token2,
  [7032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1431), 1,
      aux_sym_defattr_token2,
  [7039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1433), 1,
      aux_sym_defattr_token2,
  [7046] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1435), 1,
      aux_sym_if_statement_token1,
  [7053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_COMMA,
  [7060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 1,
      anon_sym_COMMA,
  [7067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1441), 1,
      anon_sym_COMMA,
  [7074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 1,
      aux_sym_defattr_token2,
  [7081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 1,
      aux_sym_defattr_token2,
  [7088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 1,
      aux_sym_defattr_token2,
  [7095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 1,
      anon_sym_COMMA,
  [7102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 1,
      anon_sym_COMMA,
  [7109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1453), 1,
      anon_sym_COMMA,
  [7116] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(375), 1,
      aux_sym__simple_statements_token1,
  [7123] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(387), 1,
      aux_sym__simple_statements_token1,
  [7130] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(391), 1,
      aux_sym__simple_statements_token1,
  [7137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 1,
      anon_sym_LPAREN,
  [7144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 1,
      anon_sym_LPAREN,
  [7151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1459), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(73)] = 0,
  [SMALL_STATE(74)] = 77,
  [SMALL_STATE(75)] = 140,
  [SMALL_STATE(76)] = 203,
  [SMALL_STATE(77)] = 280,
  [SMALL_STATE(78)] = 354,
  [SMALL_STATE(79)] = 418,
  [SMALL_STATE(80)] = 482,
  [SMALL_STATE(81)] = 546,
  [SMALL_STATE(82)] = 610,
  [SMALL_STATE(83)] = 674,
  [SMALL_STATE(84)] = 738,
  [SMALL_STATE(85)] = 802,
  [SMALL_STATE(86)] = 862,
  [SMALL_STATE(87)] = 922,
  [SMALL_STATE(88)] = 982,
  [SMALL_STATE(89)] = 1042,
  [SMALL_STATE(90)] = 1102,
  [SMALL_STATE(91)] = 1162,
  [SMALL_STATE(92)] = 1222,
  [SMALL_STATE(93)] = 1249,
  [SMALL_STATE(94)] = 1292,
  [SMALL_STATE(95)] = 1335,
  [SMALL_STATE(96)] = 1362,
  [SMALL_STATE(97)] = 1389,
  [SMALL_STATE(98)] = 1432,
  [SMALL_STATE(99)] = 1475,
  [SMALL_STATE(100)] = 1502,
  [SMALL_STATE(101)] = 1533,
  [SMALL_STATE(102)] = 1556,
  [SMALL_STATE(103)] = 1579,
  [SMALL_STATE(104)] = 1602,
  [SMALL_STATE(105)] = 1625,
  [SMALL_STATE(106)] = 1658,
  [SMALL_STATE(107)] = 1695,
  [SMALL_STATE(108)] = 1732,
  [SMALL_STATE(109)] = 1765,
  [SMALL_STATE(110)] = 1798,
  [SMALL_STATE(111)] = 1825,
  [SMALL_STATE(112)] = 1858,
  [SMALL_STATE(113)] = 1892,
  [SMALL_STATE(114)] = 1926,
  [SMALL_STATE(115)] = 1960,
  [SMALL_STATE(116)] = 1994,
  [SMALL_STATE(117)] = 2024,
  [SMALL_STATE(118)] = 2058,
  [SMALL_STATE(119)] = 2088,
  [SMALL_STATE(120)] = 2122,
  [SMALL_STATE(121)] = 2156,
  [SMALL_STATE(122)] = 2190,
  [SMALL_STATE(123)] = 2224,
  [SMALL_STATE(124)] = 2244,
  [SMALL_STATE(125)] = 2278,
  [SMALL_STATE(126)] = 2301,
  [SMALL_STATE(127)] = 2332,
  [SMALL_STATE(128)] = 2355,
  [SMALL_STATE(129)] = 2386,
  [SMALL_STATE(130)] = 2417,
  [SMALL_STATE(131)] = 2448,
  [SMALL_STATE(132)] = 2479,
  [SMALL_STATE(133)] = 2510,
  [SMALL_STATE(134)] = 2533,
  [SMALL_STATE(135)] = 2561,
  [SMALL_STATE(136)] = 2591,
  [SMALL_STATE(137)] = 2621,
  [SMALL_STATE(138)] = 2639,
  [SMALL_STATE(139)] = 2667,
  [SMALL_STATE(140)] = 2696,
  [SMALL_STATE(141)] = 2723,
  [SMALL_STATE(142)] = 2750,
  [SMALL_STATE(143)] = 2779,
  [SMALL_STATE(144)] = 2808,
  [SMALL_STATE(145)] = 2837,
  [SMALL_STATE(146)] = 2863,
  [SMALL_STATE(147)] = 2889,
  [SMALL_STATE(148)] = 2915,
  [SMALL_STATE(149)] = 2931,
  [SMALL_STATE(150)] = 2957,
  [SMALL_STATE(151)] = 2983,
  [SMALL_STATE(152)] = 3009,
  [SMALL_STATE(153)] = 3035,
  [SMALL_STATE(154)] = 3061,
  [SMALL_STATE(155)] = 3087,
  [SMALL_STATE(156)] = 3113,
  [SMALL_STATE(157)] = 3139,
  [SMALL_STATE(158)] = 3165,
  [SMALL_STATE(159)] = 3191,
  [SMALL_STATE(160)] = 3217,
  [SMALL_STATE(161)] = 3243,
  [SMALL_STATE(162)] = 3261,
  [SMALL_STATE(163)] = 3287,
  [SMALL_STATE(164)] = 3313,
  [SMALL_STATE(165)] = 3339,
  [SMALL_STATE(166)] = 3365,
  [SMALL_STATE(167)] = 3391,
  [SMALL_STATE(168)] = 3407,
  [SMALL_STATE(169)] = 3433,
  [SMALL_STATE(170)] = 3459,
  [SMALL_STATE(171)] = 3475,
  [SMALL_STATE(172)] = 3491,
  [SMALL_STATE(173)] = 3517,
  [SMALL_STATE(174)] = 3533,
  [SMALL_STATE(175)] = 3559,
  [SMALL_STATE(176)] = 3585,
  [SMALL_STATE(177)] = 3611,
  [SMALL_STATE(178)] = 3636,
  [SMALL_STATE(179)] = 3651,
  [SMALL_STATE(180)] = 3666,
  [SMALL_STATE(181)] = 3691,
  [SMALL_STATE(182)] = 3706,
  [SMALL_STATE(183)] = 3721,
  [SMALL_STATE(184)] = 3740,
  [SMALL_STATE(185)] = 3765,
  [SMALL_STATE(186)] = 3780,
  [SMALL_STATE(187)] = 3795,
  [SMALL_STATE(188)] = 3810,
  [SMALL_STATE(189)] = 3830,
  [SMALL_STATE(190)] = 3850,
  [SMALL_STATE(191)] = 3876,
  [SMALL_STATE(192)] = 3896,
  [SMALL_STATE(193)] = 3922,
  [SMALL_STATE(194)] = 3942,
  [SMALL_STATE(195)] = 3956,
  [SMALL_STATE(196)] = 3982,
  [SMALL_STATE(197)] = 4008,
  [SMALL_STATE(198)] = 4034,
  [SMALL_STATE(199)] = 4054,
  [SMALL_STATE(200)] = 4080,
  [SMALL_STATE(201)] = 4106,
  [SMALL_STATE(202)] = 4132,
  [SMALL_STATE(203)] = 4152,
  [SMALL_STATE(204)] = 4167,
  [SMALL_STATE(205)] = 4182,
  [SMALL_STATE(206)] = 4195,
  [SMALL_STATE(207)] = 4208,
  [SMALL_STATE(208)] = 4221,
  [SMALL_STATE(209)] = 4236,
  [SMALL_STATE(210)] = 4251,
  [SMALL_STATE(211)] = 4266,
  [SMALL_STATE(212)] = 4287,
  [SMALL_STATE(213)] = 4300,
  [SMALL_STATE(214)] = 4313,
  [SMALL_STATE(215)] = 4328,
  [SMALL_STATE(216)] = 4341,
  [SMALL_STATE(217)] = 4356,
  [SMALL_STATE(218)] = 4368,
  [SMALL_STATE(219)] = 4384,
  [SMALL_STATE(220)] = 4396,
  [SMALL_STATE(221)] = 4408,
  [SMALL_STATE(222)] = 4420,
  [SMALL_STATE(223)] = 4432,
  [SMALL_STATE(224)] = 4444,
  [SMALL_STATE(225)] = 4458,
  [SMALL_STATE(226)] = 4470,
  [SMALL_STATE(227)] = 4482,
  [SMALL_STATE(228)] = 4494,
  [SMALL_STATE(229)] = 4506,
  [SMALL_STATE(230)] = 4518,
  [SMALL_STATE(231)] = 4530,
  [SMALL_STATE(232)] = 4543,
  [SMALL_STATE(233)] = 4556,
  [SMALL_STATE(234)] = 4567,
  [SMALL_STATE(235)] = 4578,
  [SMALL_STATE(236)] = 4591,
  [SMALL_STATE(237)] = 4602,
  [SMALL_STATE(238)] = 4615,
  [SMALL_STATE(239)] = 4628,
  [SMALL_STATE(240)] = 4641,
  [SMALL_STATE(241)] = 4654,
  [SMALL_STATE(242)] = 4667,
  [SMALL_STATE(243)] = 4678,
  [SMALL_STATE(244)] = 4691,
  [SMALL_STATE(245)] = 4704,
  [SMALL_STATE(246)] = 4717,
  [SMALL_STATE(247)] = 4730,
  [SMALL_STATE(248)] = 4743,
  [SMALL_STATE(249)] = 4754,
  [SMALL_STATE(250)] = 4767,
  [SMALL_STATE(251)] = 4780,
  [SMALL_STATE(252)] = 4793,
  [SMALL_STATE(253)] = 4806,
  [SMALL_STATE(254)] = 4819,
  [SMALL_STATE(255)] = 4830,
  [SMALL_STATE(256)] = 4843,
  [SMALL_STATE(257)] = 4856,
  [SMALL_STATE(258)] = 4869,
  [SMALL_STATE(259)] = 4882,
  [SMALL_STATE(260)] = 4895,
  [SMALL_STATE(261)] = 4908,
  [SMALL_STATE(262)] = 4921,
  [SMALL_STATE(263)] = 4934,
  [SMALL_STATE(264)] = 4947,
  [SMALL_STATE(265)] = 4960,
  [SMALL_STATE(266)] = 4971,
  [SMALL_STATE(267)] = 4982,
  [SMALL_STATE(268)] = 4995,
  [SMALL_STATE(269)] = 5008,
  [SMALL_STATE(270)] = 5019,
  [SMALL_STATE(271)] = 5030,
  [SMALL_STATE(272)] = 5043,
  [SMALL_STATE(273)] = 5054,
  [SMALL_STATE(274)] = 5065,
  [SMALL_STATE(275)] = 5076,
  [SMALL_STATE(276)] = 5086,
  [SMALL_STATE(277)] = 5096,
  [SMALL_STATE(278)] = 5109,
  [SMALL_STATE(279)] = 5122,
  [SMALL_STATE(280)] = 5135,
  [SMALL_STATE(281)] = 5145,
  [SMALL_STATE(282)] = 5153,
  [SMALL_STATE(283)] = 5161,
  [SMALL_STATE(284)] = 5169,
  [SMALL_STATE(285)] = 5179,
  [SMALL_STATE(286)] = 5189,
  [SMALL_STATE(287)] = 5199,
  [SMALL_STATE(288)] = 5209,
  [SMALL_STATE(289)] = 5219,
  [SMALL_STATE(290)] = 5229,
  [SMALL_STATE(291)] = 5239,
  [SMALL_STATE(292)] = 5249,
  [SMALL_STATE(293)] = 5259,
  [SMALL_STATE(294)] = 5269,
  [SMALL_STATE(295)] = 5279,
  [SMALL_STATE(296)] = 5289,
  [SMALL_STATE(297)] = 5299,
  [SMALL_STATE(298)] = 5309,
  [SMALL_STATE(299)] = 5319,
  [SMALL_STATE(300)] = 5329,
  [SMALL_STATE(301)] = 5339,
  [SMALL_STATE(302)] = 5349,
  [SMALL_STATE(303)] = 5359,
  [SMALL_STATE(304)] = 5369,
  [SMALL_STATE(305)] = 5379,
  [SMALL_STATE(306)] = 5389,
  [SMALL_STATE(307)] = 5399,
  [SMALL_STATE(308)] = 5409,
  [SMALL_STATE(309)] = 5419,
  [SMALL_STATE(310)] = 5429,
  [SMALL_STATE(311)] = 5439,
  [SMALL_STATE(312)] = 5449,
  [SMALL_STATE(313)] = 5459,
  [SMALL_STATE(314)] = 5469,
  [SMALL_STATE(315)] = 5479,
  [SMALL_STATE(316)] = 5489,
  [SMALL_STATE(317)] = 5499,
  [SMALL_STATE(318)] = 5509,
  [SMALL_STATE(319)] = 5519,
  [SMALL_STATE(320)] = 5529,
  [SMALL_STATE(321)] = 5537,
  [SMALL_STATE(322)] = 5547,
  [SMALL_STATE(323)] = 5555,
  [SMALL_STATE(324)] = 5565,
  [SMALL_STATE(325)] = 5575,
  [SMALL_STATE(326)] = 5585,
  [SMALL_STATE(327)] = 5595,
  [SMALL_STATE(328)] = 5605,
  [SMALL_STATE(329)] = 5615,
  [SMALL_STATE(330)] = 5625,
  [SMALL_STATE(331)] = 5632,
  [SMALL_STATE(332)] = 5639,
  [SMALL_STATE(333)] = 5646,
  [SMALL_STATE(334)] = 5653,
  [SMALL_STATE(335)] = 5660,
  [SMALL_STATE(336)] = 5667,
  [SMALL_STATE(337)] = 5674,
  [SMALL_STATE(338)] = 5681,
  [SMALL_STATE(339)] = 5688,
  [SMALL_STATE(340)] = 5695,
  [SMALL_STATE(341)] = 5702,
  [SMALL_STATE(342)] = 5709,
  [SMALL_STATE(343)] = 5716,
  [SMALL_STATE(344)] = 5723,
  [SMALL_STATE(345)] = 5730,
  [SMALL_STATE(346)] = 5737,
  [SMALL_STATE(347)] = 5744,
  [SMALL_STATE(348)] = 5751,
  [SMALL_STATE(349)] = 5758,
  [SMALL_STATE(350)] = 5765,
  [SMALL_STATE(351)] = 5772,
  [SMALL_STATE(352)] = 5779,
  [SMALL_STATE(353)] = 5786,
  [SMALL_STATE(354)] = 5793,
  [SMALL_STATE(355)] = 5800,
  [SMALL_STATE(356)] = 5807,
  [SMALL_STATE(357)] = 5814,
  [SMALL_STATE(358)] = 5821,
  [SMALL_STATE(359)] = 5828,
  [SMALL_STATE(360)] = 5835,
  [SMALL_STATE(361)] = 5842,
  [SMALL_STATE(362)] = 5849,
  [SMALL_STATE(363)] = 5856,
  [SMALL_STATE(364)] = 5863,
  [SMALL_STATE(365)] = 5870,
  [SMALL_STATE(366)] = 5877,
  [SMALL_STATE(367)] = 5884,
  [SMALL_STATE(368)] = 5891,
  [SMALL_STATE(369)] = 5898,
  [SMALL_STATE(370)] = 5905,
  [SMALL_STATE(371)] = 5912,
  [SMALL_STATE(372)] = 5919,
  [SMALL_STATE(373)] = 5926,
  [SMALL_STATE(374)] = 5933,
  [SMALL_STATE(375)] = 5940,
  [SMALL_STATE(376)] = 5947,
  [SMALL_STATE(377)] = 5954,
  [SMALL_STATE(378)] = 5961,
  [SMALL_STATE(379)] = 5968,
  [SMALL_STATE(380)] = 5975,
  [SMALL_STATE(381)] = 5982,
  [SMALL_STATE(382)] = 5989,
  [SMALL_STATE(383)] = 5996,
  [SMALL_STATE(384)] = 6003,
  [SMALL_STATE(385)] = 6010,
  [SMALL_STATE(386)] = 6017,
  [SMALL_STATE(387)] = 6024,
  [SMALL_STATE(388)] = 6031,
  [SMALL_STATE(389)] = 6038,
  [SMALL_STATE(390)] = 6045,
  [SMALL_STATE(391)] = 6052,
  [SMALL_STATE(392)] = 6059,
  [SMALL_STATE(393)] = 6066,
  [SMALL_STATE(394)] = 6073,
  [SMALL_STATE(395)] = 6080,
  [SMALL_STATE(396)] = 6087,
  [SMALL_STATE(397)] = 6094,
  [SMALL_STATE(398)] = 6101,
  [SMALL_STATE(399)] = 6108,
  [SMALL_STATE(400)] = 6115,
  [SMALL_STATE(401)] = 6122,
  [SMALL_STATE(402)] = 6129,
  [SMALL_STATE(403)] = 6136,
  [SMALL_STATE(404)] = 6143,
  [SMALL_STATE(405)] = 6150,
  [SMALL_STATE(406)] = 6157,
  [SMALL_STATE(407)] = 6164,
  [SMALL_STATE(408)] = 6171,
  [SMALL_STATE(409)] = 6178,
  [SMALL_STATE(410)] = 6185,
  [SMALL_STATE(411)] = 6192,
  [SMALL_STATE(412)] = 6199,
  [SMALL_STATE(413)] = 6206,
  [SMALL_STATE(414)] = 6213,
  [SMALL_STATE(415)] = 6220,
  [SMALL_STATE(416)] = 6227,
  [SMALL_STATE(417)] = 6234,
  [SMALL_STATE(418)] = 6241,
  [SMALL_STATE(419)] = 6248,
  [SMALL_STATE(420)] = 6255,
  [SMALL_STATE(421)] = 6262,
  [SMALL_STATE(422)] = 6269,
  [SMALL_STATE(423)] = 6276,
  [SMALL_STATE(424)] = 6283,
  [SMALL_STATE(425)] = 6290,
  [SMALL_STATE(426)] = 6297,
  [SMALL_STATE(427)] = 6304,
  [SMALL_STATE(428)] = 6311,
  [SMALL_STATE(429)] = 6318,
  [SMALL_STATE(430)] = 6325,
  [SMALL_STATE(431)] = 6332,
  [SMALL_STATE(432)] = 6339,
  [SMALL_STATE(433)] = 6346,
  [SMALL_STATE(434)] = 6353,
  [SMALL_STATE(435)] = 6360,
  [SMALL_STATE(436)] = 6367,
  [SMALL_STATE(437)] = 6374,
  [SMALL_STATE(438)] = 6381,
  [SMALL_STATE(439)] = 6388,
  [SMALL_STATE(440)] = 6395,
  [SMALL_STATE(441)] = 6402,
  [SMALL_STATE(442)] = 6409,
  [SMALL_STATE(443)] = 6416,
  [SMALL_STATE(444)] = 6423,
  [SMALL_STATE(445)] = 6430,
  [SMALL_STATE(446)] = 6437,
  [SMALL_STATE(447)] = 6444,
  [SMALL_STATE(448)] = 6451,
  [SMALL_STATE(449)] = 6458,
  [SMALL_STATE(450)] = 6465,
  [SMALL_STATE(451)] = 6472,
  [SMALL_STATE(452)] = 6479,
  [SMALL_STATE(453)] = 6486,
  [SMALL_STATE(454)] = 6493,
  [SMALL_STATE(455)] = 6500,
  [SMALL_STATE(456)] = 6507,
  [SMALL_STATE(457)] = 6514,
  [SMALL_STATE(458)] = 6521,
  [SMALL_STATE(459)] = 6528,
  [SMALL_STATE(460)] = 6535,
  [SMALL_STATE(461)] = 6542,
  [SMALL_STATE(462)] = 6549,
  [SMALL_STATE(463)] = 6556,
  [SMALL_STATE(464)] = 6563,
  [SMALL_STATE(465)] = 6570,
  [SMALL_STATE(466)] = 6577,
  [SMALL_STATE(467)] = 6584,
  [SMALL_STATE(468)] = 6591,
  [SMALL_STATE(469)] = 6598,
  [SMALL_STATE(470)] = 6605,
  [SMALL_STATE(471)] = 6612,
  [SMALL_STATE(472)] = 6619,
  [SMALL_STATE(473)] = 6626,
  [SMALL_STATE(474)] = 6633,
  [SMALL_STATE(475)] = 6640,
  [SMALL_STATE(476)] = 6647,
  [SMALL_STATE(477)] = 6654,
  [SMALL_STATE(478)] = 6661,
  [SMALL_STATE(479)] = 6668,
  [SMALL_STATE(480)] = 6675,
  [SMALL_STATE(481)] = 6682,
  [SMALL_STATE(482)] = 6689,
  [SMALL_STATE(483)] = 6696,
  [SMALL_STATE(484)] = 6703,
  [SMALL_STATE(485)] = 6710,
  [SMALL_STATE(486)] = 6717,
  [SMALL_STATE(487)] = 6724,
  [SMALL_STATE(488)] = 6731,
  [SMALL_STATE(489)] = 6738,
  [SMALL_STATE(490)] = 6745,
  [SMALL_STATE(491)] = 6752,
  [SMALL_STATE(492)] = 6759,
  [SMALL_STATE(493)] = 6766,
  [SMALL_STATE(494)] = 6773,
  [SMALL_STATE(495)] = 6780,
  [SMALL_STATE(496)] = 6787,
  [SMALL_STATE(497)] = 6794,
  [SMALL_STATE(498)] = 6801,
  [SMALL_STATE(499)] = 6808,
  [SMALL_STATE(500)] = 6815,
  [SMALL_STATE(501)] = 6822,
  [SMALL_STATE(502)] = 6829,
  [SMALL_STATE(503)] = 6836,
  [SMALL_STATE(504)] = 6843,
  [SMALL_STATE(505)] = 6850,
  [SMALL_STATE(506)] = 6857,
  [SMALL_STATE(507)] = 6864,
  [SMALL_STATE(508)] = 6871,
  [SMALL_STATE(509)] = 6878,
  [SMALL_STATE(510)] = 6885,
  [SMALL_STATE(511)] = 6892,
  [SMALL_STATE(512)] = 6899,
  [SMALL_STATE(513)] = 6906,
  [SMALL_STATE(514)] = 6913,
  [SMALL_STATE(515)] = 6920,
  [SMALL_STATE(516)] = 6927,
  [SMALL_STATE(517)] = 6934,
  [SMALL_STATE(518)] = 6941,
  [SMALL_STATE(519)] = 6948,
  [SMALL_STATE(520)] = 6955,
  [SMALL_STATE(521)] = 6962,
  [SMALL_STATE(522)] = 6969,
  [SMALL_STATE(523)] = 6976,
  [SMALL_STATE(524)] = 6983,
  [SMALL_STATE(525)] = 6990,
  [SMALL_STATE(526)] = 6997,
  [SMALL_STATE(527)] = 7004,
  [SMALL_STATE(528)] = 7011,
  [SMALL_STATE(529)] = 7018,
  [SMALL_STATE(530)] = 7025,
  [SMALL_STATE(531)] = 7032,
  [SMALL_STATE(532)] = 7039,
  [SMALL_STATE(533)] = 7046,
  [SMALL_STATE(534)] = 7053,
  [SMALL_STATE(535)] = 7060,
  [SMALL_STATE(536)] = 7067,
  [SMALL_STATE(537)] = 7074,
  [SMALL_STATE(538)] = 7081,
  [SMALL_STATE(539)] = 7088,
  [SMALL_STATE(540)] = 7095,
  [SMALL_STATE(541)] = 7102,
  [SMALL_STATE(542)] = 7109,
  [SMALL_STATE(543)] = 7116,
  [SMALL_STATE(544)] = 7123,
  [SMALL_STATE(545)] = 7130,
  [SMALL_STATE(546)] = 7137,
  [SMALL_STATE(547)] = 7144,
  [SMALL_STATE(548)] = 7151,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(486),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(484),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(480),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(479),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(476),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(468),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(466),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(463),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 6, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 6, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 7, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 7, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 4, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 4, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 5, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 5, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 4, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defattr, 9, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defattr, 9, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_expansion, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_expansion, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 4, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 4, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prep_scriptlet, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prep_scriptlet, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_buildrequires, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate_buildrequires, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_with_newlines, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_with_newlines, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog_entry, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog_entry, 3, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog_entry, 4, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog_entry, 4, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expansion, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expansion, 2, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog, 2, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog, 2, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changelog_entry_repeat1, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changelog_entry_repeat1, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_expansion, 2, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_expansion, 2, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 6, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 6, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 4, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 4, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 5, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 5, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_buildrequires, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate_buildrequires, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clean_scriptlet, 2, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clean_scriptlet, 2, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 10),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 10),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 9),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 9),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_invocation, 3, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_invocation, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_install_scriptlet, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_install_scriptlet, 2, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_scriptlet, 2, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_scriptlet, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conf_scriptlet, 2, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conf_scriptlet, 2, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection, 2, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection, 2, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 11),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 11),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 8),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 8),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 12),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, 0, 12),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 7),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 7),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 3),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 5),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_description, 4, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_description, 4, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_undefinition, 3, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_undefinition, 3, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prep_scriptlet, 3, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prep_scriptlet, 3, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_scriptlet, 2, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_scriptlet, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 5, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 5, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 4, 0, 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags, 4, 0, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 4, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 4, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 5, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 5, 0, 0),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_package, 4, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(547),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(548),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(117),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(415),
  [610] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(138),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(288),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(422),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 8, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value, 2, 0, 0),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(124),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(390),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(135),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(294),
  [645] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(391),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verify_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_repeat1, 2, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [677] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(415),
  [680] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [686] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(422),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [697] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [700] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [703] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [706] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [730] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [733] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [736] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(416),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [741] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [744] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [747] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(410),
  [753] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(317),
  [756] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [759] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [762] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_clause, 4, 0, 5),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0), SHIFT_REPEAT(459),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 4),
  [815] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 4), SHIFT_REPEAT(342),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 4), SHIFT_REPEAT(342),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runtime_scriptlet, 1, 0, 0),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__runtime_scriptlet, 1, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_options, 2, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 3, 0, 6),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, 0, 1),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, 0, 1),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_clause, 4, 0, 5),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verify, 3, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verify, 4, 0, 0),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_tag, 1, 0, 0),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_tag, 4, 0, 0),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1, 0, 0),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 3, 0, 6),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_word, 1, 0, 0),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1299] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [1365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [1375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
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
