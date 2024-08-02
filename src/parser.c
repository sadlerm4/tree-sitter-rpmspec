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
    [anon_sym_PERCENT] = ACTIONS(285),
    [sym_string_content] = ACTIONS(287),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(289),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(291),
  },
  [20] = {
    [sym_string_with_newlines] = STATE(61),
    [sym__macro_expansion] = STATE(24),
    [sym_simple_expansion] = STATE(24),
    [sym_full_expansion] = STATE(24),
    [sym_shell_expansion] = STATE(24),
    [aux_sym_string_with_newlines_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(293),
    [aux_sym__simple_statements_token1] = ACTIONS(295),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(295),
    [anon_sym_PERCENTifarch] = ACTIONS(295),
    [anon_sym_PERCENTifos] = ACTIONS(295),
    [anon_sym_PERCENTifnarch] = ACTIONS(295),
    [anon_sym_PERCENTifnos] = ACTIONS(295),
    [anon_sym_AutoProv] = ACTIONS(295),
    [anon_sym_AutoReq] = ACTIONS(295),
    [anon_sym_AutoReqProv] = ACTIONS(295),
    [anon_sym_BugUrl] = ACTIONS(295),
    [anon_sym_BuildRoot] = ACTIONS(295),
    [anon_sym_BuildSystem] = ACTIONS(295),
    [anon_sym_DistTag] = ACTIONS(295),
    [anon_sym_Distribution] = ACTIONS(295),
    [anon_sym_Epoch] = ACTIONS(295),
    [anon_sym_Group] = ACTIONS(295),
    [anon_sym_License] = ACTIONS(295),
    [anon_sym_ModularityLabel] = ACTIONS(295),
    [anon_sym_Name] = ACTIONS(295),
    [anon_sym_NoPatch] = ACTIONS(295),
    [anon_sym_NoSource] = ACTIONS(295),
    [anon_sym_Packager] = ACTIONS(295),
    [anon_sym_Release] = ACTIONS(295),
    [anon_sym_SourceLicense] = ACTIONS(295),
    [anon_sym_Summary] = ACTIONS(295),
    [anon_sym_URL] = ACTIONS(295),
    [anon_sym_Url] = ACTIONS(295),
    [anon_sym_VCS] = ACTIONS(295),
    [anon_sym_Vendor] = ACTIONS(295),
    [anon_sym_Version] = ACTIONS(295),
    [aux_sym_tag_token1] = ACTIONS(295),
    [aux_sym_tag_token2] = ACTIONS(295),
    [anon_sym_Requires] = ACTIONS(295),
    [anon_sym_BuildArch] = ACTIONS(295),
    [anon_sym_BuildArchitectures] = ACTIONS(295),
    [anon_sym_BuildConflicts] = ACTIONS(295),
    [anon_sym_BuildPrereq] = ACTIONS(295),
    [anon_sym_BuildRequires] = ACTIONS(295),
    [anon_sym_Conflicts] = ACTIONS(295),
    [anon_sym_DocDir] = ACTIONS(295),
    [anon_sym_Enhances] = ACTIONS(295),
    [anon_sym_ExcludeArch] = ACTIONS(295),
    [anon_sym_ExcludeOS] = ACTIONS(295),
    [anon_sym_ExclusiveArch] = ACTIONS(295),
    [anon_sym_ExclusiveOS] = ACTIONS(295),
    [anon_sym_Obsoletes] = ACTIONS(295),
    [anon_sym_OrderWithRequires] = ACTIONS(295),
    [anon_sym_Prefix] = ACTIONS(295),
    [anon_sym_Prefixes] = ACTIONS(295),
    [anon_sym_Prereq] = ACTIONS(295),
    [anon_sym_Provides] = ACTIONS(295),
    [anon_sym_Recommends] = ACTIONS(295),
    [anon_sym_RemovePathPostfixes] = ACTIONS(295),
    [anon_sym_Suggests] = ACTIONS(295),
    [anon_sym_Supplements] = ACTIONS(295),
    [anon_sym_PERCENTdescription] = ACTIONS(295),
    [anon_sym_PERCENTpackage] = ACTIONS(295),
    [anon_sym_PERCENTprep] = ACTIONS(295),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(295),
    [anon_sym_PERCENTconf] = ACTIONS(295),
    [anon_sym_PERCENTbuild] = ACTIONS(295),
    [anon_sym_PERCENTinstall] = ACTIONS(295),
    [anon_sym_PERCENTcheck] = ACTIONS(295),
    [anon_sym_PERCENTclean] = ACTIONS(295),
    [anon_sym_PERCENTpre] = ACTIONS(295),
    [anon_sym_PERCENTpost] = ACTIONS(295),
    [anon_sym_PERCENTpreun] = ACTIONS(295),
    [anon_sym_PERCENTpostun] = ACTIONS(295),
    [anon_sym_PERCENTpretrans] = ACTIONS(295),
    [anon_sym_PERCENTposttrans] = ACTIONS(295),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(295),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(295),
    [anon_sym_PERCENTverify] = ACTIONS(295),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(295),
    [anon_sym_PERCENTtriggerin] = ACTIONS(295),
    [anon_sym_PERCENTtriggerun] = ACTIONS(295),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(295),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(295),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(295),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(295),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(295),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(295),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(295),
    [anon_sym_PERCENTfiles] = ACTIONS(295),
    [anon_sym_PERCENTchangelog] = ACTIONS(295),
    [anon_sym_PERCENTglobal] = ACTIONS(295),
    [anon_sym_PERCENTdefine] = ACTIONS(295),
    [anon_sym_PERCENTundefine] = ACTIONS(295),
    [anon_sym_PERCENT] = ACTIONS(297),
    [sym_string_content_with_newlines] = ACTIONS(299),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(301),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(303),
  },
  [21] = {
    [sym_string_with_newlines] = STATE(72),
    [sym__macro_expansion] = STATE(24),
    [sym_simple_expansion] = STATE(24),
    [sym_full_expansion] = STATE(24),
    [sym_shell_expansion] = STATE(24),
    [aux_sym_string_with_newlines_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(305),
    [aux_sym__simple_statements_token1] = ACTIONS(307),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(307),
    [anon_sym_PERCENTifarch] = ACTIONS(307),
    [anon_sym_PERCENTifos] = ACTIONS(307),
    [anon_sym_PERCENTifnarch] = ACTIONS(307),
    [anon_sym_PERCENTifnos] = ACTIONS(307),
    [anon_sym_AutoProv] = ACTIONS(307),
    [anon_sym_AutoReq] = ACTIONS(307),
    [anon_sym_AutoReqProv] = ACTIONS(307),
    [anon_sym_BugUrl] = ACTIONS(307),
    [anon_sym_BuildRoot] = ACTIONS(307),
    [anon_sym_BuildSystem] = ACTIONS(307),
    [anon_sym_DistTag] = ACTIONS(307),
    [anon_sym_Distribution] = ACTIONS(307),
    [anon_sym_Epoch] = ACTIONS(307),
    [anon_sym_Group] = ACTIONS(307),
    [anon_sym_License] = ACTIONS(307),
    [anon_sym_ModularityLabel] = ACTIONS(307),
    [anon_sym_Name] = ACTIONS(307),
    [anon_sym_NoPatch] = ACTIONS(307),
    [anon_sym_NoSource] = ACTIONS(307),
    [anon_sym_Packager] = ACTIONS(307),
    [anon_sym_Release] = ACTIONS(307),
    [anon_sym_SourceLicense] = ACTIONS(307),
    [anon_sym_Summary] = ACTIONS(307),
    [anon_sym_URL] = ACTIONS(307),
    [anon_sym_Url] = ACTIONS(307),
    [anon_sym_VCS] = ACTIONS(307),
    [anon_sym_Vendor] = ACTIONS(307),
    [anon_sym_Version] = ACTIONS(307),
    [aux_sym_tag_token1] = ACTIONS(307),
    [aux_sym_tag_token2] = ACTIONS(307),
    [anon_sym_Requires] = ACTIONS(307),
    [anon_sym_BuildArch] = ACTIONS(307),
    [anon_sym_BuildArchitectures] = ACTIONS(307),
    [anon_sym_BuildConflicts] = ACTIONS(307),
    [anon_sym_BuildPrereq] = ACTIONS(307),
    [anon_sym_BuildRequires] = ACTIONS(307),
    [anon_sym_Conflicts] = ACTIONS(307),
    [anon_sym_DocDir] = ACTIONS(307),
    [anon_sym_Enhances] = ACTIONS(307),
    [anon_sym_ExcludeArch] = ACTIONS(307),
    [anon_sym_ExcludeOS] = ACTIONS(307),
    [anon_sym_ExclusiveArch] = ACTIONS(307),
    [anon_sym_ExclusiveOS] = ACTIONS(307),
    [anon_sym_Obsoletes] = ACTIONS(307),
    [anon_sym_OrderWithRequires] = ACTIONS(307),
    [anon_sym_Prefix] = ACTIONS(307),
    [anon_sym_Prefixes] = ACTIONS(307),
    [anon_sym_Prereq] = ACTIONS(307),
    [anon_sym_Provides] = ACTIONS(307),
    [anon_sym_Recommends] = ACTIONS(307),
    [anon_sym_RemovePathPostfixes] = ACTIONS(307),
    [anon_sym_Suggests] = ACTIONS(307),
    [anon_sym_Supplements] = ACTIONS(307),
    [anon_sym_PERCENTdescription] = ACTIONS(307),
    [anon_sym_PERCENTpackage] = ACTIONS(307),
    [anon_sym_PERCENTprep] = ACTIONS(307),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(307),
    [anon_sym_PERCENTconf] = ACTIONS(307),
    [anon_sym_PERCENTbuild] = ACTIONS(307),
    [anon_sym_PERCENTinstall] = ACTIONS(307),
    [anon_sym_PERCENTcheck] = ACTIONS(307),
    [anon_sym_PERCENTclean] = ACTIONS(307),
    [anon_sym_PERCENTpre] = ACTIONS(307),
    [anon_sym_PERCENTpost] = ACTIONS(307),
    [anon_sym_PERCENTpreun] = ACTIONS(307),
    [anon_sym_PERCENTpostun] = ACTIONS(307),
    [anon_sym_PERCENTpretrans] = ACTIONS(307),
    [anon_sym_PERCENTposttrans] = ACTIONS(307),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(307),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(307),
    [anon_sym_PERCENTverify] = ACTIONS(307),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(307),
    [anon_sym_PERCENTtriggerin] = ACTIONS(307),
    [anon_sym_PERCENTtriggerun] = ACTIONS(307),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(307),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(307),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(307),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(307),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(307),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(307),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(307),
    [anon_sym_PERCENTfiles] = ACTIONS(307),
    [anon_sym_PERCENTchangelog] = ACTIONS(307),
    [anon_sym_PERCENTglobal] = ACTIONS(307),
    [anon_sym_PERCENTdefine] = ACTIONS(307),
    [anon_sym_PERCENTundefine] = ACTIONS(307),
    [anon_sym_PERCENT] = ACTIONS(297),
    [sym_string_content_with_newlines] = ACTIONS(299),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(301),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(303),
  },
  [22] = {
    [sym_string_with_newlines] = STATE(65),
    [sym__macro_expansion] = STATE(24),
    [sym_simple_expansion] = STATE(24),
    [sym_full_expansion] = STATE(24),
    [sym_shell_expansion] = STATE(24),
    [aux_sym_string_with_newlines_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(309),
    [aux_sym__simple_statements_token1] = ACTIONS(311),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(311),
    [anon_sym_PERCENTifarch] = ACTIONS(311),
    [anon_sym_PERCENTifos] = ACTIONS(311),
    [anon_sym_PERCENTifnarch] = ACTIONS(311),
    [anon_sym_PERCENTifnos] = ACTIONS(311),
    [anon_sym_AutoProv] = ACTIONS(311),
    [anon_sym_AutoReq] = ACTIONS(311),
    [anon_sym_AutoReqProv] = ACTIONS(311),
    [anon_sym_BugUrl] = ACTIONS(311),
    [anon_sym_BuildRoot] = ACTIONS(311),
    [anon_sym_BuildSystem] = ACTIONS(311),
    [anon_sym_DistTag] = ACTIONS(311),
    [anon_sym_Distribution] = ACTIONS(311),
    [anon_sym_Epoch] = ACTIONS(311),
    [anon_sym_Group] = ACTIONS(311),
    [anon_sym_License] = ACTIONS(311),
    [anon_sym_ModularityLabel] = ACTIONS(311),
    [anon_sym_Name] = ACTIONS(311),
    [anon_sym_NoPatch] = ACTIONS(311),
    [anon_sym_NoSource] = ACTIONS(311),
    [anon_sym_Packager] = ACTIONS(311),
    [anon_sym_Release] = ACTIONS(311),
    [anon_sym_SourceLicense] = ACTIONS(311),
    [anon_sym_Summary] = ACTIONS(311),
    [anon_sym_URL] = ACTIONS(311),
    [anon_sym_Url] = ACTIONS(311),
    [anon_sym_VCS] = ACTIONS(311),
    [anon_sym_Vendor] = ACTIONS(311),
    [anon_sym_Version] = ACTIONS(311),
    [aux_sym_tag_token1] = ACTIONS(311),
    [aux_sym_tag_token2] = ACTIONS(311),
    [anon_sym_Requires] = ACTIONS(311),
    [anon_sym_BuildArch] = ACTIONS(311),
    [anon_sym_BuildArchitectures] = ACTIONS(311),
    [anon_sym_BuildConflicts] = ACTIONS(311),
    [anon_sym_BuildPrereq] = ACTIONS(311),
    [anon_sym_BuildRequires] = ACTIONS(311),
    [anon_sym_Conflicts] = ACTIONS(311),
    [anon_sym_DocDir] = ACTIONS(311),
    [anon_sym_Enhances] = ACTIONS(311),
    [anon_sym_ExcludeArch] = ACTIONS(311),
    [anon_sym_ExcludeOS] = ACTIONS(311),
    [anon_sym_ExclusiveArch] = ACTIONS(311),
    [anon_sym_ExclusiveOS] = ACTIONS(311),
    [anon_sym_Obsoletes] = ACTIONS(311),
    [anon_sym_OrderWithRequires] = ACTIONS(311),
    [anon_sym_Prefix] = ACTIONS(311),
    [anon_sym_Prefixes] = ACTIONS(311),
    [anon_sym_Prereq] = ACTIONS(311),
    [anon_sym_Provides] = ACTIONS(311),
    [anon_sym_Recommends] = ACTIONS(311),
    [anon_sym_RemovePathPostfixes] = ACTIONS(311),
    [anon_sym_Suggests] = ACTIONS(311),
    [anon_sym_Supplements] = ACTIONS(311),
    [anon_sym_PERCENTdescription] = ACTIONS(311),
    [anon_sym_PERCENTpackage] = ACTIONS(311),
    [anon_sym_PERCENTprep] = ACTIONS(311),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(311),
    [anon_sym_PERCENTconf] = ACTIONS(311),
    [anon_sym_PERCENTbuild] = ACTIONS(311),
    [anon_sym_PERCENTinstall] = ACTIONS(311),
    [anon_sym_PERCENTcheck] = ACTIONS(311),
    [anon_sym_PERCENTclean] = ACTIONS(311),
    [anon_sym_PERCENTpre] = ACTIONS(311),
    [anon_sym_PERCENTpost] = ACTIONS(311),
    [anon_sym_PERCENTpreun] = ACTIONS(311),
    [anon_sym_PERCENTpostun] = ACTIONS(311),
    [anon_sym_PERCENTpretrans] = ACTIONS(311),
    [anon_sym_PERCENTposttrans] = ACTIONS(311),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(311),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(311),
    [anon_sym_PERCENTverify] = ACTIONS(311),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(311),
    [anon_sym_PERCENTtriggerin] = ACTIONS(311),
    [anon_sym_PERCENTtriggerun] = ACTIONS(311),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(311),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(311),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(311),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(311),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(311),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(311),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(311),
    [anon_sym_PERCENTfiles] = ACTIONS(311),
    [anon_sym_PERCENTchangelog] = ACTIONS(311),
    [anon_sym_PERCENTglobal] = ACTIONS(311),
    [anon_sym_PERCENTdefine] = ACTIONS(311),
    [anon_sym_PERCENTundefine] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(297),
    [sym_string_content_with_newlines] = ACTIONS(299),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(301),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(303),
  },
  [23] = {
    [sym_string_with_newlines] = STATE(42),
    [sym__macro_expansion] = STATE(24),
    [sym_simple_expansion] = STATE(24),
    [sym_full_expansion] = STATE(24),
    [sym_shell_expansion] = STATE(24),
    [aux_sym_string_with_newlines_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(313),
    [aux_sym__simple_statements_token1] = ACTIONS(315),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(315),
    [anon_sym_PERCENTifarch] = ACTIONS(315),
    [anon_sym_PERCENTifos] = ACTIONS(315),
    [anon_sym_PERCENTifnarch] = ACTIONS(315),
    [anon_sym_PERCENTifnos] = ACTIONS(315),
    [anon_sym_AutoProv] = ACTIONS(315),
    [anon_sym_AutoReq] = ACTIONS(315),
    [anon_sym_AutoReqProv] = ACTIONS(315),
    [anon_sym_BugUrl] = ACTIONS(315),
    [anon_sym_BuildRoot] = ACTIONS(315),
    [anon_sym_BuildSystem] = ACTIONS(315),
    [anon_sym_DistTag] = ACTIONS(315),
    [anon_sym_Distribution] = ACTIONS(315),
    [anon_sym_Epoch] = ACTIONS(315),
    [anon_sym_Group] = ACTIONS(315),
    [anon_sym_License] = ACTIONS(315),
    [anon_sym_ModularityLabel] = ACTIONS(315),
    [anon_sym_Name] = ACTIONS(315),
    [anon_sym_NoPatch] = ACTIONS(315),
    [anon_sym_NoSource] = ACTIONS(315),
    [anon_sym_Packager] = ACTIONS(315),
    [anon_sym_Release] = ACTIONS(315),
    [anon_sym_SourceLicense] = ACTIONS(315),
    [anon_sym_Summary] = ACTIONS(315),
    [anon_sym_URL] = ACTIONS(315),
    [anon_sym_Url] = ACTIONS(315),
    [anon_sym_VCS] = ACTIONS(315),
    [anon_sym_Vendor] = ACTIONS(315),
    [anon_sym_Version] = ACTIONS(315),
    [aux_sym_tag_token1] = ACTIONS(315),
    [aux_sym_tag_token2] = ACTIONS(315),
    [anon_sym_Requires] = ACTIONS(315),
    [anon_sym_BuildArch] = ACTIONS(315),
    [anon_sym_BuildArchitectures] = ACTIONS(315),
    [anon_sym_BuildConflicts] = ACTIONS(315),
    [anon_sym_BuildPrereq] = ACTIONS(315),
    [anon_sym_BuildRequires] = ACTIONS(315),
    [anon_sym_Conflicts] = ACTIONS(315),
    [anon_sym_DocDir] = ACTIONS(315),
    [anon_sym_Enhances] = ACTIONS(315),
    [anon_sym_ExcludeArch] = ACTIONS(315),
    [anon_sym_ExcludeOS] = ACTIONS(315),
    [anon_sym_ExclusiveArch] = ACTIONS(315),
    [anon_sym_ExclusiveOS] = ACTIONS(315),
    [anon_sym_Obsoletes] = ACTIONS(315),
    [anon_sym_OrderWithRequires] = ACTIONS(315),
    [anon_sym_Prefix] = ACTIONS(315),
    [anon_sym_Prefixes] = ACTIONS(315),
    [anon_sym_Prereq] = ACTIONS(315),
    [anon_sym_Provides] = ACTIONS(315),
    [anon_sym_Recommends] = ACTIONS(315),
    [anon_sym_RemovePathPostfixes] = ACTIONS(315),
    [anon_sym_Suggests] = ACTIONS(315),
    [anon_sym_Supplements] = ACTIONS(315),
    [anon_sym_PERCENTdescription] = ACTIONS(315),
    [anon_sym_PERCENTpackage] = ACTIONS(315),
    [anon_sym_PERCENTprep] = ACTIONS(315),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(315),
    [anon_sym_PERCENTconf] = ACTIONS(315),
    [anon_sym_PERCENTbuild] = ACTIONS(315),
    [anon_sym_PERCENTinstall] = ACTIONS(315),
    [anon_sym_PERCENTcheck] = ACTIONS(315),
    [anon_sym_PERCENTclean] = ACTIONS(315),
    [anon_sym_PERCENTpre] = ACTIONS(315),
    [anon_sym_PERCENTpost] = ACTIONS(315),
    [anon_sym_PERCENTpreun] = ACTIONS(315),
    [anon_sym_PERCENTpostun] = ACTIONS(315),
    [anon_sym_PERCENTpretrans] = ACTIONS(315),
    [anon_sym_PERCENTposttrans] = ACTIONS(315),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(315),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(315),
    [anon_sym_PERCENTverify] = ACTIONS(315),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(315),
    [anon_sym_PERCENTtriggerin] = ACTIONS(315),
    [anon_sym_PERCENTtriggerun] = ACTIONS(315),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(315),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(315),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(315),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(315),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(315),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(315),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(315),
    [anon_sym_PERCENTfiles] = ACTIONS(315),
    [anon_sym_PERCENTchangelog] = ACTIONS(315),
    [anon_sym_PERCENTglobal] = ACTIONS(315),
    [anon_sym_PERCENTdefine] = ACTIONS(315),
    [anon_sym_PERCENTundefine] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(297),
    [sym_string_content_with_newlines] = ACTIONS(299),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(301),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(303),
  },
  [24] = {
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
    [anon_sym_PERCENT] = ACTIONS(297),
    [sym_string_content_with_newlines] = ACTIONS(321),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(301),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(303),
  },
  [25] = {
    [sym__macro_expansion] = STATE(25),
    [sym_simple_expansion] = STATE(25),
    [sym_full_expansion] = STATE(25),
    [sym_shell_expansion] = STATE(25),
    [aux_sym_string_with_newlines_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(323),
    [aux_sym__simple_statements_token1] = ACTIONS(325),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(325),
    [anon_sym_PERCENTifarch] = ACTIONS(325),
    [anon_sym_PERCENTifos] = ACTIONS(325),
    [anon_sym_PERCENTifnarch] = ACTIONS(325),
    [anon_sym_PERCENTifnos] = ACTIONS(325),
    [anon_sym_AutoProv] = ACTIONS(325),
    [anon_sym_AutoReq] = ACTIONS(325),
    [anon_sym_AutoReqProv] = ACTIONS(325),
    [anon_sym_BugUrl] = ACTIONS(325),
    [anon_sym_BuildRoot] = ACTIONS(325),
    [anon_sym_BuildSystem] = ACTIONS(325),
    [anon_sym_DistTag] = ACTIONS(325),
    [anon_sym_Distribution] = ACTIONS(325),
    [anon_sym_Epoch] = ACTIONS(325),
    [anon_sym_Group] = ACTIONS(325),
    [anon_sym_License] = ACTIONS(325),
    [anon_sym_ModularityLabel] = ACTIONS(325),
    [anon_sym_Name] = ACTIONS(325),
    [anon_sym_NoPatch] = ACTIONS(325),
    [anon_sym_NoSource] = ACTIONS(325),
    [anon_sym_Packager] = ACTIONS(325),
    [anon_sym_Release] = ACTIONS(325),
    [anon_sym_SourceLicense] = ACTIONS(325),
    [anon_sym_Summary] = ACTIONS(325),
    [anon_sym_URL] = ACTIONS(325),
    [anon_sym_Url] = ACTIONS(325),
    [anon_sym_VCS] = ACTIONS(325),
    [anon_sym_Vendor] = ACTIONS(325),
    [anon_sym_Version] = ACTIONS(325),
    [aux_sym_tag_token1] = ACTIONS(325),
    [aux_sym_tag_token2] = ACTIONS(325),
    [anon_sym_Requires] = ACTIONS(325),
    [anon_sym_BuildArch] = ACTIONS(325),
    [anon_sym_BuildArchitectures] = ACTIONS(325),
    [anon_sym_BuildConflicts] = ACTIONS(325),
    [anon_sym_BuildPrereq] = ACTIONS(325),
    [anon_sym_BuildRequires] = ACTIONS(325),
    [anon_sym_Conflicts] = ACTIONS(325),
    [anon_sym_DocDir] = ACTIONS(325),
    [anon_sym_Enhances] = ACTIONS(325),
    [anon_sym_ExcludeArch] = ACTIONS(325),
    [anon_sym_ExcludeOS] = ACTIONS(325),
    [anon_sym_ExclusiveArch] = ACTIONS(325),
    [anon_sym_ExclusiveOS] = ACTIONS(325),
    [anon_sym_Obsoletes] = ACTIONS(325),
    [anon_sym_OrderWithRequires] = ACTIONS(325),
    [anon_sym_Prefix] = ACTIONS(325),
    [anon_sym_Prefixes] = ACTIONS(325),
    [anon_sym_Prereq] = ACTIONS(325),
    [anon_sym_Provides] = ACTIONS(325),
    [anon_sym_Recommends] = ACTIONS(325),
    [anon_sym_RemovePathPostfixes] = ACTIONS(325),
    [anon_sym_Suggests] = ACTIONS(325),
    [anon_sym_Supplements] = ACTIONS(325),
    [anon_sym_PERCENTdescription] = ACTIONS(325),
    [anon_sym_PERCENTpackage] = ACTIONS(325),
    [anon_sym_PERCENTprep] = ACTIONS(325),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(325),
    [anon_sym_PERCENTconf] = ACTIONS(325),
    [anon_sym_PERCENTbuild] = ACTIONS(325),
    [anon_sym_PERCENTinstall] = ACTIONS(325),
    [anon_sym_PERCENTcheck] = ACTIONS(325),
    [anon_sym_PERCENTclean] = ACTIONS(325),
    [anon_sym_PERCENTpre] = ACTIONS(325),
    [anon_sym_PERCENTpost] = ACTIONS(325),
    [anon_sym_PERCENTpreun] = ACTIONS(325),
    [anon_sym_PERCENTpostun] = ACTIONS(325),
    [anon_sym_PERCENTpretrans] = ACTIONS(325),
    [anon_sym_PERCENTposttrans] = ACTIONS(325),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(325),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(325),
    [anon_sym_PERCENTverify] = ACTIONS(325),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(325),
    [anon_sym_PERCENTtriggerin] = ACTIONS(325),
    [anon_sym_PERCENTtriggerun] = ACTIONS(325),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(325),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(325),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(325),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(325),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(325),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(325),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(325),
    [anon_sym_PERCENTfiles] = ACTIONS(325),
    [anon_sym_PERCENTchangelog] = ACTIONS(325),
    [anon_sym_PERCENTglobal] = ACTIONS(325),
    [anon_sym_PERCENTdefine] = ACTIONS(325),
    [anon_sym_PERCENTundefine] = ACTIONS(325),
    [anon_sym_PERCENT] = ACTIONS(327),
    [sym_string_content_with_newlines] = ACTIONS(330),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(333),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(336),
  },
  [26] = {
    [sym_changelog_entry] = STATE(26),
    [aux_sym_changelog_repeat1] = STATE(26),
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
  [27] = {
    [aux_sym_changelog_entry_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(346),
    [aux_sym__simple_statements_token1] = ACTIONS(346),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(348),
    [anon_sym_PERCENTifarch] = ACTIONS(348),
    [anon_sym_PERCENTifos] = ACTIONS(348),
    [anon_sym_PERCENTifnarch] = ACTIONS(348),
    [anon_sym_PERCENTifnos] = ACTIONS(348),
    [anon_sym_AutoProv] = ACTIONS(348),
    [anon_sym_AutoReq] = ACTIONS(348),
    [anon_sym_AutoReqProv] = ACTIONS(348),
    [anon_sym_BugUrl] = ACTIONS(348),
    [anon_sym_BuildRoot] = ACTIONS(348),
    [anon_sym_BuildSystem] = ACTIONS(348),
    [anon_sym_DistTag] = ACTIONS(348),
    [anon_sym_Distribution] = ACTIONS(348),
    [anon_sym_Epoch] = ACTIONS(348),
    [anon_sym_Group] = ACTIONS(348),
    [anon_sym_License] = ACTIONS(348),
    [anon_sym_ModularityLabel] = ACTIONS(348),
    [anon_sym_Name] = ACTIONS(348),
    [anon_sym_NoPatch] = ACTIONS(348),
    [anon_sym_NoSource] = ACTIONS(348),
    [anon_sym_Packager] = ACTIONS(348),
    [anon_sym_Release] = ACTIONS(348),
    [anon_sym_SourceLicense] = ACTIONS(348),
    [anon_sym_Summary] = ACTIONS(348),
    [anon_sym_URL] = ACTIONS(348),
    [anon_sym_Url] = ACTIONS(348),
    [anon_sym_VCS] = ACTIONS(348),
    [anon_sym_Vendor] = ACTIONS(348),
    [anon_sym_Version] = ACTIONS(348),
    [aux_sym_tag_token1] = ACTIONS(348),
    [aux_sym_tag_token2] = ACTIONS(348),
    [anon_sym_Requires] = ACTIONS(348),
    [anon_sym_BuildArch] = ACTIONS(348),
    [anon_sym_BuildArchitectures] = ACTIONS(348),
    [anon_sym_BuildConflicts] = ACTIONS(348),
    [anon_sym_BuildPrereq] = ACTIONS(348),
    [anon_sym_BuildRequires] = ACTIONS(348),
    [anon_sym_Conflicts] = ACTIONS(348),
    [anon_sym_DocDir] = ACTIONS(348),
    [anon_sym_Enhances] = ACTIONS(348),
    [anon_sym_ExcludeArch] = ACTIONS(348),
    [anon_sym_ExcludeOS] = ACTIONS(348),
    [anon_sym_ExclusiveArch] = ACTIONS(348),
    [anon_sym_ExclusiveOS] = ACTIONS(348),
    [anon_sym_Obsoletes] = ACTIONS(348),
    [anon_sym_OrderWithRequires] = ACTIONS(348),
    [anon_sym_Prefix] = ACTIONS(348),
    [anon_sym_Prefixes] = ACTIONS(348),
    [anon_sym_Prereq] = ACTIONS(348),
    [anon_sym_Provides] = ACTIONS(348),
    [anon_sym_Recommends] = ACTIONS(348),
    [anon_sym_RemovePathPostfixes] = ACTIONS(348),
    [anon_sym_Suggests] = ACTIONS(348),
    [anon_sym_Supplements] = ACTIONS(348),
    [anon_sym_PERCENTdescription] = ACTIONS(348),
    [anon_sym_PERCENTpackage] = ACTIONS(348),
    [anon_sym_PERCENTprep] = ACTIONS(348),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(348),
    [anon_sym_PERCENTconf] = ACTIONS(348),
    [anon_sym_PERCENTbuild] = ACTIONS(348),
    [anon_sym_PERCENTinstall] = ACTIONS(348),
    [anon_sym_PERCENTcheck] = ACTIONS(348),
    [anon_sym_PERCENTclean] = ACTIONS(348),
    [anon_sym_PERCENTpre] = ACTIONS(348),
    [anon_sym_PERCENTpost] = ACTIONS(348),
    [anon_sym_PERCENTpreun] = ACTIONS(348),
    [anon_sym_PERCENTpostun] = ACTIONS(348),
    [anon_sym_PERCENTpretrans] = ACTIONS(348),
    [anon_sym_PERCENTposttrans] = ACTIONS(348),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(348),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(348),
    [anon_sym_PERCENTverify] = ACTIONS(348),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(348),
    [anon_sym_PERCENTtriggerin] = ACTIONS(348),
    [anon_sym_PERCENTtriggerun] = ACTIONS(348),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(348),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(348),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(348),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(348),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(348),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(348),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(348),
    [anon_sym_PERCENTfiles] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(350),
    [anon_sym_PERCENTchangelog] = ACTIONS(348),
    [anon_sym_STAR] = ACTIONS(348),
    [anon_sym_PERCENTglobal] = ACTIONS(348),
    [anon_sym_PERCENTdefine] = ACTIONS(348),
    [anon_sym_PERCENTundefine] = ACTIONS(348),
    [anon_sym_PERCENT] = ACTIONS(348),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(348),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(348),
  },
  [28] = {
    [aux_sym_changelog_entry_repeat1] = STATE(30),
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
    [anon_sym_DASH] = ACTIONS(357),
    [anon_sym_PERCENTchangelog] = ACTIONS(355),
    [anon_sym_STAR] = ACTIONS(355),
    [anon_sym_PERCENTglobal] = ACTIONS(355),
    [anon_sym_PERCENTdefine] = ACTIONS(355),
    [anon_sym_PERCENTundefine] = ACTIONS(355),
    [anon_sym_PERCENT] = ACTIONS(355),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(355),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(355),
  },
  [29] = {
    [sym_changelog_entry] = STATE(26),
    [aux_sym_changelog_repeat1] = STATE(26),
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
    [anon_sym_PERCENTchangelog] = ACTIONS(361),
    [anon_sym_STAR] = ACTIONS(363),
    [anon_sym_PERCENTglobal] = ACTIONS(361),
    [anon_sym_PERCENTdefine] = ACTIONS(361),
    [anon_sym_PERCENTundefine] = ACTIONS(361),
    [anon_sym_PERCENT] = ACTIONS(361),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(361),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(361),
  },
  [30] = {
    [aux_sym_changelog_entry_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(365),
    [aux_sym__simple_statements_token1] = ACTIONS(365),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(367),
    [anon_sym_PERCENTifarch] = ACTIONS(367),
    [anon_sym_PERCENTifos] = ACTIONS(367),
    [anon_sym_PERCENTifnarch] = ACTIONS(367),
    [anon_sym_PERCENTifnos] = ACTIONS(367),
    [anon_sym_AutoProv] = ACTIONS(367),
    [anon_sym_AutoReq] = ACTIONS(367),
    [anon_sym_AutoReqProv] = ACTIONS(367),
    [anon_sym_BugUrl] = ACTIONS(367),
    [anon_sym_BuildRoot] = ACTIONS(367),
    [anon_sym_BuildSystem] = ACTIONS(367),
    [anon_sym_DistTag] = ACTIONS(367),
    [anon_sym_Distribution] = ACTIONS(367),
    [anon_sym_Epoch] = ACTIONS(367),
    [anon_sym_Group] = ACTIONS(367),
    [anon_sym_License] = ACTIONS(367),
    [anon_sym_ModularityLabel] = ACTIONS(367),
    [anon_sym_Name] = ACTIONS(367),
    [anon_sym_NoPatch] = ACTIONS(367),
    [anon_sym_NoSource] = ACTIONS(367),
    [anon_sym_Packager] = ACTIONS(367),
    [anon_sym_Release] = ACTIONS(367),
    [anon_sym_SourceLicense] = ACTIONS(367),
    [anon_sym_Summary] = ACTIONS(367),
    [anon_sym_URL] = ACTIONS(367),
    [anon_sym_Url] = ACTIONS(367),
    [anon_sym_VCS] = ACTIONS(367),
    [anon_sym_Vendor] = ACTIONS(367),
    [anon_sym_Version] = ACTIONS(367),
    [aux_sym_tag_token1] = ACTIONS(367),
    [aux_sym_tag_token2] = ACTIONS(367),
    [anon_sym_Requires] = ACTIONS(367),
    [anon_sym_BuildArch] = ACTIONS(367),
    [anon_sym_BuildArchitectures] = ACTIONS(367),
    [anon_sym_BuildConflicts] = ACTIONS(367),
    [anon_sym_BuildPrereq] = ACTIONS(367),
    [anon_sym_BuildRequires] = ACTIONS(367),
    [anon_sym_Conflicts] = ACTIONS(367),
    [anon_sym_DocDir] = ACTIONS(367),
    [anon_sym_Enhances] = ACTIONS(367),
    [anon_sym_ExcludeArch] = ACTIONS(367),
    [anon_sym_ExcludeOS] = ACTIONS(367),
    [anon_sym_ExclusiveArch] = ACTIONS(367),
    [anon_sym_ExclusiveOS] = ACTIONS(367),
    [anon_sym_Obsoletes] = ACTIONS(367),
    [anon_sym_OrderWithRequires] = ACTIONS(367),
    [anon_sym_Prefix] = ACTIONS(367),
    [anon_sym_Prefixes] = ACTIONS(367),
    [anon_sym_Prereq] = ACTIONS(367),
    [anon_sym_Provides] = ACTIONS(367),
    [anon_sym_Recommends] = ACTIONS(367),
    [anon_sym_RemovePathPostfixes] = ACTIONS(367),
    [anon_sym_Suggests] = ACTIONS(367),
    [anon_sym_Supplements] = ACTIONS(367),
    [anon_sym_PERCENTdescription] = ACTIONS(367),
    [anon_sym_PERCENTpackage] = ACTIONS(367),
    [anon_sym_PERCENTprep] = ACTIONS(367),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(367),
    [anon_sym_PERCENTconf] = ACTIONS(367),
    [anon_sym_PERCENTbuild] = ACTIONS(367),
    [anon_sym_PERCENTinstall] = ACTIONS(367),
    [anon_sym_PERCENTcheck] = ACTIONS(367),
    [anon_sym_PERCENTclean] = ACTIONS(367),
    [anon_sym_PERCENTpre] = ACTIONS(367),
    [anon_sym_PERCENTpost] = ACTIONS(367),
    [anon_sym_PERCENTpreun] = ACTIONS(367),
    [anon_sym_PERCENTpostun] = ACTIONS(367),
    [anon_sym_PERCENTpretrans] = ACTIONS(367),
    [anon_sym_PERCENTposttrans] = ACTIONS(367),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(367),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(367),
    [anon_sym_PERCENTverify] = ACTIONS(367),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(367),
    [anon_sym_PERCENTtriggerin] = ACTIONS(367),
    [anon_sym_PERCENTtriggerun] = ACTIONS(367),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(367),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(367),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(367),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(367),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(367),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(367),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(367),
    [anon_sym_PERCENTfiles] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(357),
    [anon_sym_PERCENTchangelog] = ACTIONS(367),
    [anon_sym_STAR] = ACTIONS(367),
    [anon_sym_PERCENTglobal] = ACTIONS(367),
    [anon_sym_PERCENTdefine] = ACTIONS(367),
    [anon_sym_PERCENTundefine] = ACTIONS(367),
    [anon_sym_PERCENT] = ACTIONS(367),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(367),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(367),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [aux_sym__simple_statements_token1] = ACTIONS(371),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(371),
    [anon_sym_PERCENTifarch] = ACTIONS(371),
    [anon_sym_PERCENTifos] = ACTIONS(371),
    [anon_sym_PERCENTifnarch] = ACTIONS(371),
    [anon_sym_PERCENTifnos] = ACTIONS(371),
    [anon_sym_AutoProv] = ACTIONS(371),
    [anon_sym_AutoReq] = ACTIONS(371),
    [anon_sym_AutoReqProv] = ACTIONS(371),
    [anon_sym_BugUrl] = ACTIONS(371),
    [anon_sym_BuildRoot] = ACTIONS(371),
    [anon_sym_BuildSystem] = ACTIONS(371),
    [anon_sym_DistTag] = ACTIONS(371),
    [anon_sym_Distribution] = ACTIONS(371),
    [anon_sym_Epoch] = ACTIONS(371),
    [anon_sym_Group] = ACTIONS(371),
    [anon_sym_License] = ACTIONS(371),
    [anon_sym_ModularityLabel] = ACTIONS(371),
    [anon_sym_Name] = ACTIONS(371),
    [anon_sym_NoPatch] = ACTIONS(371),
    [anon_sym_NoSource] = ACTIONS(371),
    [anon_sym_Packager] = ACTIONS(371),
    [anon_sym_Release] = ACTIONS(371),
    [anon_sym_SourceLicense] = ACTIONS(371),
    [anon_sym_Summary] = ACTIONS(371),
    [anon_sym_URL] = ACTIONS(371),
    [anon_sym_Url] = ACTIONS(371),
    [anon_sym_VCS] = ACTIONS(371),
    [anon_sym_Vendor] = ACTIONS(371),
    [anon_sym_Version] = ACTIONS(371),
    [aux_sym_tag_token1] = ACTIONS(371),
    [aux_sym_tag_token2] = ACTIONS(371),
    [anon_sym_Requires] = ACTIONS(371),
    [anon_sym_BuildArch] = ACTIONS(371),
    [anon_sym_BuildArchitectures] = ACTIONS(371),
    [anon_sym_BuildConflicts] = ACTIONS(371),
    [anon_sym_BuildPrereq] = ACTIONS(371),
    [anon_sym_BuildRequires] = ACTIONS(371),
    [anon_sym_Conflicts] = ACTIONS(371),
    [anon_sym_DocDir] = ACTIONS(371),
    [anon_sym_Enhances] = ACTIONS(371),
    [anon_sym_ExcludeArch] = ACTIONS(371),
    [anon_sym_ExcludeOS] = ACTIONS(371),
    [anon_sym_ExclusiveArch] = ACTIONS(371),
    [anon_sym_ExclusiveOS] = ACTIONS(371),
    [anon_sym_Obsoletes] = ACTIONS(371),
    [anon_sym_OrderWithRequires] = ACTIONS(371),
    [anon_sym_Prefix] = ACTIONS(371),
    [anon_sym_Prefixes] = ACTIONS(371),
    [anon_sym_Prereq] = ACTIONS(371),
    [anon_sym_Provides] = ACTIONS(371),
    [anon_sym_Recommends] = ACTIONS(371),
    [anon_sym_RemovePathPostfixes] = ACTIONS(371),
    [anon_sym_Suggests] = ACTIONS(371),
    [anon_sym_Supplements] = ACTIONS(371),
    [anon_sym_PERCENTdescription] = ACTIONS(371),
    [anon_sym_PERCENTpackage] = ACTIONS(371),
    [anon_sym_PERCENTprep] = ACTIONS(371),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(371),
    [anon_sym_PERCENTconf] = ACTIONS(371),
    [anon_sym_PERCENTbuild] = ACTIONS(371),
    [anon_sym_PERCENTinstall] = ACTIONS(371),
    [anon_sym_PERCENTcheck] = ACTIONS(371),
    [anon_sym_PERCENTclean] = ACTIONS(371),
    [anon_sym_PERCENTpre] = ACTIONS(371),
    [anon_sym_PERCENTpost] = ACTIONS(371),
    [anon_sym_PERCENTpreun] = ACTIONS(371),
    [anon_sym_PERCENTpostun] = ACTIONS(371),
    [anon_sym_PERCENTpretrans] = ACTIONS(371),
    [anon_sym_PERCENTposttrans] = ACTIONS(371),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(371),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(371),
    [anon_sym_PERCENTverify] = ACTIONS(371),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(371),
    [anon_sym_PERCENTtriggerin] = ACTIONS(371),
    [anon_sym_PERCENTtriggerun] = ACTIONS(371),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(371),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(371),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(371),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(371),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(371),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(371),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(371),
    [anon_sym_PERCENTfiles] = ACTIONS(371),
    [anon_sym_PERCENTchangelog] = ACTIONS(371),
    [anon_sym_PERCENTglobal] = ACTIONS(371),
    [anon_sym_PERCENTdefine] = ACTIONS(371),
    [anon_sym_PERCENTundefine] = ACTIONS(371),
    [sym_integer] = ACTIONS(371),
    [sym_float] = ACTIONS(371),
    [anon_sym_PERCENT] = ACTIONS(371),
    [sym_string_content] = ACTIONS(371),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(371),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(371),
  },
  [32] = {
    [sym_changelog_entry] = STATE(29),
    [aux_sym_changelog_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(373),
    [aux_sym__simple_statements_token1] = ACTIONS(373),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(375),
    [anon_sym_PERCENTifarch] = ACTIONS(375),
    [anon_sym_PERCENTifos] = ACTIONS(375),
    [anon_sym_PERCENTifnarch] = ACTIONS(375),
    [anon_sym_PERCENTifnos] = ACTIONS(375),
    [anon_sym_AutoProv] = ACTIONS(375),
    [anon_sym_AutoReq] = ACTIONS(375),
    [anon_sym_AutoReqProv] = ACTIONS(375),
    [anon_sym_BugUrl] = ACTIONS(375),
    [anon_sym_BuildRoot] = ACTIONS(375),
    [anon_sym_BuildSystem] = ACTIONS(375),
    [anon_sym_DistTag] = ACTIONS(375),
    [anon_sym_Distribution] = ACTIONS(375),
    [anon_sym_Epoch] = ACTIONS(375),
    [anon_sym_Group] = ACTIONS(375),
    [anon_sym_License] = ACTIONS(375),
    [anon_sym_ModularityLabel] = ACTIONS(375),
    [anon_sym_Name] = ACTIONS(375),
    [anon_sym_NoPatch] = ACTIONS(375),
    [anon_sym_NoSource] = ACTIONS(375),
    [anon_sym_Packager] = ACTIONS(375),
    [anon_sym_Release] = ACTIONS(375),
    [anon_sym_SourceLicense] = ACTIONS(375),
    [anon_sym_Summary] = ACTIONS(375),
    [anon_sym_URL] = ACTIONS(375),
    [anon_sym_Url] = ACTIONS(375),
    [anon_sym_VCS] = ACTIONS(375),
    [anon_sym_Vendor] = ACTIONS(375),
    [anon_sym_Version] = ACTIONS(375),
    [aux_sym_tag_token1] = ACTIONS(375),
    [aux_sym_tag_token2] = ACTIONS(375),
    [anon_sym_Requires] = ACTIONS(375),
    [anon_sym_BuildArch] = ACTIONS(375),
    [anon_sym_BuildArchitectures] = ACTIONS(375),
    [anon_sym_BuildConflicts] = ACTIONS(375),
    [anon_sym_BuildPrereq] = ACTIONS(375),
    [anon_sym_BuildRequires] = ACTIONS(375),
    [anon_sym_Conflicts] = ACTIONS(375),
    [anon_sym_DocDir] = ACTIONS(375),
    [anon_sym_Enhances] = ACTIONS(375),
    [anon_sym_ExcludeArch] = ACTIONS(375),
    [anon_sym_ExcludeOS] = ACTIONS(375),
    [anon_sym_ExclusiveArch] = ACTIONS(375),
    [anon_sym_ExclusiveOS] = ACTIONS(375),
    [anon_sym_Obsoletes] = ACTIONS(375),
    [anon_sym_OrderWithRequires] = ACTIONS(375),
    [anon_sym_Prefix] = ACTIONS(375),
    [anon_sym_Prefixes] = ACTIONS(375),
    [anon_sym_Prereq] = ACTIONS(375),
    [anon_sym_Provides] = ACTIONS(375),
    [anon_sym_Recommends] = ACTIONS(375),
    [anon_sym_RemovePathPostfixes] = ACTIONS(375),
    [anon_sym_Suggests] = ACTIONS(375),
    [anon_sym_Supplements] = ACTIONS(375),
    [anon_sym_PERCENTdescription] = ACTIONS(375),
    [anon_sym_PERCENTpackage] = ACTIONS(375),
    [anon_sym_PERCENTprep] = ACTIONS(375),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(375),
    [anon_sym_PERCENTconf] = ACTIONS(375),
    [anon_sym_PERCENTbuild] = ACTIONS(375),
    [anon_sym_PERCENTinstall] = ACTIONS(375),
    [anon_sym_PERCENTcheck] = ACTIONS(375),
    [anon_sym_PERCENTclean] = ACTIONS(375),
    [anon_sym_PERCENTpre] = ACTIONS(375),
    [anon_sym_PERCENTpost] = ACTIONS(375),
    [anon_sym_PERCENTpreun] = ACTIONS(375),
    [anon_sym_PERCENTpostun] = ACTIONS(375),
    [anon_sym_PERCENTpretrans] = ACTIONS(375),
    [anon_sym_PERCENTposttrans] = ACTIONS(375),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(375),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(375),
    [anon_sym_PERCENTverify] = ACTIONS(375),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(375),
    [anon_sym_PERCENTtriggerin] = ACTIONS(375),
    [anon_sym_PERCENTtriggerun] = ACTIONS(375),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(375),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(375),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(375),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(375),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(375),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(375),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(375),
    [anon_sym_PERCENTfiles] = ACTIONS(375),
    [anon_sym_PERCENTchangelog] = ACTIONS(375),
    [anon_sym_STAR] = ACTIONS(363),
    [anon_sym_PERCENTglobal] = ACTIONS(375),
    [anon_sym_PERCENTdefine] = ACTIONS(375),
    [anon_sym_PERCENTundefine] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(375),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(375),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(375),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [aux_sym__simple_statements_token1] = ACTIONS(377),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(379),
    [anon_sym_PERCENTifarch] = ACTIONS(379),
    [anon_sym_PERCENTifos] = ACTIONS(379),
    [anon_sym_PERCENTifnarch] = ACTIONS(379),
    [anon_sym_PERCENTifnos] = ACTIONS(379),
    [anon_sym_AutoProv] = ACTIONS(379),
    [anon_sym_AutoReq] = ACTIONS(379),
    [anon_sym_AutoReqProv] = ACTIONS(379),
    [anon_sym_BugUrl] = ACTIONS(379),
    [anon_sym_BuildRoot] = ACTIONS(379),
    [anon_sym_BuildSystem] = ACTIONS(379),
    [anon_sym_DistTag] = ACTIONS(379),
    [anon_sym_Distribution] = ACTIONS(379),
    [anon_sym_Epoch] = ACTIONS(379),
    [anon_sym_Group] = ACTIONS(379),
    [anon_sym_License] = ACTIONS(379),
    [anon_sym_ModularityLabel] = ACTIONS(379),
    [anon_sym_Name] = ACTIONS(379),
    [anon_sym_NoPatch] = ACTIONS(379),
    [anon_sym_NoSource] = ACTIONS(379),
    [anon_sym_Packager] = ACTIONS(379),
    [anon_sym_Release] = ACTIONS(379),
    [anon_sym_SourceLicense] = ACTIONS(379),
    [anon_sym_Summary] = ACTIONS(379),
    [anon_sym_URL] = ACTIONS(379),
    [anon_sym_Url] = ACTIONS(379),
    [anon_sym_VCS] = ACTIONS(379),
    [anon_sym_Vendor] = ACTIONS(379),
    [anon_sym_Version] = ACTIONS(379),
    [aux_sym_tag_token1] = ACTIONS(379),
    [aux_sym_tag_token2] = ACTIONS(379),
    [anon_sym_Requires] = ACTIONS(379),
    [anon_sym_BuildArch] = ACTIONS(379),
    [anon_sym_BuildArchitectures] = ACTIONS(379),
    [anon_sym_BuildConflicts] = ACTIONS(379),
    [anon_sym_BuildPrereq] = ACTIONS(379),
    [anon_sym_BuildRequires] = ACTIONS(379),
    [anon_sym_Conflicts] = ACTIONS(379),
    [anon_sym_DocDir] = ACTIONS(379),
    [anon_sym_Enhances] = ACTIONS(379),
    [anon_sym_ExcludeArch] = ACTIONS(379),
    [anon_sym_ExcludeOS] = ACTIONS(379),
    [anon_sym_ExclusiveArch] = ACTIONS(379),
    [anon_sym_ExclusiveOS] = ACTIONS(379),
    [anon_sym_Obsoletes] = ACTIONS(379),
    [anon_sym_OrderWithRequires] = ACTIONS(379),
    [anon_sym_Prefix] = ACTIONS(379),
    [anon_sym_Prefixes] = ACTIONS(379),
    [anon_sym_Prereq] = ACTIONS(379),
    [anon_sym_Provides] = ACTIONS(379),
    [anon_sym_Recommends] = ACTIONS(379),
    [anon_sym_RemovePathPostfixes] = ACTIONS(379),
    [anon_sym_Suggests] = ACTIONS(379),
    [anon_sym_Supplements] = ACTIONS(379),
    [anon_sym_PERCENTdescription] = ACTIONS(379),
    [anon_sym_PERCENTpackage] = ACTIONS(379),
    [anon_sym_PERCENTprep] = ACTIONS(379),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(379),
    [anon_sym_PERCENTconf] = ACTIONS(379),
    [anon_sym_PERCENTbuild] = ACTIONS(379),
    [anon_sym_PERCENTinstall] = ACTIONS(379),
    [anon_sym_PERCENTcheck] = ACTIONS(379),
    [anon_sym_PERCENTclean] = ACTIONS(379),
    [anon_sym_PERCENTpre] = ACTIONS(379),
    [anon_sym_PERCENTpost] = ACTIONS(379),
    [anon_sym_PERCENTpreun] = ACTIONS(379),
    [anon_sym_PERCENTpostun] = ACTIONS(379),
    [anon_sym_PERCENTpretrans] = ACTIONS(379),
    [anon_sym_PERCENTposttrans] = ACTIONS(379),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(379),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(379),
    [anon_sym_PERCENTverify] = ACTIONS(379),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(379),
    [anon_sym_PERCENTtriggerin] = ACTIONS(379),
    [anon_sym_PERCENTtriggerun] = ACTIONS(379),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(379),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(379),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(379),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(379),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(379),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(379),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(379),
    [anon_sym_PERCENTfiles] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_PERCENTchangelog] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_PERCENTglobal] = ACTIONS(379),
    [anon_sym_PERCENTdefine] = ACTIONS(379),
    [anon_sym_PERCENTundefine] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(379),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(379),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(379),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [aux_sym__simple_statements_token1] = ACTIONS(383),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(383),
    [anon_sym_PERCENTifarch] = ACTIONS(383),
    [anon_sym_PERCENTifos] = ACTIONS(383),
    [anon_sym_PERCENTifnarch] = ACTIONS(383),
    [anon_sym_PERCENTifnos] = ACTIONS(383),
    [anon_sym_AutoProv] = ACTIONS(383),
    [anon_sym_AutoReq] = ACTIONS(383),
    [anon_sym_AutoReqProv] = ACTIONS(383),
    [anon_sym_BugUrl] = ACTIONS(383),
    [anon_sym_BuildRoot] = ACTIONS(383),
    [anon_sym_BuildSystem] = ACTIONS(383),
    [anon_sym_DistTag] = ACTIONS(383),
    [anon_sym_Distribution] = ACTIONS(383),
    [anon_sym_Epoch] = ACTIONS(383),
    [anon_sym_Group] = ACTIONS(383),
    [anon_sym_License] = ACTIONS(383),
    [anon_sym_ModularityLabel] = ACTIONS(383),
    [anon_sym_Name] = ACTIONS(383),
    [anon_sym_NoPatch] = ACTIONS(383),
    [anon_sym_NoSource] = ACTIONS(383),
    [anon_sym_Packager] = ACTIONS(383),
    [anon_sym_Release] = ACTIONS(383),
    [anon_sym_SourceLicense] = ACTIONS(383),
    [anon_sym_Summary] = ACTIONS(383),
    [anon_sym_URL] = ACTIONS(383),
    [anon_sym_Url] = ACTIONS(383),
    [anon_sym_VCS] = ACTIONS(383),
    [anon_sym_Vendor] = ACTIONS(383),
    [anon_sym_Version] = ACTIONS(383),
    [aux_sym_tag_token1] = ACTIONS(383),
    [aux_sym_tag_token2] = ACTIONS(383),
    [anon_sym_Requires] = ACTIONS(383),
    [anon_sym_BuildArch] = ACTIONS(383),
    [anon_sym_BuildArchitectures] = ACTIONS(383),
    [anon_sym_BuildConflicts] = ACTIONS(383),
    [anon_sym_BuildPrereq] = ACTIONS(383),
    [anon_sym_BuildRequires] = ACTIONS(383),
    [anon_sym_Conflicts] = ACTIONS(383),
    [anon_sym_DocDir] = ACTIONS(383),
    [anon_sym_Enhances] = ACTIONS(383),
    [anon_sym_ExcludeArch] = ACTIONS(383),
    [anon_sym_ExcludeOS] = ACTIONS(383),
    [anon_sym_ExclusiveArch] = ACTIONS(383),
    [anon_sym_ExclusiveOS] = ACTIONS(383),
    [anon_sym_Obsoletes] = ACTIONS(383),
    [anon_sym_OrderWithRequires] = ACTIONS(383),
    [anon_sym_Prefix] = ACTIONS(383),
    [anon_sym_Prefixes] = ACTIONS(383),
    [anon_sym_Prereq] = ACTIONS(383),
    [anon_sym_Provides] = ACTIONS(383),
    [anon_sym_Recommends] = ACTIONS(383),
    [anon_sym_RemovePathPostfixes] = ACTIONS(383),
    [anon_sym_Suggests] = ACTIONS(383),
    [anon_sym_Supplements] = ACTIONS(383),
    [anon_sym_PERCENTdescription] = ACTIONS(383),
    [anon_sym_PERCENTpackage] = ACTIONS(383),
    [anon_sym_PERCENTprep] = ACTIONS(383),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(383),
    [anon_sym_PERCENTconf] = ACTIONS(383),
    [anon_sym_PERCENTbuild] = ACTIONS(383),
    [anon_sym_PERCENTinstall] = ACTIONS(383),
    [anon_sym_PERCENTcheck] = ACTIONS(383),
    [anon_sym_PERCENTclean] = ACTIONS(383),
    [anon_sym_PERCENTpre] = ACTIONS(383),
    [anon_sym_PERCENTpost] = ACTIONS(383),
    [anon_sym_PERCENTpreun] = ACTIONS(383),
    [anon_sym_PERCENTpostun] = ACTIONS(383),
    [anon_sym_PERCENTpretrans] = ACTIONS(383),
    [anon_sym_PERCENTposttrans] = ACTIONS(383),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(383),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(383),
    [anon_sym_PERCENTverify] = ACTIONS(383),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(383),
    [anon_sym_PERCENTtriggerin] = ACTIONS(383),
    [anon_sym_PERCENTtriggerun] = ACTIONS(383),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(383),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(383),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(383),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(383),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(383),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(383),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(383),
    [anon_sym_PERCENTfiles] = ACTIONS(383),
    [anon_sym_PERCENTchangelog] = ACTIONS(383),
    [anon_sym_PERCENTglobal] = ACTIONS(383),
    [anon_sym_PERCENTdefine] = ACTIONS(383),
    [anon_sym_PERCENTundefine] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [sym_string_content_with_newlines] = ACTIONS(383),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(383),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(383),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [aux_sym__simple_statements_token1] = ACTIONS(387),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(387),
    [anon_sym_PERCENTifarch] = ACTIONS(387),
    [anon_sym_PERCENTifos] = ACTIONS(387),
    [anon_sym_PERCENTifnarch] = ACTIONS(387),
    [anon_sym_PERCENTifnos] = ACTIONS(387),
    [anon_sym_AutoProv] = ACTIONS(387),
    [anon_sym_AutoReq] = ACTIONS(387),
    [anon_sym_AutoReqProv] = ACTIONS(387),
    [anon_sym_BugUrl] = ACTIONS(387),
    [anon_sym_BuildRoot] = ACTIONS(387),
    [anon_sym_BuildSystem] = ACTIONS(387),
    [anon_sym_DistTag] = ACTIONS(387),
    [anon_sym_Distribution] = ACTIONS(387),
    [anon_sym_Epoch] = ACTIONS(387),
    [anon_sym_Group] = ACTIONS(387),
    [anon_sym_License] = ACTIONS(387),
    [anon_sym_ModularityLabel] = ACTIONS(387),
    [anon_sym_Name] = ACTIONS(387),
    [anon_sym_NoPatch] = ACTIONS(387),
    [anon_sym_NoSource] = ACTIONS(387),
    [anon_sym_Packager] = ACTIONS(387),
    [anon_sym_Release] = ACTIONS(387),
    [anon_sym_SourceLicense] = ACTIONS(387),
    [anon_sym_Summary] = ACTIONS(387),
    [anon_sym_URL] = ACTIONS(387),
    [anon_sym_Url] = ACTIONS(387),
    [anon_sym_VCS] = ACTIONS(387),
    [anon_sym_Vendor] = ACTIONS(387),
    [anon_sym_Version] = ACTIONS(387),
    [aux_sym_tag_token1] = ACTIONS(387),
    [aux_sym_tag_token2] = ACTIONS(387),
    [anon_sym_Requires] = ACTIONS(387),
    [anon_sym_BuildArch] = ACTIONS(387),
    [anon_sym_BuildArchitectures] = ACTIONS(387),
    [anon_sym_BuildConflicts] = ACTIONS(387),
    [anon_sym_BuildPrereq] = ACTIONS(387),
    [anon_sym_BuildRequires] = ACTIONS(387),
    [anon_sym_Conflicts] = ACTIONS(387),
    [anon_sym_DocDir] = ACTIONS(387),
    [anon_sym_Enhances] = ACTIONS(387),
    [anon_sym_ExcludeArch] = ACTIONS(387),
    [anon_sym_ExcludeOS] = ACTIONS(387),
    [anon_sym_ExclusiveArch] = ACTIONS(387),
    [anon_sym_ExclusiveOS] = ACTIONS(387),
    [anon_sym_Obsoletes] = ACTIONS(387),
    [anon_sym_OrderWithRequires] = ACTIONS(387),
    [anon_sym_Prefix] = ACTIONS(387),
    [anon_sym_Prefixes] = ACTIONS(387),
    [anon_sym_Prereq] = ACTIONS(387),
    [anon_sym_Provides] = ACTIONS(387),
    [anon_sym_Recommends] = ACTIONS(387),
    [anon_sym_RemovePathPostfixes] = ACTIONS(387),
    [anon_sym_Suggests] = ACTIONS(387),
    [anon_sym_Supplements] = ACTIONS(387),
    [anon_sym_PERCENTdescription] = ACTIONS(387),
    [anon_sym_PERCENTpackage] = ACTIONS(387),
    [anon_sym_PERCENTprep] = ACTIONS(387),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(387),
    [anon_sym_PERCENTconf] = ACTIONS(387),
    [anon_sym_PERCENTbuild] = ACTIONS(387),
    [anon_sym_PERCENTinstall] = ACTIONS(387),
    [anon_sym_PERCENTcheck] = ACTIONS(387),
    [anon_sym_PERCENTclean] = ACTIONS(387),
    [anon_sym_PERCENTpre] = ACTIONS(387),
    [anon_sym_PERCENTpost] = ACTIONS(387),
    [anon_sym_PERCENTpreun] = ACTIONS(387),
    [anon_sym_PERCENTpostun] = ACTIONS(387),
    [anon_sym_PERCENTpretrans] = ACTIONS(387),
    [anon_sym_PERCENTposttrans] = ACTIONS(387),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(387),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(387),
    [anon_sym_PERCENTverify] = ACTIONS(387),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(387),
    [anon_sym_PERCENTtriggerin] = ACTIONS(387),
    [anon_sym_PERCENTtriggerun] = ACTIONS(387),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(387),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(387),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(387),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(387),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(387),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(387),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(387),
    [anon_sym_PERCENTfiles] = ACTIONS(387),
    [anon_sym_PERCENTchangelog] = ACTIONS(387),
    [anon_sym_PERCENTglobal] = ACTIONS(387),
    [anon_sym_PERCENTdefine] = ACTIONS(387),
    [anon_sym_PERCENTundefine] = ACTIONS(387),
    [anon_sym_PERCENT] = ACTIONS(387),
    [sym_string_content_with_newlines] = ACTIONS(387),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(387),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(387),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [aux_sym__simple_statements_token1] = ACTIONS(391),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(391),
    [anon_sym_PERCENTifarch] = ACTIONS(391),
    [anon_sym_PERCENTifos] = ACTIONS(391),
    [anon_sym_PERCENTifnarch] = ACTIONS(391),
    [anon_sym_PERCENTifnos] = ACTIONS(391),
    [anon_sym_AutoProv] = ACTIONS(391),
    [anon_sym_AutoReq] = ACTIONS(391),
    [anon_sym_AutoReqProv] = ACTIONS(391),
    [anon_sym_BugUrl] = ACTIONS(391),
    [anon_sym_BuildRoot] = ACTIONS(391),
    [anon_sym_BuildSystem] = ACTIONS(391),
    [anon_sym_DistTag] = ACTIONS(391),
    [anon_sym_Distribution] = ACTIONS(391),
    [anon_sym_Epoch] = ACTIONS(391),
    [anon_sym_Group] = ACTIONS(391),
    [anon_sym_License] = ACTIONS(391),
    [anon_sym_ModularityLabel] = ACTIONS(391),
    [anon_sym_Name] = ACTIONS(391),
    [anon_sym_NoPatch] = ACTIONS(391),
    [anon_sym_NoSource] = ACTIONS(391),
    [anon_sym_Packager] = ACTIONS(391),
    [anon_sym_Release] = ACTIONS(391),
    [anon_sym_SourceLicense] = ACTIONS(391),
    [anon_sym_Summary] = ACTIONS(391),
    [anon_sym_URL] = ACTIONS(391),
    [anon_sym_Url] = ACTIONS(391),
    [anon_sym_VCS] = ACTIONS(391),
    [anon_sym_Vendor] = ACTIONS(391),
    [anon_sym_Version] = ACTIONS(391),
    [aux_sym_tag_token1] = ACTIONS(391),
    [aux_sym_tag_token2] = ACTIONS(391),
    [anon_sym_Requires] = ACTIONS(391),
    [anon_sym_BuildArch] = ACTIONS(391),
    [anon_sym_BuildArchitectures] = ACTIONS(391),
    [anon_sym_BuildConflicts] = ACTIONS(391),
    [anon_sym_BuildPrereq] = ACTIONS(391),
    [anon_sym_BuildRequires] = ACTIONS(391),
    [anon_sym_Conflicts] = ACTIONS(391),
    [anon_sym_DocDir] = ACTIONS(391),
    [anon_sym_Enhances] = ACTIONS(391),
    [anon_sym_ExcludeArch] = ACTIONS(391),
    [anon_sym_ExcludeOS] = ACTIONS(391),
    [anon_sym_ExclusiveArch] = ACTIONS(391),
    [anon_sym_ExclusiveOS] = ACTIONS(391),
    [anon_sym_Obsoletes] = ACTIONS(391),
    [anon_sym_OrderWithRequires] = ACTIONS(391),
    [anon_sym_Prefix] = ACTIONS(391),
    [anon_sym_Prefixes] = ACTIONS(391),
    [anon_sym_Prereq] = ACTIONS(391),
    [anon_sym_Provides] = ACTIONS(391),
    [anon_sym_Recommends] = ACTIONS(391),
    [anon_sym_RemovePathPostfixes] = ACTIONS(391),
    [anon_sym_Suggests] = ACTIONS(391),
    [anon_sym_Supplements] = ACTIONS(391),
    [anon_sym_PERCENTdescription] = ACTIONS(391),
    [anon_sym_PERCENTpackage] = ACTIONS(391),
    [anon_sym_PERCENTprep] = ACTIONS(391),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(391),
    [anon_sym_PERCENTconf] = ACTIONS(391),
    [anon_sym_PERCENTbuild] = ACTIONS(391),
    [anon_sym_PERCENTinstall] = ACTIONS(391),
    [anon_sym_PERCENTcheck] = ACTIONS(391),
    [anon_sym_PERCENTclean] = ACTIONS(391),
    [anon_sym_PERCENTpre] = ACTIONS(391),
    [anon_sym_PERCENTpost] = ACTIONS(391),
    [anon_sym_PERCENTpreun] = ACTIONS(391),
    [anon_sym_PERCENTpostun] = ACTIONS(391),
    [anon_sym_PERCENTpretrans] = ACTIONS(391),
    [anon_sym_PERCENTposttrans] = ACTIONS(391),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(391),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(391),
    [anon_sym_PERCENTverify] = ACTIONS(391),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(391),
    [anon_sym_PERCENTtriggerin] = ACTIONS(391),
    [anon_sym_PERCENTtriggerun] = ACTIONS(391),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(391),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(391),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(391),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(391),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(391),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(391),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(391),
    [anon_sym_PERCENTfiles] = ACTIONS(391),
    [anon_sym_PERCENTchangelog] = ACTIONS(391),
    [anon_sym_PERCENTglobal] = ACTIONS(391),
    [anon_sym_PERCENTdefine] = ACTIONS(391),
    [anon_sym_PERCENTundefine] = ACTIONS(391),
    [anon_sym_PERCENT] = ACTIONS(391),
    [sym_string_content_with_newlines] = ACTIONS(391),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(391),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(391),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [aux_sym__simple_statements_token1] = ACTIONS(371),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(371),
    [anon_sym_PERCENTifarch] = ACTIONS(371),
    [anon_sym_PERCENTifos] = ACTIONS(371),
    [anon_sym_PERCENTifnarch] = ACTIONS(371),
    [anon_sym_PERCENTifnos] = ACTIONS(371),
    [anon_sym_AutoProv] = ACTIONS(371),
    [anon_sym_AutoReq] = ACTIONS(371),
    [anon_sym_AutoReqProv] = ACTIONS(371),
    [anon_sym_BugUrl] = ACTIONS(371),
    [anon_sym_BuildRoot] = ACTIONS(371),
    [anon_sym_BuildSystem] = ACTIONS(371),
    [anon_sym_DistTag] = ACTIONS(371),
    [anon_sym_Distribution] = ACTIONS(371),
    [anon_sym_Epoch] = ACTIONS(371),
    [anon_sym_Group] = ACTIONS(371),
    [anon_sym_License] = ACTIONS(371),
    [anon_sym_ModularityLabel] = ACTIONS(371),
    [anon_sym_Name] = ACTIONS(371),
    [anon_sym_NoPatch] = ACTIONS(371),
    [anon_sym_NoSource] = ACTIONS(371),
    [anon_sym_Packager] = ACTIONS(371),
    [anon_sym_Release] = ACTIONS(371),
    [anon_sym_SourceLicense] = ACTIONS(371),
    [anon_sym_Summary] = ACTIONS(371),
    [anon_sym_URL] = ACTIONS(371),
    [anon_sym_Url] = ACTIONS(371),
    [anon_sym_VCS] = ACTIONS(371),
    [anon_sym_Vendor] = ACTIONS(371),
    [anon_sym_Version] = ACTIONS(371),
    [aux_sym_tag_token1] = ACTIONS(371),
    [aux_sym_tag_token2] = ACTIONS(371),
    [anon_sym_Requires] = ACTIONS(371),
    [anon_sym_BuildArch] = ACTIONS(371),
    [anon_sym_BuildArchitectures] = ACTIONS(371),
    [anon_sym_BuildConflicts] = ACTIONS(371),
    [anon_sym_BuildPrereq] = ACTIONS(371),
    [anon_sym_BuildRequires] = ACTIONS(371),
    [anon_sym_Conflicts] = ACTIONS(371),
    [anon_sym_DocDir] = ACTIONS(371),
    [anon_sym_Enhances] = ACTIONS(371),
    [anon_sym_ExcludeArch] = ACTIONS(371),
    [anon_sym_ExcludeOS] = ACTIONS(371),
    [anon_sym_ExclusiveArch] = ACTIONS(371),
    [anon_sym_ExclusiveOS] = ACTIONS(371),
    [anon_sym_Obsoletes] = ACTIONS(371),
    [anon_sym_OrderWithRequires] = ACTIONS(371),
    [anon_sym_Prefix] = ACTIONS(371),
    [anon_sym_Prefixes] = ACTIONS(371),
    [anon_sym_Prereq] = ACTIONS(371),
    [anon_sym_Provides] = ACTIONS(371),
    [anon_sym_Recommends] = ACTIONS(371),
    [anon_sym_RemovePathPostfixes] = ACTIONS(371),
    [anon_sym_Suggests] = ACTIONS(371),
    [anon_sym_Supplements] = ACTIONS(371),
    [anon_sym_PERCENTdescription] = ACTIONS(371),
    [anon_sym_PERCENTpackage] = ACTIONS(371),
    [anon_sym_PERCENTprep] = ACTIONS(371),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(371),
    [anon_sym_PERCENTconf] = ACTIONS(371),
    [anon_sym_PERCENTbuild] = ACTIONS(371),
    [anon_sym_PERCENTinstall] = ACTIONS(371),
    [anon_sym_PERCENTcheck] = ACTIONS(371),
    [anon_sym_PERCENTclean] = ACTIONS(371),
    [anon_sym_PERCENTpre] = ACTIONS(371),
    [anon_sym_PERCENTpost] = ACTIONS(371),
    [anon_sym_PERCENTpreun] = ACTIONS(371),
    [anon_sym_PERCENTpostun] = ACTIONS(371),
    [anon_sym_PERCENTpretrans] = ACTIONS(371),
    [anon_sym_PERCENTposttrans] = ACTIONS(371),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(371),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(371),
    [anon_sym_PERCENTverify] = ACTIONS(371),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(371),
    [anon_sym_PERCENTtriggerin] = ACTIONS(371),
    [anon_sym_PERCENTtriggerun] = ACTIONS(371),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(371),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(371),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(371),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(371),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(371),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(371),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(371),
    [anon_sym_PERCENTfiles] = ACTIONS(371),
    [anon_sym_PERCENTchangelog] = ACTIONS(371),
    [anon_sym_PERCENTglobal] = ACTIONS(371),
    [anon_sym_PERCENTdefine] = ACTIONS(371),
    [anon_sym_PERCENTundefine] = ACTIONS(371),
    [anon_sym_PERCENT] = ACTIONS(371),
    [sym_string_content_with_newlines] = ACTIONS(371),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(371),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(371),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [aux_sym__simple_statements_token1] = ACTIONS(395),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(395),
    [anon_sym_PERCENTifarch] = ACTIONS(395),
    [anon_sym_PERCENTifos] = ACTIONS(395),
    [anon_sym_PERCENTifnarch] = ACTIONS(395),
    [anon_sym_PERCENTifnos] = ACTIONS(395),
    [anon_sym_AutoProv] = ACTIONS(395),
    [anon_sym_AutoReq] = ACTIONS(395),
    [anon_sym_AutoReqProv] = ACTIONS(395),
    [anon_sym_BugUrl] = ACTIONS(395),
    [anon_sym_BuildRoot] = ACTIONS(395),
    [anon_sym_BuildSystem] = ACTIONS(395),
    [anon_sym_DistTag] = ACTIONS(395),
    [anon_sym_Distribution] = ACTIONS(395),
    [anon_sym_Epoch] = ACTIONS(395),
    [anon_sym_Group] = ACTIONS(395),
    [anon_sym_License] = ACTIONS(395),
    [anon_sym_ModularityLabel] = ACTIONS(395),
    [anon_sym_Name] = ACTIONS(395),
    [anon_sym_NoPatch] = ACTIONS(395),
    [anon_sym_NoSource] = ACTIONS(395),
    [anon_sym_Packager] = ACTIONS(395),
    [anon_sym_Release] = ACTIONS(395),
    [anon_sym_SourceLicense] = ACTIONS(395),
    [anon_sym_Summary] = ACTIONS(395),
    [anon_sym_URL] = ACTIONS(395),
    [anon_sym_Url] = ACTIONS(395),
    [anon_sym_VCS] = ACTIONS(395),
    [anon_sym_Vendor] = ACTIONS(395),
    [anon_sym_Version] = ACTIONS(395),
    [aux_sym_tag_token1] = ACTIONS(395),
    [aux_sym_tag_token2] = ACTIONS(395),
    [anon_sym_Requires] = ACTIONS(395),
    [anon_sym_BuildArch] = ACTIONS(395),
    [anon_sym_BuildArchitectures] = ACTIONS(395),
    [anon_sym_BuildConflicts] = ACTIONS(395),
    [anon_sym_BuildPrereq] = ACTIONS(395),
    [anon_sym_BuildRequires] = ACTIONS(395),
    [anon_sym_Conflicts] = ACTIONS(395),
    [anon_sym_DocDir] = ACTIONS(395),
    [anon_sym_Enhances] = ACTIONS(395),
    [anon_sym_ExcludeArch] = ACTIONS(395),
    [anon_sym_ExcludeOS] = ACTIONS(395),
    [anon_sym_ExclusiveArch] = ACTIONS(395),
    [anon_sym_ExclusiveOS] = ACTIONS(395),
    [anon_sym_Obsoletes] = ACTIONS(395),
    [anon_sym_OrderWithRequires] = ACTIONS(395),
    [anon_sym_Prefix] = ACTIONS(395),
    [anon_sym_Prefixes] = ACTIONS(395),
    [anon_sym_Prereq] = ACTIONS(395),
    [anon_sym_Provides] = ACTIONS(395),
    [anon_sym_Recommends] = ACTIONS(395),
    [anon_sym_RemovePathPostfixes] = ACTIONS(395),
    [anon_sym_Suggests] = ACTIONS(395),
    [anon_sym_Supplements] = ACTIONS(395),
    [anon_sym_PERCENTdescription] = ACTIONS(395),
    [anon_sym_PERCENTpackage] = ACTIONS(395),
    [anon_sym_PERCENTprep] = ACTIONS(395),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(395),
    [anon_sym_PERCENTconf] = ACTIONS(395),
    [anon_sym_PERCENTbuild] = ACTIONS(395),
    [anon_sym_PERCENTinstall] = ACTIONS(395),
    [anon_sym_PERCENTcheck] = ACTIONS(395),
    [anon_sym_PERCENTclean] = ACTIONS(395),
    [anon_sym_PERCENTpre] = ACTIONS(395),
    [anon_sym_PERCENTpost] = ACTIONS(395),
    [anon_sym_PERCENTpreun] = ACTIONS(395),
    [anon_sym_PERCENTpostun] = ACTIONS(395),
    [anon_sym_PERCENTpretrans] = ACTIONS(395),
    [anon_sym_PERCENTposttrans] = ACTIONS(395),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(395),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(395),
    [anon_sym_PERCENTverify] = ACTIONS(395),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(395),
    [anon_sym_PERCENTtriggerin] = ACTIONS(395),
    [anon_sym_PERCENTtriggerun] = ACTIONS(395),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(395),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(395),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(395),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(395),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(395),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(395),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(395),
    [anon_sym_PERCENTfiles] = ACTIONS(395),
    [anon_sym_PERCENTchangelog] = ACTIONS(395),
    [anon_sym_PERCENTglobal] = ACTIONS(395),
    [anon_sym_PERCENTdefine] = ACTIONS(395),
    [anon_sym_PERCENTundefine] = ACTIONS(395),
    [anon_sym_PERCENT] = ACTIONS(395),
    [sym_string_content_with_newlines] = ACTIONS(395),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(395),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(395),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [aux_sym__simple_statements_token1] = ACTIONS(325),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(325),
    [anon_sym_PERCENTifarch] = ACTIONS(325),
    [anon_sym_PERCENTifos] = ACTIONS(325),
    [anon_sym_PERCENTifnarch] = ACTIONS(325),
    [anon_sym_PERCENTifnos] = ACTIONS(325),
    [anon_sym_AutoProv] = ACTIONS(325),
    [anon_sym_AutoReq] = ACTIONS(325),
    [anon_sym_AutoReqProv] = ACTIONS(325),
    [anon_sym_BugUrl] = ACTIONS(325),
    [anon_sym_BuildRoot] = ACTIONS(325),
    [anon_sym_BuildSystem] = ACTIONS(325),
    [anon_sym_DistTag] = ACTIONS(325),
    [anon_sym_Distribution] = ACTIONS(325),
    [anon_sym_Epoch] = ACTIONS(325),
    [anon_sym_Group] = ACTIONS(325),
    [anon_sym_License] = ACTIONS(325),
    [anon_sym_ModularityLabel] = ACTIONS(325),
    [anon_sym_Name] = ACTIONS(325),
    [anon_sym_NoPatch] = ACTIONS(325),
    [anon_sym_NoSource] = ACTIONS(325),
    [anon_sym_Packager] = ACTIONS(325),
    [anon_sym_Release] = ACTIONS(325),
    [anon_sym_SourceLicense] = ACTIONS(325),
    [anon_sym_Summary] = ACTIONS(325),
    [anon_sym_URL] = ACTIONS(325),
    [anon_sym_Url] = ACTIONS(325),
    [anon_sym_VCS] = ACTIONS(325),
    [anon_sym_Vendor] = ACTIONS(325),
    [anon_sym_Version] = ACTIONS(325),
    [aux_sym_tag_token1] = ACTIONS(325),
    [aux_sym_tag_token2] = ACTIONS(325),
    [anon_sym_Requires] = ACTIONS(325),
    [anon_sym_BuildArch] = ACTIONS(325),
    [anon_sym_BuildArchitectures] = ACTIONS(325),
    [anon_sym_BuildConflicts] = ACTIONS(325),
    [anon_sym_BuildPrereq] = ACTIONS(325),
    [anon_sym_BuildRequires] = ACTIONS(325),
    [anon_sym_Conflicts] = ACTIONS(325),
    [anon_sym_DocDir] = ACTIONS(325),
    [anon_sym_Enhances] = ACTIONS(325),
    [anon_sym_ExcludeArch] = ACTIONS(325),
    [anon_sym_ExcludeOS] = ACTIONS(325),
    [anon_sym_ExclusiveArch] = ACTIONS(325),
    [anon_sym_ExclusiveOS] = ACTIONS(325),
    [anon_sym_Obsoletes] = ACTIONS(325),
    [anon_sym_OrderWithRequires] = ACTIONS(325),
    [anon_sym_Prefix] = ACTIONS(325),
    [anon_sym_Prefixes] = ACTIONS(325),
    [anon_sym_Prereq] = ACTIONS(325),
    [anon_sym_Provides] = ACTIONS(325),
    [anon_sym_Recommends] = ACTIONS(325),
    [anon_sym_RemovePathPostfixes] = ACTIONS(325),
    [anon_sym_Suggests] = ACTIONS(325),
    [anon_sym_Supplements] = ACTIONS(325),
    [anon_sym_PERCENTdescription] = ACTIONS(325),
    [anon_sym_PERCENTpackage] = ACTIONS(325),
    [anon_sym_PERCENTprep] = ACTIONS(325),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(325),
    [anon_sym_PERCENTconf] = ACTIONS(325),
    [anon_sym_PERCENTbuild] = ACTIONS(325),
    [anon_sym_PERCENTinstall] = ACTIONS(325),
    [anon_sym_PERCENTcheck] = ACTIONS(325),
    [anon_sym_PERCENTclean] = ACTIONS(325),
    [anon_sym_PERCENTpre] = ACTIONS(325),
    [anon_sym_PERCENTpost] = ACTIONS(325),
    [anon_sym_PERCENTpreun] = ACTIONS(325),
    [anon_sym_PERCENTpostun] = ACTIONS(325),
    [anon_sym_PERCENTpretrans] = ACTIONS(325),
    [anon_sym_PERCENTposttrans] = ACTIONS(325),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(325),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(325),
    [anon_sym_PERCENTverify] = ACTIONS(325),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(325),
    [anon_sym_PERCENTtriggerin] = ACTIONS(325),
    [anon_sym_PERCENTtriggerun] = ACTIONS(325),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(325),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(325),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(325),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(325),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(325),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(325),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(325),
    [anon_sym_PERCENTfiles] = ACTIONS(325),
    [anon_sym_PERCENTchangelog] = ACTIONS(325),
    [anon_sym_PERCENTglobal] = ACTIONS(325),
    [anon_sym_PERCENTdefine] = ACTIONS(325),
    [anon_sym_PERCENTundefine] = ACTIONS(325),
    [anon_sym_PERCENT] = ACTIONS(325),
    [sym_string_content_with_newlines] = ACTIONS(325),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(325),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(325),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [aux_sym__simple_statements_token1] = ACTIONS(399),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(399),
    [anon_sym_PERCENTifarch] = ACTIONS(399),
    [anon_sym_PERCENTifos] = ACTIONS(399),
    [anon_sym_PERCENTifnarch] = ACTIONS(399),
    [anon_sym_PERCENTifnos] = ACTIONS(399),
    [anon_sym_AutoProv] = ACTIONS(399),
    [anon_sym_AutoReq] = ACTIONS(399),
    [anon_sym_AutoReqProv] = ACTIONS(399),
    [anon_sym_BugUrl] = ACTIONS(399),
    [anon_sym_BuildRoot] = ACTIONS(399),
    [anon_sym_BuildSystem] = ACTIONS(399),
    [anon_sym_DistTag] = ACTIONS(399),
    [anon_sym_Distribution] = ACTIONS(399),
    [anon_sym_Epoch] = ACTIONS(399),
    [anon_sym_Group] = ACTIONS(399),
    [anon_sym_License] = ACTIONS(399),
    [anon_sym_ModularityLabel] = ACTIONS(399),
    [anon_sym_Name] = ACTIONS(399),
    [anon_sym_NoPatch] = ACTIONS(399),
    [anon_sym_NoSource] = ACTIONS(399),
    [anon_sym_Packager] = ACTIONS(399),
    [anon_sym_Release] = ACTIONS(399),
    [anon_sym_SourceLicense] = ACTIONS(399),
    [anon_sym_Summary] = ACTIONS(399),
    [anon_sym_URL] = ACTIONS(399),
    [anon_sym_Url] = ACTIONS(399),
    [anon_sym_VCS] = ACTIONS(399),
    [anon_sym_Vendor] = ACTIONS(399),
    [anon_sym_Version] = ACTIONS(399),
    [aux_sym_tag_token1] = ACTIONS(399),
    [aux_sym_tag_token2] = ACTIONS(399),
    [anon_sym_Requires] = ACTIONS(399),
    [anon_sym_BuildArch] = ACTIONS(399),
    [anon_sym_BuildArchitectures] = ACTIONS(399),
    [anon_sym_BuildConflicts] = ACTIONS(399),
    [anon_sym_BuildPrereq] = ACTIONS(399),
    [anon_sym_BuildRequires] = ACTIONS(399),
    [anon_sym_Conflicts] = ACTIONS(399),
    [anon_sym_DocDir] = ACTIONS(399),
    [anon_sym_Enhances] = ACTIONS(399),
    [anon_sym_ExcludeArch] = ACTIONS(399),
    [anon_sym_ExcludeOS] = ACTIONS(399),
    [anon_sym_ExclusiveArch] = ACTIONS(399),
    [anon_sym_ExclusiveOS] = ACTIONS(399),
    [anon_sym_Obsoletes] = ACTIONS(399),
    [anon_sym_OrderWithRequires] = ACTIONS(399),
    [anon_sym_Prefix] = ACTIONS(399),
    [anon_sym_Prefixes] = ACTIONS(399),
    [anon_sym_Prereq] = ACTIONS(399),
    [anon_sym_Provides] = ACTIONS(399),
    [anon_sym_Recommends] = ACTIONS(399),
    [anon_sym_RemovePathPostfixes] = ACTIONS(399),
    [anon_sym_Suggests] = ACTIONS(399),
    [anon_sym_Supplements] = ACTIONS(399),
    [anon_sym_PERCENTdescription] = ACTIONS(399),
    [anon_sym_PERCENTpackage] = ACTIONS(399),
    [anon_sym_PERCENTprep] = ACTIONS(399),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(399),
    [anon_sym_PERCENTconf] = ACTIONS(399),
    [anon_sym_PERCENTbuild] = ACTIONS(399),
    [anon_sym_PERCENTinstall] = ACTIONS(399),
    [anon_sym_PERCENTcheck] = ACTIONS(399),
    [anon_sym_PERCENTclean] = ACTIONS(399),
    [anon_sym_PERCENTpre] = ACTIONS(399),
    [anon_sym_PERCENTpost] = ACTIONS(399),
    [anon_sym_PERCENTpreun] = ACTIONS(399),
    [anon_sym_PERCENTpostun] = ACTIONS(399),
    [anon_sym_PERCENTpretrans] = ACTIONS(399),
    [anon_sym_PERCENTposttrans] = ACTIONS(399),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(399),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(399),
    [anon_sym_PERCENTverify] = ACTIONS(399),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(399),
    [anon_sym_PERCENTtriggerin] = ACTIONS(399),
    [anon_sym_PERCENTtriggerun] = ACTIONS(399),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(399),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(399),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(399),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(399),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(399),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(399),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(399),
    [anon_sym_PERCENTfiles] = ACTIONS(399),
    [anon_sym_PERCENTchangelog] = ACTIONS(399),
    [anon_sym_PERCENTglobal] = ACTIONS(399),
    [anon_sym_PERCENTdefine] = ACTIONS(399),
    [anon_sym_PERCENTundefine] = ACTIONS(399),
    [anon_sym_PERCENT] = ACTIONS(399),
    [sym_string_content_with_newlines] = ACTIONS(399),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(399),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(399),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [aux_sym__simple_statements_token1] = ACTIONS(401),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(403),
    [anon_sym_PERCENTifarch] = ACTIONS(403),
    [anon_sym_PERCENTifos] = ACTIONS(403),
    [anon_sym_PERCENTifnarch] = ACTIONS(403),
    [anon_sym_PERCENTifnos] = ACTIONS(403),
    [anon_sym_AutoProv] = ACTIONS(403),
    [anon_sym_AutoReq] = ACTIONS(403),
    [anon_sym_AutoReqProv] = ACTIONS(403),
    [anon_sym_BugUrl] = ACTIONS(403),
    [anon_sym_BuildRoot] = ACTIONS(403),
    [anon_sym_BuildSystem] = ACTIONS(403),
    [anon_sym_DistTag] = ACTIONS(403),
    [anon_sym_Distribution] = ACTIONS(403),
    [anon_sym_Epoch] = ACTIONS(403),
    [anon_sym_Group] = ACTIONS(403),
    [anon_sym_License] = ACTIONS(403),
    [anon_sym_ModularityLabel] = ACTIONS(403),
    [anon_sym_Name] = ACTIONS(403),
    [anon_sym_NoPatch] = ACTIONS(403),
    [anon_sym_NoSource] = ACTIONS(403),
    [anon_sym_Packager] = ACTIONS(403),
    [anon_sym_Release] = ACTIONS(403),
    [anon_sym_SourceLicense] = ACTIONS(403),
    [anon_sym_Summary] = ACTIONS(403),
    [anon_sym_URL] = ACTIONS(403),
    [anon_sym_Url] = ACTIONS(403),
    [anon_sym_VCS] = ACTIONS(403),
    [anon_sym_Vendor] = ACTIONS(403),
    [anon_sym_Version] = ACTIONS(403),
    [aux_sym_tag_token1] = ACTIONS(403),
    [aux_sym_tag_token2] = ACTIONS(403),
    [anon_sym_Requires] = ACTIONS(403),
    [anon_sym_BuildArch] = ACTIONS(403),
    [anon_sym_BuildArchitectures] = ACTIONS(403),
    [anon_sym_BuildConflicts] = ACTIONS(403),
    [anon_sym_BuildPrereq] = ACTIONS(403),
    [anon_sym_BuildRequires] = ACTIONS(403),
    [anon_sym_Conflicts] = ACTIONS(403),
    [anon_sym_DocDir] = ACTIONS(403),
    [anon_sym_Enhances] = ACTIONS(403),
    [anon_sym_ExcludeArch] = ACTIONS(403),
    [anon_sym_ExcludeOS] = ACTIONS(403),
    [anon_sym_ExclusiveArch] = ACTIONS(403),
    [anon_sym_ExclusiveOS] = ACTIONS(403),
    [anon_sym_Obsoletes] = ACTIONS(403),
    [anon_sym_OrderWithRequires] = ACTIONS(403),
    [anon_sym_Prefix] = ACTIONS(403),
    [anon_sym_Prefixes] = ACTIONS(403),
    [anon_sym_Prereq] = ACTIONS(403),
    [anon_sym_Provides] = ACTIONS(403),
    [anon_sym_Recommends] = ACTIONS(403),
    [anon_sym_RemovePathPostfixes] = ACTIONS(403),
    [anon_sym_Suggests] = ACTIONS(403),
    [anon_sym_Supplements] = ACTIONS(403),
    [anon_sym_PERCENTdescription] = ACTIONS(403),
    [anon_sym_PERCENTpackage] = ACTIONS(403),
    [anon_sym_PERCENTprep] = ACTIONS(403),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(403),
    [anon_sym_PERCENTconf] = ACTIONS(403),
    [anon_sym_PERCENTbuild] = ACTIONS(403),
    [anon_sym_PERCENTinstall] = ACTIONS(403),
    [anon_sym_PERCENTcheck] = ACTIONS(403),
    [anon_sym_PERCENTclean] = ACTIONS(403),
    [anon_sym_PERCENTpre] = ACTIONS(403),
    [anon_sym_PERCENTpost] = ACTIONS(403),
    [anon_sym_PERCENTpreun] = ACTIONS(403),
    [anon_sym_PERCENTpostun] = ACTIONS(403),
    [anon_sym_PERCENTpretrans] = ACTIONS(403),
    [anon_sym_PERCENTposttrans] = ACTIONS(403),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(403),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(403),
    [anon_sym_PERCENTverify] = ACTIONS(403),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(403),
    [anon_sym_PERCENTtriggerin] = ACTIONS(403),
    [anon_sym_PERCENTtriggerun] = ACTIONS(403),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(403),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(403),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(403),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(403),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(403),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(403),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(403),
    [anon_sym_PERCENTfiles] = ACTIONS(403),
    [anon_sym_PERCENTchangelog] = ACTIONS(403),
    [anon_sym_PERCENTglobal] = ACTIONS(403),
    [anon_sym_PERCENTdefine] = ACTIONS(403),
    [anon_sym_PERCENTundefine] = ACTIONS(403),
    [anon_sym_PERCENT] = ACTIONS(403),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(403),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(403),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [aux_sym__simple_statements_token1] = ACTIONS(405),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(407),
    [anon_sym_PERCENTifarch] = ACTIONS(407),
    [anon_sym_PERCENTifos] = ACTIONS(407),
    [anon_sym_PERCENTifnarch] = ACTIONS(407),
    [anon_sym_PERCENTifnos] = ACTIONS(407),
    [anon_sym_AutoProv] = ACTIONS(407),
    [anon_sym_AutoReq] = ACTIONS(407),
    [anon_sym_AutoReqProv] = ACTIONS(407),
    [anon_sym_BugUrl] = ACTIONS(407),
    [anon_sym_BuildRoot] = ACTIONS(407),
    [anon_sym_BuildSystem] = ACTIONS(407),
    [anon_sym_DistTag] = ACTIONS(407),
    [anon_sym_Distribution] = ACTIONS(407),
    [anon_sym_Epoch] = ACTIONS(407),
    [anon_sym_Group] = ACTIONS(407),
    [anon_sym_License] = ACTIONS(407),
    [anon_sym_ModularityLabel] = ACTIONS(407),
    [anon_sym_Name] = ACTIONS(407),
    [anon_sym_NoPatch] = ACTIONS(407),
    [anon_sym_NoSource] = ACTIONS(407),
    [anon_sym_Packager] = ACTIONS(407),
    [anon_sym_Release] = ACTIONS(407),
    [anon_sym_SourceLicense] = ACTIONS(407),
    [anon_sym_Summary] = ACTIONS(407),
    [anon_sym_URL] = ACTIONS(407),
    [anon_sym_Url] = ACTIONS(407),
    [anon_sym_VCS] = ACTIONS(407),
    [anon_sym_Vendor] = ACTIONS(407),
    [anon_sym_Version] = ACTIONS(407),
    [aux_sym_tag_token1] = ACTIONS(407),
    [aux_sym_tag_token2] = ACTIONS(407),
    [anon_sym_Requires] = ACTIONS(407),
    [anon_sym_BuildArch] = ACTIONS(407),
    [anon_sym_BuildArchitectures] = ACTIONS(407),
    [anon_sym_BuildConflicts] = ACTIONS(407),
    [anon_sym_BuildPrereq] = ACTIONS(407),
    [anon_sym_BuildRequires] = ACTIONS(407),
    [anon_sym_Conflicts] = ACTIONS(407),
    [anon_sym_DocDir] = ACTIONS(407),
    [anon_sym_Enhances] = ACTIONS(407),
    [anon_sym_ExcludeArch] = ACTIONS(407),
    [anon_sym_ExcludeOS] = ACTIONS(407),
    [anon_sym_ExclusiveArch] = ACTIONS(407),
    [anon_sym_ExclusiveOS] = ACTIONS(407),
    [anon_sym_Obsoletes] = ACTIONS(407),
    [anon_sym_OrderWithRequires] = ACTIONS(407),
    [anon_sym_Prefix] = ACTIONS(407),
    [anon_sym_Prefixes] = ACTIONS(407),
    [anon_sym_Prereq] = ACTIONS(407),
    [anon_sym_Provides] = ACTIONS(407),
    [anon_sym_Recommends] = ACTIONS(407),
    [anon_sym_RemovePathPostfixes] = ACTIONS(407),
    [anon_sym_Suggests] = ACTIONS(407),
    [anon_sym_Supplements] = ACTIONS(407),
    [anon_sym_PERCENTdescription] = ACTIONS(407),
    [anon_sym_PERCENTpackage] = ACTIONS(407),
    [anon_sym_PERCENTprep] = ACTIONS(407),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(407),
    [anon_sym_PERCENTconf] = ACTIONS(407),
    [anon_sym_PERCENTbuild] = ACTIONS(407),
    [anon_sym_PERCENTinstall] = ACTIONS(407),
    [anon_sym_PERCENTcheck] = ACTIONS(407),
    [anon_sym_PERCENTclean] = ACTIONS(407),
    [anon_sym_PERCENTpre] = ACTIONS(407),
    [anon_sym_PERCENTpost] = ACTIONS(407),
    [anon_sym_PERCENTpreun] = ACTIONS(407),
    [anon_sym_PERCENTpostun] = ACTIONS(407),
    [anon_sym_PERCENTpretrans] = ACTIONS(407),
    [anon_sym_PERCENTposttrans] = ACTIONS(407),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(407),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(407),
    [anon_sym_PERCENTverify] = ACTIONS(407),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(407),
    [anon_sym_PERCENTtriggerin] = ACTIONS(407),
    [anon_sym_PERCENTtriggerun] = ACTIONS(407),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(407),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(407),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(407),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(407),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(407),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(407),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(407),
    [anon_sym_PERCENTfiles] = ACTIONS(407),
    [anon_sym_PERCENTchangelog] = ACTIONS(407),
    [anon_sym_PERCENTglobal] = ACTIONS(407),
    [anon_sym_PERCENTdefine] = ACTIONS(407),
    [anon_sym_PERCENTundefine] = ACTIONS(407),
    [anon_sym_PERCENT] = ACTIONS(407),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(407),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(407),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [aux_sym__simple_statements_token1] = ACTIONS(409),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(411),
    [anon_sym_PERCENTifarch] = ACTIONS(411),
    [anon_sym_PERCENTifos] = ACTIONS(411),
    [anon_sym_PERCENTifnarch] = ACTIONS(411),
    [anon_sym_PERCENTifnos] = ACTIONS(411),
    [anon_sym_AutoProv] = ACTIONS(411),
    [anon_sym_AutoReq] = ACTIONS(411),
    [anon_sym_AutoReqProv] = ACTIONS(411),
    [anon_sym_BugUrl] = ACTIONS(411),
    [anon_sym_BuildRoot] = ACTIONS(411),
    [anon_sym_BuildSystem] = ACTIONS(411),
    [anon_sym_DistTag] = ACTIONS(411),
    [anon_sym_Distribution] = ACTIONS(411),
    [anon_sym_Epoch] = ACTIONS(411),
    [anon_sym_Group] = ACTIONS(411),
    [anon_sym_License] = ACTIONS(411),
    [anon_sym_ModularityLabel] = ACTIONS(411),
    [anon_sym_Name] = ACTIONS(411),
    [anon_sym_NoPatch] = ACTIONS(411),
    [anon_sym_NoSource] = ACTIONS(411),
    [anon_sym_Packager] = ACTIONS(411),
    [anon_sym_Release] = ACTIONS(411),
    [anon_sym_SourceLicense] = ACTIONS(411),
    [anon_sym_Summary] = ACTIONS(411),
    [anon_sym_URL] = ACTIONS(411),
    [anon_sym_Url] = ACTIONS(411),
    [anon_sym_VCS] = ACTIONS(411),
    [anon_sym_Vendor] = ACTIONS(411),
    [anon_sym_Version] = ACTIONS(411),
    [aux_sym_tag_token1] = ACTIONS(411),
    [aux_sym_tag_token2] = ACTIONS(411),
    [anon_sym_Requires] = ACTIONS(411),
    [anon_sym_BuildArch] = ACTIONS(411),
    [anon_sym_BuildArchitectures] = ACTIONS(411),
    [anon_sym_BuildConflicts] = ACTIONS(411),
    [anon_sym_BuildPrereq] = ACTIONS(411),
    [anon_sym_BuildRequires] = ACTIONS(411),
    [anon_sym_Conflicts] = ACTIONS(411),
    [anon_sym_DocDir] = ACTIONS(411),
    [anon_sym_Enhances] = ACTIONS(411),
    [anon_sym_ExcludeArch] = ACTIONS(411),
    [anon_sym_ExcludeOS] = ACTIONS(411),
    [anon_sym_ExclusiveArch] = ACTIONS(411),
    [anon_sym_ExclusiveOS] = ACTIONS(411),
    [anon_sym_Obsoletes] = ACTIONS(411),
    [anon_sym_OrderWithRequires] = ACTIONS(411),
    [anon_sym_Prefix] = ACTIONS(411),
    [anon_sym_Prefixes] = ACTIONS(411),
    [anon_sym_Prereq] = ACTIONS(411),
    [anon_sym_Provides] = ACTIONS(411),
    [anon_sym_Recommends] = ACTIONS(411),
    [anon_sym_RemovePathPostfixes] = ACTIONS(411),
    [anon_sym_Suggests] = ACTIONS(411),
    [anon_sym_Supplements] = ACTIONS(411),
    [anon_sym_PERCENTdescription] = ACTIONS(411),
    [anon_sym_PERCENTpackage] = ACTIONS(411),
    [anon_sym_PERCENTprep] = ACTIONS(411),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(411),
    [anon_sym_PERCENTconf] = ACTIONS(411),
    [anon_sym_PERCENTbuild] = ACTIONS(411),
    [anon_sym_PERCENTinstall] = ACTIONS(411),
    [anon_sym_PERCENTcheck] = ACTIONS(411),
    [anon_sym_PERCENTclean] = ACTIONS(411),
    [anon_sym_PERCENTpre] = ACTIONS(411),
    [anon_sym_PERCENTpost] = ACTIONS(411),
    [anon_sym_PERCENTpreun] = ACTIONS(411),
    [anon_sym_PERCENTpostun] = ACTIONS(411),
    [anon_sym_PERCENTpretrans] = ACTIONS(411),
    [anon_sym_PERCENTposttrans] = ACTIONS(411),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(411),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(411),
    [anon_sym_PERCENTverify] = ACTIONS(411),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(411),
    [anon_sym_PERCENTtriggerin] = ACTIONS(411),
    [anon_sym_PERCENTtriggerun] = ACTIONS(411),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(411),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(411),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(411),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(411),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(411),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(411),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(411),
    [anon_sym_PERCENTfiles] = ACTIONS(411),
    [anon_sym_PERCENTchangelog] = ACTIONS(411),
    [anon_sym_PERCENTglobal] = ACTIONS(411),
    [anon_sym_PERCENTdefine] = ACTIONS(411),
    [anon_sym_PERCENTundefine] = ACTIONS(411),
    [anon_sym_PERCENT] = ACTIONS(411),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(411),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(411),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(413),
    [aux_sym__simple_statements_token1] = ACTIONS(413),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(415),
    [anon_sym_PERCENTifarch] = ACTIONS(415),
    [anon_sym_PERCENTifos] = ACTIONS(415),
    [anon_sym_PERCENTifnarch] = ACTIONS(415),
    [anon_sym_PERCENTifnos] = ACTIONS(415),
    [anon_sym_AutoProv] = ACTIONS(415),
    [anon_sym_AutoReq] = ACTIONS(415),
    [anon_sym_AutoReqProv] = ACTIONS(415),
    [anon_sym_BugUrl] = ACTIONS(415),
    [anon_sym_BuildRoot] = ACTIONS(415),
    [anon_sym_BuildSystem] = ACTIONS(415),
    [anon_sym_DistTag] = ACTIONS(415),
    [anon_sym_Distribution] = ACTIONS(415),
    [anon_sym_Epoch] = ACTIONS(415),
    [anon_sym_Group] = ACTIONS(415),
    [anon_sym_License] = ACTIONS(415),
    [anon_sym_ModularityLabel] = ACTIONS(415),
    [anon_sym_Name] = ACTIONS(415),
    [anon_sym_NoPatch] = ACTIONS(415),
    [anon_sym_NoSource] = ACTIONS(415),
    [anon_sym_Packager] = ACTIONS(415),
    [anon_sym_Release] = ACTIONS(415),
    [anon_sym_SourceLicense] = ACTIONS(415),
    [anon_sym_Summary] = ACTIONS(415),
    [anon_sym_URL] = ACTIONS(415),
    [anon_sym_Url] = ACTIONS(415),
    [anon_sym_VCS] = ACTIONS(415),
    [anon_sym_Vendor] = ACTIONS(415),
    [anon_sym_Version] = ACTIONS(415),
    [aux_sym_tag_token1] = ACTIONS(415),
    [aux_sym_tag_token2] = ACTIONS(415),
    [anon_sym_Requires] = ACTIONS(415),
    [anon_sym_BuildArch] = ACTIONS(415),
    [anon_sym_BuildArchitectures] = ACTIONS(415),
    [anon_sym_BuildConflicts] = ACTIONS(415),
    [anon_sym_BuildPrereq] = ACTIONS(415),
    [anon_sym_BuildRequires] = ACTIONS(415),
    [anon_sym_Conflicts] = ACTIONS(415),
    [anon_sym_DocDir] = ACTIONS(415),
    [anon_sym_Enhances] = ACTIONS(415),
    [anon_sym_ExcludeArch] = ACTIONS(415),
    [anon_sym_ExcludeOS] = ACTIONS(415),
    [anon_sym_ExclusiveArch] = ACTIONS(415),
    [anon_sym_ExclusiveOS] = ACTIONS(415),
    [anon_sym_Obsoletes] = ACTIONS(415),
    [anon_sym_OrderWithRequires] = ACTIONS(415),
    [anon_sym_Prefix] = ACTIONS(415),
    [anon_sym_Prefixes] = ACTIONS(415),
    [anon_sym_Prereq] = ACTIONS(415),
    [anon_sym_Provides] = ACTIONS(415),
    [anon_sym_Recommends] = ACTIONS(415),
    [anon_sym_RemovePathPostfixes] = ACTIONS(415),
    [anon_sym_Suggests] = ACTIONS(415),
    [anon_sym_Supplements] = ACTIONS(415),
    [anon_sym_PERCENTdescription] = ACTIONS(415),
    [anon_sym_PERCENTpackage] = ACTIONS(415),
    [anon_sym_PERCENTprep] = ACTIONS(415),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(415),
    [anon_sym_PERCENTconf] = ACTIONS(415),
    [anon_sym_PERCENTbuild] = ACTIONS(415),
    [anon_sym_PERCENTinstall] = ACTIONS(415),
    [anon_sym_PERCENTcheck] = ACTIONS(415),
    [anon_sym_PERCENTclean] = ACTIONS(415),
    [anon_sym_PERCENTpre] = ACTIONS(415),
    [anon_sym_PERCENTpost] = ACTIONS(415),
    [anon_sym_PERCENTpreun] = ACTIONS(415),
    [anon_sym_PERCENTpostun] = ACTIONS(415),
    [anon_sym_PERCENTpretrans] = ACTIONS(415),
    [anon_sym_PERCENTposttrans] = ACTIONS(415),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(415),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(415),
    [anon_sym_PERCENTverify] = ACTIONS(415),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(415),
    [anon_sym_PERCENTtriggerin] = ACTIONS(415),
    [anon_sym_PERCENTtriggerun] = ACTIONS(415),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(415),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(415),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(415),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(415),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(415),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(415),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(415),
    [anon_sym_PERCENTfiles] = ACTIONS(415),
    [anon_sym_PERCENTchangelog] = ACTIONS(415),
    [anon_sym_PERCENTglobal] = ACTIONS(415),
    [anon_sym_PERCENTdefine] = ACTIONS(415),
    [anon_sym_PERCENTundefine] = ACTIONS(415),
    [anon_sym_PERCENT] = ACTIONS(415),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(415),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(415),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(413),
    [aux_sym__simple_statements_token1] = ACTIONS(413),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(415),
    [anon_sym_PERCENTifarch] = ACTIONS(415),
    [anon_sym_PERCENTifos] = ACTIONS(415),
    [anon_sym_PERCENTifnarch] = ACTIONS(415),
    [anon_sym_PERCENTifnos] = ACTIONS(415),
    [anon_sym_AutoProv] = ACTIONS(415),
    [anon_sym_AutoReq] = ACTIONS(415),
    [anon_sym_AutoReqProv] = ACTIONS(415),
    [anon_sym_BugUrl] = ACTIONS(415),
    [anon_sym_BuildRoot] = ACTIONS(415),
    [anon_sym_BuildSystem] = ACTIONS(415),
    [anon_sym_DistTag] = ACTIONS(415),
    [anon_sym_Distribution] = ACTIONS(415),
    [anon_sym_Epoch] = ACTIONS(415),
    [anon_sym_Group] = ACTIONS(415),
    [anon_sym_License] = ACTIONS(415),
    [anon_sym_ModularityLabel] = ACTIONS(415),
    [anon_sym_Name] = ACTIONS(415),
    [anon_sym_NoPatch] = ACTIONS(415),
    [anon_sym_NoSource] = ACTIONS(415),
    [anon_sym_Packager] = ACTIONS(415),
    [anon_sym_Release] = ACTIONS(415),
    [anon_sym_SourceLicense] = ACTIONS(415),
    [anon_sym_Summary] = ACTIONS(415),
    [anon_sym_URL] = ACTIONS(415),
    [anon_sym_Url] = ACTIONS(415),
    [anon_sym_VCS] = ACTIONS(415),
    [anon_sym_Vendor] = ACTIONS(415),
    [anon_sym_Version] = ACTIONS(415),
    [aux_sym_tag_token1] = ACTIONS(415),
    [aux_sym_tag_token2] = ACTIONS(415),
    [anon_sym_Requires] = ACTIONS(415),
    [anon_sym_BuildArch] = ACTIONS(415),
    [anon_sym_BuildArchitectures] = ACTIONS(415),
    [anon_sym_BuildConflicts] = ACTIONS(415),
    [anon_sym_BuildPrereq] = ACTIONS(415),
    [anon_sym_BuildRequires] = ACTIONS(415),
    [anon_sym_Conflicts] = ACTIONS(415),
    [anon_sym_DocDir] = ACTIONS(415),
    [anon_sym_Enhances] = ACTIONS(415),
    [anon_sym_ExcludeArch] = ACTIONS(415),
    [anon_sym_ExcludeOS] = ACTIONS(415),
    [anon_sym_ExclusiveArch] = ACTIONS(415),
    [anon_sym_ExclusiveOS] = ACTIONS(415),
    [anon_sym_Obsoletes] = ACTIONS(415),
    [anon_sym_OrderWithRequires] = ACTIONS(415),
    [anon_sym_Prefix] = ACTIONS(415),
    [anon_sym_Prefixes] = ACTIONS(415),
    [anon_sym_Prereq] = ACTIONS(415),
    [anon_sym_Provides] = ACTIONS(415),
    [anon_sym_Recommends] = ACTIONS(415),
    [anon_sym_RemovePathPostfixes] = ACTIONS(415),
    [anon_sym_Suggests] = ACTIONS(415),
    [anon_sym_Supplements] = ACTIONS(415),
    [anon_sym_PERCENTdescription] = ACTIONS(415),
    [anon_sym_PERCENTpackage] = ACTIONS(415),
    [anon_sym_PERCENTprep] = ACTIONS(415),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(415),
    [anon_sym_PERCENTconf] = ACTIONS(415),
    [anon_sym_PERCENTbuild] = ACTIONS(415),
    [anon_sym_PERCENTinstall] = ACTIONS(415),
    [anon_sym_PERCENTcheck] = ACTIONS(415),
    [anon_sym_PERCENTclean] = ACTIONS(415),
    [anon_sym_PERCENTpre] = ACTIONS(415),
    [anon_sym_PERCENTpost] = ACTIONS(415),
    [anon_sym_PERCENTpreun] = ACTIONS(415),
    [anon_sym_PERCENTpostun] = ACTIONS(415),
    [anon_sym_PERCENTpretrans] = ACTIONS(415),
    [anon_sym_PERCENTposttrans] = ACTIONS(415),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(415),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(415),
    [anon_sym_PERCENTverify] = ACTIONS(415),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(415),
    [anon_sym_PERCENTtriggerin] = ACTIONS(415),
    [anon_sym_PERCENTtriggerun] = ACTIONS(415),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(415),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(415),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(415),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(415),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(415),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(415),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(415),
    [anon_sym_PERCENTfiles] = ACTIONS(415),
    [anon_sym_PERCENTchangelog] = ACTIONS(415),
    [anon_sym_PERCENTglobal] = ACTIONS(415),
    [anon_sym_PERCENTdefine] = ACTIONS(415),
    [anon_sym_PERCENTundefine] = ACTIONS(415),
    [anon_sym_PERCENT] = ACTIONS(415),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(415),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(415),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [aux_sym__simple_statements_token1] = ACTIONS(417),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(419),
    [anon_sym_PERCENTifarch] = ACTIONS(419),
    [anon_sym_PERCENTifos] = ACTIONS(419),
    [anon_sym_PERCENTifnarch] = ACTIONS(419),
    [anon_sym_PERCENTifnos] = ACTIONS(419),
    [anon_sym_AutoProv] = ACTIONS(419),
    [anon_sym_AutoReq] = ACTIONS(419),
    [anon_sym_AutoReqProv] = ACTIONS(419),
    [anon_sym_BugUrl] = ACTIONS(419),
    [anon_sym_BuildRoot] = ACTIONS(419),
    [anon_sym_BuildSystem] = ACTIONS(419),
    [anon_sym_DistTag] = ACTIONS(419),
    [anon_sym_Distribution] = ACTIONS(419),
    [anon_sym_Epoch] = ACTIONS(419),
    [anon_sym_Group] = ACTIONS(419),
    [anon_sym_License] = ACTIONS(419),
    [anon_sym_ModularityLabel] = ACTIONS(419),
    [anon_sym_Name] = ACTIONS(419),
    [anon_sym_NoPatch] = ACTIONS(419),
    [anon_sym_NoSource] = ACTIONS(419),
    [anon_sym_Packager] = ACTIONS(419),
    [anon_sym_Release] = ACTIONS(419),
    [anon_sym_SourceLicense] = ACTIONS(419),
    [anon_sym_Summary] = ACTIONS(419),
    [anon_sym_URL] = ACTIONS(419),
    [anon_sym_Url] = ACTIONS(419),
    [anon_sym_VCS] = ACTIONS(419),
    [anon_sym_Vendor] = ACTIONS(419),
    [anon_sym_Version] = ACTIONS(419),
    [aux_sym_tag_token1] = ACTIONS(419),
    [aux_sym_tag_token2] = ACTIONS(419),
    [anon_sym_Requires] = ACTIONS(419),
    [anon_sym_BuildArch] = ACTIONS(419),
    [anon_sym_BuildArchitectures] = ACTIONS(419),
    [anon_sym_BuildConflicts] = ACTIONS(419),
    [anon_sym_BuildPrereq] = ACTIONS(419),
    [anon_sym_BuildRequires] = ACTIONS(419),
    [anon_sym_Conflicts] = ACTIONS(419),
    [anon_sym_DocDir] = ACTIONS(419),
    [anon_sym_Enhances] = ACTIONS(419),
    [anon_sym_ExcludeArch] = ACTIONS(419),
    [anon_sym_ExcludeOS] = ACTIONS(419),
    [anon_sym_ExclusiveArch] = ACTIONS(419),
    [anon_sym_ExclusiveOS] = ACTIONS(419),
    [anon_sym_Obsoletes] = ACTIONS(419),
    [anon_sym_OrderWithRequires] = ACTIONS(419),
    [anon_sym_Prefix] = ACTIONS(419),
    [anon_sym_Prefixes] = ACTIONS(419),
    [anon_sym_Prereq] = ACTIONS(419),
    [anon_sym_Provides] = ACTIONS(419),
    [anon_sym_Recommends] = ACTIONS(419),
    [anon_sym_RemovePathPostfixes] = ACTIONS(419),
    [anon_sym_Suggests] = ACTIONS(419),
    [anon_sym_Supplements] = ACTIONS(419),
    [anon_sym_PERCENTdescription] = ACTIONS(419),
    [anon_sym_PERCENTpackage] = ACTIONS(419),
    [anon_sym_PERCENTprep] = ACTIONS(419),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(419),
    [anon_sym_PERCENTconf] = ACTIONS(419),
    [anon_sym_PERCENTbuild] = ACTIONS(419),
    [anon_sym_PERCENTinstall] = ACTIONS(419),
    [anon_sym_PERCENTcheck] = ACTIONS(419),
    [anon_sym_PERCENTclean] = ACTIONS(419),
    [anon_sym_PERCENTpre] = ACTIONS(419),
    [anon_sym_PERCENTpost] = ACTIONS(419),
    [anon_sym_PERCENTpreun] = ACTIONS(419),
    [anon_sym_PERCENTpostun] = ACTIONS(419),
    [anon_sym_PERCENTpretrans] = ACTIONS(419),
    [anon_sym_PERCENTposttrans] = ACTIONS(419),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(419),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(419),
    [anon_sym_PERCENTverify] = ACTIONS(419),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(419),
    [anon_sym_PERCENTtriggerin] = ACTIONS(419),
    [anon_sym_PERCENTtriggerun] = ACTIONS(419),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(419),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(419),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(419),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(419),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(419),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(419),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(419),
    [anon_sym_PERCENTfiles] = ACTIONS(419),
    [anon_sym_PERCENTchangelog] = ACTIONS(419),
    [anon_sym_PERCENTglobal] = ACTIONS(419),
    [anon_sym_PERCENTdefine] = ACTIONS(419),
    [anon_sym_PERCENTundefine] = ACTIONS(419),
    [anon_sym_PERCENT] = ACTIONS(419),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(419),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(419),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(421),
    [aux_sym__simple_statements_token1] = ACTIONS(421),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(423),
    [anon_sym_PERCENTifarch] = ACTIONS(423),
    [anon_sym_PERCENTifos] = ACTIONS(423),
    [anon_sym_PERCENTifnarch] = ACTIONS(423),
    [anon_sym_PERCENTifnos] = ACTIONS(423),
    [anon_sym_AutoProv] = ACTIONS(423),
    [anon_sym_AutoReq] = ACTIONS(423),
    [anon_sym_AutoReqProv] = ACTIONS(423),
    [anon_sym_BugUrl] = ACTIONS(423),
    [anon_sym_BuildRoot] = ACTIONS(423),
    [anon_sym_BuildSystem] = ACTIONS(423),
    [anon_sym_DistTag] = ACTIONS(423),
    [anon_sym_Distribution] = ACTIONS(423),
    [anon_sym_Epoch] = ACTIONS(423),
    [anon_sym_Group] = ACTIONS(423),
    [anon_sym_License] = ACTIONS(423),
    [anon_sym_ModularityLabel] = ACTIONS(423),
    [anon_sym_Name] = ACTIONS(423),
    [anon_sym_NoPatch] = ACTIONS(423),
    [anon_sym_NoSource] = ACTIONS(423),
    [anon_sym_Packager] = ACTIONS(423),
    [anon_sym_Release] = ACTIONS(423),
    [anon_sym_SourceLicense] = ACTIONS(423),
    [anon_sym_Summary] = ACTIONS(423),
    [anon_sym_URL] = ACTIONS(423),
    [anon_sym_Url] = ACTIONS(423),
    [anon_sym_VCS] = ACTIONS(423),
    [anon_sym_Vendor] = ACTIONS(423),
    [anon_sym_Version] = ACTIONS(423),
    [aux_sym_tag_token1] = ACTIONS(423),
    [aux_sym_tag_token2] = ACTIONS(423),
    [anon_sym_Requires] = ACTIONS(423),
    [anon_sym_BuildArch] = ACTIONS(423),
    [anon_sym_BuildArchitectures] = ACTIONS(423),
    [anon_sym_BuildConflicts] = ACTIONS(423),
    [anon_sym_BuildPrereq] = ACTIONS(423),
    [anon_sym_BuildRequires] = ACTIONS(423),
    [anon_sym_Conflicts] = ACTIONS(423),
    [anon_sym_DocDir] = ACTIONS(423),
    [anon_sym_Enhances] = ACTIONS(423),
    [anon_sym_ExcludeArch] = ACTIONS(423),
    [anon_sym_ExcludeOS] = ACTIONS(423),
    [anon_sym_ExclusiveArch] = ACTIONS(423),
    [anon_sym_ExclusiveOS] = ACTIONS(423),
    [anon_sym_Obsoletes] = ACTIONS(423),
    [anon_sym_OrderWithRequires] = ACTIONS(423),
    [anon_sym_Prefix] = ACTIONS(423),
    [anon_sym_Prefixes] = ACTIONS(423),
    [anon_sym_Prereq] = ACTIONS(423),
    [anon_sym_Provides] = ACTIONS(423),
    [anon_sym_Recommends] = ACTIONS(423),
    [anon_sym_RemovePathPostfixes] = ACTIONS(423),
    [anon_sym_Suggests] = ACTIONS(423),
    [anon_sym_Supplements] = ACTIONS(423),
    [anon_sym_PERCENTdescription] = ACTIONS(423),
    [anon_sym_PERCENTpackage] = ACTIONS(423),
    [anon_sym_PERCENTprep] = ACTIONS(423),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(423),
    [anon_sym_PERCENTconf] = ACTIONS(423),
    [anon_sym_PERCENTbuild] = ACTIONS(423),
    [anon_sym_PERCENTinstall] = ACTIONS(423),
    [anon_sym_PERCENTcheck] = ACTIONS(423),
    [anon_sym_PERCENTclean] = ACTIONS(423),
    [anon_sym_PERCENTpre] = ACTIONS(423),
    [anon_sym_PERCENTpost] = ACTIONS(423),
    [anon_sym_PERCENTpreun] = ACTIONS(423),
    [anon_sym_PERCENTpostun] = ACTIONS(423),
    [anon_sym_PERCENTpretrans] = ACTIONS(423),
    [anon_sym_PERCENTposttrans] = ACTIONS(423),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(423),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(423),
    [anon_sym_PERCENTverify] = ACTIONS(423),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(423),
    [anon_sym_PERCENTtriggerin] = ACTIONS(423),
    [anon_sym_PERCENTtriggerun] = ACTIONS(423),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(423),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(423),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(423),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(423),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(423),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(423),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(423),
    [anon_sym_PERCENTfiles] = ACTIONS(423),
    [anon_sym_PERCENTchangelog] = ACTIONS(423),
    [anon_sym_PERCENTglobal] = ACTIONS(423),
    [anon_sym_PERCENTdefine] = ACTIONS(423),
    [anon_sym_PERCENTundefine] = ACTIONS(423),
    [anon_sym_PERCENT] = ACTIONS(423),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(423),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(423),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [aux_sym__simple_statements_token1] = ACTIONS(389),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(391),
    [anon_sym_PERCENTifarch] = ACTIONS(391),
    [anon_sym_PERCENTifos] = ACTIONS(391),
    [anon_sym_PERCENTifnarch] = ACTIONS(391),
    [anon_sym_PERCENTifnos] = ACTIONS(391),
    [anon_sym_AutoProv] = ACTIONS(391),
    [anon_sym_AutoReq] = ACTIONS(391),
    [anon_sym_AutoReqProv] = ACTIONS(391),
    [anon_sym_BugUrl] = ACTIONS(391),
    [anon_sym_BuildRoot] = ACTIONS(391),
    [anon_sym_BuildSystem] = ACTIONS(391),
    [anon_sym_DistTag] = ACTIONS(391),
    [anon_sym_Distribution] = ACTIONS(391),
    [anon_sym_Epoch] = ACTIONS(391),
    [anon_sym_Group] = ACTIONS(391),
    [anon_sym_License] = ACTIONS(391),
    [anon_sym_ModularityLabel] = ACTIONS(391),
    [anon_sym_Name] = ACTIONS(391),
    [anon_sym_NoPatch] = ACTIONS(391),
    [anon_sym_NoSource] = ACTIONS(391),
    [anon_sym_Packager] = ACTIONS(391),
    [anon_sym_Release] = ACTIONS(391),
    [anon_sym_SourceLicense] = ACTIONS(391),
    [anon_sym_Summary] = ACTIONS(391),
    [anon_sym_URL] = ACTIONS(391),
    [anon_sym_Url] = ACTIONS(391),
    [anon_sym_VCS] = ACTIONS(391),
    [anon_sym_Vendor] = ACTIONS(391),
    [anon_sym_Version] = ACTIONS(391),
    [aux_sym_tag_token1] = ACTIONS(391),
    [aux_sym_tag_token2] = ACTIONS(391),
    [anon_sym_Requires] = ACTIONS(391),
    [anon_sym_BuildArch] = ACTIONS(391),
    [anon_sym_BuildArchitectures] = ACTIONS(391),
    [anon_sym_BuildConflicts] = ACTIONS(391),
    [anon_sym_BuildPrereq] = ACTIONS(391),
    [anon_sym_BuildRequires] = ACTIONS(391),
    [anon_sym_Conflicts] = ACTIONS(391),
    [anon_sym_DocDir] = ACTIONS(391),
    [anon_sym_Enhances] = ACTIONS(391),
    [anon_sym_ExcludeArch] = ACTIONS(391),
    [anon_sym_ExcludeOS] = ACTIONS(391),
    [anon_sym_ExclusiveArch] = ACTIONS(391),
    [anon_sym_ExclusiveOS] = ACTIONS(391),
    [anon_sym_Obsoletes] = ACTIONS(391),
    [anon_sym_OrderWithRequires] = ACTIONS(391),
    [anon_sym_Prefix] = ACTIONS(391),
    [anon_sym_Prefixes] = ACTIONS(391),
    [anon_sym_Prereq] = ACTIONS(391),
    [anon_sym_Provides] = ACTIONS(391),
    [anon_sym_Recommends] = ACTIONS(391),
    [anon_sym_RemovePathPostfixes] = ACTIONS(391),
    [anon_sym_Suggests] = ACTIONS(391),
    [anon_sym_Supplements] = ACTIONS(391),
    [anon_sym_PERCENTdescription] = ACTIONS(391),
    [anon_sym_PERCENTpackage] = ACTIONS(391),
    [anon_sym_PERCENTprep] = ACTIONS(391),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(391),
    [anon_sym_PERCENTconf] = ACTIONS(391),
    [anon_sym_PERCENTbuild] = ACTIONS(391),
    [anon_sym_PERCENTinstall] = ACTIONS(391),
    [anon_sym_PERCENTcheck] = ACTIONS(391),
    [anon_sym_PERCENTclean] = ACTIONS(391),
    [anon_sym_PERCENTpre] = ACTIONS(391),
    [anon_sym_PERCENTpost] = ACTIONS(391),
    [anon_sym_PERCENTpreun] = ACTIONS(391),
    [anon_sym_PERCENTpostun] = ACTIONS(391),
    [anon_sym_PERCENTpretrans] = ACTIONS(391),
    [anon_sym_PERCENTposttrans] = ACTIONS(391),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(391),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(391),
    [anon_sym_PERCENTverify] = ACTIONS(391),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(391),
    [anon_sym_PERCENTtriggerin] = ACTIONS(391),
    [anon_sym_PERCENTtriggerun] = ACTIONS(391),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(391),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(391),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(391),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(391),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(391),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(391),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(391),
    [anon_sym_PERCENTfiles] = ACTIONS(391),
    [anon_sym_PERCENTchangelog] = ACTIONS(391),
    [anon_sym_PERCENTglobal] = ACTIONS(391),
    [anon_sym_PERCENTdefine] = ACTIONS(391),
    [anon_sym_PERCENTundefine] = ACTIONS(391),
    [anon_sym_PERCENT] = ACTIONS(391),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(391),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(391),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(425),
    [aux_sym__simple_statements_token1] = ACTIONS(425),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(427),
    [anon_sym_PERCENTifarch] = ACTIONS(427),
    [anon_sym_PERCENTifos] = ACTIONS(427),
    [anon_sym_PERCENTifnarch] = ACTIONS(427),
    [anon_sym_PERCENTifnos] = ACTIONS(427),
    [anon_sym_AutoProv] = ACTIONS(427),
    [anon_sym_AutoReq] = ACTIONS(427),
    [anon_sym_AutoReqProv] = ACTIONS(427),
    [anon_sym_BugUrl] = ACTIONS(427),
    [anon_sym_BuildRoot] = ACTIONS(427),
    [anon_sym_BuildSystem] = ACTIONS(427),
    [anon_sym_DistTag] = ACTIONS(427),
    [anon_sym_Distribution] = ACTIONS(427),
    [anon_sym_Epoch] = ACTIONS(427),
    [anon_sym_Group] = ACTIONS(427),
    [anon_sym_License] = ACTIONS(427),
    [anon_sym_ModularityLabel] = ACTIONS(427),
    [anon_sym_Name] = ACTIONS(427),
    [anon_sym_NoPatch] = ACTIONS(427),
    [anon_sym_NoSource] = ACTIONS(427),
    [anon_sym_Packager] = ACTIONS(427),
    [anon_sym_Release] = ACTIONS(427),
    [anon_sym_SourceLicense] = ACTIONS(427),
    [anon_sym_Summary] = ACTIONS(427),
    [anon_sym_URL] = ACTIONS(427),
    [anon_sym_Url] = ACTIONS(427),
    [anon_sym_VCS] = ACTIONS(427),
    [anon_sym_Vendor] = ACTIONS(427),
    [anon_sym_Version] = ACTIONS(427),
    [aux_sym_tag_token1] = ACTIONS(427),
    [aux_sym_tag_token2] = ACTIONS(427),
    [anon_sym_Requires] = ACTIONS(427),
    [anon_sym_BuildArch] = ACTIONS(427),
    [anon_sym_BuildArchitectures] = ACTIONS(427),
    [anon_sym_BuildConflicts] = ACTIONS(427),
    [anon_sym_BuildPrereq] = ACTIONS(427),
    [anon_sym_BuildRequires] = ACTIONS(427),
    [anon_sym_Conflicts] = ACTIONS(427),
    [anon_sym_DocDir] = ACTIONS(427),
    [anon_sym_Enhances] = ACTIONS(427),
    [anon_sym_ExcludeArch] = ACTIONS(427),
    [anon_sym_ExcludeOS] = ACTIONS(427),
    [anon_sym_ExclusiveArch] = ACTIONS(427),
    [anon_sym_ExclusiveOS] = ACTIONS(427),
    [anon_sym_Obsoletes] = ACTIONS(427),
    [anon_sym_OrderWithRequires] = ACTIONS(427),
    [anon_sym_Prefix] = ACTIONS(427),
    [anon_sym_Prefixes] = ACTIONS(427),
    [anon_sym_Prereq] = ACTIONS(427),
    [anon_sym_Provides] = ACTIONS(427),
    [anon_sym_Recommends] = ACTIONS(427),
    [anon_sym_RemovePathPostfixes] = ACTIONS(427),
    [anon_sym_Suggests] = ACTIONS(427),
    [anon_sym_Supplements] = ACTIONS(427),
    [anon_sym_PERCENTdescription] = ACTIONS(427),
    [anon_sym_PERCENTpackage] = ACTIONS(427),
    [anon_sym_PERCENTprep] = ACTIONS(427),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(427),
    [anon_sym_PERCENTconf] = ACTIONS(427),
    [anon_sym_PERCENTbuild] = ACTIONS(427),
    [anon_sym_PERCENTinstall] = ACTIONS(427),
    [anon_sym_PERCENTcheck] = ACTIONS(427),
    [anon_sym_PERCENTclean] = ACTIONS(427),
    [anon_sym_PERCENTpre] = ACTIONS(427),
    [anon_sym_PERCENTpost] = ACTIONS(427),
    [anon_sym_PERCENTpreun] = ACTIONS(427),
    [anon_sym_PERCENTpostun] = ACTIONS(427),
    [anon_sym_PERCENTpretrans] = ACTIONS(427),
    [anon_sym_PERCENTposttrans] = ACTIONS(427),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(427),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(427),
    [anon_sym_PERCENTverify] = ACTIONS(427),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(427),
    [anon_sym_PERCENTtriggerin] = ACTIONS(427),
    [anon_sym_PERCENTtriggerun] = ACTIONS(427),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(427),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(427),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(427),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(427),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(427),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(427),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(427),
    [anon_sym_PERCENTfiles] = ACTIONS(427),
    [anon_sym_PERCENTchangelog] = ACTIONS(427),
    [anon_sym_PERCENTglobal] = ACTIONS(427),
    [anon_sym_PERCENTdefine] = ACTIONS(427),
    [anon_sym_PERCENTundefine] = ACTIONS(427),
    [anon_sym_PERCENT] = ACTIONS(427),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(427),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(427),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [aux_sym__simple_statements_token1] = ACTIONS(385),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(387),
    [anon_sym_PERCENTifarch] = ACTIONS(387),
    [anon_sym_PERCENTifos] = ACTIONS(387),
    [anon_sym_PERCENTifnarch] = ACTIONS(387),
    [anon_sym_PERCENTifnos] = ACTIONS(387),
    [anon_sym_AutoProv] = ACTIONS(387),
    [anon_sym_AutoReq] = ACTIONS(387),
    [anon_sym_AutoReqProv] = ACTIONS(387),
    [anon_sym_BugUrl] = ACTIONS(387),
    [anon_sym_BuildRoot] = ACTIONS(387),
    [anon_sym_BuildSystem] = ACTIONS(387),
    [anon_sym_DistTag] = ACTIONS(387),
    [anon_sym_Distribution] = ACTIONS(387),
    [anon_sym_Epoch] = ACTIONS(387),
    [anon_sym_Group] = ACTIONS(387),
    [anon_sym_License] = ACTIONS(387),
    [anon_sym_ModularityLabel] = ACTIONS(387),
    [anon_sym_Name] = ACTIONS(387),
    [anon_sym_NoPatch] = ACTIONS(387),
    [anon_sym_NoSource] = ACTIONS(387),
    [anon_sym_Packager] = ACTIONS(387),
    [anon_sym_Release] = ACTIONS(387),
    [anon_sym_SourceLicense] = ACTIONS(387),
    [anon_sym_Summary] = ACTIONS(387),
    [anon_sym_URL] = ACTIONS(387),
    [anon_sym_Url] = ACTIONS(387),
    [anon_sym_VCS] = ACTIONS(387),
    [anon_sym_Vendor] = ACTIONS(387),
    [anon_sym_Version] = ACTIONS(387),
    [aux_sym_tag_token1] = ACTIONS(387),
    [aux_sym_tag_token2] = ACTIONS(387),
    [anon_sym_Requires] = ACTIONS(387),
    [anon_sym_BuildArch] = ACTIONS(387),
    [anon_sym_BuildArchitectures] = ACTIONS(387),
    [anon_sym_BuildConflicts] = ACTIONS(387),
    [anon_sym_BuildPrereq] = ACTIONS(387),
    [anon_sym_BuildRequires] = ACTIONS(387),
    [anon_sym_Conflicts] = ACTIONS(387),
    [anon_sym_DocDir] = ACTIONS(387),
    [anon_sym_Enhances] = ACTIONS(387),
    [anon_sym_ExcludeArch] = ACTIONS(387),
    [anon_sym_ExcludeOS] = ACTIONS(387),
    [anon_sym_ExclusiveArch] = ACTIONS(387),
    [anon_sym_ExclusiveOS] = ACTIONS(387),
    [anon_sym_Obsoletes] = ACTIONS(387),
    [anon_sym_OrderWithRequires] = ACTIONS(387),
    [anon_sym_Prefix] = ACTIONS(387),
    [anon_sym_Prefixes] = ACTIONS(387),
    [anon_sym_Prereq] = ACTIONS(387),
    [anon_sym_Provides] = ACTIONS(387),
    [anon_sym_Recommends] = ACTIONS(387),
    [anon_sym_RemovePathPostfixes] = ACTIONS(387),
    [anon_sym_Suggests] = ACTIONS(387),
    [anon_sym_Supplements] = ACTIONS(387),
    [anon_sym_PERCENTdescription] = ACTIONS(387),
    [anon_sym_PERCENTpackage] = ACTIONS(387),
    [anon_sym_PERCENTprep] = ACTIONS(387),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(387),
    [anon_sym_PERCENTconf] = ACTIONS(387),
    [anon_sym_PERCENTbuild] = ACTIONS(387),
    [anon_sym_PERCENTinstall] = ACTIONS(387),
    [anon_sym_PERCENTcheck] = ACTIONS(387),
    [anon_sym_PERCENTclean] = ACTIONS(387),
    [anon_sym_PERCENTpre] = ACTIONS(387),
    [anon_sym_PERCENTpost] = ACTIONS(387),
    [anon_sym_PERCENTpreun] = ACTIONS(387),
    [anon_sym_PERCENTpostun] = ACTIONS(387),
    [anon_sym_PERCENTpretrans] = ACTIONS(387),
    [anon_sym_PERCENTposttrans] = ACTIONS(387),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(387),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(387),
    [anon_sym_PERCENTverify] = ACTIONS(387),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(387),
    [anon_sym_PERCENTtriggerin] = ACTIONS(387),
    [anon_sym_PERCENTtriggerun] = ACTIONS(387),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(387),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(387),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(387),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(387),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(387),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(387),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(387),
    [anon_sym_PERCENTfiles] = ACTIONS(387),
    [anon_sym_PERCENTchangelog] = ACTIONS(387),
    [anon_sym_PERCENTglobal] = ACTIONS(387),
    [anon_sym_PERCENTdefine] = ACTIONS(387),
    [anon_sym_PERCENTundefine] = ACTIONS(387),
    [anon_sym_PERCENT] = ACTIONS(387),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(387),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(387),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(429),
    [aux_sym__simple_statements_token1] = ACTIONS(429),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(431),
    [anon_sym_PERCENTifarch] = ACTIONS(431),
    [anon_sym_PERCENTifos] = ACTIONS(431),
    [anon_sym_PERCENTifnarch] = ACTIONS(431),
    [anon_sym_PERCENTifnos] = ACTIONS(431),
    [anon_sym_AutoProv] = ACTIONS(431),
    [anon_sym_AutoReq] = ACTIONS(431),
    [anon_sym_AutoReqProv] = ACTIONS(431),
    [anon_sym_BugUrl] = ACTIONS(431),
    [anon_sym_BuildRoot] = ACTIONS(431),
    [anon_sym_BuildSystem] = ACTIONS(431),
    [anon_sym_DistTag] = ACTIONS(431),
    [anon_sym_Distribution] = ACTIONS(431),
    [anon_sym_Epoch] = ACTIONS(431),
    [anon_sym_Group] = ACTIONS(431),
    [anon_sym_License] = ACTIONS(431),
    [anon_sym_ModularityLabel] = ACTIONS(431),
    [anon_sym_Name] = ACTIONS(431),
    [anon_sym_NoPatch] = ACTIONS(431),
    [anon_sym_NoSource] = ACTIONS(431),
    [anon_sym_Packager] = ACTIONS(431),
    [anon_sym_Release] = ACTIONS(431),
    [anon_sym_SourceLicense] = ACTIONS(431),
    [anon_sym_Summary] = ACTIONS(431),
    [anon_sym_URL] = ACTIONS(431),
    [anon_sym_Url] = ACTIONS(431),
    [anon_sym_VCS] = ACTIONS(431),
    [anon_sym_Vendor] = ACTIONS(431),
    [anon_sym_Version] = ACTIONS(431),
    [aux_sym_tag_token1] = ACTIONS(431),
    [aux_sym_tag_token2] = ACTIONS(431),
    [anon_sym_Requires] = ACTIONS(431),
    [anon_sym_BuildArch] = ACTIONS(431),
    [anon_sym_BuildArchitectures] = ACTIONS(431),
    [anon_sym_BuildConflicts] = ACTIONS(431),
    [anon_sym_BuildPrereq] = ACTIONS(431),
    [anon_sym_BuildRequires] = ACTIONS(431),
    [anon_sym_Conflicts] = ACTIONS(431),
    [anon_sym_DocDir] = ACTIONS(431),
    [anon_sym_Enhances] = ACTIONS(431),
    [anon_sym_ExcludeArch] = ACTIONS(431),
    [anon_sym_ExcludeOS] = ACTIONS(431),
    [anon_sym_ExclusiveArch] = ACTIONS(431),
    [anon_sym_ExclusiveOS] = ACTIONS(431),
    [anon_sym_Obsoletes] = ACTIONS(431),
    [anon_sym_OrderWithRequires] = ACTIONS(431),
    [anon_sym_Prefix] = ACTIONS(431),
    [anon_sym_Prefixes] = ACTIONS(431),
    [anon_sym_Prereq] = ACTIONS(431),
    [anon_sym_Provides] = ACTIONS(431),
    [anon_sym_Recommends] = ACTIONS(431),
    [anon_sym_RemovePathPostfixes] = ACTIONS(431),
    [anon_sym_Suggests] = ACTIONS(431),
    [anon_sym_Supplements] = ACTIONS(431),
    [anon_sym_PERCENTdescription] = ACTIONS(431),
    [anon_sym_PERCENTpackage] = ACTIONS(431),
    [anon_sym_PERCENTprep] = ACTIONS(431),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(431),
    [anon_sym_PERCENTconf] = ACTIONS(431),
    [anon_sym_PERCENTbuild] = ACTIONS(431),
    [anon_sym_PERCENTinstall] = ACTIONS(431),
    [anon_sym_PERCENTcheck] = ACTIONS(431),
    [anon_sym_PERCENTclean] = ACTIONS(431),
    [anon_sym_PERCENTpre] = ACTIONS(431),
    [anon_sym_PERCENTpost] = ACTIONS(431),
    [anon_sym_PERCENTpreun] = ACTIONS(431),
    [anon_sym_PERCENTpostun] = ACTIONS(431),
    [anon_sym_PERCENTpretrans] = ACTIONS(431),
    [anon_sym_PERCENTposttrans] = ACTIONS(431),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(431),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(431),
    [anon_sym_PERCENTverify] = ACTIONS(431),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(431),
    [anon_sym_PERCENTtriggerin] = ACTIONS(431),
    [anon_sym_PERCENTtriggerun] = ACTIONS(431),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(431),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(431),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(431),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(431),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(431),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(431),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(431),
    [anon_sym_PERCENTfiles] = ACTIONS(431),
    [anon_sym_PERCENTchangelog] = ACTIONS(431),
    [anon_sym_PERCENTglobal] = ACTIONS(431),
    [anon_sym_PERCENTdefine] = ACTIONS(431),
    [anon_sym_PERCENTundefine] = ACTIONS(431),
    [anon_sym_PERCENT] = ACTIONS(431),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(431),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(431),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [aux_sym__simple_statements_token1] = ACTIONS(433),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(435),
    [anon_sym_PERCENTifarch] = ACTIONS(435),
    [anon_sym_PERCENTifos] = ACTIONS(435),
    [anon_sym_PERCENTifnarch] = ACTIONS(435),
    [anon_sym_PERCENTifnos] = ACTIONS(435),
    [anon_sym_AutoProv] = ACTIONS(435),
    [anon_sym_AutoReq] = ACTIONS(435),
    [anon_sym_AutoReqProv] = ACTIONS(435),
    [anon_sym_BugUrl] = ACTIONS(435),
    [anon_sym_BuildRoot] = ACTIONS(435),
    [anon_sym_BuildSystem] = ACTIONS(435),
    [anon_sym_DistTag] = ACTIONS(435),
    [anon_sym_Distribution] = ACTIONS(435),
    [anon_sym_Epoch] = ACTIONS(435),
    [anon_sym_Group] = ACTIONS(435),
    [anon_sym_License] = ACTIONS(435),
    [anon_sym_ModularityLabel] = ACTIONS(435),
    [anon_sym_Name] = ACTIONS(435),
    [anon_sym_NoPatch] = ACTIONS(435),
    [anon_sym_NoSource] = ACTIONS(435),
    [anon_sym_Packager] = ACTIONS(435),
    [anon_sym_Release] = ACTIONS(435),
    [anon_sym_SourceLicense] = ACTIONS(435),
    [anon_sym_Summary] = ACTIONS(435),
    [anon_sym_URL] = ACTIONS(435),
    [anon_sym_Url] = ACTIONS(435),
    [anon_sym_VCS] = ACTIONS(435),
    [anon_sym_Vendor] = ACTIONS(435),
    [anon_sym_Version] = ACTIONS(435),
    [aux_sym_tag_token1] = ACTIONS(435),
    [aux_sym_tag_token2] = ACTIONS(435),
    [anon_sym_Requires] = ACTIONS(435),
    [anon_sym_BuildArch] = ACTIONS(435),
    [anon_sym_BuildArchitectures] = ACTIONS(435),
    [anon_sym_BuildConflicts] = ACTIONS(435),
    [anon_sym_BuildPrereq] = ACTIONS(435),
    [anon_sym_BuildRequires] = ACTIONS(435),
    [anon_sym_Conflicts] = ACTIONS(435),
    [anon_sym_DocDir] = ACTIONS(435),
    [anon_sym_Enhances] = ACTIONS(435),
    [anon_sym_ExcludeArch] = ACTIONS(435),
    [anon_sym_ExcludeOS] = ACTIONS(435),
    [anon_sym_ExclusiveArch] = ACTIONS(435),
    [anon_sym_ExclusiveOS] = ACTIONS(435),
    [anon_sym_Obsoletes] = ACTIONS(435),
    [anon_sym_OrderWithRequires] = ACTIONS(435),
    [anon_sym_Prefix] = ACTIONS(435),
    [anon_sym_Prefixes] = ACTIONS(435),
    [anon_sym_Prereq] = ACTIONS(435),
    [anon_sym_Provides] = ACTIONS(435),
    [anon_sym_Recommends] = ACTIONS(435),
    [anon_sym_RemovePathPostfixes] = ACTIONS(435),
    [anon_sym_Suggests] = ACTIONS(435),
    [anon_sym_Supplements] = ACTIONS(435),
    [anon_sym_PERCENTdescription] = ACTIONS(435),
    [anon_sym_PERCENTpackage] = ACTIONS(435),
    [anon_sym_PERCENTprep] = ACTIONS(435),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(435),
    [anon_sym_PERCENTconf] = ACTIONS(435),
    [anon_sym_PERCENTbuild] = ACTIONS(435),
    [anon_sym_PERCENTinstall] = ACTIONS(435),
    [anon_sym_PERCENTcheck] = ACTIONS(435),
    [anon_sym_PERCENTclean] = ACTIONS(435),
    [anon_sym_PERCENTpre] = ACTIONS(435),
    [anon_sym_PERCENTpost] = ACTIONS(435),
    [anon_sym_PERCENTpreun] = ACTIONS(435),
    [anon_sym_PERCENTpostun] = ACTIONS(435),
    [anon_sym_PERCENTpretrans] = ACTIONS(435),
    [anon_sym_PERCENTposttrans] = ACTIONS(435),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(435),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(435),
    [anon_sym_PERCENTverify] = ACTIONS(435),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(435),
    [anon_sym_PERCENTtriggerin] = ACTIONS(435),
    [anon_sym_PERCENTtriggerun] = ACTIONS(435),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(435),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(435),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(435),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(435),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(435),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(435),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(435),
    [anon_sym_PERCENTfiles] = ACTIONS(435),
    [anon_sym_PERCENTchangelog] = ACTIONS(435),
    [anon_sym_PERCENTglobal] = ACTIONS(435),
    [anon_sym_PERCENTdefine] = ACTIONS(435),
    [anon_sym_PERCENTundefine] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(435),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(435),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(435),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [aux_sym__simple_statements_token1] = ACTIONS(437),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(439),
    [anon_sym_PERCENTifarch] = ACTIONS(439),
    [anon_sym_PERCENTifos] = ACTIONS(439),
    [anon_sym_PERCENTifnarch] = ACTIONS(439),
    [anon_sym_PERCENTifnos] = ACTIONS(439),
    [anon_sym_AutoProv] = ACTIONS(439),
    [anon_sym_AutoReq] = ACTIONS(439),
    [anon_sym_AutoReqProv] = ACTIONS(439),
    [anon_sym_BugUrl] = ACTIONS(439),
    [anon_sym_BuildRoot] = ACTIONS(439),
    [anon_sym_BuildSystem] = ACTIONS(439),
    [anon_sym_DistTag] = ACTIONS(439),
    [anon_sym_Distribution] = ACTIONS(439),
    [anon_sym_Epoch] = ACTIONS(439),
    [anon_sym_Group] = ACTIONS(439),
    [anon_sym_License] = ACTIONS(439),
    [anon_sym_ModularityLabel] = ACTIONS(439),
    [anon_sym_Name] = ACTIONS(439),
    [anon_sym_NoPatch] = ACTIONS(439),
    [anon_sym_NoSource] = ACTIONS(439),
    [anon_sym_Packager] = ACTIONS(439),
    [anon_sym_Release] = ACTIONS(439),
    [anon_sym_SourceLicense] = ACTIONS(439),
    [anon_sym_Summary] = ACTIONS(439),
    [anon_sym_URL] = ACTIONS(439),
    [anon_sym_Url] = ACTIONS(439),
    [anon_sym_VCS] = ACTIONS(439),
    [anon_sym_Vendor] = ACTIONS(439),
    [anon_sym_Version] = ACTIONS(439),
    [aux_sym_tag_token1] = ACTIONS(439),
    [aux_sym_tag_token2] = ACTIONS(439),
    [anon_sym_Requires] = ACTIONS(439),
    [anon_sym_BuildArch] = ACTIONS(439),
    [anon_sym_BuildArchitectures] = ACTIONS(439),
    [anon_sym_BuildConflicts] = ACTIONS(439),
    [anon_sym_BuildPrereq] = ACTIONS(439),
    [anon_sym_BuildRequires] = ACTIONS(439),
    [anon_sym_Conflicts] = ACTIONS(439),
    [anon_sym_DocDir] = ACTIONS(439),
    [anon_sym_Enhances] = ACTIONS(439),
    [anon_sym_ExcludeArch] = ACTIONS(439),
    [anon_sym_ExcludeOS] = ACTIONS(439),
    [anon_sym_ExclusiveArch] = ACTIONS(439),
    [anon_sym_ExclusiveOS] = ACTIONS(439),
    [anon_sym_Obsoletes] = ACTIONS(439),
    [anon_sym_OrderWithRequires] = ACTIONS(439),
    [anon_sym_Prefix] = ACTIONS(439),
    [anon_sym_Prefixes] = ACTIONS(439),
    [anon_sym_Prereq] = ACTIONS(439),
    [anon_sym_Provides] = ACTIONS(439),
    [anon_sym_Recommends] = ACTIONS(439),
    [anon_sym_RemovePathPostfixes] = ACTIONS(439),
    [anon_sym_Suggests] = ACTIONS(439),
    [anon_sym_Supplements] = ACTIONS(439),
    [anon_sym_PERCENTdescription] = ACTIONS(439),
    [anon_sym_PERCENTpackage] = ACTIONS(439),
    [anon_sym_PERCENTprep] = ACTIONS(439),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(439),
    [anon_sym_PERCENTconf] = ACTIONS(439),
    [anon_sym_PERCENTbuild] = ACTIONS(439),
    [anon_sym_PERCENTinstall] = ACTIONS(439),
    [anon_sym_PERCENTcheck] = ACTIONS(439),
    [anon_sym_PERCENTclean] = ACTIONS(439),
    [anon_sym_PERCENTpre] = ACTIONS(439),
    [anon_sym_PERCENTpost] = ACTIONS(439),
    [anon_sym_PERCENTpreun] = ACTIONS(439),
    [anon_sym_PERCENTpostun] = ACTIONS(439),
    [anon_sym_PERCENTpretrans] = ACTIONS(439),
    [anon_sym_PERCENTposttrans] = ACTIONS(439),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(439),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(439),
    [anon_sym_PERCENTverify] = ACTIONS(439),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(439),
    [anon_sym_PERCENTtriggerin] = ACTIONS(439),
    [anon_sym_PERCENTtriggerun] = ACTIONS(439),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(439),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(439),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(439),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(439),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(439),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(439),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(439),
    [anon_sym_PERCENTfiles] = ACTIONS(439),
    [anon_sym_PERCENTchangelog] = ACTIONS(439),
    [anon_sym_PERCENTglobal] = ACTIONS(439),
    [anon_sym_PERCENTdefine] = ACTIONS(439),
    [anon_sym_PERCENTundefine] = ACTIONS(439),
    [anon_sym_PERCENT] = ACTIONS(439),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(439),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(439),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [aux_sym__simple_statements_token1] = ACTIONS(441),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(443),
    [anon_sym_PERCENTifarch] = ACTIONS(443),
    [anon_sym_PERCENTifos] = ACTIONS(443),
    [anon_sym_PERCENTifnarch] = ACTIONS(443),
    [anon_sym_PERCENTifnos] = ACTIONS(443),
    [anon_sym_AutoProv] = ACTIONS(443),
    [anon_sym_AutoReq] = ACTIONS(443),
    [anon_sym_AutoReqProv] = ACTIONS(443),
    [anon_sym_BugUrl] = ACTIONS(443),
    [anon_sym_BuildRoot] = ACTIONS(443),
    [anon_sym_BuildSystem] = ACTIONS(443),
    [anon_sym_DistTag] = ACTIONS(443),
    [anon_sym_Distribution] = ACTIONS(443),
    [anon_sym_Epoch] = ACTIONS(443),
    [anon_sym_Group] = ACTIONS(443),
    [anon_sym_License] = ACTIONS(443),
    [anon_sym_ModularityLabel] = ACTIONS(443),
    [anon_sym_Name] = ACTIONS(443),
    [anon_sym_NoPatch] = ACTIONS(443),
    [anon_sym_NoSource] = ACTIONS(443),
    [anon_sym_Packager] = ACTIONS(443),
    [anon_sym_Release] = ACTIONS(443),
    [anon_sym_SourceLicense] = ACTIONS(443),
    [anon_sym_Summary] = ACTIONS(443),
    [anon_sym_URL] = ACTIONS(443),
    [anon_sym_Url] = ACTIONS(443),
    [anon_sym_VCS] = ACTIONS(443),
    [anon_sym_Vendor] = ACTIONS(443),
    [anon_sym_Version] = ACTIONS(443),
    [aux_sym_tag_token1] = ACTIONS(443),
    [aux_sym_tag_token2] = ACTIONS(443),
    [anon_sym_Requires] = ACTIONS(443),
    [anon_sym_BuildArch] = ACTIONS(443),
    [anon_sym_BuildArchitectures] = ACTIONS(443),
    [anon_sym_BuildConflicts] = ACTIONS(443),
    [anon_sym_BuildPrereq] = ACTIONS(443),
    [anon_sym_BuildRequires] = ACTIONS(443),
    [anon_sym_Conflicts] = ACTIONS(443),
    [anon_sym_DocDir] = ACTIONS(443),
    [anon_sym_Enhances] = ACTIONS(443),
    [anon_sym_ExcludeArch] = ACTIONS(443),
    [anon_sym_ExcludeOS] = ACTIONS(443),
    [anon_sym_ExclusiveArch] = ACTIONS(443),
    [anon_sym_ExclusiveOS] = ACTIONS(443),
    [anon_sym_Obsoletes] = ACTIONS(443),
    [anon_sym_OrderWithRequires] = ACTIONS(443),
    [anon_sym_Prefix] = ACTIONS(443),
    [anon_sym_Prefixes] = ACTIONS(443),
    [anon_sym_Prereq] = ACTIONS(443),
    [anon_sym_Provides] = ACTIONS(443),
    [anon_sym_Recommends] = ACTIONS(443),
    [anon_sym_RemovePathPostfixes] = ACTIONS(443),
    [anon_sym_Suggests] = ACTIONS(443),
    [anon_sym_Supplements] = ACTIONS(443),
    [anon_sym_PERCENTdescription] = ACTIONS(443),
    [anon_sym_PERCENTpackage] = ACTIONS(443),
    [anon_sym_PERCENTprep] = ACTIONS(443),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(443),
    [anon_sym_PERCENTconf] = ACTIONS(443),
    [anon_sym_PERCENTbuild] = ACTIONS(443),
    [anon_sym_PERCENTinstall] = ACTIONS(443),
    [anon_sym_PERCENTcheck] = ACTIONS(443),
    [anon_sym_PERCENTclean] = ACTIONS(443),
    [anon_sym_PERCENTpre] = ACTIONS(443),
    [anon_sym_PERCENTpost] = ACTIONS(443),
    [anon_sym_PERCENTpreun] = ACTIONS(443),
    [anon_sym_PERCENTpostun] = ACTIONS(443),
    [anon_sym_PERCENTpretrans] = ACTIONS(443),
    [anon_sym_PERCENTposttrans] = ACTIONS(443),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(443),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(443),
    [anon_sym_PERCENTverify] = ACTIONS(443),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(443),
    [anon_sym_PERCENTtriggerin] = ACTIONS(443),
    [anon_sym_PERCENTtriggerun] = ACTIONS(443),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(443),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(443),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(443),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(443),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(443),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(443),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(443),
    [anon_sym_PERCENTfiles] = ACTIONS(443),
    [anon_sym_PERCENTchangelog] = ACTIONS(443),
    [anon_sym_PERCENTglobal] = ACTIONS(443),
    [anon_sym_PERCENTdefine] = ACTIONS(443),
    [anon_sym_PERCENTundefine] = ACTIONS(443),
    [anon_sym_PERCENT] = ACTIONS(443),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(443),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(443),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [aux_sym__simple_statements_token1] = ACTIONS(445),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(447),
    [anon_sym_PERCENTifarch] = ACTIONS(447),
    [anon_sym_PERCENTifos] = ACTIONS(447),
    [anon_sym_PERCENTifnarch] = ACTIONS(447),
    [anon_sym_PERCENTifnos] = ACTIONS(447),
    [anon_sym_AutoProv] = ACTIONS(447),
    [anon_sym_AutoReq] = ACTIONS(447),
    [anon_sym_AutoReqProv] = ACTIONS(447),
    [anon_sym_BugUrl] = ACTIONS(447),
    [anon_sym_BuildRoot] = ACTIONS(447),
    [anon_sym_BuildSystem] = ACTIONS(447),
    [anon_sym_DistTag] = ACTIONS(447),
    [anon_sym_Distribution] = ACTIONS(447),
    [anon_sym_Epoch] = ACTIONS(447),
    [anon_sym_Group] = ACTIONS(447),
    [anon_sym_License] = ACTIONS(447),
    [anon_sym_ModularityLabel] = ACTIONS(447),
    [anon_sym_Name] = ACTIONS(447),
    [anon_sym_NoPatch] = ACTIONS(447),
    [anon_sym_NoSource] = ACTIONS(447),
    [anon_sym_Packager] = ACTIONS(447),
    [anon_sym_Release] = ACTIONS(447),
    [anon_sym_SourceLicense] = ACTIONS(447),
    [anon_sym_Summary] = ACTIONS(447),
    [anon_sym_URL] = ACTIONS(447),
    [anon_sym_Url] = ACTIONS(447),
    [anon_sym_VCS] = ACTIONS(447),
    [anon_sym_Vendor] = ACTIONS(447),
    [anon_sym_Version] = ACTIONS(447),
    [aux_sym_tag_token1] = ACTIONS(447),
    [aux_sym_tag_token2] = ACTIONS(447),
    [anon_sym_Requires] = ACTIONS(447),
    [anon_sym_BuildArch] = ACTIONS(447),
    [anon_sym_BuildArchitectures] = ACTIONS(447),
    [anon_sym_BuildConflicts] = ACTIONS(447),
    [anon_sym_BuildPrereq] = ACTIONS(447),
    [anon_sym_BuildRequires] = ACTIONS(447),
    [anon_sym_Conflicts] = ACTIONS(447),
    [anon_sym_DocDir] = ACTIONS(447),
    [anon_sym_Enhances] = ACTIONS(447),
    [anon_sym_ExcludeArch] = ACTIONS(447),
    [anon_sym_ExcludeOS] = ACTIONS(447),
    [anon_sym_ExclusiveArch] = ACTIONS(447),
    [anon_sym_ExclusiveOS] = ACTIONS(447),
    [anon_sym_Obsoletes] = ACTIONS(447),
    [anon_sym_OrderWithRequires] = ACTIONS(447),
    [anon_sym_Prefix] = ACTIONS(447),
    [anon_sym_Prefixes] = ACTIONS(447),
    [anon_sym_Prereq] = ACTIONS(447),
    [anon_sym_Provides] = ACTIONS(447),
    [anon_sym_Recommends] = ACTIONS(447),
    [anon_sym_RemovePathPostfixes] = ACTIONS(447),
    [anon_sym_Suggests] = ACTIONS(447),
    [anon_sym_Supplements] = ACTIONS(447),
    [anon_sym_PERCENTdescription] = ACTIONS(447),
    [anon_sym_PERCENTpackage] = ACTIONS(447),
    [anon_sym_PERCENTprep] = ACTIONS(447),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(447),
    [anon_sym_PERCENTconf] = ACTIONS(447),
    [anon_sym_PERCENTbuild] = ACTIONS(447),
    [anon_sym_PERCENTinstall] = ACTIONS(447),
    [anon_sym_PERCENTcheck] = ACTIONS(447),
    [anon_sym_PERCENTclean] = ACTIONS(447),
    [anon_sym_PERCENTpre] = ACTIONS(447),
    [anon_sym_PERCENTpost] = ACTIONS(447),
    [anon_sym_PERCENTpreun] = ACTIONS(447),
    [anon_sym_PERCENTpostun] = ACTIONS(447),
    [anon_sym_PERCENTpretrans] = ACTIONS(447),
    [anon_sym_PERCENTposttrans] = ACTIONS(447),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(447),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(447),
    [anon_sym_PERCENTverify] = ACTIONS(447),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(447),
    [anon_sym_PERCENTtriggerin] = ACTIONS(447),
    [anon_sym_PERCENTtriggerun] = ACTIONS(447),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(447),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(447),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(447),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(447),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(447),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(447),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(447),
    [anon_sym_PERCENTfiles] = ACTIONS(447),
    [anon_sym_PERCENTchangelog] = ACTIONS(447),
    [anon_sym_PERCENTglobal] = ACTIONS(447),
    [anon_sym_PERCENTdefine] = ACTIONS(447),
    [anon_sym_PERCENTundefine] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(447),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(447),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(447),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [aux_sym__simple_statements_token1] = ACTIONS(449),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(451),
    [anon_sym_PERCENTifarch] = ACTIONS(451),
    [anon_sym_PERCENTifos] = ACTIONS(451),
    [anon_sym_PERCENTifnarch] = ACTIONS(451),
    [anon_sym_PERCENTifnos] = ACTIONS(451),
    [anon_sym_AutoProv] = ACTIONS(451),
    [anon_sym_AutoReq] = ACTIONS(451),
    [anon_sym_AutoReqProv] = ACTIONS(451),
    [anon_sym_BugUrl] = ACTIONS(451),
    [anon_sym_BuildRoot] = ACTIONS(451),
    [anon_sym_BuildSystem] = ACTIONS(451),
    [anon_sym_DistTag] = ACTIONS(451),
    [anon_sym_Distribution] = ACTIONS(451),
    [anon_sym_Epoch] = ACTIONS(451),
    [anon_sym_Group] = ACTIONS(451),
    [anon_sym_License] = ACTIONS(451),
    [anon_sym_ModularityLabel] = ACTIONS(451),
    [anon_sym_Name] = ACTIONS(451),
    [anon_sym_NoPatch] = ACTIONS(451),
    [anon_sym_NoSource] = ACTIONS(451),
    [anon_sym_Packager] = ACTIONS(451),
    [anon_sym_Release] = ACTIONS(451),
    [anon_sym_SourceLicense] = ACTIONS(451),
    [anon_sym_Summary] = ACTIONS(451),
    [anon_sym_URL] = ACTIONS(451),
    [anon_sym_Url] = ACTIONS(451),
    [anon_sym_VCS] = ACTIONS(451),
    [anon_sym_Vendor] = ACTIONS(451),
    [anon_sym_Version] = ACTIONS(451),
    [aux_sym_tag_token1] = ACTIONS(451),
    [aux_sym_tag_token2] = ACTIONS(451),
    [anon_sym_Requires] = ACTIONS(451),
    [anon_sym_BuildArch] = ACTIONS(451),
    [anon_sym_BuildArchitectures] = ACTIONS(451),
    [anon_sym_BuildConflicts] = ACTIONS(451),
    [anon_sym_BuildPrereq] = ACTIONS(451),
    [anon_sym_BuildRequires] = ACTIONS(451),
    [anon_sym_Conflicts] = ACTIONS(451),
    [anon_sym_DocDir] = ACTIONS(451),
    [anon_sym_Enhances] = ACTIONS(451),
    [anon_sym_ExcludeArch] = ACTIONS(451),
    [anon_sym_ExcludeOS] = ACTIONS(451),
    [anon_sym_ExclusiveArch] = ACTIONS(451),
    [anon_sym_ExclusiveOS] = ACTIONS(451),
    [anon_sym_Obsoletes] = ACTIONS(451),
    [anon_sym_OrderWithRequires] = ACTIONS(451),
    [anon_sym_Prefix] = ACTIONS(451),
    [anon_sym_Prefixes] = ACTIONS(451),
    [anon_sym_Prereq] = ACTIONS(451),
    [anon_sym_Provides] = ACTIONS(451),
    [anon_sym_Recommends] = ACTIONS(451),
    [anon_sym_RemovePathPostfixes] = ACTIONS(451),
    [anon_sym_Suggests] = ACTIONS(451),
    [anon_sym_Supplements] = ACTIONS(451),
    [anon_sym_PERCENTdescription] = ACTIONS(451),
    [anon_sym_PERCENTpackage] = ACTIONS(451),
    [anon_sym_PERCENTprep] = ACTIONS(451),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(451),
    [anon_sym_PERCENTconf] = ACTIONS(451),
    [anon_sym_PERCENTbuild] = ACTIONS(451),
    [anon_sym_PERCENTinstall] = ACTIONS(451),
    [anon_sym_PERCENTcheck] = ACTIONS(451),
    [anon_sym_PERCENTclean] = ACTIONS(451),
    [anon_sym_PERCENTpre] = ACTIONS(451),
    [anon_sym_PERCENTpost] = ACTIONS(451),
    [anon_sym_PERCENTpreun] = ACTIONS(451),
    [anon_sym_PERCENTpostun] = ACTIONS(451),
    [anon_sym_PERCENTpretrans] = ACTIONS(451),
    [anon_sym_PERCENTposttrans] = ACTIONS(451),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(451),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(451),
    [anon_sym_PERCENTverify] = ACTIONS(451),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(451),
    [anon_sym_PERCENTtriggerin] = ACTIONS(451),
    [anon_sym_PERCENTtriggerun] = ACTIONS(451),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(451),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(451),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(451),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(451),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(451),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(451),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(451),
    [anon_sym_PERCENTfiles] = ACTIONS(451),
    [anon_sym_PERCENTchangelog] = ACTIONS(451),
    [anon_sym_PERCENTglobal] = ACTIONS(451),
    [anon_sym_PERCENTdefine] = ACTIONS(451),
    [anon_sym_PERCENTundefine] = ACTIONS(451),
    [anon_sym_PERCENT] = ACTIONS(451),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(451),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(451),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [aux_sym__simple_statements_token1] = ACTIONS(449),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(451),
    [anon_sym_PERCENTifarch] = ACTIONS(451),
    [anon_sym_PERCENTifos] = ACTIONS(451),
    [anon_sym_PERCENTifnarch] = ACTIONS(451),
    [anon_sym_PERCENTifnos] = ACTIONS(451),
    [anon_sym_AutoProv] = ACTIONS(451),
    [anon_sym_AutoReq] = ACTIONS(451),
    [anon_sym_AutoReqProv] = ACTIONS(451),
    [anon_sym_BugUrl] = ACTIONS(451),
    [anon_sym_BuildRoot] = ACTIONS(451),
    [anon_sym_BuildSystem] = ACTIONS(451),
    [anon_sym_DistTag] = ACTIONS(451),
    [anon_sym_Distribution] = ACTIONS(451),
    [anon_sym_Epoch] = ACTIONS(451),
    [anon_sym_Group] = ACTIONS(451),
    [anon_sym_License] = ACTIONS(451),
    [anon_sym_ModularityLabel] = ACTIONS(451),
    [anon_sym_Name] = ACTIONS(451),
    [anon_sym_NoPatch] = ACTIONS(451),
    [anon_sym_NoSource] = ACTIONS(451),
    [anon_sym_Packager] = ACTIONS(451),
    [anon_sym_Release] = ACTIONS(451),
    [anon_sym_SourceLicense] = ACTIONS(451),
    [anon_sym_Summary] = ACTIONS(451),
    [anon_sym_URL] = ACTIONS(451),
    [anon_sym_Url] = ACTIONS(451),
    [anon_sym_VCS] = ACTIONS(451),
    [anon_sym_Vendor] = ACTIONS(451),
    [anon_sym_Version] = ACTIONS(451),
    [aux_sym_tag_token1] = ACTIONS(451),
    [aux_sym_tag_token2] = ACTIONS(451),
    [anon_sym_Requires] = ACTIONS(451),
    [anon_sym_BuildArch] = ACTIONS(451),
    [anon_sym_BuildArchitectures] = ACTIONS(451),
    [anon_sym_BuildConflicts] = ACTIONS(451),
    [anon_sym_BuildPrereq] = ACTIONS(451),
    [anon_sym_BuildRequires] = ACTIONS(451),
    [anon_sym_Conflicts] = ACTIONS(451),
    [anon_sym_DocDir] = ACTIONS(451),
    [anon_sym_Enhances] = ACTIONS(451),
    [anon_sym_ExcludeArch] = ACTIONS(451),
    [anon_sym_ExcludeOS] = ACTIONS(451),
    [anon_sym_ExclusiveArch] = ACTIONS(451),
    [anon_sym_ExclusiveOS] = ACTIONS(451),
    [anon_sym_Obsoletes] = ACTIONS(451),
    [anon_sym_OrderWithRequires] = ACTIONS(451),
    [anon_sym_Prefix] = ACTIONS(451),
    [anon_sym_Prefixes] = ACTIONS(451),
    [anon_sym_Prereq] = ACTIONS(451),
    [anon_sym_Provides] = ACTIONS(451),
    [anon_sym_Recommends] = ACTIONS(451),
    [anon_sym_RemovePathPostfixes] = ACTIONS(451),
    [anon_sym_Suggests] = ACTIONS(451),
    [anon_sym_Supplements] = ACTIONS(451),
    [anon_sym_PERCENTdescription] = ACTIONS(451),
    [anon_sym_PERCENTpackage] = ACTIONS(451),
    [anon_sym_PERCENTprep] = ACTIONS(451),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(451),
    [anon_sym_PERCENTconf] = ACTIONS(451),
    [anon_sym_PERCENTbuild] = ACTIONS(451),
    [anon_sym_PERCENTinstall] = ACTIONS(451),
    [anon_sym_PERCENTcheck] = ACTIONS(451),
    [anon_sym_PERCENTclean] = ACTIONS(451),
    [anon_sym_PERCENTpre] = ACTIONS(451),
    [anon_sym_PERCENTpost] = ACTIONS(451),
    [anon_sym_PERCENTpreun] = ACTIONS(451),
    [anon_sym_PERCENTpostun] = ACTIONS(451),
    [anon_sym_PERCENTpretrans] = ACTIONS(451),
    [anon_sym_PERCENTposttrans] = ACTIONS(451),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(451),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(451),
    [anon_sym_PERCENTverify] = ACTIONS(451),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(451),
    [anon_sym_PERCENTtriggerin] = ACTIONS(451),
    [anon_sym_PERCENTtriggerun] = ACTIONS(451),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(451),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(451),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(451),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(451),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(451),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(451),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(451),
    [anon_sym_PERCENTfiles] = ACTIONS(451),
    [anon_sym_PERCENTchangelog] = ACTIONS(451),
    [anon_sym_PERCENTglobal] = ACTIONS(451),
    [anon_sym_PERCENTdefine] = ACTIONS(451),
    [anon_sym_PERCENTundefine] = ACTIONS(451),
    [anon_sym_PERCENT] = ACTIONS(451),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(451),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(451),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [aux_sym__simple_statements_token1] = ACTIONS(453),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(455),
    [anon_sym_PERCENTifarch] = ACTIONS(455),
    [anon_sym_PERCENTifos] = ACTIONS(455),
    [anon_sym_PERCENTifnarch] = ACTIONS(455),
    [anon_sym_PERCENTifnos] = ACTIONS(455),
    [anon_sym_AutoProv] = ACTIONS(455),
    [anon_sym_AutoReq] = ACTIONS(455),
    [anon_sym_AutoReqProv] = ACTIONS(455),
    [anon_sym_BugUrl] = ACTIONS(455),
    [anon_sym_BuildRoot] = ACTIONS(455),
    [anon_sym_BuildSystem] = ACTIONS(455),
    [anon_sym_DistTag] = ACTIONS(455),
    [anon_sym_Distribution] = ACTIONS(455),
    [anon_sym_Epoch] = ACTIONS(455),
    [anon_sym_Group] = ACTIONS(455),
    [anon_sym_License] = ACTIONS(455),
    [anon_sym_ModularityLabel] = ACTIONS(455),
    [anon_sym_Name] = ACTIONS(455),
    [anon_sym_NoPatch] = ACTIONS(455),
    [anon_sym_NoSource] = ACTIONS(455),
    [anon_sym_Packager] = ACTIONS(455),
    [anon_sym_Release] = ACTIONS(455),
    [anon_sym_SourceLicense] = ACTIONS(455),
    [anon_sym_Summary] = ACTIONS(455),
    [anon_sym_URL] = ACTIONS(455),
    [anon_sym_Url] = ACTIONS(455),
    [anon_sym_VCS] = ACTIONS(455),
    [anon_sym_Vendor] = ACTIONS(455),
    [anon_sym_Version] = ACTIONS(455),
    [aux_sym_tag_token1] = ACTIONS(455),
    [aux_sym_tag_token2] = ACTIONS(455),
    [anon_sym_Requires] = ACTIONS(455),
    [anon_sym_BuildArch] = ACTIONS(455),
    [anon_sym_BuildArchitectures] = ACTIONS(455),
    [anon_sym_BuildConflicts] = ACTIONS(455),
    [anon_sym_BuildPrereq] = ACTIONS(455),
    [anon_sym_BuildRequires] = ACTIONS(455),
    [anon_sym_Conflicts] = ACTIONS(455),
    [anon_sym_DocDir] = ACTIONS(455),
    [anon_sym_Enhances] = ACTIONS(455),
    [anon_sym_ExcludeArch] = ACTIONS(455),
    [anon_sym_ExcludeOS] = ACTIONS(455),
    [anon_sym_ExclusiveArch] = ACTIONS(455),
    [anon_sym_ExclusiveOS] = ACTIONS(455),
    [anon_sym_Obsoletes] = ACTIONS(455),
    [anon_sym_OrderWithRequires] = ACTIONS(455),
    [anon_sym_Prefix] = ACTIONS(455),
    [anon_sym_Prefixes] = ACTIONS(455),
    [anon_sym_Prereq] = ACTIONS(455),
    [anon_sym_Provides] = ACTIONS(455),
    [anon_sym_Recommends] = ACTIONS(455),
    [anon_sym_RemovePathPostfixes] = ACTIONS(455),
    [anon_sym_Suggests] = ACTIONS(455),
    [anon_sym_Supplements] = ACTIONS(455),
    [anon_sym_PERCENTdescription] = ACTIONS(455),
    [anon_sym_PERCENTpackage] = ACTIONS(455),
    [anon_sym_PERCENTprep] = ACTIONS(455),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(455),
    [anon_sym_PERCENTconf] = ACTIONS(455),
    [anon_sym_PERCENTbuild] = ACTIONS(455),
    [anon_sym_PERCENTinstall] = ACTIONS(455),
    [anon_sym_PERCENTcheck] = ACTIONS(455),
    [anon_sym_PERCENTclean] = ACTIONS(455),
    [anon_sym_PERCENTpre] = ACTIONS(455),
    [anon_sym_PERCENTpost] = ACTIONS(455),
    [anon_sym_PERCENTpreun] = ACTIONS(455),
    [anon_sym_PERCENTpostun] = ACTIONS(455),
    [anon_sym_PERCENTpretrans] = ACTIONS(455),
    [anon_sym_PERCENTposttrans] = ACTIONS(455),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(455),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(455),
    [anon_sym_PERCENTverify] = ACTIONS(455),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(455),
    [anon_sym_PERCENTtriggerin] = ACTIONS(455),
    [anon_sym_PERCENTtriggerun] = ACTIONS(455),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(455),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(455),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(455),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(455),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(455),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(455),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(455),
    [anon_sym_PERCENTfiles] = ACTIONS(455),
    [anon_sym_PERCENTchangelog] = ACTIONS(455),
    [anon_sym_PERCENTglobal] = ACTIONS(455),
    [anon_sym_PERCENTdefine] = ACTIONS(455),
    [anon_sym_PERCENTundefine] = ACTIONS(455),
    [anon_sym_PERCENT] = ACTIONS(455),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(455),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(455),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(457),
    [aux_sym__simple_statements_token1] = ACTIONS(457),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(459),
    [anon_sym_PERCENTifarch] = ACTIONS(459),
    [anon_sym_PERCENTifos] = ACTIONS(459),
    [anon_sym_PERCENTifnarch] = ACTIONS(459),
    [anon_sym_PERCENTifnos] = ACTIONS(459),
    [anon_sym_AutoProv] = ACTIONS(459),
    [anon_sym_AutoReq] = ACTIONS(459),
    [anon_sym_AutoReqProv] = ACTIONS(459),
    [anon_sym_BugUrl] = ACTIONS(459),
    [anon_sym_BuildRoot] = ACTIONS(459),
    [anon_sym_BuildSystem] = ACTIONS(459),
    [anon_sym_DistTag] = ACTIONS(459),
    [anon_sym_Distribution] = ACTIONS(459),
    [anon_sym_Epoch] = ACTIONS(459),
    [anon_sym_Group] = ACTIONS(459),
    [anon_sym_License] = ACTIONS(459),
    [anon_sym_ModularityLabel] = ACTIONS(459),
    [anon_sym_Name] = ACTIONS(459),
    [anon_sym_NoPatch] = ACTIONS(459),
    [anon_sym_NoSource] = ACTIONS(459),
    [anon_sym_Packager] = ACTIONS(459),
    [anon_sym_Release] = ACTIONS(459),
    [anon_sym_SourceLicense] = ACTIONS(459),
    [anon_sym_Summary] = ACTIONS(459),
    [anon_sym_URL] = ACTIONS(459),
    [anon_sym_Url] = ACTIONS(459),
    [anon_sym_VCS] = ACTIONS(459),
    [anon_sym_Vendor] = ACTIONS(459),
    [anon_sym_Version] = ACTIONS(459),
    [aux_sym_tag_token1] = ACTIONS(459),
    [aux_sym_tag_token2] = ACTIONS(459),
    [anon_sym_Requires] = ACTIONS(459),
    [anon_sym_BuildArch] = ACTIONS(459),
    [anon_sym_BuildArchitectures] = ACTIONS(459),
    [anon_sym_BuildConflicts] = ACTIONS(459),
    [anon_sym_BuildPrereq] = ACTIONS(459),
    [anon_sym_BuildRequires] = ACTIONS(459),
    [anon_sym_Conflicts] = ACTIONS(459),
    [anon_sym_DocDir] = ACTIONS(459),
    [anon_sym_Enhances] = ACTIONS(459),
    [anon_sym_ExcludeArch] = ACTIONS(459),
    [anon_sym_ExcludeOS] = ACTIONS(459),
    [anon_sym_ExclusiveArch] = ACTIONS(459),
    [anon_sym_ExclusiveOS] = ACTIONS(459),
    [anon_sym_Obsoletes] = ACTIONS(459),
    [anon_sym_OrderWithRequires] = ACTIONS(459),
    [anon_sym_Prefix] = ACTIONS(459),
    [anon_sym_Prefixes] = ACTIONS(459),
    [anon_sym_Prereq] = ACTIONS(459),
    [anon_sym_Provides] = ACTIONS(459),
    [anon_sym_Recommends] = ACTIONS(459),
    [anon_sym_RemovePathPostfixes] = ACTIONS(459),
    [anon_sym_Suggests] = ACTIONS(459),
    [anon_sym_Supplements] = ACTIONS(459),
    [anon_sym_PERCENTdescription] = ACTIONS(459),
    [anon_sym_PERCENTpackage] = ACTIONS(459),
    [anon_sym_PERCENTprep] = ACTIONS(459),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(459),
    [anon_sym_PERCENTconf] = ACTIONS(459),
    [anon_sym_PERCENTbuild] = ACTIONS(459),
    [anon_sym_PERCENTinstall] = ACTIONS(459),
    [anon_sym_PERCENTcheck] = ACTIONS(459),
    [anon_sym_PERCENTclean] = ACTIONS(459),
    [anon_sym_PERCENTpre] = ACTIONS(459),
    [anon_sym_PERCENTpost] = ACTIONS(459),
    [anon_sym_PERCENTpreun] = ACTIONS(459),
    [anon_sym_PERCENTpostun] = ACTIONS(459),
    [anon_sym_PERCENTpretrans] = ACTIONS(459),
    [anon_sym_PERCENTposttrans] = ACTIONS(459),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(459),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(459),
    [anon_sym_PERCENTverify] = ACTIONS(459),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(459),
    [anon_sym_PERCENTtriggerin] = ACTIONS(459),
    [anon_sym_PERCENTtriggerun] = ACTIONS(459),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(459),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(459),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(459),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(459),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(459),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(459),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(459),
    [anon_sym_PERCENTfiles] = ACTIONS(459),
    [anon_sym_PERCENTchangelog] = ACTIONS(459),
    [anon_sym_PERCENTglobal] = ACTIONS(459),
    [anon_sym_PERCENTdefine] = ACTIONS(459),
    [anon_sym_PERCENTundefine] = ACTIONS(459),
    [anon_sym_PERCENT] = ACTIONS(459),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(459),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(459),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [aux_sym__simple_statements_token1] = ACTIONS(461),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(463),
    [anon_sym_PERCENTifarch] = ACTIONS(463),
    [anon_sym_PERCENTifos] = ACTIONS(463),
    [anon_sym_PERCENTifnarch] = ACTIONS(463),
    [anon_sym_PERCENTifnos] = ACTIONS(463),
    [anon_sym_AutoProv] = ACTIONS(463),
    [anon_sym_AutoReq] = ACTIONS(463),
    [anon_sym_AutoReqProv] = ACTIONS(463),
    [anon_sym_BugUrl] = ACTIONS(463),
    [anon_sym_BuildRoot] = ACTIONS(463),
    [anon_sym_BuildSystem] = ACTIONS(463),
    [anon_sym_DistTag] = ACTIONS(463),
    [anon_sym_Distribution] = ACTIONS(463),
    [anon_sym_Epoch] = ACTIONS(463),
    [anon_sym_Group] = ACTIONS(463),
    [anon_sym_License] = ACTIONS(463),
    [anon_sym_ModularityLabel] = ACTIONS(463),
    [anon_sym_Name] = ACTIONS(463),
    [anon_sym_NoPatch] = ACTIONS(463),
    [anon_sym_NoSource] = ACTIONS(463),
    [anon_sym_Packager] = ACTIONS(463),
    [anon_sym_Release] = ACTIONS(463),
    [anon_sym_SourceLicense] = ACTIONS(463),
    [anon_sym_Summary] = ACTIONS(463),
    [anon_sym_URL] = ACTIONS(463),
    [anon_sym_Url] = ACTIONS(463),
    [anon_sym_VCS] = ACTIONS(463),
    [anon_sym_Vendor] = ACTIONS(463),
    [anon_sym_Version] = ACTIONS(463),
    [aux_sym_tag_token1] = ACTIONS(463),
    [aux_sym_tag_token2] = ACTIONS(463),
    [anon_sym_Requires] = ACTIONS(463),
    [anon_sym_BuildArch] = ACTIONS(463),
    [anon_sym_BuildArchitectures] = ACTIONS(463),
    [anon_sym_BuildConflicts] = ACTIONS(463),
    [anon_sym_BuildPrereq] = ACTIONS(463),
    [anon_sym_BuildRequires] = ACTIONS(463),
    [anon_sym_Conflicts] = ACTIONS(463),
    [anon_sym_DocDir] = ACTIONS(463),
    [anon_sym_Enhances] = ACTIONS(463),
    [anon_sym_ExcludeArch] = ACTIONS(463),
    [anon_sym_ExcludeOS] = ACTIONS(463),
    [anon_sym_ExclusiveArch] = ACTIONS(463),
    [anon_sym_ExclusiveOS] = ACTIONS(463),
    [anon_sym_Obsoletes] = ACTIONS(463),
    [anon_sym_OrderWithRequires] = ACTIONS(463),
    [anon_sym_Prefix] = ACTIONS(463),
    [anon_sym_Prefixes] = ACTIONS(463),
    [anon_sym_Prereq] = ACTIONS(463),
    [anon_sym_Provides] = ACTIONS(463),
    [anon_sym_Recommends] = ACTIONS(463),
    [anon_sym_RemovePathPostfixes] = ACTIONS(463),
    [anon_sym_Suggests] = ACTIONS(463),
    [anon_sym_Supplements] = ACTIONS(463),
    [anon_sym_PERCENTdescription] = ACTIONS(463),
    [anon_sym_PERCENTpackage] = ACTIONS(463),
    [anon_sym_PERCENTprep] = ACTIONS(463),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(463),
    [anon_sym_PERCENTconf] = ACTIONS(463),
    [anon_sym_PERCENTbuild] = ACTIONS(463),
    [anon_sym_PERCENTinstall] = ACTIONS(463),
    [anon_sym_PERCENTcheck] = ACTIONS(463),
    [anon_sym_PERCENTclean] = ACTIONS(463),
    [anon_sym_PERCENTpre] = ACTIONS(463),
    [anon_sym_PERCENTpost] = ACTIONS(463),
    [anon_sym_PERCENTpreun] = ACTIONS(463),
    [anon_sym_PERCENTpostun] = ACTIONS(463),
    [anon_sym_PERCENTpretrans] = ACTIONS(463),
    [anon_sym_PERCENTposttrans] = ACTIONS(463),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(463),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(463),
    [anon_sym_PERCENTverify] = ACTIONS(463),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(463),
    [anon_sym_PERCENTtriggerin] = ACTIONS(463),
    [anon_sym_PERCENTtriggerun] = ACTIONS(463),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(463),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(463),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(463),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(463),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(463),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(463),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(463),
    [anon_sym_PERCENTfiles] = ACTIONS(463),
    [anon_sym_PERCENTchangelog] = ACTIONS(463),
    [anon_sym_PERCENTglobal] = ACTIONS(463),
    [anon_sym_PERCENTdefine] = ACTIONS(463),
    [anon_sym_PERCENTundefine] = ACTIONS(463),
    [anon_sym_PERCENT] = ACTIONS(463),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(463),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(463),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [aux_sym__simple_statements_token1] = ACTIONS(465),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(467),
    [anon_sym_PERCENTifarch] = ACTIONS(467),
    [anon_sym_PERCENTifos] = ACTIONS(467),
    [anon_sym_PERCENTifnarch] = ACTIONS(467),
    [anon_sym_PERCENTifnos] = ACTIONS(467),
    [anon_sym_AutoProv] = ACTIONS(467),
    [anon_sym_AutoReq] = ACTIONS(467),
    [anon_sym_AutoReqProv] = ACTIONS(467),
    [anon_sym_BugUrl] = ACTIONS(467),
    [anon_sym_BuildRoot] = ACTIONS(467),
    [anon_sym_BuildSystem] = ACTIONS(467),
    [anon_sym_DistTag] = ACTIONS(467),
    [anon_sym_Distribution] = ACTIONS(467),
    [anon_sym_Epoch] = ACTIONS(467),
    [anon_sym_Group] = ACTIONS(467),
    [anon_sym_License] = ACTIONS(467),
    [anon_sym_ModularityLabel] = ACTIONS(467),
    [anon_sym_Name] = ACTIONS(467),
    [anon_sym_NoPatch] = ACTIONS(467),
    [anon_sym_NoSource] = ACTIONS(467),
    [anon_sym_Packager] = ACTIONS(467),
    [anon_sym_Release] = ACTIONS(467),
    [anon_sym_SourceLicense] = ACTIONS(467),
    [anon_sym_Summary] = ACTIONS(467),
    [anon_sym_URL] = ACTIONS(467),
    [anon_sym_Url] = ACTIONS(467),
    [anon_sym_VCS] = ACTIONS(467),
    [anon_sym_Vendor] = ACTIONS(467),
    [anon_sym_Version] = ACTIONS(467),
    [aux_sym_tag_token1] = ACTIONS(467),
    [aux_sym_tag_token2] = ACTIONS(467),
    [anon_sym_Requires] = ACTIONS(467),
    [anon_sym_BuildArch] = ACTIONS(467),
    [anon_sym_BuildArchitectures] = ACTIONS(467),
    [anon_sym_BuildConflicts] = ACTIONS(467),
    [anon_sym_BuildPrereq] = ACTIONS(467),
    [anon_sym_BuildRequires] = ACTIONS(467),
    [anon_sym_Conflicts] = ACTIONS(467),
    [anon_sym_DocDir] = ACTIONS(467),
    [anon_sym_Enhances] = ACTIONS(467),
    [anon_sym_ExcludeArch] = ACTIONS(467),
    [anon_sym_ExcludeOS] = ACTIONS(467),
    [anon_sym_ExclusiveArch] = ACTIONS(467),
    [anon_sym_ExclusiveOS] = ACTIONS(467),
    [anon_sym_Obsoletes] = ACTIONS(467),
    [anon_sym_OrderWithRequires] = ACTIONS(467),
    [anon_sym_Prefix] = ACTIONS(467),
    [anon_sym_Prefixes] = ACTIONS(467),
    [anon_sym_Prereq] = ACTIONS(467),
    [anon_sym_Provides] = ACTIONS(467),
    [anon_sym_Recommends] = ACTIONS(467),
    [anon_sym_RemovePathPostfixes] = ACTIONS(467),
    [anon_sym_Suggests] = ACTIONS(467),
    [anon_sym_Supplements] = ACTIONS(467),
    [anon_sym_PERCENTdescription] = ACTIONS(467),
    [anon_sym_PERCENTpackage] = ACTIONS(467),
    [anon_sym_PERCENTprep] = ACTIONS(467),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(467),
    [anon_sym_PERCENTconf] = ACTIONS(467),
    [anon_sym_PERCENTbuild] = ACTIONS(467),
    [anon_sym_PERCENTinstall] = ACTIONS(467),
    [anon_sym_PERCENTcheck] = ACTIONS(467),
    [anon_sym_PERCENTclean] = ACTIONS(467),
    [anon_sym_PERCENTpre] = ACTIONS(467),
    [anon_sym_PERCENTpost] = ACTIONS(467),
    [anon_sym_PERCENTpreun] = ACTIONS(467),
    [anon_sym_PERCENTpostun] = ACTIONS(467),
    [anon_sym_PERCENTpretrans] = ACTIONS(467),
    [anon_sym_PERCENTposttrans] = ACTIONS(467),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(467),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(467),
    [anon_sym_PERCENTverify] = ACTIONS(467),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(467),
    [anon_sym_PERCENTtriggerin] = ACTIONS(467),
    [anon_sym_PERCENTtriggerun] = ACTIONS(467),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(467),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(467),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(467),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(467),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(467),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(467),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(467),
    [anon_sym_PERCENTfiles] = ACTIONS(467),
    [anon_sym_PERCENTchangelog] = ACTIONS(467),
    [anon_sym_PERCENTglobal] = ACTIONS(467),
    [anon_sym_PERCENTdefine] = ACTIONS(467),
    [anon_sym_PERCENTundefine] = ACTIONS(467),
    [anon_sym_PERCENT] = ACTIONS(467),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(467),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(467),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [aux_sym__simple_statements_token1] = ACTIONS(381),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(383),
    [anon_sym_PERCENTifarch] = ACTIONS(383),
    [anon_sym_PERCENTifos] = ACTIONS(383),
    [anon_sym_PERCENTifnarch] = ACTIONS(383),
    [anon_sym_PERCENTifnos] = ACTIONS(383),
    [anon_sym_AutoProv] = ACTIONS(383),
    [anon_sym_AutoReq] = ACTIONS(383),
    [anon_sym_AutoReqProv] = ACTIONS(383),
    [anon_sym_BugUrl] = ACTIONS(383),
    [anon_sym_BuildRoot] = ACTIONS(383),
    [anon_sym_BuildSystem] = ACTIONS(383),
    [anon_sym_DistTag] = ACTIONS(383),
    [anon_sym_Distribution] = ACTIONS(383),
    [anon_sym_Epoch] = ACTIONS(383),
    [anon_sym_Group] = ACTIONS(383),
    [anon_sym_License] = ACTIONS(383),
    [anon_sym_ModularityLabel] = ACTIONS(383),
    [anon_sym_Name] = ACTIONS(383),
    [anon_sym_NoPatch] = ACTIONS(383),
    [anon_sym_NoSource] = ACTIONS(383),
    [anon_sym_Packager] = ACTIONS(383),
    [anon_sym_Release] = ACTIONS(383),
    [anon_sym_SourceLicense] = ACTIONS(383),
    [anon_sym_Summary] = ACTIONS(383),
    [anon_sym_URL] = ACTIONS(383),
    [anon_sym_Url] = ACTIONS(383),
    [anon_sym_VCS] = ACTIONS(383),
    [anon_sym_Vendor] = ACTIONS(383),
    [anon_sym_Version] = ACTIONS(383),
    [aux_sym_tag_token1] = ACTIONS(383),
    [aux_sym_tag_token2] = ACTIONS(383),
    [anon_sym_Requires] = ACTIONS(383),
    [anon_sym_BuildArch] = ACTIONS(383),
    [anon_sym_BuildArchitectures] = ACTIONS(383),
    [anon_sym_BuildConflicts] = ACTIONS(383),
    [anon_sym_BuildPrereq] = ACTIONS(383),
    [anon_sym_BuildRequires] = ACTIONS(383),
    [anon_sym_Conflicts] = ACTIONS(383),
    [anon_sym_DocDir] = ACTIONS(383),
    [anon_sym_Enhances] = ACTIONS(383),
    [anon_sym_ExcludeArch] = ACTIONS(383),
    [anon_sym_ExcludeOS] = ACTIONS(383),
    [anon_sym_ExclusiveArch] = ACTIONS(383),
    [anon_sym_ExclusiveOS] = ACTIONS(383),
    [anon_sym_Obsoletes] = ACTIONS(383),
    [anon_sym_OrderWithRequires] = ACTIONS(383),
    [anon_sym_Prefix] = ACTIONS(383),
    [anon_sym_Prefixes] = ACTIONS(383),
    [anon_sym_Prereq] = ACTIONS(383),
    [anon_sym_Provides] = ACTIONS(383),
    [anon_sym_Recommends] = ACTIONS(383),
    [anon_sym_RemovePathPostfixes] = ACTIONS(383),
    [anon_sym_Suggests] = ACTIONS(383),
    [anon_sym_Supplements] = ACTIONS(383),
    [anon_sym_PERCENTdescription] = ACTIONS(383),
    [anon_sym_PERCENTpackage] = ACTIONS(383),
    [anon_sym_PERCENTprep] = ACTIONS(383),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(383),
    [anon_sym_PERCENTconf] = ACTIONS(383),
    [anon_sym_PERCENTbuild] = ACTIONS(383),
    [anon_sym_PERCENTinstall] = ACTIONS(383),
    [anon_sym_PERCENTcheck] = ACTIONS(383),
    [anon_sym_PERCENTclean] = ACTIONS(383),
    [anon_sym_PERCENTpre] = ACTIONS(383),
    [anon_sym_PERCENTpost] = ACTIONS(383),
    [anon_sym_PERCENTpreun] = ACTIONS(383),
    [anon_sym_PERCENTpostun] = ACTIONS(383),
    [anon_sym_PERCENTpretrans] = ACTIONS(383),
    [anon_sym_PERCENTposttrans] = ACTIONS(383),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(383),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(383),
    [anon_sym_PERCENTverify] = ACTIONS(383),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(383),
    [anon_sym_PERCENTtriggerin] = ACTIONS(383),
    [anon_sym_PERCENTtriggerun] = ACTIONS(383),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(383),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(383),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(383),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(383),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(383),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(383),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(383),
    [anon_sym_PERCENTfiles] = ACTIONS(383),
    [anon_sym_PERCENTchangelog] = ACTIONS(383),
    [anon_sym_PERCENTglobal] = ACTIONS(383),
    [anon_sym_PERCENTdefine] = ACTIONS(383),
    [anon_sym_PERCENTundefine] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(383),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(383),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(469),
    [aux_sym__simple_statements_token1] = ACTIONS(469),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(471),
    [anon_sym_PERCENTifarch] = ACTIONS(471),
    [anon_sym_PERCENTifos] = ACTIONS(471),
    [anon_sym_PERCENTifnarch] = ACTIONS(471),
    [anon_sym_PERCENTifnos] = ACTIONS(471),
    [anon_sym_AutoProv] = ACTIONS(471),
    [anon_sym_AutoReq] = ACTIONS(471),
    [anon_sym_AutoReqProv] = ACTIONS(471),
    [anon_sym_BugUrl] = ACTIONS(471),
    [anon_sym_BuildRoot] = ACTIONS(471),
    [anon_sym_BuildSystem] = ACTIONS(471),
    [anon_sym_DistTag] = ACTIONS(471),
    [anon_sym_Distribution] = ACTIONS(471),
    [anon_sym_Epoch] = ACTIONS(471),
    [anon_sym_Group] = ACTIONS(471),
    [anon_sym_License] = ACTIONS(471),
    [anon_sym_ModularityLabel] = ACTIONS(471),
    [anon_sym_Name] = ACTIONS(471),
    [anon_sym_NoPatch] = ACTIONS(471),
    [anon_sym_NoSource] = ACTIONS(471),
    [anon_sym_Packager] = ACTIONS(471),
    [anon_sym_Release] = ACTIONS(471),
    [anon_sym_SourceLicense] = ACTIONS(471),
    [anon_sym_Summary] = ACTIONS(471),
    [anon_sym_URL] = ACTIONS(471),
    [anon_sym_Url] = ACTIONS(471),
    [anon_sym_VCS] = ACTIONS(471),
    [anon_sym_Vendor] = ACTIONS(471),
    [anon_sym_Version] = ACTIONS(471),
    [aux_sym_tag_token1] = ACTIONS(471),
    [aux_sym_tag_token2] = ACTIONS(471),
    [anon_sym_Requires] = ACTIONS(471),
    [anon_sym_BuildArch] = ACTIONS(471),
    [anon_sym_BuildArchitectures] = ACTIONS(471),
    [anon_sym_BuildConflicts] = ACTIONS(471),
    [anon_sym_BuildPrereq] = ACTIONS(471),
    [anon_sym_BuildRequires] = ACTIONS(471),
    [anon_sym_Conflicts] = ACTIONS(471),
    [anon_sym_DocDir] = ACTIONS(471),
    [anon_sym_Enhances] = ACTIONS(471),
    [anon_sym_ExcludeArch] = ACTIONS(471),
    [anon_sym_ExcludeOS] = ACTIONS(471),
    [anon_sym_ExclusiveArch] = ACTIONS(471),
    [anon_sym_ExclusiveOS] = ACTIONS(471),
    [anon_sym_Obsoletes] = ACTIONS(471),
    [anon_sym_OrderWithRequires] = ACTIONS(471),
    [anon_sym_Prefix] = ACTIONS(471),
    [anon_sym_Prefixes] = ACTIONS(471),
    [anon_sym_Prereq] = ACTIONS(471),
    [anon_sym_Provides] = ACTIONS(471),
    [anon_sym_Recommends] = ACTIONS(471),
    [anon_sym_RemovePathPostfixes] = ACTIONS(471),
    [anon_sym_Suggests] = ACTIONS(471),
    [anon_sym_Supplements] = ACTIONS(471),
    [anon_sym_PERCENTdescription] = ACTIONS(471),
    [anon_sym_PERCENTpackage] = ACTIONS(471),
    [anon_sym_PERCENTprep] = ACTIONS(471),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(471),
    [anon_sym_PERCENTconf] = ACTIONS(471),
    [anon_sym_PERCENTbuild] = ACTIONS(471),
    [anon_sym_PERCENTinstall] = ACTIONS(471),
    [anon_sym_PERCENTcheck] = ACTIONS(471),
    [anon_sym_PERCENTclean] = ACTIONS(471),
    [anon_sym_PERCENTpre] = ACTIONS(471),
    [anon_sym_PERCENTpost] = ACTIONS(471),
    [anon_sym_PERCENTpreun] = ACTIONS(471),
    [anon_sym_PERCENTpostun] = ACTIONS(471),
    [anon_sym_PERCENTpretrans] = ACTIONS(471),
    [anon_sym_PERCENTposttrans] = ACTIONS(471),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(471),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(471),
    [anon_sym_PERCENTverify] = ACTIONS(471),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(471),
    [anon_sym_PERCENTtriggerin] = ACTIONS(471),
    [anon_sym_PERCENTtriggerun] = ACTIONS(471),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(471),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(471),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(471),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(471),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(471),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(471),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(471),
    [anon_sym_PERCENTfiles] = ACTIONS(471),
    [anon_sym_PERCENTchangelog] = ACTIONS(471),
    [anon_sym_PERCENTglobal] = ACTIONS(471),
    [anon_sym_PERCENTdefine] = ACTIONS(471),
    [anon_sym_PERCENTundefine] = ACTIONS(471),
    [anon_sym_PERCENT] = ACTIONS(471),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(471),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(471),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(473),
    [aux_sym__simple_statements_token1] = ACTIONS(473),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(475),
    [anon_sym_PERCENTifarch] = ACTIONS(475),
    [anon_sym_PERCENTifos] = ACTIONS(475),
    [anon_sym_PERCENTifnarch] = ACTIONS(475),
    [anon_sym_PERCENTifnos] = ACTIONS(475),
    [anon_sym_AutoProv] = ACTIONS(475),
    [anon_sym_AutoReq] = ACTIONS(475),
    [anon_sym_AutoReqProv] = ACTIONS(475),
    [anon_sym_BugUrl] = ACTIONS(475),
    [anon_sym_BuildRoot] = ACTIONS(475),
    [anon_sym_BuildSystem] = ACTIONS(475),
    [anon_sym_DistTag] = ACTIONS(475),
    [anon_sym_Distribution] = ACTIONS(475),
    [anon_sym_Epoch] = ACTIONS(475),
    [anon_sym_Group] = ACTIONS(475),
    [anon_sym_License] = ACTIONS(475),
    [anon_sym_ModularityLabel] = ACTIONS(475),
    [anon_sym_Name] = ACTIONS(475),
    [anon_sym_NoPatch] = ACTIONS(475),
    [anon_sym_NoSource] = ACTIONS(475),
    [anon_sym_Packager] = ACTIONS(475),
    [anon_sym_Release] = ACTIONS(475),
    [anon_sym_SourceLicense] = ACTIONS(475),
    [anon_sym_Summary] = ACTIONS(475),
    [anon_sym_URL] = ACTIONS(475),
    [anon_sym_Url] = ACTIONS(475),
    [anon_sym_VCS] = ACTIONS(475),
    [anon_sym_Vendor] = ACTIONS(475),
    [anon_sym_Version] = ACTIONS(475),
    [aux_sym_tag_token1] = ACTIONS(475),
    [aux_sym_tag_token2] = ACTIONS(475),
    [anon_sym_Requires] = ACTIONS(475),
    [anon_sym_BuildArch] = ACTIONS(475),
    [anon_sym_BuildArchitectures] = ACTIONS(475),
    [anon_sym_BuildConflicts] = ACTIONS(475),
    [anon_sym_BuildPrereq] = ACTIONS(475),
    [anon_sym_BuildRequires] = ACTIONS(475),
    [anon_sym_Conflicts] = ACTIONS(475),
    [anon_sym_DocDir] = ACTIONS(475),
    [anon_sym_Enhances] = ACTIONS(475),
    [anon_sym_ExcludeArch] = ACTIONS(475),
    [anon_sym_ExcludeOS] = ACTIONS(475),
    [anon_sym_ExclusiveArch] = ACTIONS(475),
    [anon_sym_ExclusiveOS] = ACTIONS(475),
    [anon_sym_Obsoletes] = ACTIONS(475),
    [anon_sym_OrderWithRequires] = ACTIONS(475),
    [anon_sym_Prefix] = ACTIONS(475),
    [anon_sym_Prefixes] = ACTIONS(475),
    [anon_sym_Prereq] = ACTIONS(475),
    [anon_sym_Provides] = ACTIONS(475),
    [anon_sym_Recommends] = ACTIONS(475),
    [anon_sym_RemovePathPostfixes] = ACTIONS(475),
    [anon_sym_Suggests] = ACTIONS(475),
    [anon_sym_Supplements] = ACTIONS(475),
    [anon_sym_PERCENTdescription] = ACTIONS(475),
    [anon_sym_PERCENTpackage] = ACTIONS(475),
    [anon_sym_PERCENTprep] = ACTIONS(475),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(475),
    [anon_sym_PERCENTconf] = ACTIONS(475),
    [anon_sym_PERCENTbuild] = ACTIONS(475),
    [anon_sym_PERCENTinstall] = ACTIONS(475),
    [anon_sym_PERCENTcheck] = ACTIONS(475),
    [anon_sym_PERCENTclean] = ACTIONS(475),
    [anon_sym_PERCENTpre] = ACTIONS(475),
    [anon_sym_PERCENTpost] = ACTIONS(475),
    [anon_sym_PERCENTpreun] = ACTIONS(475),
    [anon_sym_PERCENTpostun] = ACTIONS(475),
    [anon_sym_PERCENTpretrans] = ACTIONS(475),
    [anon_sym_PERCENTposttrans] = ACTIONS(475),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(475),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(475),
    [anon_sym_PERCENTverify] = ACTIONS(475),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(475),
    [anon_sym_PERCENTtriggerin] = ACTIONS(475),
    [anon_sym_PERCENTtriggerun] = ACTIONS(475),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(475),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(475),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(475),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(475),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(475),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(475),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(475),
    [anon_sym_PERCENTfiles] = ACTIONS(475),
    [anon_sym_PERCENTchangelog] = ACTIONS(475),
    [anon_sym_PERCENTglobal] = ACTIONS(475),
    [anon_sym_PERCENTdefine] = ACTIONS(475),
    [anon_sym_PERCENTundefine] = ACTIONS(475),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(475),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(475),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(477),
    [aux_sym__simple_statements_token1] = ACTIONS(477),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(479),
    [anon_sym_PERCENTifarch] = ACTIONS(479),
    [anon_sym_PERCENTifos] = ACTIONS(479),
    [anon_sym_PERCENTifnarch] = ACTIONS(479),
    [anon_sym_PERCENTifnos] = ACTIONS(479),
    [anon_sym_AutoProv] = ACTIONS(479),
    [anon_sym_AutoReq] = ACTIONS(479),
    [anon_sym_AutoReqProv] = ACTIONS(479),
    [anon_sym_BugUrl] = ACTIONS(479),
    [anon_sym_BuildRoot] = ACTIONS(479),
    [anon_sym_BuildSystem] = ACTIONS(479),
    [anon_sym_DistTag] = ACTIONS(479),
    [anon_sym_Distribution] = ACTIONS(479),
    [anon_sym_Epoch] = ACTIONS(479),
    [anon_sym_Group] = ACTIONS(479),
    [anon_sym_License] = ACTIONS(479),
    [anon_sym_ModularityLabel] = ACTIONS(479),
    [anon_sym_Name] = ACTIONS(479),
    [anon_sym_NoPatch] = ACTIONS(479),
    [anon_sym_NoSource] = ACTIONS(479),
    [anon_sym_Packager] = ACTIONS(479),
    [anon_sym_Release] = ACTIONS(479),
    [anon_sym_SourceLicense] = ACTIONS(479),
    [anon_sym_Summary] = ACTIONS(479),
    [anon_sym_URL] = ACTIONS(479),
    [anon_sym_Url] = ACTIONS(479),
    [anon_sym_VCS] = ACTIONS(479),
    [anon_sym_Vendor] = ACTIONS(479),
    [anon_sym_Version] = ACTIONS(479),
    [aux_sym_tag_token1] = ACTIONS(479),
    [aux_sym_tag_token2] = ACTIONS(479),
    [anon_sym_Requires] = ACTIONS(479),
    [anon_sym_BuildArch] = ACTIONS(479),
    [anon_sym_BuildArchitectures] = ACTIONS(479),
    [anon_sym_BuildConflicts] = ACTIONS(479),
    [anon_sym_BuildPrereq] = ACTIONS(479),
    [anon_sym_BuildRequires] = ACTIONS(479),
    [anon_sym_Conflicts] = ACTIONS(479),
    [anon_sym_DocDir] = ACTIONS(479),
    [anon_sym_Enhances] = ACTIONS(479),
    [anon_sym_ExcludeArch] = ACTIONS(479),
    [anon_sym_ExcludeOS] = ACTIONS(479),
    [anon_sym_ExclusiveArch] = ACTIONS(479),
    [anon_sym_ExclusiveOS] = ACTIONS(479),
    [anon_sym_Obsoletes] = ACTIONS(479),
    [anon_sym_OrderWithRequires] = ACTIONS(479),
    [anon_sym_Prefix] = ACTIONS(479),
    [anon_sym_Prefixes] = ACTIONS(479),
    [anon_sym_Prereq] = ACTIONS(479),
    [anon_sym_Provides] = ACTIONS(479),
    [anon_sym_Recommends] = ACTIONS(479),
    [anon_sym_RemovePathPostfixes] = ACTIONS(479),
    [anon_sym_Suggests] = ACTIONS(479),
    [anon_sym_Supplements] = ACTIONS(479),
    [anon_sym_PERCENTdescription] = ACTIONS(479),
    [anon_sym_PERCENTpackage] = ACTIONS(479),
    [anon_sym_PERCENTprep] = ACTIONS(479),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(479),
    [anon_sym_PERCENTconf] = ACTIONS(479),
    [anon_sym_PERCENTbuild] = ACTIONS(479),
    [anon_sym_PERCENTinstall] = ACTIONS(479),
    [anon_sym_PERCENTcheck] = ACTIONS(479),
    [anon_sym_PERCENTclean] = ACTIONS(479),
    [anon_sym_PERCENTpre] = ACTIONS(479),
    [anon_sym_PERCENTpost] = ACTIONS(479),
    [anon_sym_PERCENTpreun] = ACTIONS(479),
    [anon_sym_PERCENTpostun] = ACTIONS(479),
    [anon_sym_PERCENTpretrans] = ACTIONS(479),
    [anon_sym_PERCENTposttrans] = ACTIONS(479),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(479),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(479),
    [anon_sym_PERCENTverify] = ACTIONS(479),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(479),
    [anon_sym_PERCENTtriggerin] = ACTIONS(479),
    [anon_sym_PERCENTtriggerun] = ACTIONS(479),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(479),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(479),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(479),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(479),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(479),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(479),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(479),
    [anon_sym_PERCENTfiles] = ACTIONS(479),
    [anon_sym_PERCENTchangelog] = ACTIONS(479),
    [anon_sym_PERCENTglobal] = ACTIONS(479),
    [anon_sym_PERCENTdefine] = ACTIONS(479),
    [anon_sym_PERCENTundefine] = ACTIONS(479),
    [anon_sym_PERCENT] = ACTIONS(479),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(479),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(479),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(481),
    [aux_sym__simple_statements_token1] = ACTIONS(481),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(483),
    [anon_sym_PERCENTifarch] = ACTIONS(483),
    [anon_sym_PERCENTifos] = ACTIONS(483),
    [anon_sym_PERCENTifnarch] = ACTIONS(483),
    [anon_sym_PERCENTifnos] = ACTIONS(483),
    [anon_sym_AutoProv] = ACTIONS(483),
    [anon_sym_AutoReq] = ACTIONS(483),
    [anon_sym_AutoReqProv] = ACTIONS(483),
    [anon_sym_BugUrl] = ACTIONS(483),
    [anon_sym_BuildRoot] = ACTIONS(483),
    [anon_sym_BuildSystem] = ACTIONS(483),
    [anon_sym_DistTag] = ACTIONS(483),
    [anon_sym_Distribution] = ACTIONS(483),
    [anon_sym_Epoch] = ACTIONS(483),
    [anon_sym_Group] = ACTIONS(483),
    [anon_sym_License] = ACTIONS(483),
    [anon_sym_ModularityLabel] = ACTIONS(483),
    [anon_sym_Name] = ACTIONS(483),
    [anon_sym_NoPatch] = ACTIONS(483),
    [anon_sym_NoSource] = ACTIONS(483),
    [anon_sym_Packager] = ACTIONS(483),
    [anon_sym_Release] = ACTIONS(483),
    [anon_sym_SourceLicense] = ACTIONS(483),
    [anon_sym_Summary] = ACTIONS(483),
    [anon_sym_URL] = ACTIONS(483),
    [anon_sym_Url] = ACTIONS(483),
    [anon_sym_VCS] = ACTIONS(483),
    [anon_sym_Vendor] = ACTIONS(483),
    [anon_sym_Version] = ACTIONS(483),
    [aux_sym_tag_token1] = ACTIONS(483),
    [aux_sym_tag_token2] = ACTIONS(483),
    [anon_sym_Requires] = ACTIONS(483),
    [anon_sym_BuildArch] = ACTIONS(483),
    [anon_sym_BuildArchitectures] = ACTIONS(483),
    [anon_sym_BuildConflicts] = ACTIONS(483),
    [anon_sym_BuildPrereq] = ACTIONS(483),
    [anon_sym_BuildRequires] = ACTIONS(483),
    [anon_sym_Conflicts] = ACTIONS(483),
    [anon_sym_DocDir] = ACTIONS(483),
    [anon_sym_Enhances] = ACTIONS(483),
    [anon_sym_ExcludeArch] = ACTIONS(483),
    [anon_sym_ExcludeOS] = ACTIONS(483),
    [anon_sym_ExclusiveArch] = ACTIONS(483),
    [anon_sym_ExclusiveOS] = ACTIONS(483),
    [anon_sym_Obsoletes] = ACTIONS(483),
    [anon_sym_OrderWithRequires] = ACTIONS(483),
    [anon_sym_Prefix] = ACTIONS(483),
    [anon_sym_Prefixes] = ACTIONS(483),
    [anon_sym_Prereq] = ACTIONS(483),
    [anon_sym_Provides] = ACTIONS(483),
    [anon_sym_Recommends] = ACTIONS(483),
    [anon_sym_RemovePathPostfixes] = ACTIONS(483),
    [anon_sym_Suggests] = ACTIONS(483),
    [anon_sym_Supplements] = ACTIONS(483),
    [anon_sym_PERCENTdescription] = ACTIONS(483),
    [anon_sym_PERCENTpackage] = ACTIONS(483),
    [anon_sym_PERCENTprep] = ACTIONS(483),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(483),
    [anon_sym_PERCENTconf] = ACTIONS(483),
    [anon_sym_PERCENTbuild] = ACTIONS(483),
    [anon_sym_PERCENTinstall] = ACTIONS(483),
    [anon_sym_PERCENTcheck] = ACTIONS(483),
    [anon_sym_PERCENTclean] = ACTIONS(483),
    [anon_sym_PERCENTpre] = ACTIONS(483),
    [anon_sym_PERCENTpost] = ACTIONS(483),
    [anon_sym_PERCENTpreun] = ACTIONS(483),
    [anon_sym_PERCENTpostun] = ACTIONS(483),
    [anon_sym_PERCENTpretrans] = ACTIONS(483),
    [anon_sym_PERCENTposttrans] = ACTIONS(483),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(483),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(483),
    [anon_sym_PERCENTverify] = ACTIONS(483),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(483),
    [anon_sym_PERCENTtriggerin] = ACTIONS(483),
    [anon_sym_PERCENTtriggerun] = ACTIONS(483),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(483),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(483),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(483),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(483),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(483),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(483),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(483),
    [anon_sym_PERCENTfiles] = ACTIONS(483),
    [anon_sym_PERCENTchangelog] = ACTIONS(483),
    [anon_sym_PERCENTglobal] = ACTIONS(483),
    [anon_sym_PERCENTdefine] = ACTIONS(483),
    [anon_sym_PERCENTundefine] = ACTIONS(483),
    [anon_sym_PERCENT] = ACTIONS(483),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(483),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(483),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [aux_sym__simple_statements_token1] = ACTIONS(397),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(399),
    [anon_sym_PERCENTifarch] = ACTIONS(399),
    [anon_sym_PERCENTifos] = ACTIONS(399),
    [anon_sym_PERCENTifnarch] = ACTIONS(399),
    [anon_sym_PERCENTifnos] = ACTIONS(399),
    [anon_sym_AutoProv] = ACTIONS(399),
    [anon_sym_AutoReq] = ACTIONS(399),
    [anon_sym_AutoReqProv] = ACTIONS(399),
    [anon_sym_BugUrl] = ACTIONS(399),
    [anon_sym_BuildRoot] = ACTIONS(399),
    [anon_sym_BuildSystem] = ACTIONS(399),
    [anon_sym_DistTag] = ACTIONS(399),
    [anon_sym_Distribution] = ACTIONS(399),
    [anon_sym_Epoch] = ACTIONS(399),
    [anon_sym_Group] = ACTIONS(399),
    [anon_sym_License] = ACTIONS(399),
    [anon_sym_ModularityLabel] = ACTIONS(399),
    [anon_sym_Name] = ACTIONS(399),
    [anon_sym_NoPatch] = ACTIONS(399),
    [anon_sym_NoSource] = ACTIONS(399),
    [anon_sym_Packager] = ACTIONS(399),
    [anon_sym_Release] = ACTIONS(399),
    [anon_sym_SourceLicense] = ACTIONS(399),
    [anon_sym_Summary] = ACTIONS(399),
    [anon_sym_URL] = ACTIONS(399),
    [anon_sym_Url] = ACTIONS(399),
    [anon_sym_VCS] = ACTIONS(399),
    [anon_sym_Vendor] = ACTIONS(399),
    [anon_sym_Version] = ACTIONS(399),
    [aux_sym_tag_token1] = ACTIONS(399),
    [aux_sym_tag_token2] = ACTIONS(399),
    [anon_sym_Requires] = ACTIONS(399),
    [anon_sym_BuildArch] = ACTIONS(399),
    [anon_sym_BuildArchitectures] = ACTIONS(399),
    [anon_sym_BuildConflicts] = ACTIONS(399),
    [anon_sym_BuildPrereq] = ACTIONS(399),
    [anon_sym_BuildRequires] = ACTIONS(399),
    [anon_sym_Conflicts] = ACTIONS(399),
    [anon_sym_DocDir] = ACTIONS(399),
    [anon_sym_Enhances] = ACTIONS(399),
    [anon_sym_ExcludeArch] = ACTIONS(399),
    [anon_sym_ExcludeOS] = ACTIONS(399),
    [anon_sym_ExclusiveArch] = ACTIONS(399),
    [anon_sym_ExclusiveOS] = ACTIONS(399),
    [anon_sym_Obsoletes] = ACTIONS(399),
    [anon_sym_OrderWithRequires] = ACTIONS(399),
    [anon_sym_Prefix] = ACTIONS(399),
    [anon_sym_Prefixes] = ACTIONS(399),
    [anon_sym_Prereq] = ACTIONS(399),
    [anon_sym_Provides] = ACTIONS(399),
    [anon_sym_Recommends] = ACTIONS(399),
    [anon_sym_RemovePathPostfixes] = ACTIONS(399),
    [anon_sym_Suggests] = ACTIONS(399),
    [anon_sym_Supplements] = ACTIONS(399),
    [anon_sym_PERCENTdescription] = ACTIONS(399),
    [anon_sym_PERCENTpackage] = ACTIONS(399),
    [anon_sym_PERCENTprep] = ACTIONS(399),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(399),
    [anon_sym_PERCENTconf] = ACTIONS(399),
    [anon_sym_PERCENTbuild] = ACTIONS(399),
    [anon_sym_PERCENTinstall] = ACTIONS(399),
    [anon_sym_PERCENTcheck] = ACTIONS(399),
    [anon_sym_PERCENTclean] = ACTIONS(399),
    [anon_sym_PERCENTpre] = ACTIONS(399),
    [anon_sym_PERCENTpost] = ACTIONS(399),
    [anon_sym_PERCENTpreun] = ACTIONS(399),
    [anon_sym_PERCENTpostun] = ACTIONS(399),
    [anon_sym_PERCENTpretrans] = ACTIONS(399),
    [anon_sym_PERCENTposttrans] = ACTIONS(399),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(399),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(399),
    [anon_sym_PERCENTverify] = ACTIONS(399),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(399),
    [anon_sym_PERCENTtriggerin] = ACTIONS(399),
    [anon_sym_PERCENTtriggerun] = ACTIONS(399),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(399),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(399),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(399),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(399),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(399),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(399),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(399),
    [anon_sym_PERCENTfiles] = ACTIONS(399),
    [anon_sym_PERCENTchangelog] = ACTIONS(399),
    [anon_sym_PERCENTglobal] = ACTIONS(399),
    [anon_sym_PERCENTdefine] = ACTIONS(399),
    [anon_sym_PERCENTundefine] = ACTIONS(399),
    [anon_sym_PERCENT] = ACTIONS(399),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(399),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(399),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(485),
    [aux_sym__simple_statements_token1] = ACTIONS(485),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(487),
    [anon_sym_PERCENTifarch] = ACTIONS(487),
    [anon_sym_PERCENTifos] = ACTIONS(487),
    [anon_sym_PERCENTifnarch] = ACTIONS(487),
    [anon_sym_PERCENTifnos] = ACTIONS(487),
    [anon_sym_AutoProv] = ACTIONS(487),
    [anon_sym_AutoReq] = ACTIONS(487),
    [anon_sym_AutoReqProv] = ACTIONS(487),
    [anon_sym_BugUrl] = ACTIONS(487),
    [anon_sym_BuildRoot] = ACTIONS(487),
    [anon_sym_BuildSystem] = ACTIONS(487),
    [anon_sym_DistTag] = ACTIONS(487),
    [anon_sym_Distribution] = ACTIONS(487),
    [anon_sym_Epoch] = ACTIONS(487),
    [anon_sym_Group] = ACTIONS(487),
    [anon_sym_License] = ACTIONS(487),
    [anon_sym_ModularityLabel] = ACTIONS(487),
    [anon_sym_Name] = ACTIONS(487),
    [anon_sym_NoPatch] = ACTIONS(487),
    [anon_sym_NoSource] = ACTIONS(487),
    [anon_sym_Packager] = ACTIONS(487),
    [anon_sym_Release] = ACTIONS(487),
    [anon_sym_SourceLicense] = ACTIONS(487),
    [anon_sym_Summary] = ACTIONS(487),
    [anon_sym_URL] = ACTIONS(487),
    [anon_sym_Url] = ACTIONS(487),
    [anon_sym_VCS] = ACTIONS(487),
    [anon_sym_Vendor] = ACTIONS(487),
    [anon_sym_Version] = ACTIONS(487),
    [aux_sym_tag_token1] = ACTIONS(487),
    [aux_sym_tag_token2] = ACTIONS(487),
    [anon_sym_Requires] = ACTIONS(487),
    [anon_sym_BuildArch] = ACTIONS(487),
    [anon_sym_BuildArchitectures] = ACTIONS(487),
    [anon_sym_BuildConflicts] = ACTIONS(487),
    [anon_sym_BuildPrereq] = ACTIONS(487),
    [anon_sym_BuildRequires] = ACTIONS(487),
    [anon_sym_Conflicts] = ACTIONS(487),
    [anon_sym_DocDir] = ACTIONS(487),
    [anon_sym_Enhances] = ACTIONS(487),
    [anon_sym_ExcludeArch] = ACTIONS(487),
    [anon_sym_ExcludeOS] = ACTIONS(487),
    [anon_sym_ExclusiveArch] = ACTIONS(487),
    [anon_sym_ExclusiveOS] = ACTIONS(487),
    [anon_sym_Obsoletes] = ACTIONS(487),
    [anon_sym_OrderWithRequires] = ACTIONS(487),
    [anon_sym_Prefix] = ACTIONS(487),
    [anon_sym_Prefixes] = ACTIONS(487),
    [anon_sym_Prereq] = ACTIONS(487),
    [anon_sym_Provides] = ACTIONS(487),
    [anon_sym_Recommends] = ACTIONS(487),
    [anon_sym_RemovePathPostfixes] = ACTIONS(487),
    [anon_sym_Suggests] = ACTIONS(487),
    [anon_sym_Supplements] = ACTIONS(487),
    [anon_sym_PERCENTdescription] = ACTIONS(487),
    [anon_sym_PERCENTpackage] = ACTIONS(487),
    [anon_sym_PERCENTprep] = ACTIONS(487),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(487),
    [anon_sym_PERCENTconf] = ACTIONS(487),
    [anon_sym_PERCENTbuild] = ACTIONS(487),
    [anon_sym_PERCENTinstall] = ACTIONS(487),
    [anon_sym_PERCENTcheck] = ACTIONS(487),
    [anon_sym_PERCENTclean] = ACTIONS(487),
    [anon_sym_PERCENTpre] = ACTIONS(487),
    [anon_sym_PERCENTpost] = ACTIONS(487),
    [anon_sym_PERCENTpreun] = ACTIONS(487),
    [anon_sym_PERCENTpostun] = ACTIONS(487),
    [anon_sym_PERCENTpretrans] = ACTIONS(487),
    [anon_sym_PERCENTposttrans] = ACTIONS(487),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(487),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(487),
    [anon_sym_PERCENTverify] = ACTIONS(487),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(487),
    [anon_sym_PERCENTtriggerin] = ACTIONS(487),
    [anon_sym_PERCENTtriggerun] = ACTIONS(487),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(487),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(487),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(487),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(487),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(487),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(487),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(487),
    [anon_sym_PERCENTfiles] = ACTIONS(487),
    [anon_sym_PERCENTchangelog] = ACTIONS(487),
    [anon_sym_PERCENTglobal] = ACTIONS(487),
    [anon_sym_PERCENTdefine] = ACTIONS(487),
    [anon_sym_PERCENTundefine] = ACTIONS(487),
    [anon_sym_PERCENT] = ACTIONS(487),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(487),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(487),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(489),
    [aux_sym__simple_statements_token1] = ACTIONS(489),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(491),
    [anon_sym_PERCENTifarch] = ACTIONS(491),
    [anon_sym_PERCENTifos] = ACTIONS(491),
    [anon_sym_PERCENTifnarch] = ACTIONS(491),
    [anon_sym_PERCENTifnos] = ACTIONS(491),
    [anon_sym_AutoProv] = ACTIONS(491),
    [anon_sym_AutoReq] = ACTIONS(491),
    [anon_sym_AutoReqProv] = ACTIONS(491),
    [anon_sym_BugUrl] = ACTIONS(491),
    [anon_sym_BuildRoot] = ACTIONS(491),
    [anon_sym_BuildSystem] = ACTIONS(491),
    [anon_sym_DistTag] = ACTIONS(491),
    [anon_sym_Distribution] = ACTIONS(491),
    [anon_sym_Epoch] = ACTIONS(491),
    [anon_sym_Group] = ACTIONS(491),
    [anon_sym_License] = ACTIONS(491),
    [anon_sym_ModularityLabel] = ACTIONS(491),
    [anon_sym_Name] = ACTIONS(491),
    [anon_sym_NoPatch] = ACTIONS(491),
    [anon_sym_NoSource] = ACTIONS(491),
    [anon_sym_Packager] = ACTIONS(491),
    [anon_sym_Release] = ACTIONS(491),
    [anon_sym_SourceLicense] = ACTIONS(491),
    [anon_sym_Summary] = ACTIONS(491),
    [anon_sym_URL] = ACTIONS(491),
    [anon_sym_Url] = ACTIONS(491),
    [anon_sym_VCS] = ACTIONS(491),
    [anon_sym_Vendor] = ACTIONS(491),
    [anon_sym_Version] = ACTIONS(491),
    [aux_sym_tag_token1] = ACTIONS(491),
    [aux_sym_tag_token2] = ACTIONS(491),
    [anon_sym_Requires] = ACTIONS(491),
    [anon_sym_BuildArch] = ACTIONS(491),
    [anon_sym_BuildArchitectures] = ACTIONS(491),
    [anon_sym_BuildConflicts] = ACTIONS(491),
    [anon_sym_BuildPrereq] = ACTIONS(491),
    [anon_sym_BuildRequires] = ACTIONS(491),
    [anon_sym_Conflicts] = ACTIONS(491),
    [anon_sym_DocDir] = ACTIONS(491),
    [anon_sym_Enhances] = ACTIONS(491),
    [anon_sym_ExcludeArch] = ACTIONS(491),
    [anon_sym_ExcludeOS] = ACTIONS(491),
    [anon_sym_ExclusiveArch] = ACTIONS(491),
    [anon_sym_ExclusiveOS] = ACTIONS(491),
    [anon_sym_Obsoletes] = ACTIONS(491),
    [anon_sym_OrderWithRequires] = ACTIONS(491),
    [anon_sym_Prefix] = ACTIONS(491),
    [anon_sym_Prefixes] = ACTIONS(491),
    [anon_sym_Prereq] = ACTIONS(491),
    [anon_sym_Provides] = ACTIONS(491),
    [anon_sym_Recommends] = ACTIONS(491),
    [anon_sym_RemovePathPostfixes] = ACTIONS(491),
    [anon_sym_Suggests] = ACTIONS(491),
    [anon_sym_Supplements] = ACTIONS(491),
    [anon_sym_PERCENTdescription] = ACTIONS(491),
    [anon_sym_PERCENTpackage] = ACTIONS(491),
    [anon_sym_PERCENTprep] = ACTIONS(491),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(491),
    [anon_sym_PERCENTconf] = ACTIONS(491),
    [anon_sym_PERCENTbuild] = ACTIONS(491),
    [anon_sym_PERCENTinstall] = ACTIONS(491),
    [anon_sym_PERCENTcheck] = ACTIONS(491),
    [anon_sym_PERCENTclean] = ACTIONS(491),
    [anon_sym_PERCENTpre] = ACTIONS(491),
    [anon_sym_PERCENTpost] = ACTIONS(491),
    [anon_sym_PERCENTpreun] = ACTIONS(491),
    [anon_sym_PERCENTpostun] = ACTIONS(491),
    [anon_sym_PERCENTpretrans] = ACTIONS(491),
    [anon_sym_PERCENTposttrans] = ACTIONS(491),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(491),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(491),
    [anon_sym_PERCENTverify] = ACTIONS(491),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(491),
    [anon_sym_PERCENTtriggerin] = ACTIONS(491),
    [anon_sym_PERCENTtriggerun] = ACTIONS(491),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(491),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(491),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(491),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(491),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(491),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(491),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(491),
    [anon_sym_PERCENTfiles] = ACTIONS(491),
    [anon_sym_PERCENTchangelog] = ACTIONS(491),
    [anon_sym_PERCENTglobal] = ACTIONS(491),
    [anon_sym_PERCENTdefine] = ACTIONS(491),
    [anon_sym_PERCENTundefine] = ACTIONS(491),
    [anon_sym_PERCENT] = ACTIONS(491),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(491),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(491),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(493),
    [aux_sym__simple_statements_token1] = ACTIONS(493),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(495),
    [anon_sym_PERCENTifarch] = ACTIONS(495),
    [anon_sym_PERCENTifos] = ACTIONS(495),
    [anon_sym_PERCENTifnarch] = ACTIONS(495),
    [anon_sym_PERCENTifnos] = ACTIONS(495),
    [anon_sym_AutoProv] = ACTIONS(495),
    [anon_sym_AutoReq] = ACTIONS(495),
    [anon_sym_AutoReqProv] = ACTIONS(495),
    [anon_sym_BugUrl] = ACTIONS(495),
    [anon_sym_BuildRoot] = ACTIONS(495),
    [anon_sym_BuildSystem] = ACTIONS(495),
    [anon_sym_DistTag] = ACTIONS(495),
    [anon_sym_Distribution] = ACTIONS(495),
    [anon_sym_Epoch] = ACTIONS(495),
    [anon_sym_Group] = ACTIONS(495),
    [anon_sym_License] = ACTIONS(495),
    [anon_sym_ModularityLabel] = ACTIONS(495),
    [anon_sym_Name] = ACTIONS(495),
    [anon_sym_NoPatch] = ACTIONS(495),
    [anon_sym_NoSource] = ACTIONS(495),
    [anon_sym_Packager] = ACTIONS(495),
    [anon_sym_Release] = ACTIONS(495),
    [anon_sym_SourceLicense] = ACTIONS(495),
    [anon_sym_Summary] = ACTIONS(495),
    [anon_sym_URL] = ACTIONS(495),
    [anon_sym_Url] = ACTIONS(495),
    [anon_sym_VCS] = ACTIONS(495),
    [anon_sym_Vendor] = ACTIONS(495),
    [anon_sym_Version] = ACTIONS(495),
    [aux_sym_tag_token1] = ACTIONS(495),
    [aux_sym_tag_token2] = ACTIONS(495),
    [anon_sym_Requires] = ACTIONS(495),
    [anon_sym_BuildArch] = ACTIONS(495),
    [anon_sym_BuildArchitectures] = ACTIONS(495),
    [anon_sym_BuildConflicts] = ACTIONS(495),
    [anon_sym_BuildPrereq] = ACTIONS(495),
    [anon_sym_BuildRequires] = ACTIONS(495),
    [anon_sym_Conflicts] = ACTIONS(495),
    [anon_sym_DocDir] = ACTIONS(495),
    [anon_sym_Enhances] = ACTIONS(495),
    [anon_sym_ExcludeArch] = ACTIONS(495),
    [anon_sym_ExcludeOS] = ACTIONS(495),
    [anon_sym_ExclusiveArch] = ACTIONS(495),
    [anon_sym_ExclusiveOS] = ACTIONS(495),
    [anon_sym_Obsoletes] = ACTIONS(495),
    [anon_sym_OrderWithRequires] = ACTIONS(495),
    [anon_sym_Prefix] = ACTIONS(495),
    [anon_sym_Prefixes] = ACTIONS(495),
    [anon_sym_Prereq] = ACTIONS(495),
    [anon_sym_Provides] = ACTIONS(495),
    [anon_sym_Recommends] = ACTIONS(495),
    [anon_sym_RemovePathPostfixes] = ACTIONS(495),
    [anon_sym_Suggests] = ACTIONS(495),
    [anon_sym_Supplements] = ACTIONS(495),
    [anon_sym_PERCENTdescription] = ACTIONS(495),
    [anon_sym_PERCENTpackage] = ACTIONS(495),
    [anon_sym_PERCENTprep] = ACTIONS(495),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(495),
    [anon_sym_PERCENTconf] = ACTIONS(495),
    [anon_sym_PERCENTbuild] = ACTIONS(495),
    [anon_sym_PERCENTinstall] = ACTIONS(495),
    [anon_sym_PERCENTcheck] = ACTIONS(495),
    [anon_sym_PERCENTclean] = ACTIONS(495),
    [anon_sym_PERCENTpre] = ACTIONS(495),
    [anon_sym_PERCENTpost] = ACTIONS(495),
    [anon_sym_PERCENTpreun] = ACTIONS(495),
    [anon_sym_PERCENTpostun] = ACTIONS(495),
    [anon_sym_PERCENTpretrans] = ACTIONS(495),
    [anon_sym_PERCENTposttrans] = ACTIONS(495),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(495),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(495),
    [anon_sym_PERCENTverify] = ACTIONS(495),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(495),
    [anon_sym_PERCENTtriggerin] = ACTIONS(495),
    [anon_sym_PERCENTtriggerun] = ACTIONS(495),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(495),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(495),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(495),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(495),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(495),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(495),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(495),
    [anon_sym_PERCENTfiles] = ACTIONS(495),
    [anon_sym_PERCENTchangelog] = ACTIONS(495),
    [anon_sym_PERCENTglobal] = ACTIONS(495),
    [anon_sym_PERCENTdefine] = ACTIONS(495),
    [anon_sym_PERCENTundefine] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(495),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(495),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(495),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [aux_sym__simple_statements_token1] = ACTIONS(393),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(395),
    [anon_sym_PERCENTifarch] = ACTIONS(395),
    [anon_sym_PERCENTifos] = ACTIONS(395),
    [anon_sym_PERCENTifnarch] = ACTIONS(395),
    [anon_sym_PERCENTifnos] = ACTIONS(395),
    [anon_sym_AutoProv] = ACTIONS(395),
    [anon_sym_AutoReq] = ACTIONS(395),
    [anon_sym_AutoReqProv] = ACTIONS(395),
    [anon_sym_BugUrl] = ACTIONS(395),
    [anon_sym_BuildRoot] = ACTIONS(395),
    [anon_sym_BuildSystem] = ACTIONS(395),
    [anon_sym_DistTag] = ACTIONS(395),
    [anon_sym_Distribution] = ACTIONS(395),
    [anon_sym_Epoch] = ACTIONS(395),
    [anon_sym_Group] = ACTIONS(395),
    [anon_sym_License] = ACTIONS(395),
    [anon_sym_ModularityLabel] = ACTIONS(395),
    [anon_sym_Name] = ACTIONS(395),
    [anon_sym_NoPatch] = ACTIONS(395),
    [anon_sym_NoSource] = ACTIONS(395),
    [anon_sym_Packager] = ACTIONS(395),
    [anon_sym_Release] = ACTIONS(395),
    [anon_sym_SourceLicense] = ACTIONS(395),
    [anon_sym_Summary] = ACTIONS(395),
    [anon_sym_URL] = ACTIONS(395),
    [anon_sym_Url] = ACTIONS(395),
    [anon_sym_VCS] = ACTIONS(395),
    [anon_sym_Vendor] = ACTIONS(395),
    [anon_sym_Version] = ACTIONS(395),
    [aux_sym_tag_token1] = ACTIONS(395),
    [aux_sym_tag_token2] = ACTIONS(395),
    [anon_sym_Requires] = ACTIONS(395),
    [anon_sym_BuildArch] = ACTIONS(395),
    [anon_sym_BuildArchitectures] = ACTIONS(395),
    [anon_sym_BuildConflicts] = ACTIONS(395),
    [anon_sym_BuildPrereq] = ACTIONS(395),
    [anon_sym_BuildRequires] = ACTIONS(395),
    [anon_sym_Conflicts] = ACTIONS(395),
    [anon_sym_DocDir] = ACTIONS(395),
    [anon_sym_Enhances] = ACTIONS(395),
    [anon_sym_ExcludeArch] = ACTIONS(395),
    [anon_sym_ExcludeOS] = ACTIONS(395),
    [anon_sym_ExclusiveArch] = ACTIONS(395),
    [anon_sym_ExclusiveOS] = ACTIONS(395),
    [anon_sym_Obsoletes] = ACTIONS(395),
    [anon_sym_OrderWithRequires] = ACTIONS(395),
    [anon_sym_Prefix] = ACTIONS(395),
    [anon_sym_Prefixes] = ACTIONS(395),
    [anon_sym_Prereq] = ACTIONS(395),
    [anon_sym_Provides] = ACTIONS(395),
    [anon_sym_Recommends] = ACTIONS(395),
    [anon_sym_RemovePathPostfixes] = ACTIONS(395),
    [anon_sym_Suggests] = ACTIONS(395),
    [anon_sym_Supplements] = ACTIONS(395),
    [anon_sym_PERCENTdescription] = ACTIONS(395),
    [anon_sym_PERCENTpackage] = ACTIONS(395),
    [anon_sym_PERCENTprep] = ACTIONS(395),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(395),
    [anon_sym_PERCENTconf] = ACTIONS(395),
    [anon_sym_PERCENTbuild] = ACTIONS(395),
    [anon_sym_PERCENTinstall] = ACTIONS(395),
    [anon_sym_PERCENTcheck] = ACTIONS(395),
    [anon_sym_PERCENTclean] = ACTIONS(395),
    [anon_sym_PERCENTpre] = ACTIONS(395),
    [anon_sym_PERCENTpost] = ACTIONS(395),
    [anon_sym_PERCENTpreun] = ACTIONS(395),
    [anon_sym_PERCENTpostun] = ACTIONS(395),
    [anon_sym_PERCENTpretrans] = ACTIONS(395),
    [anon_sym_PERCENTposttrans] = ACTIONS(395),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(395),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(395),
    [anon_sym_PERCENTverify] = ACTIONS(395),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(395),
    [anon_sym_PERCENTtriggerin] = ACTIONS(395),
    [anon_sym_PERCENTtriggerun] = ACTIONS(395),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(395),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(395),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(395),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(395),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(395),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(395),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(395),
    [anon_sym_PERCENTfiles] = ACTIONS(395),
    [anon_sym_PERCENTchangelog] = ACTIONS(395),
    [anon_sym_PERCENTglobal] = ACTIONS(395),
    [anon_sym_PERCENTdefine] = ACTIONS(395),
    [anon_sym_PERCENTundefine] = ACTIONS(395),
    [anon_sym_PERCENT] = ACTIONS(395),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(395),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(395),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [aux_sym__simple_statements_token1] = ACTIONS(497),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(499),
    [anon_sym_PERCENTifarch] = ACTIONS(499),
    [anon_sym_PERCENTifos] = ACTIONS(499),
    [anon_sym_PERCENTifnarch] = ACTIONS(499),
    [anon_sym_PERCENTifnos] = ACTIONS(499),
    [anon_sym_AutoProv] = ACTIONS(499),
    [anon_sym_AutoReq] = ACTIONS(499),
    [anon_sym_AutoReqProv] = ACTIONS(499),
    [anon_sym_BugUrl] = ACTIONS(499),
    [anon_sym_BuildRoot] = ACTIONS(499),
    [anon_sym_BuildSystem] = ACTIONS(499),
    [anon_sym_DistTag] = ACTIONS(499),
    [anon_sym_Distribution] = ACTIONS(499),
    [anon_sym_Epoch] = ACTIONS(499),
    [anon_sym_Group] = ACTIONS(499),
    [anon_sym_License] = ACTIONS(499),
    [anon_sym_ModularityLabel] = ACTIONS(499),
    [anon_sym_Name] = ACTIONS(499),
    [anon_sym_NoPatch] = ACTIONS(499),
    [anon_sym_NoSource] = ACTIONS(499),
    [anon_sym_Packager] = ACTIONS(499),
    [anon_sym_Release] = ACTIONS(499),
    [anon_sym_SourceLicense] = ACTIONS(499),
    [anon_sym_Summary] = ACTIONS(499),
    [anon_sym_URL] = ACTIONS(499),
    [anon_sym_Url] = ACTIONS(499),
    [anon_sym_VCS] = ACTIONS(499),
    [anon_sym_Vendor] = ACTIONS(499),
    [anon_sym_Version] = ACTIONS(499),
    [aux_sym_tag_token1] = ACTIONS(499),
    [aux_sym_tag_token2] = ACTIONS(499),
    [anon_sym_Requires] = ACTIONS(499),
    [anon_sym_BuildArch] = ACTIONS(499),
    [anon_sym_BuildArchitectures] = ACTIONS(499),
    [anon_sym_BuildConflicts] = ACTIONS(499),
    [anon_sym_BuildPrereq] = ACTIONS(499),
    [anon_sym_BuildRequires] = ACTIONS(499),
    [anon_sym_Conflicts] = ACTIONS(499),
    [anon_sym_DocDir] = ACTIONS(499),
    [anon_sym_Enhances] = ACTIONS(499),
    [anon_sym_ExcludeArch] = ACTIONS(499),
    [anon_sym_ExcludeOS] = ACTIONS(499),
    [anon_sym_ExclusiveArch] = ACTIONS(499),
    [anon_sym_ExclusiveOS] = ACTIONS(499),
    [anon_sym_Obsoletes] = ACTIONS(499),
    [anon_sym_OrderWithRequires] = ACTIONS(499),
    [anon_sym_Prefix] = ACTIONS(499),
    [anon_sym_Prefixes] = ACTIONS(499),
    [anon_sym_Prereq] = ACTIONS(499),
    [anon_sym_Provides] = ACTIONS(499),
    [anon_sym_Recommends] = ACTIONS(499),
    [anon_sym_RemovePathPostfixes] = ACTIONS(499),
    [anon_sym_Suggests] = ACTIONS(499),
    [anon_sym_Supplements] = ACTIONS(499),
    [anon_sym_PERCENTdescription] = ACTIONS(499),
    [anon_sym_PERCENTpackage] = ACTIONS(499),
    [anon_sym_PERCENTprep] = ACTIONS(499),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(499),
    [anon_sym_PERCENTconf] = ACTIONS(499),
    [anon_sym_PERCENTbuild] = ACTIONS(499),
    [anon_sym_PERCENTinstall] = ACTIONS(499),
    [anon_sym_PERCENTcheck] = ACTIONS(499),
    [anon_sym_PERCENTclean] = ACTIONS(499),
    [anon_sym_PERCENTpre] = ACTIONS(499),
    [anon_sym_PERCENTpost] = ACTIONS(499),
    [anon_sym_PERCENTpreun] = ACTIONS(499),
    [anon_sym_PERCENTpostun] = ACTIONS(499),
    [anon_sym_PERCENTpretrans] = ACTIONS(499),
    [anon_sym_PERCENTposttrans] = ACTIONS(499),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(499),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(499),
    [anon_sym_PERCENTverify] = ACTIONS(499),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(499),
    [anon_sym_PERCENTtriggerin] = ACTIONS(499),
    [anon_sym_PERCENTtriggerun] = ACTIONS(499),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(499),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(499),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(499),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(499),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(499),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(499),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(499),
    [anon_sym_PERCENTfiles] = ACTIONS(499),
    [anon_sym_PERCENTchangelog] = ACTIONS(499),
    [anon_sym_PERCENTglobal] = ACTIONS(499),
    [anon_sym_PERCENTdefine] = ACTIONS(499),
    [anon_sym_PERCENTundefine] = ACTIONS(499),
    [anon_sym_PERCENT] = ACTIONS(499),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(499),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(499),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_Requires,
    ACTIONS(516), 1,
      anon_sym_PERCENTdescription,
    STATE(75), 1,
      sym_tags,
    ACTIONS(504), 2,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
    ACTIONS(510), 2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    STATE(73), 2,
      sym_preamble,
      aux_sym_subsection_package_repeat1,
    STATE(527), 2,
      sym_tag,
      sym_dependency_tag,
    ACTIONS(513), 20,
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
    ACTIONS(501), 24,
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
    ACTIONS(491), 5,
      anon_sym_PERCENTelif,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    ACTIONS(489), 50,
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
    ACTIONS(403), 5,
      anon_sym_PERCENTelif,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    ACTIONS(401), 50,
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
    ACTIONS(520), 1,
      anon_sym_Requires,
    ACTIONS(524), 1,
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
    ACTIONS(522), 20,
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
    ACTIONS(518), 24,
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
    ACTIONS(520), 1,
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
    ACTIONS(522), 20,
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
    ACTIONS(518), 24,
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
    ACTIONS(526), 1,
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
    ACTIONS(528), 9,
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
    ACTIONS(530), 1,
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
    ACTIONS(533), 9,
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
    ACTIONS(526), 1,
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
    ACTIONS(528), 9,
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
    ACTIONS(526), 1,
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
    ACTIONS(528), 9,
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
    ACTIONS(526), 1,
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
    ACTIONS(528), 9,
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
    ACTIONS(526), 1,
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
    ACTIONS(528), 9,
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
    ACTIONS(526), 1,
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
    ACTIONS(528), 9,
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
    ACTIONS(536), 1,
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
    ACTIONS(536), 1,
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
    ACTIONS(536), 1,
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
    ACTIONS(536), 1,
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
    ACTIONS(536), 1,
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
    ACTIONS(540), 1,
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
    ACTIONS(543), 9,
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
    ACTIONS(536), 1,
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
    ACTIONS(548), 9,
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
    ACTIONS(550), 9,
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
    ACTIONS(552), 9,
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
  [1502] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_PERCENT,
    ACTIONS(287), 1,
      sym_string_content,
    ACTIONS(289), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(291), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(554), 2,
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
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [1541] = 2,
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
  [1564] = 2,
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
  [1587] = 2,
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
  [1610] = 2,
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
  [1633] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_PERCENT,
    ACTIONS(558), 1,
      sym_string_content_with_newlines,
    ACTIONS(560), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(562), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(231), 1,
      sym_string_with_newlines,
    ACTIONS(307), 5,
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
  [1666] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    ACTIONS(568), 1,
      anon_sym_PERCENT,
    ACTIONS(570), 1,
      sym_string_content,
    ACTIONS(572), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(574), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(132), 1,
      sym_macro_options,
    ACTIONS(566), 2,
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
  [1703] = 10,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    ACTIONS(568), 1,
      anon_sym_PERCENT,
    ACTIONS(570), 1,
      sym_string_content,
    ACTIONS(572), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(574), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(126), 1,
      sym_macro_options,
    ACTIONS(576), 2,
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
  [1740] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_PERCENT,
    ACTIONS(558), 1,
      sym_string_content_with_newlines,
    ACTIONS(560), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(562), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(260), 1,
      sym_string_with_newlines,
    ACTIONS(295), 5,
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
  [1773] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_PERCENT,
    ACTIONS(558), 1,
      sym_string_content_with_newlines,
    ACTIONS(560), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(562), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(258), 1,
      sym_string_with_newlines,
    ACTIONS(315), 5,
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
  [1806] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_PERCENT,
    ACTIONS(287), 1,
      sym_string_content,
    ACTIONS(289), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(291), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(281), 2,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
    ACTIONS(554), 2,
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
  [1841] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_PERCENT,
    ACTIONS(558), 1,
      sym_string_content_with_newlines,
    ACTIONS(560), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(562), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(259), 1,
      sym_string_with_newlines,
    ACTIONS(311), 5,
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
  [1874] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_PERCENT,
    ACTIONS(287), 1,
      sym_string_content,
    ACTIONS(289), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(291), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(578), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(580), 2,
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
  [1908] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_PERCENT,
    ACTIONS(570), 1,
      sym_string_content,
    ACTIONS(572), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(574), 1,
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
  [1942] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_PERCENT,
    ACTIONS(570), 1,
      sym_string_content,
    ACTIONS(572), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(574), 1,
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
  [1976] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_PERCENT,
    ACTIONS(570), 1,
      sym_string_content,
    ACTIONS(572), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(574), 1,
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
  [2010] = 7,
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
    ACTIONS(325), 5,
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
  [2040] = 9,
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
  [2074] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_PERCENT,
    ACTIONS(560), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(562), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(619), 1,
      sym_string_content_with_newlines,
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
  [2104] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_PERCENT,
    ACTIONS(570), 1,
      sym_string_content,
    ACTIONS(572), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(574), 1,
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
  [2138] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_PERCENT,
    ACTIONS(570), 1,
      sym_string_content,
    ACTIONS(572), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(574), 1,
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
  [2172] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_PERCENT,
    ACTIONS(570), 1,
      sym_string_content,
    ACTIONS(572), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(574), 1,
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
  [2206] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_PERCENT,
    ACTIONS(287), 1,
      sym_string_content,
    ACTIONS(289), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(291), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(627), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(580), 2,
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
  [2240] = 2,
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
  [2260] = 9,
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
  [2294] = 4,
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
  [2317] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_PERCENT,
    ACTIONS(570), 1,
      sym_string_content,
    ACTIONS(572), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(574), 1,
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
  [2348] = 4,
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
  [2371] = 8,
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
  [2402] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_PERCENT,
    ACTIONS(570), 1,
      sym_string_content,
    ACTIONS(572), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(574), 1,
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
  [2433] = 8,
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
  [2464] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_PERCENT,
    ACTIONS(570), 1,
      sym_string_content,
    ACTIONS(572), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(574), 1,
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
  [2495] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_PERCENT,
    ACTIONS(570), 1,
      sym_string_content,
    ACTIONS(572), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(574), 1,
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
  [2526] = 4,
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
  [2549] = 7,
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
  [2577] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_PERCENT,
    ACTIONS(289), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(291), 1,
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
  [2607] = 8,
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
  [2637] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(371), 12,
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
  [2655] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_PERCENT,
    ACTIONS(572), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(574), 1,
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
  [2683] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(315), 1,
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
  [2712] = 7,
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
  [2739] = 7,
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
  [2766] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(295), 1,
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
  [2795] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(307), 1,
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
  [2824] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(311), 1,
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
  [2853] = 7,
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
  [2879] = 7,
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
  [2905] = 7,
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
  [2931] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(399), 10,
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
  [2947] = 7,
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
  [2973] = 7,
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
  [2999] = 7,
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
  [3025] = 7,
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
  [3051] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(325), 1,
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
  [3077] = 7,
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
  [3103] = 7,
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
  [3129] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(319), 1,
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
  [3155] = 7,
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
  [3181] = 7,
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
  [3207] = 7,
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
  [3233] = 7,
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
  [3259] = 3,
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
  [3277] = 7,
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
  [3303] = 7,
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
  [3329] = 7,
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
  [3355] = 7,
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
  [3381] = 7,
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
  [3407] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(391), 10,
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
  [3423] = 7,
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
  [3449] = 7,
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
  [3475] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(387), 10,
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
  [3491] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(383), 10,
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
  [3507] = 7,
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
  [3533] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(395), 10,
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
  [3549] = 7,
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
  [3575] = 7,
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
  [3601] = 7,
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
  [3627] = 7,
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
  [3652] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(325), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3667] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(399), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3682] = 7,
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
  [3707] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(371), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3722] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(391), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3737] = 4,
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
  [3756] = 7,
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
  [3781] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(395), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3796] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(387), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3811] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(383), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3826] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_PERCENTelif,
    ACTIONS(783), 1,
      anon_sym_DASH,
    STATE(193), 1,
      aux_sym_changelog_entry_repeat1,
    ACTIONS(365), 5,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_STAR,
  [3846] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_PERCENTelif,
    ACTIONS(785), 1,
      anon_sym_STAR,
    STATE(198), 2,
      sym_changelog_entry,
      aux_sym_changelog_repeat1,
    ACTIONS(373), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [3866] = 8,
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
  [3892] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_PERCENTelif,
    ACTIONS(793), 1,
      anon_sym_STAR,
    STATE(191), 2,
      sym_changelog_entry,
      aux_sym_changelog_repeat1,
    ACTIONS(339), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [3912] = 8,
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
  [3938] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_PERCENTelif,
    ACTIONS(798), 1,
      anon_sym_DASH,
    STATE(193), 1,
      aux_sym_changelog_entry_repeat1,
    ACTIONS(346), 5,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_STAR,
  [3958] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(371), 8,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3972] = 8,
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
  [3998] = 8,
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
  [4024] = 8,
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
  [4050] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_PERCENTelif,
    ACTIONS(785), 1,
      anon_sym_STAR,
    STATE(191), 2,
      sym_changelog_entry,
      aux_sym_changelog_repeat1,
    ACTIONS(359), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4070] = 8,
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
  [4096] = 8,
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
  [4122] = 8,
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
  [4148] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_PERCENTelif,
    ACTIONS(783), 1,
      anon_sym_DASH,
    STATE(188), 1,
      aux_sym_changelog_entry_repeat1,
    ACTIONS(353), 5,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_STAR,
  [4168] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(387), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4183] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(391), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4198] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(395), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4211] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(383), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4224] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(387), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4237] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(397), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(399), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4252] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(393), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(395), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4267] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(369), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(371), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4282] = 6,
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
  [4303] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(399), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4316] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(371), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_PERCENTelif,
    ACTIONS(377), 6,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_DASH,
      anon_sym_STAR,
  [4344] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(391), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4357] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym_macro_invocation_token1,
    ACTIONS(383), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4372] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(395), 6,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4384] = 4,
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
  [4400] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(827), 6,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4412] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(371), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4424] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(399), 6,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4436] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(387), 6,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4448] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(395), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4460] = 3,
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
  [4474] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(387), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4486] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(391), 6,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4498] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(399), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4510] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(391), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4522] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(383), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4534] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(383), 6,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_PERCENTelif,
    ACTIONS(497), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_PERCENTelif,
    ACTIONS(267), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4572] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(395), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4583] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(395), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_PERCENTelif,
    ACTIONS(485), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4607] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(399), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_PERCENTelif,
    ACTIONS(469), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_PERCENTelif,
    ACTIONS(461), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_PERCENTelif,
    ACTIONS(453), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_PERCENTelif,
    ACTIONS(445), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_PERCENTelif,
    ACTIONS(263), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4683] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(383), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_PERCENTelif,
    ACTIONS(457), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PERCENTelif,
    ACTIONS(417), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_PERCENTelif,
    ACTIONS(413), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_PERCENTelif,
    ACTIONS(413), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_PERCENTelif,
    ACTIONS(441), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4759] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(391), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_PERCENTelif,
    ACTIONS(493), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_PERCENTelif,
    ACTIONS(449), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_PERCENTelif,
    ACTIONS(449), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_PERCENTelif,
    ACTIONS(271), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_PERCENTelif,
    ACTIONS(275), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4835] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(391), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_PERCENTelif,
    ACTIONS(831), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_PERCENTelif,
    ACTIONS(421), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_PERCENTelif,
    ACTIONS(473), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_PERCENTelif,
    ACTIONS(405), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_PERCENTelif,
    ACTIONS(477), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_PERCENTelif,
    ACTIONS(465), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_PERCENTelif,
    ACTIONS(437), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_PERCENTelif,
    ACTIONS(409), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_PERCENTelif,
    ACTIONS(481), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_PERCENTelif,
    ACTIONS(425), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4976] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(387), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4987] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(325), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_PERCENTelif,
    ACTIONS(429), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [5011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_PERCENTelif,
    ACTIONS(433), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [5024] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(371), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [5035] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(399), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [5046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_PERCENTelif,
    ACTIONS(835), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [5059] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(371), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [5070] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(387), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [5081] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(383), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [5092] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(837), 4,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [5102] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(839), 4,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [5112] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(841), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(843), 1,
      anon_sym_DASHn,
    ACTIONS(845), 1,
      anon_sym_DASHf,
  [5125] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(847), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(849), 1,
      anon_sym_DASHn,
    ACTIONS(851), 1,
      anon_sym_DASHf,
  [5138] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(853), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(855), 1,
      anon_sym_DASHn,
    ACTIONS(857), 1,
      anon_sym_DASHf,
  [5151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_COLON,
    ACTIONS(861), 1,
      anon_sym_RBRACE,
  [5161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [5169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [5177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [5185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_variable_name,
    ACTIONS(871), 1,
      anon_sym_QMARK,
  [5195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym_variable_name,
    ACTIONS(875), 1,
      anon_sym_QMARK,
  [5205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym_variable_name,
    ACTIONS(879), 1,
      anon_sym_QMARK,
  [5215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      sym_variable_name,
    ACTIONS(883), 1,
      anon_sym_QMARK,
  [5225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      sym_variable_name,
    ACTIONS(887), 1,
      anon_sym_QMARK,
  [5235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym_variable_name,
    ACTIONS(891), 1,
      anon_sym_QMARK,
  [5245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      sym_variable_name,
    ACTIONS(895), 1,
      anon_sym_QMARK,
  [5255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_COLON,
    ACTIONS(899), 1,
      anon_sym_LPAREN,
  [5265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym_variable_name,
    ACTIONS(903), 1,
      anon_sym_QMARK,
  [5275] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(905), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(907), 1,
      anon_sym_DASHn,
  [5285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      sym_variable_name,
    ACTIONS(911), 1,
      anon_sym_QMARK,
  [5295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym_variable_name,
    ACTIONS(915), 1,
      anon_sym_QMARK,
  [5305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_PERCENTdescription,
    STATE(53), 1,
      sym_subsection_description,
  [5315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_COLON,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
  [5325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      sym_variable_name,
    ACTIONS(925), 1,
      anon_sym_QMARK,
  [5335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_COLON,
    ACTIONS(929), 1,
      anon_sym_RBRACE,
  [5345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_COLON,
    ACTIONS(933), 1,
      anon_sym_RBRACE,
  [5355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_COLON,
    ACTIONS(937), 1,
      anon_sym_RBRACE,
  [5365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_COLON,
    ACTIONS(941), 1,
      anon_sym_RBRACE,
  [5375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_COLON,
    ACTIONS(945), 1,
      anon_sym_RBRACE,
  [5385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_COLON,
    ACTIONS(949), 1,
      anon_sym_RBRACE,
  [5395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_COLON,
    ACTIONS(953), 1,
      anon_sym_RBRACE,
  [5405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_COLON,
    ACTIONS(957), 1,
      anon_sym_RBRACE,
  [5415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_COLON,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
  [5425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_COLON,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
  [5435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_COLON,
    ACTIONS(969), 1,
      anon_sym_RBRACE,
  [5445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_COLON,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
  [5455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_COLON,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
  [5465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_COLON,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
  [5475] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(983), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(985), 1,
      anon_sym_DASHf,
  [5485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_PERCENTdescription,
    STATE(261), 1,
      sym_subsection_description,
  [5495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_COLON,
    ACTIONS(991), 1,
      anon_sym_RBRACE,
  [5505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_COLON,
    ACTIONS(995), 1,
      anon_sym_RBRACE,
  [5515] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym_string_content_with_newlines,
    ACTIONS(999), 1,
      sym_variable_name,
  [5525] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1001), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(1003), 1,
      anon_sym_DASHn,
  [5535] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym_string_content_with_newlines,
    ACTIONS(1007), 1,
      sym_variable_name,
  [5545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [5553] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1011), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(1013), 1,
      anon_sym_DASHn,
  [5563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [5571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_COLON,
    ACTIONS(1019), 1,
      anon_sym_RBRACE,
  [5581] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1021), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(1023), 1,
      anon_sym_DASHf,
  [5591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_COLON,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
  [5601] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1029), 1,
      sym_string_content_with_newlines,
    ACTIONS(1031), 1,
      sym_variable_name,
  [5611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_COLON,
    ACTIONS(1035), 1,
      anon_sym_RBRACE,
  [5621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_COLON,
    ACTIONS(1039), 1,
      anon_sym_RBRACE,
  [5631] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1041), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(1043), 1,
      anon_sym_DASHf,
  [5641] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1045), 1,
      aux_sym__simple_statements_token1,
  [5648] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1047), 1,
      aux_sym__simple_statements_token1,
  [5655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_PERCENTendif,
  [5662] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1051), 1,
      aux_sym__simple_statements_token1,
  [5669] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1053), 1,
      aux_sym__simple_statements_token1,
  [5676] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym_string_content,
  [5683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_RBRACE,
  [5690] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1059), 1,
      aux_sym__simple_statements_token1,
  [5697] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1061), 1,
      aux_sym__simple_statements_token1,
  [5704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_COLON,
  [5711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_PERCENTendif,
  [5718] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1067), 1,
      aux_sym__simple_statements_token1,
  [5725] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1069), 1,
      aux_sym_if_statement_token1,
  [5732] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1071), 1,
      aux_sym__simple_statements_token1,
  [5739] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym_string_content,
  [5746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
  [5753] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1077), 1,
      sym_string_content,
  [5760] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(983), 1,
      aux_sym__simple_statements_token1,
  [5767] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1079), 1,
      aux_sym__simple_statements_token1,
  [5774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_LPAREN,
  [5781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_LPAREN,
  [5788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_LPAREN2,
  [5795] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1085), 1,
      aux_sym__simple_statements_token1,
  [5802] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1087), 1,
      aux_sym__simple_statements_token1,
  [5809] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1089), 1,
      aux_sym__simple_statements_token1,
  [5816] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1091), 1,
      aux_sym__simple_statements_token1,
  [5823] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1093), 1,
      aux_sym__simple_statements_token1,
  [5830] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1095), 1,
      aux_sym__simple_statements_token1,
  [5837] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym__simple_statements_token1,
  [5844] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym__simple_statements_token1,
  [5851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      sym_variable_name,
  [5858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
  [5865] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1103), 1,
      aux_sym__simple_statements_token1,
  [5872] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1105), 1,
      aux_sym__simple_statements_token1,
  [5879] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1107), 1,
      aux_sym__simple_statements_token1,
  [5886] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1109), 1,
      aux_sym__simple_statements_token1,
  [5893] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1021), 1,
      aux_sym__simple_statements_token1,
  [5900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
  [5907] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1113), 1,
      aux_sym__simple_statements_token1,
  [5914] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1115), 1,
      aux_sym__simple_statements_token1,
  [5921] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1117), 1,
      aux_sym__simple_statements_token1,
  [5928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
  [5935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_RBRACE,
  [5942] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1123), 1,
      aux_sym__simple_statements_token1,
  [5949] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1125), 1,
      aux_sym__simple_statements_token1,
  [5956] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1127), 1,
      aux_sym__simple_statements_token1,
  [5963] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1129), 1,
      aux_sym__simple_statements_token1,
  [5970] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1131), 1,
      aux_sym__simple_statements_token1,
  [5977] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1133), 1,
      aux_sym__simple_statements_token1,
  [5984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_RBRACE,
  [5991] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1137), 1,
      aux_sym__simple_statements_token1,
  [5998] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1139), 1,
      aux_sym__simple_statements_token1,
  [6005] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1141), 1,
      aux_sym__simple_statements_token1,
  [6012] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1143), 1,
      aux_sym__simple_statements_token1,
  [6019] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1145), 1,
      aux_sym__simple_statements_token1,
  [6026] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1147), 1,
      aux_sym__simple_statements_token1,
  [6033] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1149), 1,
      aux_sym__simple_statements_token1,
  [6040] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1151), 1,
      aux_sym__simple_statements_token1,
  [6047] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1153), 1,
      aux_sym__simple_statements_token1,
  [6054] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym__simple_statements_token1,
  [6061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      sym_variable_name,
  [6068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
  [6075] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1161), 1,
      aux_sym__simple_statements_token1,
  [6082] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1163), 1,
      aux_sym__simple_statements_token1,
  [6089] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1041), 1,
      aux_sym__simple_statements_token1,
  [6096] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1165), 1,
      aux_sym__simple_statements_token1,
  [6103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_RBRACE,
  [6110] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1169), 1,
      aux_sym__simple_statements_token1,
  [6117] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1171), 1,
      aux_sym__simple_statements_token1,
  [6124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_RBRACE,
  [6131] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1175), 1,
      aux_sym__simple_statements_token1,
  [6138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      sym_variable_name,
  [6145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
  [6152] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1181), 1,
      aux_sym__simple_statements_token1,
  [6159] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1183), 1,
      aux_sym__simple_statements_token1,
  [6166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_RBRACE,
  [6173] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1187), 1,
      aux_sym__simple_statements_token1,
  [6180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      anon_sym_RBRACE,
  [6187] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1191), 1,
      aux_sym__simple_statements_token1,
  [6194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 1,
      sym_variable_name,
  [6201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
  [6208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_PERCENTendif,
  [6215] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1199), 1,
      aux_sym__simple_statements_token1,
  [6222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 1,
      anon_sym_RBRACE,
  [6229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 1,
      anon_sym_RBRACE,
  [6236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      sym_variable_name,
  [6243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
  [6250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_DASHn,
  [6257] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1211), 1,
      aux_sym__simple_statements_token1,
  [6264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      anon_sym_RBRACE,
  [6271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      anon_sym_RBRACE,
  [6278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      sym_variable_name,
  [6285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
  [6292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
  [6299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      anon_sym_COMMA,
  [6306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      anon_sym_RBRACE,
  [6313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      anon_sym_RBRACE,
  [6320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 1,
      sym_variable_name,
  [6327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
  [6334] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1233), 1,
      aux_sym__simple_statements_token1,
  [6341] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1235), 1,
      aux_sym__simple_statements_token1,
  [6348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      anon_sym_RBRACE,
  [6355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      anon_sym_RBRACE,
  [6362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
  [6369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      anon_sym_RBRACE,
  [6376] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1245), 1,
      aux_sym__simple_statements_token1,
  [6383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 1,
      anon_sym_RBRACE,
  [6390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_RBRACE,
  [6397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      anon_sym_RPAREN,
  [6404] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1253), 1,
      aux_sym__simple_statements_token1,
  [6411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      anon_sym_PERCENTendif,
  [6418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1257), 1,
      anon_sym_RBRACE,
  [6425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      anon_sym_RBRACE,
  [6432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
  [6439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 1,
      anon_sym_PERCENTendif,
  [6446] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1265), 1,
      aux_sym__simple_statements_token1,
  [6453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      anon_sym_RBRACE,
  [6460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      anon_sym_RBRACE,
  [6467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      sym_variable_name,
  [6474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1273), 1,
      anon_sym_PERCENTendif,
  [6481] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1275), 1,
      aux_sym_if_statement_token1,
  [6488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1277), 1,
      sym_variable_name,
  [6495] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1279), 1,
      aux_sym__simple_statements_token1,
  [6502] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1281), 1,
      aux_sym__simple_statements_token1,
  [6509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 1,
      sym_variable_name,
  [6516] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1285), 1,
      aux_sym__simple_statements_token1,
  [6523] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1287), 1,
      aux_sym__simple_statements_token1,
  [6530] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1289), 1,
      aux_sym__simple_statements_token1,
  [6537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      aux_sym_defattr_token2,
  [6544] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1293), 1,
      sym_string_content,
  [6551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 1,
      anon_sym_COLON,
  [6558] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1297), 1,
      sym_string_content,
  [6565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 1,
      ts_builtin_sym_end,
  [6572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
  [6579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_PERCENTendif,
  [6586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      aux_sym_defattr_token2,
  [6593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      sym_variable_name,
  [6600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      sym_variable_name,
  [6607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      sym_variable_name,
  [6614] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1313), 1,
      sym_string_content,
  [6621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_PERCENTendif,
  [6628] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1317), 1,
      aux_sym__simple_statements_token1,
  [6635] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym__simple_statements_token1,
  [6642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 1,
      anon_sym_PERCENTendif,
  [6649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 1,
      anon_sym_PERCENTendif,
  [6656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 1,
      anon_sym_PERCENTendif,
  [6663] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1327), 1,
      aux_sym__simple_statements_token1,
  [6670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
  [6677] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1331), 1,
      aux_sym__simple_statements_token1,
  [6684] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1333), 1,
      aux_sym__simple_statements_token1,
  [6691] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1335), 1,
      aux_sym__simple_statements_token1,
  [6698] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1337), 1,
      aux_sym__simple_statements_token1,
  [6705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1339), 1,
      sym_variable_name,
  [6712] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1341), 1,
      aux_sym__simple_statements_token1,
  [6719] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1343), 1,
      aux_sym__simple_statements_token1,
  [6726] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1345), 1,
      sym_string_content,
  [6733] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1347), 1,
      aux_sym__simple_statements_token1,
  [6740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
  [6747] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1351), 1,
      sym_string_content,
  [6754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
  [6761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
  [6768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 1,
      sym_variable_name,
  [6775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_COLON,
  [6782] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1359), 1,
      aux_sym__simple_statements_token1,
  [6789] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1361), 1,
      sym_string_content,
  [6796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_COLON,
  [6803] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1365), 1,
      sym_string_content,
  [6810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
  [6817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      aux_sym_defattr_token2,
  [6824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 1,
      sym_variable_name,
  [6831] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1373), 1,
      sym_string_content,
  [6838] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1375), 1,
      sym_string_content,
  [6845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1377), 1,
      aux_sym_defattr_token2,
  [6852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 1,
      sym_variable_name,
  [6859] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1381), 1,
      sym_string_content,
  [6866] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1383), 1,
      sym_string_content,
  [6873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
  [6880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 1,
      sym_variable_name,
  [6887] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1389), 1,
      sym_string_content,
  [6894] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1391), 1,
      sym_string_content,
  [6901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 1,
      anon_sym_RPAREN,
  [6908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 1,
      sym_variable_name,
  [6915] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1397), 1,
      sym_string_content,
  [6922] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1399), 1,
      sym_string_content,
  [6929] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1401), 1,
      aux_sym__simple_statements_token1,
  [6936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1403), 1,
      sym_variable_name,
  [6943] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1405), 1,
      sym_string_content,
  [6950] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1407), 1,
      sym_string_content,
  [6957] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(369), 1,
      aux_sym__simple_statements_token1,
  [6964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 1,
      sym_variable_name,
  [6971] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1411), 1,
      sym_string_content,
  [6978] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1413), 1,
      sym_string_content,
  [6985] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym__simple_statements_token1,
  [6992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 1,
      sym_variable_name,
  [6999] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1417), 1,
      sym_string_content,
  [7006] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1419), 1,
      sym_string_content,
  [7013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1421), 1,
      sym_variable_name,
  [7020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 1,
      anon_sym_COLON,
  [7027] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1425), 1,
      aux_sym__simple_statements_token1,
  [7034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1427), 1,
      anon_sym_DASHn,
  [7041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 1,
      aux_sym_defattr_token2,
  [7048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1431), 1,
      aux_sym_defattr_token2,
  [7055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1433), 1,
      aux_sym_defattr_token2,
  [7062] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1435), 1,
      aux_sym_if_statement_token1,
  [7069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_COMMA,
  [7076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 1,
      anon_sym_COMMA,
  [7083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1441), 1,
      anon_sym_COMMA,
  [7090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 1,
      aux_sym_defattr_token2,
  [7097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 1,
      aux_sym_defattr_token2,
  [7104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 1,
      aux_sym_defattr_token2,
  [7111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 1,
      anon_sym_COMMA,
  [7118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 1,
      anon_sym_COMMA,
  [7125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1453), 1,
      anon_sym_COMMA,
  [7132] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(381), 1,
      aux_sym__simple_statements_token1,
  [7139] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(393), 1,
      aux_sym__simple_statements_token1,
  [7146] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(397), 1,
      aux_sym__simple_statements_token1,
  [7153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 1,
      anon_sym_LPAREN,
  [7160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 1,
      anon_sym_LPAREN,
  [7167] = 2,
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
  [SMALL_STATE(101)] = 1541,
  [SMALL_STATE(102)] = 1564,
  [SMALL_STATE(103)] = 1587,
  [SMALL_STATE(104)] = 1610,
  [SMALL_STATE(105)] = 1633,
  [SMALL_STATE(106)] = 1666,
  [SMALL_STATE(107)] = 1703,
  [SMALL_STATE(108)] = 1740,
  [SMALL_STATE(109)] = 1773,
  [SMALL_STATE(110)] = 1806,
  [SMALL_STATE(111)] = 1841,
  [SMALL_STATE(112)] = 1874,
  [SMALL_STATE(113)] = 1908,
  [SMALL_STATE(114)] = 1942,
  [SMALL_STATE(115)] = 1976,
  [SMALL_STATE(116)] = 2010,
  [SMALL_STATE(117)] = 2040,
  [SMALL_STATE(118)] = 2074,
  [SMALL_STATE(119)] = 2104,
  [SMALL_STATE(120)] = 2138,
  [SMALL_STATE(121)] = 2172,
  [SMALL_STATE(122)] = 2206,
  [SMALL_STATE(123)] = 2240,
  [SMALL_STATE(124)] = 2260,
  [SMALL_STATE(125)] = 2294,
  [SMALL_STATE(126)] = 2317,
  [SMALL_STATE(127)] = 2348,
  [SMALL_STATE(128)] = 2371,
  [SMALL_STATE(129)] = 2402,
  [SMALL_STATE(130)] = 2433,
  [SMALL_STATE(131)] = 2464,
  [SMALL_STATE(132)] = 2495,
  [SMALL_STATE(133)] = 2526,
  [SMALL_STATE(134)] = 2549,
  [SMALL_STATE(135)] = 2577,
  [SMALL_STATE(136)] = 2607,
  [SMALL_STATE(137)] = 2637,
  [SMALL_STATE(138)] = 2655,
  [SMALL_STATE(139)] = 2683,
  [SMALL_STATE(140)] = 2712,
  [SMALL_STATE(141)] = 2739,
  [SMALL_STATE(142)] = 2766,
  [SMALL_STATE(143)] = 2795,
  [SMALL_STATE(144)] = 2824,
  [SMALL_STATE(145)] = 2853,
  [SMALL_STATE(146)] = 2879,
  [SMALL_STATE(147)] = 2905,
  [SMALL_STATE(148)] = 2931,
  [SMALL_STATE(149)] = 2947,
  [SMALL_STATE(150)] = 2973,
  [SMALL_STATE(151)] = 2999,
  [SMALL_STATE(152)] = 3025,
  [SMALL_STATE(153)] = 3051,
  [SMALL_STATE(154)] = 3077,
  [SMALL_STATE(155)] = 3103,
  [SMALL_STATE(156)] = 3129,
  [SMALL_STATE(157)] = 3155,
  [SMALL_STATE(158)] = 3181,
  [SMALL_STATE(159)] = 3207,
  [SMALL_STATE(160)] = 3233,
  [SMALL_STATE(161)] = 3259,
  [SMALL_STATE(162)] = 3277,
  [SMALL_STATE(163)] = 3303,
  [SMALL_STATE(164)] = 3329,
  [SMALL_STATE(165)] = 3355,
  [SMALL_STATE(166)] = 3381,
  [SMALL_STATE(167)] = 3407,
  [SMALL_STATE(168)] = 3423,
  [SMALL_STATE(169)] = 3449,
  [SMALL_STATE(170)] = 3475,
  [SMALL_STATE(171)] = 3491,
  [SMALL_STATE(172)] = 3507,
  [SMALL_STATE(173)] = 3533,
  [SMALL_STATE(174)] = 3549,
  [SMALL_STATE(175)] = 3575,
  [SMALL_STATE(176)] = 3601,
  [SMALL_STATE(177)] = 3627,
  [SMALL_STATE(178)] = 3652,
  [SMALL_STATE(179)] = 3667,
  [SMALL_STATE(180)] = 3682,
  [SMALL_STATE(181)] = 3707,
  [SMALL_STATE(182)] = 3722,
  [SMALL_STATE(183)] = 3737,
  [SMALL_STATE(184)] = 3756,
  [SMALL_STATE(185)] = 3781,
  [SMALL_STATE(186)] = 3796,
  [SMALL_STATE(187)] = 3811,
  [SMALL_STATE(188)] = 3826,
  [SMALL_STATE(189)] = 3846,
  [SMALL_STATE(190)] = 3866,
  [SMALL_STATE(191)] = 3892,
  [SMALL_STATE(192)] = 3912,
  [SMALL_STATE(193)] = 3938,
  [SMALL_STATE(194)] = 3958,
  [SMALL_STATE(195)] = 3972,
  [SMALL_STATE(196)] = 3998,
  [SMALL_STATE(197)] = 4024,
  [SMALL_STATE(198)] = 4050,
  [SMALL_STATE(199)] = 4070,
  [SMALL_STATE(200)] = 4096,
  [SMALL_STATE(201)] = 4122,
  [SMALL_STATE(202)] = 4148,
  [SMALL_STATE(203)] = 4168,
  [SMALL_STATE(204)] = 4183,
  [SMALL_STATE(205)] = 4198,
  [SMALL_STATE(206)] = 4211,
  [SMALL_STATE(207)] = 4224,
  [SMALL_STATE(208)] = 4237,
  [SMALL_STATE(209)] = 4252,
  [SMALL_STATE(210)] = 4267,
  [SMALL_STATE(211)] = 4282,
  [SMALL_STATE(212)] = 4303,
  [SMALL_STATE(213)] = 4316,
  [SMALL_STATE(214)] = 4329,
  [SMALL_STATE(215)] = 4344,
  [SMALL_STATE(216)] = 4357,
  [SMALL_STATE(217)] = 4372,
  [SMALL_STATE(218)] = 4384,
  [SMALL_STATE(219)] = 4400,
  [SMALL_STATE(220)] = 4412,
  [SMALL_STATE(221)] = 4424,
  [SMALL_STATE(222)] = 4436,
  [SMALL_STATE(223)] = 4448,
  [SMALL_STATE(224)] = 4460,
  [SMALL_STATE(225)] = 4474,
  [SMALL_STATE(226)] = 4486,
  [SMALL_STATE(227)] = 4498,
  [SMALL_STATE(228)] = 4510,
  [SMALL_STATE(229)] = 4522,
  [SMALL_STATE(230)] = 4534,
  [SMALL_STATE(231)] = 4546,
  [SMALL_STATE(232)] = 4559,
  [SMALL_STATE(233)] = 4572,
  [SMALL_STATE(234)] = 4583,
  [SMALL_STATE(235)] = 4594,
  [SMALL_STATE(236)] = 4607,
  [SMALL_STATE(237)] = 4618,
  [SMALL_STATE(238)] = 4631,
  [SMALL_STATE(239)] = 4644,
  [SMALL_STATE(240)] = 4657,
  [SMALL_STATE(241)] = 4670,
  [SMALL_STATE(242)] = 4683,
  [SMALL_STATE(243)] = 4694,
  [SMALL_STATE(244)] = 4707,
  [SMALL_STATE(245)] = 4720,
  [SMALL_STATE(246)] = 4733,
  [SMALL_STATE(247)] = 4746,
  [SMALL_STATE(248)] = 4759,
  [SMALL_STATE(249)] = 4770,
  [SMALL_STATE(250)] = 4783,
  [SMALL_STATE(251)] = 4796,
  [SMALL_STATE(252)] = 4809,
  [SMALL_STATE(253)] = 4822,
  [SMALL_STATE(254)] = 4835,
  [SMALL_STATE(255)] = 4846,
  [SMALL_STATE(256)] = 4859,
  [SMALL_STATE(257)] = 4872,
  [SMALL_STATE(258)] = 4885,
  [SMALL_STATE(259)] = 4898,
  [SMALL_STATE(260)] = 4911,
  [SMALL_STATE(261)] = 4924,
  [SMALL_STATE(262)] = 4937,
  [SMALL_STATE(263)] = 4950,
  [SMALL_STATE(264)] = 4963,
  [SMALL_STATE(265)] = 4976,
  [SMALL_STATE(266)] = 4987,
  [SMALL_STATE(267)] = 4998,
  [SMALL_STATE(268)] = 5011,
  [SMALL_STATE(269)] = 5024,
  [SMALL_STATE(270)] = 5035,
  [SMALL_STATE(271)] = 5046,
  [SMALL_STATE(272)] = 5059,
  [SMALL_STATE(273)] = 5070,
  [SMALL_STATE(274)] = 5081,
  [SMALL_STATE(275)] = 5092,
  [SMALL_STATE(276)] = 5102,
  [SMALL_STATE(277)] = 5112,
  [SMALL_STATE(278)] = 5125,
  [SMALL_STATE(279)] = 5138,
  [SMALL_STATE(280)] = 5151,
  [SMALL_STATE(281)] = 5161,
  [SMALL_STATE(282)] = 5169,
  [SMALL_STATE(283)] = 5177,
  [SMALL_STATE(284)] = 5185,
  [SMALL_STATE(285)] = 5195,
  [SMALL_STATE(286)] = 5205,
  [SMALL_STATE(287)] = 5215,
  [SMALL_STATE(288)] = 5225,
  [SMALL_STATE(289)] = 5235,
  [SMALL_STATE(290)] = 5245,
  [SMALL_STATE(291)] = 5255,
  [SMALL_STATE(292)] = 5265,
  [SMALL_STATE(293)] = 5275,
  [SMALL_STATE(294)] = 5285,
  [SMALL_STATE(295)] = 5295,
  [SMALL_STATE(296)] = 5305,
  [SMALL_STATE(297)] = 5315,
  [SMALL_STATE(298)] = 5325,
  [SMALL_STATE(299)] = 5335,
  [SMALL_STATE(300)] = 5345,
  [SMALL_STATE(301)] = 5355,
  [SMALL_STATE(302)] = 5365,
  [SMALL_STATE(303)] = 5375,
  [SMALL_STATE(304)] = 5385,
  [SMALL_STATE(305)] = 5395,
  [SMALL_STATE(306)] = 5405,
  [SMALL_STATE(307)] = 5415,
  [SMALL_STATE(308)] = 5425,
  [SMALL_STATE(309)] = 5435,
  [SMALL_STATE(310)] = 5445,
  [SMALL_STATE(311)] = 5455,
  [SMALL_STATE(312)] = 5465,
  [SMALL_STATE(313)] = 5475,
  [SMALL_STATE(314)] = 5485,
  [SMALL_STATE(315)] = 5495,
  [SMALL_STATE(316)] = 5505,
  [SMALL_STATE(317)] = 5515,
  [SMALL_STATE(318)] = 5525,
  [SMALL_STATE(319)] = 5535,
  [SMALL_STATE(320)] = 5545,
  [SMALL_STATE(321)] = 5553,
  [SMALL_STATE(322)] = 5563,
  [SMALL_STATE(323)] = 5571,
  [SMALL_STATE(324)] = 5581,
  [SMALL_STATE(325)] = 5591,
  [SMALL_STATE(326)] = 5601,
  [SMALL_STATE(327)] = 5611,
  [SMALL_STATE(328)] = 5621,
  [SMALL_STATE(329)] = 5631,
  [SMALL_STATE(330)] = 5641,
  [SMALL_STATE(331)] = 5648,
  [SMALL_STATE(332)] = 5655,
  [SMALL_STATE(333)] = 5662,
  [SMALL_STATE(334)] = 5669,
  [SMALL_STATE(335)] = 5676,
  [SMALL_STATE(336)] = 5683,
  [SMALL_STATE(337)] = 5690,
  [SMALL_STATE(338)] = 5697,
  [SMALL_STATE(339)] = 5704,
  [SMALL_STATE(340)] = 5711,
  [SMALL_STATE(341)] = 5718,
  [SMALL_STATE(342)] = 5725,
  [SMALL_STATE(343)] = 5732,
  [SMALL_STATE(344)] = 5739,
  [SMALL_STATE(345)] = 5746,
  [SMALL_STATE(346)] = 5753,
  [SMALL_STATE(347)] = 5760,
  [SMALL_STATE(348)] = 5767,
  [SMALL_STATE(349)] = 5774,
  [SMALL_STATE(350)] = 5781,
  [SMALL_STATE(351)] = 5788,
  [SMALL_STATE(352)] = 5795,
  [SMALL_STATE(353)] = 5802,
  [SMALL_STATE(354)] = 5809,
  [SMALL_STATE(355)] = 5816,
  [SMALL_STATE(356)] = 5823,
  [SMALL_STATE(357)] = 5830,
  [SMALL_STATE(358)] = 5837,
  [SMALL_STATE(359)] = 5844,
  [SMALL_STATE(360)] = 5851,
  [SMALL_STATE(361)] = 5858,
  [SMALL_STATE(362)] = 5865,
  [SMALL_STATE(363)] = 5872,
  [SMALL_STATE(364)] = 5879,
  [SMALL_STATE(365)] = 5886,
  [SMALL_STATE(366)] = 5893,
  [SMALL_STATE(367)] = 5900,
  [SMALL_STATE(368)] = 5907,
  [SMALL_STATE(369)] = 5914,
  [SMALL_STATE(370)] = 5921,
  [SMALL_STATE(371)] = 5928,
  [SMALL_STATE(372)] = 5935,
  [SMALL_STATE(373)] = 5942,
  [SMALL_STATE(374)] = 5949,
  [SMALL_STATE(375)] = 5956,
  [SMALL_STATE(376)] = 5963,
  [SMALL_STATE(377)] = 5970,
  [SMALL_STATE(378)] = 5977,
  [SMALL_STATE(379)] = 5984,
  [SMALL_STATE(380)] = 5991,
  [SMALL_STATE(381)] = 5998,
  [SMALL_STATE(382)] = 6005,
  [SMALL_STATE(383)] = 6012,
  [SMALL_STATE(384)] = 6019,
  [SMALL_STATE(385)] = 6026,
  [SMALL_STATE(386)] = 6033,
  [SMALL_STATE(387)] = 6040,
  [SMALL_STATE(388)] = 6047,
  [SMALL_STATE(389)] = 6054,
  [SMALL_STATE(390)] = 6061,
  [SMALL_STATE(391)] = 6068,
  [SMALL_STATE(392)] = 6075,
  [SMALL_STATE(393)] = 6082,
  [SMALL_STATE(394)] = 6089,
  [SMALL_STATE(395)] = 6096,
  [SMALL_STATE(396)] = 6103,
  [SMALL_STATE(397)] = 6110,
  [SMALL_STATE(398)] = 6117,
  [SMALL_STATE(399)] = 6124,
  [SMALL_STATE(400)] = 6131,
  [SMALL_STATE(401)] = 6138,
  [SMALL_STATE(402)] = 6145,
  [SMALL_STATE(403)] = 6152,
  [SMALL_STATE(404)] = 6159,
  [SMALL_STATE(405)] = 6166,
  [SMALL_STATE(406)] = 6173,
  [SMALL_STATE(407)] = 6180,
  [SMALL_STATE(408)] = 6187,
  [SMALL_STATE(409)] = 6194,
  [SMALL_STATE(410)] = 6201,
  [SMALL_STATE(411)] = 6208,
  [SMALL_STATE(412)] = 6215,
  [SMALL_STATE(413)] = 6222,
  [SMALL_STATE(414)] = 6229,
  [SMALL_STATE(415)] = 6236,
  [SMALL_STATE(416)] = 6243,
  [SMALL_STATE(417)] = 6250,
  [SMALL_STATE(418)] = 6257,
  [SMALL_STATE(419)] = 6264,
  [SMALL_STATE(420)] = 6271,
  [SMALL_STATE(421)] = 6278,
  [SMALL_STATE(422)] = 6285,
  [SMALL_STATE(423)] = 6292,
  [SMALL_STATE(424)] = 6299,
  [SMALL_STATE(425)] = 6306,
  [SMALL_STATE(426)] = 6313,
  [SMALL_STATE(427)] = 6320,
  [SMALL_STATE(428)] = 6327,
  [SMALL_STATE(429)] = 6334,
  [SMALL_STATE(430)] = 6341,
  [SMALL_STATE(431)] = 6348,
  [SMALL_STATE(432)] = 6355,
  [SMALL_STATE(433)] = 6362,
  [SMALL_STATE(434)] = 6369,
  [SMALL_STATE(435)] = 6376,
  [SMALL_STATE(436)] = 6383,
  [SMALL_STATE(437)] = 6390,
  [SMALL_STATE(438)] = 6397,
  [SMALL_STATE(439)] = 6404,
  [SMALL_STATE(440)] = 6411,
  [SMALL_STATE(441)] = 6418,
  [SMALL_STATE(442)] = 6425,
  [SMALL_STATE(443)] = 6432,
  [SMALL_STATE(444)] = 6439,
  [SMALL_STATE(445)] = 6446,
  [SMALL_STATE(446)] = 6453,
  [SMALL_STATE(447)] = 6460,
  [SMALL_STATE(448)] = 6467,
  [SMALL_STATE(449)] = 6474,
  [SMALL_STATE(450)] = 6481,
  [SMALL_STATE(451)] = 6488,
  [SMALL_STATE(452)] = 6495,
  [SMALL_STATE(453)] = 6502,
  [SMALL_STATE(454)] = 6509,
  [SMALL_STATE(455)] = 6516,
  [SMALL_STATE(456)] = 6523,
  [SMALL_STATE(457)] = 6530,
  [SMALL_STATE(458)] = 6537,
  [SMALL_STATE(459)] = 6544,
  [SMALL_STATE(460)] = 6551,
  [SMALL_STATE(461)] = 6558,
  [SMALL_STATE(462)] = 6565,
  [SMALL_STATE(463)] = 6572,
  [SMALL_STATE(464)] = 6579,
  [SMALL_STATE(465)] = 6586,
  [SMALL_STATE(466)] = 6593,
  [SMALL_STATE(467)] = 6600,
  [SMALL_STATE(468)] = 6607,
  [SMALL_STATE(469)] = 6614,
  [SMALL_STATE(470)] = 6621,
  [SMALL_STATE(471)] = 6628,
  [SMALL_STATE(472)] = 6635,
  [SMALL_STATE(473)] = 6642,
  [SMALL_STATE(474)] = 6649,
  [SMALL_STATE(475)] = 6656,
  [SMALL_STATE(476)] = 6663,
  [SMALL_STATE(477)] = 6670,
  [SMALL_STATE(478)] = 6677,
  [SMALL_STATE(479)] = 6684,
  [SMALL_STATE(480)] = 6691,
  [SMALL_STATE(481)] = 6698,
  [SMALL_STATE(482)] = 6705,
  [SMALL_STATE(483)] = 6712,
  [SMALL_STATE(484)] = 6719,
  [SMALL_STATE(485)] = 6726,
  [SMALL_STATE(486)] = 6733,
  [SMALL_STATE(487)] = 6740,
  [SMALL_STATE(488)] = 6747,
  [SMALL_STATE(489)] = 6754,
  [SMALL_STATE(490)] = 6761,
  [SMALL_STATE(491)] = 6768,
  [SMALL_STATE(492)] = 6775,
  [SMALL_STATE(493)] = 6782,
  [SMALL_STATE(494)] = 6789,
  [SMALL_STATE(495)] = 6796,
  [SMALL_STATE(496)] = 6803,
  [SMALL_STATE(497)] = 6810,
  [SMALL_STATE(498)] = 6817,
  [SMALL_STATE(499)] = 6824,
  [SMALL_STATE(500)] = 6831,
  [SMALL_STATE(501)] = 6838,
  [SMALL_STATE(502)] = 6845,
  [SMALL_STATE(503)] = 6852,
  [SMALL_STATE(504)] = 6859,
  [SMALL_STATE(505)] = 6866,
  [SMALL_STATE(506)] = 6873,
  [SMALL_STATE(507)] = 6880,
  [SMALL_STATE(508)] = 6887,
  [SMALL_STATE(509)] = 6894,
  [SMALL_STATE(510)] = 6901,
  [SMALL_STATE(511)] = 6908,
  [SMALL_STATE(512)] = 6915,
  [SMALL_STATE(513)] = 6922,
  [SMALL_STATE(514)] = 6929,
  [SMALL_STATE(515)] = 6936,
  [SMALL_STATE(516)] = 6943,
  [SMALL_STATE(517)] = 6950,
  [SMALL_STATE(518)] = 6957,
  [SMALL_STATE(519)] = 6964,
  [SMALL_STATE(520)] = 6971,
  [SMALL_STATE(521)] = 6978,
  [SMALL_STATE(522)] = 6985,
  [SMALL_STATE(523)] = 6992,
  [SMALL_STATE(524)] = 6999,
  [SMALL_STATE(525)] = 7006,
  [SMALL_STATE(526)] = 7013,
  [SMALL_STATE(527)] = 7020,
  [SMALL_STATE(528)] = 7027,
  [SMALL_STATE(529)] = 7034,
  [SMALL_STATE(530)] = 7041,
  [SMALL_STATE(531)] = 7048,
  [SMALL_STATE(532)] = 7055,
  [SMALL_STATE(533)] = 7062,
  [SMALL_STATE(534)] = 7069,
  [SMALL_STATE(535)] = 7076,
  [SMALL_STATE(536)] = 7083,
  [SMALL_STATE(537)] = 7090,
  [SMALL_STATE(538)] = 7097,
  [SMALL_STATE(539)] = 7104,
  [SMALL_STATE(540)] = 7111,
  [SMALL_STATE(541)] = 7118,
  [SMALL_STATE(542)] = 7125,
  [SMALL_STATE(543)] = 7132,
  [SMALL_STATE(544)] = 7139,
  [SMALL_STATE(545)] = 7146,
  [SMALL_STATE(546)] = 7153,
  [SMALL_STATE(547)] = 7160,
  [SMALL_STATE(548)] = 7167,
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
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 4, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prep_scriptlet, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prep_scriptlet, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_buildrequires, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate_buildrequires, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_with_newlines, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_with_newlines, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(292),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog_entry, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog_entry, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog_entry, 4, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog_entry, 4, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expansion, 2, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expansion, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog, 2, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changelog_entry_repeat1, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changelog_entry_repeat1, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_expansion, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_expansion, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 6, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 6, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 4, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 4, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 5, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 5, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_buildrequires, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate_buildrequires, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clean_scriptlet, 2, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clean_scriptlet, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 10),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 10),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 9),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 9),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_invocation, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_invocation, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_install_scriptlet, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_install_scriptlet, 2, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_scriptlet, 2, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_scriptlet, 2, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conf_scriptlet, 2, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conf_scriptlet, 2, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection, 2, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection, 2, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 11),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 11),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 8),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 8),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 12),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, 0, 12),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 7),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 7),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 5),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 5),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_description, 4, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_description, 4, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_undefinition, 3, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_undefinition, 3, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prep_scriptlet, 3, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prep_scriptlet, 3, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_scriptlet, 2, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_scriptlet, 2, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 5, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 5, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 4, 0, 2),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags, 4, 0, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 4, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 4, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 5, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 5, 0, 0),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_package, 4, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(547),
  [533] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(548),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
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
