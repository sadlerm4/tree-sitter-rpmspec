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
#define STATE_COUNT 482
#define LARGE_STATE_COUNT 69
#define SYMBOL_COUNT 200
#define ALIAS_COUNT 0
#define TOKEN_COUNT 148
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
  sym_integer = 138,
  sym_float = 139,
  anon_sym_PERCENT = 140,
  sym_string_content_with_newlines = 141,
  sym_string_content = 142,
  sym_variable_name = 143,
  anon_sym_QMARK = 144,
  anon_sym_PERCENT_LBRACE = 145,
  anon_sym_RBRACE = 146,
  anon_sym_PERCENT_LPAREN = 147,
  sym_spec = 148,
  sym__statements = 149,
  sym_if_statement = 150,
  sym_elif_clause = 151,
  sym_else_clause = 152,
  sym_preamble = 153,
  sym_tags = 154,
  sym_tag = 155,
  sym_qualifier = 156,
  sym_dependency_tag = 157,
  aux_sym__value = 158,
  sym_description = 159,
  sym_subsection = 160,
  sym_subsection_package = 161,
  sym_subsection_description = 162,
  sym_prep_scriptlet = 163,
  sym_generate_buildrequires = 164,
  sym_conf_scriptlet = 165,
  sym_build_scriptlet = 166,
  sym_install_scriptlet = 167,
  sym_check_scriptlet = 168,
  sym_clean_scriptlet = 169,
  sym__runtime_scriptlet = 170,
  sym__triggers = 171,
  sym__file_triggers = 172,
  sym_files = 173,
  sym_conditional_files = 174,
  sym_defattr = 175,
  sym_file = 176,
  sym_attr = 177,
  sym_verify = 178,
  sym_changelog = 179,
  sym_changelog_entry = 180,
  sym_macro_definition = 181,
  sym_macro_options = 182,
  sym_macro_undefinition = 183,
  sym_string_with_newlines = 184,
  sym_string = 185,
  sym_single_word = 186,
  sym__macro_expansion = 187,
  sym_simple_expansion = 188,
  sym_full_expansion = 189,
  sym_shell_expansion = 190,
  aux_sym_spec_repeat1 = 191,
  aux_sym_if_statement_repeat1 = 192,
  aux_sym_subsection_package_repeat1 = 193,
  aux_sym_files_repeat1 = 194,
  aux_sym_verify_repeat1 = 195,
  aux_sym_changelog_repeat1 = 196,
  aux_sym_changelog_entry_repeat1 = 197,
  aux_sym_string_with_newlines_repeat1 = 198,
  aux_sym_string_repeat1 = 199,
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
  [36] = 36,
  [37] = 37,
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
  [48] = 48,
  [49] = 49,
  [50] = 32,
  [51] = 38,
  [52] = 52,
  [53] = 53,
  [54] = 35,
  [55] = 37,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 33,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 34,
  [68] = 68,
  [69] = 63,
  [70] = 53,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 11,
  [75] = 6,
  [76] = 10,
  [77] = 9,
  [78] = 7,
  [79] = 8,
  [80] = 5,
  [81] = 7,
  [82] = 6,
  [83] = 11,
  [84] = 5,
  [85] = 8,
  [86] = 9,
  [87] = 10,
  [88] = 88,
  [89] = 88,
  [90] = 88,
  [91] = 17,
  [92] = 14,
  [93] = 16,
  [94] = 15,
  [95] = 18,
  [96] = 96,
  [97] = 96,
  [98] = 96,
  [99] = 96,
  [100] = 18,
  [101] = 15,
  [102] = 16,
  [103] = 17,
  [104] = 14,
  [105] = 19,
  [106] = 22,
  [107] = 21,
  [108] = 20,
  [109] = 24,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 110,
  [114] = 23,
  [115] = 115,
  [116] = 115,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 120,
  [122] = 122,
  [123] = 123,
  [124] = 123,
  [125] = 21,
  [126] = 122,
  [127] = 20,
  [128] = 22,
  [129] = 19,
  [130] = 130,
  [131] = 23,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 122,
  [136] = 132,
  [137] = 137,
  [138] = 130,
  [139] = 139,
  [140] = 137,
  [141] = 139,
  [142] = 133,
  [143] = 143,
  [144] = 139,
  [145] = 24,
  [146] = 134,
  [147] = 123,
  [148] = 143,
  [149] = 137,
  [150] = 150,
  [151] = 150,
  [152] = 137,
  [153] = 134,
  [154] = 143,
  [155] = 132,
  [156] = 133,
  [157] = 139,
  [158] = 32,
  [159] = 159,
  [160] = 36,
  [161] = 159,
  [162] = 38,
  [163] = 35,
  [164] = 164,
  [165] = 34,
  [166] = 37,
  [167] = 167,
  [168] = 33,
  [169] = 169,
  [170] = 29,
  [171] = 26,
  [172] = 27,
  [173] = 28,
  [174] = 174,
  [175] = 30,
  [176] = 176,
  [177] = 25,
  [178] = 34,
  [179] = 33,
  [180] = 32,
  [181] = 38,
  [182] = 37,
  [183] = 35,
  [184] = 184,
  [185] = 31,
  [186] = 37,
  [187] = 32,
  [188] = 38,
  [189] = 35,
  [190] = 34,
  [191] = 33,
  [192] = 47,
  [193] = 35,
  [194] = 46,
  [195] = 35,
  [196] = 32,
  [197] = 33,
  [198] = 44,
  [199] = 57,
  [200] = 39,
  [201] = 43,
  [202] = 32,
  [203] = 65,
  [204] = 66,
  [205] = 37,
  [206] = 34,
  [207] = 42,
  [208] = 35,
  [209] = 38,
  [210] = 34,
  [211] = 38,
  [212] = 38,
  [213] = 45,
  [214] = 37,
  [215] = 215,
  [216] = 59,
  [217] = 34,
  [218] = 62,
  [219] = 37,
  [220] = 32,
  [221] = 33,
  [222] = 48,
  [223] = 40,
  [224] = 33,
  [225] = 225,
  [226] = 36,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 230,
  [232] = 230,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 235,
  [237] = 235,
  [238] = 238,
  [239] = 239,
  [240] = 239,
  [241] = 239,
  [242] = 239,
  [243] = 239,
  [244] = 244,
  [245] = 239,
  [246] = 239,
  [247] = 239,
  [248] = 248,
  [249] = 239,
  [250] = 233,
  [251] = 251,
  [252] = 233,
  [253] = 251,
  [254] = 233,
  [255] = 251,
  [256] = 233,
  [257] = 251,
  [258] = 233,
  [259] = 251,
  [260] = 251,
  [261] = 251,
  [262] = 262,
  [263] = 263,
  [264] = 251,
  [265] = 235,
  [266] = 234,
  [267] = 262,
  [268] = 244,
  [269] = 262,
  [270] = 233,
  [271] = 234,
  [272] = 233,
  [273] = 251,
  [274] = 244,
  [275] = 233,
  [276] = 248,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 277,
  [324] = 324,
  [325] = 325,
  [326] = 312,
  [327] = 307,
  [328] = 306,
  [329] = 303,
  [330] = 330,
  [331] = 295,
  [332] = 294,
  [333] = 293,
  [334] = 292,
  [335] = 290,
  [336] = 281,
  [337] = 280,
  [338] = 279,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 314,
  [343] = 315,
  [344] = 344,
  [345] = 277,
  [346] = 324,
  [347] = 312,
  [348] = 307,
  [349] = 306,
  [350] = 295,
  [351] = 292,
  [352] = 281,
  [353] = 280,
  [354] = 279,
  [355] = 339,
  [356] = 341,
  [357] = 33,
  [358] = 324,
  [359] = 37,
  [360] = 307,
  [361] = 361,
  [362] = 295,
  [363] = 292,
  [364] = 281,
  [365] = 279,
  [366] = 341,
  [367] = 277,
  [368] = 324,
  [369] = 369,
  [370] = 370,
  [371] = 292,
  [372] = 279,
  [373] = 277,
  [374] = 324,
  [375] = 375,
  [376] = 16,
  [377] = 292,
  [378] = 279,
  [379] = 324,
  [380] = 17,
  [381] = 381,
  [382] = 292,
  [383] = 279,
  [384] = 324,
  [385] = 15,
  [386] = 386,
  [387] = 292,
  [388] = 279,
  [389] = 324,
  [390] = 390,
  [391] = 391,
  [392] = 292,
  [393] = 279,
  [394] = 394,
  [395] = 18,
  [396] = 325,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 283,
  [401] = 339,
  [402] = 402,
  [403] = 403,
  [404] = 305,
  [405] = 324,
  [406] = 302,
  [407] = 407,
  [408] = 277,
  [409] = 394,
  [410] = 291,
  [411] = 381,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 322,
  [416] = 320,
  [417] = 319,
  [418] = 283,
  [419] = 318,
  [420] = 317,
  [421] = 302,
  [422] = 316,
  [423] = 315,
  [424] = 291,
  [425] = 381,
  [426] = 413,
  [427] = 340,
  [428] = 283,
  [429] = 314,
  [430] = 430,
  [431] = 302,
  [432] = 432,
  [433] = 291,
  [434] = 413,
  [435] = 435,
  [436] = 283,
  [437] = 302,
  [438] = 291,
  [439] = 413,
  [440] = 283,
  [441] = 302,
  [442] = 291,
  [443] = 443,
  [444] = 283,
  [445] = 302,
  [446] = 291,
  [447] = 341,
  [448] = 283,
  [449] = 302,
  [450] = 291,
  [451] = 38,
  [452] = 283,
  [453] = 302,
  [454] = 291,
  [455] = 412,
  [456] = 402,
  [457] = 330,
  [458] = 35,
  [459] = 430,
  [460] = 460,
  [461] = 430,
  [462] = 430,
  [463] = 296,
  [464] = 407,
  [465] = 296,
  [466] = 407,
  [467] = 407,
  [468] = 311,
  [469] = 386,
  [470] = 311,
  [471] = 386,
  [472] = 386,
  [473] = 473,
  [474] = 473,
  [475] = 473,
  [476] = 473,
  [477] = 34,
  [478] = 32,
  [479] = 309,
  [480] = 309,
  [481] = 309,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(633);
      ADVANCE_MAP(
        '#', 644,
        '%', 805,
        '(', 781,
        ')', 793,
        '*', 795,
        ',', 769,
        '-', 766,
        ':', 664,
        '?', 1389,
        'A', 574,
        'B', 575,
        'C', 404,
        'D', 261,
        'E', 349,
        'G', 455,
        'L', 269,
        'M', 400,
        'N', 52,
        'O', 86,
        'P', 53,
        'R', 133,
        'S', 406,
        'U', 43,
        'V', 35,
      );
      if (lookahead == '\\') SKIP(630);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'g') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(407);
      if (lookahead == 'o') ADVANCE(598);
      if (lookahead == 'p') ADVANCE(421);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == 'v') ADVANCE(161);
      if (lookahead == '}') ADVANCE(1391);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(629);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(767);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 634,
        '\r', 1,
        '#', 644,
        '%', 812,
        '*', 795,
        '-', 766,
        'A', 574,
        'B', 575,
        'C', 404,
        'D', 261,
        'E', 349,
        'G', 455,
        'L', 269,
        'M', 400,
        'N', 52,
        'O', 86,
        'P', 53,
        'R', 133,
        'S', 406,
        'U', 43,
        'V', 35,
      );
      if (lookahead == '\\') SKIP(607);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 635,
        '\r', 2,
        '#', 643,
        '%', 806,
        'A', 1364,
        'B', 1365,
        'C', 1277,
        'D', 1229,
        'E', 1268,
        'G', 1307,
        'L', 1233,
        'M', 1278,
        'N', 1129,
        'O', 1141,
        'P', 1130,
        'R', 1175,
        'S', 1281,
        'U', 1121,
        'V', 1113,
      );
      if (lookahead == '\\') SKIP(609);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 636,
        '\r', 3,
        '#', 642,
        '%', 812,
        'A', 1074,
        'B', 1075,
        'C', 987,
        'D', 939,
        'E', 978,
        'G', 1017,
        'L', 943,
        'M', 988,
        'N', 840,
        'O', 852,
        'P', 841,
        'R', 886,
        'S', 991,
        'U', 832,
        'V', 824,
        '\\', 9,
        '\t', 817,
        0x0b, 817,
        '\f', 817,
        ' ', 817,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 637,
        '\r', 4,
        '#', 644,
        '%', 811,
        '-', 214,
        'A', 574,
        'B', 575,
        'C', 404,
        'D', 261,
        'E', 349,
        'G', 455,
        'L', 269,
        'M', 400,
        'N', 52,
        'O', 86,
        'P', 53,
        'R', 133,
        'S', 406,
        'U', 43,
        'V', 35,
      );
      if (lookahead == '\\') SKIP(608);
      if (lookahead == 'e') ADVANCE(324);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(638);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == '\\') SKIP(613);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 639,
        '\r', 6,
        '#', 644,
        '%', 813,
        'A', 574,
        'B', 575,
        'C', 404,
        'D', 261,
        'E', 349,
        'G', 455,
        'L', 269,
        'M', 400,
        'N', 52,
        'O', 86,
        'P', 53,
        'R', 133,
        'S', 406,
        'U', 43,
        'V', 35,
      );
      if (lookahead == '\\') SKIP(610);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(640);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == '-') ADVANCE(1208);
      if (lookahead == '\\') SKIP(617);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(641);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == '\\') SKIP(618);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 9:
      if (lookahead == '\r') ADVANCE(1097);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(817);
      if (lookahead != 0) ADVANCE(1096);
      END_STATE();
    case 10:
      if (lookahead == '\r') ADVANCE(1097);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(818);
      if (lookahead != 0) ADVANCE(1096);
      END_STATE();
    case 11:
      if (lookahead == '\r') ADVANCE(1097);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(819);
      if (lookahead != 0) ADVANCE(1096);
      END_STATE();
    case 12:
      if (lookahead == '\r') ADVANCE(1097);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(820);
      if (lookahead != 0) ADVANCE(1096);
      END_STATE();
    case 13:
      if (lookahead == '\r') ADVANCE(1097);
      if (lookahead != 0) ADVANCE(1096);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(644);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(644);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '(') ADVANCE(781);
      if (lookahead == ')') ADVANCE(706);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == '?') ADVANCE(1389);
      if (lookahead == '\\') SKIP(619);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1388);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(644);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '(') ADVANCE(705);
      if (lookahead == ')') ADVANCE(793);
      if (lookahead == '-') ADVANCE(766);
      if (lookahead == ':') ADVANCE(664);
      if (lookahead == '\\') SKIP(615);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'g') ADVANCE(458);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(407);
      if (lookahead == 'o') ADVANCE(598);
      if (lookahead == 's') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(768);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(644);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '(') ADVANCE(705);
      if (lookahead == '-') ADVANCE(766);
      if (lookahead == ':') ADVANCE(664);
      if (lookahead == '\\') SKIP(615);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'g') ADVANCE(458);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(407);
      if (lookahead == 'o') ADVANCE(598);
      if (lookahead == 's') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(768);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(644);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == ')') ADVANCE(706);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == '\\') SKIP(619);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1388);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(644);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '\\') SKIP(620);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '\\') SKIP(611);
      if (lookahead == 'e') ADVANCE(1255);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(20);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == '\\') SKIP(621);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == '(') ADVANCE(705);
      if (lookahead == '\\') SKIP(616);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == '\\') SKIP(614);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == '\\') SKIP(623);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == '\\') SKIP(612);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(810);
      if (lookahead == '\\') SKIP(622);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '\\') SKIP(624);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(642);
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(965);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(28);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(642);
      if (lookahead == '%') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(642);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1388);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(1096);
      END_STATE();
    case 31:
      if (lookahead == '5') ADVANCE(785);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(429);
      if (lookahead == 'P') ADVANCE(488);
      if (lookahead == 'R') ADVANCE(162);
      if (lookahead == 'S') ADVANCE(605);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(468);
      if (lookahead == 'O') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(469);
      if (lookahead == 'O') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(279);
      END_STATE();
    case 37:
      if (lookahead == 'L') ADVANCE(686);
      END_STATE();
    case 38:
      if (lookahead == 'L') ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(65);
      if (lookahead == 'S') ADVANCE(428);
      END_STATE();
    case 40:
      if (lookahead == 'P') ADVANCE(465);
      if (lookahead == 'R') ADVANCE(160);
      END_STATE();
    case 41:
      if (lookahead == 'P') ADVANCE(75);
      END_STATE();
    case 42:
      if (lookahead == 'P') ADVANCE(425);
      END_STATE();
    case 43:
      if (lookahead == 'R') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 44:
      if (lookahead == 'R') ADVANCE(206);
      END_STATE();
    case 45:
      if (lookahead == 'S') ADVANCE(688);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(718);
      END_STATE();
    case 47:
      if (lookahead == 'S') ADVANCE(720);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 49:
      if (lookahead == 'U') ADVANCE(461);
      END_STATE();
    case 50:
      if (lookahead == 'W') ADVANCE(283);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(90);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(703);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(554);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(529);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 87:
      if (lookahead == 'b') ADVANCE(64);
      END_STATE();
    case 88:
      if (lookahead == 'b') ADVANCE(176);
      END_STATE();
    case 89:
      if (lookahead == 'b') ADVANCE(592);
      END_STATE();
    case 90:
      if (lookahead == 'b') ADVANCE(591);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(315);
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(774);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(249);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(408);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(403);
      if (lookahead == 'q') ADVANCE(585);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(556);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(543);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(564);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(467);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(559);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(316);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(740);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(580);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(275);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(415);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(507);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(150);
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(491);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'i') ADVANCE(442);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(788);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(797);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(777);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(735);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(442);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(423);
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 208:
      if (lookahead == 'f') ADVANCE(646);
      if (lookahead == 'n') ADVANCE(532);
      END_STATE();
    case 209:
      if (lookahead == 'f') ADVANCE(739);
      END_STATE();
    case 210:
      if (lookahead == 'f') ADVANCE(660);
      END_STATE();
    case 211:
      if (lookahead == 'f') ADVANCE(601);
      END_STATE();
    case 212:
      if (lookahead == 'f') ADVANCE(659);
      END_STATE();
    case 213:
      if (lookahead == 'f') ADVANCE(738);
      END_STATE();
    case 214:
      if (lookahead == 'f') ADVANCE(764);
      if (lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 215:
      if (lookahead == 'f') ADVANCE(647);
      END_STATE();
    case 216:
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 217:
      if (lookahead == 'f') ADVANCE(602);
      END_STATE();
    case 218:
      if (lookahead == 'f') ADVANCE(338);
      END_STATE();
    case 219:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 220:
      if (lookahead == 'f') ADVANCE(263);
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 221:
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 222:
      if (lookahead == 'f') ADVANCE(296);
      END_STATE();
    case 223:
      if (lookahead == 'f') ADVANCE(266);
      END_STATE();
    case 224:
      if (lookahead == 'f') ADVANCE(270);
      END_STATE();
    case 225:
      if (lookahead == 'f') ADVANCE(277);
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 226:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 227:
      if (lookahead == 'f') ADVANCE(303);
      END_STATE();
    case 228:
      if (lookahead == 'f') ADVANCE(339);
      END_STATE();
    case 229:
      if (lookahead == 'g') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 230:
      if (lookahead == 'g') ADVANCE(235);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(434);
      END_STATE();
    case 231:
      if (lookahead == 'g') ADVANCE(772);
      END_STATE();
    case 232:
      if (lookahead == 'g') ADVANCE(673);
      END_STATE();
    case 233:
      if (lookahead == 'g') ADVANCE(794);
      END_STATE();
    case 234:
      if (lookahead == 'g') ADVANCE(409);
      END_STATE();
    case 235:
      if (lookahead == 'g') ADVANCE(201);
      END_STATE();
    case 236:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 237:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 238:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 240:
      if (lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 241:
      if (lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 242:
      if (lookahead == 'g') ADVANCE(196);
      END_STATE();
    case 243:
      if (lookahead == 'g') ADVANCE(202);
      END_STATE();
    case 244:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 245:
      if (lookahead == 'g') ADVANCE(242);
      END_STATE();
    case 246:
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 247:
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 248:
      if (lookahead == 'h') ADVANCE(675);
      END_STATE();
    case 249:
      if (lookahead == 'h') ADVANCE(691);
      END_STATE();
    case 250:
      if (lookahead == 'h') ADVANCE(648);
      END_STATE();
    case 251:
      if (lookahead == 'h') ADVANCE(680);
      END_STATE();
    case 252:
      if (lookahead == 'h') ADVANCE(650);
      END_STATE();
    case 253:
      if (lookahead == 'h') ADVANCE(661);
      END_STATE();
    case 254:
      if (lookahead == 'h') ADVANCE(709);
      END_STATE();
    case 255:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 256:
      if (lookahead == 'h') ADVANCE(717);
      END_STATE();
    case 257:
      if (lookahead == 'h') ADVANCE(719);
      END_STATE();
    case 258:
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 259:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 260:
      if (lookahead == 'h') ADVANCE(423);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(517);
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'y') ADVANCE(347);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(599);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(600);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(442);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(473);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(448);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == 'u') ADVANCE(358);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'p') ADVANCE(426);
      if (lookahead == 'u') ADVANCE(363);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == 'u') ADVANCE(367);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(597);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(478);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 306:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 307:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 309:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 310:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 311:
      if (lookahead == 'j') ADVANCE(784);
      END_STATE();
    case 312:
      if (lookahead == 'k') ADVANCE(742);
      END_STATE();
    case 313:
      if (lookahead == 'k') ADVANCE(792);
      END_STATE();
    case 314:
      if (lookahead == 'k') ADVANCE(778);
      END_STATE();
    case 315:
      if (lookahead == 'k') ADVANCE(85);
      END_STATE();
    case 316:
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(687);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(670);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(796);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(741);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(678);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(576);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 330:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 331:
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 332:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 333:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 334:
      if (lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 336:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 337:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 338:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 340:
      if (lookahead == 'm') ADVANCE(672);
      END_STATE();
    case 341:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 342:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 343:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 344:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 345:
      if (lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 346:
      if (lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 347:
      if (lookahead == 'm') ADVANCE(331);
      END_STATE();
    case 348:
      if (lookahead == 'm') ADVANCE(345);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 'p') ADVANCE(412);
      if (lookahead == 'x') ADVANCE(99);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(787);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(743);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(746);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(698);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(747);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(690);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(754);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(755);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(674);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(753);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(757);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(758);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(756);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(759);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(760);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(761);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(762);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(569);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(522);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(520);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(528);
      END_STATE();
    case 379:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 380:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(501);
      END_STATE();
    case 382:
      if (lookahead == 'n') ADVANCE(502);
      END_STATE();
    case 383:
      if (lookahead == 'n') ADVANCE(505);
      END_STATE();
    case 384:
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 385:
      if (lookahead == 'n') ADVANCE(508);
      END_STATE();
    case 386:
      if (lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 387:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 388:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 389:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 390:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 391:
      if (lookahead == 'n') ADVANCE(558);
      END_STATE();
    case 392:
      if (lookahead == 'n') ADVANCE(532);
      END_STATE();
    case 393:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 394:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 395:
      if (lookahead == 'n') ADVANCE(530);
      END_STATE();
    case 396:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 397:
      if (lookahead == 'n') ADVANCE(531);
      END_STATE();
    case 398:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 399:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(596);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(579);
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(538);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 409:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 410:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 411:
      if (lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 412:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 413:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 414:
      if (lookahead == 'o') ADVANCE(578);
      END_STATE();
    case 415:
      if (lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 416:
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 417:
      if (lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 418:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 419:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 420:
      if (lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 421:
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 422:
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 423:
      if (lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 424:
      if (lookahead == 'o') ADVANCE(526);
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 425:
      if (lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 426:
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 427:
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 428:
      if (lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 429:
      if (lookahead == 'o') ADVANCE(399);
      END_STATE();
    case 430:
      if (lookahead == 'p') ADVANCE(676);
      END_STATE();
    case 431:
      if (lookahead == 'p') ADVANCE(783);
      END_STATE();
    case 432:
      if (lookahead == 'p') ADVANCE(702);
      END_STATE();
    case 433:
      if (lookahead == 'p') ADVANCE(571);
      END_STATE();
    case 434:
      if (lookahead == 'p') ADVANCE(336);
      END_STATE();
    case 435:
      if (lookahead == 'q') ADVANCE(727);
      END_STATE();
    case 436:
      if (lookahead == 'q') ADVANCE(668);
      END_STATE();
    case 437:
      if (lookahead == 'q') ADVANCE(712);
      END_STATE();
    case 438:
      if (lookahead == 'q') ADVANCE(586);
      END_STATE();
    case 439:
      if (lookahead == 'q') ADVANCE(587);
      END_STATE();
    case 440:
      if (lookahead == 'q') ADVANCE(588);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(773);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(780);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(790);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(715);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(689);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(775);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(765);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(603);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(565);
      END_STATE();
    case 457:
      if (lookahead == 'r') ADVANCE(565);
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 458:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 460:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 463:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 466:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 467:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 471:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 472:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 473:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 474:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 475:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 476:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 477:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 478:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 479:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 480:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 481:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 482:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 483:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 484:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 485:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 486:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 487:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 488:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 489:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 490:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 491:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 492:
      if (lookahead == 's') ADVANCE(649);
      END_STATE();
    case 493:
      if (lookahead == 's') ADVANCE(763);
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 494:
      if (lookahead == 's') ADVANCE(651);
      END_STATE();
    case 495:
      if (lookahead == 's') ADVANCE(662);
      END_STATE();
    case 496:
      if (lookahead == 's') ADVANCE(716);
      END_STATE();
    case 497:
      if (lookahead == 's') ADVANCE(726);
      END_STATE();
    case 498:
      if (lookahead == 's') ADVANCE(728);
      END_STATE();
    case 499:
      if (lookahead == 's') ADVANCE(704);
      END_STATE();
    case 500:
      if (lookahead == 's') ADVANCE(731);
      END_STATE();
    case 501:
      if (lookahead == 's') ADVANCE(699);
      END_STATE();
    case 502:
      if (lookahead == 's') ADVANCE(748);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(714);
      END_STATE();
    case 504:
      if (lookahead == 's') ADVANCE(721);
      END_STATE();
    case 505:
      if (lookahead == 's') ADVANCE(700);
      END_STATE();
    case 506:
      if (lookahead == 's') ADVANCE(749);
      END_STATE();
    case 507:
      if (lookahead == 's') ADVANCE(729);
      END_STATE();
    case 508:
      if (lookahead == 's') ADVANCE(750);
      END_STATE();
    case 509:
      if (lookahead == 's') ADVANCE(732);
      END_STATE();
    case 510:
      if (lookahead == 's') ADVANCE(751);
      END_STATE();
    case 511:
      if (lookahead == 's') ADVANCE(713);
      END_STATE();
    case 512:
      if (lookahead == 's') ADVANCE(711);
      END_STATE();
    case 513:
      if (lookahead == 's') ADVANCE(722);
      END_STATE();
    case 514:
      if (lookahead == 's') ADVANCE(710);
      END_STATE();
    case 515:
      if (lookahead == 's') ADVANCE(730);
      END_STATE();
    case 516:
      if (lookahead == 's') ADVANCE(737);
      END_STATE();
    case 517:
      if (lookahead == 's') ADVANCE(539);
      END_STATE();
    case 518:
      if (lookahead == 's') ADVANCE(540);
      END_STATE();
    case 519:
      if (lookahead == 's') ADVANCE(541);
      END_STATE();
    case 520:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 521:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 522:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 523:
      if (lookahead == 's') ADVANCE(542);
      END_STATE();
    case 524:
      if (lookahead == 's') ADVANCE(555);
      END_STATE();
    case 525:
      if (lookahead == 's') ADVANCE(545);
      END_STATE();
    case 526:
      if (lookahead == 's') ADVANCE(551);
      END_STATE();
    case 527:
      if (lookahead == 's') ADVANCE(566);
      END_STATE();
    case 528:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 529:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 530:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 531:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 532:
      if (lookahead == 's') ADVANCE(567);
      END_STATE();
    case 533:
      if (lookahead == 's') ADVANCE(534);
      END_STATE();
    case 534:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 535:
      if (lookahead == 's') ADVANCE(568);
      END_STATE();
    case 536:
      if (lookahead == 's') ADVANCE(562);
      END_STATE();
    case 537:
      if (lookahead == 's') ADVANCE(570);
      END_STATE();
    case 538:
      if (lookahead == 't') ADVANCE(789);
      END_STATE();
    case 539:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 540:
      if (lookahead == 't') ADVANCE(697);
      END_STATE();
    case 541:
      if (lookahead == 't') ADVANCE(745);
      END_STATE();
    case 542:
      if (lookahead == 't') ADVANCE(776);
      END_STATE();
    case 543:
      if (lookahead == 't') ADVANCE(771);
      END_STATE();
    case 544:
      if (lookahead == 't') ADVANCE(671);
      END_STATE();
    case 545:
      if (lookahead == 't') ADVANCE(782);
      END_STATE();
    case 546:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 547:
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 548:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 549:
      if (lookahead == 't') ADVANCE(402);
      END_STATE();
    case 550:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 551:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 552:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 553:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 554:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 555:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 556:
      if (lookahead == 't') ADVANCE(503);
      END_STATE();
    case 557:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 558:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 559:
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 560:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 561:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 563:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 564:
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 565:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 566:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 567:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 568:
      if (lookahead == 't') ADVANCE(582);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 570:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 571:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 572:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 573:
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 574:
      if (lookahead == 'u') ADVANCE(549);
      END_STATE();
    case 575:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 576:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 577:
      if (lookahead == 'u') ADVANCE(430);
      END_STATE();
    case 578:
      if (lookahead == 'u') ADVANCE(431);
      END_STATE();
    case 579:
      if (lookahead == 'u') ADVANCE(480);
      END_STATE();
    case 580:
      if (lookahead == 'u') ADVANCE(330);
      END_STATE();
    case 581:
      if (lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 582:
      if (lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 583:
      if (lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 584:
      if (lookahead == 'u') ADVANCE(295);
      END_STATE();
    case 585:
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 586:
      if (lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 587:
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 588:
      if (lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 589:
      if (lookahead == 'u') ADVANCE(477);
      END_STATE();
    case 590:
      if (lookahead == 'u') ADVANCE(484);
      END_STATE();
    case 591:
      if (lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 592:
      if (lookahead == 'u') ADVANCE(572);
      END_STATE();
    case 593:
      if (lookahead == 'v') ADVANCE(665);
      END_STATE();
    case 594:
      if (lookahead == 'v') ADVANCE(669);
      END_STATE();
    case 595:
      if (lookahead == 'v') ADVANCE(298);
      END_STATE();
    case 596:
      if (lookahead == 'v') ADVANCE(146);
      END_STATE();
    case 597:
      if (lookahead == 'v') ADVANCE(189);
      END_STATE();
    case 598:
      if (lookahead == 'w') ADVANCE(396);
      END_STATE();
    case 599:
      if (lookahead == 'x') ADVANCE(725);
      END_STATE();
    case 600:
      if (lookahead == 'x') ADVANCE(186);
      END_STATE();
    case 601:
      if (lookahead == 'y') ADVANCE(701);
      END_STATE();
    case 602:
      if (lookahead == 'y') ADVANCE(752);
      END_STATE();
    case 603:
      if (lookahead == 'y') ADVANCE(685);
      END_STATE();
    case 604:
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 605:
      if (lookahead == 'y') ADVANCE(536);
      END_STATE();
    case 606:
      if (lookahead == 'z') ADVANCE(141);
      END_STATE();
    case 607:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 608:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 609:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 610:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 611:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 612:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(25);
      END_STATE();
    case 613:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 614:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(23);
      END_STATE();
    case 615:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(17);
      END_STATE();
    case 616:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(22);
      END_STATE();
    case 617:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 618:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 619:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(18);
      END_STATE();
    case 620:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(19);
      END_STATE();
    case 621:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(21);
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
          lookahead == ' ') SKIP(24);
      END_STATE();
    case 624:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(27);
      END_STATE();
    case 625:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(803);
      END_STATE();
    case 626:
      if (eof) ADVANCE(633);
      ADVANCE_MAP(
        '\n', 634,
        '\r', 1,
        '#', 644,
        '%', 812,
        '*', 795,
        '-', 766,
        'A', 574,
        'B', 575,
        'C', 404,
        'D', 261,
        'E', 349,
        'G', 455,
        'L', 269,
        'M', 400,
        'N', 52,
        'O', 86,
        'P', 53,
        'R', 133,
        'S', 406,
        'U', 43,
        'V', 35,
      );
      if (lookahead == '\\') SKIP(631);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(626);
      END_STATE();
    case 627:
      if (eof) ADVANCE(633);
      ADVANCE_MAP(
        '\n', 635,
        '\r', 2,
        '#', 643,
        '%', 806,
        'A', 1364,
        'B', 1365,
        'C', 1277,
        'D', 1229,
        'E', 1268,
        'G', 1307,
        'L', 1233,
        'M', 1278,
        'N', 1129,
        'O', 1141,
        'P', 1130,
        'R', 1175,
        'S', 1281,
        'U', 1121,
        'V', 1113,
      );
      if (lookahead == '\\') SKIP(632);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 628:
      if (eof) ADVANCE(633);
      ADVANCE_MAP(
        '\n', 636,
        '\r', 3,
        '#', 642,
        '%', 812,
        'A', 1074,
        'B', 1075,
        'C', 987,
        'D', 939,
        'E', 978,
        'G', 1017,
        'L', 943,
        'M', 988,
        'N', 840,
        'O', 852,
        'P', 841,
        'R', 886,
        'S', 991,
        'U', 832,
        'V', 824,
        '\\', 9,
        '\t', 817,
        0x0b, 817,
        '\f', 817,
        ' ', 817,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 629:
      if (eof) ADVANCE(633);
      ADVANCE_MAP(
        '#', 644,
        '%', 805,
        '(', 705,
        ')', 706,
        '*', 795,
        ',', 769,
        '-', 766,
        ':', 664,
        'A', 574,
        'B', 575,
        'C', 404,
        'D', 261,
        'E', 349,
        'G', 455,
        'L', 269,
        'M', 400,
        'N', 52,
        'O', 86,
        'P', 53,
        'R', 133,
        'S', 406,
        'U', 43,
        'V', 35,
      );
      if (lookahead == '\\') SKIP(630);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'g') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(407);
      if (lookahead == 'o') ADVANCE(598);
      if (lookahead == 'p') ADVANCE(421);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == 'v') ADVANCE(161);
      if (lookahead == '}') ADVANCE(1391);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(629);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(767);
      END_STATE();
    case 630:
      if (eof) ADVANCE(633);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(629);
      END_STATE();
    case 631:
      if (eof) ADVANCE(633);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(626);
      END_STATE();
    case 632:
      if (eof) ADVANCE(633);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(627);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(634);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == '\r') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1098);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(817);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(637);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(638);
      if (lookahead == '\r') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1099);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(639);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(640);
      if (lookahead == '\r') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1100);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__simple_statements_token1);
      if (lookahead == '\n') ADVANCE(641);
      if (lookahead == '\r') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1101);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(645);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '`') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(644);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(642);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_PERCENTif);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_PERCENTif);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_PERCENTifarch);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_PERCENTifos);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_PERCENTifnarch);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_PERCENTifnos);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == ' ') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(658);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '#') ADVANCE(644);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == '\\') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(653);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(658);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'd') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(658);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'l') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(658);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == 'n') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(658);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(653);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(658);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(658);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_PERCENTendif);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_PERCENTelif);
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_elifarch);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_PERCENTelifos);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_PERCENTelse);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_AutoProv);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(1315);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(1025);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(470);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_AutoReqProv);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_BugUrl);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_BuildRoot);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_BuildSystem);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_DistTag);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_Distribution);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_Epoch);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_Group);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_License);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_ModularityLabel);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_Name);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_NoPatch);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_NoSource);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_Packager);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_Release);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_SourceLicense);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_Summary);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_URL);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_Url);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_VCS);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_Vendor);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_Version);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(691);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(695);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(695);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(695);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(695);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_pre);
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_post);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(354);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_postun);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_pretrans);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_posttrans);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_verify);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_interp);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_Requires);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(1362);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(1072);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(563);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_BuildArchitectures);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_BuildConflicts);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_BuildPrereq);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_BuildRequires);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_DocDir);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_Enhances);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_ExcludeArch);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_ExcludeOS);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_ExclusiveArch);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_ExclusiveOS);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_Obsoletes);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_OrderWithRequires);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_Prefix);
      if (lookahead == 'e') ADVANCE(1325);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_Prefix);
      if (lookahead == 'e') ADVANCE(1035);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_Prefix);
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_Prefixes);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_Prereq);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_Provides);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_Recommends);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_RemovePathPostfixes);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_Suggests);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_Supplements);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_PERCENTdescription);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_DASHn);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_PERCENTpackage);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_PERCENTprep);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_PERCENTgenerate_buildrequires);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_PERCENTconf);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_PERCENTconf);
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_PERCENTbuild);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_PERCENTinstall);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_PERCENTcheck);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_PERCENTclean);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_PERCENTpre);
      if (lookahead == 'p') ADVANCE(736);
      if (lookahead == 't') ADVANCE(483);
      if (lookahead == 'u') ADVANCE(353);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_PERCENTpost);
      if (lookahead == 't') ADVANCE(486);
      if (lookahead == 'u') ADVANCE(355);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_PERCENTpreun);
      if (lookahead == 't') ADVANCE(487);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_PERCENTpostun);
      if (lookahead == 't') ADVANCE(489);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_PERCENTpretrans);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_PERCENTposttrans);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_PERCENTpreuntrans);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_PERCENTpostuntrans);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_PERCENTverify);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_PERCENTtriggerprein);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_PERCENTtriggerin);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_PERCENTtriggerun);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_PERCENTtriggerpostun);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_PERCENTfiletriggerin);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_PERCENTfiletriggerun);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_PERCENTfiletriggerpostun);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_PERCENTtransfiletriggerin);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_PERCENTtransfiletriggerun);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_PERCENTtransfiletriggerpostun);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_PERCENTfiles);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_PERCENTdefattr);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_defattr_token1);
      if (lookahead == '.') ADVANCE(625);
      if (lookahead == '_') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(767);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_defattr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(768);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_defattr_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(770);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_PERCENTartifact);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_PERCENTconfig);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_PERCENTdir);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_PERCENTdoc);
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_PERCENTdocdir);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_PERCENTghost);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_PERCENTlicense);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_PERCENTmissingok);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_PERCENTreadme);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_PERCENTattr);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_filedigest);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_maj);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_mtime);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_owner);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_symlink);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_PERCENTchangelog);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_PERCENTglobal);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_PERCENTdefine);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_PERCENTundefine);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(625);
      if (lookahead == '_') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(1386);
      if (lookahead == '_') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(801);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(1386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(801);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(803);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(803);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1392,
        'a', 457,
        'b', 584,
        'c', 246,
        'd', 134,
        'e', 317,
        'f', 294,
        'g', 203,
        'i', 208,
        'l', 308,
        'm', 268,
        'p', 59,
        'r', 135,
        't', 441,
        'u', 390,
        'v', 192,
        '{', 1390,
      );
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1392,
        'a', 457,
        'b', 584,
        'c', 246,
        'd', 134,
        'f', 294,
        'g', 203,
        'i', 208,
        'l', 308,
        'm', 268,
        'p', 59,
        'r', 135,
        't', 441,
        'u', 390,
        'v', 192,
        '{', 1390,
      );
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1392,
        'a', 457,
        'c', 420,
        'd', 197,
        'e', 317,
        'g', 260,
        'i', 215,
        'l', 308,
        'm', 268,
        'r', 135,
        'v', 192,
        '{', 1390,
      );
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1392,
        'a', 457,
        'c', 420,
        'd', 197,
        'e', 374,
        'g', 260,
        'i', 215,
        'l', 308,
        'm', 268,
        'r', 135,
        'v', 192,
        '{', 1390,
      );
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1392,
        'a', 457,
        'c', 420,
        'd', 197,
        'g', 260,
        'l', 308,
        'm', 268,
        'r', 135,
        'v', 192,
        '{', 1390,
      );
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1392,
        'a', 456,
        'c', 420,
        'd', 271,
        'g', 260,
        'l', 308,
        'm', 268,
        'r', 135,
        'v', 192,
        '{', 1390,
      );
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1392,
        'b', 584,
        'c', 247,
        'd', 159,
        'e', 317,
        'f', 294,
        'g', 204,
        'i', 392,
        'p', 59,
        't', 441,
        'u', 390,
        'v', 192,
        '{', 1390,
      );
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1392,
        'b', 584,
        'c', 247,
        'd', 159,
        'f', 294,
        'g', 204,
        'i', 208,
        'p', 59,
        't', 441,
        'u', 390,
        'v', 192,
        '{', 1390,
      );
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1392,
        'b', 584,
        'c', 247,
        'd', 159,
        'f', 294,
        'g', 204,
        'i', 392,
        'p', 59,
        't', 441,
        'u', 390,
        'v', 192,
        '{', 1390,
      );
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '(') ADVANCE(1392);
      if (lookahead == 'd') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == '{') ADVANCE(1390);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '(') ADVANCE(1392);
      if (lookahead == 'd') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == '{') ADVANCE(1390);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '(') ADVANCE(1392);
      if (lookahead == 'd') ADVANCE(373);
      if (lookahead == '{') ADVANCE(1390);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      ADVANCE_MAP(
        '\n', 636,
        '\r', 3,
        '#', 642,
        '%', 812,
        'A', 1074,
        'B', 1075,
        'C', 987,
        'D', 939,
        'E', 978,
        'G', 1017,
        'L', 943,
        'M', 988,
        'N', 840,
        'O', 852,
        'P', 841,
        'R', 886,
        'S', 991,
        'U', 832,
        'V', 824,
        '\\', 9,
        '\t', 817,
        0x0b, 817,
        '\f', 817,
        ' ', 817,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '#') ADVANCE(642);
      if (lookahead == '%') ADVANCE(814);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(965);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(28);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '#') ADVANCE(642);
      if (lookahead == '%') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '#') ADVANCE(642);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1388);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(1096);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'A') ADVANCE(1021);
      if (lookahead == 'C') ADVANCE(1004);
      if (lookahead == 'P') ADVANCE(1028);
      if (lookahead == 'R') ADVANCE(894);
      if (lookahead == 'S') ADVANCE(1095);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'A') ADVANCE(1022);
      if (lookahead == 'O') ADVANCE(835);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'A') ADVANCE(1024);
      if (lookahead == 'O') ADVANCE(836);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'C') ADVANCE(834);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'D') ADVANCE(945);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'L') ADVANCE(686);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'L') ADVANCE(844);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'P') ADVANCE(845);
      if (lookahead == 'S') ADVANCE(1003);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'P') ADVANCE(1002);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'P') ADVANCE(1023);
      if (lookahead == 'R') ADVANCE(891);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'P') ADVANCE(850);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'R') ADVANCE(826);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'R') ADVANCE(918);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'S') ADVANCE(688);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'S') ADVANCE(718);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'S') ADVANCE(720);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'T') ADVANCE(843);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'U') ADVANCE(1019);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'W') ADVANCE(947);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(971);
      if (lookahead == 'o') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1096);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(856);
      if (lookahead == 'r') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1096);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1096);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1096);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1096);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(1063);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1096);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1096);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1096);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1096);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1096);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1096);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1096);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(1051);
      if (lookahead == 'r') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(958);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(992);
      if (lookahead == 'l') ADVANCE(898);
      if (lookahead == 'm') ADVANCE(990);
      if (lookahead == 'q') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(1079);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(890);
      if (lookahead == 's') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(919);
      if (lookahead == 'o') ADVANCE(1088);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1007);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1010);
      if (lookahead == 'o') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1036);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1037);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1040);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(940);
      if (lookahead == 'r') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(838);
      if (lookahead == 'i') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(927);
      if (lookahead == 'm') ADVANCE(972);
      if (lookahead == 'p') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'h') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'h') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'h') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'h') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'h') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'h') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'h') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'h') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'h') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'h') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(1048);
      if (lookahead == 'o') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(1092);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(1062);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(1090);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'k') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(935);
      if (lookahead == 'p') ADVANCE(996);
      if (lookahead == 'x') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(877);
      if (lookahead == 'r') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(1089);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(1077);
      if (lookahead == 'u') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'p') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'p') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'q') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'q') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'q') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'q') ADVANCE(1082);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'q') ADVANCE(1085);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 's') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(1038);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(1042);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 't') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(1061);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(1032);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(1033);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'y') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'y') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'y') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1096);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_string_content);
      ADVANCE_MAP(
        '\n', 635,
        '\r', 2,
        '#', 643,
        '%', 806,
        'A', 1364,
        'B', 1365,
        'C', 1277,
        'D', 1229,
        'E', 1268,
        'G', 1307,
        'L', 1233,
        'M', 1278,
        'N', 1129,
        'O', 1141,
        'P', 1130,
        'R', 1175,
        'S', 1281,
        'U', 1121,
        'V', 1113,
      );
      if (lookahead == '\\') SKIP(609);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(638);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == '\\') SKIP(613);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(640);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == '-') ADVANCE(1208);
      if (lookahead == '\\') SKIP(617);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(641);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == '\\') SKIP(618);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(807);
      if (lookahead == '\\') SKIP(611);
      if (lookahead == 'e') ADVANCE(1255);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(20);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(809);
      if (lookahead == '\\') SKIP(621);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == '(') ADVANCE(705);
      if (lookahead == '\\') SKIP(616);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == '\\') SKIP(614);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(816);
      if (lookahead == '\\') SKIP(623);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(808);
      if (lookahead == '\\') SKIP(612);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(810);
      if (lookahead == '\\') SKIP(622);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '\\') SKIP(624);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(1311);
      if (lookahead == 'C') ADVANCE(1294);
      if (lookahead == 'P') ADVANCE(1318);
      if (lookahead == 'R') ADVANCE(1183);
      if (lookahead == 'S') ADVANCE(1385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(1312);
      if (lookahead == 'O') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(1314);
      if (lookahead == 'O') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'C') ADVANCE(1123);
      if (lookahead == 'e') ADVANCE(1270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'D') ADVANCE(1235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'L') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'L') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(1134);
      if (lookahead == 'S') ADVANCE(1293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(1292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(1313);
      if (lookahead == 'R') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'R') ADVANCE(1115);
      if (lookahead == 'r') ADVANCE(1249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'R') ADVANCE(1207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'T') ADVANCE(1132);
      if (lookahead == 'r') ADVANCE(1231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'U') ADVANCE(1309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'W') ADVANCE(1237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1261);
      if (lookahead == 'o') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1387);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1387);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1387);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1387);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1387);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1387);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1387);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1387);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1387);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1387);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1387);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1387);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'b') ADVANCE(1341);
      if (lookahead == 'r') ADVANCE(1164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'b') ADVANCE(1194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'b') ADVANCE(1370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1248);
      if (lookahead == 't') ADVANCE(1148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1282);
      if (lookahead == 'l') ADVANCE(1187);
      if (lookahead == 'm') ADVANCE(1280);
      if (lookahead == 'q') ADVANCE(1371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1179);
      if (lookahead == 's') ADVANCE(1242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1209);
      if (lookahead == 'o') ADVANCE(1378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1300);
      if (lookahead == 'o') ADVANCE(1289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1230);
      if (lookahead == 'r') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(1127);
      if (lookahead == 'i') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(1217);
      if (lookahead == 'm') ADVANCE(1262);
      if (lookahead == 'p') ADVANCE(1296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(1202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(1195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1338);
      if (lookahead == 'o') ADVANCE(1144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'k') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1225);
      if (lookahead == 'p') ADVANCE(1286);
      if (lookahead == 'x') ADVANCE(1149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1166);
      if (lookahead == 'r') ADVANCE(1339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1367);
      if (lookahead == 'u') ADVANCE(1216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'p') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'p') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(1372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(1375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(1241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'x') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'x') ADVANCE(1201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'y') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'y') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'y') ADVANCE(1346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_string_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1387);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1388);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_PERCENT_LPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 626},
  [2] = {.lex_state = 626},
  [3] = {.lex_state = 626},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 627},
  [6] = {.lex_state = 627},
  [7] = {.lex_state = 627},
  [8] = {.lex_state = 627},
  [9] = {.lex_state = 627},
  [10] = {.lex_state = 627},
  [11] = {.lex_state = 627},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 627},
  [15] = {.lex_state = 627},
  [16] = {.lex_state = 627},
  [17] = {.lex_state = 627},
  [18] = {.lex_state = 627},
  [19] = {.lex_state = 628},
  [20] = {.lex_state = 628},
  [21] = {.lex_state = 628},
  [22] = {.lex_state = 628},
  [23] = {.lex_state = 628},
  [24] = {.lex_state = 628},
  [25] = {.lex_state = 626},
  [26] = {.lex_state = 626},
  [27] = {.lex_state = 626},
  [28] = {.lex_state = 626},
  [29] = {.lex_state = 626},
  [30] = {.lex_state = 626},
  [31] = {.lex_state = 626},
  [32] = {.lex_state = 628},
  [33] = {.lex_state = 628},
  [34] = {.lex_state = 628},
  [35] = {.lex_state = 628},
  [36] = {.lex_state = 628},
  [37] = {.lex_state = 628},
  [38] = {.lex_state = 628},
  [39] = {.lex_state = 626},
  [40] = {.lex_state = 626},
  [41] = {.lex_state = 626},
  [42] = {.lex_state = 626},
  [43] = {.lex_state = 626},
  [44] = {.lex_state = 626},
  [45] = {.lex_state = 626},
  [46] = {.lex_state = 626},
  [47] = {.lex_state = 626},
  [48] = {.lex_state = 626},
  [49] = {.lex_state = 626},
  [50] = {.lex_state = 626},
  [51] = {.lex_state = 626},
  [52] = {.lex_state = 626},
  [53] = {.lex_state = 626},
  [54] = {.lex_state = 626},
  [55] = {.lex_state = 626},
  [56] = {.lex_state = 626},
  [57] = {.lex_state = 626},
  [58] = {.lex_state = 626},
  [59] = {.lex_state = 626},
  [60] = {.lex_state = 626},
  [61] = {.lex_state = 626},
  [62] = {.lex_state = 626},
  [63] = {.lex_state = 626},
  [64] = {.lex_state = 626},
  [65] = {.lex_state = 626},
  [66] = {.lex_state = 626},
  [67] = {.lex_state = 626},
  [68] = {.lex_state = 626},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 20},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 25},
  [82] = {.lex_state = 25},
  [83] = {.lex_state = 25},
  [84] = {.lex_state = 25},
  [85] = {.lex_state = 25},
  [86] = {.lex_state = 25},
  [87] = {.lex_state = 25},
  [88] = {.lex_state = 21},
  [89] = {.lex_state = 21},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 20},
  [96] = {.lex_state = 26},
  [97] = {.lex_state = 26},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 26},
  [100] = {.lex_state = 25},
  [101] = {.lex_state = 25},
  [102] = {.lex_state = 25},
  [103] = {.lex_state = 25},
  [104] = {.lex_state = 25},
  [105] = {.lex_state = 28},
  [106] = {.lex_state = 28},
  [107] = {.lex_state = 28},
  [108] = {.lex_state = 28},
  [109] = {.lex_state = 28},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 26},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 28},
  [115] = {.lex_state = 23},
  [116] = {.lex_state = 23},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 16},
  [120] = {.lex_state = 22},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 29},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 29},
  [128] = {.lex_state = 29},
  [129] = {.lex_state = 29},
  [130] = {.lex_state = 24},
  [131] = {.lex_state = 29},
  [132] = {.lex_state = 24},
  [133] = {.lex_state = 24},
  [134] = {.lex_state = 24},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 24},
  [137] = {.lex_state = 24},
  [138] = {.lex_state = 24},
  [139] = {.lex_state = 24},
  [140] = {.lex_state = 24},
  [141] = {.lex_state = 24},
  [142] = {.lex_state = 24},
  [143] = {.lex_state = 24},
  [144] = {.lex_state = 24},
  [145] = {.lex_state = 29},
  [146] = {.lex_state = 24},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 24},
  [149] = {.lex_state = 24},
  [150] = {.lex_state = 24},
  [151] = {.lex_state = 24},
  [152] = {.lex_state = 24},
  [153] = {.lex_state = 24},
  [154] = {.lex_state = 24},
  [155] = {.lex_state = 24},
  [156] = {.lex_state = 24},
  [157] = {.lex_state = 24},
  [158] = {.lex_state = 28},
  [159] = {.lex_state = 24},
  [160] = {.lex_state = 28},
  [161] = {.lex_state = 24},
  [162] = {.lex_state = 28},
  [163] = {.lex_state = 28},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 28},
  [166] = {.lex_state = 28},
  [167] = {.lex_state = 24},
  [168] = {.lex_state = 28},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 29},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 8},
  [212] = {.lex_state = 29},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 29},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 29},
  [220] = {.lex_state = 29},
  [221] = {.lex_state = 8},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 29},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 29},
  [227] = {.lex_state = 24},
  [228] = {.lex_state = 24},
  [229] = {.lex_state = 24},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 30},
  [235] = {.lex_state = 16},
  [236] = {.lex_state = 16},
  [237] = {.lex_state = 16},
  [238] = {.lex_state = 16},
  [239] = {.lex_state = 15},
  [240] = {.lex_state = 15},
  [241] = {.lex_state = 15},
  [242] = {.lex_state = 15},
  [243] = {.lex_state = 15},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 15},
  [246] = {.lex_state = 15},
  [247] = {.lex_state = 15},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 15},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 16},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 16},
  [266] = {.lex_state = 30},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 30},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 15},
  [278] = {.lex_state = 626},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 626},
  [281] = {.lex_state = 626},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 15},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 626},
  [286] = {.lex_state = 626},
  [287] = {.lex_state = 626},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 626},
  [290] = {.lex_state = 626},
  [291] = {.lex_state = 27},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 626},
  [294] = {.lex_state = 626},
  [295] = {.lex_state = 626},
  [296] = {.lex_state = 626},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 626},
  [300] = {.lex_state = 653},
  [301] = {.lex_state = 626},
  [302] = {.lex_state = 27},
  [303] = {.lex_state = 626},
  [304] = {.lex_state = 15},
  [305] = {.lex_state = 27},
  [306] = {.lex_state = 626},
  [307] = {.lex_state = 626},
  [308] = {.lex_state = 16},
  [309] = {.lex_state = 16},
  [310] = {.lex_state = 15},
  [311] = {.lex_state = 653},
  [312] = {.lex_state = 626},
  [313] = {.lex_state = 15},
  [314] = {.lex_state = 626},
  [315] = {.lex_state = 626},
  [316] = {.lex_state = 626},
  [317] = {.lex_state = 626},
  [318] = {.lex_state = 626},
  [319] = {.lex_state = 626},
  [320] = {.lex_state = 626},
  [321] = {.lex_state = 15},
  [322] = {.lex_state = 626},
  [323] = {.lex_state = 15},
  [324] = {.lex_state = 15},
  [325] = {.lex_state = 626},
  [326] = {.lex_state = 626},
  [327] = {.lex_state = 626},
  [328] = {.lex_state = 626},
  [329] = {.lex_state = 626},
  [330] = {.lex_state = 15},
  [331] = {.lex_state = 626},
  [332] = {.lex_state = 626},
  [333] = {.lex_state = 626},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 626},
  [336] = {.lex_state = 626},
  [337] = {.lex_state = 626},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 626},
  [340] = {.lex_state = 626},
  [341] = {.lex_state = 626},
  [342] = {.lex_state = 626},
  [343] = {.lex_state = 626},
  [344] = {.lex_state = 653},
  [345] = {.lex_state = 15},
  [346] = {.lex_state = 15},
  [347] = {.lex_state = 626},
  [348] = {.lex_state = 626},
  [349] = {.lex_state = 626},
  [350] = {.lex_state = 626},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 626},
  [353] = {.lex_state = 626},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 626},
  [356] = {.lex_state = 626},
  [357] = {.lex_state = 626},
  [358] = {.lex_state = 15},
  [359] = {.lex_state = 626},
  [360] = {.lex_state = 626},
  [361] = {.lex_state = 626},
  [362] = {.lex_state = 626},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 626},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 626},
  [367] = {.lex_state = 15},
  [368] = {.lex_state = 15},
  [369] = {.lex_state = 626},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 15},
  [374] = {.lex_state = 15},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 15},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 15},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 19},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 15},
  [390] = {.lex_state = 19},
  [391] = {.lex_state = 626},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 15},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 626},
  [397] = {.lex_state = 626},
  [398] = {.lex_state = 626},
  [399] = {.lex_state = 626},
  [400] = {.lex_state = 15},
  [401] = {.lex_state = 626},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 27},
  [405] = {.lex_state = 15},
  [406] = {.lex_state = 27},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 15},
  [409] = {.lex_state = 15},
  [410] = {.lex_state = 27},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 15},
  [413] = {.lex_state = 15},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 626},
  [416] = {.lex_state = 626},
  [417] = {.lex_state = 626},
  [418] = {.lex_state = 15},
  [419] = {.lex_state = 626},
  [420] = {.lex_state = 626},
  [421] = {.lex_state = 27},
  [422] = {.lex_state = 626},
  [423] = {.lex_state = 626},
  [424] = {.lex_state = 27},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 15},
  [427] = {.lex_state = 626},
  [428] = {.lex_state = 15},
  [429] = {.lex_state = 626},
  [430] = {.lex_state = 19},
  [431] = {.lex_state = 27},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 27},
  [434] = {.lex_state = 15},
  [435] = {.lex_state = 19},
  [436] = {.lex_state = 15},
  [437] = {.lex_state = 27},
  [438] = {.lex_state = 27},
  [439] = {.lex_state = 15},
  [440] = {.lex_state = 15},
  [441] = {.lex_state = 27},
  [442] = {.lex_state = 27},
  [443] = {.lex_state = 15},
  [444] = {.lex_state = 15},
  [445] = {.lex_state = 27},
  [446] = {.lex_state = 27},
  [447] = {.lex_state = 626},
  [448] = {.lex_state = 15},
  [449] = {.lex_state = 27},
  [450] = {.lex_state = 27},
  [451] = {.lex_state = 626},
  [452] = {.lex_state = 15},
  [453] = {.lex_state = 27},
  [454] = {.lex_state = 27},
  [455] = {.lex_state = 15},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 15},
  [458] = {.lex_state = 626},
  [459] = {.lex_state = 19},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 19},
  [462] = {.lex_state = 19},
  [463] = {.lex_state = 626},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 626},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 653},
  [469] = {.lex_state = 19},
  [470] = {.lex_state = 653},
  [471] = {.lex_state = 19},
  [472] = {.lex_state = 19},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 626},
  [478] = {.lex_state = 626},
  [479] = {.lex_state = 16},
  [480] = {.lex_state = 16},
  [481] = {.lex_state = 16},
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
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_spec] = STATE(403),
    [sym__statements] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_preamble] = STATE(2),
    [sym_tags] = STATE(63),
    [sym_tag] = STATE(402),
    [sym_dependency_tag] = STATE(402),
    [sym_description] = STATE(2),
    [sym_subsection] = STATE(2),
    [sym_subsection_package] = STATE(248),
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
    [sym__macro_expansion] = STATE(2),
    [sym_simple_expansion] = STATE(2),
    [sym_full_expansion] = STATE(2),
    [sym_shell_expansion] = STATE(2),
    [aux_sym_spec_repeat1] = STATE(2),
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
    [sym__statements] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_preamble] = STATE(3),
    [sym_tags] = STATE(63),
    [sym_tag] = STATE(402),
    [sym_dependency_tag] = STATE(402),
    [sym_description] = STATE(3),
    [sym_subsection] = STATE(3),
    [sym_subsection_package] = STATE(248),
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
    [sym__macro_expansion] = STATE(3),
    [sym_simple_expansion] = STATE(3),
    [sym_full_expansion] = STATE(3),
    [sym_shell_expansion] = STATE(3),
    [aux_sym_spec_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(53),
    [aux_sym__simple_statements_token1] = ACTIONS(55),
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
    [anon_sym_PERCENTpre] = ACTIONS(57),
    [anon_sym_PERCENTpost] = ACTIONS(57),
    [anon_sym_PERCENTpreun] = ACTIONS(57),
    [anon_sym_PERCENTpostun] = ACTIONS(57),
    [anon_sym_PERCENTpretrans] = ACTIONS(57),
    [anon_sym_PERCENTposttrans] = ACTIONS(57),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(57),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(57),
    [anon_sym_PERCENTverify] = ACTIONS(57),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(57),
    [anon_sym_PERCENTtriggerin] = ACTIONS(57),
    [anon_sym_PERCENTtriggerun] = ACTIONS(57),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(57),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(57),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(57),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(57),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(57),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(57),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(57),
    [anon_sym_PERCENTfiles] = ACTIONS(39),
    [anon_sym_PERCENTchangelog] = ACTIONS(41),
    [anon_sym_PERCENTglobal] = ACTIONS(43),
    [anon_sym_PERCENTdefine] = ACTIONS(43),
    [anon_sym_PERCENTundefine] = ACTIONS(45),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(49),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(51),
  },
  [3] = {
    [sym__statements] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_preamble] = STATE(3),
    [sym_tags] = STATE(63),
    [sym_tag] = STATE(402),
    [sym_dependency_tag] = STATE(402),
    [sym_description] = STATE(3),
    [sym_subsection] = STATE(3),
    [sym_subsection_package] = STATE(248),
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
    [sym__macro_expansion] = STATE(3),
    [sym_simple_expansion] = STATE(3),
    [sym_full_expansion] = STATE(3),
    [sym_shell_expansion] = STATE(3),
    [aux_sym_spec_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(59),
    [aux_sym__simple_statements_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(64),
    [anon_sym_PERCENTifarch] = ACTIONS(64),
    [anon_sym_PERCENTifos] = ACTIONS(64),
    [anon_sym_PERCENTifnarch] = ACTIONS(64),
    [anon_sym_PERCENTifnos] = ACTIONS(64),
    [anon_sym_AutoProv] = ACTIONS(67),
    [anon_sym_AutoReq] = ACTIONS(67),
    [anon_sym_AutoReqProv] = ACTIONS(67),
    [anon_sym_BugUrl] = ACTIONS(67),
    [anon_sym_BuildRoot] = ACTIONS(67),
    [anon_sym_BuildSystem] = ACTIONS(67),
    [anon_sym_DistTag] = ACTIONS(67),
    [anon_sym_Distribution] = ACTIONS(67),
    [anon_sym_Epoch] = ACTIONS(67),
    [anon_sym_Group] = ACTIONS(67),
    [anon_sym_License] = ACTIONS(67),
    [anon_sym_ModularityLabel] = ACTIONS(67),
    [anon_sym_Name] = ACTIONS(67),
    [anon_sym_NoPatch] = ACTIONS(67),
    [anon_sym_NoSource] = ACTIONS(67),
    [anon_sym_Packager] = ACTIONS(67),
    [anon_sym_Release] = ACTIONS(67),
    [anon_sym_SourceLicense] = ACTIONS(67),
    [anon_sym_Summary] = ACTIONS(67),
    [anon_sym_URL] = ACTIONS(67),
    [anon_sym_Url] = ACTIONS(67),
    [anon_sym_VCS] = ACTIONS(67),
    [anon_sym_Vendor] = ACTIONS(67),
    [anon_sym_Version] = ACTIONS(67),
    [aux_sym_tag_token1] = ACTIONS(67),
    [aux_sym_tag_token2] = ACTIONS(67),
    [anon_sym_Requires] = ACTIONS(70),
    [anon_sym_BuildArch] = ACTIONS(73),
    [anon_sym_BuildArchitectures] = ACTIONS(73),
    [anon_sym_BuildConflicts] = ACTIONS(73),
    [anon_sym_BuildPrereq] = ACTIONS(73),
    [anon_sym_BuildRequires] = ACTIONS(73),
    [anon_sym_Conflicts] = ACTIONS(73),
    [anon_sym_DocDir] = ACTIONS(73),
    [anon_sym_Enhances] = ACTIONS(73),
    [anon_sym_ExcludeArch] = ACTIONS(73),
    [anon_sym_ExcludeOS] = ACTIONS(73),
    [anon_sym_ExclusiveArch] = ACTIONS(73),
    [anon_sym_ExclusiveOS] = ACTIONS(73),
    [anon_sym_Obsoletes] = ACTIONS(73),
    [anon_sym_OrderWithRequires] = ACTIONS(73),
    [anon_sym_Prefix] = ACTIONS(73),
    [anon_sym_Prefixes] = ACTIONS(73),
    [anon_sym_Prereq] = ACTIONS(73),
    [anon_sym_Provides] = ACTIONS(73),
    [anon_sym_Recommends] = ACTIONS(73),
    [anon_sym_RemovePathPostfixes] = ACTIONS(73),
    [anon_sym_Suggests] = ACTIONS(73),
    [anon_sym_Supplements] = ACTIONS(73),
    [anon_sym_PERCENTdescription] = ACTIONS(76),
    [anon_sym_PERCENTpackage] = ACTIONS(79),
    [anon_sym_PERCENTprep] = ACTIONS(82),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(85),
    [anon_sym_PERCENTconf] = ACTIONS(88),
    [anon_sym_PERCENTbuild] = ACTIONS(91),
    [anon_sym_PERCENTinstall] = ACTIONS(94),
    [anon_sym_PERCENTcheck] = ACTIONS(97),
    [anon_sym_PERCENTclean] = ACTIONS(100),
    [anon_sym_PERCENTpre] = ACTIONS(103),
    [anon_sym_PERCENTpost] = ACTIONS(103),
    [anon_sym_PERCENTpreun] = ACTIONS(103),
    [anon_sym_PERCENTpostun] = ACTIONS(103),
    [anon_sym_PERCENTpretrans] = ACTIONS(103),
    [anon_sym_PERCENTposttrans] = ACTIONS(103),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(103),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(103),
    [anon_sym_PERCENTverify] = ACTIONS(103),
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
    [anon_sym_PERCENTfiles] = ACTIONS(106),
    [anon_sym_PERCENTchangelog] = ACTIONS(109),
    [anon_sym_PERCENTglobal] = ACTIONS(112),
    [anon_sym_PERCENTdefine] = ACTIONS(112),
    [anon_sym_PERCENTundefine] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(118),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(121),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(124),
  },
  [4] = {
    [sym_elif_clause] = STATE(215),
    [sym_else_clause] = STATE(298),
    [sym_preamble] = STATE(169),
    [sym_tags] = STATE(69),
    [sym_tag] = STATE(456),
    [sym_dependency_tag] = STATE(456),
    [sym_description] = STATE(169),
    [sym_subsection] = STATE(169),
    [sym_subsection_package] = STATE(276),
    [sym_prep_scriptlet] = STATE(169),
    [sym_generate_buildrequires] = STATE(169),
    [sym_conf_scriptlet] = STATE(169),
    [sym_build_scriptlet] = STATE(169),
    [sym_install_scriptlet] = STATE(169),
    [sym_check_scriptlet] = STATE(169),
    [sym_clean_scriptlet] = STATE(169),
    [sym__runtime_scriptlet] = STATE(169),
    [sym__triggers] = STATE(169),
    [sym__file_triggers] = STATE(169),
    [sym_files] = STATE(169),
    [sym_changelog] = STATE(169),
    [sym_macro_definition] = STATE(169),
    [sym_macro_undefinition] = STATE(169),
    [sym__macro_expansion] = STATE(169),
    [sym_simple_expansion] = STATE(169),
    [sym_full_expansion] = STATE(169),
    [sym_shell_expansion] = STATE(169),
    [aux_sym_if_statement_repeat1] = STATE(176),
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
    [sym_attr] = STATE(99),
    [sym_verify] = STATE(137),
    [sym_string] = STATE(307),
    [sym__macro_expansion] = STATE(135),
    [sym_simple_expansion] = STATE(135),
    [sym_full_expansion] = STATE(135),
    [sym_shell_expansion] = STATE(135),
    [aux_sym_files_repeat1] = STATE(7),
    [aux_sym_string_repeat1] = STATE(135),
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
    [sym_conditional_files] = STATE(10),
    [sym_defattr] = STATE(10),
    [sym_file] = STATE(10),
    [sym_attr] = STATE(99),
    [sym_verify] = STATE(137),
    [sym_string] = STATE(307),
    [sym__macro_expansion] = STATE(135),
    [sym_simple_expansion] = STATE(135),
    [sym_full_expansion] = STATE(135),
    [sym_shell_expansion] = STATE(135),
    [aux_sym_files_repeat1] = STATE(10),
    [aux_sym_string_repeat1] = STATE(135),
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
    [sym_conditional_files] = STATE(7),
    [sym_defattr] = STATE(7),
    [sym_file] = STATE(7),
    [sym_attr] = STATE(99),
    [sym_verify] = STATE(137),
    [sym_string] = STATE(307),
    [sym__macro_expansion] = STATE(135),
    [sym_simple_expansion] = STATE(135),
    [sym_full_expansion] = STATE(135),
    [sym_shell_expansion] = STATE(135),
    [aux_sym_files_repeat1] = STATE(7),
    [aux_sym_string_repeat1] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(193),
    [aux_sym__simple_statements_token1] = ACTIONS(195),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(197),
    [anon_sym_PERCENTifarch] = ACTIONS(197),
    [anon_sym_PERCENTifos] = ACTIONS(197),
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
    [anon_sym_PERCENTverify] = ACTIONS(200),
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
    [anon_sym_PERCENTdefattr] = ACTIONS(203),
    [anon_sym_PERCENTartifact] = ACTIONS(206),
    [anon_sym_PERCENTconfig] = ACTIONS(206),
    [anon_sym_PERCENTdir] = ACTIONS(206),
    [anon_sym_PERCENTdoc] = ACTIONS(206),
    [anon_sym_PERCENTdocdir] = ACTIONS(206),
    [anon_sym_PERCENTghost] = ACTIONS(206),
    [anon_sym_PERCENTlicense] = ACTIONS(206),
    [anon_sym_PERCENTmissingok] = ACTIONS(206),
    [anon_sym_PERCENTreadme] = ACTIONS(206),
    [anon_sym_PERCENTattr] = ACTIONS(209),
    [anon_sym_PERCENTchangelog] = ACTIONS(195),
    [anon_sym_PERCENTglobal] = ACTIONS(195),
    [anon_sym_PERCENTdefine] = ACTIONS(195),
    [anon_sym_PERCENTundefine] = ACTIONS(195),
    [anon_sym_PERCENT] = ACTIONS(212),
    [sym_string_content] = ACTIONS(215),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(218),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(221),
  },
  [8] = {
    [sym_conditional_files] = STATE(5),
    [sym_defattr] = STATE(5),
    [sym_file] = STATE(5),
    [sym_attr] = STATE(99),
    [sym_verify] = STATE(137),
    [sym_string] = STATE(307),
    [sym__macro_expansion] = STATE(135),
    [sym_simple_expansion] = STATE(135),
    [sym_full_expansion] = STATE(135),
    [sym_shell_expansion] = STATE(135),
    [aux_sym_files_repeat1] = STATE(5),
    [aux_sym_string_repeat1] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(224),
    [aux_sym__simple_statements_token1] = ACTIONS(226),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(171),
    [anon_sym_PERCENTifarch] = ACTIONS(171),
    [anon_sym_PERCENTifos] = ACTIONS(171),
    [anon_sym_PERCENTifnarch] = ACTIONS(226),
    [anon_sym_PERCENTifnos] = ACTIONS(226),
    [anon_sym_AutoProv] = ACTIONS(226),
    [anon_sym_AutoReq] = ACTIONS(226),
    [anon_sym_AutoReqProv] = ACTIONS(226),
    [anon_sym_BugUrl] = ACTIONS(226),
    [anon_sym_BuildRoot] = ACTIONS(226),
    [anon_sym_BuildSystem] = ACTIONS(226),
    [anon_sym_DistTag] = ACTIONS(226),
    [anon_sym_Distribution] = ACTIONS(226),
    [anon_sym_Epoch] = ACTIONS(226),
    [anon_sym_Group] = ACTIONS(226),
    [anon_sym_License] = ACTIONS(226),
    [anon_sym_ModularityLabel] = ACTIONS(226),
    [anon_sym_Name] = ACTIONS(226),
    [anon_sym_NoPatch] = ACTIONS(226),
    [anon_sym_NoSource] = ACTIONS(226),
    [anon_sym_Packager] = ACTIONS(226),
    [anon_sym_Release] = ACTIONS(226),
    [anon_sym_SourceLicense] = ACTIONS(226),
    [anon_sym_Summary] = ACTIONS(226),
    [anon_sym_URL] = ACTIONS(226),
    [anon_sym_Url] = ACTIONS(226),
    [anon_sym_VCS] = ACTIONS(226),
    [anon_sym_Vendor] = ACTIONS(226),
    [anon_sym_Version] = ACTIONS(226),
    [aux_sym_tag_token1] = ACTIONS(226),
    [aux_sym_tag_token2] = ACTIONS(226),
    [anon_sym_Requires] = ACTIONS(226),
    [anon_sym_BuildArch] = ACTIONS(226),
    [anon_sym_BuildArchitectures] = ACTIONS(226),
    [anon_sym_BuildConflicts] = ACTIONS(226),
    [anon_sym_BuildPrereq] = ACTIONS(226),
    [anon_sym_BuildRequires] = ACTIONS(226),
    [anon_sym_Conflicts] = ACTIONS(226),
    [anon_sym_DocDir] = ACTIONS(226),
    [anon_sym_Enhances] = ACTIONS(226),
    [anon_sym_ExcludeArch] = ACTIONS(226),
    [anon_sym_ExcludeOS] = ACTIONS(226),
    [anon_sym_ExclusiveArch] = ACTIONS(226),
    [anon_sym_ExclusiveOS] = ACTIONS(226),
    [anon_sym_Obsoletes] = ACTIONS(226),
    [anon_sym_OrderWithRequires] = ACTIONS(226),
    [anon_sym_Prefix] = ACTIONS(226),
    [anon_sym_Prefixes] = ACTIONS(226),
    [anon_sym_Prereq] = ACTIONS(226),
    [anon_sym_Provides] = ACTIONS(226),
    [anon_sym_Recommends] = ACTIONS(226),
    [anon_sym_RemovePathPostfixes] = ACTIONS(226),
    [anon_sym_Suggests] = ACTIONS(226),
    [anon_sym_Supplements] = ACTIONS(226),
    [anon_sym_PERCENTdescription] = ACTIONS(226),
    [anon_sym_PERCENTpackage] = ACTIONS(226),
    [anon_sym_PERCENTprep] = ACTIONS(226),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(226),
    [anon_sym_PERCENTconf] = ACTIONS(226),
    [anon_sym_PERCENTbuild] = ACTIONS(226),
    [anon_sym_PERCENTinstall] = ACTIONS(226),
    [anon_sym_PERCENTcheck] = ACTIONS(226),
    [anon_sym_PERCENTclean] = ACTIONS(226),
    [anon_sym_PERCENTpre] = ACTIONS(226),
    [anon_sym_PERCENTpost] = ACTIONS(226),
    [anon_sym_PERCENTpreun] = ACTIONS(226),
    [anon_sym_PERCENTpostun] = ACTIONS(226),
    [anon_sym_PERCENTpretrans] = ACTIONS(226),
    [anon_sym_PERCENTposttrans] = ACTIONS(226),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(226),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(226),
    [anon_sym_PERCENTverify] = ACTIONS(173),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(226),
    [anon_sym_PERCENTtriggerin] = ACTIONS(226),
    [anon_sym_PERCENTtriggerun] = ACTIONS(226),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(226),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(226),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(226),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(226),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(226),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(226),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(226),
    [anon_sym_PERCENTfiles] = ACTIONS(226),
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
    [anon_sym_PERCENTchangelog] = ACTIONS(226),
    [anon_sym_PERCENTglobal] = ACTIONS(226),
    [anon_sym_PERCENTdefine] = ACTIONS(226),
    [anon_sym_PERCENTundefine] = ACTIONS(226),
    [anon_sym_PERCENT] = ACTIONS(181),
    [sym_string_content] = ACTIONS(183),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(185),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(187),
  },
  [9] = {
    [sym_conditional_files] = STATE(7),
    [sym_defattr] = STATE(7),
    [sym_file] = STATE(7),
    [sym_attr] = STATE(99),
    [sym_verify] = STATE(137),
    [sym_string] = STATE(307),
    [sym__macro_expansion] = STATE(135),
    [sym_simple_expansion] = STATE(135),
    [sym_full_expansion] = STATE(135),
    [sym_shell_expansion] = STATE(135),
    [aux_sym_files_repeat1] = STATE(7),
    [aux_sym_string_repeat1] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(228),
    [aux_sym__simple_statements_token1] = ACTIONS(230),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(171),
    [anon_sym_PERCENTifarch] = ACTIONS(171),
    [anon_sym_PERCENTifos] = ACTIONS(171),
    [anon_sym_PERCENTifnarch] = ACTIONS(230),
    [anon_sym_PERCENTifnos] = ACTIONS(230),
    [anon_sym_AutoProv] = ACTIONS(230),
    [anon_sym_AutoReq] = ACTIONS(230),
    [anon_sym_AutoReqProv] = ACTIONS(230),
    [anon_sym_BugUrl] = ACTIONS(230),
    [anon_sym_BuildRoot] = ACTIONS(230),
    [anon_sym_BuildSystem] = ACTIONS(230),
    [anon_sym_DistTag] = ACTIONS(230),
    [anon_sym_Distribution] = ACTIONS(230),
    [anon_sym_Epoch] = ACTIONS(230),
    [anon_sym_Group] = ACTIONS(230),
    [anon_sym_License] = ACTIONS(230),
    [anon_sym_ModularityLabel] = ACTIONS(230),
    [anon_sym_Name] = ACTIONS(230),
    [anon_sym_NoPatch] = ACTIONS(230),
    [anon_sym_NoSource] = ACTIONS(230),
    [anon_sym_Packager] = ACTIONS(230),
    [anon_sym_Release] = ACTIONS(230),
    [anon_sym_SourceLicense] = ACTIONS(230),
    [anon_sym_Summary] = ACTIONS(230),
    [anon_sym_URL] = ACTIONS(230),
    [anon_sym_Url] = ACTIONS(230),
    [anon_sym_VCS] = ACTIONS(230),
    [anon_sym_Vendor] = ACTIONS(230),
    [anon_sym_Version] = ACTIONS(230),
    [aux_sym_tag_token1] = ACTIONS(230),
    [aux_sym_tag_token2] = ACTIONS(230),
    [anon_sym_Requires] = ACTIONS(230),
    [anon_sym_BuildArch] = ACTIONS(230),
    [anon_sym_BuildArchitectures] = ACTIONS(230),
    [anon_sym_BuildConflicts] = ACTIONS(230),
    [anon_sym_BuildPrereq] = ACTIONS(230),
    [anon_sym_BuildRequires] = ACTIONS(230),
    [anon_sym_Conflicts] = ACTIONS(230),
    [anon_sym_DocDir] = ACTIONS(230),
    [anon_sym_Enhances] = ACTIONS(230),
    [anon_sym_ExcludeArch] = ACTIONS(230),
    [anon_sym_ExcludeOS] = ACTIONS(230),
    [anon_sym_ExclusiveArch] = ACTIONS(230),
    [anon_sym_ExclusiveOS] = ACTIONS(230),
    [anon_sym_Obsoletes] = ACTIONS(230),
    [anon_sym_OrderWithRequires] = ACTIONS(230),
    [anon_sym_Prefix] = ACTIONS(230),
    [anon_sym_Prefixes] = ACTIONS(230),
    [anon_sym_Prereq] = ACTIONS(230),
    [anon_sym_Provides] = ACTIONS(230),
    [anon_sym_Recommends] = ACTIONS(230),
    [anon_sym_RemovePathPostfixes] = ACTIONS(230),
    [anon_sym_Suggests] = ACTIONS(230),
    [anon_sym_Supplements] = ACTIONS(230),
    [anon_sym_PERCENTdescription] = ACTIONS(230),
    [anon_sym_PERCENTpackage] = ACTIONS(230),
    [anon_sym_PERCENTprep] = ACTIONS(230),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(230),
    [anon_sym_PERCENTconf] = ACTIONS(230),
    [anon_sym_PERCENTbuild] = ACTIONS(230),
    [anon_sym_PERCENTinstall] = ACTIONS(230),
    [anon_sym_PERCENTcheck] = ACTIONS(230),
    [anon_sym_PERCENTclean] = ACTIONS(230),
    [anon_sym_PERCENTpre] = ACTIONS(230),
    [anon_sym_PERCENTpost] = ACTIONS(230),
    [anon_sym_PERCENTpreun] = ACTIONS(230),
    [anon_sym_PERCENTpostun] = ACTIONS(230),
    [anon_sym_PERCENTpretrans] = ACTIONS(230),
    [anon_sym_PERCENTposttrans] = ACTIONS(230),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(230),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(230),
    [anon_sym_PERCENTverify] = ACTIONS(173),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(230),
    [anon_sym_PERCENTtriggerin] = ACTIONS(230),
    [anon_sym_PERCENTtriggerun] = ACTIONS(230),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(230),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(230),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(230),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(230),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(230),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(230),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(230),
    [anon_sym_PERCENTfiles] = ACTIONS(230),
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
    [anon_sym_PERCENTchangelog] = ACTIONS(230),
    [anon_sym_PERCENTglobal] = ACTIONS(230),
    [anon_sym_PERCENTdefine] = ACTIONS(230),
    [anon_sym_PERCENTundefine] = ACTIONS(230),
    [anon_sym_PERCENT] = ACTIONS(181),
    [sym_string_content] = ACTIONS(183),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(185),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(187),
  },
  [10] = {
    [sym_conditional_files] = STATE(7),
    [sym_defattr] = STATE(7),
    [sym_file] = STATE(7),
    [sym_attr] = STATE(99),
    [sym_verify] = STATE(137),
    [sym_string] = STATE(307),
    [sym__macro_expansion] = STATE(135),
    [sym_simple_expansion] = STATE(135),
    [sym_full_expansion] = STATE(135),
    [sym_shell_expansion] = STATE(135),
    [aux_sym_files_repeat1] = STATE(7),
    [aux_sym_string_repeat1] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(232),
    [aux_sym__simple_statements_token1] = ACTIONS(234),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(171),
    [anon_sym_PERCENTifarch] = ACTIONS(171),
    [anon_sym_PERCENTifos] = ACTIONS(171),
    [anon_sym_PERCENTifnarch] = ACTIONS(234),
    [anon_sym_PERCENTifnos] = ACTIONS(234),
    [anon_sym_AutoProv] = ACTIONS(234),
    [anon_sym_AutoReq] = ACTIONS(234),
    [anon_sym_AutoReqProv] = ACTIONS(234),
    [anon_sym_BugUrl] = ACTIONS(234),
    [anon_sym_BuildRoot] = ACTIONS(234),
    [anon_sym_BuildSystem] = ACTIONS(234),
    [anon_sym_DistTag] = ACTIONS(234),
    [anon_sym_Distribution] = ACTIONS(234),
    [anon_sym_Epoch] = ACTIONS(234),
    [anon_sym_Group] = ACTIONS(234),
    [anon_sym_License] = ACTIONS(234),
    [anon_sym_ModularityLabel] = ACTIONS(234),
    [anon_sym_Name] = ACTIONS(234),
    [anon_sym_NoPatch] = ACTIONS(234),
    [anon_sym_NoSource] = ACTIONS(234),
    [anon_sym_Packager] = ACTIONS(234),
    [anon_sym_Release] = ACTIONS(234),
    [anon_sym_SourceLicense] = ACTIONS(234),
    [anon_sym_Summary] = ACTIONS(234),
    [anon_sym_URL] = ACTIONS(234),
    [anon_sym_Url] = ACTIONS(234),
    [anon_sym_VCS] = ACTIONS(234),
    [anon_sym_Vendor] = ACTIONS(234),
    [anon_sym_Version] = ACTIONS(234),
    [aux_sym_tag_token1] = ACTIONS(234),
    [aux_sym_tag_token2] = ACTIONS(234),
    [anon_sym_Requires] = ACTIONS(234),
    [anon_sym_BuildArch] = ACTIONS(234),
    [anon_sym_BuildArchitectures] = ACTIONS(234),
    [anon_sym_BuildConflicts] = ACTIONS(234),
    [anon_sym_BuildPrereq] = ACTIONS(234),
    [anon_sym_BuildRequires] = ACTIONS(234),
    [anon_sym_Conflicts] = ACTIONS(234),
    [anon_sym_DocDir] = ACTIONS(234),
    [anon_sym_Enhances] = ACTIONS(234),
    [anon_sym_ExcludeArch] = ACTIONS(234),
    [anon_sym_ExcludeOS] = ACTIONS(234),
    [anon_sym_ExclusiveArch] = ACTIONS(234),
    [anon_sym_ExclusiveOS] = ACTIONS(234),
    [anon_sym_Obsoletes] = ACTIONS(234),
    [anon_sym_OrderWithRequires] = ACTIONS(234),
    [anon_sym_Prefix] = ACTIONS(234),
    [anon_sym_Prefixes] = ACTIONS(234),
    [anon_sym_Prereq] = ACTIONS(234),
    [anon_sym_Provides] = ACTIONS(234),
    [anon_sym_Recommends] = ACTIONS(234),
    [anon_sym_RemovePathPostfixes] = ACTIONS(234),
    [anon_sym_Suggests] = ACTIONS(234),
    [anon_sym_Supplements] = ACTIONS(234),
    [anon_sym_PERCENTdescription] = ACTIONS(234),
    [anon_sym_PERCENTpackage] = ACTIONS(234),
    [anon_sym_PERCENTprep] = ACTIONS(234),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(234),
    [anon_sym_PERCENTconf] = ACTIONS(234),
    [anon_sym_PERCENTbuild] = ACTIONS(234),
    [anon_sym_PERCENTinstall] = ACTIONS(234),
    [anon_sym_PERCENTcheck] = ACTIONS(234),
    [anon_sym_PERCENTclean] = ACTIONS(234),
    [anon_sym_PERCENTpre] = ACTIONS(234),
    [anon_sym_PERCENTpost] = ACTIONS(234),
    [anon_sym_PERCENTpreun] = ACTIONS(234),
    [anon_sym_PERCENTpostun] = ACTIONS(234),
    [anon_sym_PERCENTpretrans] = ACTIONS(234),
    [anon_sym_PERCENTposttrans] = ACTIONS(234),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(234),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(234),
    [anon_sym_PERCENTverify] = ACTIONS(173),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(234),
    [anon_sym_PERCENTtriggerin] = ACTIONS(234),
    [anon_sym_PERCENTtriggerun] = ACTIONS(234),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(234),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(234),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(234),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(234),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(234),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(234),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(234),
    [anon_sym_PERCENTfiles] = ACTIONS(234),
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
    [anon_sym_PERCENTchangelog] = ACTIONS(234),
    [anon_sym_PERCENTglobal] = ACTIONS(234),
    [anon_sym_PERCENTdefine] = ACTIONS(234),
    [anon_sym_PERCENTundefine] = ACTIONS(234),
    [anon_sym_PERCENT] = ACTIONS(181),
    [sym_string_content] = ACTIONS(183),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(185),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(187),
  },
  [11] = {
    [sym_conditional_files] = STATE(9),
    [sym_defattr] = STATE(9),
    [sym_file] = STATE(9),
    [sym_attr] = STATE(99),
    [sym_verify] = STATE(137),
    [sym_string] = STATE(307),
    [sym__macro_expansion] = STATE(135),
    [sym_simple_expansion] = STATE(135),
    [sym_full_expansion] = STATE(135),
    [sym_shell_expansion] = STATE(135),
    [aux_sym_files_repeat1] = STATE(9),
    [aux_sym_string_repeat1] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(236),
    [aux_sym__simple_statements_token1] = ACTIONS(238),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(171),
    [anon_sym_PERCENTifarch] = ACTIONS(171),
    [anon_sym_PERCENTifos] = ACTIONS(171),
    [anon_sym_PERCENTifnarch] = ACTIONS(238),
    [anon_sym_PERCENTifnos] = ACTIONS(238),
    [anon_sym_AutoProv] = ACTIONS(238),
    [anon_sym_AutoReq] = ACTIONS(238),
    [anon_sym_AutoReqProv] = ACTIONS(238),
    [anon_sym_BugUrl] = ACTIONS(238),
    [anon_sym_BuildRoot] = ACTIONS(238),
    [anon_sym_BuildSystem] = ACTIONS(238),
    [anon_sym_DistTag] = ACTIONS(238),
    [anon_sym_Distribution] = ACTIONS(238),
    [anon_sym_Epoch] = ACTIONS(238),
    [anon_sym_Group] = ACTIONS(238),
    [anon_sym_License] = ACTIONS(238),
    [anon_sym_ModularityLabel] = ACTIONS(238),
    [anon_sym_Name] = ACTIONS(238),
    [anon_sym_NoPatch] = ACTIONS(238),
    [anon_sym_NoSource] = ACTIONS(238),
    [anon_sym_Packager] = ACTIONS(238),
    [anon_sym_Release] = ACTIONS(238),
    [anon_sym_SourceLicense] = ACTIONS(238),
    [anon_sym_Summary] = ACTIONS(238),
    [anon_sym_URL] = ACTIONS(238),
    [anon_sym_Url] = ACTIONS(238),
    [anon_sym_VCS] = ACTIONS(238),
    [anon_sym_Vendor] = ACTIONS(238),
    [anon_sym_Version] = ACTIONS(238),
    [aux_sym_tag_token1] = ACTIONS(238),
    [aux_sym_tag_token2] = ACTIONS(238),
    [anon_sym_Requires] = ACTIONS(238),
    [anon_sym_BuildArch] = ACTIONS(238),
    [anon_sym_BuildArchitectures] = ACTIONS(238),
    [anon_sym_BuildConflicts] = ACTIONS(238),
    [anon_sym_BuildPrereq] = ACTIONS(238),
    [anon_sym_BuildRequires] = ACTIONS(238),
    [anon_sym_Conflicts] = ACTIONS(238),
    [anon_sym_DocDir] = ACTIONS(238),
    [anon_sym_Enhances] = ACTIONS(238),
    [anon_sym_ExcludeArch] = ACTIONS(238),
    [anon_sym_ExcludeOS] = ACTIONS(238),
    [anon_sym_ExclusiveArch] = ACTIONS(238),
    [anon_sym_ExclusiveOS] = ACTIONS(238),
    [anon_sym_Obsoletes] = ACTIONS(238),
    [anon_sym_OrderWithRequires] = ACTIONS(238),
    [anon_sym_Prefix] = ACTIONS(238),
    [anon_sym_Prefixes] = ACTIONS(238),
    [anon_sym_Prereq] = ACTIONS(238),
    [anon_sym_Provides] = ACTIONS(238),
    [anon_sym_Recommends] = ACTIONS(238),
    [anon_sym_RemovePathPostfixes] = ACTIONS(238),
    [anon_sym_Suggests] = ACTIONS(238),
    [anon_sym_Supplements] = ACTIONS(238),
    [anon_sym_PERCENTdescription] = ACTIONS(238),
    [anon_sym_PERCENTpackage] = ACTIONS(238),
    [anon_sym_PERCENTprep] = ACTIONS(238),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(238),
    [anon_sym_PERCENTconf] = ACTIONS(238),
    [anon_sym_PERCENTbuild] = ACTIONS(238),
    [anon_sym_PERCENTinstall] = ACTIONS(238),
    [anon_sym_PERCENTcheck] = ACTIONS(238),
    [anon_sym_PERCENTclean] = ACTIONS(238),
    [anon_sym_PERCENTpre] = ACTIONS(238),
    [anon_sym_PERCENTpost] = ACTIONS(238),
    [anon_sym_PERCENTpreun] = ACTIONS(238),
    [anon_sym_PERCENTpostun] = ACTIONS(238),
    [anon_sym_PERCENTpretrans] = ACTIONS(238),
    [anon_sym_PERCENTposttrans] = ACTIONS(238),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(238),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(238),
    [anon_sym_PERCENTverify] = ACTIONS(173),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(238),
    [anon_sym_PERCENTtriggerin] = ACTIONS(238),
    [anon_sym_PERCENTtriggerun] = ACTIONS(238),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(238),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(238),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(238),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(238),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(238),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(238),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(238),
    [anon_sym_PERCENTfiles] = ACTIONS(238),
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
    [anon_sym_PERCENTchangelog] = ACTIONS(238),
    [anon_sym_PERCENTglobal] = ACTIONS(238),
    [anon_sym_PERCENTdefine] = ACTIONS(238),
    [anon_sym_PERCENTundefine] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(181),
    [sym_string_content] = ACTIONS(183),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(185),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(187),
  },
  [12] = {
    [sym_preamble] = STATE(225),
    [sym_tags] = STATE(69),
    [sym_tag] = STATE(456),
    [sym_dependency_tag] = STATE(456),
    [sym_description] = STATE(225),
    [sym_subsection] = STATE(225),
    [sym_subsection_package] = STATE(276),
    [sym_prep_scriptlet] = STATE(225),
    [sym_generate_buildrequires] = STATE(225),
    [sym_conf_scriptlet] = STATE(225),
    [sym_build_scriptlet] = STATE(225),
    [sym_install_scriptlet] = STATE(225),
    [sym_check_scriptlet] = STATE(225),
    [sym_clean_scriptlet] = STATE(225),
    [sym__runtime_scriptlet] = STATE(225),
    [sym__triggers] = STATE(225),
    [sym__file_triggers] = STATE(225),
    [sym_files] = STATE(225),
    [sym_changelog] = STATE(225),
    [sym_macro_definition] = STATE(225),
    [sym_macro_undefinition] = STATE(225),
    [sym__macro_expansion] = STATE(225),
    [sym_simple_expansion] = STATE(225),
    [sym_full_expansion] = STATE(225),
    [sym_shell_expansion] = STATE(225),
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
    [anon_sym_PERCENTdescription] = ACTIONS(135),
    [anon_sym_PERCENTpackage] = ACTIONS(21),
    [anon_sym_PERCENTprep] = ACTIONS(137),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(139),
    [anon_sym_PERCENTconf] = ACTIONS(141),
    [anon_sym_PERCENTbuild] = ACTIONS(143),
    [anon_sym_PERCENTinstall] = ACTIONS(145),
    [anon_sym_PERCENTcheck] = ACTIONS(147),
    [anon_sym_PERCENTclean] = ACTIONS(149),
    [anon_sym_PERCENTpre] = ACTIONS(242),
    [anon_sym_PERCENTpost] = ACTIONS(242),
    [anon_sym_PERCENTpreun] = ACTIONS(242),
    [anon_sym_PERCENTpostun] = ACTIONS(242),
    [anon_sym_PERCENTpretrans] = ACTIONS(242),
    [anon_sym_PERCENTposttrans] = ACTIONS(242),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(242),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(242),
    [anon_sym_PERCENTverify] = ACTIONS(242),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(242),
    [anon_sym_PERCENTtriggerin] = ACTIONS(242),
    [anon_sym_PERCENTtriggerun] = ACTIONS(242),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(242),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(242),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(242),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(242),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(242),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(242),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(242),
    [anon_sym_PERCENTfiles] = ACTIONS(153),
    [anon_sym_PERCENTchangelog] = ACTIONS(155),
    [anon_sym_PERCENTglobal] = ACTIONS(157),
    [anon_sym_PERCENTdefine] = ACTIONS(157),
    [anon_sym_PERCENTundefine] = ACTIONS(159),
    [anon_sym_PERCENT] = ACTIONS(161),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(163),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(165),
  },
  [13] = {
    [sym_preamble] = STATE(375),
    [sym_tags] = STATE(69),
    [sym_tag] = STATE(456),
    [sym_dependency_tag] = STATE(456),
    [sym_description] = STATE(375),
    [sym_subsection] = STATE(375),
    [sym_subsection_package] = STATE(276),
    [sym_prep_scriptlet] = STATE(375),
    [sym_generate_buildrequires] = STATE(375),
    [sym_conf_scriptlet] = STATE(375),
    [sym_build_scriptlet] = STATE(375),
    [sym_install_scriptlet] = STATE(375),
    [sym_check_scriptlet] = STATE(375),
    [sym_clean_scriptlet] = STATE(375),
    [sym__runtime_scriptlet] = STATE(375),
    [sym__triggers] = STATE(375),
    [sym__file_triggers] = STATE(375),
    [sym_files] = STATE(375),
    [sym_changelog] = STATE(375),
    [sym_macro_definition] = STATE(375),
    [sym_macro_undefinition] = STATE(375),
    [sym__macro_expansion] = STATE(375),
    [sym_simple_expansion] = STATE(375),
    [sym_full_expansion] = STATE(375),
    [sym_shell_expansion] = STATE(375),
    [aux_sym__simple_statements_token1] = ACTIONS(244),
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
    [anon_sym_PERCENTdescription] = ACTIONS(246),
    [anon_sym_PERCENTpackage] = ACTIONS(21),
    [anon_sym_PERCENTprep] = ACTIONS(248),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(250),
    [anon_sym_PERCENTconf] = ACTIONS(141),
    [anon_sym_PERCENTbuild] = ACTIONS(143),
    [anon_sym_PERCENTinstall] = ACTIONS(145),
    [anon_sym_PERCENTcheck] = ACTIONS(147),
    [anon_sym_PERCENTclean] = ACTIONS(149),
    [anon_sym_PERCENTpre] = ACTIONS(252),
    [anon_sym_PERCENTpost] = ACTIONS(252),
    [anon_sym_PERCENTpreun] = ACTIONS(252),
    [anon_sym_PERCENTpostun] = ACTIONS(252),
    [anon_sym_PERCENTpretrans] = ACTIONS(252),
    [anon_sym_PERCENTposttrans] = ACTIONS(252),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(252),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(252),
    [anon_sym_PERCENTverify] = ACTIONS(252),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(252),
    [anon_sym_PERCENTtriggerin] = ACTIONS(252),
    [anon_sym_PERCENTtriggerun] = ACTIONS(252),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(252),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(252),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(252),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(252),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(252),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(252),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(252),
    [anon_sym_PERCENTfiles] = ACTIONS(254),
    [anon_sym_PERCENTchangelog] = ACTIONS(155),
    [anon_sym_PERCENTglobal] = ACTIONS(157),
    [anon_sym_PERCENTdefine] = ACTIONS(157),
    [anon_sym_PERCENTundefine] = ACTIONS(159),
    [anon_sym_PERCENT] = ACTIONS(161),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(163),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(165),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [aux_sym__simple_statements_token1] = ACTIONS(258),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(258),
    [anon_sym_PERCENTifarch] = ACTIONS(258),
    [anon_sym_PERCENTifos] = ACTIONS(258),
    [anon_sym_PERCENTifnarch] = ACTIONS(258),
    [anon_sym_PERCENTifnos] = ACTIONS(258),
    [anon_sym_AutoProv] = ACTIONS(258),
    [anon_sym_AutoReq] = ACTIONS(258),
    [anon_sym_AutoReqProv] = ACTIONS(258),
    [anon_sym_BugUrl] = ACTIONS(258),
    [anon_sym_BuildRoot] = ACTIONS(258),
    [anon_sym_BuildSystem] = ACTIONS(258),
    [anon_sym_DistTag] = ACTIONS(258),
    [anon_sym_Distribution] = ACTIONS(258),
    [anon_sym_Epoch] = ACTIONS(258),
    [anon_sym_Group] = ACTIONS(258),
    [anon_sym_License] = ACTIONS(258),
    [anon_sym_ModularityLabel] = ACTIONS(258),
    [anon_sym_Name] = ACTIONS(258),
    [anon_sym_NoPatch] = ACTIONS(258),
    [anon_sym_NoSource] = ACTIONS(258),
    [anon_sym_Packager] = ACTIONS(258),
    [anon_sym_Release] = ACTIONS(258),
    [anon_sym_SourceLicense] = ACTIONS(258),
    [anon_sym_Summary] = ACTIONS(258),
    [anon_sym_URL] = ACTIONS(258),
    [anon_sym_Url] = ACTIONS(258),
    [anon_sym_VCS] = ACTIONS(258),
    [anon_sym_Vendor] = ACTIONS(258),
    [anon_sym_Version] = ACTIONS(258),
    [aux_sym_tag_token1] = ACTIONS(258),
    [aux_sym_tag_token2] = ACTIONS(258),
    [anon_sym_Requires] = ACTIONS(258),
    [anon_sym_BuildArch] = ACTIONS(258),
    [anon_sym_BuildArchitectures] = ACTIONS(258),
    [anon_sym_BuildConflicts] = ACTIONS(258),
    [anon_sym_BuildPrereq] = ACTIONS(258),
    [anon_sym_BuildRequires] = ACTIONS(258),
    [anon_sym_Conflicts] = ACTIONS(258),
    [anon_sym_DocDir] = ACTIONS(258),
    [anon_sym_Enhances] = ACTIONS(258),
    [anon_sym_ExcludeArch] = ACTIONS(258),
    [anon_sym_ExcludeOS] = ACTIONS(258),
    [anon_sym_ExclusiveArch] = ACTIONS(258),
    [anon_sym_ExclusiveOS] = ACTIONS(258),
    [anon_sym_Obsoletes] = ACTIONS(258),
    [anon_sym_OrderWithRequires] = ACTIONS(258),
    [anon_sym_Prefix] = ACTIONS(258),
    [anon_sym_Prefixes] = ACTIONS(258),
    [anon_sym_Prereq] = ACTIONS(258),
    [anon_sym_Provides] = ACTIONS(258),
    [anon_sym_Recommends] = ACTIONS(258),
    [anon_sym_RemovePathPostfixes] = ACTIONS(258),
    [anon_sym_Suggests] = ACTIONS(258),
    [anon_sym_Supplements] = ACTIONS(258),
    [anon_sym_PERCENTdescription] = ACTIONS(258),
    [anon_sym_PERCENTpackage] = ACTIONS(258),
    [anon_sym_PERCENTprep] = ACTIONS(258),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(258),
    [anon_sym_PERCENTconf] = ACTIONS(258),
    [anon_sym_PERCENTbuild] = ACTIONS(258),
    [anon_sym_PERCENTinstall] = ACTIONS(258),
    [anon_sym_PERCENTcheck] = ACTIONS(258),
    [anon_sym_PERCENTclean] = ACTIONS(258),
    [anon_sym_PERCENTpre] = ACTIONS(258),
    [anon_sym_PERCENTpost] = ACTIONS(258),
    [anon_sym_PERCENTpreun] = ACTIONS(258),
    [anon_sym_PERCENTpostun] = ACTIONS(258),
    [anon_sym_PERCENTpretrans] = ACTIONS(258),
    [anon_sym_PERCENTposttrans] = ACTIONS(258),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(258),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(258),
    [anon_sym_PERCENTverify] = ACTIONS(258),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(258),
    [anon_sym_PERCENTtriggerin] = ACTIONS(258),
    [anon_sym_PERCENTtriggerun] = ACTIONS(258),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(258),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(258),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(258),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(258),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(258),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(258),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(258),
    [anon_sym_PERCENTfiles] = ACTIONS(258),
    [anon_sym_PERCENTdefattr] = ACTIONS(258),
    [anon_sym_PERCENTartifact] = ACTIONS(258),
    [anon_sym_PERCENTconfig] = ACTIONS(258),
    [anon_sym_PERCENTdir] = ACTIONS(258),
    [anon_sym_PERCENTdoc] = ACTIONS(258),
    [anon_sym_PERCENTdocdir] = ACTIONS(258),
    [anon_sym_PERCENTghost] = ACTIONS(258),
    [anon_sym_PERCENTlicense] = ACTIONS(258),
    [anon_sym_PERCENTmissingok] = ACTIONS(258),
    [anon_sym_PERCENTreadme] = ACTIONS(258),
    [anon_sym_PERCENTattr] = ACTIONS(258),
    [anon_sym_PERCENTchangelog] = ACTIONS(258),
    [anon_sym_PERCENTglobal] = ACTIONS(258),
    [anon_sym_PERCENTdefine] = ACTIONS(258),
    [anon_sym_PERCENTundefine] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(258),
    [sym_string_content] = ACTIONS(258),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(258),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(258),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(260),
    [aux_sym__simple_statements_token1] = ACTIONS(262),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(262),
    [anon_sym_PERCENTifarch] = ACTIONS(262),
    [anon_sym_PERCENTifos] = ACTIONS(262),
    [anon_sym_PERCENTifnarch] = ACTIONS(262),
    [anon_sym_PERCENTifnos] = ACTIONS(262),
    [anon_sym_AutoProv] = ACTIONS(262),
    [anon_sym_AutoReq] = ACTIONS(262),
    [anon_sym_AutoReqProv] = ACTIONS(262),
    [anon_sym_BugUrl] = ACTIONS(262),
    [anon_sym_BuildRoot] = ACTIONS(262),
    [anon_sym_BuildSystem] = ACTIONS(262),
    [anon_sym_DistTag] = ACTIONS(262),
    [anon_sym_Distribution] = ACTIONS(262),
    [anon_sym_Epoch] = ACTIONS(262),
    [anon_sym_Group] = ACTIONS(262),
    [anon_sym_License] = ACTIONS(262),
    [anon_sym_ModularityLabel] = ACTIONS(262),
    [anon_sym_Name] = ACTIONS(262),
    [anon_sym_NoPatch] = ACTIONS(262),
    [anon_sym_NoSource] = ACTIONS(262),
    [anon_sym_Packager] = ACTIONS(262),
    [anon_sym_Release] = ACTIONS(262),
    [anon_sym_SourceLicense] = ACTIONS(262),
    [anon_sym_Summary] = ACTIONS(262),
    [anon_sym_URL] = ACTIONS(262),
    [anon_sym_Url] = ACTIONS(262),
    [anon_sym_VCS] = ACTIONS(262),
    [anon_sym_Vendor] = ACTIONS(262),
    [anon_sym_Version] = ACTIONS(262),
    [aux_sym_tag_token1] = ACTIONS(262),
    [aux_sym_tag_token2] = ACTIONS(262),
    [anon_sym_Requires] = ACTIONS(262),
    [anon_sym_BuildArch] = ACTIONS(262),
    [anon_sym_BuildArchitectures] = ACTIONS(262),
    [anon_sym_BuildConflicts] = ACTIONS(262),
    [anon_sym_BuildPrereq] = ACTIONS(262),
    [anon_sym_BuildRequires] = ACTIONS(262),
    [anon_sym_Conflicts] = ACTIONS(262),
    [anon_sym_DocDir] = ACTIONS(262),
    [anon_sym_Enhances] = ACTIONS(262),
    [anon_sym_ExcludeArch] = ACTIONS(262),
    [anon_sym_ExcludeOS] = ACTIONS(262),
    [anon_sym_ExclusiveArch] = ACTIONS(262),
    [anon_sym_ExclusiveOS] = ACTIONS(262),
    [anon_sym_Obsoletes] = ACTIONS(262),
    [anon_sym_OrderWithRequires] = ACTIONS(262),
    [anon_sym_Prefix] = ACTIONS(262),
    [anon_sym_Prefixes] = ACTIONS(262),
    [anon_sym_Prereq] = ACTIONS(262),
    [anon_sym_Provides] = ACTIONS(262),
    [anon_sym_Recommends] = ACTIONS(262),
    [anon_sym_RemovePathPostfixes] = ACTIONS(262),
    [anon_sym_Suggests] = ACTIONS(262),
    [anon_sym_Supplements] = ACTIONS(262),
    [anon_sym_PERCENTdescription] = ACTIONS(262),
    [anon_sym_PERCENTpackage] = ACTIONS(262),
    [anon_sym_PERCENTprep] = ACTIONS(262),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(262),
    [anon_sym_PERCENTconf] = ACTIONS(262),
    [anon_sym_PERCENTbuild] = ACTIONS(262),
    [anon_sym_PERCENTinstall] = ACTIONS(262),
    [anon_sym_PERCENTcheck] = ACTIONS(262),
    [anon_sym_PERCENTclean] = ACTIONS(262),
    [anon_sym_PERCENTpre] = ACTIONS(262),
    [anon_sym_PERCENTpost] = ACTIONS(262),
    [anon_sym_PERCENTpreun] = ACTIONS(262),
    [anon_sym_PERCENTpostun] = ACTIONS(262),
    [anon_sym_PERCENTpretrans] = ACTIONS(262),
    [anon_sym_PERCENTposttrans] = ACTIONS(262),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(262),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(262),
    [anon_sym_PERCENTverify] = ACTIONS(262),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(262),
    [anon_sym_PERCENTtriggerin] = ACTIONS(262),
    [anon_sym_PERCENTtriggerun] = ACTIONS(262),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(262),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(262),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(262),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(262),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(262),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(262),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(262),
    [anon_sym_PERCENTfiles] = ACTIONS(262),
    [anon_sym_PERCENTdefattr] = ACTIONS(262),
    [anon_sym_PERCENTartifact] = ACTIONS(262),
    [anon_sym_PERCENTconfig] = ACTIONS(262),
    [anon_sym_PERCENTdir] = ACTIONS(262),
    [anon_sym_PERCENTdoc] = ACTIONS(262),
    [anon_sym_PERCENTdocdir] = ACTIONS(262),
    [anon_sym_PERCENTghost] = ACTIONS(262),
    [anon_sym_PERCENTlicense] = ACTIONS(262),
    [anon_sym_PERCENTmissingok] = ACTIONS(262),
    [anon_sym_PERCENTreadme] = ACTIONS(262),
    [anon_sym_PERCENTattr] = ACTIONS(262),
    [anon_sym_PERCENTchangelog] = ACTIONS(262),
    [anon_sym_PERCENTglobal] = ACTIONS(262),
    [anon_sym_PERCENTdefine] = ACTIONS(262),
    [anon_sym_PERCENTundefine] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
    [sym_string_content] = ACTIONS(262),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(262),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(262),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [aux_sym__simple_statements_token1] = ACTIONS(266),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(266),
    [anon_sym_PERCENTifarch] = ACTIONS(266),
    [anon_sym_PERCENTifos] = ACTIONS(266),
    [anon_sym_PERCENTifnarch] = ACTIONS(266),
    [anon_sym_PERCENTifnos] = ACTIONS(266),
    [anon_sym_AutoProv] = ACTIONS(266),
    [anon_sym_AutoReq] = ACTIONS(266),
    [anon_sym_AutoReqProv] = ACTIONS(266),
    [anon_sym_BugUrl] = ACTIONS(266),
    [anon_sym_BuildRoot] = ACTIONS(266),
    [anon_sym_BuildSystem] = ACTIONS(266),
    [anon_sym_DistTag] = ACTIONS(266),
    [anon_sym_Distribution] = ACTIONS(266),
    [anon_sym_Epoch] = ACTIONS(266),
    [anon_sym_Group] = ACTIONS(266),
    [anon_sym_License] = ACTIONS(266),
    [anon_sym_ModularityLabel] = ACTIONS(266),
    [anon_sym_Name] = ACTIONS(266),
    [anon_sym_NoPatch] = ACTIONS(266),
    [anon_sym_NoSource] = ACTIONS(266),
    [anon_sym_Packager] = ACTIONS(266),
    [anon_sym_Release] = ACTIONS(266),
    [anon_sym_SourceLicense] = ACTIONS(266),
    [anon_sym_Summary] = ACTIONS(266),
    [anon_sym_URL] = ACTIONS(266),
    [anon_sym_Url] = ACTIONS(266),
    [anon_sym_VCS] = ACTIONS(266),
    [anon_sym_Vendor] = ACTIONS(266),
    [anon_sym_Version] = ACTIONS(266),
    [aux_sym_tag_token1] = ACTIONS(266),
    [aux_sym_tag_token2] = ACTIONS(266),
    [anon_sym_Requires] = ACTIONS(266),
    [anon_sym_BuildArch] = ACTIONS(266),
    [anon_sym_BuildArchitectures] = ACTIONS(266),
    [anon_sym_BuildConflicts] = ACTIONS(266),
    [anon_sym_BuildPrereq] = ACTIONS(266),
    [anon_sym_BuildRequires] = ACTIONS(266),
    [anon_sym_Conflicts] = ACTIONS(266),
    [anon_sym_DocDir] = ACTIONS(266),
    [anon_sym_Enhances] = ACTIONS(266),
    [anon_sym_ExcludeArch] = ACTIONS(266),
    [anon_sym_ExcludeOS] = ACTIONS(266),
    [anon_sym_ExclusiveArch] = ACTIONS(266),
    [anon_sym_ExclusiveOS] = ACTIONS(266),
    [anon_sym_Obsoletes] = ACTIONS(266),
    [anon_sym_OrderWithRequires] = ACTIONS(266),
    [anon_sym_Prefix] = ACTIONS(266),
    [anon_sym_Prefixes] = ACTIONS(266),
    [anon_sym_Prereq] = ACTIONS(266),
    [anon_sym_Provides] = ACTIONS(266),
    [anon_sym_Recommends] = ACTIONS(266),
    [anon_sym_RemovePathPostfixes] = ACTIONS(266),
    [anon_sym_Suggests] = ACTIONS(266),
    [anon_sym_Supplements] = ACTIONS(266),
    [anon_sym_PERCENTdescription] = ACTIONS(266),
    [anon_sym_PERCENTpackage] = ACTIONS(266),
    [anon_sym_PERCENTprep] = ACTIONS(266),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(266),
    [anon_sym_PERCENTconf] = ACTIONS(266),
    [anon_sym_PERCENTbuild] = ACTIONS(266),
    [anon_sym_PERCENTinstall] = ACTIONS(266),
    [anon_sym_PERCENTcheck] = ACTIONS(266),
    [anon_sym_PERCENTclean] = ACTIONS(266),
    [anon_sym_PERCENTpre] = ACTIONS(266),
    [anon_sym_PERCENTpost] = ACTIONS(266),
    [anon_sym_PERCENTpreun] = ACTIONS(266),
    [anon_sym_PERCENTpostun] = ACTIONS(266),
    [anon_sym_PERCENTpretrans] = ACTIONS(266),
    [anon_sym_PERCENTposttrans] = ACTIONS(266),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(266),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(266),
    [anon_sym_PERCENTverify] = ACTIONS(266),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(266),
    [anon_sym_PERCENTtriggerin] = ACTIONS(266),
    [anon_sym_PERCENTtriggerun] = ACTIONS(266),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(266),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(266),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(266),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(266),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(266),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(266),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(266),
    [anon_sym_PERCENTfiles] = ACTIONS(266),
    [anon_sym_PERCENTdefattr] = ACTIONS(266),
    [anon_sym_PERCENTartifact] = ACTIONS(266),
    [anon_sym_PERCENTconfig] = ACTIONS(266),
    [anon_sym_PERCENTdir] = ACTIONS(266),
    [anon_sym_PERCENTdoc] = ACTIONS(266),
    [anon_sym_PERCENTdocdir] = ACTIONS(266),
    [anon_sym_PERCENTghost] = ACTIONS(266),
    [anon_sym_PERCENTlicense] = ACTIONS(266),
    [anon_sym_PERCENTmissingok] = ACTIONS(266),
    [anon_sym_PERCENTreadme] = ACTIONS(266),
    [anon_sym_PERCENTattr] = ACTIONS(266),
    [anon_sym_PERCENTchangelog] = ACTIONS(266),
    [anon_sym_PERCENTglobal] = ACTIONS(266),
    [anon_sym_PERCENTdefine] = ACTIONS(266),
    [anon_sym_PERCENTundefine] = ACTIONS(266),
    [anon_sym_PERCENT] = ACTIONS(266),
    [sym_string_content] = ACTIONS(266),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(266),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(266),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [aux_sym__simple_statements_token1] = ACTIONS(270),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(270),
    [anon_sym_PERCENTifarch] = ACTIONS(270),
    [anon_sym_PERCENTifos] = ACTIONS(270),
    [anon_sym_PERCENTifnarch] = ACTIONS(270),
    [anon_sym_PERCENTifnos] = ACTIONS(270),
    [anon_sym_AutoProv] = ACTIONS(270),
    [anon_sym_AutoReq] = ACTIONS(270),
    [anon_sym_AutoReqProv] = ACTIONS(270),
    [anon_sym_BugUrl] = ACTIONS(270),
    [anon_sym_BuildRoot] = ACTIONS(270),
    [anon_sym_BuildSystem] = ACTIONS(270),
    [anon_sym_DistTag] = ACTIONS(270),
    [anon_sym_Distribution] = ACTIONS(270),
    [anon_sym_Epoch] = ACTIONS(270),
    [anon_sym_Group] = ACTIONS(270),
    [anon_sym_License] = ACTIONS(270),
    [anon_sym_ModularityLabel] = ACTIONS(270),
    [anon_sym_Name] = ACTIONS(270),
    [anon_sym_NoPatch] = ACTIONS(270),
    [anon_sym_NoSource] = ACTIONS(270),
    [anon_sym_Packager] = ACTIONS(270),
    [anon_sym_Release] = ACTIONS(270),
    [anon_sym_SourceLicense] = ACTIONS(270),
    [anon_sym_Summary] = ACTIONS(270),
    [anon_sym_URL] = ACTIONS(270),
    [anon_sym_Url] = ACTIONS(270),
    [anon_sym_VCS] = ACTIONS(270),
    [anon_sym_Vendor] = ACTIONS(270),
    [anon_sym_Version] = ACTIONS(270),
    [aux_sym_tag_token1] = ACTIONS(270),
    [aux_sym_tag_token2] = ACTIONS(270),
    [anon_sym_Requires] = ACTIONS(270),
    [anon_sym_BuildArch] = ACTIONS(270),
    [anon_sym_BuildArchitectures] = ACTIONS(270),
    [anon_sym_BuildConflicts] = ACTIONS(270),
    [anon_sym_BuildPrereq] = ACTIONS(270),
    [anon_sym_BuildRequires] = ACTIONS(270),
    [anon_sym_Conflicts] = ACTIONS(270),
    [anon_sym_DocDir] = ACTIONS(270),
    [anon_sym_Enhances] = ACTIONS(270),
    [anon_sym_ExcludeArch] = ACTIONS(270),
    [anon_sym_ExcludeOS] = ACTIONS(270),
    [anon_sym_ExclusiveArch] = ACTIONS(270),
    [anon_sym_ExclusiveOS] = ACTIONS(270),
    [anon_sym_Obsoletes] = ACTIONS(270),
    [anon_sym_OrderWithRequires] = ACTIONS(270),
    [anon_sym_Prefix] = ACTIONS(270),
    [anon_sym_Prefixes] = ACTIONS(270),
    [anon_sym_Prereq] = ACTIONS(270),
    [anon_sym_Provides] = ACTIONS(270),
    [anon_sym_Recommends] = ACTIONS(270),
    [anon_sym_RemovePathPostfixes] = ACTIONS(270),
    [anon_sym_Suggests] = ACTIONS(270),
    [anon_sym_Supplements] = ACTIONS(270),
    [anon_sym_PERCENTdescription] = ACTIONS(270),
    [anon_sym_PERCENTpackage] = ACTIONS(270),
    [anon_sym_PERCENTprep] = ACTIONS(270),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(270),
    [anon_sym_PERCENTconf] = ACTIONS(270),
    [anon_sym_PERCENTbuild] = ACTIONS(270),
    [anon_sym_PERCENTinstall] = ACTIONS(270),
    [anon_sym_PERCENTcheck] = ACTIONS(270),
    [anon_sym_PERCENTclean] = ACTIONS(270),
    [anon_sym_PERCENTpre] = ACTIONS(270),
    [anon_sym_PERCENTpost] = ACTIONS(270),
    [anon_sym_PERCENTpreun] = ACTIONS(270),
    [anon_sym_PERCENTpostun] = ACTIONS(270),
    [anon_sym_PERCENTpretrans] = ACTIONS(270),
    [anon_sym_PERCENTposttrans] = ACTIONS(270),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(270),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(270),
    [anon_sym_PERCENTverify] = ACTIONS(270),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(270),
    [anon_sym_PERCENTtriggerin] = ACTIONS(270),
    [anon_sym_PERCENTtriggerun] = ACTIONS(270),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(270),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(270),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(270),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(270),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(270),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(270),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(270),
    [anon_sym_PERCENTfiles] = ACTIONS(270),
    [anon_sym_PERCENTdefattr] = ACTIONS(270),
    [anon_sym_PERCENTartifact] = ACTIONS(270),
    [anon_sym_PERCENTconfig] = ACTIONS(270),
    [anon_sym_PERCENTdir] = ACTIONS(270),
    [anon_sym_PERCENTdoc] = ACTIONS(270),
    [anon_sym_PERCENTdocdir] = ACTIONS(270),
    [anon_sym_PERCENTghost] = ACTIONS(270),
    [anon_sym_PERCENTlicense] = ACTIONS(270),
    [anon_sym_PERCENTmissingok] = ACTIONS(270),
    [anon_sym_PERCENTreadme] = ACTIONS(270),
    [anon_sym_PERCENTattr] = ACTIONS(270),
    [anon_sym_PERCENTchangelog] = ACTIONS(270),
    [anon_sym_PERCENTglobal] = ACTIONS(270),
    [anon_sym_PERCENTdefine] = ACTIONS(270),
    [anon_sym_PERCENTundefine] = ACTIONS(270),
    [anon_sym_PERCENT] = ACTIONS(270),
    [sym_string_content] = ACTIONS(270),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(270),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(270),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(272),
    [aux_sym__simple_statements_token1] = ACTIONS(274),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(274),
    [anon_sym_PERCENTifarch] = ACTIONS(274),
    [anon_sym_PERCENTifos] = ACTIONS(274),
    [anon_sym_PERCENTifnarch] = ACTIONS(274),
    [anon_sym_PERCENTifnos] = ACTIONS(274),
    [anon_sym_AutoProv] = ACTIONS(274),
    [anon_sym_AutoReq] = ACTIONS(274),
    [anon_sym_AutoReqProv] = ACTIONS(274),
    [anon_sym_BugUrl] = ACTIONS(274),
    [anon_sym_BuildRoot] = ACTIONS(274),
    [anon_sym_BuildSystem] = ACTIONS(274),
    [anon_sym_DistTag] = ACTIONS(274),
    [anon_sym_Distribution] = ACTIONS(274),
    [anon_sym_Epoch] = ACTIONS(274),
    [anon_sym_Group] = ACTIONS(274),
    [anon_sym_License] = ACTIONS(274),
    [anon_sym_ModularityLabel] = ACTIONS(274),
    [anon_sym_Name] = ACTIONS(274),
    [anon_sym_NoPatch] = ACTIONS(274),
    [anon_sym_NoSource] = ACTIONS(274),
    [anon_sym_Packager] = ACTIONS(274),
    [anon_sym_Release] = ACTIONS(274),
    [anon_sym_SourceLicense] = ACTIONS(274),
    [anon_sym_Summary] = ACTIONS(274),
    [anon_sym_URL] = ACTIONS(274),
    [anon_sym_Url] = ACTIONS(274),
    [anon_sym_VCS] = ACTIONS(274),
    [anon_sym_Vendor] = ACTIONS(274),
    [anon_sym_Version] = ACTIONS(274),
    [aux_sym_tag_token1] = ACTIONS(274),
    [aux_sym_tag_token2] = ACTIONS(274),
    [anon_sym_Requires] = ACTIONS(274),
    [anon_sym_BuildArch] = ACTIONS(274),
    [anon_sym_BuildArchitectures] = ACTIONS(274),
    [anon_sym_BuildConflicts] = ACTIONS(274),
    [anon_sym_BuildPrereq] = ACTIONS(274),
    [anon_sym_BuildRequires] = ACTIONS(274),
    [anon_sym_Conflicts] = ACTIONS(274),
    [anon_sym_DocDir] = ACTIONS(274),
    [anon_sym_Enhances] = ACTIONS(274),
    [anon_sym_ExcludeArch] = ACTIONS(274),
    [anon_sym_ExcludeOS] = ACTIONS(274),
    [anon_sym_ExclusiveArch] = ACTIONS(274),
    [anon_sym_ExclusiveOS] = ACTIONS(274),
    [anon_sym_Obsoletes] = ACTIONS(274),
    [anon_sym_OrderWithRequires] = ACTIONS(274),
    [anon_sym_Prefix] = ACTIONS(274),
    [anon_sym_Prefixes] = ACTIONS(274),
    [anon_sym_Prereq] = ACTIONS(274),
    [anon_sym_Provides] = ACTIONS(274),
    [anon_sym_Recommends] = ACTIONS(274),
    [anon_sym_RemovePathPostfixes] = ACTIONS(274),
    [anon_sym_Suggests] = ACTIONS(274),
    [anon_sym_Supplements] = ACTIONS(274),
    [anon_sym_PERCENTdescription] = ACTIONS(274),
    [anon_sym_PERCENTpackage] = ACTIONS(274),
    [anon_sym_PERCENTprep] = ACTIONS(274),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(274),
    [anon_sym_PERCENTconf] = ACTIONS(274),
    [anon_sym_PERCENTbuild] = ACTIONS(274),
    [anon_sym_PERCENTinstall] = ACTIONS(274),
    [anon_sym_PERCENTcheck] = ACTIONS(274),
    [anon_sym_PERCENTclean] = ACTIONS(274),
    [anon_sym_PERCENTpre] = ACTIONS(274),
    [anon_sym_PERCENTpost] = ACTIONS(274),
    [anon_sym_PERCENTpreun] = ACTIONS(274),
    [anon_sym_PERCENTpostun] = ACTIONS(274),
    [anon_sym_PERCENTpretrans] = ACTIONS(274),
    [anon_sym_PERCENTposttrans] = ACTIONS(274),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(274),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(274),
    [anon_sym_PERCENTverify] = ACTIONS(274),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(274),
    [anon_sym_PERCENTtriggerin] = ACTIONS(274),
    [anon_sym_PERCENTtriggerun] = ACTIONS(274),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(274),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(274),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(274),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(274),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(274),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(274),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(274),
    [anon_sym_PERCENTfiles] = ACTIONS(274),
    [anon_sym_PERCENTdefattr] = ACTIONS(274),
    [anon_sym_PERCENTartifact] = ACTIONS(274),
    [anon_sym_PERCENTconfig] = ACTIONS(274),
    [anon_sym_PERCENTdir] = ACTIONS(274),
    [anon_sym_PERCENTdoc] = ACTIONS(274),
    [anon_sym_PERCENTdocdir] = ACTIONS(274),
    [anon_sym_PERCENTghost] = ACTIONS(274),
    [anon_sym_PERCENTlicense] = ACTIONS(274),
    [anon_sym_PERCENTmissingok] = ACTIONS(274),
    [anon_sym_PERCENTreadme] = ACTIONS(274),
    [anon_sym_PERCENTattr] = ACTIONS(274),
    [anon_sym_PERCENTchangelog] = ACTIONS(274),
    [anon_sym_PERCENTglobal] = ACTIONS(274),
    [anon_sym_PERCENTdefine] = ACTIONS(274),
    [anon_sym_PERCENTundefine] = ACTIONS(274),
    [anon_sym_PERCENT] = ACTIONS(274),
    [sym_string_content] = ACTIONS(274),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(274),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(274),
  },
  [19] = {
    [sym_string_with_newlines] = STATE(62),
    [sym__macro_expansion] = STATE(23),
    [sym_simple_expansion] = STATE(23),
    [sym_full_expansion] = STATE(23),
    [sym_shell_expansion] = STATE(23),
    [aux_sym_string_with_newlines_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(276),
    [aux_sym__simple_statements_token1] = ACTIONS(278),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(278),
    [anon_sym_PERCENTifarch] = ACTIONS(278),
    [anon_sym_PERCENTifos] = ACTIONS(278),
    [anon_sym_PERCENTifnarch] = ACTIONS(278),
    [anon_sym_PERCENTifnos] = ACTIONS(278),
    [anon_sym_AutoProv] = ACTIONS(278),
    [anon_sym_AutoReq] = ACTIONS(278),
    [anon_sym_AutoReqProv] = ACTIONS(278),
    [anon_sym_BugUrl] = ACTIONS(278),
    [anon_sym_BuildRoot] = ACTIONS(278),
    [anon_sym_BuildSystem] = ACTIONS(278),
    [anon_sym_DistTag] = ACTIONS(278),
    [anon_sym_Distribution] = ACTIONS(278),
    [anon_sym_Epoch] = ACTIONS(278),
    [anon_sym_Group] = ACTIONS(278),
    [anon_sym_License] = ACTIONS(278),
    [anon_sym_ModularityLabel] = ACTIONS(278),
    [anon_sym_Name] = ACTIONS(278),
    [anon_sym_NoPatch] = ACTIONS(278),
    [anon_sym_NoSource] = ACTIONS(278),
    [anon_sym_Packager] = ACTIONS(278),
    [anon_sym_Release] = ACTIONS(278),
    [anon_sym_SourceLicense] = ACTIONS(278),
    [anon_sym_Summary] = ACTIONS(278),
    [anon_sym_URL] = ACTIONS(278),
    [anon_sym_Url] = ACTIONS(278),
    [anon_sym_VCS] = ACTIONS(278),
    [anon_sym_Vendor] = ACTIONS(278),
    [anon_sym_Version] = ACTIONS(278),
    [aux_sym_tag_token1] = ACTIONS(278),
    [aux_sym_tag_token2] = ACTIONS(278),
    [anon_sym_Requires] = ACTIONS(278),
    [anon_sym_BuildArch] = ACTIONS(278),
    [anon_sym_BuildArchitectures] = ACTIONS(278),
    [anon_sym_BuildConflicts] = ACTIONS(278),
    [anon_sym_BuildPrereq] = ACTIONS(278),
    [anon_sym_BuildRequires] = ACTIONS(278),
    [anon_sym_Conflicts] = ACTIONS(278),
    [anon_sym_DocDir] = ACTIONS(278),
    [anon_sym_Enhances] = ACTIONS(278),
    [anon_sym_ExcludeArch] = ACTIONS(278),
    [anon_sym_ExcludeOS] = ACTIONS(278),
    [anon_sym_ExclusiveArch] = ACTIONS(278),
    [anon_sym_ExclusiveOS] = ACTIONS(278),
    [anon_sym_Obsoletes] = ACTIONS(278),
    [anon_sym_OrderWithRequires] = ACTIONS(278),
    [anon_sym_Prefix] = ACTIONS(278),
    [anon_sym_Prefixes] = ACTIONS(278),
    [anon_sym_Prereq] = ACTIONS(278),
    [anon_sym_Provides] = ACTIONS(278),
    [anon_sym_Recommends] = ACTIONS(278),
    [anon_sym_RemovePathPostfixes] = ACTIONS(278),
    [anon_sym_Suggests] = ACTIONS(278),
    [anon_sym_Supplements] = ACTIONS(278),
    [anon_sym_PERCENTdescription] = ACTIONS(278),
    [anon_sym_PERCENTpackage] = ACTIONS(278),
    [anon_sym_PERCENTprep] = ACTIONS(278),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(278),
    [anon_sym_PERCENTconf] = ACTIONS(278),
    [anon_sym_PERCENTbuild] = ACTIONS(278),
    [anon_sym_PERCENTinstall] = ACTIONS(278),
    [anon_sym_PERCENTcheck] = ACTIONS(278),
    [anon_sym_PERCENTclean] = ACTIONS(278),
    [anon_sym_PERCENTpre] = ACTIONS(278),
    [anon_sym_PERCENTpost] = ACTIONS(278),
    [anon_sym_PERCENTpreun] = ACTIONS(278),
    [anon_sym_PERCENTpostun] = ACTIONS(278),
    [anon_sym_PERCENTpretrans] = ACTIONS(278),
    [anon_sym_PERCENTposttrans] = ACTIONS(278),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(278),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(278),
    [anon_sym_PERCENTverify] = ACTIONS(278),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(278),
    [anon_sym_PERCENTtriggerin] = ACTIONS(278),
    [anon_sym_PERCENTtriggerun] = ACTIONS(278),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(278),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(278),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(278),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(278),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(278),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(278),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(278),
    [anon_sym_PERCENTfiles] = ACTIONS(278),
    [anon_sym_PERCENTchangelog] = ACTIONS(278),
    [anon_sym_PERCENTglobal] = ACTIONS(278),
    [anon_sym_PERCENTdefine] = ACTIONS(278),
    [anon_sym_PERCENTundefine] = ACTIONS(278),
    [anon_sym_PERCENT] = ACTIONS(280),
    [sym_string_content_with_newlines] = ACTIONS(282),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(284),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(286),
  },
  [20] = {
    [sym_string_with_newlines] = STATE(66),
    [sym__macro_expansion] = STATE(23),
    [sym_simple_expansion] = STATE(23),
    [sym_full_expansion] = STATE(23),
    [sym_shell_expansion] = STATE(23),
    [aux_sym_string_with_newlines_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(288),
    [aux_sym__simple_statements_token1] = ACTIONS(290),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(290),
    [anon_sym_PERCENTifarch] = ACTIONS(290),
    [anon_sym_PERCENTifos] = ACTIONS(290),
    [anon_sym_PERCENTifnarch] = ACTIONS(290),
    [anon_sym_PERCENTifnos] = ACTIONS(290),
    [anon_sym_AutoProv] = ACTIONS(290),
    [anon_sym_AutoReq] = ACTIONS(290),
    [anon_sym_AutoReqProv] = ACTIONS(290),
    [anon_sym_BugUrl] = ACTIONS(290),
    [anon_sym_BuildRoot] = ACTIONS(290),
    [anon_sym_BuildSystem] = ACTIONS(290),
    [anon_sym_DistTag] = ACTIONS(290),
    [anon_sym_Distribution] = ACTIONS(290),
    [anon_sym_Epoch] = ACTIONS(290),
    [anon_sym_Group] = ACTIONS(290),
    [anon_sym_License] = ACTIONS(290),
    [anon_sym_ModularityLabel] = ACTIONS(290),
    [anon_sym_Name] = ACTIONS(290),
    [anon_sym_NoPatch] = ACTIONS(290),
    [anon_sym_NoSource] = ACTIONS(290),
    [anon_sym_Packager] = ACTIONS(290),
    [anon_sym_Release] = ACTIONS(290),
    [anon_sym_SourceLicense] = ACTIONS(290),
    [anon_sym_Summary] = ACTIONS(290),
    [anon_sym_URL] = ACTIONS(290),
    [anon_sym_Url] = ACTIONS(290),
    [anon_sym_VCS] = ACTIONS(290),
    [anon_sym_Vendor] = ACTIONS(290),
    [anon_sym_Version] = ACTIONS(290),
    [aux_sym_tag_token1] = ACTIONS(290),
    [aux_sym_tag_token2] = ACTIONS(290),
    [anon_sym_Requires] = ACTIONS(290),
    [anon_sym_BuildArch] = ACTIONS(290),
    [anon_sym_BuildArchitectures] = ACTIONS(290),
    [anon_sym_BuildConflicts] = ACTIONS(290),
    [anon_sym_BuildPrereq] = ACTIONS(290),
    [anon_sym_BuildRequires] = ACTIONS(290),
    [anon_sym_Conflicts] = ACTIONS(290),
    [anon_sym_DocDir] = ACTIONS(290),
    [anon_sym_Enhances] = ACTIONS(290),
    [anon_sym_ExcludeArch] = ACTIONS(290),
    [anon_sym_ExcludeOS] = ACTIONS(290),
    [anon_sym_ExclusiveArch] = ACTIONS(290),
    [anon_sym_ExclusiveOS] = ACTIONS(290),
    [anon_sym_Obsoletes] = ACTIONS(290),
    [anon_sym_OrderWithRequires] = ACTIONS(290),
    [anon_sym_Prefix] = ACTIONS(290),
    [anon_sym_Prefixes] = ACTIONS(290),
    [anon_sym_Prereq] = ACTIONS(290),
    [anon_sym_Provides] = ACTIONS(290),
    [anon_sym_Recommends] = ACTIONS(290),
    [anon_sym_RemovePathPostfixes] = ACTIONS(290),
    [anon_sym_Suggests] = ACTIONS(290),
    [anon_sym_Supplements] = ACTIONS(290),
    [anon_sym_PERCENTdescription] = ACTIONS(290),
    [anon_sym_PERCENTpackage] = ACTIONS(290),
    [anon_sym_PERCENTprep] = ACTIONS(290),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(290),
    [anon_sym_PERCENTconf] = ACTIONS(290),
    [anon_sym_PERCENTbuild] = ACTIONS(290),
    [anon_sym_PERCENTinstall] = ACTIONS(290),
    [anon_sym_PERCENTcheck] = ACTIONS(290),
    [anon_sym_PERCENTclean] = ACTIONS(290),
    [anon_sym_PERCENTpre] = ACTIONS(290),
    [anon_sym_PERCENTpost] = ACTIONS(290),
    [anon_sym_PERCENTpreun] = ACTIONS(290),
    [anon_sym_PERCENTpostun] = ACTIONS(290),
    [anon_sym_PERCENTpretrans] = ACTIONS(290),
    [anon_sym_PERCENTposttrans] = ACTIONS(290),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(290),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(290),
    [anon_sym_PERCENTverify] = ACTIONS(290),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(290),
    [anon_sym_PERCENTtriggerin] = ACTIONS(290),
    [anon_sym_PERCENTtriggerun] = ACTIONS(290),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(290),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(290),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(290),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(290),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(290),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(290),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(290),
    [anon_sym_PERCENTfiles] = ACTIONS(290),
    [anon_sym_PERCENTchangelog] = ACTIONS(290),
    [anon_sym_PERCENTglobal] = ACTIONS(290),
    [anon_sym_PERCENTdefine] = ACTIONS(290),
    [anon_sym_PERCENTundefine] = ACTIONS(290),
    [anon_sym_PERCENT] = ACTIONS(280),
    [sym_string_content_with_newlines] = ACTIONS(282),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(284),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(286),
  },
  [21] = {
    [sym_string_with_newlines] = STATE(65),
    [sym__macro_expansion] = STATE(23),
    [sym_simple_expansion] = STATE(23),
    [sym_full_expansion] = STATE(23),
    [sym_shell_expansion] = STATE(23),
    [aux_sym_string_with_newlines_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(292),
    [aux_sym__simple_statements_token1] = ACTIONS(294),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(294),
    [anon_sym_PERCENTifarch] = ACTIONS(294),
    [anon_sym_PERCENTifos] = ACTIONS(294),
    [anon_sym_PERCENTifnarch] = ACTIONS(294),
    [anon_sym_PERCENTifnos] = ACTIONS(294),
    [anon_sym_AutoProv] = ACTIONS(294),
    [anon_sym_AutoReq] = ACTIONS(294),
    [anon_sym_AutoReqProv] = ACTIONS(294),
    [anon_sym_BugUrl] = ACTIONS(294),
    [anon_sym_BuildRoot] = ACTIONS(294),
    [anon_sym_BuildSystem] = ACTIONS(294),
    [anon_sym_DistTag] = ACTIONS(294),
    [anon_sym_Distribution] = ACTIONS(294),
    [anon_sym_Epoch] = ACTIONS(294),
    [anon_sym_Group] = ACTIONS(294),
    [anon_sym_License] = ACTIONS(294),
    [anon_sym_ModularityLabel] = ACTIONS(294),
    [anon_sym_Name] = ACTIONS(294),
    [anon_sym_NoPatch] = ACTIONS(294),
    [anon_sym_NoSource] = ACTIONS(294),
    [anon_sym_Packager] = ACTIONS(294),
    [anon_sym_Release] = ACTIONS(294),
    [anon_sym_SourceLicense] = ACTIONS(294),
    [anon_sym_Summary] = ACTIONS(294),
    [anon_sym_URL] = ACTIONS(294),
    [anon_sym_Url] = ACTIONS(294),
    [anon_sym_VCS] = ACTIONS(294),
    [anon_sym_Vendor] = ACTIONS(294),
    [anon_sym_Version] = ACTIONS(294),
    [aux_sym_tag_token1] = ACTIONS(294),
    [aux_sym_tag_token2] = ACTIONS(294),
    [anon_sym_Requires] = ACTIONS(294),
    [anon_sym_BuildArch] = ACTIONS(294),
    [anon_sym_BuildArchitectures] = ACTIONS(294),
    [anon_sym_BuildConflicts] = ACTIONS(294),
    [anon_sym_BuildPrereq] = ACTIONS(294),
    [anon_sym_BuildRequires] = ACTIONS(294),
    [anon_sym_Conflicts] = ACTIONS(294),
    [anon_sym_DocDir] = ACTIONS(294),
    [anon_sym_Enhances] = ACTIONS(294),
    [anon_sym_ExcludeArch] = ACTIONS(294),
    [anon_sym_ExcludeOS] = ACTIONS(294),
    [anon_sym_ExclusiveArch] = ACTIONS(294),
    [anon_sym_ExclusiveOS] = ACTIONS(294),
    [anon_sym_Obsoletes] = ACTIONS(294),
    [anon_sym_OrderWithRequires] = ACTIONS(294),
    [anon_sym_Prefix] = ACTIONS(294),
    [anon_sym_Prefixes] = ACTIONS(294),
    [anon_sym_Prereq] = ACTIONS(294),
    [anon_sym_Provides] = ACTIONS(294),
    [anon_sym_Recommends] = ACTIONS(294),
    [anon_sym_RemovePathPostfixes] = ACTIONS(294),
    [anon_sym_Suggests] = ACTIONS(294),
    [anon_sym_Supplements] = ACTIONS(294),
    [anon_sym_PERCENTdescription] = ACTIONS(294),
    [anon_sym_PERCENTpackage] = ACTIONS(294),
    [anon_sym_PERCENTprep] = ACTIONS(294),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(294),
    [anon_sym_PERCENTconf] = ACTIONS(294),
    [anon_sym_PERCENTbuild] = ACTIONS(294),
    [anon_sym_PERCENTinstall] = ACTIONS(294),
    [anon_sym_PERCENTcheck] = ACTIONS(294),
    [anon_sym_PERCENTclean] = ACTIONS(294),
    [anon_sym_PERCENTpre] = ACTIONS(294),
    [anon_sym_PERCENTpost] = ACTIONS(294),
    [anon_sym_PERCENTpreun] = ACTIONS(294),
    [anon_sym_PERCENTpostun] = ACTIONS(294),
    [anon_sym_PERCENTpretrans] = ACTIONS(294),
    [anon_sym_PERCENTposttrans] = ACTIONS(294),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(294),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(294),
    [anon_sym_PERCENTverify] = ACTIONS(294),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(294),
    [anon_sym_PERCENTtriggerin] = ACTIONS(294),
    [anon_sym_PERCENTtriggerun] = ACTIONS(294),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(294),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(294),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(294),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(294),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(294),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(294),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(294),
    [anon_sym_PERCENTfiles] = ACTIONS(294),
    [anon_sym_PERCENTchangelog] = ACTIONS(294),
    [anon_sym_PERCENTglobal] = ACTIONS(294),
    [anon_sym_PERCENTdefine] = ACTIONS(294),
    [anon_sym_PERCENTundefine] = ACTIONS(294),
    [anon_sym_PERCENT] = ACTIONS(280),
    [sym_string_content_with_newlines] = ACTIONS(282),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(284),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(286),
  },
  [22] = {
    [sym_string_with_newlines] = STATE(39),
    [sym__macro_expansion] = STATE(23),
    [sym_simple_expansion] = STATE(23),
    [sym_full_expansion] = STATE(23),
    [sym_shell_expansion] = STATE(23),
    [aux_sym_string_with_newlines_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(296),
    [aux_sym__simple_statements_token1] = ACTIONS(298),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(298),
    [anon_sym_PERCENTifarch] = ACTIONS(298),
    [anon_sym_PERCENTifos] = ACTIONS(298),
    [anon_sym_PERCENTifnarch] = ACTIONS(298),
    [anon_sym_PERCENTifnos] = ACTIONS(298),
    [anon_sym_AutoProv] = ACTIONS(298),
    [anon_sym_AutoReq] = ACTIONS(298),
    [anon_sym_AutoReqProv] = ACTIONS(298),
    [anon_sym_BugUrl] = ACTIONS(298),
    [anon_sym_BuildRoot] = ACTIONS(298),
    [anon_sym_BuildSystem] = ACTIONS(298),
    [anon_sym_DistTag] = ACTIONS(298),
    [anon_sym_Distribution] = ACTIONS(298),
    [anon_sym_Epoch] = ACTIONS(298),
    [anon_sym_Group] = ACTIONS(298),
    [anon_sym_License] = ACTIONS(298),
    [anon_sym_ModularityLabel] = ACTIONS(298),
    [anon_sym_Name] = ACTIONS(298),
    [anon_sym_NoPatch] = ACTIONS(298),
    [anon_sym_NoSource] = ACTIONS(298),
    [anon_sym_Packager] = ACTIONS(298),
    [anon_sym_Release] = ACTIONS(298),
    [anon_sym_SourceLicense] = ACTIONS(298),
    [anon_sym_Summary] = ACTIONS(298),
    [anon_sym_URL] = ACTIONS(298),
    [anon_sym_Url] = ACTIONS(298),
    [anon_sym_VCS] = ACTIONS(298),
    [anon_sym_Vendor] = ACTIONS(298),
    [anon_sym_Version] = ACTIONS(298),
    [aux_sym_tag_token1] = ACTIONS(298),
    [aux_sym_tag_token2] = ACTIONS(298),
    [anon_sym_Requires] = ACTIONS(298),
    [anon_sym_BuildArch] = ACTIONS(298),
    [anon_sym_BuildArchitectures] = ACTIONS(298),
    [anon_sym_BuildConflicts] = ACTIONS(298),
    [anon_sym_BuildPrereq] = ACTIONS(298),
    [anon_sym_BuildRequires] = ACTIONS(298),
    [anon_sym_Conflicts] = ACTIONS(298),
    [anon_sym_DocDir] = ACTIONS(298),
    [anon_sym_Enhances] = ACTIONS(298),
    [anon_sym_ExcludeArch] = ACTIONS(298),
    [anon_sym_ExcludeOS] = ACTIONS(298),
    [anon_sym_ExclusiveArch] = ACTIONS(298),
    [anon_sym_ExclusiveOS] = ACTIONS(298),
    [anon_sym_Obsoletes] = ACTIONS(298),
    [anon_sym_OrderWithRequires] = ACTIONS(298),
    [anon_sym_Prefix] = ACTIONS(298),
    [anon_sym_Prefixes] = ACTIONS(298),
    [anon_sym_Prereq] = ACTIONS(298),
    [anon_sym_Provides] = ACTIONS(298),
    [anon_sym_Recommends] = ACTIONS(298),
    [anon_sym_RemovePathPostfixes] = ACTIONS(298),
    [anon_sym_Suggests] = ACTIONS(298),
    [anon_sym_Supplements] = ACTIONS(298),
    [anon_sym_PERCENTdescription] = ACTIONS(298),
    [anon_sym_PERCENTpackage] = ACTIONS(298),
    [anon_sym_PERCENTprep] = ACTIONS(298),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(298),
    [anon_sym_PERCENTconf] = ACTIONS(298),
    [anon_sym_PERCENTbuild] = ACTIONS(298),
    [anon_sym_PERCENTinstall] = ACTIONS(298),
    [anon_sym_PERCENTcheck] = ACTIONS(298),
    [anon_sym_PERCENTclean] = ACTIONS(298),
    [anon_sym_PERCENTpre] = ACTIONS(298),
    [anon_sym_PERCENTpost] = ACTIONS(298),
    [anon_sym_PERCENTpreun] = ACTIONS(298),
    [anon_sym_PERCENTpostun] = ACTIONS(298),
    [anon_sym_PERCENTpretrans] = ACTIONS(298),
    [anon_sym_PERCENTposttrans] = ACTIONS(298),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(298),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(298),
    [anon_sym_PERCENTverify] = ACTIONS(298),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(298),
    [anon_sym_PERCENTtriggerin] = ACTIONS(298),
    [anon_sym_PERCENTtriggerun] = ACTIONS(298),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(298),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(298),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(298),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(298),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(298),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(298),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(298),
    [anon_sym_PERCENTfiles] = ACTIONS(298),
    [anon_sym_PERCENTchangelog] = ACTIONS(298),
    [anon_sym_PERCENTglobal] = ACTIONS(298),
    [anon_sym_PERCENTdefine] = ACTIONS(298),
    [anon_sym_PERCENTundefine] = ACTIONS(298),
    [anon_sym_PERCENT] = ACTIONS(280),
    [sym_string_content_with_newlines] = ACTIONS(282),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(284),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(286),
  },
  [23] = {
    [sym__macro_expansion] = STATE(24),
    [sym_simple_expansion] = STATE(24),
    [sym_full_expansion] = STATE(24),
    [sym_shell_expansion] = STATE(24),
    [aux_sym_string_with_newlines_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(300),
    [aux_sym__simple_statements_token1] = ACTIONS(302),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(302),
    [anon_sym_PERCENTifarch] = ACTIONS(302),
    [anon_sym_PERCENTifos] = ACTIONS(302),
    [anon_sym_PERCENTifnarch] = ACTIONS(302),
    [anon_sym_PERCENTifnos] = ACTIONS(302),
    [anon_sym_AutoProv] = ACTIONS(302),
    [anon_sym_AutoReq] = ACTIONS(302),
    [anon_sym_AutoReqProv] = ACTIONS(302),
    [anon_sym_BugUrl] = ACTIONS(302),
    [anon_sym_BuildRoot] = ACTIONS(302),
    [anon_sym_BuildSystem] = ACTIONS(302),
    [anon_sym_DistTag] = ACTIONS(302),
    [anon_sym_Distribution] = ACTIONS(302),
    [anon_sym_Epoch] = ACTIONS(302),
    [anon_sym_Group] = ACTIONS(302),
    [anon_sym_License] = ACTIONS(302),
    [anon_sym_ModularityLabel] = ACTIONS(302),
    [anon_sym_Name] = ACTIONS(302),
    [anon_sym_NoPatch] = ACTIONS(302),
    [anon_sym_NoSource] = ACTIONS(302),
    [anon_sym_Packager] = ACTIONS(302),
    [anon_sym_Release] = ACTIONS(302),
    [anon_sym_SourceLicense] = ACTIONS(302),
    [anon_sym_Summary] = ACTIONS(302),
    [anon_sym_URL] = ACTIONS(302),
    [anon_sym_Url] = ACTIONS(302),
    [anon_sym_VCS] = ACTIONS(302),
    [anon_sym_Vendor] = ACTIONS(302),
    [anon_sym_Version] = ACTIONS(302),
    [aux_sym_tag_token1] = ACTIONS(302),
    [aux_sym_tag_token2] = ACTIONS(302),
    [anon_sym_Requires] = ACTIONS(302),
    [anon_sym_BuildArch] = ACTIONS(302),
    [anon_sym_BuildArchitectures] = ACTIONS(302),
    [anon_sym_BuildConflicts] = ACTIONS(302),
    [anon_sym_BuildPrereq] = ACTIONS(302),
    [anon_sym_BuildRequires] = ACTIONS(302),
    [anon_sym_Conflicts] = ACTIONS(302),
    [anon_sym_DocDir] = ACTIONS(302),
    [anon_sym_Enhances] = ACTIONS(302),
    [anon_sym_ExcludeArch] = ACTIONS(302),
    [anon_sym_ExcludeOS] = ACTIONS(302),
    [anon_sym_ExclusiveArch] = ACTIONS(302),
    [anon_sym_ExclusiveOS] = ACTIONS(302),
    [anon_sym_Obsoletes] = ACTIONS(302),
    [anon_sym_OrderWithRequires] = ACTIONS(302),
    [anon_sym_Prefix] = ACTIONS(302),
    [anon_sym_Prefixes] = ACTIONS(302),
    [anon_sym_Prereq] = ACTIONS(302),
    [anon_sym_Provides] = ACTIONS(302),
    [anon_sym_Recommends] = ACTIONS(302),
    [anon_sym_RemovePathPostfixes] = ACTIONS(302),
    [anon_sym_Suggests] = ACTIONS(302),
    [anon_sym_Supplements] = ACTIONS(302),
    [anon_sym_PERCENTdescription] = ACTIONS(302),
    [anon_sym_PERCENTpackage] = ACTIONS(302),
    [anon_sym_PERCENTprep] = ACTIONS(302),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(302),
    [anon_sym_PERCENTconf] = ACTIONS(302),
    [anon_sym_PERCENTbuild] = ACTIONS(302),
    [anon_sym_PERCENTinstall] = ACTIONS(302),
    [anon_sym_PERCENTcheck] = ACTIONS(302),
    [anon_sym_PERCENTclean] = ACTIONS(302),
    [anon_sym_PERCENTpre] = ACTIONS(302),
    [anon_sym_PERCENTpost] = ACTIONS(302),
    [anon_sym_PERCENTpreun] = ACTIONS(302),
    [anon_sym_PERCENTpostun] = ACTIONS(302),
    [anon_sym_PERCENTpretrans] = ACTIONS(302),
    [anon_sym_PERCENTposttrans] = ACTIONS(302),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(302),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(302),
    [anon_sym_PERCENTverify] = ACTIONS(302),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(302),
    [anon_sym_PERCENTtriggerin] = ACTIONS(302),
    [anon_sym_PERCENTtriggerun] = ACTIONS(302),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(302),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(302),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(302),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(302),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(302),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(302),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(302),
    [anon_sym_PERCENTfiles] = ACTIONS(302),
    [anon_sym_PERCENTchangelog] = ACTIONS(302),
    [anon_sym_PERCENTglobal] = ACTIONS(302),
    [anon_sym_PERCENTdefine] = ACTIONS(302),
    [anon_sym_PERCENTundefine] = ACTIONS(302),
    [anon_sym_PERCENT] = ACTIONS(280),
    [sym_string_content_with_newlines] = ACTIONS(304),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(284),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(286),
  },
  [24] = {
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
    [anon_sym_PERCENT] = ACTIONS(310),
    [sym_string_content_with_newlines] = ACTIONS(313),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(316),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(319),
  },
  [25] = {
    [sym_changelog_entry] = STATE(25),
    [aux_sym_changelog_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(322),
    [aux_sym__simple_statements_token1] = ACTIONS(322),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(324),
    [anon_sym_PERCENTifarch] = ACTIONS(324),
    [anon_sym_PERCENTifos] = ACTIONS(324),
    [anon_sym_PERCENTifnarch] = ACTIONS(324),
    [anon_sym_PERCENTifnos] = ACTIONS(324),
    [anon_sym_AutoProv] = ACTIONS(324),
    [anon_sym_AutoReq] = ACTIONS(324),
    [anon_sym_AutoReqProv] = ACTIONS(324),
    [anon_sym_BugUrl] = ACTIONS(324),
    [anon_sym_BuildRoot] = ACTIONS(324),
    [anon_sym_BuildSystem] = ACTIONS(324),
    [anon_sym_DistTag] = ACTIONS(324),
    [anon_sym_Distribution] = ACTIONS(324),
    [anon_sym_Epoch] = ACTIONS(324),
    [anon_sym_Group] = ACTIONS(324),
    [anon_sym_License] = ACTIONS(324),
    [anon_sym_ModularityLabel] = ACTIONS(324),
    [anon_sym_Name] = ACTIONS(324),
    [anon_sym_NoPatch] = ACTIONS(324),
    [anon_sym_NoSource] = ACTIONS(324),
    [anon_sym_Packager] = ACTIONS(324),
    [anon_sym_Release] = ACTIONS(324),
    [anon_sym_SourceLicense] = ACTIONS(324),
    [anon_sym_Summary] = ACTIONS(324),
    [anon_sym_URL] = ACTIONS(324),
    [anon_sym_Url] = ACTIONS(324),
    [anon_sym_VCS] = ACTIONS(324),
    [anon_sym_Vendor] = ACTIONS(324),
    [anon_sym_Version] = ACTIONS(324),
    [aux_sym_tag_token1] = ACTIONS(324),
    [aux_sym_tag_token2] = ACTIONS(324),
    [anon_sym_Requires] = ACTIONS(324),
    [anon_sym_BuildArch] = ACTIONS(324),
    [anon_sym_BuildArchitectures] = ACTIONS(324),
    [anon_sym_BuildConflicts] = ACTIONS(324),
    [anon_sym_BuildPrereq] = ACTIONS(324),
    [anon_sym_BuildRequires] = ACTIONS(324),
    [anon_sym_Conflicts] = ACTIONS(324),
    [anon_sym_DocDir] = ACTIONS(324),
    [anon_sym_Enhances] = ACTIONS(324),
    [anon_sym_ExcludeArch] = ACTIONS(324),
    [anon_sym_ExcludeOS] = ACTIONS(324),
    [anon_sym_ExclusiveArch] = ACTIONS(324),
    [anon_sym_ExclusiveOS] = ACTIONS(324),
    [anon_sym_Obsoletes] = ACTIONS(324),
    [anon_sym_OrderWithRequires] = ACTIONS(324),
    [anon_sym_Prefix] = ACTIONS(324),
    [anon_sym_Prefixes] = ACTIONS(324),
    [anon_sym_Prereq] = ACTIONS(324),
    [anon_sym_Provides] = ACTIONS(324),
    [anon_sym_Recommends] = ACTIONS(324),
    [anon_sym_RemovePathPostfixes] = ACTIONS(324),
    [anon_sym_Suggests] = ACTIONS(324),
    [anon_sym_Supplements] = ACTIONS(324),
    [anon_sym_PERCENTdescription] = ACTIONS(324),
    [anon_sym_PERCENTpackage] = ACTIONS(324),
    [anon_sym_PERCENTprep] = ACTIONS(324),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(324),
    [anon_sym_PERCENTconf] = ACTIONS(324),
    [anon_sym_PERCENTbuild] = ACTIONS(324),
    [anon_sym_PERCENTinstall] = ACTIONS(324),
    [anon_sym_PERCENTcheck] = ACTIONS(324),
    [anon_sym_PERCENTclean] = ACTIONS(324),
    [anon_sym_PERCENTpre] = ACTIONS(324),
    [anon_sym_PERCENTpost] = ACTIONS(324),
    [anon_sym_PERCENTpreun] = ACTIONS(324),
    [anon_sym_PERCENTpostun] = ACTIONS(324),
    [anon_sym_PERCENTpretrans] = ACTIONS(324),
    [anon_sym_PERCENTposttrans] = ACTIONS(324),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(324),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(324),
    [anon_sym_PERCENTverify] = ACTIONS(324),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(324),
    [anon_sym_PERCENTtriggerin] = ACTIONS(324),
    [anon_sym_PERCENTtriggerun] = ACTIONS(324),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(324),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(324),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(324),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(324),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(324),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(324),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(324),
    [anon_sym_PERCENTfiles] = ACTIONS(324),
    [anon_sym_PERCENTchangelog] = ACTIONS(324),
    [anon_sym_STAR] = ACTIONS(326),
    [anon_sym_PERCENTglobal] = ACTIONS(324),
    [anon_sym_PERCENTdefine] = ACTIONS(324),
    [anon_sym_PERCENTundefine] = ACTIONS(324),
    [anon_sym_PERCENT] = ACTIONS(324),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(324),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(324),
  },
  [26] = {
    [sym_changelog_entry] = STATE(29),
    [aux_sym_changelog_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(329),
    [aux_sym__simple_statements_token1] = ACTIONS(329),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(331),
    [anon_sym_PERCENTifarch] = ACTIONS(331),
    [anon_sym_PERCENTifos] = ACTIONS(331),
    [anon_sym_PERCENTifnarch] = ACTIONS(331),
    [anon_sym_PERCENTifnos] = ACTIONS(331),
    [anon_sym_AutoProv] = ACTIONS(331),
    [anon_sym_AutoReq] = ACTIONS(331),
    [anon_sym_AutoReqProv] = ACTIONS(331),
    [anon_sym_BugUrl] = ACTIONS(331),
    [anon_sym_BuildRoot] = ACTIONS(331),
    [anon_sym_BuildSystem] = ACTIONS(331),
    [anon_sym_DistTag] = ACTIONS(331),
    [anon_sym_Distribution] = ACTIONS(331),
    [anon_sym_Epoch] = ACTIONS(331),
    [anon_sym_Group] = ACTIONS(331),
    [anon_sym_License] = ACTIONS(331),
    [anon_sym_ModularityLabel] = ACTIONS(331),
    [anon_sym_Name] = ACTIONS(331),
    [anon_sym_NoPatch] = ACTIONS(331),
    [anon_sym_NoSource] = ACTIONS(331),
    [anon_sym_Packager] = ACTIONS(331),
    [anon_sym_Release] = ACTIONS(331),
    [anon_sym_SourceLicense] = ACTIONS(331),
    [anon_sym_Summary] = ACTIONS(331),
    [anon_sym_URL] = ACTIONS(331),
    [anon_sym_Url] = ACTIONS(331),
    [anon_sym_VCS] = ACTIONS(331),
    [anon_sym_Vendor] = ACTIONS(331),
    [anon_sym_Version] = ACTIONS(331),
    [aux_sym_tag_token1] = ACTIONS(331),
    [aux_sym_tag_token2] = ACTIONS(331),
    [anon_sym_Requires] = ACTIONS(331),
    [anon_sym_BuildArch] = ACTIONS(331),
    [anon_sym_BuildArchitectures] = ACTIONS(331),
    [anon_sym_BuildConflicts] = ACTIONS(331),
    [anon_sym_BuildPrereq] = ACTIONS(331),
    [anon_sym_BuildRequires] = ACTIONS(331),
    [anon_sym_Conflicts] = ACTIONS(331),
    [anon_sym_DocDir] = ACTIONS(331),
    [anon_sym_Enhances] = ACTIONS(331),
    [anon_sym_ExcludeArch] = ACTIONS(331),
    [anon_sym_ExcludeOS] = ACTIONS(331),
    [anon_sym_ExclusiveArch] = ACTIONS(331),
    [anon_sym_ExclusiveOS] = ACTIONS(331),
    [anon_sym_Obsoletes] = ACTIONS(331),
    [anon_sym_OrderWithRequires] = ACTIONS(331),
    [anon_sym_Prefix] = ACTIONS(331),
    [anon_sym_Prefixes] = ACTIONS(331),
    [anon_sym_Prereq] = ACTIONS(331),
    [anon_sym_Provides] = ACTIONS(331),
    [anon_sym_Recommends] = ACTIONS(331),
    [anon_sym_RemovePathPostfixes] = ACTIONS(331),
    [anon_sym_Suggests] = ACTIONS(331),
    [anon_sym_Supplements] = ACTIONS(331),
    [anon_sym_PERCENTdescription] = ACTIONS(331),
    [anon_sym_PERCENTpackage] = ACTIONS(331),
    [anon_sym_PERCENTprep] = ACTIONS(331),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(331),
    [anon_sym_PERCENTconf] = ACTIONS(331),
    [anon_sym_PERCENTbuild] = ACTIONS(331),
    [anon_sym_PERCENTinstall] = ACTIONS(331),
    [anon_sym_PERCENTcheck] = ACTIONS(331),
    [anon_sym_PERCENTclean] = ACTIONS(331),
    [anon_sym_PERCENTpre] = ACTIONS(331),
    [anon_sym_PERCENTpost] = ACTIONS(331),
    [anon_sym_PERCENTpreun] = ACTIONS(331),
    [anon_sym_PERCENTpostun] = ACTIONS(331),
    [anon_sym_PERCENTpretrans] = ACTIONS(331),
    [anon_sym_PERCENTposttrans] = ACTIONS(331),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(331),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(331),
    [anon_sym_PERCENTverify] = ACTIONS(331),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(331),
    [anon_sym_PERCENTtriggerin] = ACTIONS(331),
    [anon_sym_PERCENTtriggerun] = ACTIONS(331),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(331),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(331),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(331),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(331),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(331),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(331),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(331),
    [anon_sym_PERCENTfiles] = ACTIONS(331),
    [anon_sym_PERCENTchangelog] = ACTIONS(331),
    [anon_sym_STAR] = ACTIONS(333),
    [anon_sym_PERCENTglobal] = ACTIONS(331),
    [anon_sym_PERCENTdefine] = ACTIONS(331),
    [anon_sym_PERCENTundefine] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(331),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(331),
  },
  [27] = {
    [aux_sym_changelog_entry_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(335),
    [aux_sym__simple_statements_token1] = ACTIONS(335),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(337),
    [anon_sym_PERCENTifarch] = ACTIONS(337),
    [anon_sym_PERCENTifos] = ACTIONS(337),
    [anon_sym_PERCENTifnarch] = ACTIONS(337),
    [anon_sym_PERCENTifnos] = ACTIONS(337),
    [anon_sym_AutoProv] = ACTIONS(337),
    [anon_sym_AutoReq] = ACTIONS(337),
    [anon_sym_AutoReqProv] = ACTIONS(337),
    [anon_sym_BugUrl] = ACTIONS(337),
    [anon_sym_BuildRoot] = ACTIONS(337),
    [anon_sym_BuildSystem] = ACTIONS(337),
    [anon_sym_DistTag] = ACTIONS(337),
    [anon_sym_Distribution] = ACTIONS(337),
    [anon_sym_Epoch] = ACTIONS(337),
    [anon_sym_Group] = ACTIONS(337),
    [anon_sym_License] = ACTIONS(337),
    [anon_sym_ModularityLabel] = ACTIONS(337),
    [anon_sym_Name] = ACTIONS(337),
    [anon_sym_NoPatch] = ACTIONS(337),
    [anon_sym_NoSource] = ACTIONS(337),
    [anon_sym_Packager] = ACTIONS(337),
    [anon_sym_Release] = ACTIONS(337),
    [anon_sym_SourceLicense] = ACTIONS(337),
    [anon_sym_Summary] = ACTIONS(337),
    [anon_sym_URL] = ACTIONS(337),
    [anon_sym_Url] = ACTIONS(337),
    [anon_sym_VCS] = ACTIONS(337),
    [anon_sym_Vendor] = ACTIONS(337),
    [anon_sym_Version] = ACTIONS(337),
    [aux_sym_tag_token1] = ACTIONS(337),
    [aux_sym_tag_token2] = ACTIONS(337),
    [anon_sym_Requires] = ACTIONS(337),
    [anon_sym_BuildArch] = ACTIONS(337),
    [anon_sym_BuildArchitectures] = ACTIONS(337),
    [anon_sym_BuildConflicts] = ACTIONS(337),
    [anon_sym_BuildPrereq] = ACTIONS(337),
    [anon_sym_BuildRequires] = ACTIONS(337),
    [anon_sym_Conflicts] = ACTIONS(337),
    [anon_sym_DocDir] = ACTIONS(337),
    [anon_sym_Enhances] = ACTIONS(337),
    [anon_sym_ExcludeArch] = ACTIONS(337),
    [anon_sym_ExcludeOS] = ACTIONS(337),
    [anon_sym_ExclusiveArch] = ACTIONS(337),
    [anon_sym_ExclusiveOS] = ACTIONS(337),
    [anon_sym_Obsoletes] = ACTIONS(337),
    [anon_sym_OrderWithRequires] = ACTIONS(337),
    [anon_sym_Prefix] = ACTIONS(337),
    [anon_sym_Prefixes] = ACTIONS(337),
    [anon_sym_Prereq] = ACTIONS(337),
    [anon_sym_Provides] = ACTIONS(337),
    [anon_sym_Recommends] = ACTIONS(337),
    [anon_sym_RemovePathPostfixes] = ACTIONS(337),
    [anon_sym_Suggests] = ACTIONS(337),
    [anon_sym_Supplements] = ACTIONS(337),
    [anon_sym_PERCENTdescription] = ACTIONS(337),
    [anon_sym_PERCENTpackage] = ACTIONS(337),
    [anon_sym_PERCENTprep] = ACTIONS(337),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(337),
    [anon_sym_PERCENTconf] = ACTIONS(337),
    [anon_sym_PERCENTbuild] = ACTIONS(337),
    [anon_sym_PERCENTinstall] = ACTIONS(337),
    [anon_sym_PERCENTcheck] = ACTIONS(337),
    [anon_sym_PERCENTclean] = ACTIONS(337),
    [anon_sym_PERCENTpre] = ACTIONS(337),
    [anon_sym_PERCENTpost] = ACTIONS(337),
    [anon_sym_PERCENTpreun] = ACTIONS(337),
    [anon_sym_PERCENTpostun] = ACTIONS(337),
    [anon_sym_PERCENTpretrans] = ACTIONS(337),
    [anon_sym_PERCENTposttrans] = ACTIONS(337),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(337),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(337),
    [anon_sym_PERCENTverify] = ACTIONS(337),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(337),
    [anon_sym_PERCENTtriggerin] = ACTIONS(337),
    [anon_sym_PERCENTtriggerun] = ACTIONS(337),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(337),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(337),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(337),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(337),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(337),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(337),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(337),
    [anon_sym_PERCENTfiles] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(339),
    [anon_sym_PERCENTchangelog] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(337),
    [anon_sym_PERCENTglobal] = ACTIONS(337),
    [anon_sym_PERCENTdefine] = ACTIONS(337),
    [anon_sym_PERCENTundefine] = ACTIONS(337),
    [anon_sym_PERCENT] = ACTIONS(337),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(337),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(337),
  },
  [28] = {
    [aux_sym_changelog_entry_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(342),
    [aux_sym__simple_statements_token1] = ACTIONS(342),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(344),
    [anon_sym_PERCENTifarch] = ACTIONS(344),
    [anon_sym_PERCENTifos] = ACTIONS(344),
    [anon_sym_PERCENTifnarch] = ACTIONS(344),
    [anon_sym_PERCENTifnos] = ACTIONS(344),
    [anon_sym_AutoProv] = ACTIONS(344),
    [anon_sym_AutoReq] = ACTIONS(344),
    [anon_sym_AutoReqProv] = ACTIONS(344),
    [anon_sym_BugUrl] = ACTIONS(344),
    [anon_sym_BuildRoot] = ACTIONS(344),
    [anon_sym_BuildSystem] = ACTIONS(344),
    [anon_sym_DistTag] = ACTIONS(344),
    [anon_sym_Distribution] = ACTIONS(344),
    [anon_sym_Epoch] = ACTIONS(344),
    [anon_sym_Group] = ACTIONS(344),
    [anon_sym_License] = ACTIONS(344),
    [anon_sym_ModularityLabel] = ACTIONS(344),
    [anon_sym_Name] = ACTIONS(344),
    [anon_sym_NoPatch] = ACTIONS(344),
    [anon_sym_NoSource] = ACTIONS(344),
    [anon_sym_Packager] = ACTIONS(344),
    [anon_sym_Release] = ACTIONS(344),
    [anon_sym_SourceLicense] = ACTIONS(344),
    [anon_sym_Summary] = ACTIONS(344),
    [anon_sym_URL] = ACTIONS(344),
    [anon_sym_Url] = ACTIONS(344),
    [anon_sym_VCS] = ACTIONS(344),
    [anon_sym_Vendor] = ACTIONS(344),
    [anon_sym_Version] = ACTIONS(344),
    [aux_sym_tag_token1] = ACTIONS(344),
    [aux_sym_tag_token2] = ACTIONS(344),
    [anon_sym_Requires] = ACTIONS(344),
    [anon_sym_BuildArch] = ACTIONS(344),
    [anon_sym_BuildArchitectures] = ACTIONS(344),
    [anon_sym_BuildConflicts] = ACTIONS(344),
    [anon_sym_BuildPrereq] = ACTIONS(344),
    [anon_sym_BuildRequires] = ACTIONS(344),
    [anon_sym_Conflicts] = ACTIONS(344),
    [anon_sym_DocDir] = ACTIONS(344),
    [anon_sym_Enhances] = ACTIONS(344),
    [anon_sym_ExcludeArch] = ACTIONS(344),
    [anon_sym_ExcludeOS] = ACTIONS(344),
    [anon_sym_ExclusiveArch] = ACTIONS(344),
    [anon_sym_ExclusiveOS] = ACTIONS(344),
    [anon_sym_Obsoletes] = ACTIONS(344),
    [anon_sym_OrderWithRequires] = ACTIONS(344),
    [anon_sym_Prefix] = ACTIONS(344),
    [anon_sym_Prefixes] = ACTIONS(344),
    [anon_sym_Prereq] = ACTIONS(344),
    [anon_sym_Provides] = ACTIONS(344),
    [anon_sym_Recommends] = ACTIONS(344),
    [anon_sym_RemovePathPostfixes] = ACTIONS(344),
    [anon_sym_Suggests] = ACTIONS(344),
    [anon_sym_Supplements] = ACTIONS(344),
    [anon_sym_PERCENTdescription] = ACTIONS(344),
    [anon_sym_PERCENTpackage] = ACTIONS(344),
    [anon_sym_PERCENTprep] = ACTIONS(344),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(344),
    [anon_sym_PERCENTconf] = ACTIONS(344),
    [anon_sym_PERCENTbuild] = ACTIONS(344),
    [anon_sym_PERCENTinstall] = ACTIONS(344),
    [anon_sym_PERCENTcheck] = ACTIONS(344),
    [anon_sym_PERCENTclean] = ACTIONS(344),
    [anon_sym_PERCENTpre] = ACTIONS(344),
    [anon_sym_PERCENTpost] = ACTIONS(344),
    [anon_sym_PERCENTpreun] = ACTIONS(344),
    [anon_sym_PERCENTpostun] = ACTIONS(344),
    [anon_sym_PERCENTpretrans] = ACTIONS(344),
    [anon_sym_PERCENTposttrans] = ACTIONS(344),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(344),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(344),
    [anon_sym_PERCENTverify] = ACTIONS(344),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(344),
    [anon_sym_PERCENTtriggerin] = ACTIONS(344),
    [anon_sym_PERCENTtriggerun] = ACTIONS(344),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(344),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(344),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(344),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(344),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(344),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(344),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(344),
    [anon_sym_PERCENTfiles] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(346),
    [anon_sym_PERCENTchangelog] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(344),
    [anon_sym_PERCENTglobal] = ACTIONS(344),
    [anon_sym_PERCENTdefine] = ACTIONS(344),
    [anon_sym_PERCENTundefine] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(344),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(344),
  },
  [29] = {
    [sym_changelog_entry] = STATE(25),
    [aux_sym_changelog_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(348),
    [aux_sym__simple_statements_token1] = ACTIONS(348),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(350),
    [anon_sym_PERCENTifarch] = ACTIONS(350),
    [anon_sym_PERCENTifos] = ACTIONS(350),
    [anon_sym_PERCENTifnarch] = ACTIONS(350),
    [anon_sym_PERCENTifnos] = ACTIONS(350),
    [anon_sym_AutoProv] = ACTIONS(350),
    [anon_sym_AutoReq] = ACTIONS(350),
    [anon_sym_AutoReqProv] = ACTIONS(350),
    [anon_sym_BugUrl] = ACTIONS(350),
    [anon_sym_BuildRoot] = ACTIONS(350),
    [anon_sym_BuildSystem] = ACTIONS(350),
    [anon_sym_DistTag] = ACTIONS(350),
    [anon_sym_Distribution] = ACTIONS(350),
    [anon_sym_Epoch] = ACTIONS(350),
    [anon_sym_Group] = ACTIONS(350),
    [anon_sym_License] = ACTIONS(350),
    [anon_sym_ModularityLabel] = ACTIONS(350),
    [anon_sym_Name] = ACTIONS(350),
    [anon_sym_NoPatch] = ACTIONS(350),
    [anon_sym_NoSource] = ACTIONS(350),
    [anon_sym_Packager] = ACTIONS(350),
    [anon_sym_Release] = ACTIONS(350),
    [anon_sym_SourceLicense] = ACTIONS(350),
    [anon_sym_Summary] = ACTIONS(350),
    [anon_sym_URL] = ACTIONS(350),
    [anon_sym_Url] = ACTIONS(350),
    [anon_sym_VCS] = ACTIONS(350),
    [anon_sym_Vendor] = ACTIONS(350),
    [anon_sym_Version] = ACTIONS(350),
    [aux_sym_tag_token1] = ACTIONS(350),
    [aux_sym_tag_token2] = ACTIONS(350),
    [anon_sym_Requires] = ACTIONS(350),
    [anon_sym_BuildArch] = ACTIONS(350),
    [anon_sym_BuildArchitectures] = ACTIONS(350),
    [anon_sym_BuildConflicts] = ACTIONS(350),
    [anon_sym_BuildPrereq] = ACTIONS(350),
    [anon_sym_BuildRequires] = ACTIONS(350),
    [anon_sym_Conflicts] = ACTIONS(350),
    [anon_sym_DocDir] = ACTIONS(350),
    [anon_sym_Enhances] = ACTIONS(350),
    [anon_sym_ExcludeArch] = ACTIONS(350),
    [anon_sym_ExcludeOS] = ACTIONS(350),
    [anon_sym_ExclusiveArch] = ACTIONS(350),
    [anon_sym_ExclusiveOS] = ACTIONS(350),
    [anon_sym_Obsoletes] = ACTIONS(350),
    [anon_sym_OrderWithRequires] = ACTIONS(350),
    [anon_sym_Prefix] = ACTIONS(350),
    [anon_sym_Prefixes] = ACTIONS(350),
    [anon_sym_Prereq] = ACTIONS(350),
    [anon_sym_Provides] = ACTIONS(350),
    [anon_sym_Recommends] = ACTIONS(350),
    [anon_sym_RemovePathPostfixes] = ACTIONS(350),
    [anon_sym_Suggests] = ACTIONS(350),
    [anon_sym_Supplements] = ACTIONS(350),
    [anon_sym_PERCENTdescription] = ACTIONS(350),
    [anon_sym_PERCENTpackage] = ACTIONS(350),
    [anon_sym_PERCENTprep] = ACTIONS(350),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(350),
    [anon_sym_PERCENTconf] = ACTIONS(350),
    [anon_sym_PERCENTbuild] = ACTIONS(350),
    [anon_sym_PERCENTinstall] = ACTIONS(350),
    [anon_sym_PERCENTcheck] = ACTIONS(350),
    [anon_sym_PERCENTclean] = ACTIONS(350),
    [anon_sym_PERCENTpre] = ACTIONS(350),
    [anon_sym_PERCENTpost] = ACTIONS(350),
    [anon_sym_PERCENTpreun] = ACTIONS(350),
    [anon_sym_PERCENTpostun] = ACTIONS(350),
    [anon_sym_PERCENTpretrans] = ACTIONS(350),
    [anon_sym_PERCENTposttrans] = ACTIONS(350),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(350),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(350),
    [anon_sym_PERCENTverify] = ACTIONS(350),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(350),
    [anon_sym_PERCENTtriggerin] = ACTIONS(350),
    [anon_sym_PERCENTtriggerun] = ACTIONS(350),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(350),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(350),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(350),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(350),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(350),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(350),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(350),
    [anon_sym_PERCENTfiles] = ACTIONS(350),
    [anon_sym_PERCENTchangelog] = ACTIONS(350),
    [anon_sym_STAR] = ACTIONS(333),
    [anon_sym_PERCENTglobal] = ACTIONS(350),
    [anon_sym_PERCENTdefine] = ACTIONS(350),
    [anon_sym_PERCENTundefine] = ACTIONS(350),
    [anon_sym_PERCENT] = ACTIONS(350),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(350),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(350),
  },
  [30] = {
    [aux_sym_changelog_entry_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(352),
    [aux_sym__simple_statements_token1] = ACTIONS(352),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(354),
    [anon_sym_PERCENTifarch] = ACTIONS(354),
    [anon_sym_PERCENTifos] = ACTIONS(354),
    [anon_sym_PERCENTifnarch] = ACTIONS(354),
    [anon_sym_PERCENTifnos] = ACTIONS(354),
    [anon_sym_AutoProv] = ACTIONS(354),
    [anon_sym_AutoReq] = ACTIONS(354),
    [anon_sym_AutoReqProv] = ACTIONS(354),
    [anon_sym_BugUrl] = ACTIONS(354),
    [anon_sym_BuildRoot] = ACTIONS(354),
    [anon_sym_BuildSystem] = ACTIONS(354),
    [anon_sym_DistTag] = ACTIONS(354),
    [anon_sym_Distribution] = ACTIONS(354),
    [anon_sym_Epoch] = ACTIONS(354),
    [anon_sym_Group] = ACTIONS(354),
    [anon_sym_License] = ACTIONS(354),
    [anon_sym_ModularityLabel] = ACTIONS(354),
    [anon_sym_Name] = ACTIONS(354),
    [anon_sym_NoPatch] = ACTIONS(354),
    [anon_sym_NoSource] = ACTIONS(354),
    [anon_sym_Packager] = ACTIONS(354),
    [anon_sym_Release] = ACTIONS(354),
    [anon_sym_SourceLicense] = ACTIONS(354),
    [anon_sym_Summary] = ACTIONS(354),
    [anon_sym_URL] = ACTIONS(354),
    [anon_sym_Url] = ACTIONS(354),
    [anon_sym_VCS] = ACTIONS(354),
    [anon_sym_Vendor] = ACTIONS(354),
    [anon_sym_Version] = ACTIONS(354),
    [aux_sym_tag_token1] = ACTIONS(354),
    [aux_sym_tag_token2] = ACTIONS(354),
    [anon_sym_Requires] = ACTIONS(354),
    [anon_sym_BuildArch] = ACTIONS(354),
    [anon_sym_BuildArchitectures] = ACTIONS(354),
    [anon_sym_BuildConflicts] = ACTIONS(354),
    [anon_sym_BuildPrereq] = ACTIONS(354),
    [anon_sym_BuildRequires] = ACTIONS(354),
    [anon_sym_Conflicts] = ACTIONS(354),
    [anon_sym_DocDir] = ACTIONS(354),
    [anon_sym_Enhances] = ACTIONS(354),
    [anon_sym_ExcludeArch] = ACTIONS(354),
    [anon_sym_ExcludeOS] = ACTIONS(354),
    [anon_sym_ExclusiveArch] = ACTIONS(354),
    [anon_sym_ExclusiveOS] = ACTIONS(354),
    [anon_sym_Obsoletes] = ACTIONS(354),
    [anon_sym_OrderWithRequires] = ACTIONS(354),
    [anon_sym_Prefix] = ACTIONS(354),
    [anon_sym_Prefixes] = ACTIONS(354),
    [anon_sym_Prereq] = ACTIONS(354),
    [anon_sym_Provides] = ACTIONS(354),
    [anon_sym_Recommends] = ACTIONS(354),
    [anon_sym_RemovePathPostfixes] = ACTIONS(354),
    [anon_sym_Suggests] = ACTIONS(354),
    [anon_sym_Supplements] = ACTIONS(354),
    [anon_sym_PERCENTdescription] = ACTIONS(354),
    [anon_sym_PERCENTpackage] = ACTIONS(354),
    [anon_sym_PERCENTprep] = ACTIONS(354),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(354),
    [anon_sym_PERCENTconf] = ACTIONS(354),
    [anon_sym_PERCENTbuild] = ACTIONS(354),
    [anon_sym_PERCENTinstall] = ACTIONS(354),
    [anon_sym_PERCENTcheck] = ACTIONS(354),
    [anon_sym_PERCENTclean] = ACTIONS(354),
    [anon_sym_PERCENTpre] = ACTIONS(354),
    [anon_sym_PERCENTpost] = ACTIONS(354),
    [anon_sym_PERCENTpreun] = ACTIONS(354),
    [anon_sym_PERCENTpostun] = ACTIONS(354),
    [anon_sym_PERCENTpretrans] = ACTIONS(354),
    [anon_sym_PERCENTposttrans] = ACTIONS(354),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(354),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(354),
    [anon_sym_PERCENTverify] = ACTIONS(354),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(354),
    [anon_sym_PERCENTtriggerin] = ACTIONS(354),
    [anon_sym_PERCENTtriggerun] = ACTIONS(354),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(354),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(354),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(354),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(354),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(354),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(354),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(354),
    [anon_sym_PERCENTfiles] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(346),
    [anon_sym_PERCENTchangelog] = ACTIONS(354),
    [anon_sym_STAR] = ACTIONS(354),
    [anon_sym_PERCENTglobal] = ACTIONS(354),
    [anon_sym_PERCENTdefine] = ACTIONS(354),
    [anon_sym_PERCENTundefine] = ACTIONS(354),
    [anon_sym_PERCENT] = ACTIONS(354),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(354),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(354),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [aux_sym__simple_statements_token1] = ACTIONS(356),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(358),
    [anon_sym_PERCENTifarch] = ACTIONS(358),
    [anon_sym_PERCENTifos] = ACTIONS(358),
    [anon_sym_PERCENTifnarch] = ACTIONS(358),
    [anon_sym_PERCENTifnos] = ACTIONS(358),
    [anon_sym_AutoProv] = ACTIONS(358),
    [anon_sym_AutoReq] = ACTIONS(358),
    [anon_sym_AutoReqProv] = ACTIONS(358),
    [anon_sym_BugUrl] = ACTIONS(358),
    [anon_sym_BuildRoot] = ACTIONS(358),
    [anon_sym_BuildSystem] = ACTIONS(358),
    [anon_sym_DistTag] = ACTIONS(358),
    [anon_sym_Distribution] = ACTIONS(358),
    [anon_sym_Epoch] = ACTIONS(358),
    [anon_sym_Group] = ACTIONS(358),
    [anon_sym_License] = ACTIONS(358),
    [anon_sym_ModularityLabel] = ACTIONS(358),
    [anon_sym_Name] = ACTIONS(358),
    [anon_sym_NoPatch] = ACTIONS(358),
    [anon_sym_NoSource] = ACTIONS(358),
    [anon_sym_Packager] = ACTIONS(358),
    [anon_sym_Release] = ACTIONS(358),
    [anon_sym_SourceLicense] = ACTIONS(358),
    [anon_sym_Summary] = ACTIONS(358),
    [anon_sym_URL] = ACTIONS(358),
    [anon_sym_Url] = ACTIONS(358),
    [anon_sym_VCS] = ACTIONS(358),
    [anon_sym_Vendor] = ACTIONS(358),
    [anon_sym_Version] = ACTIONS(358),
    [aux_sym_tag_token1] = ACTIONS(358),
    [aux_sym_tag_token2] = ACTIONS(358),
    [anon_sym_Requires] = ACTIONS(358),
    [anon_sym_BuildArch] = ACTIONS(358),
    [anon_sym_BuildArchitectures] = ACTIONS(358),
    [anon_sym_BuildConflicts] = ACTIONS(358),
    [anon_sym_BuildPrereq] = ACTIONS(358),
    [anon_sym_BuildRequires] = ACTIONS(358),
    [anon_sym_Conflicts] = ACTIONS(358),
    [anon_sym_DocDir] = ACTIONS(358),
    [anon_sym_Enhances] = ACTIONS(358),
    [anon_sym_ExcludeArch] = ACTIONS(358),
    [anon_sym_ExcludeOS] = ACTIONS(358),
    [anon_sym_ExclusiveArch] = ACTIONS(358),
    [anon_sym_ExclusiveOS] = ACTIONS(358),
    [anon_sym_Obsoletes] = ACTIONS(358),
    [anon_sym_OrderWithRequires] = ACTIONS(358),
    [anon_sym_Prefix] = ACTIONS(358),
    [anon_sym_Prefixes] = ACTIONS(358),
    [anon_sym_Prereq] = ACTIONS(358),
    [anon_sym_Provides] = ACTIONS(358),
    [anon_sym_Recommends] = ACTIONS(358),
    [anon_sym_RemovePathPostfixes] = ACTIONS(358),
    [anon_sym_Suggests] = ACTIONS(358),
    [anon_sym_Supplements] = ACTIONS(358),
    [anon_sym_PERCENTdescription] = ACTIONS(358),
    [anon_sym_PERCENTpackage] = ACTIONS(358),
    [anon_sym_PERCENTprep] = ACTIONS(358),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(358),
    [anon_sym_PERCENTconf] = ACTIONS(358),
    [anon_sym_PERCENTbuild] = ACTIONS(358),
    [anon_sym_PERCENTinstall] = ACTIONS(358),
    [anon_sym_PERCENTcheck] = ACTIONS(358),
    [anon_sym_PERCENTclean] = ACTIONS(358),
    [anon_sym_PERCENTpre] = ACTIONS(358),
    [anon_sym_PERCENTpost] = ACTIONS(358),
    [anon_sym_PERCENTpreun] = ACTIONS(358),
    [anon_sym_PERCENTpostun] = ACTIONS(358),
    [anon_sym_PERCENTpretrans] = ACTIONS(358),
    [anon_sym_PERCENTposttrans] = ACTIONS(358),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(358),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(358),
    [anon_sym_PERCENTverify] = ACTIONS(358),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(358),
    [anon_sym_PERCENTtriggerin] = ACTIONS(358),
    [anon_sym_PERCENTtriggerun] = ACTIONS(358),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(358),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(358),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(358),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(358),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(358),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(358),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(358),
    [anon_sym_PERCENTfiles] = ACTIONS(358),
    [anon_sym_DASH] = ACTIONS(358),
    [anon_sym_PERCENTchangelog] = ACTIONS(358),
    [anon_sym_STAR] = ACTIONS(358),
    [anon_sym_PERCENTglobal] = ACTIONS(358),
    [anon_sym_PERCENTdefine] = ACTIONS(358),
    [anon_sym_PERCENTundefine] = ACTIONS(358),
    [anon_sym_PERCENT] = ACTIONS(358),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(358),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(358),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [aux_sym__simple_statements_token1] = ACTIONS(362),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(362),
    [anon_sym_PERCENTifarch] = ACTIONS(362),
    [anon_sym_PERCENTifos] = ACTIONS(362),
    [anon_sym_PERCENTifnarch] = ACTIONS(362),
    [anon_sym_PERCENTifnos] = ACTIONS(362),
    [anon_sym_AutoProv] = ACTIONS(362),
    [anon_sym_AutoReq] = ACTIONS(362),
    [anon_sym_AutoReqProv] = ACTIONS(362),
    [anon_sym_BugUrl] = ACTIONS(362),
    [anon_sym_BuildRoot] = ACTIONS(362),
    [anon_sym_BuildSystem] = ACTIONS(362),
    [anon_sym_DistTag] = ACTIONS(362),
    [anon_sym_Distribution] = ACTIONS(362),
    [anon_sym_Epoch] = ACTIONS(362),
    [anon_sym_Group] = ACTIONS(362),
    [anon_sym_License] = ACTIONS(362),
    [anon_sym_ModularityLabel] = ACTIONS(362),
    [anon_sym_Name] = ACTIONS(362),
    [anon_sym_NoPatch] = ACTIONS(362),
    [anon_sym_NoSource] = ACTIONS(362),
    [anon_sym_Packager] = ACTIONS(362),
    [anon_sym_Release] = ACTIONS(362),
    [anon_sym_SourceLicense] = ACTIONS(362),
    [anon_sym_Summary] = ACTIONS(362),
    [anon_sym_URL] = ACTIONS(362),
    [anon_sym_Url] = ACTIONS(362),
    [anon_sym_VCS] = ACTIONS(362),
    [anon_sym_Vendor] = ACTIONS(362),
    [anon_sym_Version] = ACTIONS(362),
    [aux_sym_tag_token1] = ACTIONS(362),
    [aux_sym_tag_token2] = ACTIONS(362),
    [anon_sym_Requires] = ACTIONS(362),
    [anon_sym_BuildArch] = ACTIONS(362),
    [anon_sym_BuildArchitectures] = ACTIONS(362),
    [anon_sym_BuildConflicts] = ACTIONS(362),
    [anon_sym_BuildPrereq] = ACTIONS(362),
    [anon_sym_BuildRequires] = ACTIONS(362),
    [anon_sym_Conflicts] = ACTIONS(362),
    [anon_sym_DocDir] = ACTIONS(362),
    [anon_sym_Enhances] = ACTIONS(362),
    [anon_sym_ExcludeArch] = ACTIONS(362),
    [anon_sym_ExcludeOS] = ACTIONS(362),
    [anon_sym_ExclusiveArch] = ACTIONS(362),
    [anon_sym_ExclusiveOS] = ACTIONS(362),
    [anon_sym_Obsoletes] = ACTIONS(362),
    [anon_sym_OrderWithRequires] = ACTIONS(362),
    [anon_sym_Prefix] = ACTIONS(362),
    [anon_sym_Prefixes] = ACTIONS(362),
    [anon_sym_Prereq] = ACTIONS(362),
    [anon_sym_Provides] = ACTIONS(362),
    [anon_sym_Recommends] = ACTIONS(362),
    [anon_sym_RemovePathPostfixes] = ACTIONS(362),
    [anon_sym_Suggests] = ACTIONS(362),
    [anon_sym_Supplements] = ACTIONS(362),
    [anon_sym_PERCENTdescription] = ACTIONS(362),
    [anon_sym_PERCENTpackage] = ACTIONS(362),
    [anon_sym_PERCENTprep] = ACTIONS(362),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(362),
    [anon_sym_PERCENTconf] = ACTIONS(362),
    [anon_sym_PERCENTbuild] = ACTIONS(362),
    [anon_sym_PERCENTinstall] = ACTIONS(362),
    [anon_sym_PERCENTcheck] = ACTIONS(362),
    [anon_sym_PERCENTclean] = ACTIONS(362),
    [anon_sym_PERCENTpre] = ACTIONS(362),
    [anon_sym_PERCENTpost] = ACTIONS(362),
    [anon_sym_PERCENTpreun] = ACTIONS(362),
    [anon_sym_PERCENTpostun] = ACTIONS(362),
    [anon_sym_PERCENTpretrans] = ACTIONS(362),
    [anon_sym_PERCENTposttrans] = ACTIONS(362),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(362),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(362),
    [anon_sym_PERCENTverify] = ACTIONS(362),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(362),
    [anon_sym_PERCENTtriggerin] = ACTIONS(362),
    [anon_sym_PERCENTtriggerun] = ACTIONS(362),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(362),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(362),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(362),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(362),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(362),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(362),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(362),
    [anon_sym_PERCENTfiles] = ACTIONS(362),
    [anon_sym_PERCENTchangelog] = ACTIONS(362),
    [anon_sym_PERCENTglobal] = ACTIONS(362),
    [anon_sym_PERCENTdefine] = ACTIONS(362),
    [anon_sym_PERCENTundefine] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
    [sym_string_content_with_newlines] = ACTIONS(362),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(362),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(362),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(364),
    [aux_sym__simple_statements_token1] = ACTIONS(366),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(366),
    [anon_sym_PERCENTifarch] = ACTIONS(366),
    [anon_sym_PERCENTifos] = ACTIONS(366),
    [anon_sym_PERCENTifnarch] = ACTIONS(366),
    [anon_sym_PERCENTifnos] = ACTIONS(366),
    [anon_sym_AutoProv] = ACTIONS(366),
    [anon_sym_AutoReq] = ACTIONS(366),
    [anon_sym_AutoReqProv] = ACTIONS(366),
    [anon_sym_BugUrl] = ACTIONS(366),
    [anon_sym_BuildRoot] = ACTIONS(366),
    [anon_sym_BuildSystem] = ACTIONS(366),
    [anon_sym_DistTag] = ACTIONS(366),
    [anon_sym_Distribution] = ACTIONS(366),
    [anon_sym_Epoch] = ACTIONS(366),
    [anon_sym_Group] = ACTIONS(366),
    [anon_sym_License] = ACTIONS(366),
    [anon_sym_ModularityLabel] = ACTIONS(366),
    [anon_sym_Name] = ACTIONS(366),
    [anon_sym_NoPatch] = ACTIONS(366),
    [anon_sym_NoSource] = ACTIONS(366),
    [anon_sym_Packager] = ACTIONS(366),
    [anon_sym_Release] = ACTIONS(366),
    [anon_sym_SourceLicense] = ACTIONS(366),
    [anon_sym_Summary] = ACTIONS(366),
    [anon_sym_URL] = ACTIONS(366),
    [anon_sym_Url] = ACTIONS(366),
    [anon_sym_VCS] = ACTIONS(366),
    [anon_sym_Vendor] = ACTIONS(366),
    [anon_sym_Version] = ACTIONS(366),
    [aux_sym_tag_token1] = ACTIONS(366),
    [aux_sym_tag_token2] = ACTIONS(366),
    [anon_sym_Requires] = ACTIONS(366),
    [anon_sym_BuildArch] = ACTIONS(366),
    [anon_sym_BuildArchitectures] = ACTIONS(366),
    [anon_sym_BuildConflicts] = ACTIONS(366),
    [anon_sym_BuildPrereq] = ACTIONS(366),
    [anon_sym_BuildRequires] = ACTIONS(366),
    [anon_sym_Conflicts] = ACTIONS(366),
    [anon_sym_DocDir] = ACTIONS(366),
    [anon_sym_Enhances] = ACTIONS(366),
    [anon_sym_ExcludeArch] = ACTIONS(366),
    [anon_sym_ExcludeOS] = ACTIONS(366),
    [anon_sym_ExclusiveArch] = ACTIONS(366),
    [anon_sym_ExclusiveOS] = ACTIONS(366),
    [anon_sym_Obsoletes] = ACTIONS(366),
    [anon_sym_OrderWithRequires] = ACTIONS(366),
    [anon_sym_Prefix] = ACTIONS(366),
    [anon_sym_Prefixes] = ACTIONS(366),
    [anon_sym_Prereq] = ACTIONS(366),
    [anon_sym_Provides] = ACTIONS(366),
    [anon_sym_Recommends] = ACTIONS(366),
    [anon_sym_RemovePathPostfixes] = ACTIONS(366),
    [anon_sym_Suggests] = ACTIONS(366),
    [anon_sym_Supplements] = ACTIONS(366),
    [anon_sym_PERCENTdescription] = ACTIONS(366),
    [anon_sym_PERCENTpackage] = ACTIONS(366),
    [anon_sym_PERCENTprep] = ACTIONS(366),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(366),
    [anon_sym_PERCENTconf] = ACTIONS(366),
    [anon_sym_PERCENTbuild] = ACTIONS(366),
    [anon_sym_PERCENTinstall] = ACTIONS(366),
    [anon_sym_PERCENTcheck] = ACTIONS(366),
    [anon_sym_PERCENTclean] = ACTIONS(366),
    [anon_sym_PERCENTpre] = ACTIONS(366),
    [anon_sym_PERCENTpost] = ACTIONS(366),
    [anon_sym_PERCENTpreun] = ACTIONS(366),
    [anon_sym_PERCENTpostun] = ACTIONS(366),
    [anon_sym_PERCENTpretrans] = ACTIONS(366),
    [anon_sym_PERCENTposttrans] = ACTIONS(366),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(366),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(366),
    [anon_sym_PERCENTverify] = ACTIONS(366),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(366),
    [anon_sym_PERCENTtriggerin] = ACTIONS(366),
    [anon_sym_PERCENTtriggerun] = ACTIONS(366),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(366),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(366),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(366),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(366),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(366),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(366),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(366),
    [anon_sym_PERCENTfiles] = ACTIONS(366),
    [anon_sym_PERCENTchangelog] = ACTIONS(366),
    [anon_sym_PERCENTglobal] = ACTIONS(366),
    [anon_sym_PERCENTdefine] = ACTIONS(366),
    [anon_sym_PERCENTundefine] = ACTIONS(366),
    [anon_sym_PERCENT] = ACTIONS(366),
    [sym_string_content_with_newlines] = ACTIONS(366),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(366),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(366),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [aux_sym__simple_statements_token1] = ACTIONS(370),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(370),
    [anon_sym_PERCENTifarch] = ACTIONS(370),
    [anon_sym_PERCENTifos] = ACTIONS(370),
    [anon_sym_PERCENTifnarch] = ACTIONS(370),
    [anon_sym_PERCENTifnos] = ACTIONS(370),
    [anon_sym_AutoProv] = ACTIONS(370),
    [anon_sym_AutoReq] = ACTIONS(370),
    [anon_sym_AutoReqProv] = ACTIONS(370),
    [anon_sym_BugUrl] = ACTIONS(370),
    [anon_sym_BuildRoot] = ACTIONS(370),
    [anon_sym_BuildSystem] = ACTIONS(370),
    [anon_sym_DistTag] = ACTIONS(370),
    [anon_sym_Distribution] = ACTIONS(370),
    [anon_sym_Epoch] = ACTIONS(370),
    [anon_sym_Group] = ACTIONS(370),
    [anon_sym_License] = ACTIONS(370),
    [anon_sym_ModularityLabel] = ACTIONS(370),
    [anon_sym_Name] = ACTIONS(370),
    [anon_sym_NoPatch] = ACTIONS(370),
    [anon_sym_NoSource] = ACTIONS(370),
    [anon_sym_Packager] = ACTIONS(370),
    [anon_sym_Release] = ACTIONS(370),
    [anon_sym_SourceLicense] = ACTIONS(370),
    [anon_sym_Summary] = ACTIONS(370),
    [anon_sym_URL] = ACTIONS(370),
    [anon_sym_Url] = ACTIONS(370),
    [anon_sym_VCS] = ACTIONS(370),
    [anon_sym_Vendor] = ACTIONS(370),
    [anon_sym_Version] = ACTIONS(370),
    [aux_sym_tag_token1] = ACTIONS(370),
    [aux_sym_tag_token2] = ACTIONS(370),
    [anon_sym_Requires] = ACTIONS(370),
    [anon_sym_BuildArch] = ACTIONS(370),
    [anon_sym_BuildArchitectures] = ACTIONS(370),
    [anon_sym_BuildConflicts] = ACTIONS(370),
    [anon_sym_BuildPrereq] = ACTIONS(370),
    [anon_sym_BuildRequires] = ACTIONS(370),
    [anon_sym_Conflicts] = ACTIONS(370),
    [anon_sym_DocDir] = ACTIONS(370),
    [anon_sym_Enhances] = ACTIONS(370),
    [anon_sym_ExcludeArch] = ACTIONS(370),
    [anon_sym_ExcludeOS] = ACTIONS(370),
    [anon_sym_ExclusiveArch] = ACTIONS(370),
    [anon_sym_ExclusiveOS] = ACTIONS(370),
    [anon_sym_Obsoletes] = ACTIONS(370),
    [anon_sym_OrderWithRequires] = ACTIONS(370),
    [anon_sym_Prefix] = ACTIONS(370),
    [anon_sym_Prefixes] = ACTIONS(370),
    [anon_sym_Prereq] = ACTIONS(370),
    [anon_sym_Provides] = ACTIONS(370),
    [anon_sym_Recommends] = ACTIONS(370),
    [anon_sym_RemovePathPostfixes] = ACTIONS(370),
    [anon_sym_Suggests] = ACTIONS(370),
    [anon_sym_Supplements] = ACTIONS(370),
    [anon_sym_PERCENTdescription] = ACTIONS(370),
    [anon_sym_PERCENTpackage] = ACTIONS(370),
    [anon_sym_PERCENTprep] = ACTIONS(370),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(370),
    [anon_sym_PERCENTconf] = ACTIONS(370),
    [anon_sym_PERCENTbuild] = ACTIONS(370),
    [anon_sym_PERCENTinstall] = ACTIONS(370),
    [anon_sym_PERCENTcheck] = ACTIONS(370),
    [anon_sym_PERCENTclean] = ACTIONS(370),
    [anon_sym_PERCENTpre] = ACTIONS(370),
    [anon_sym_PERCENTpost] = ACTIONS(370),
    [anon_sym_PERCENTpreun] = ACTIONS(370),
    [anon_sym_PERCENTpostun] = ACTIONS(370),
    [anon_sym_PERCENTpretrans] = ACTIONS(370),
    [anon_sym_PERCENTposttrans] = ACTIONS(370),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(370),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(370),
    [anon_sym_PERCENTverify] = ACTIONS(370),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(370),
    [anon_sym_PERCENTtriggerin] = ACTIONS(370),
    [anon_sym_PERCENTtriggerun] = ACTIONS(370),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(370),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(370),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(370),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(370),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(370),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(370),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(370),
    [anon_sym_PERCENTfiles] = ACTIONS(370),
    [anon_sym_PERCENTchangelog] = ACTIONS(370),
    [anon_sym_PERCENTglobal] = ACTIONS(370),
    [anon_sym_PERCENTdefine] = ACTIONS(370),
    [anon_sym_PERCENTundefine] = ACTIONS(370),
    [anon_sym_PERCENT] = ACTIONS(370),
    [sym_string_content_with_newlines] = ACTIONS(370),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(370),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(370),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [aux_sym__simple_statements_token1] = ACTIONS(374),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(374),
    [anon_sym_PERCENTifarch] = ACTIONS(374),
    [anon_sym_PERCENTifos] = ACTIONS(374),
    [anon_sym_PERCENTifnarch] = ACTIONS(374),
    [anon_sym_PERCENTifnos] = ACTIONS(374),
    [anon_sym_AutoProv] = ACTIONS(374),
    [anon_sym_AutoReq] = ACTIONS(374),
    [anon_sym_AutoReqProv] = ACTIONS(374),
    [anon_sym_BugUrl] = ACTIONS(374),
    [anon_sym_BuildRoot] = ACTIONS(374),
    [anon_sym_BuildSystem] = ACTIONS(374),
    [anon_sym_DistTag] = ACTIONS(374),
    [anon_sym_Distribution] = ACTIONS(374),
    [anon_sym_Epoch] = ACTIONS(374),
    [anon_sym_Group] = ACTIONS(374),
    [anon_sym_License] = ACTIONS(374),
    [anon_sym_ModularityLabel] = ACTIONS(374),
    [anon_sym_Name] = ACTIONS(374),
    [anon_sym_NoPatch] = ACTIONS(374),
    [anon_sym_NoSource] = ACTIONS(374),
    [anon_sym_Packager] = ACTIONS(374),
    [anon_sym_Release] = ACTIONS(374),
    [anon_sym_SourceLicense] = ACTIONS(374),
    [anon_sym_Summary] = ACTIONS(374),
    [anon_sym_URL] = ACTIONS(374),
    [anon_sym_Url] = ACTIONS(374),
    [anon_sym_VCS] = ACTIONS(374),
    [anon_sym_Vendor] = ACTIONS(374),
    [anon_sym_Version] = ACTIONS(374),
    [aux_sym_tag_token1] = ACTIONS(374),
    [aux_sym_tag_token2] = ACTIONS(374),
    [anon_sym_Requires] = ACTIONS(374),
    [anon_sym_BuildArch] = ACTIONS(374),
    [anon_sym_BuildArchitectures] = ACTIONS(374),
    [anon_sym_BuildConflicts] = ACTIONS(374),
    [anon_sym_BuildPrereq] = ACTIONS(374),
    [anon_sym_BuildRequires] = ACTIONS(374),
    [anon_sym_Conflicts] = ACTIONS(374),
    [anon_sym_DocDir] = ACTIONS(374),
    [anon_sym_Enhances] = ACTIONS(374),
    [anon_sym_ExcludeArch] = ACTIONS(374),
    [anon_sym_ExcludeOS] = ACTIONS(374),
    [anon_sym_ExclusiveArch] = ACTIONS(374),
    [anon_sym_ExclusiveOS] = ACTIONS(374),
    [anon_sym_Obsoletes] = ACTIONS(374),
    [anon_sym_OrderWithRequires] = ACTIONS(374),
    [anon_sym_Prefix] = ACTIONS(374),
    [anon_sym_Prefixes] = ACTIONS(374),
    [anon_sym_Prereq] = ACTIONS(374),
    [anon_sym_Provides] = ACTIONS(374),
    [anon_sym_Recommends] = ACTIONS(374),
    [anon_sym_RemovePathPostfixes] = ACTIONS(374),
    [anon_sym_Suggests] = ACTIONS(374),
    [anon_sym_Supplements] = ACTIONS(374),
    [anon_sym_PERCENTdescription] = ACTIONS(374),
    [anon_sym_PERCENTpackage] = ACTIONS(374),
    [anon_sym_PERCENTprep] = ACTIONS(374),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(374),
    [anon_sym_PERCENTconf] = ACTIONS(374),
    [anon_sym_PERCENTbuild] = ACTIONS(374),
    [anon_sym_PERCENTinstall] = ACTIONS(374),
    [anon_sym_PERCENTcheck] = ACTIONS(374),
    [anon_sym_PERCENTclean] = ACTIONS(374),
    [anon_sym_PERCENTpre] = ACTIONS(374),
    [anon_sym_PERCENTpost] = ACTIONS(374),
    [anon_sym_PERCENTpreun] = ACTIONS(374),
    [anon_sym_PERCENTpostun] = ACTIONS(374),
    [anon_sym_PERCENTpretrans] = ACTIONS(374),
    [anon_sym_PERCENTposttrans] = ACTIONS(374),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(374),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(374),
    [anon_sym_PERCENTverify] = ACTIONS(374),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(374),
    [anon_sym_PERCENTtriggerin] = ACTIONS(374),
    [anon_sym_PERCENTtriggerun] = ACTIONS(374),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(374),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(374),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(374),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(374),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(374),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(374),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(374),
    [anon_sym_PERCENTfiles] = ACTIONS(374),
    [anon_sym_PERCENTchangelog] = ACTIONS(374),
    [anon_sym_PERCENTglobal] = ACTIONS(374),
    [anon_sym_PERCENTdefine] = ACTIONS(374),
    [anon_sym_PERCENTundefine] = ACTIONS(374),
    [anon_sym_PERCENT] = ACTIONS(374),
    [sym_string_content_with_newlines] = ACTIONS(374),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(374),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(374),
  },
  [36] = {
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
    [anon_sym_PERCENT] = ACTIONS(308),
    [sym_string_content_with_newlines] = ACTIONS(308),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(308),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(308),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [aux_sym__simple_statements_token1] = ACTIONS(378),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(378),
    [anon_sym_PERCENTifarch] = ACTIONS(378),
    [anon_sym_PERCENTifos] = ACTIONS(378),
    [anon_sym_PERCENTifnarch] = ACTIONS(378),
    [anon_sym_PERCENTifnos] = ACTIONS(378),
    [anon_sym_AutoProv] = ACTIONS(378),
    [anon_sym_AutoReq] = ACTIONS(378),
    [anon_sym_AutoReqProv] = ACTIONS(378),
    [anon_sym_BugUrl] = ACTIONS(378),
    [anon_sym_BuildRoot] = ACTIONS(378),
    [anon_sym_BuildSystem] = ACTIONS(378),
    [anon_sym_DistTag] = ACTIONS(378),
    [anon_sym_Distribution] = ACTIONS(378),
    [anon_sym_Epoch] = ACTIONS(378),
    [anon_sym_Group] = ACTIONS(378),
    [anon_sym_License] = ACTIONS(378),
    [anon_sym_ModularityLabel] = ACTIONS(378),
    [anon_sym_Name] = ACTIONS(378),
    [anon_sym_NoPatch] = ACTIONS(378),
    [anon_sym_NoSource] = ACTIONS(378),
    [anon_sym_Packager] = ACTIONS(378),
    [anon_sym_Release] = ACTIONS(378),
    [anon_sym_SourceLicense] = ACTIONS(378),
    [anon_sym_Summary] = ACTIONS(378),
    [anon_sym_URL] = ACTIONS(378),
    [anon_sym_Url] = ACTIONS(378),
    [anon_sym_VCS] = ACTIONS(378),
    [anon_sym_Vendor] = ACTIONS(378),
    [anon_sym_Version] = ACTIONS(378),
    [aux_sym_tag_token1] = ACTIONS(378),
    [aux_sym_tag_token2] = ACTIONS(378),
    [anon_sym_Requires] = ACTIONS(378),
    [anon_sym_BuildArch] = ACTIONS(378),
    [anon_sym_BuildArchitectures] = ACTIONS(378),
    [anon_sym_BuildConflicts] = ACTIONS(378),
    [anon_sym_BuildPrereq] = ACTIONS(378),
    [anon_sym_BuildRequires] = ACTIONS(378),
    [anon_sym_Conflicts] = ACTIONS(378),
    [anon_sym_DocDir] = ACTIONS(378),
    [anon_sym_Enhances] = ACTIONS(378),
    [anon_sym_ExcludeArch] = ACTIONS(378),
    [anon_sym_ExcludeOS] = ACTIONS(378),
    [anon_sym_ExclusiveArch] = ACTIONS(378),
    [anon_sym_ExclusiveOS] = ACTIONS(378),
    [anon_sym_Obsoletes] = ACTIONS(378),
    [anon_sym_OrderWithRequires] = ACTIONS(378),
    [anon_sym_Prefix] = ACTIONS(378),
    [anon_sym_Prefixes] = ACTIONS(378),
    [anon_sym_Prereq] = ACTIONS(378),
    [anon_sym_Provides] = ACTIONS(378),
    [anon_sym_Recommends] = ACTIONS(378),
    [anon_sym_RemovePathPostfixes] = ACTIONS(378),
    [anon_sym_Suggests] = ACTIONS(378),
    [anon_sym_Supplements] = ACTIONS(378),
    [anon_sym_PERCENTdescription] = ACTIONS(378),
    [anon_sym_PERCENTpackage] = ACTIONS(378),
    [anon_sym_PERCENTprep] = ACTIONS(378),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(378),
    [anon_sym_PERCENTconf] = ACTIONS(378),
    [anon_sym_PERCENTbuild] = ACTIONS(378),
    [anon_sym_PERCENTinstall] = ACTIONS(378),
    [anon_sym_PERCENTcheck] = ACTIONS(378),
    [anon_sym_PERCENTclean] = ACTIONS(378),
    [anon_sym_PERCENTpre] = ACTIONS(378),
    [anon_sym_PERCENTpost] = ACTIONS(378),
    [anon_sym_PERCENTpreun] = ACTIONS(378),
    [anon_sym_PERCENTpostun] = ACTIONS(378),
    [anon_sym_PERCENTpretrans] = ACTIONS(378),
    [anon_sym_PERCENTposttrans] = ACTIONS(378),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(378),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(378),
    [anon_sym_PERCENTverify] = ACTIONS(378),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(378),
    [anon_sym_PERCENTtriggerin] = ACTIONS(378),
    [anon_sym_PERCENTtriggerun] = ACTIONS(378),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(378),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(378),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(378),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(378),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(378),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(378),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(378),
    [anon_sym_PERCENTfiles] = ACTIONS(378),
    [anon_sym_PERCENTchangelog] = ACTIONS(378),
    [anon_sym_PERCENTglobal] = ACTIONS(378),
    [anon_sym_PERCENTdefine] = ACTIONS(378),
    [anon_sym_PERCENTundefine] = ACTIONS(378),
    [anon_sym_PERCENT] = ACTIONS(378),
    [sym_string_content_with_newlines] = ACTIONS(378),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(378),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(378),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [aux_sym__simple_statements_token1] = ACTIONS(382),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(382),
    [anon_sym_PERCENTifarch] = ACTIONS(382),
    [anon_sym_PERCENTifos] = ACTIONS(382),
    [anon_sym_PERCENTifnarch] = ACTIONS(382),
    [anon_sym_PERCENTifnos] = ACTIONS(382),
    [anon_sym_AutoProv] = ACTIONS(382),
    [anon_sym_AutoReq] = ACTIONS(382),
    [anon_sym_AutoReqProv] = ACTIONS(382),
    [anon_sym_BugUrl] = ACTIONS(382),
    [anon_sym_BuildRoot] = ACTIONS(382),
    [anon_sym_BuildSystem] = ACTIONS(382),
    [anon_sym_DistTag] = ACTIONS(382),
    [anon_sym_Distribution] = ACTIONS(382),
    [anon_sym_Epoch] = ACTIONS(382),
    [anon_sym_Group] = ACTIONS(382),
    [anon_sym_License] = ACTIONS(382),
    [anon_sym_ModularityLabel] = ACTIONS(382),
    [anon_sym_Name] = ACTIONS(382),
    [anon_sym_NoPatch] = ACTIONS(382),
    [anon_sym_NoSource] = ACTIONS(382),
    [anon_sym_Packager] = ACTIONS(382),
    [anon_sym_Release] = ACTIONS(382),
    [anon_sym_SourceLicense] = ACTIONS(382),
    [anon_sym_Summary] = ACTIONS(382),
    [anon_sym_URL] = ACTIONS(382),
    [anon_sym_Url] = ACTIONS(382),
    [anon_sym_VCS] = ACTIONS(382),
    [anon_sym_Vendor] = ACTIONS(382),
    [anon_sym_Version] = ACTIONS(382),
    [aux_sym_tag_token1] = ACTIONS(382),
    [aux_sym_tag_token2] = ACTIONS(382),
    [anon_sym_Requires] = ACTIONS(382),
    [anon_sym_BuildArch] = ACTIONS(382),
    [anon_sym_BuildArchitectures] = ACTIONS(382),
    [anon_sym_BuildConflicts] = ACTIONS(382),
    [anon_sym_BuildPrereq] = ACTIONS(382),
    [anon_sym_BuildRequires] = ACTIONS(382),
    [anon_sym_Conflicts] = ACTIONS(382),
    [anon_sym_DocDir] = ACTIONS(382),
    [anon_sym_Enhances] = ACTIONS(382),
    [anon_sym_ExcludeArch] = ACTIONS(382),
    [anon_sym_ExcludeOS] = ACTIONS(382),
    [anon_sym_ExclusiveArch] = ACTIONS(382),
    [anon_sym_ExclusiveOS] = ACTIONS(382),
    [anon_sym_Obsoletes] = ACTIONS(382),
    [anon_sym_OrderWithRequires] = ACTIONS(382),
    [anon_sym_Prefix] = ACTIONS(382),
    [anon_sym_Prefixes] = ACTIONS(382),
    [anon_sym_Prereq] = ACTIONS(382),
    [anon_sym_Provides] = ACTIONS(382),
    [anon_sym_Recommends] = ACTIONS(382),
    [anon_sym_RemovePathPostfixes] = ACTIONS(382),
    [anon_sym_Suggests] = ACTIONS(382),
    [anon_sym_Supplements] = ACTIONS(382),
    [anon_sym_PERCENTdescription] = ACTIONS(382),
    [anon_sym_PERCENTpackage] = ACTIONS(382),
    [anon_sym_PERCENTprep] = ACTIONS(382),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(382),
    [anon_sym_PERCENTconf] = ACTIONS(382),
    [anon_sym_PERCENTbuild] = ACTIONS(382),
    [anon_sym_PERCENTinstall] = ACTIONS(382),
    [anon_sym_PERCENTcheck] = ACTIONS(382),
    [anon_sym_PERCENTclean] = ACTIONS(382),
    [anon_sym_PERCENTpre] = ACTIONS(382),
    [anon_sym_PERCENTpost] = ACTIONS(382),
    [anon_sym_PERCENTpreun] = ACTIONS(382),
    [anon_sym_PERCENTpostun] = ACTIONS(382),
    [anon_sym_PERCENTpretrans] = ACTIONS(382),
    [anon_sym_PERCENTposttrans] = ACTIONS(382),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(382),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(382),
    [anon_sym_PERCENTverify] = ACTIONS(382),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(382),
    [anon_sym_PERCENTtriggerin] = ACTIONS(382),
    [anon_sym_PERCENTtriggerun] = ACTIONS(382),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(382),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(382),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(382),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(382),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(382),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(382),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(382),
    [anon_sym_PERCENTfiles] = ACTIONS(382),
    [anon_sym_PERCENTchangelog] = ACTIONS(382),
    [anon_sym_PERCENTglobal] = ACTIONS(382),
    [anon_sym_PERCENTdefine] = ACTIONS(382),
    [anon_sym_PERCENTundefine] = ACTIONS(382),
    [anon_sym_PERCENT] = ACTIONS(382),
    [sym_string_content_with_newlines] = ACTIONS(382),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(382),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(382),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(384),
    [aux_sym__simple_statements_token1] = ACTIONS(384),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(386),
    [anon_sym_PERCENTifarch] = ACTIONS(386),
    [anon_sym_PERCENTifos] = ACTIONS(386),
    [anon_sym_PERCENTifnarch] = ACTIONS(386),
    [anon_sym_PERCENTifnos] = ACTIONS(386),
    [anon_sym_AutoProv] = ACTIONS(386),
    [anon_sym_AutoReq] = ACTIONS(386),
    [anon_sym_AutoReqProv] = ACTIONS(386),
    [anon_sym_BugUrl] = ACTIONS(386),
    [anon_sym_BuildRoot] = ACTIONS(386),
    [anon_sym_BuildSystem] = ACTIONS(386),
    [anon_sym_DistTag] = ACTIONS(386),
    [anon_sym_Distribution] = ACTIONS(386),
    [anon_sym_Epoch] = ACTIONS(386),
    [anon_sym_Group] = ACTIONS(386),
    [anon_sym_License] = ACTIONS(386),
    [anon_sym_ModularityLabel] = ACTIONS(386),
    [anon_sym_Name] = ACTIONS(386),
    [anon_sym_NoPatch] = ACTIONS(386),
    [anon_sym_NoSource] = ACTIONS(386),
    [anon_sym_Packager] = ACTIONS(386),
    [anon_sym_Release] = ACTIONS(386),
    [anon_sym_SourceLicense] = ACTIONS(386),
    [anon_sym_Summary] = ACTIONS(386),
    [anon_sym_URL] = ACTIONS(386),
    [anon_sym_Url] = ACTIONS(386),
    [anon_sym_VCS] = ACTIONS(386),
    [anon_sym_Vendor] = ACTIONS(386),
    [anon_sym_Version] = ACTIONS(386),
    [aux_sym_tag_token1] = ACTIONS(386),
    [aux_sym_tag_token2] = ACTIONS(386),
    [anon_sym_Requires] = ACTIONS(386),
    [anon_sym_BuildArch] = ACTIONS(386),
    [anon_sym_BuildArchitectures] = ACTIONS(386),
    [anon_sym_BuildConflicts] = ACTIONS(386),
    [anon_sym_BuildPrereq] = ACTIONS(386),
    [anon_sym_BuildRequires] = ACTIONS(386),
    [anon_sym_Conflicts] = ACTIONS(386),
    [anon_sym_DocDir] = ACTIONS(386),
    [anon_sym_Enhances] = ACTIONS(386),
    [anon_sym_ExcludeArch] = ACTIONS(386),
    [anon_sym_ExcludeOS] = ACTIONS(386),
    [anon_sym_ExclusiveArch] = ACTIONS(386),
    [anon_sym_ExclusiveOS] = ACTIONS(386),
    [anon_sym_Obsoletes] = ACTIONS(386),
    [anon_sym_OrderWithRequires] = ACTIONS(386),
    [anon_sym_Prefix] = ACTIONS(386),
    [anon_sym_Prefixes] = ACTIONS(386),
    [anon_sym_Prereq] = ACTIONS(386),
    [anon_sym_Provides] = ACTIONS(386),
    [anon_sym_Recommends] = ACTIONS(386),
    [anon_sym_RemovePathPostfixes] = ACTIONS(386),
    [anon_sym_Suggests] = ACTIONS(386),
    [anon_sym_Supplements] = ACTIONS(386),
    [anon_sym_PERCENTdescription] = ACTIONS(386),
    [anon_sym_PERCENTpackage] = ACTIONS(386),
    [anon_sym_PERCENTprep] = ACTIONS(386),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(386),
    [anon_sym_PERCENTconf] = ACTIONS(386),
    [anon_sym_PERCENTbuild] = ACTIONS(386),
    [anon_sym_PERCENTinstall] = ACTIONS(386),
    [anon_sym_PERCENTcheck] = ACTIONS(386),
    [anon_sym_PERCENTclean] = ACTIONS(386),
    [anon_sym_PERCENTpre] = ACTIONS(386),
    [anon_sym_PERCENTpost] = ACTIONS(386),
    [anon_sym_PERCENTpreun] = ACTIONS(386),
    [anon_sym_PERCENTpostun] = ACTIONS(386),
    [anon_sym_PERCENTpretrans] = ACTIONS(386),
    [anon_sym_PERCENTposttrans] = ACTIONS(386),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(386),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(386),
    [anon_sym_PERCENTverify] = ACTIONS(386),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(386),
    [anon_sym_PERCENTtriggerin] = ACTIONS(386),
    [anon_sym_PERCENTtriggerun] = ACTIONS(386),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(386),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(386),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(386),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(386),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(386),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(386),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(386),
    [anon_sym_PERCENTfiles] = ACTIONS(386),
    [anon_sym_PERCENTchangelog] = ACTIONS(386),
    [anon_sym_PERCENTglobal] = ACTIONS(386),
    [anon_sym_PERCENTdefine] = ACTIONS(386),
    [anon_sym_PERCENTundefine] = ACTIONS(386),
    [anon_sym_PERCENT] = ACTIONS(386),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(386),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(386),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [aux_sym__simple_statements_token1] = ACTIONS(388),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(390),
    [anon_sym_PERCENTifarch] = ACTIONS(390),
    [anon_sym_PERCENTifos] = ACTIONS(390),
    [anon_sym_PERCENTifnarch] = ACTIONS(390),
    [anon_sym_PERCENTifnos] = ACTIONS(390),
    [anon_sym_AutoProv] = ACTIONS(390),
    [anon_sym_AutoReq] = ACTIONS(390),
    [anon_sym_AutoReqProv] = ACTIONS(390),
    [anon_sym_BugUrl] = ACTIONS(390),
    [anon_sym_BuildRoot] = ACTIONS(390),
    [anon_sym_BuildSystem] = ACTIONS(390),
    [anon_sym_DistTag] = ACTIONS(390),
    [anon_sym_Distribution] = ACTIONS(390),
    [anon_sym_Epoch] = ACTIONS(390),
    [anon_sym_Group] = ACTIONS(390),
    [anon_sym_License] = ACTIONS(390),
    [anon_sym_ModularityLabel] = ACTIONS(390),
    [anon_sym_Name] = ACTIONS(390),
    [anon_sym_NoPatch] = ACTIONS(390),
    [anon_sym_NoSource] = ACTIONS(390),
    [anon_sym_Packager] = ACTIONS(390),
    [anon_sym_Release] = ACTIONS(390),
    [anon_sym_SourceLicense] = ACTIONS(390),
    [anon_sym_Summary] = ACTIONS(390),
    [anon_sym_URL] = ACTIONS(390),
    [anon_sym_Url] = ACTIONS(390),
    [anon_sym_VCS] = ACTIONS(390),
    [anon_sym_Vendor] = ACTIONS(390),
    [anon_sym_Version] = ACTIONS(390),
    [aux_sym_tag_token1] = ACTIONS(390),
    [aux_sym_tag_token2] = ACTIONS(390),
    [anon_sym_Requires] = ACTIONS(390),
    [anon_sym_BuildArch] = ACTIONS(390),
    [anon_sym_BuildArchitectures] = ACTIONS(390),
    [anon_sym_BuildConflicts] = ACTIONS(390),
    [anon_sym_BuildPrereq] = ACTIONS(390),
    [anon_sym_BuildRequires] = ACTIONS(390),
    [anon_sym_Conflicts] = ACTIONS(390),
    [anon_sym_DocDir] = ACTIONS(390),
    [anon_sym_Enhances] = ACTIONS(390),
    [anon_sym_ExcludeArch] = ACTIONS(390),
    [anon_sym_ExcludeOS] = ACTIONS(390),
    [anon_sym_ExclusiveArch] = ACTIONS(390),
    [anon_sym_ExclusiveOS] = ACTIONS(390),
    [anon_sym_Obsoletes] = ACTIONS(390),
    [anon_sym_OrderWithRequires] = ACTIONS(390),
    [anon_sym_Prefix] = ACTIONS(390),
    [anon_sym_Prefixes] = ACTIONS(390),
    [anon_sym_Prereq] = ACTIONS(390),
    [anon_sym_Provides] = ACTIONS(390),
    [anon_sym_Recommends] = ACTIONS(390),
    [anon_sym_RemovePathPostfixes] = ACTIONS(390),
    [anon_sym_Suggests] = ACTIONS(390),
    [anon_sym_Supplements] = ACTIONS(390),
    [anon_sym_PERCENTdescription] = ACTIONS(390),
    [anon_sym_PERCENTpackage] = ACTIONS(390),
    [anon_sym_PERCENTprep] = ACTIONS(390),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(390),
    [anon_sym_PERCENTconf] = ACTIONS(390),
    [anon_sym_PERCENTbuild] = ACTIONS(390),
    [anon_sym_PERCENTinstall] = ACTIONS(390),
    [anon_sym_PERCENTcheck] = ACTIONS(390),
    [anon_sym_PERCENTclean] = ACTIONS(390),
    [anon_sym_PERCENTpre] = ACTIONS(390),
    [anon_sym_PERCENTpost] = ACTIONS(390),
    [anon_sym_PERCENTpreun] = ACTIONS(390),
    [anon_sym_PERCENTpostun] = ACTIONS(390),
    [anon_sym_PERCENTpretrans] = ACTIONS(390),
    [anon_sym_PERCENTposttrans] = ACTIONS(390),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(390),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(390),
    [anon_sym_PERCENTverify] = ACTIONS(390),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(390),
    [anon_sym_PERCENTtriggerin] = ACTIONS(390),
    [anon_sym_PERCENTtriggerun] = ACTIONS(390),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(390),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(390),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(390),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(390),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(390),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(390),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(390),
    [anon_sym_PERCENTfiles] = ACTIONS(390),
    [anon_sym_PERCENTchangelog] = ACTIONS(390),
    [anon_sym_PERCENTglobal] = ACTIONS(390),
    [anon_sym_PERCENTdefine] = ACTIONS(390),
    [anon_sym_PERCENTundefine] = ACTIONS(390),
    [anon_sym_PERCENT] = ACTIONS(390),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(390),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(390),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [aux_sym__simple_statements_token1] = ACTIONS(392),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(394),
    [anon_sym_PERCENTifarch] = ACTIONS(394),
    [anon_sym_PERCENTifos] = ACTIONS(394),
    [anon_sym_PERCENTifnarch] = ACTIONS(394),
    [anon_sym_PERCENTifnos] = ACTIONS(394),
    [anon_sym_AutoProv] = ACTIONS(394),
    [anon_sym_AutoReq] = ACTIONS(394),
    [anon_sym_AutoReqProv] = ACTIONS(394),
    [anon_sym_BugUrl] = ACTIONS(394),
    [anon_sym_BuildRoot] = ACTIONS(394),
    [anon_sym_BuildSystem] = ACTIONS(394),
    [anon_sym_DistTag] = ACTIONS(394),
    [anon_sym_Distribution] = ACTIONS(394),
    [anon_sym_Epoch] = ACTIONS(394),
    [anon_sym_Group] = ACTIONS(394),
    [anon_sym_License] = ACTIONS(394),
    [anon_sym_ModularityLabel] = ACTIONS(394),
    [anon_sym_Name] = ACTIONS(394),
    [anon_sym_NoPatch] = ACTIONS(394),
    [anon_sym_NoSource] = ACTIONS(394),
    [anon_sym_Packager] = ACTIONS(394),
    [anon_sym_Release] = ACTIONS(394),
    [anon_sym_SourceLicense] = ACTIONS(394),
    [anon_sym_Summary] = ACTIONS(394),
    [anon_sym_URL] = ACTIONS(394),
    [anon_sym_Url] = ACTIONS(394),
    [anon_sym_VCS] = ACTIONS(394),
    [anon_sym_Vendor] = ACTIONS(394),
    [anon_sym_Version] = ACTIONS(394),
    [aux_sym_tag_token1] = ACTIONS(394),
    [aux_sym_tag_token2] = ACTIONS(394),
    [anon_sym_Requires] = ACTIONS(394),
    [anon_sym_BuildArch] = ACTIONS(394),
    [anon_sym_BuildArchitectures] = ACTIONS(394),
    [anon_sym_BuildConflicts] = ACTIONS(394),
    [anon_sym_BuildPrereq] = ACTIONS(394),
    [anon_sym_BuildRequires] = ACTIONS(394),
    [anon_sym_Conflicts] = ACTIONS(394),
    [anon_sym_DocDir] = ACTIONS(394),
    [anon_sym_Enhances] = ACTIONS(394),
    [anon_sym_ExcludeArch] = ACTIONS(394),
    [anon_sym_ExcludeOS] = ACTIONS(394),
    [anon_sym_ExclusiveArch] = ACTIONS(394),
    [anon_sym_ExclusiveOS] = ACTIONS(394),
    [anon_sym_Obsoletes] = ACTIONS(394),
    [anon_sym_OrderWithRequires] = ACTIONS(394),
    [anon_sym_Prefix] = ACTIONS(394),
    [anon_sym_Prefixes] = ACTIONS(394),
    [anon_sym_Prereq] = ACTIONS(394),
    [anon_sym_Provides] = ACTIONS(394),
    [anon_sym_Recommends] = ACTIONS(394),
    [anon_sym_RemovePathPostfixes] = ACTIONS(394),
    [anon_sym_Suggests] = ACTIONS(394),
    [anon_sym_Supplements] = ACTIONS(394),
    [anon_sym_PERCENTdescription] = ACTIONS(394),
    [anon_sym_PERCENTpackage] = ACTIONS(394),
    [anon_sym_PERCENTprep] = ACTIONS(394),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(394),
    [anon_sym_PERCENTconf] = ACTIONS(394),
    [anon_sym_PERCENTbuild] = ACTIONS(394),
    [anon_sym_PERCENTinstall] = ACTIONS(394),
    [anon_sym_PERCENTcheck] = ACTIONS(394),
    [anon_sym_PERCENTclean] = ACTIONS(394),
    [anon_sym_PERCENTpre] = ACTIONS(394),
    [anon_sym_PERCENTpost] = ACTIONS(394),
    [anon_sym_PERCENTpreun] = ACTIONS(394),
    [anon_sym_PERCENTpostun] = ACTIONS(394),
    [anon_sym_PERCENTpretrans] = ACTIONS(394),
    [anon_sym_PERCENTposttrans] = ACTIONS(394),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(394),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(394),
    [anon_sym_PERCENTverify] = ACTIONS(394),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(394),
    [anon_sym_PERCENTtriggerin] = ACTIONS(394),
    [anon_sym_PERCENTtriggerun] = ACTIONS(394),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(394),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(394),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(394),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(394),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(394),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(394),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(394),
    [anon_sym_PERCENTfiles] = ACTIONS(394),
    [anon_sym_PERCENTchangelog] = ACTIONS(394),
    [anon_sym_PERCENTglobal] = ACTIONS(394),
    [anon_sym_PERCENTdefine] = ACTIONS(394),
    [anon_sym_PERCENTundefine] = ACTIONS(394),
    [anon_sym_PERCENT] = ACTIONS(394),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(394),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(394),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [aux_sym__simple_statements_token1] = ACTIONS(396),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(398),
    [anon_sym_PERCENTifarch] = ACTIONS(398),
    [anon_sym_PERCENTifos] = ACTIONS(398),
    [anon_sym_PERCENTifnarch] = ACTIONS(398),
    [anon_sym_PERCENTifnos] = ACTIONS(398),
    [anon_sym_AutoProv] = ACTIONS(398),
    [anon_sym_AutoReq] = ACTIONS(398),
    [anon_sym_AutoReqProv] = ACTIONS(398),
    [anon_sym_BugUrl] = ACTIONS(398),
    [anon_sym_BuildRoot] = ACTIONS(398),
    [anon_sym_BuildSystem] = ACTIONS(398),
    [anon_sym_DistTag] = ACTIONS(398),
    [anon_sym_Distribution] = ACTIONS(398),
    [anon_sym_Epoch] = ACTIONS(398),
    [anon_sym_Group] = ACTIONS(398),
    [anon_sym_License] = ACTIONS(398),
    [anon_sym_ModularityLabel] = ACTIONS(398),
    [anon_sym_Name] = ACTIONS(398),
    [anon_sym_NoPatch] = ACTIONS(398),
    [anon_sym_NoSource] = ACTIONS(398),
    [anon_sym_Packager] = ACTIONS(398),
    [anon_sym_Release] = ACTIONS(398),
    [anon_sym_SourceLicense] = ACTIONS(398),
    [anon_sym_Summary] = ACTIONS(398),
    [anon_sym_URL] = ACTIONS(398),
    [anon_sym_Url] = ACTIONS(398),
    [anon_sym_VCS] = ACTIONS(398),
    [anon_sym_Vendor] = ACTIONS(398),
    [anon_sym_Version] = ACTIONS(398),
    [aux_sym_tag_token1] = ACTIONS(398),
    [aux_sym_tag_token2] = ACTIONS(398),
    [anon_sym_Requires] = ACTIONS(398),
    [anon_sym_BuildArch] = ACTIONS(398),
    [anon_sym_BuildArchitectures] = ACTIONS(398),
    [anon_sym_BuildConflicts] = ACTIONS(398),
    [anon_sym_BuildPrereq] = ACTIONS(398),
    [anon_sym_BuildRequires] = ACTIONS(398),
    [anon_sym_Conflicts] = ACTIONS(398),
    [anon_sym_DocDir] = ACTIONS(398),
    [anon_sym_Enhances] = ACTIONS(398),
    [anon_sym_ExcludeArch] = ACTIONS(398),
    [anon_sym_ExcludeOS] = ACTIONS(398),
    [anon_sym_ExclusiveArch] = ACTIONS(398),
    [anon_sym_ExclusiveOS] = ACTIONS(398),
    [anon_sym_Obsoletes] = ACTIONS(398),
    [anon_sym_OrderWithRequires] = ACTIONS(398),
    [anon_sym_Prefix] = ACTIONS(398),
    [anon_sym_Prefixes] = ACTIONS(398),
    [anon_sym_Prereq] = ACTIONS(398),
    [anon_sym_Provides] = ACTIONS(398),
    [anon_sym_Recommends] = ACTIONS(398),
    [anon_sym_RemovePathPostfixes] = ACTIONS(398),
    [anon_sym_Suggests] = ACTIONS(398),
    [anon_sym_Supplements] = ACTIONS(398),
    [anon_sym_PERCENTdescription] = ACTIONS(398),
    [anon_sym_PERCENTpackage] = ACTIONS(398),
    [anon_sym_PERCENTprep] = ACTIONS(398),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(398),
    [anon_sym_PERCENTconf] = ACTIONS(398),
    [anon_sym_PERCENTbuild] = ACTIONS(398),
    [anon_sym_PERCENTinstall] = ACTIONS(398),
    [anon_sym_PERCENTcheck] = ACTIONS(398),
    [anon_sym_PERCENTclean] = ACTIONS(398),
    [anon_sym_PERCENTpre] = ACTIONS(398),
    [anon_sym_PERCENTpost] = ACTIONS(398),
    [anon_sym_PERCENTpreun] = ACTIONS(398),
    [anon_sym_PERCENTpostun] = ACTIONS(398),
    [anon_sym_PERCENTpretrans] = ACTIONS(398),
    [anon_sym_PERCENTposttrans] = ACTIONS(398),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(398),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(398),
    [anon_sym_PERCENTverify] = ACTIONS(398),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(398),
    [anon_sym_PERCENTtriggerin] = ACTIONS(398),
    [anon_sym_PERCENTtriggerun] = ACTIONS(398),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(398),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(398),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(398),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(398),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(398),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(398),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(398),
    [anon_sym_PERCENTfiles] = ACTIONS(398),
    [anon_sym_PERCENTchangelog] = ACTIONS(398),
    [anon_sym_PERCENTglobal] = ACTIONS(398),
    [anon_sym_PERCENTdefine] = ACTIONS(398),
    [anon_sym_PERCENTundefine] = ACTIONS(398),
    [anon_sym_PERCENT] = ACTIONS(398),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(398),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(398),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [aux_sym__simple_statements_token1] = ACTIONS(400),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(402),
    [anon_sym_PERCENTifarch] = ACTIONS(402),
    [anon_sym_PERCENTifos] = ACTIONS(402),
    [anon_sym_PERCENTifnarch] = ACTIONS(402),
    [anon_sym_PERCENTifnos] = ACTIONS(402),
    [anon_sym_AutoProv] = ACTIONS(402),
    [anon_sym_AutoReq] = ACTIONS(402),
    [anon_sym_AutoReqProv] = ACTIONS(402),
    [anon_sym_BugUrl] = ACTIONS(402),
    [anon_sym_BuildRoot] = ACTIONS(402),
    [anon_sym_BuildSystem] = ACTIONS(402),
    [anon_sym_DistTag] = ACTIONS(402),
    [anon_sym_Distribution] = ACTIONS(402),
    [anon_sym_Epoch] = ACTIONS(402),
    [anon_sym_Group] = ACTIONS(402),
    [anon_sym_License] = ACTIONS(402),
    [anon_sym_ModularityLabel] = ACTIONS(402),
    [anon_sym_Name] = ACTIONS(402),
    [anon_sym_NoPatch] = ACTIONS(402),
    [anon_sym_NoSource] = ACTIONS(402),
    [anon_sym_Packager] = ACTIONS(402),
    [anon_sym_Release] = ACTIONS(402),
    [anon_sym_SourceLicense] = ACTIONS(402),
    [anon_sym_Summary] = ACTIONS(402),
    [anon_sym_URL] = ACTIONS(402),
    [anon_sym_Url] = ACTIONS(402),
    [anon_sym_VCS] = ACTIONS(402),
    [anon_sym_Vendor] = ACTIONS(402),
    [anon_sym_Version] = ACTIONS(402),
    [aux_sym_tag_token1] = ACTIONS(402),
    [aux_sym_tag_token2] = ACTIONS(402),
    [anon_sym_Requires] = ACTIONS(402),
    [anon_sym_BuildArch] = ACTIONS(402),
    [anon_sym_BuildArchitectures] = ACTIONS(402),
    [anon_sym_BuildConflicts] = ACTIONS(402),
    [anon_sym_BuildPrereq] = ACTIONS(402),
    [anon_sym_BuildRequires] = ACTIONS(402),
    [anon_sym_Conflicts] = ACTIONS(402),
    [anon_sym_DocDir] = ACTIONS(402),
    [anon_sym_Enhances] = ACTIONS(402),
    [anon_sym_ExcludeArch] = ACTIONS(402),
    [anon_sym_ExcludeOS] = ACTIONS(402),
    [anon_sym_ExclusiveArch] = ACTIONS(402),
    [anon_sym_ExclusiveOS] = ACTIONS(402),
    [anon_sym_Obsoletes] = ACTIONS(402),
    [anon_sym_OrderWithRequires] = ACTIONS(402),
    [anon_sym_Prefix] = ACTIONS(402),
    [anon_sym_Prefixes] = ACTIONS(402),
    [anon_sym_Prereq] = ACTIONS(402),
    [anon_sym_Provides] = ACTIONS(402),
    [anon_sym_Recommends] = ACTIONS(402),
    [anon_sym_RemovePathPostfixes] = ACTIONS(402),
    [anon_sym_Suggests] = ACTIONS(402),
    [anon_sym_Supplements] = ACTIONS(402),
    [anon_sym_PERCENTdescription] = ACTIONS(402),
    [anon_sym_PERCENTpackage] = ACTIONS(402),
    [anon_sym_PERCENTprep] = ACTIONS(402),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(402),
    [anon_sym_PERCENTconf] = ACTIONS(402),
    [anon_sym_PERCENTbuild] = ACTIONS(402),
    [anon_sym_PERCENTinstall] = ACTIONS(402),
    [anon_sym_PERCENTcheck] = ACTIONS(402),
    [anon_sym_PERCENTclean] = ACTIONS(402),
    [anon_sym_PERCENTpre] = ACTIONS(402),
    [anon_sym_PERCENTpost] = ACTIONS(402),
    [anon_sym_PERCENTpreun] = ACTIONS(402),
    [anon_sym_PERCENTpostun] = ACTIONS(402),
    [anon_sym_PERCENTpretrans] = ACTIONS(402),
    [anon_sym_PERCENTposttrans] = ACTIONS(402),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(402),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(402),
    [anon_sym_PERCENTverify] = ACTIONS(402),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(402),
    [anon_sym_PERCENTtriggerin] = ACTIONS(402),
    [anon_sym_PERCENTtriggerun] = ACTIONS(402),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(402),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(402),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(402),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(402),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(402),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(402),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(402),
    [anon_sym_PERCENTfiles] = ACTIONS(402),
    [anon_sym_PERCENTchangelog] = ACTIONS(402),
    [anon_sym_PERCENTglobal] = ACTIONS(402),
    [anon_sym_PERCENTdefine] = ACTIONS(402),
    [anon_sym_PERCENTundefine] = ACTIONS(402),
    [anon_sym_PERCENT] = ACTIONS(402),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(402),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(402),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [aux_sym__simple_statements_token1] = ACTIONS(404),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(406),
    [anon_sym_PERCENTifarch] = ACTIONS(406),
    [anon_sym_PERCENTifos] = ACTIONS(406),
    [anon_sym_PERCENTifnarch] = ACTIONS(406),
    [anon_sym_PERCENTifnos] = ACTIONS(406),
    [anon_sym_AutoProv] = ACTIONS(406),
    [anon_sym_AutoReq] = ACTIONS(406),
    [anon_sym_AutoReqProv] = ACTIONS(406),
    [anon_sym_BugUrl] = ACTIONS(406),
    [anon_sym_BuildRoot] = ACTIONS(406),
    [anon_sym_BuildSystem] = ACTIONS(406),
    [anon_sym_DistTag] = ACTIONS(406),
    [anon_sym_Distribution] = ACTIONS(406),
    [anon_sym_Epoch] = ACTIONS(406),
    [anon_sym_Group] = ACTIONS(406),
    [anon_sym_License] = ACTIONS(406),
    [anon_sym_ModularityLabel] = ACTIONS(406),
    [anon_sym_Name] = ACTIONS(406),
    [anon_sym_NoPatch] = ACTIONS(406),
    [anon_sym_NoSource] = ACTIONS(406),
    [anon_sym_Packager] = ACTIONS(406),
    [anon_sym_Release] = ACTIONS(406),
    [anon_sym_SourceLicense] = ACTIONS(406),
    [anon_sym_Summary] = ACTIONS(406),
    [anon_sym_URL] = ACTIONS(406),
    [anon_sym_Url] = ACTIONS(406),
    [anon_sym_VCS] = ACTIONS(406),
    [anon_sym_Vendor] = ACTIONS(406),
    [anon_sym_Version] = ACTIONS(406),
    [aux_sym_tag_token1] = ACTIONS(406),
    [aux_sym_tag_token2] = ACTIONS(406),
    [anon_sym_Requires] = ACTIONS(406),
    [anon_sym_BuildArch] = ACTIONS(406),
    [anon_sym_BuildArchitectures] = ACTIONS(406),
    [anon_sym_BuildConflicts] = ACTIONS(406),
    [anon_sym_BuildPrereq] = ACTIONS(406),
    [anon_sym_BuildRequires] = ACTIONS(406),
    [anon_sym_Conflicts] = ACTIONS(406),
    [anon_sym_DocDir] = ACTIONS(406),
    [anon_sym_Enhances] = ACTIONS(406),
    [anon_sym_ExcludeArch] = ACTIONS(406),
    [anon_sym_ExcludeOS] = ACTIONS(406),
    [anon_sym_ExclusiveArch] = ACTIONS(406),
    [anon_sym_ExclusiveOS] = ACTIONS(406),
    [anon_sym_Obsoletes] = ACTIONS(406),
    [anon_sym_OrderWithRequires] = ACTIONS(406),
    [anon_sym_Prefix] = ACTIONS(406),
    [anon_sym_Prefixes] = ACTIONS(406),
    [anon_sym_Prereq] = ACTIONS(406),
    [anon_sym_Provides] = ACTIONS(406),
    [anon_sym_Recommends] = ACTIONS(406),
    [anon_sym_RemovePathPostfixes] = ACTIONS(406),
    [anon_sym_Suggests] = ACTIONS(406),
    [anon_sym_Supplements] = ACTIONS(406),
    [anon_sym_PERCENTdescription] = ACTIONS(406),
    [anon_sym_PERCENTpackage] = ACTIONS(406),
    [anon_sym_PERCENTprep] = ACTIONS(406),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(406),
    [anon_sym_PERCENTconf] = ACTIONS(406),
    [anon_sym_PERCENTbuild] = ACTIONS(406),
    [anon_sym_PERCENTinstall] = ACTIONS(406),
    [anon_sym_PERCENTcheck] = ACTIONS(406),
    [anon_sym_PERCENTclean] = ACTIONS(406),
    [anon_sym_PERCENTpre] = ACTIONS(406),
    [anon_sym_PERCENTpost] = ACTIONS(406),
    [anon_sym_PERCENTpreun] = ACTIONS(406),
    [anon_sym_PERCENTpostun] = ACTIONS(406),
    [anon_sym_PERCENTpretrans] = ACTIONS(406),
    [anon_sym_PERCENTposttrans] = ACTIONS(406),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(406),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(406),
    [anon_sym_PERCENTverify] = ACTIONS(406),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(406),
    [anon_sym_PERCENTtriggerin] = ACTIONS(406),
    [anon_sym_PERCENTtriggerun] = ACTIONS(406),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(406),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(406),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(406),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(406),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(406),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(406),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(406),
    [anon_sym_PERCENTfiles] = ACTIONS(406),
    [anon_sym_PERCENTchangelog] = ACTIONS(406),
    [anon_sym_PERCENTglobal] = ACTIONS(406),
    [anon_sym_PERCENTdefine] = ACTIONS(406),
    [anon_sym_PERCENTundefine] = ACTIONS(406),
    [anon_sym_PERCENT] = ACTIONS(406),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(406),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(406),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [aux_sym__simple_statements_token1] = ACTIONS(408),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(410),
    [anon_sym_PERCENTifarch] = ACTIONS(410),
    [anon_sym_PERCENTifos] = ACTIONS(410),
    [anon_sym_PERCENTifnarch] = ACTIONS(410),
    [anon_sym_PERCENTifnos] = ACTIONS(410),
    [anon_sym_AutoProv] = ACTIONS(410),
    [anon_sym_AutoReq] = ACTIONS(410),
    [anon_sym_AutoReqProv] = ACTIONS(410),
    [anon_sym_BugUrl] = ACTIONS(410),
    [anon_sym_BuildRoot] = ACTIONS(410),
    [anon_sym_BuildSystem] = ACTIONS(410),
    [anon_sym_DistTag] = ACTIONS(410),
    [anon_sym_Distribution] = ACTIONS(410),
    [anon_sym_Epoch] = ACTIONS(410),
    [anon_sym_Group] = ACTIONS(410),
    [anon_sym_License] = ACTIONS(410),
    [anon_sym_ModularityLabel] = ACTIONS(410),
    [anon_sym_Name] = ACTIONS(410),
    [anon_sym_NoPatch] = ACTIONS(410),
    [anon_sym_NoSource] = ACTIONS(410),
    [anon_sym_Packager] = ACTIONS(410),
    [anon_sym_Release] = ACTIONS(410),
    [anon_sym_SourceLicense] = ACTIONS(410),
    [anon_sym_Summary] = ACTIONS(410),
    [anon_sym_URL] = ACTIONS(410),
    [anon_sym_Url] = ACTIONS(410),
    [anon_sym_VCS] = ACTIONS(410),
    [anon_sym_Vendor] = ACTIONS(410),
    [anon_sym_Version] = ACTIONS(410),
    [aux_sym_tag_token1] = ACTIONS(410),
    [aux_sym_tag_token2] = ACTIONS(410),
    [anon_sym_Requires] = ACTIONS(410),
    [anon_sym_BuildArch] = ACTIONS(410),
    [anon_sym_BuildArchitectures] = ACTIONS(410),
    [anon_sym_BuildConflicts] = ACTIONS(410),
    [anon_sym_BuildPrereq] = ACTIONS(410),
    [anon_sym_BuildRequires] = ACTIONS(410),
    [anon_sym_Conflicts] = ACTIONS(410),
    [anon_sym_DocDir] = ACTIONS(410),
    [anon_sym_Enhances] = ACTIONS(410),
    [anon_sym_ExcludeArch] = ACTIONS(410),
    [anon_sym_ExcludeOS] = ACTIONS(410),
    [anon_sym_ExclusiveArch] = ACTIONS(410),
    [anon_sym_ExclusiveOS] = ACTIONS(410),
    [anon_sym_Obsoletes] = ACTIONS(410),
    [anon_sym_OrderWithRequires] = ACTIONS(410),
    [anon_sym_Prefix] = ACTIONS(410),
    [anon_sym_Prefixes] = ACTIONS(410),
    [anon_sym_Prereq] = ACTIONS(410),
    [anon_sym_Provides] = ACTIONS(410),
    [anon_sym_Recommends] = ACTIONS(410),
    [anon_sym_RemovePathPostfixes] = ACTIONS(410),
    [anon_sym_Suggests] = ACTIONS(410),
    [anon_sym_Supplements] = ACTIONS(410),
    [anon_sym_PERCENTdescription] = ACTIONS(410),
    [anon_sym_PERCENTpackage] = ACTIONS(410),
    [anon_sym_PERCENTprep] = ACTIONS(410),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(410),
    [anon_sym_PERCENTconf] = ACTIONS(410),
    [anon_sym_PERCENTbuild] = ACTIONS(410),
    [anon_sym_PERCENTinstall] = ACTIONS(410),
    [anon_sym_PERCENTcheck] = ACTIONS(410),
    [anon_sym_PERCENTclean] = ACTIONS(410),
    [anon_sym_PERCENTpre] = ACTIONS(410),
    [anon_sym_PERCENTpost] = ACTIONS(410),
    [anon_sym_PERCENTpreun] = ACTIONS(410),
    [anon_sym_PERCENTpostun] = ACTIONS(410),
    [anon_sym_PERCENTpretrans] = ACTIONS(410),
    [anon_sym_PERCENTposttrans] = ACTIONS(410),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(410),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(410),
    [anon_sym_PERCENTverify] = ACTIONS(410),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(410),
    [anon_sym_PERCENTtriggerin] = ACTIONS(410),
    [anon_sym_PERCENTtriggerun] = ACTIONS(410),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(410),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(410),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(410),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(410),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(410),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(410),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(410),
    [anon_sym_PERCENTfiles] = ACTIONS(410),
    [anon_sym_PERCENTchangelog] = ACTIONS(410),
    [anon_sym_PERCENTglobal] = ACTIONS(410),
    [anon_sym_PERCENTdefine] = ACTIONS(410),
    [anon_sym_PERCENTundefine] = ACTIONS(410),
    [anon_sym_PERCENT] = ACTIONS(410),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(410),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(410),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [aux_sym__simple_statements_token1] = ACTIONS(412),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(414),
    [anon_sym_PERCENTifarch] = ACTIONS(414),
    [anon_sym_PERCENTifos] = ACTIONS(414),
    [anon_sym_PERCENTifnarch] = ACTIONS(414),
    [anon_sym_PERCENTifnos] = ACTIONS(414),
    [anon_sym_AutoProv] = ACTIONS(414),
    [anon_sym_AutoReq] = ACTIONS(414),
    [anon_sym_AutoReqProv] = ACTIONS(414),
    [anon_sym_BugUrl] = ACTIONS(414),
    [anon_sym_BuildRoot] = ACTIONS(414),
    [anon_sym_BuildSystem] = ACTIONS(414),
    [anon_sym_DistTag] = ACTIONS(414),
    [anon_sym_Distribution] = ACTIONS(414),
    [anon_sym_Epoch] = ACTIONS(414),
    [anon_sym_Group] = ACTIONS(414),
    [anon_sym_License] = ACTIONS(414),
    [anon_sym_ModularityLabel] = ACTIONS(414),
    [anon_sym_Name] = ACTIONS(414),
    [anon_sym_NoPatch] = ACTIONS(414),
    [anon_sym_NoSource] = ACTIONS(414),
    [anon_sym_Packager] = ACTIONS(414),
    [anon_sym_Release] = ACTIONS(414),
    [anon_sym_SourceLicense] = ACTIONS(414),
    [anon_sym_Summary] = ACTIONS(414),
    [anon_sym_URL] = ACTIONS(414),
    [anon_sym_Url] = ACTIONS(414),
    [anon_sym_VCS] = ACTIONS(414),
    [anon_sym_Vendor] = ACTIONS(414),
    [anon_sym_Version] = ACTIONS(414),
    [aux_sym_tag_token1] = ACTIONS(414),
    [aux_sym_tag_token2] = ACTIONS(414),
    [anon_sym_Requires] = ACTIONS(414),
    [anon_sym_BuildArch] = ACTIONS(414),
    [anon_sym_BuildArchitectures] = ACTIONS(414),
    [anon_sym_BuildConflicts] = ACTIONS(414),
    [anon_sym_BuildPrereq] = ACTIONS(414),
    [anon_sym_BuildRequires] = ACTIONS(414),
    [anon_sym_Conflicts] = ACTIONS(414),
    [anon_sym_DocDir] = ACTIONS(414),
    [anon_sym_Enhances] = ACTIONS(414),
    [anon_sym_ExcludeArch] = ACTIONS(414),
    [anon_sym_ExcludeOS] = ACTIONS(414),
    [anon_sym_ExclusiveArch] = ACTIONS(414),
    [anon_sym_ExclusiveOS] = ACTIONS(414),
    [anon_sym_Obsoletes] = ACTIONS(414),
    [anon_sym_OrderWithRequires] = ACTIONS(414),
    [anon_sym_Prefix] = ACTIONS(414),
    [anon_sym_Prefixes] = ACTIONS(414),
    [anon_sym_Prereq] = ACTIONS(414),
    [anon_sym_Provides] = ACTIONS(414),
    [anon_sym_Recommends] = ACTIONS(414),
    [anon_sym_RemovePathPostfixes] = ACTIONS(414),
    [anon_sym_Suggests] = ACTIONS(414),
    [anon_sym_Supplements] = ACTIONS(414),
    [anon_sym_PERCENTdescription] = ACTIONS(414),
    [anon_sym_PERCENTpackage] = ACTIONS(414),
    [anon_sym_PERCENTprep] = ACTIONS(414),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(414),
    [anon_sym_PERCENTconf] = ACTIONS(414),
    [anon_sym_PERCENTbuild] = ACTIONS(414),
    [anon_sym_PERCENTinstall] = ACTIONS(414),
    [anon_sym_PERCENTcheck] = ACTIONS(414),
    [anon_sym_PERCENTclean] = ACTIONS(414),
    [anon_sym_PERCENTpre] = ACTIONS(414),
    [anon_sym_PERCENTpost] = ACTIONS(414),
    [anon_sym_PERCENTpreun] = ACTIONS(414),
    [anon_sym_PERCENTpostun] = ACTIONS(414),
    [anon_sym_PERCENTpretrans] = ACTIONS(414),
    [anon_sym_PERCENTposttrans] = ACTIONS(414),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(414),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(414),
    [anon_sym_PERCENTverify] = ACTIONS(414),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(414),
    [anon_sym_PERCENTtriggerin] = ACTIONS(414),
    [anon_sym_PERCENTtriggerun] = ACTIONS(414),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(414),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(414),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(414),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(414),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(414),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(414),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(414),
    [anon_sym_PERCENTfiles] = ACTIONS(414),
    [anon_sym_PERCENTchangelog] = ACTIONS(414),
    [anon_sym_PERCENTglobal] = ACTIONS(414),
    [anon_sym_PERCENTdefine] = ACTIONS(414),
    [anon_sym_PERCENTundefine] = ACTIONS(414),
    [anon_sym_PERCENT] = ACTIONS(414),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(414),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(414),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(416),
    [aux_sym__simple_statements_token1] = ACTIONS(416),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(418),
    [anon_sym_PERCENTifarch] = ACTIONS(418),
    [anon_sym_PERCENTifos] = ACTIONS(418),
    [anon_sym_PERCENTifnarch] = ACTIONS(418),
    [anon_sym_PERCENTifnos] = ACTIONS(418),
    [anon_sym_AutoProv] = ACTIONS(418),
    [anon_sym_AutoReq] = ACTIONS(418),
    [anon_sym_AutoReqProv] = ACTIONS(418),
    [anon_sym_BugUrl] = ACTIONS(418),
    [anon_sym_BuildRoot] = ACTIONS(418),
    [anon_sym_BuildSystem] = ACTIONS(418),
    [anon_sym_DistTag] = ACTIONS(418),
    [anon_sym_Distribution] = ACTIONS(418),
    [anon_sym_Epoch] = ACTIONS(418),
    [anon_sym_Group] = ACTIONS(418),
    [anon_sym_License] = ACTIONS(418),
    [anon_sym_ModularityLabel] = ACTIONS(418),
    [anon_sym_Name] = ACTIONS(418),
    [anon_sym_NoPatch] = ACTIONS(418),
    [anon_sym_NoSource] = ACTIONS(418),
    [anon_sym_Packager] = ACTIONS(418),
    [anon_sym_Release] = ACTIONS(418),
    [anon_sym_SourceLicense] = ACTIONS(418),
    [anon_sym_Summary] = ACTIONS(418),
    [anon_sym_URL] = ACTIONS(418),
    [anon_sym_Url] = ACTIONS(418),
    [anon_sym_VCS] = ACTIONS(418),
    [anon_sym_Vendor] = ACTIONS(418),
    [anon_sym_Version] = ACTIONS(418),
    [aux_sym_tag_token1] = ACTIONS(418),
    [aux_sym_tag_token2] = ACTIONS(418),
    [anon_sym_Requires] = ACTIONS(418),
    [anon_sym_BuildArch] = ACTIONS(418),
    [anon_sym_BuildArchitectures] = ACTIONS(418),
    [anon_sym_BuildConflicts] = ACTIONS(418),
    [anon_sym_BuildPrereq] = ACTIONS(418),
    [anon_sym_BuildRequires] = ACTIONS(418),
    [anon_sym_Conflicts] = ACTIONS(418),
    [anon_sym_DocDir] = ACTIONS(418),
    [anon_sym_Enhances] = ACTIONS(418),
    [anon_sym_ExcludeArch] = ACTIONS(418),
    [anon_sym_ExcludeOS] = ACTIONS(418),
    [anon_sym_ExclusiveArch] = ACTIONS(418),
    [anon_sym_ExclusiveOS] = ACTIONS(418),
    [anon_sym_Obsoletes] = ACTIONS(418),
    [anon_sym_OrderWithRequires] = ACTIONS(418),
    [anon_sym_Prefix] = ACTIONS(418),
    [anon_sym_Prefixes] = ACTIONS(418),
    [anon_sym_Prereq] = ACTIONS(418),
    [anon_sym_Provides] = ACTIONS(418),
    [anon_sym_Recommends] = ACTIONS(418),
    [anon_sym_RemovePathPostfixes] = ACTIONS(418),
    [anon_sym_Suggests] = ACTIONS(418),
    [anon_sym_Supplements] = ACTIONS(418),
    [anon_sym_PERCENTdescription] = ACTIONS(418),
    [anon_sym_PERCENTpackage] = ACTIONS(418),
    [anon_sym_PERCENTprep] = ACTIONS(418),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(418),
    [anon_sym_PERCENTconf] = ACTIONS(418),
    [anon_sym_PERCENTbuild] = ACTIONS(418),
    [anon_sym_PERCENTinstall] = ACTIONS(418),
    [anon_sym_PERCENTcheck] = ACTIONS(418),
    [anon_sym_PERCENTclean] = ACTIONS(418),
    [anon_sym_PERCENTpre] = ACTIONS(418),
    [anon_sym_PERCENTpost] = ACTIONS(418),
    [anon_sym_PERCENTpreun] = ACTIONS(418),
    [anon_sym_PERCENTpostun] = ACTIONS(418),
    [anon_sym_PERCENTpretrans] = ACTIONS(418),
    [anon_sym_PERCENTposttrans] = ACTIONS(418),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(418),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(418),
    [anon_sym_PERCENTverify] = ACTIONS(418),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(418),
    [anon_sym_PERCENTtriggerin] = ACTIONS(418),
    [anon_sym_PERCENTtriggerun] = ACTIONS(418),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(418),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(418),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(418),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(418),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(418),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(418),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(418),
    [anon_sym_PERCENTfiles] = ACTIONS(418),
    [anon_sym_PERCENTchangelog] = ACTIONS(418),
    [anon_sym_PERCENTglobal] = ACTIONS(418),
    [anon_sym_PERCENTdefine] = ACTIONS(418),
    [anon_sym_PERCENTundefine] = ACTIONS(418),
    [anon_sym_PERCENT] = ACTIONS(418),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(418),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(418),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(420),
    [aux_sym__simple_statements_token1] = ACTIONS(420),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(422),
    [anon_sym_PERCENTifarch] = ACTIONS(422),
    [anon_sym_PERCENTifos] = ACTIONS(422),
    [anon_sym_PERCENTifnarch] = ACTIONS(422),
    [anon_sym_PERCENTifnos] = ACTIONS(422),
    [anon_sym_AutoProv] = ACTIONS(422),
    [anon_sym_AutoReq] = ACTIONS(422),
    [anon_sym_AutoReqProv] = ACTIONS(422),
    [anon_sym_BugUrl] = ACTIONS(422),
    [anon_sym_BuildRoot] = ACTIONS(422),
    [anon_sym_BuildSystem] = ACTIONS(422),
    [anon_sym_DistTag] = ACTIONS(422),
    [anon_sym_Distribution] = ACTIONS(422),
    [anon_sym_Epoch] = ACTIONS(422),
    [anon_sym_Group] = ACTIONS(422),
    [anon_sym_License] = ACTIONS(422),
    [anon_sym_ModularityLabel] = ACTIONS(422),
    [anon_sym_Name] = ACTIONS(422),
    [anon_sym_NoPatch] = ACTIONS(422),
    [anon_sym_NoSource] = ACTIONS(422),
    [anon_sym_Packager] = ACTIONS(422),
    [anon_sym_Release] = ACTIONS(422),
    [anon_sym_SourceLicense] = ACTIONS(422),
    [anon_sym_Summary] = ACTIONS(422),
    [anon_sym_URL] = ACTIONS(422),
    [anon_sym_Url] = ACTIONS(422),
    [anon_sym_VCS] = ACTIONS(422),
    [anon_sym_Vendor] = ACTIONS(422),
    [anon_sym_Version] = ACTIONS(422),
    [aux_sym_tag_token1] = ACTIONS(422),
    [aux_sym_tag_token2] = ACTIONS(422),
    [anon_sym_Requires] = ACTIONS(422),
    [anon_sym_BuildArch] = ACTIONS(422),
    [anon_sym_BuildArchitectures] = ACTIONS(422),
    [anon_sym_BuildConflicts] = ACTIONS(422),
    [anon_sym_BuildPrereq] = ACTIONS(422),
    [anon_sym_BuildRequires] = ACTIONS(422),
    [anon_sym_Conflicts] = ACTIONS(422),
    [anon_sym_DocDir] = ACTIONS(422),
    [anon_sym_Enhances] = ACTIONS(422),
    [anon_sym_ExcludeArch] = ACTIONS(422),
    [anon_sym_ExcludeOS] = ACTIONS(422),
    [anon_sym_ExclusiveArch] = ACTIONS(422),
    [anon_sym_ExclusiveOS] = ACTIONS(422),
    [anon_sym_Obsoletes] = ACTIONS(422),
    [anon_sym_OrderWithRequires] = ACTIONS(422),
    [anon_sym_Prefix] = ACTIONS(422),
    [anon_sym_Prefixes] = ACTIONS(422),
    [anon_sym_Prereq] = ACTIONS(422),
    [anon_sym_Provides] = ACTIONS(422),
    [anon_sym_Recommends] = ACTIONS(422),
    [anon_sym_RemovePathPostfixes] = ACTIONS(422),
    [anon_sym_Suggests] = ACTIONS(422),
    [anon_sym_Supplements] = ACTIONS(422),
    [anon_sym_PERCENTdescription] = ACTIONS(422),
    [anon_sym_PERCENTpackage] = ACTIONS(422),
    [anon_sym_PERCENTprep] = ACTIONS(422),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(422),
    [anon_sym_PERCENTconf] = ACTIONS(422),
    [anon_sym_PERCENTbuild] = ACTIONS(422),
    [anon_sym_PERCENTinstall] = ACTIONS(422),
    [anon_sym_PERCENTcheck] = ACTIONS(422),
    [anon_sym_PERCENTclean] = ACTIONS(422),
    [anon_sym_PERCENTpre] = ACTIONS(422),
    [anon_sym_PERCENTpost] = ACTIONS(422),
    [anon_sym_PERCENTpreun] = ACTIONS(422),
    [anon_sym_PERCENTpostun] = ACTIONS(422),
    [anon_sym_PERCENTpretrans] = ACTIONS(422),
    [anon_sym_PERCENTposttrans] = ACTIONS(422),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(422),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(422),
    [anon_sym_PERCENTverify] = ACTIONS(422),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(422),
    [anon_sym_PERCENTtriggerin] = ACTIONS(422),
    [anon_sym_PERCENTtriggerun] = ACTIONS(422),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(422),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(422),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(422),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(422),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(422),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(422),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(422),
    [anon_sym_PERCENTfiles] = ACTIONS(422),
    [anon_sym_PERCENTchangelog] = ACTIONS(422),
    [anon_sym_PERCENTglobal] = ACTIONS(422),
    [anon_sym_PERCENTdefine] = ACTIONS(422),
    [anon_sym_PERCENTundefine] = ACTIONS(422),
    [anon_sym_PERCENT] = ACTIONS(422),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(422),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(422),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(424),
    [aux_sym__simple_statements_token1] = ACTIONS(424),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(426),
    [anon_sym_PERCENTifarch] = ACTIONS(426),
    [anon_sym_PERCENTifos] = ACTIONS(426),
    [anon_sym_PERCENTifnarch] = ACTIONS(426),
    [anon_sym_PERCENTifnos] = ACTIONS(426),
    [anon_sym_AutoProv] = ACTIONS(426),
    [anon_sym_AutoReq] = ACTIONS(426),
    [anon_sym_AutoReqProv] = ACTIONS(426),
    [anon_sym_BugUrl] = ACTIONS(426),
    [anon_sym_BuildRoot] = ACTIONS(426),
    [anon_sym_BuildSystem] = ACTIONS(426),
    [anon_sym_DistTag] = ACTIONS(426),
    [anon_sym_Distribution] = ACTIONS(426),
    [anon_sym_Epoch] = ACTIONS(426),
    [anon_sym_Group] = ACTIONS(426),
    [anon_sym_License] = ACTIONS(426),
    [anon_sym_ModularityLabel] = ACTIONS(426),
    [anon_sym_Name] = ACTIONS(426),
    [anon_sym_NoPatch] = ACTIONS(426),
    [anon_sym_NoSource] = ACTIONS(426),
    [anon_sym_Packager] = ACTIONS(426),
    [anon_sym_Release] = ACTIONS(426),
    [anon_sym_SourceLicense] = ACTIONS(426),
    [anon_sym_Summary] = ACTIONS(426),
    [anon_sym_URL] = ACTIONS(426),
    [anon_sym_Url] = ACTIONS(426),
    [anon_sym_VCS] = ACTIONS(426),
    [anon_sym_Vendor] = ACTIONS(426),
    [anon_sym_Version] = ACTIONS(426),
    [aux_sym_tag_token1] = ACTIONS(426),
    [aux_sym_tag_token2] = ACTIONS(426),
    [anon_sym_Requires] = ACTIONS(426),
    [anon_sym_BuildArch] = ACTIONS(426),
    [anon_sym_BuildArchitectures] = ACTIONS(426),
    [anon_sym_BuildConflicts] = ACTIONS(426),
    [anon_sym_BuildPrereq] = ACTIONS(426),
    [anon_sym_BuildRequires] = ACTIONS(426),
    [anon_sym_Conflicts] = ACTIONS(426),
    [anon_sym_DocDir] = ACTIONS(426),
    [anon_sym_Enhances] = ACTIONS(426),
    [anon_sym_ExcludeArch] = ACTIONS(426),
    [anon_sym_ExcludeOS] = ACTIONS(426),
    [anon_sym_ExclusiveArch] = ACTIONS(426),
    [anon_sym_ExclusiveOS] = ACTIONS(426),
    [anon_sym_Obsoletes] = ACTIONS(426),
    [anon_sym_OrderWithRequires] = ACTIONS(426),
    [anon_sym_Prefix] = ACTIONS(426),
    [anon_sym_Prefixes] = ACTIONS(426),
    [anon_sym_Prereq] = ACTIONS(426),
    [anon_sym_Provides] = ACTIONS(426),
    [anon_sym_Recommends] = ACTIONS(426),
    [anon_sym_RemovePathPostfixes] = ACTIONS(426),
    [anon_sym_Suggests] = ACTIONS(426),
    [anon_sym_Supplements] = ACTIONS(426),
    [anon_sym_PERCENTdescription] = ACTIONS(426),
    [anon_sym_PERCENTpackage] = ACTIONS(426),
    [anon_sym_PERCENTprep] = ACTIONS(426),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(426),
    [anon_sym_PERCENTconf] = ACTIONS(426),
    [anon_sym_PERCENTbuild] = ACTIONS(426),
    [anon_sym_PERCENTinstall] = ACTIONS(426),
    [anon_sym_PERCENTcheck] = ACTIONS(426),
    [anon_sym_PERCENTclean] = ACTIONS(426),
    [anon_sym_PERCENTpre] = ACTIONS(426),
    [anon_sym_PERCENTpost] = ACTIONS(426),
    [anon_sym_PERCENTpreun] = ACTIONS(426),
    [anon_sym_PERCENTpostun] = ACTIONS(426),
    [anon_sym_PERCENTpretrans] = ACTIONS(426),
    [anon_sym_PERCENTposttrans] = ACTIONS(426),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(426),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(426),
    [anon_sym_PERCENTverify] = ACTIONS(426),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(426),
    [anon_sym_PERCENTtriggerin] = ACTIONS(426),
    [anon_sym_PERCENTtriggerun] = ACTIONS(426),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(426),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(426),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(426),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(426),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(426),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(426),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(426),
    [anon_sym_PERCENTfiles] = ACTIONS(426),
    [anon_sym_PERCENTchangelog] = ACTIONS(426),
    [anon_sym_PERCENTglobal] = ACTIONS(426),
    [anon_sym_PERCENTdefine] = ACTIONS(426),
    [anon_sym_PERCENTundefine] = ACTIONS(426),
    [anon_sym_PERCENT] = ACTIONS(426),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(426),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(426),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [aux_sym__simple_statements_token1] = ACTIONS(360),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(362),
    [anon_sym_PERCENTifarch] = ACTIONS(362),
    [anon_sym_PERCENTifos] = ACTIONS(362),
    [anon_sym_PERCENTifnarch] = ACTIONS(362),
    [anon_sym_PERCENTifnos] = ACTIONS(362),
    [anon_sym_AutoProv] = ACTIONS(362),
    [anon_sym_AutoReq] = ACTIONS(362),
    [anon_sym_AutoReqProv] = ACTIONS(362),
    [anon_sym_BugUrl] = ACTIONS(362),
    [anon_sym_BuildRoot] = ACTIONS(362),
    [anon_sym_BuildSystem] = ACTIONS(362),
    [anon_sym_DistTag] = ACTIONS(362),
    [anon_sym_Distribution] = ACTIONS(362),
    [anon_sym_Epoch] = ACTIONS(362),
    [anon_sym_Group] = ACTIONS(362),
    [anon_sym_License] = ACTIONS(362),
    [anon_sym_ModularityLabel] = ACTIONS(362),
    [anon_sym_Name] = ACTIONS(362),
    [anon_sym_NoPatch] = ACTIONS(362),
    [anon_sym_NoSource] = ACTIONS(362),
    [anon_sym_Packager] = ACTIONS(362),
    [anon_sym_Release] = ACTIONS(362),
    [anon_sym_SourceLicense] = ACTIONS(362),
    [anon_sym_Summary] = ACTIONS(362),
    [anon_sym_URL] = ACTIONS(362),
    [anon_sym_Url] = ACTIONS(362),
    [anon_sym_VCS] = ACTIONS(362),
    [anon_sym_Vendor] = ACTIONS(362),
    [anon_sym_Version] = ACTIONS(362),
    [aux_sym_tag_token1] = ACTIONS(362),
    [aux_sym_tag_token2] = ACTIONS(362),
    [anon_sym_Requires] = ACTIONS(362),
    [anon_sym_BuildArch] = ACTIONS(362),
    [anon_sym_BuildArchitectures] = ACTIONS(362),
    [anon_sym_BuildConflicts] = ACTIONS(362),
    [anon_sym_BuildPrereq] = ACTIONS(362),
    [anon_sym_BuildRequires] = ACTIONS(362),
    [anon_sym_Conflicts] = ACTIONS(362),
    [anon_sym_DocDir] = ACTIONS(362),
    [anon_sym_Enhances] = ACTIONS(362),
    [anon_sym_ExcludeArch] = ACTIONS(362),
    [anon_sym_ExcludeOS] = ACTIONS(362),
    [anon_sym_ExclusiveArch] = ACTIONS(362),
    [anon_sym_ExclusiveOS] = ACTIONS(362),
    [anon_sym_Obsoletes] = ACTIONS(362),
    [anon_sym_OrderWithRequires] = ACTIONS(362),
    [anon_sym_Prefix] = ACTIONS(362),
    [anon_sym_Prefixes] = ACTIONS(362),
    [anon_sym_Prereq] = ACTIONS(362),
    [anon_sym_Provides] = ACTIONS(362),
    [anon_sym_Recommends] = ACTIONS(362),
    [anon_sym_RemovePathPostfixes] = ACTIONS(362),
    [anon_sym_Suggests] = ACTIONS(362),
    [anon_sym_Supplements] = ACTIONS(362),
    [anon_sym_PERCENTdescription] = ACTIONS(362),
    [anon_sym_PERCENTpackage] = ACTIONS(362),
    [anon_sym_PERCENTprep] = ACTIONS(362),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(362),
    [anon_sym_PERCENTconf] = ACTIONS(362),
    [anon_sym_PERCENTbuild] = ACTIONS(362),
    [anon_sym_PERCENTinstall] = ACTIONS(362),
    [anon_sym_PERCENTcheck] = ACTIONS(362),
    [anon_sym_PERCENTclean] = ACTIONS(362),
    [anon_sym_PERCENTpre] = ACTIONS(362),
    [anon_sym_PERCENTpost] = ACTIONS(362),
    [anon_sym_PERCENTpreun] = ACTIONS(362),
    [anon_sym_PERCENTpostun] = ACTIONS(362),
    [anon_sym_PERCENTpretrans] = ACTIONS(362),
    [anon_sym_PERCENTposttrans] = ACTIONS(362),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(362),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(362),
    [anon_sym_PERCENTverify] = ACTIONS(362),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(362),
    [anon_sym_PERCENTtriggerin] = ACTIONS(362),
    [anon_sym_PERCENTtriggerun] = ACTIONS(362),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(362),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(362),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(362),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(362),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(362),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(362),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(362),
    [anon_sym_PERCENTfiles] = ACTIONS(362),
    [anon_sym_PERCENTchangelog] = ACTIONS(362),
    [anon_sym_PERCENTglobal] = ACTIONS(362),
    [anon_sym_PERCENTdefine] = ACTIONS(362),
    [anon_sym_PERCENTundefine] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(362),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(362),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [aux_sym__simple_statements_token1] = ACTIONS(380),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(382),
    [anon_sym_PERCENTifarch] = ACTIONS(382),
    [anon_sym_PERCENTifos] = ACTIONS(382),
    [anon_sym_PERCENTifnarch] = ACTIONS(382),
    [anon_sym_PERCENTifnos] = ACTIONS(382),
    [anon_sym_AutoProv] = ACTIONS(382),
    [anon_sym_AutoReq] = ACTIONS(382),
    [anon_sym_AutoReqProv] = ACTIONS(382),
    [anon_sym_BugUrl] = ACTIONS(382),
    [anon_sym_BuildRoot] = ACTIONS(382),
    [anon_sym_BuildSystem] = ACTIONS(382),
    [anon_sym_DistTag] = ACTIONS(382),
    [anon_sym_Distribution] = ACTIONS(382),
    [anon_sym_Epoch] = ACTIONS(382),
    [anon_sym_Group] = ACTIONS(382),
    [anon_sym_License] = ACTIONS(382),
    [anon_sym_ModularityLabel] = ACTIONS(382),
    [anon_sym_Name] = ACTIONS(382),
    [anon_sym_NoPatch] = ACTIONS(382),
    [anon_sym_NoSource] = ACTIONS(382),
    [anon_sym_Packager] = ACTIONS(382),
    [anon_sym_Release] = ACTIONS(382),
    [anon_sym_SourceLicense] = ACTIONS(382),
    [anon_sym_Summary] = ACTIONS(382),
    [anon_sym_URL] = ACTIONS(382),
    [anon_sym_Url] = ACTIONS(382),
    [anon_sym_VCS] = ACTIONS(382),
    [anon_sym_Vendor] = ACTIONS(382),
    [anon_sym_Version] = ACTIONS(382),
    [aux_sym_tag_token1] = ACTIONS(382),
    [aux_sym_tag_token2] = ACTIONS(382),
    [anon_sym_Requires] = ACTIONS(382),
    [anon_sym_BuildArch] = ACTIONS(382),
    [anon_sym_BuildArchitectures] = ACTIONS(382),
    [anon_sym_BuildConflicts] = ACTIONS(382),
    [anon_sym_BuildPrereq] = ACTIONS(382),
    [anon_sym_BuildRequires] = ACTIONS(382),
    [anon_sym_Conflicts] = ACTIONS(382),
    [anon_sym_DocDir] = ACTIONS(382),
    [anon_sym_Enhances] = ACTIONS(382),
    [anon_sym_ExcludeArch] = ACTIONS(382),
    [anon_sym_ExcludeOS] = ACTIONS(382),
    [anon_sym_ExclusiveArch] = ACTIONS(382),
    [anon_sym_ExclusiveOS] = ACTIONS(382),
    [anon_sym_Obsoletes] = ACTIONS(382),
    [anon_sym_OrderWithRequires] = ACTIONS(382),
    [anon_sym_Prefix] = ACTIONS(382),
    [anon_sym_Prefixes] = ACTIONS(382),
    [anon_sym_Prereq] = ACTIONS(382),
    [anon_sym_Provides] = ACTIONS(382),
    [anon_sym_Recommends] = ACTIONS(382),
    [anon_sym_RemovePathPostfixes] = ACTIONS(382),
    [anon_sym_Suggests] = ACTIONS(382),
    [anon_sym_Supplements] = ACTIONS(382),
    [anon_sym_PERCENTdescription] = ACTIONS(382),
    [anon_sym_PERCENTpackage] = ACTIONS(382),
    [anon_sym_PERCENTprep] = ACTIONS(382),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(382),
    [anon_sym_PERCENTconf] = ACTIONS(382),
    [anon_sym_PERCENTbuild] = ACTIONS(382),
    [anon_sym_PERCENTinstall] = ACTIONS(382),
    [anon_sym_PERCENTcheck] = ACTIONS(382),
    [anon_sym_PERCENTclean] = ACTIONS(382),
    [anon_sym_PERCENTpre] = ACTIONS(382),
    [anon_sym_PERCENTpost] = ACTIONS(382),
    [anon_sym_PERCENTpreun] = ACTIONS(382),
    [anon_sym_PERCENTpostun] = ACTIONS(382),
    [anon_sym_PERCENTpretrans] = ACTIONS(382),
    [anon_sym_PERCENTposttrans] = ACTIONS(382),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(382),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(382),
    [anon_sym_PERCENTverify] = ACTIONS(382),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(382),
    [anon_sym_PERCENTtriggerin] = ACTIONS(382),
    [anon_sym_PERCENTtriggerun] = ACTIONS(382),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(382),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(382),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(382),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(382),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(382),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(382),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(382),
    [anon_sym_PERCENTfiles] = ACTIONS(382),
    [anon_sym_PERCENTchangelog] = ACTIONS(382),
    [anon_sym_PERCENTglobal] = ACTIONS(382),
    [anon_sym_PERCENTdefine] = ACTIONS(382),
    [anon_sym_PERCENTundefine] = ACTIONS(382),
    [anon_sym_PERCENT] = ACTIONS(382),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(382),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(382),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [aux_sym__simple_statements_token1] = ACTIONS(428),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(430),
    [anon_sym_PERCENTifarch] = ACTIONS(430),
    [anon_sym_PERCENTifos] = ACTIONS(430),
    [anon_sym_PERCENTifnarch] = ACTIONS(430),
    [anon_sym_PERCENTifnos] = ACTIONS(430),
    [anon_sym_AutoProv] = ACTIONS(430),
    [anon_sym_AutoReq] = ACTIONS(430),
    [anon_sym_AutoReqProv] = ACTIONS(430),
    [anon_sym_BugUrl] = ACTIONS(430),
    [anon_sym_BuildRoot] = ACTIONS(430),
    [anon_sym_BuildSystem] = ACTIONS(430),
    [anon_sym_DistTag] = ACTIONS(430),
    [anon_sym_Distribution] = ACTIONS(430),
    [anon_sym_Epoch] = ACTIONS(430),
    [anon_sym_Group] = ACTIONS(430),
    [anon_sym_License] = ACTIONS(430),
    [anon_sym_ModularityLabel] = ACTIONS(430),
    [anon_sym_Name] = ACTIONS(430),
    [anon_sym_NoPatch] = ACTIONS(430),
    [anon_sym_NoSource] = ACTIONS(430),
    [anon_sym_Packager] = ACTIONS(430),
    [anon_sym_Release] = ACTIONS(430),
    [anon_sym_SourceLicense] = ACTIONS(430),
    [anon_sym_Summary] = ACTIONS(430),
    [anon_sym_URL] = ACTIONS(430),
    [anon_sym_Url] = ACTIONS(430),
    [anon_sym_VCS] = ACTIONS(430),
    [anon_sym_Vendor] = ACTIONS(430),
    [anon_sym_Version] = ACTIONS(430),
    [aux_sym_tag_token1] = ACTIONS(430),
    [aux_sym_tag_token2] = ACTIONS(430),
    [anon_sym_Requires] = ACTIONS(430),
    [anon_sym_BuildArch] = ACTIONS(430),
    [anon_sym_BuildArchitectures] = ACTIONS(430),
    [anon_sym_BuildConflicts] = ACTIONS(430),
    [anon_sym_BuildPrereq] = ACTIONS(430),
    [anon_sym_BuildRequires] = ACTIONS(430),
    [anon_sym_Conflicts] = ACTIONS(430),
    [anon_sym_DocDir] = ACTIONS(430),
    [anon_sym_Enhances] = ACTIONS(430),
    [anon_sym_ExcludeArch] = ACTIONS(430),
    [anon_sym_ExcludeOS] = ACTIONS(430),
    [anon_sym_ExclusiveArch] = ACTIONS(430),
    [anon_sym_ExclusiveOS] = ACTIONS(430),
    [anon_sym_Obsoletes] = ACTIONS(430),
    [anon_sym_OrderWithRequires] = ACTIONS(430),
    [anon_sym_Prefix] = ACTIONS(430),
    [anon_sym_Prefixes] = ACTIONS(430),
    [anon_sym_Prereq] = ACTIONS(430),
    [anon_sym_Provides] = ACTIONS(430),
    [anon_sym_Recommends] = ACTIONS(430),
    [anon_sym_RemovePathPostfixes] = ACTIONS(430),
    [anon_sym_Suggests] = ACTIONS(430),
    [anon_sym_Supplements] = ACTIONS(430),
    [anon_sym_PERCENTdescription] = ACTIONS(430),
    [anon_sym_PERCENTpackage] = ACTIONS(430),
    [anon_sym_PERCENTprep] = ACTIONS(430),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(430),
    [anon_sym_PERCENTconf] = ACTIONS(430),
    [anon_sym_PERCENTbuild] = ACTIONS(430),
    [anon_sym_PERCENTinstall] = ACTIONS(430),
    [anon_sym_PERCENTcheck] = ACTIONS(430),
    [anon_sym_PERCENTclean] = ACTIONS(430),
    [anon_sym_PERCENTpre] = ACTIONS(430),
    [anon_sym_PERCENTpost] = ACTIONS(430),
    [anon_sym_PERCENTpreun] = ACTIONS(430),
    [anon_sym_PERCENTpostun] = ACTIONS(430),
    [anon_sym_PERCENTpretrans] = ACTIONS(430),
    [anon_sym_PERCENTposttrans] = ACTIONS(430),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(430),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(430),
    [anon_sym_PERCENTverify] = ACTIONS(430),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(430),
    [anon_sym_PERCENTtriggerin] = ACTIONS(430),
    [anon_sym_PERCENTtriggerun] = ACTIONS(430),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(430),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(430),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(430),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(430),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(430),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(430),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(430),
    [anon_sym_PERCENTfiles] = ACTIONS(430),
    [anon_sym_PERCENTchangelog] = ACTIONS(430),
    [anon_sym_PERCENTglobal] = ACTIONS(430),
    [anon_sym_PERCENTdefine] = ACTIONS(430),
    [anon_sym_PERCENTundefine] = ACTIONS(430),
    [anon_sym_PERCENT] = ACTIONS(430),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(430),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(430),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [aux_sym__simple_statements_token1] = ACTIONS(432),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(434),
    [anon_sym_PERCENTifarch] = ACTIONS(434),
    [anon_sym_PERCENTifos] = ACTIONS(434),
    [anon_sym_PERCENTifnarch] = ACTIONS(434),
    [anon_sym_PERCENTifnos] = ACTIONS(434),
    [anon_sym_AutoProv] = ACTIONS(434),
    [anon_sym_AutoReq] = ACTIONS(434),
    [anon_sym_AutoReqProv] = ACTIONS(434),
    [anon_sym_BugUrl] = ACTIONS(434),
    [anon_sym_BuildRoot] = ACTIONS(434),
    [anon_sym_BuildSystem] = ACTIONS(434),
    [anon_sym_DistTag] = ACTIONS(434),
    [anon_sym_Distribution] = ACTIONS(434),
    [anon_sym_Epoch] = ACTIONS(434),
    [anon_sym_Group] = ACTIONS(434),
    [anon_sym_License] = ACTIONS(434),
    [anon_sym_ModularityLabel] = ACTIONS(434),
    [anon_sym_Name] = ACTIONS(434),
    [anon_sym_NoPatch] = ACTIONS(434),
    [anon_sym_NoSource] = ACTIONS(434),
    [anon_sym_Packager] = ACTIONS(434),
    [anon_sym_Release] = ACTIONS(434),
    [anon_sym_SourceLicense] = ACTIONS(434),
    [anon_sym_Summary] = ACTIONS(434),
    [anon_sym_URL] = ACTIONS(434),
    [anon_sym_Url] = ACTIONS(434),
    [anon_sym_VCS] = ACTIONS(434),
    [anon_sym_Vendor] = ACTIONS(434),
    [anon_sym_Version] = ACTIONS(434),
    [aux_sym_tag_token1] = ACTIONS(434),
    [aux_sym_tag_token2] = ACTIONS(434),
    [anon_sym_Requires] = ACTIONS(434),
    [anon_sym_BuildArch] = ACTIONS(434),
    [anon_sym_BuildArchitectures] = ACTIONS(434),
    [anon_sym_BuildConflicts] = ACTIONS(434),
    [anon_sym_BuildPrereq] = ACTIONS(434),
    [anon_sym_BuildRequires] = ACTIONS(434),
    [anon_sym_Conflicts] = ACTIONS(434),
    [anon_sym_DocDir] = ACTIONS(434),
    [anon_sym_Enhances] = ACTIONS(434),
    [anon_sym_ExcludeArch] = ACTIONS(434),
    [anon_sym_ExcludeOS] = ACTIONS(434),
    [anon_sym_ExclusiveArch] = ACTIONS(434),
    [anon_sym_ExclusiveOS] = ACTIONS(434),
    [anon_sym_Obsoletes] = ACTIONS(434),
    [anon_sym_OrderWithRequires] = ACTIONS(434),
    [anon_sym_Prefix] = ACTIONS(434),
    [anon_sym_Prefixes] = ACTIONS(434),
    [anon_sym_Prereq] = ACTIONS(434),
    [anon_sym_Provides] = ACTIONS(434),
    [anon_sym_Recommends] = ACTIONS(434),
    [anon_sym_RemovePathPostfixes] = ACTIONS(434),
    [anon_sym_Suggests] = ACTIONS(434),
    [anon_sym_Supplements] = ACTIONS(434),
    [anon_sym_PERCENTdescription] = ACTIONS(434),
    [anon_sym_PERCENTpackage] = ACTIONS(434),
    [anon_sym_PERCENTprep] = ACTIONS(434),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(434),
    [anon_sym_PERCENTconf] = ACTIONS(434),
    [anon_sym_PERCENTbuild] = ACTIONS(434),
    [anon_sym_PERCENTinstall] = ACTIONS(434),
    [anon_sym_PERCENTcheck] = ACTIONS(434),
    [anon_sym_PERCENTclean] = ACTIONS(434),
    [anon_sym_PERCENTpre] = ACTIONS(434),
    [anon_sym_PERCENTpost] = ACTIONS(434),
    [anon_sym_PERCENTpreun] = ACTIONS(434),
    [anon_sym_PERCENTpostun] = ACTIONS(434),
    [anon_sym_PERCENTpretrans] = ACTIONS(434),
    [anon_sym_PERCENTposttrans] = ACTIONS(434),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(434),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(434),
    [anon_sym_PERCENTverify] = ACTIONS(434),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(434),
    [anon_sym_PERCENTtriggerin] = ACTIONS(434),
    [anon_sym_PERCENTtriggerun] = ACTIONS(434),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(434),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(434),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(434),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(434),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(434),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(434),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(434),
    [anon_sym_PERCENTfiles] = ACTIONS(434),
    [anon_sym_PERCENTchangelog] = ACTIONS(434),
    [anon_sym_PERCENTglobal] = ACTIONS(434),
    [anon_sym_PERCENTdefine] = ACTIONS(434),
    [anon_sym_PERCENTundefine] = ACTIONS(434),
    [anon_sym_PERCENT] = ACTIONS(434),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(434),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(434),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [aux_sym__simple_statements_token1] = ACTIONS(372),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(374),
    [anon_sym_PERCENTifarch] = ACTIONS(374),
    [anon_sym_PERCENTifos] = ACTIONS(374),
    [anon_sym_PERCENTifnarch] = ACTIONS(374),
    [anon_sym_PERCENTifnos] = ACTIONS(374),
    [anon_sym_AutoProv] = ACTIONS(374),
    [anon_sym_AutoReq] = ACTIONS(374),
    [anon_sym_AutoReqProv] = ACTIONS(374),
    [anon_sym_BugUrl] = ACTIONS(374),
    [anon_sym_BuildRoot] = ACTIONS(374),
    [anon_sym_BuildSystem] = ACTIONS(374),
    [anon_sym_DistTag] = ACTIONS(374),
    [anon_sym_Distribution] = ACTIONS(374),
    [anon_sym_Epoch] = ACTIONS(374),
    [anon_sym_Group] = ACTIONS(374),
    [anon_sym_License] = ACTIONS(374),
    [anon_sym_ModularityLabel] = ACTIONS(374),
    [anon_sym_Name] = ACTIONS(374),
    [anon_sym_NoPatch] = ACTIONS(374),
    [anon_sym_NoSource] = ACTIONS(374),
    [anon_sym_Packager] = ACTIONS(374),
    [anon_sym_Release] = ACTIONS(374),
    [anon_sym_SourceLicense] = ACTIONS(374),
    [anon_sym_Summary] = ACTIONS(374),
    [anon_sym_URL] = ACTIONS(374),
    [anon_sym_Url] = ACTIONS(374),
    [anon_sym_VCS] = ACTIONS(374),
    [anon_sym_Vendor] = ACTIONS(374),
    [anon_sym_Version] = ACTIONS(374),
    [aux_sym_tag_token1] = ACTIONS(374),
    [aux_sym_tag_token2] = ACTIONS(374),
    [anon_sym_Requires] = ACTIONS(374),
    [anon_sym_BuildArch] = ACTIONS(374),
    [anon_sym_BuildArchitectures] = ACTIONS(374),
    [anon_sym_BuildConflicts] = ACTIONS(374),
    [anon_sym_BuildPrereq] = ACTIONS(374),
    [anon_sym_BuildRequires] = ACTIONS(374),
    [anon_sym_Conflicts] = ACTIONS(374),
    [anon_sym_DocDir] = ACTIONS(374),
    [anon_sym_Enhances] = ACTIONS(374),
    [anon_sym_ExcludeArch] = ACTIONS(374),
    [anon_sym_ExcludeOS] = ACTIONS(374),
    [anon_sym_ExclusiveArch] = ACTIONS(374),
    [anon_sym_ExclusiveOS] = ACTIONS(374),
    [anon_sym_Obsoletes] = ACTIONS(374),
    [anon_sym_OrderWithRequires] = ACTIONS(374),
    [anon_sym_Prefix] = ACTIONS(374),
    [anon_sym_Prefixes] = ACTIONS(374),
    [anon_sym_Prereq] = ACTIONS(374),
    [anon_sym_Provides] = ACTIONS(374),
    [anon_sym_Recommends] = ACTIONS(374),
    [anon_sym_RemovePathPostfixes] = ACTIONS(374),
    [anon_sym_Suggests] = ACTIONS(374),
    [anon_sym_Supplements] = ACTIONS(374),
    [anon_sym_PERCENTdescription] = ACTIONS(374),
    [anon_sym_PERCENTpackage] = ACTIONS(374),
    [anon_sym_PERCENTprep] = ACTIONS(374),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(374),
    [anon_sym_PERCENTconf] = ACTIONS(374),
    [anon_sym_PERCENTbuild] = ACTIONS(374),
    [anon_sym_PERCENTinstall] = ACTIONS(374),
    [anon_sym_PERCENTcheck] = ACTIONS(374),
    [anon_sym_PERCENTclean] = ACTIONS(374),
    [anon_sym_PERCENTpre] = ACTIONS(374),
    [anon_sym_PERCENTpost] = ACTIONS(374),
    [anon_sym_PERCENTpreun] = ACTIONS(374),
    [anon_sym_PERCENTpostun] = ACTIONS(374),
    [anon_sym_PERCENTpretrans] = ACTIONS(374),
    [anon_sym_PERCENTposttrans] = ACTIONS(374),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(374),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(374),
    [anon_sym_PERCENTverify] = ACTIONS(374),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(374),
    [anon_sym_PERCENTtriggerin] = ACTIONS(374),
    [anon_sym_PERCENTtriggerun] = ACTIONS(374),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(374),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(374),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(374),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(374),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(374),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(374),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(374),
    [anon_sym_PERCENTfiles] = ACTIONS(374),
    [anon_sym_PERCENTchangelog] = ACTIONS(374),
    [anon_sym_PERCENTglobal] = ACTIONS(374),
    [anon_sym_PERCENTdefine] = ACTIONS(374),
    [anon_sym_PERCENTundefine] = ACTIONS(374),
    [anon_sym_PERCENT] = ACTIONS(374),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(374),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(374),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [aux_sym__simple_statements_token1] = ACTIONS(376),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(378),
    [anon_sym_PERCENTifarch] = ACTIONS(378),
    [anon_sym_PERCENTifos] = ACTIONS(378),
    [anon_sym_PERCENTifnarch] = ACTIONS(378),
    [anon_sym_PERCENTifnos] = ACTIONS(378),
    [anon_sym_AutoProv] = ACTIONS(378),
    [anon_sym_AutoReq] = ACTIONS(378),
    [anon_sym_AutoReqProv] = ACTIONS(378),
    [anon_sym_BugUrl] = ACTIONS(378),
    [anon_sym_BuildRoot] = ACTIONS(378),
    [anon_sym_BuildSystem] = ACTIONS(378),
    [anon_sym_DistTag] = ACTIONS(378),
    [anon_sym_Distribution] = ACTIONS(378),
    [anon_sym_Epoch] = ACTIONS(378),
    [anon_sym_Group] = ACTIONS(378),
    [anon_sym_License] = ACTIONS(378),
    [anon_sym_ModularityLabel] = ACTIONS(378),
    [anon_sym_Name] = ACTIONS(378),
    [anon_sym_NoPatch] = ACTIONS(378),
    [anon_sym_NoSource] = ACTIONS(378),
    [anon_sym_Packager] = ACTIONS(378),
    [anon_sym_Release] = ACTIONS(378),
    [anon_sym_SourceLicense] = ACTIONS(378),
    [anon_sym_Summary] = ACTIONS(378),
    [anon_sym_URL] = ACTIONS(378),
    [anon_sym_Url] = ACTIONS(378),
    [anon_sym_VCS] = ACTIONS(378),
    [anon_sym_Vendor] = ACTIONS(378),
    [anon_sym_Version] = ACTIONS(378),
    [aux_sym_tag_token1] = ACTIONS(378),
    [aux_sym_tag_token2] = ACTIONS(378),
    [anon_sym_Requires] = ACTIONS(378),
    [anon_sym_BuildArch] = ACTIONS(378),
    [anon_sym_BuildArchitectures] = ACTIONS(378),
    [anon_sym_BuildConflicts] = ACTIONS(378),
    [anon_sym_BuildPrereq] = ACTIONS(378),
    [anon_sym_BuildRequires] = ACTIONS(378),
    [anon_sym_Conflicts] = ACTIONS(378),
    [anon_sym_DocDir] = ACTIONS(378),
    [anon_sym_Enhances] = ACTIONS(378),
    [anon_sym_ExcludeArch] = ACTIONS(378),
    [anon_sym_ExcludeOS] = ACTIONS(378),
    [anon_sym_ExclusiveArch] = ACTIONS(378),
    [anon_sym_ExclusiveOS] = ACTIONS(378),
    [anon_sym_Obsoletes] = ACTIONS(378),
    [anon_sym_OrderWithRequires] = ACTIONS(378),
    [anon_sym_Prefix] = ACTIONS(378),
    [anon_sym_Prefixes] = ACTIONS(378),
    [anon_sym_Prereq] = ACTIONS(378),
    [anon_sym_Provides] = ACTIONS(378),
    [anon_sym_Recommends] = ACTIONS(378),
    [anon_sym_RemovePathPostfixes] = ACTIONS(378),
    [anon_sym_Suggests] = ACTIONS(378),
    [anon_sym_Supplements] = ACTIONS(378),
    [anon_sym_PERCENTdescription] = ACTIONS(378),
    [anon_sym_PERCENTpackage] = ACTIONS(378),
    [anon_sym_PERCENTprep] = ACTIONS(378),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(378),
    [anon_sym_PERCENTconf] = ACTIONS(378),
    [anon_sym_PERCENTbuild] = ACTIONS(378),
    [anon_sym_PERCENTinstall] = ACTIONS(378),
    [anon_sym_PERCENTcheck] = ACTIONS(378),
    [anon_sym_PERCENTclean] = ACTIONS(378),
    [anon_sym_PERCENTpre] = ACTIONS(378),
    [anon_sym_PERCENTpost] = ACTIONS(378),
    [anon_sym_PERCENTpreun] = ACTIONS(378),
    [anon_sym_PERCENTpostun] = ACTIONS(378),
    [anon_sym_PERCENTpretrans] = ACTIONS(378),
    [anon_sym_PERCENTposttrans] = ACTIONS(378),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(378),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(378),
    [anon_sym_PERCENTverify] = ACTIONS(378),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(378),
    [anon_sym_PERCENTtriggerin] = ACTIONS(378),
    [anon_sym_PERCENTtriggerun] = ACTIONS(378),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(378),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(378),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(378),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(378),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(378),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(378),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(378),
    [anon_sym_PERCENTfiles] = ACTIONS(378),
    [anon_sym_PERCENTchangelog] = ACTIONS(378),
    [anon_sym_PERCENTglobal] = ACTIONS(378),
    [anon_sym_PERCENTdefine] = ACTIONS(378),
    [anon_sym_PERCENTundefine] = ACTIONS(378),
    [anon_sym_PERCENT] = ACTIONS(378),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(378),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(378),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(436),
    [aux_sym__simple_statements_token1] = ACTIONS(436),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(438),
    [anon_sym_PERCENTifarch] = ACTIONS(438),
    [anon_sym_PERCENTifos] = ACTIONS(438),
    [anon_sym_PERCENTifnarch] = ACTIONS(438),
    [anon_sym_PERCENTifnos] = ACTIONS(438),
    [anon_sym_AutoProv] = ACTIONS(438),
    [anon_sym_AutoReq] = ACTIONS(438),
    [anon_sym_AutoReqProv] = ACTIONS(438),
    [anon_sym_BugUrl] = ACTIONS(438),
    [anon_sym_BuildRoot] = ACTIONS(438),
    [anon_sym_BuildSystem] = ACTIONS(438),
    [anon_sym_DistTag] = ACTIONS(438),
    [anon_sym_Distribution] = ACTIONS(438),
    [anon_sym_Epoch] = ACTIONS(438),
    [anon_sym_Group] = ACTIONS(438),
    [anon_sym_License] = ACTIONS(438),
    [anon_sym_ModularityLabel] = ACTIONS(438),
    [anon_sym_Name] = ACTIONS(438),
    [anon_sym_NoPatch] = ACTIONS(438),
    [anon_sym_NoSource] = ACTIONS(438),
    [anon_sym_Packager] = ACTIONS(438),
    [anon_sym_Release] = ACTIONS(438),
    [anon_sym_SourceLicense] = ACTIONS(438),
    [anon_sym_Summary] = ACTIONS(438),
    [anon_sym_URL] = ACTIONS(438),
    [anon_sym_Url] = ACTIONS(438),
    [anon_sym_VCS] = ACTIONS(438),
    [anon_sym_Vendor] = ACTIONS(438),
    [anon_sym_Version] = ACTIONS(438),
    [aux_sym_tag_token1] = ACTIONS(438),
    [aux_sym_tag_token2] = ACTIONS(438),
    [anon_sym_Requires] = ACTIONS(438),
    [anon_sym_BuildArch] = ACTIONS(438),
    [anon_sym_BuildArchitectures] = ACTIONS(438),
    [anon_sym_BuildConflicts] = ACTIONS(438),
    [anon_sym_BuildPrereq] = ACTIONS(438),
    [anon_sym_BuildRequires] = ACTIONS(438),
    [anon_sym_Conflicts] = ACTIONS(438),
    [anon_sym_DocDir] = ACTIONS(438),
    [anon_sym_Enhances] = ACTIONS(438),
    [anon_sym_ExcludeArch] = ACTIONS(438),
    [anon_sym_ExcludeOS] = ACTIONS(438),
    [anon_sym_ExclusiveArch] = ACTIONS(438),
    [anon_sym_ExclusiveOS] = ACTIONS(438),
    [anon_sym_Obsoletes] = ACTIONS(438),
    [anon_sym_OrderWithRequires] = ACTIONS(438),
    [anon_sym_Prefix] = ACTIONS(438),
    [anon_sym_Prefixes] = ACTIONS(438),
    [anon_sym_Prereq] = ACTIONS(438),
    [anon_sym_Provides] = ACTIONS(438),
    [anon_sym_Recommends] = ACTIONS(438),
    [anon_sym_RemovePathPostfixes] = ACTIONS(438),
    [anon_sym_Suggests] = ACTIONS(438),
    [anon_sym_Supplements] = ACTIONS(438),
    [anon_sym_PERCENTdescription] = ACTIONS(438),
    [anon_sym_PERCENTpackage] = ACTIONS(438),
    [anon_sym_PERCENTprep] = ACTIONS(438),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(438),
    [anon_sym_PERCENTconf] = ACTIONS(438),
    [anon_sym_PERCENTbuild] = ACTIONS(438),
    [anon_sym_PERCENTinstall] = ACTIONS(438),
    [anon_sym_PERCENTcheck] = ACTIONS(438),
    [anon_sym_PERCENTclean] = ACTIONS(438),
    [anon_sym_PERCENTpre] = ACTIONS(438),
    [anon_sym_PERCENTpost] = ACTIONS(438),
    [anon_sym_PERCENTpreun] = ACTIONS(438),
    [anon_sym_PERCENTpostun] = ACTIONS(438),
    [anon_sym_PERCENTpretrans] = ACTIONS(438),
    [anon_sym_PERCENTposttrans] = ACTIONS(438),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(438),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(438),
    [anon_sym_PERCENTverify] = ACTIONS(438),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(438),
    [anon_sym_PERCENTtriggerin] = ACTIONS(438),
    [anon_sym_PERCENTtriggerun] = ACTIONS(438),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(438),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(438),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(438),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(438),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(438),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(438),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(438),
    [anon_sym_PERCENTfiles] = ACTIONS(438),
    [anon_sym_PERCENTchangelog] = ACTIONS(438),
    [anon_sym_PERCENTglobal] = ACTIONS(438),
    [anon_sym_PERCENTdefine] = ACTIONS(438),
    [anon_sym_PERCENTundefine] = ACTIONS(438),
    [anon_sym_PERCENT] = ACTIONS(438),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(438),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(438),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(440),
    [aux_sym__simple_statements_token1] = ACTIONS(440),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(442),
    [anon_sym_PERCENTifarch] = ACTIONS(442),
    [anon_sym_PERCENTifos] = ACTIONS(442),
    [anon_sym_PERCENTifnarch] = ACTIONS(442),
    [anon_sym_PERCENTifnos] = ACTIONS(442),
    [anon_sym_AutoProv] = ACTIONS(442),
    [anon_sym_AutoReq] = ACTIONS(442),
    [anon_sym_AutoReqProv] = ACTIONS(442),
    [anon_sym_BugUrl] = ACTIONS(442),
    [anon_sym_BuildRoot] = ACTIONS(442),
    [anon_sym_BuildSystem] = ACTIONS(442),
    [anon_sym_DistTag] = ACTIONS(442),
    [anon_sym_Distribution] = ACTIONS(442),
    [anon_sym_Epoch] = ACTIONS(442),
    [anon_sym_Group] = ACTIONS(442),
    [anon_sym_License] = ACTIONS(442),
    [anon_sym_ModularityLabel] = ACTIONS(442),
    [anon_sym_Name] = ACTIONS(442),
    [anon_sym_NoPatch] = ACTIONS(442),
    [anon_sym_NoSource] = ACTIONS(442),
    [anon_sym_Packager] = ACTIONS(442),
    [anon_sym_Release] = ACTIONS(442),
    [anon_sym_SourceLicense] = ACTIONS(442),
    [anon_sym_Summary] = ACTIONS(442),
    [anon_sym_URL] = ACTIONS(442),
    [anon_sym_Url] = ACTIONS(442),
    [anon_sym_VCS] = ACTIONS(442),
    [anon_sym_Vendor] = ACTIONS(442),
    [anon_sym_Version] = ACTIONS(442),
    [aux_sym_tag_token1] = ACTIONS(442),
    [aux_sym_tag_token2] = ACTIONS(442),
    [anon_sym_Requires] = ACTIONS(442),
    [anon_sym_BuildArch] = ACTIONS(442),
    [anon_sym_BuildArchitectures] = ACTIONS(442),
    [anon_sym_BuildConflicts] = ACTIONS(442),
    [anon_sym_BuildPrereq] = ACTIONS(442),
    [anon_sym_BuildRequires] = ACTIONS(442),
    [anon_sym_Conflicts] = ACTIONS(442),
    [anon_sym_DocDir] = ACTIONS(442),
    [anon_sym_Enhances] = ACTIONS(442),
    [anon_sym_ExcludeArch] = ACTIONS(442),
    [anon_sym_ExcludeOS] = ACTIONS(442),
    [anon_sym_ExclusiveArch] = ACTIONS(442),
    [anon_sym_ExclusiveOS] = ACTIONS(442),
    [anon_sym_Obsoletes] = ACTIONS(442),
    [anon_sym_OrderWithRequires] = ACTIONS(442),
    [anon_sym_Prefix] = ACTIONS(442),
    [anon_sym_Prefixes] = ACTIONS(442),
    [anon_sym_Prereq] = ACTIONS(442),
    [anon_sym_Provides] = ACTIONS(442),
    [anon_sym_Recommends] = ACTIONS(442),
    [anon_sym_RemovePathPostfixes] = ACTIONS(442),
    [anon_sym_Suggests] = ACTIONS(442),
    [anon_sym_Supplements] = ACTIONS(442),
    [anon_sym_PERCENTdescription] = ACTIONS(442),
    [anon_sym_PERCENTpackage] = ACTIONS(442),
    [anon_sym_PERCENTprep] = ACTIONS(442),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(442),
    [anon_sym_PERCENTconf] = ACTIONS(442),
    [anon_sym_PERCENTbuild] = ACTIONS(442),
    [anon_sym_PERCENTinstall] = ACTIONS(442),
    [anon_sym_PERCENTcheck] = ACTIONS(442),
    [anon_sym_PERCENTclean] = ACTIONS(442),
    [anon_sym_PERCENTpre] = ACTIONS(442),
    [anon_sym_PERCENTpost] = ACTIONS(442),
    [anon_sym_PERCENTpreun] = ACTIONS(442),
    [anon_sym_PERCENTpostun] = ACTIONS(442),
    [anon_sym_PERCENTpretrans] = ACTIONS(442),
    [anon_sym_PERCENTposttrans] = ACTIONS(442),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(442),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(442),
    [anon_sym_PERCENTverify] = ACTIONS(442),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(442),
    [anon_sym_PERCENTtriggerin] = ACTIONS(442),
    [anon_sym_PERCENTtriggerun] = ACTIONS(442),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(442),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(442),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(442),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(442),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(442),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(442),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(442),
    [anon_sym_PERCENTfiles] = ACTIONS(442),
    [anon_sym_PERCENTchangelog] = ACTIONS(442),
    [anon_sym_PERCENTglobal] = ACTIONS(442),
    [anon_sym_PERCENTdefine] = ACTIONS(442),
    [anon_sym_PERCENTundefine] = ACTIONS(442),
    [anon_sym_PERCENT] = ACTIONS(442),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(442),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(442),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [aux_sym__simple_statements_token1] = ACTIONS(444),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(446),
    [anon_sym_PERCENTifarch] = ACTIONS(446),
    [anon_sym_PERCENTifos] = ACTIONS(446),
    [anon_sym_PERCENTifnarch] = ACTIONS(446),
    [anon_sym_PERCENTifnos] = ACTIONS(446),
    [anon_sym_AutoProv] = ACTIONS(446),
    [anon_sym_AutoReq] = ACTIONS(446),
    [anon_sym_AutoReqProv] = ACTIONS(446),
    [anon_sym_BugUrl] = ACTIONS(446),
    [anon_sym_BuildRoot] = ACTIONS(446),
    [anon_sym_BuildSystem] = ACTIONS(446),
    [anon_sym_DistTag] = ACTIONS(446),
    [anon_sym_Distribution] = ACTIONS(446),
    [anon_sym_Epoch] = ACTIONS(446),
    [anon_sym_Group] = ACTIONS(446),
    [anon_sym_License] = ACTIONS(446),
    [anon_sym_ModularityLabel] = ACTIONS(446),
    [anon_sym_Name] = ACTIONS(446),
    [anon_sym_NoPatch] = ACTIONS(446),
    [anon_sym_NoSource] = ACTIONS(446),
    [anon_sym_Packager] = ACTIONS(446),
    [anon_sym_Release] = ACTIONS(446),
    [anon_sym_SourceLicense] = ACTIONS(446),
    [anon_sym_Summary] = ACTIONS(446),
    [anon_sym_URL] = ACTIONS(446),
    [anon_sym_Url] = ACTIONS(446),
    [anon_sym_VCS] = ACTIONS(446),
    [anon_sym_Vendor] = ACTIONS(446),
    [anon_sym_Version] = ACTIONS(446),
    [aux_sym_tag_token1] = ACTIONS(446),
    [aux_sym_tag_token2] = ACTIONS(446),
    [anon_sym_Requires] = ACTIONS(446),
    [anon_sym_BuildArch] = ACTIONS(446),
    [anon_sym_BuildArchitectures] = ACTIONS(446),
    [anon_sym_BuildConflicts] = ACTIONS(446),
    [anon_sym_BuildPrereq] = ACTIONS(446),
    [anon_sym_BuildRequires] = ACTIONS(446),
    [anon_sym_Conflicts] = ACTIONS(446),
    [anon_sym_DocDir] = ACTIONS(446),
    [anon_sym_Enhances] = ACTIONS(446),
    [anon_sym_ExcludeArch] = ACTIONS(446),
    [anon_sym_ExcludeOS] = ACTIONS(446),
    [anon_sym_ExclusiveArch] = ACTIONS(446),
    [anon_sym_ExclusiveOS] = ACTIONS(446),
    [anon_sym_Obsoletes] = ACTIONS(446),
    [anon_sym_OrderWithRequires] = ACTIONS(446),
    [anon_sym_Prefix] = ACTIONS(446),
    [anon_sym_Prefixes] = ACTIONS(446),
    [anon_sym_Prereq] = ACTIONS(446),
    [anon_sym_Provides] = ACTIONS(446),
    [anon_sym_Recommends] = ACTIONS(446),
    [anon_sym_RemovePathPostfixes] = ACTIONS(446),
    [anon_sym_Suggests] = ACTIONS(446),
    [anon_sym_Supplements] = ACTIONS(446),
    [anon_sym_PERCENTdescription] = ACTIONS(446),
    [anon_sym_PERCENTpackage] = ACTIONS(446),
    [anon_sym_PERCENTprep] = ACTIONS(446),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(446),
    [anon_sym_PERCENTconf] = ACTIONS(446),
    [anon_sym_PERCENTbuild] = ACTIONS(446),
    [anon_sym_PERCENTinstall] = ACTIONS(446),
    [anon_sym_PERCENTcheck] = ACTIONS(446),
    [anon_sym_PERCENTclean] = ACTIONS(446),
    [anon_sym_PERCENTpre] = ACTIONS(446),
    [anon_sym_PERCENTpost] = ACTIONS(446),
    [anon_sym_PERCENTpreun] = ACTIONS(446),
    [anon_sym_PERCENTpostun] = ACTIONS(446),
    [anon_sym_PERCENTpretrans] = ACTIONS(446),
    [anon_sym_PERCENTposttrans] = ACTIONS(446),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(446),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(446),
    [anon_sym_PERCENTverify] = ACTIONS(446),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(446),
    [anon_sym_PERCENTtriggerin] = ACTIONS(446),
    [anon_sym_PERCENTtriggerun] = ACTIONS(446),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(446),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(446),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(446),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(446),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(446),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(446),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(446),
    [anon_sym_PERCENTfiles] = ACTIONS(446),
    [anon_sym_PERCENTchangelog] = ACTIONS(446),
    [anon_sym_PERCENTglobal] = ACTIONS(446),
    [anon_sym_PERCENTdefine] = ACTIONS(446),
    [anon_sym_PERCENTundefine] = ACTIONS(446),
    [anon_sym_PERCENT] = ACTIONS(446),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(446),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(446),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(448),
    [aux_sym__simple_statements_token1] = ACTIONS(448),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(450),
    [anon_sym_PERCENTifarch] = ACTIONS(450),
    [anon_sym_PERCENTifos] = ACTIONS(450),
    [anon_sym_PERCENTifnarch] = ACTIONS(450),
    [anon_sym_PERCENTifnos] = ACTIONS(450),
    [anon_sym_AutoProv] = ACTIONS(450),
    [anon_sym_AutoReq] = ACTIONS(450),
    [anon_sym_AutoReqProv] = ACTIONS(450),
    [anon_sym_BugUrl] = ACTIONS(450),
    [anon_sym_BuildRoot] = ACTIONS(450),
    [anon_sym_BuildSystem] = ACTIONS(450),
    [anon_sym_DistTag] = ACTIONS(450),
    [anon_sym_Distribution] = ACTIONS(450),
    [anon_sym_Epoch] = ACTIONS(450),
    [anon_sym_Group] = ACTIONS(450),
    [anon_sym_License] = ACTIONS(450),
    [anon_sym_ModularityLabel] = ACTIONS(450),
    [anon_sym_Name] = ACTIONS(450),
    [anon_sym_NoPatch] = ACTIONS(450),
    [anon_sym_NoSource] = ACTIONS(450),
    [anon_sym_Packager] = ACTIONS(450),
    [anon_sym_Release] = ACTIONS(450),
    [anon_sym_SourceLicense] = ACTIONS(450),
    [anon_sym_Summary] = ACTIONS(450),
    [anon_sym_URL] = ACTIONS(450),
    [anon_sym_Url] = ACTIONS(450),
    [anon_sym_VCS] = ACTIONS(450),
    [anon_sym_Vendor] = ACTIONS(450),
    [anon_sym_Version] = ACTIONS(450),
    [aux_sym_tag_token1] = ACTIONS(450),
    [aux_sym_tag_token2] = ACTIONS(450),
    [anon_sym_Requires] = ACTIONS(450),
    [anon_sym_BuildArch] = ACTIONS(450),
    [anon_sym_BuildArchitectures] = ACTIONS(450),
    [anon_sym_BuildConflicts] = ACTIONS(450),
    [anon_sym_BuildPrereq] = ACTIONS(450),
    [anon_sym_BuildRequires] = ACTIONS(450),
    [anon_sym_Conflicts] = ACTIONS(450),
    [anon_sym_DocDir] = ACTIONS(450),
    [anon_sym_Enhances] = ACTIONS(450),
    [anon_sym_ExcludeArch] = ACTIONS(450),
    [anon_sym_ExcludeOS] = ACTIONS(450),
    [anon_sym_ExclusiveArch] = ACTIONS(450),
    [anon_sym_ExclusiveOS] = ACTIONS(450),
    [anon_sym_Obsoletes] = ACTIONS(450),
    [anon_sym_OrderWithRequires] = ACTIONS(450),
    [anon_sym_Prefix] = ACTIONS(450),
    [anon_sym_Prefixes] = ACTIONS(450),
    [anon_sym_Prereq] = ACTIONS(450),
    [anon_sym_Provides] = ACTIONS(450),
    [anon_sym_Recommends] = ACTIONS(450),
    [anon_sym_RemovePathPostfixes] = ACTIONS(450),
    [anon_sym_Suggests] = ACTIONS(450),
    [anon_sym_Supplements] = ACTIONS(450),
    [anon_sym_PERCENTdescription] = ACTIONS(450),
    [anon_sym_PERCENTpackage] = ACTIONS(450),
    [anon_sym_PERCENTprep] = ACTIONS(450),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(450),
    [anon_sym_PERCENTconf] = ACTIONS(450),
    [anon_sym_PERCENTbuild] = ACTIONS(450),
    [anon_sym_PERCENTinstall] = ACTIONS(450),
    [anon_sym_PERCENTcheck] = ACTIONS(450),
    [anon_sym_PERCENTclean] = ACTIONS(450),
    [anon_sym_PERCENTpre] = ACTIONS(450),
    [anon_sym_PERCENTpost] = ACTIONS(450),
    [anon_sym_PERCENTpreun] = ACTIONS(450),
    [anon_sym_PERCENTpostun] = ACTIONS(450),
    [anon_sym_PERCENTpretrans] = ACTIONS(450),
    [anon_sym_PERCENTposttrans] = ACTIONS(450),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(450),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(450),
    [anon_sym_PERCENTverify] = ACTIONS(450),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(450),
    [anon_sym_PERCENTtriggerin] = ACTIONS(450),
    [anon_sym_PERCENTtriggerun] = ACTIONS(450),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(450),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(450),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(450),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(450),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(450),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(450),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(450),
    [anon_sym_PERCENTfiles] = ACTIONS(450),
    [anon_sym_PERCENTchangelog] = ACTIONS(450),
    [anon_sym_PERCENTglobal] = ACTIONS(450),
    [anon_sym_PERCENTdefine] = ACTIONS(450),
    [anon_sym_PERCENTundefine] = ACTIONS(450),
    [anon_sym_PERCENT] = ACTIONS(450),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(450),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(450),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(364),
    [aux_sym__simple_statements_token1] = ACTIONS(364),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(366),
    [anon_sym_PERCENTifarch] = ACTIONS(366),
    [anon_sym_PERCENTifos] = ACTIONS(366),
    [anon_sym_PERCENTifnarch] = ACTIONS(366),
    [anon_sym_PERCENTifnos] = ACTIONS(366),
    [anon_sym_AutoProv] = ACTIONS(366),
    [anon_sym_AutoReq] = ACTIONS(366),
    [anon_sym_AutoReqProv] = ACTIONS(366),
    [anon_sym_BugUrl] = ACTIONS(366),
    [anon_sym_BuildRoot] = ACTIONS(366),
    [anon_sym_BuildSystem] = ACTIONS(366),
    [anon_sym_DistTag] = ACTIONS(366),
    [anon_sym_Distribution] = ACTIONS(366),
    [anon_sym_Epoch] = ACTIONS(366),
    [anon_sym_Group] = ACTIONS(366),
    [anon_sym_License] = ACTIONS(366),
    [anon_sym_ModularityLabel] = ACTIONS(366),
    [anon_sym_Name] = ACTIONS(366),
    [anon_sym_NoPatch] = ACTIONS(366),
    [anon_sym_NoSource] = ACTIONS(366),
    [anon_sym_Packager] = ACTIONS(366),
    [anon_sym_Release] = ACTIONS(366),
    [anon_sym_SourceLicense] = ACTIONS(366),
    [anon_sym_Summary] = ACTIONS(366),
    [anon_sym_URL] = ACTIONS(366),
    [anon_sym_Url] = ACTIONS(366),
    [anon_sym_VCS] = ACTIONS(366),
    [anon_sym_Vendor] = ACTIONS(366),
    [anon_sym_Version] = ACTIONS(366),
    [aux_sym_tag_token1] = ACTIONS(366),
    [aux_sym_tag_token2] = ACTIONS(366),
    [anon_sym_Requires] = ACTIONS(366),
    [anon_sym_BuildArch] = ACTIONS(366),
    [anon_sym_BuildArchitectures] = ACTIONS(366),
    [anon_sym_BuildConflicts] = ACTIONS(366),
    [anon_sym_BuildPrereq] = ACTIONS(366),
    [anon_sym_BuildRequires] = ACTIONS(366),
    [anon_sym_Conflicts] = ACTIONS(366),
    [anon_sym_DocDir] = ACTIONS(366),
    [anon_sym_Enhances] = ACTIONS(366),
    [anon_sym_ExcludeArch] = ACTIONS(366),
    [anon_sym_ExcludeOS] = ACTIONS(366),
    [anon_sym_ExclusiveArch] = ACTIONS(366),
    [anon_sym_ExclusiveOS] = ACTIONS(366),
    [anon_sym_Obsoletes] = ACTIONS(366),
    [anon_sym_OrderWithRequires] = ACTIONS(366),
    [anon_sym_Prefix] = ACTIONS(366),
    [anon_sym_Prefixes] = ACTIONS(366),
    [anon_sym_Prereq] = ACTIONS(366),
    [anon_sym_Provides] = ACTIONS(366),
    [anon_sym_Recommends] = ACTIONS(366),
    [anon_sym_RemovePathPostfixes] = ACTIONS(366),
    [anon_sym_Suggests] = ACTIONS(366),
    [anon_sym_Supplements] = ACTIONS(366),
    [anon_sym_PERCENTdescription] = ACTIONS(366),
    [anon_sym_PERCENTpackage] = ACTIONS(366),
    [anon_sym_PERCENTprep] = ACTIONS(366),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(366),
    [anon_sym_PERCENTconf] = ACTIONS(366),
    [anon_sym_PERCENTbuild] = ACTIONS(366),
    [anon_sym_PERCENTinstall] = ACTIONS(366),
    [anon_sym_PERCENTcheck] = ACTIONS(366),
    [anon_sym_PERCENTclean] = ACTIONS(366),
    [anon_sym_PERCENTpre] = ACTIONS(366),
    [anon_sym_PERCENTpost] = ACTIONS(366),
    [anon_sym_PERCENTpreun] = ACTIONS(366),
    [anon_sym_PERCENTpostun] = ACTIONS(366),
    [anon_sym_PERCENTpretrans] = ACTIONS(366),
    [anon_sym_PERCENTposttrans] = ACTIONS(366),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(366),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(366),
    [anon_sym_PERCENTverify] = ACTIONS(366),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(366),
    [anon_sym_PERCENTtriggerin] = ACTIONS(366),
    [anon_sym_PERCENTtriggerun] = ACTIONS(366),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(366),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(366),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(366),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(366),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(366),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(366),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(366),
    [anon_sym_PERCENTfiles] = ACTIONS(366),
    [anon_sym_PERCENTchangelog] = ACTIONS(366),
    [anon_sym_PERCENTglobal] = ACTIONS(366),
    [anon_sym_PERCENTdefine] = ACTIONS(366),
    [anon_sym_PERCENTundefine] = ACTIONS(366),
    [anon_sym_PERCENT] = ACTIONS(366),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(366),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(366),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(452),
    [aux_sym__simple_statements_token1] = ACTIONS(452),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(454),
    [anon_sym_PERCENTifarch] = ACTIONS(454),
    [anon_sym_PERCENTifos] = ACTIONS(454),
    [anon_sym_PERCENTifnarch] = ACTIONS(454),
    [anon_sym_PERCENTifnos] = ACTIONS(454),
    [anon_sym_AutoProv] = ACTIONS(454),
    [anon_sym_AutoReq] = ACTIONS(454),
    [anon_sym_AutoReqProv] = ACTIONS(454),
    [anon_sym_BugUrl] = ACTIONS(454),
    [anon_sym_BuildRoot] = ACTIONS(454),
    [anon_sym_BuildSystem] = ACTIONS(454),
    [anon_sym_DistTag] = ACTIONS(454),
    [anon_sym_Distribution] = ACTIONS(454),
    [anon_sym_Epoch] = ACTIONS(454),
    [anon_sym_Group] = ACTIONS(454),
    [anon_sym_License] = ACTIONS(454),
    [anon_sym_ModularityLabel] = ACTIONS(454),
    [anon_sym_Name] = ACTIONS(454),
    [anon_sym_NoPatch] = ACTIONS(454),
    [anon_sym_NoSource] = ACTIONS(454),
    [anon_sym_Packager] = ACTIONS(454),
    [anon_sym_Release] = ACTIONS(454),
    [anon_sym_SourceLicense] = ACTIONS(454),
    [anon_sym_Summary] = ACTIONS(454),
    [anon_sym_URL] = ACTIONS(454),
    [anon_sym_Url] = ACTIONS(454),
    [anon_sym_VCS] = ACTIONS(454),
    [anon_sym_Vendor] = ACTIONS(454),
    [anon_sym_Version] = ACTIONS(454),
    [aux_sym_tag_token1] = ACTIONS(454),
    [aux_sym_tag_token2] = ACTIONS(454),
    [anon_sym_Requires] = ACTIONS(454),
    [anon_sym_BuildArch] = ACTIONS(454),
    [anon_sym_BuildArchitectures] = ACTIONS(454),
    [anon_sym_BuildConflicts] = ACTIONS(454),
    [anon_sym_BuildPrereq] = ACTIONS(454),
    [anon_sym_BuildRequires] = ACTIONS(454),
    [anon_sym_Conflicts] = ACTIONS(454),
    [anon_sym_DocDir] = ACTIONS(454),
    [anon_sym_Enhances] = ACTIONS(454),
    [anon_sym_ExcludeArch] = ACTIONS(454),
    [anon_sym_ExcludeOS] = ACTIONS(454),
    [anon_sym_ExclusiveArch] = ACTIONS(454),
    [anon_sym_ExclusiveOS] = ACTIONS(454),
    [anon_sym_Obsoletes] = ACTIONS(454),
    [anon_sym_OrderWithRequires] = ACTIONS(454),
    [anon_sym_Prefix] = ACTIONS(454),
    [anon_sym_Prefixes] = ACTIONS(454),
    [anon_sym_Prereq] = ACTIONS(454),
    [anon_sym_Provides] = ACTIONS(454),
    [anon_sym_Recommends] = ACTIONS(454),
    [anon_sym_RemovePathPostfixes] = ACTIONS(454),
    [anon_sym_Suggests] = ACTIONS(454),
    [anon_sym_Supplements] = ACTIONS(454),
    [anon_sym_PERCENTdescription] = ACTIONS(454),
    [anon_sym_PERCENTpackage] = ACTIONS(454),
    [anon_sym_PERCENTprep] = ACTIONS(454),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(454),
    [anon_sym_PERCENTconf] = ACTIONS(454),
    [anon_sym_PERCENTbuild] = ACTIONS(454),
    [anon_sym_PERCENTinstall] = ACTIONS(454),
    [anon_sym_PERCENTcheck] = ACTIONS(454),
    [anon_sym_PERCENTclean] = ACTIONS(454),
    [anon_sym_PERCENTpre] = ACTIONS(454),
    [anon_sym_PERCENTpost] = ACTIONS(454),
    [anon_sym_PERCENTpreun] = ACTIONS(454),
    [anon_sym_PERCENTpostun] = ACTIONS(454),
    [anon_sym_PERCENTpretrans] = ACTIONS(454),
    [anon_sym_PERCENTposttrans] = ACTIONS(454),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(454),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(454),
    [anon_sym_PERCENTverify] = ACTIONS(454),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(454),
    [anon_sym_PERCENTtriggerin] = ACTIONS(454),
    [anon_sym_PERCENTtriggerun] = ACTIONS(454),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(454),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(454),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(454),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(454),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(454),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(454),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(454),
    [anon_sym_PERCENTfiles] = ACTIONS(454),
    [anon_sym_PERCENTchangelog] = ACTIONS(454),
    [anon_sym_PERCENTglobal] = ACTIONS(454),
    [anon_sym_PERCENTdefine] = ACTIONS(454),
    [anon_sym_PERCENTundefine] = ACTIONS(454),
    [anon_sym_PERCENT] = ACTIONS(454),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(454),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(454),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(456),
    [aux_sym__simple_statements_token1] = ACTIONS(456),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(458),
    [anon_sym_PERCENTifarch] = ACTIONS(458),
    [anon_sym_PERCENTifos] = ACTIONS(458),
    [anon_sym_PERCENTifnarch] = ACTIONS(458),
    [anon_sym_PERCENTifnos] = ACTIONS(458),
    [anon_sym_AutoProv] = ACTIONS(458),
    [anon_sym_AutoReq] = ACTIONS(458),
    [anon_sym_AutoReqProv] = ACTIONS(458),
    [anon_sym_BugUrl] = ACTIONS(458),
    [anon_sym_BuildRoot] = ACTIONS(458),
    [anon_sym_BuildSystem] = ACTIONS(458),
    [anon_sym_DistTag] = ACTIONS(458),
    [anon_sym_Distribution] = ACTIONS(458),
    [anon_sym_Epoch] = ACTIONS(458),
    [anon_sym_Group] = ACTIONS(458),
    [anon_sym_License] = ACTIONS(458),
    [anon_sym_ModularityLabel] = ACTIONS(458),
    [anon_sym_Name] = ACTIONS(458),
    [anon_sym_NoPatch] = ACTIONS(458),
    [anon_sym_NoSource] = ACTIONS(458),
    [anon_sym_Packager] = ACTIONS(458),
    [anon_sym_Release] = ACTIONS(458),
    [anon_sym_SourceLicense] = ACTIONS(458),
    [anon_sym_Summary] = ACTIONS(458),
    [anon_sym_URL] = ACTIONS(458),
    [anon_sym_Url] = ACTIONS(458),
    [anon_sym_VCS] = ACTIONS(458),
    [anon_sym_Vendor] = ACTIONS(458),
    [anon_sym_Version] = ACTIONS(458),
    [aux_sym_tag_token1] = ACTIONS(458),
    [aux_sym_tag_token2] = ACTIONS(458),
    [anon_sym_Requires] = ACTIONS(458),
    [anon_sym_BuildArch] = ACTIONS(458),
    [anon_sym_BuildArchitectures] = ACTIONS(458),
    [anon_sym_BuildConflicts] = ACTIONS(458),
    [anon_sym_BuildPrereq] = ACTIONS(458),
    [anon_sym_BuildRequires] = ACTIONS(458),
    [anon_sym_Conflicts] = ACTIONS(458),
    [anon_sym_DocDir] = ACTIONS(458),
    [anon_sym_Enhances] = ACTIONS(458),
    [anon_sym_ExcludeArch] = ACTIONS(458),
    [anon_sym_ExcludeOS] = ACTIONS(458),
    [anon_sym_ExclusiveArch] = ACTIONS(458),
    [anon_sym_ExclusiveOS] = ACTIONS(458),
    [anon_sym_Obsoletes] = ACTIONS(458),
    [anon_sym_OrderWithRequires] = ACTIONS(458),
    [anon_sym_Prefix] = ACTIONS(458),
    [anon_sym_Prefixes] = ACTIONS(458),
    [anon_sym_Prereq] = ACTIONS(458),
    [anon_sym_Provides] = ACTIONS(458),
    [anon_sym_Recommends] = ACTIONS(458),
    [anon_sym_RemovePathPostfixes] = ACTIONS(458),
    [anon_sym_Suggests] = ACTIONS(458),
    [anon_sym_Supplements] = ACTIONS(458),
    [anon_sym_PERCENTdescription] = ACTIONS(458),
    [anon_sym_PERCENTpackage] = ACTIONS(458),
    [anon_sym_PERCENTprep] = ACTIONS(458),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(458),
    [anon_sym_PERCENTconf] = ACTIONS(458),
    [anon_sym_PERCENTbuild] = ACTIONS(458),
    [anon_sym_PERCENTinstall] = ACTIONS(458),
    [anon_sym_PERCENTcheck] = ACTIONS(458),
    [anon_sym_PERCENTclean] = ACTIONS(458),
    [anon_sym_PERCENTpre] = ACTIONS(458),
    [anon_sym_PERCENTpost] = ACTIONS(458),
    [anon_sym_PERCENTpreun] = ACTIONS(458),
    [anon_sym_PERCENTpostun] = ACTIONS(458),
    [anon_sym_PERCENTpretrans] = ACTIONS(458),
    [anon_sym_PERCENTposttrans] = ACTIONS(458),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(458),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(458),
    [anon_sym_PERCENTverify] = ACTIONS(458),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(458),
    [anon_sym_PERCENTtriggerin] = ACTIONS(458),
    [anon_sym_PERCENTtriggerun] = ACTIONS(458),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(458),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(458),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(458),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(458),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(458),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(458),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(458),
    [anon_sym_PERCENTfiles] = ACTIONS(458),
    [anon_sym_PERCENTchangelog] = ACTIONS(458),
    [anon_sym_PERCENTglobal] = ACTIONS(458),
    [anon_sym_PERCENTdefine] = ACTIONS(458),
    [anon_sym_PERCENTundefine] = ACTIONS(458),
    [anon_sym_PERCENT] = ACTIONS(458),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(458),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(458),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [aux_sym__simple_statements_token1] = ACTIONS(460),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(462),
    [anon_sym_PERCENTifarch] = ACTIONS(462),
    [anon_sym_PERCENTifos] = ACTIONS(462),
    [anon_sym_PERCENTifnarch] = ACTIONS(462),
    [anon_sym_PERCENTifnos] = ACTIONS(462),
    [anon_sym_AutoProv] = ACTIONS(462),
    [anon_sym_AutoReq] = ACTIONS(462),
    [anon_sym_AutoReqProv] = ACTIONS(462),
    [anon_sym_BugUrl] = ACTIONS(462),
    [anon_sym_BuildRoot] = ACTIONS(462),
    [anon_sym_BuildSystem] = ACTIONS(462),
    [anon_sym_DistTag] = ACTIONS(462),
    [anon_sym_Distribution] = ACTIONS(462),
    [anon_sym_Epoch] = ACTIONS(462),
    [anon_sym_Group] = ACTIONS(462),
    [anon_sym_License] = ACTIONS(462),
    [anon_sym_ModularityLabel] = ACTIONS(462),
    [anon_sym_Name] = ACTIONS(462),
    [anon_sym_NoPatch] = ACTIONS(462),
    [anon_sym_NoSource] = ACTIONS(462),
    [anon_sym_Packager] = ACTIONS(462),
    [anon_sym_Release] = ACTIONS(462),
    [anon_sym_SourceLicense] = ACTIONS(462),
    [anon_sym_Summary] = ACTIONS(462),
    [anon_sym_URL] = ACTIONS(462),
    [anon_sym_Url] = ACTIONS(462),
    [anon_sym_VCS] = ACTIONS(462),
    [anon_sym_Vendor] = ACTIONS(462),
    [anon_sym_Version] = ACTIONS(462),
    [aux_sym_tag_token1] = ACTIONS(462),
    [aux_sym_tag_token2] = ACTIONS(462),
    [anon_sym_Requires] = ACTIONS(462),
    [anon_sym_BuildArch] = ACTIONS(462),
    [anon_sym_BuildArchitectures] = ACTIONS(462),
    [anon_sym_BuildConflicts] = ACTIONS(462),
    [anon_sym_BuildPrereq] = ACTIONS(462),
    [anon_sym_BuildRequires] = ACTIONS(462),
    [anon_sym_Conflicts] = ACTIONS(462),
    [anon_sym_DocDir] = ACTIONS(462),
    [anon_sym_Enhances] = ACTIONS(462),
    [anon_sym_ExcludeArch] = ACTIONS(462),
    [anon_sym_ExcludeOS] = ACTIONS(462),
    [anon_sym_ExclusiveArch] = ACTIONS(462),
    [anon_sym_ExclusiveOS] = ACTIONS(462),
    [anon_sym_Obsoletes] = ACTIONS(462),
    [anon_sym_OrderWithRequires] = ACTIONS(462),
    [anon_sym_Prefix] = ACTIONS(462),
    [anon_sym_Prefixes] = ACTIONS(462),
    [anon_sym_Prereq] = ACTIONS(462),
    [anon_sym_Provides] = ACTIONS(462),
    [anon_sym_Recommends] = ACTIONS(462),
    [anon_sym_RemovePathPostfixes] = ACTIONS(462),
    [anon_sym_Suggests] = ACTIONS(462),
    [anon_sym_Supplements] = ACTIONS(462),
    [anon_sym_PERCENTdescription] = ACTIONS(462),
    [anon_sym_PERCENTpackage] = ACTIONS(462),
    [anon_sym_PERCENTprep] = ACTIONS(462),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(462),
    [anon_sym_PERCENTconf] = ACTIONS(462),
    [anon_sym_PERCENTbuild] = ACTIONS(462),
    [anon_sym_PERCENTinstall] = ACTIONS(462),
    [anon_sym_PERCENTcheck] = ACTIONS(462),
    [anon_sym_PERCENTclean] = ACTIONS(462),
    [anon_sym_PERCENTpre] = ACTIONS(462),
    [anon_sym_PERCENTpost] = ACTIONS(462),
    [anon_sym_PERCENTpreun] = ACTIONS(462),
    [anon_sym_PERCENTpostun] = ACTIONS(462),
    [anon_sym_PERCENTpretrans] = ACTIONS(462),
    [anon_sym_PERCENTposttrans] = ACTIONS(462),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(462),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(462),
    [anon_sym_PERCENTverify] = ACTIONS(462),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(462),
    [anon_sym_PERCENTtriggerin] = ACTIONS(462),
    [anon_sym_PERCENTtriggerun] = ACTIONS(462),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(462),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(462),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(462),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(462),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(462),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(462),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(462),
    [anon_sym_PERCENTfiles] = ACTIONS(462),
    [anon_sym_PERCENTchangelog] = ACTIONS(462),
    [anon_sym_PERCENTglobal] = ACTIONS(462),
    [anon_sym_PERCENTdefine] = ACTIONS(462),
    [anon_sym_PERCENTundefine] = ACTIONS(462),
    [anon_sym_PERCENT] = ACTIONS(462),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(462),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(462),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(464),
    [aux_sym__simple_statements_token1] = ACTIONS(464),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(466),
    [anon_sym_PERCENTifarch] = ACTIONS(466),
    [anon_sym_PERCENTifos] = ACTIONS(466),
    [anon_sym_PERCENTifnarch] = ACTIONS(466),
    [anon_sym_PERCENTifnos] = ACTIONS(466),
    [anon_sym_AutoProv] = ACTIONS(466),
    [anon_sym_AutoReq] = ACTIONS(466),
    [anon_sym_AutoReqProv] = ACTIONS(466),
    [anon_sym_BugUrl] = ACTIONS(466),
    [anon_sym_BuildRoot] = ACTIONS(466),
    [anon_sym_BuildSystem] = ACTIONS(466),
    [anon_sym_DistTag] = ACTIONS(466),
    [anon_sym_Distribution] = ACTIONS(466),
    [anon_sym_Epoch] = ACTIONS(466),
    [anon_sym_Group] = ACTIONS(466),
    [anon_sym_License] = ACTIONS(466),
    [anon_sym_ModularityLabel] = ACTIONS(466),
    [anon_sym_Name] = ACTIONS(466),
    [anon_sym_NoPatch] = ACTIONS(466),
    [anon_sym_NoSource] = ACTIONS(466),
    [anon_sym_Packager] = ACTIONS(466),
    [anon_sym_Release] = ACTIONS(466),
    [anon_sym_SourceLicense] = ACTIONS(466),
    [anon_sym_Summary] = ACTIONS(466),
    [anon_sym_URL] = ACTIONS(466),
    [anon_sym_Url] = ACTIONS(466),
    [anon_sym_VCS] = ACTIONS(466),
    [anon_sym_Vendor] = ACTIONS(466),
    [anon_sym_Version] = ACTIONS(466),
    [aux_sym_tag_token1] = ACTIONS(466),
    [aux_sym_tag_token2] = ACTIONS(466),
    [anon_sym_Requires] = ACTIONS(466),
    [anon_sym_BuildArch] = ACTIONS(466),
    [anon_sym_BuildArchitectures] = ACTIONS(466),
    [anon_sym_BuildConflicts] = ACTIONS(466),
    [anon_sym_BuildPrereq] = ACTIONS(466),
    [anon_sym_BuildRequires] = ACTIONS(466),
    [anon_sym_Conflicts] = ACTIONS(466),
    [anon_sym_DocDir] = ACTIONS(466),
    [anon_sym_Enhances] = ACTIONS(466),
    [anon_sym_ExcludeArch] = ACTIONS(466),
    [anon_sym_ExcludeOS] = ACTIONS(466),
    [anon_sym_ExclusiveArch] = ACTIONS(466),
    [anon_sym_ExclusiveOS] = ACTIONS(466),
    [anon_sym_Obsoletes] = ACTIONS(466),
    [anon_sym_OrderWithRequires] = ACTIONS(466),
    [anon_sym_Prefix] = ACTIONS(466),
    [anon_sym_Prefixes] = ACTIONS(466),
    [anon_sym_Prereq] = ACTIONS(466),
    [anon_sym_Provides] = ACTIONS(466),
    [anon_sym_Recommends] = ACTIONS(466),
    [anon_sym_RemovePathPostfixes] = ACTIONS(466),
    [anon_sym_Suggests] = ACTIONS(466),
    [anon_sym_Supplements] = ACTIONS(466),
    [anon_sym_PERCENTdescription] = ACTIONS(466),
    [anon_sym_PERCENTpackage] = ACTIONS(466),
    [anon_sym_PERCENTprep] = ACTIONS(466),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(466),
    [anon_sym_PERCENTconf] = ACTIONS(466),
    [anon_sym_PERCENTbuild] = ACTIONS(466),
    [anon_sym_PERCENTinstall] = ACTIONS(466),
    [anon_sym_PERCENTcheck] = ACTIONS(466),
    [anon_sym_PERCENTclean] = ACTIONS(466),
    [anon_sym_PERCENTpre] = ACTIONS(466),
    [anon_sym_PERCENTpost] = ACTIONS(466),
    [anon_sym_PERCENTpreun] = ACTIONS(466),
    [anon_sym_PERCENTpostun] = ACTIONS(466),
    [anon_sym_PERCENTpretrans] = ACTIONS(466),
    [anon_sym_PERCENTposttrans] = ACTIONS(466),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(466),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(466),
    [anon_sym_PERCENTverify] = ACTIONS(466),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(466),
    [anon_sym_PERCENTtriggerin] = ACTIONS(466),
    [anon_sym_PERCENTtriggerun] = ACTIONS(466),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(466),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(466),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(466),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(466),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(466),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(466),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(466),
    [anon_sym_PERCENTfiles] = ACTIONS(466),
    [anon_sym_PERCENTchangelog] = ACTIONS(466),
    [anon_sym_PERCENTglobal] = ACTIONS(466),
    [anon_sym_PERCENTdefine] = ACTIONS(466),
    [anon_sym_PERCENTundefine] = ACTIONS(466),
    [anon_sym_PERCENT] = ACTIONS(466),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(466),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(466),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(468),
    [aux_sym__simple_statements_token1] = ACTIONS(468),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(470),
    [anon_sym_PERCENTifarch] = ACTIONS(470),
    [anon_sym_PERCENTifos] = ACTIONS(470),
    [anon_sym_PERCENTifnarch] = ACTIONS(470),
    [anon_sym_PERCENTifnos] = ACTIONS(470),
    [anon_sym_AutoProv] = ACTIONS(470),
    [anon_sym_AutoReq] = ACTIONS(470),
    [anon_sym_AutoReqProv] = ACTIONS(470),
    [anon_sym_BugUrl] = ACTIONS(470),
    [anon_sym_BuildRoot] = ACTIONS(470),
    [anon_sym_BuildSystem] = ACTIONS(470),
    [anon_sym_DistTag] = ACTIONS(470),
    [anon_sym_Distribution] = ACTIONS(470),
    [anon_sym_Epoch] = ACTIONS(470),
    [anon_sym_Group] = ACTIONS(470),
    [anon_sym_License] = ACTIONS(470),
    [anon_sym_ModularityLabel] = ACTIONS(470),
    [anon_sym_Name] = ACTIONS(470),
    [anon_sym_NoPatch] = ACTIONS(470),
    [anon_sym_NoSource] = ACTIONS(470),
    [anon_sym_Packager] = ACTIONS(470),
    [anon_sym_Release] = ACTIONS(470),
    [anon_sym_SourceLicense] = ACTIONS(470),
    [anon_sym_Summary] = ACTIONS(470),
    [anon_sym_URL] = ACTIONS(470),
    [anon_sym_Url] = ACTIONS(470),
    [anon_sym_VCS] = ACTIONS(470),
    [anon_sym_Vendor] = ACTIONS(470),
    [anon_sym_Version] = ACTIONS(470),
    [aux_sym_tag_token1] = ACTIONS(470),
    [aux_sym_tag_token2] = ACTIONS(470),
    [anon_sym_Requires] = ACTIONS(470),
    [anon_sym_BuildArch] = ACTIONS(470),
    [anon_sym_BuildArchitectures] = ACTIONS(470),
    [anon_sym_BuildConflicts] = ACTIONS(470),
    [anon_sym_BuildPrereq] = ACTIONS(470),
    [anon_sym_BuildRequires] = ACTIONS(470),
    [anon_sym_Conflicts] = ACTIONS(470),
    [anon_sym_DocDir] = ACTIONS(470),
    [anon_sym_Enhances] = ACTIONS(470),
    [anon_sym_ExcludeArch] = ACTIONS(470),
    [anon_sym_ExcludeOS] = ACTIONS(470),
    [anon_sym_ExclusiveArch] = ACTIONS(470),
    [anon_sym_ExclusiveOS] = ACTIONS(470),
    [anon_sym_Obsoletes] = ACTIONS(470),
    [anon_sym_OrderWithRequires] = ACTIONS(470),
    [anon_sym_Prefix] = ACTIONS(470),
    [anon_sym_Prefixes] = ACTIONS(470),
    [anon_sym_Prereq] = ACTIONS(470),
    [anon_sym_Provides] = ACTIONS(470),
    [anon_sym_Recommends] = ACTIONS(470),
    [anon_sym_RemovePathPostfixes] = ACTIONS(470),
    [anon_sym_Suggests] = ACTIONS(470),
    [anon_sym_Supplements] = ACTIONS(470),
    [anon_sym_PERCENTdescription] = ACTIONS(470),
    [anon_sym_PERCENTpackage] = ACTIONS(470),
    [anon_sym_PERCENTprep] = ACTIONS(470),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(470),
    [anon_sym_PERCENTconf] = ACTIONS(470),
    [anon_sym_PERCENTbuild] = ACTIONS(470),
    [anon_sym_PERCENTinstall] = ACTIONS(470),
    [anon_sym_PERCENTcheck] = ACTIONS(470),
    [anon_sym_PERCENTclean] = ACTIONS(470),
    [anon_sym_PERCENTpre] = ACTIONS(470),
    [anon_sym_PERCENTpost] = ACTIONS(470),
    [anon_sym_PERCENTpreun] = ACTIONS(470),
    [anon_sym_PERCENTpostun] = ACTIONS(470),
    [anon_sym_PERCENTpretrans] = ACTIONS(470),
    [anon_sym_PERCENTposttrans] = ACTIONS(470),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(470),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(470),
    [anon_sym_PERCENTverify] = ACTIONS(470),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(470),
    [anon_sym_PERCENTtriggerin] = ACTIONS(470),
    [anon_sym_PERCENTtriggerun] = ACTIONS(470),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(470),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(470),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(470),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(470),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(470),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(470),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(470),
    [anon_sym_PERCENTfiles] = ACTIONS(470),
    [anon_sym_PERCENTchangelog] = ACTIONS(470),
    [anon_sym_PERCENTglobal] = ACTIONS(470),
    [anon_sym_PERCENTdefine] = ACTIONS(470),
    [anon_sym_PERCENTundefine] = ACTIONS(470),
    [anon_sym_PERCENT] = ACTIONS(470),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(470),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(470),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(472),
    [aux_sym__simple_statements_token1] = ACTIONS(472),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(474),
    [anon_sym_PERCENTifarch] = ACTIONS(474),
    [anon_sym_PERCENTifos] = ACTIONS(474),
    [anon_sym_PERCENTifnarch] = ACTIONS(474),
    [anon_sym_PERCENTifnos] = ACTIONS(474),
    [anon_sym_AutoProv] = ACTIONS(474),
    [anon_sym_AutoReq] = ACTIONS(474),
    [anon_sym_AutoReqProv] = ACTIONS(474),
    [anon_sym_BugUrl] = ACTIONS(474),
    [anon_sym_BuildRoot] = ACTIONS(474),
    [anon_sym_BuildSystem] = ACTIONS(474),
    [anon_sym_DistTag] = ACTIONS(474),
    [anon_sym_Distribution] = ACTIONS(474),
    [anon_sym_Epoch] = ACTIONS(474),
    [anon_sym_Group] = ACTIONS(474),
    [anon_sym_License] = ACTIONS(474),
    [anon_sym_ModularityLabel] = ACTIONS(474),
    [anon_sym_Name] = ACTIONS(474),
    [anon_sym_NoPatch] = ACTIONS(474),
    [anon_sym_NoSource] = ACTIONS(474),
    [anon_sym_Packager] = ACTIONS(474),
    [anon_sym_Release] = ACTIONS(474),
    [anon_sym_SourceLicense] = ACTIONS(474),
    [anon_sym_Summary] = ACTIONS(474),
    [anon_sym_URL] = ACTIONS(474),
    [anon_sym_Url] = ACTIONS(474),
    [anon_sym_VCS] = ACTIONS(474),
    [anon_sym_Vendor] = ACTIONS(474),
    [anon_sym_Version] = ACTIONS(474),
    [aux_sym_tag_token1] = ACTIONS(474),
    [aux_sym_tag_token2] = ACTIONS(474),
    [anon_sym_Requires] = ACTIONS(474),
    [anon_sym_BuildArch] = ACTIONS(474),
    [anon_sym_BuildArchitectures] = ACTIONS(474),
    [anon_sym_BuildConflicts] = ACTIONS(474),
    [anon_sym_BuildPrereq] = ACTIONS(474),
    [anon_sym_BuildRequires] = ACTIONS(474),
    [anon_sym_Conflicts] = ACTIONS(474),
    [anon_sym_DocDir] = ACTIONS(474),
    [anon_sym_Enhances] = ACTIONS(474),
    [anon_sym_ExcludeArch] = ACTIONS(474),
    [anon_sym_ExcludeOS] = ACTIONS(474),
    [anon_sym_ExclusiveArch] = ACTIONS(474),
    [anon_sym_ExclusiveOS] = ACTIONS(474),
    [anon_sym_Obsoletes] = ACTIONS(474),
    [anon_sym_OrderWithRequires] = ACTIONS(474),
    [anon_sym_Prefix] = ACTIONS(474),
    [anon_sym_Prefixes] = ACTIONS(474),
    [anon_sym_Prereq] = ACTIONS(474),
    [anon_sym_Provides] = ACTIONS(474),
    [anon_sym_Recommends] = ACTIONS(474),
    [anon_sym_RemovePathPostfixes] = ACTIONS(474),
    [anon_sym_Suggests] = ACTIONS(474),
    [anon_sym_Supplements] = ACTIONS(474),
    [anon_sym_PERCENTdescription] = ACTIONS(474),
    [anon_sym_PERCENTpackage] = ACTIONS(474),
    [anon_sym_PERCENTprep] = ACTIONS(474),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(474),
    [anon_sym_PERCENTconf] = ACTIONS(474),
    [anon_sym_PERCENTbuild] = ACTIONS(474),
    [anon_sym_PERCENTinstall] = ACTIONS(474),
    [anon_sym_PERCENTcheck] = ACTIONS(474),
    [anon_sym_PERCENTclean] = ACTIONS(474),
    [anon_sym_PERCENTpre] = ACTIONS(474),
    [anon_sym_PERCENTpost] = ACTIONS(474),
    [anon_sym_PERCENTpreun] = ACTIONS(474),
    [anon_sym_PERCENTpostun] = ACTIONS(474),
    [anon_sym_PERCENTpretrans] = ACTIONS(474),
    [anon_sym_PERCENTposttrans] = ACTIONS(474),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(474),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(474),
    [anon_sym_PERCENTverify] = ACTIONS(474),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(474),
    [anon_sym_PERCENTtriggerin] = ACTIONS(474),
    [anon_sym_PERCENTtriggerun] = ACTIONS(474),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(474),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(474),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(474),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(474),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(474),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(474),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(474),
    [anon_sym_PERCENTfiles] = ACTIONS(474),
    [anon_sym_PERCENTchangelog] = ACTIONS(474),
    [anon_sym_PERCENTglobal] = ACTIONS(474),
    [anon_sym_PERCENTdefine] = ACTIONS(474),
    [anon_sym_PERCENTundefine] = ACTIONS(474),
    [anon_sym_PERCENT] = ACTIONS(474),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(474),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(474),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [aux_sym__simple_statements_token1] = ACTIONS(368),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(370),
    [anon_sym_PERCENTifarch] = ACTIONS(370),
    [anon_sym_PERCENTifos] = ACTIONS(370),
    [anon_sym_PERCENTifnarch] = ACTIONS(370),
    [anon_sym_PERCENTifnos] = ACTIONS(370),
    [anon_sym_AutoProv] = ACTIONS(370),
    [anon_sym_AutoReq] = ACTIONS(370),
    [anon_sym_AutoReqProv] = ACTIONS(370),
    [anon_sym_BugUrl] = ACTIONS(370),
    [anon_sym_BuildRoot] = ACTIONS(370),
    [anon_sym_BuildSystem] = ACTIONS(370),
    [anon_sym_DistTag] = ACTIONS(370),
    [anon_sym_Distribution] = ACTIONS(370),
    [anon_sym_Epoch] = ACTIONS(370),
    [anon_sym_Group] = ACTIONS(370),
    [anon_sym_License] = ACTIONS(370),
    [anon_sym_ModularityLabel] = ACTIONS(370),
    [anon_sym_Name] = ACTIONS(370),
    [anon_sym_NoPatch] = ACTIONS(370),
    [anon_sym_NoSource] = ACTIONS(370),
    [anon_sym_Packager] = ACTIONS(370),
    [anon_sym_Release] = ACTIONS(370),
    [anon_sym_SourceLicense] = ACTIONS(370),
    [anon_sym_Summary] = ACTIONS(370),
    [anon_sym_URL] = ACTIONS(370),
    [anon_sym_Url] = ACTIONS(370),
    [anon_sym_VCS] = ACTIONS(370),
    [anon_sym_Vendor] = ACTIONS(370),
    [anon_sym_Version] = ACTIONS(370),
    [aux_sym_tag_token1] = ACTIONS(370),
    [aux_sym_tag_token2] = ACTIONS(370),
    [anon_sym_Requires] = ACTIONS(370),
    [anon_sym_BuildArch] = ACTIONS(370),
    [anon_sym_BuildArchitectures] = ACTIONS(370),
    [anon_sym_BuildConflicts] = ACTIONS(370),
    [anon_sym_BuildPrereq] = ACTIONS(370),
    [anon_sym_BuildRequires] = ACTIONS(370),
    [anon_sym_Conflicts] = ACTIONS(370),
    [anon_sym_DocDir] = ACTIONS(370),
    [anon_sym_Enhances] = ACTIONS(370),
    [anon_sym_ExcludeArch] = ACTIONS(370),
    [anon_sym_ExcludeOS] = ACTIONS(370),
    [anon_sym_ExclusiveArch] = ACTIONS(370),
    [anon_sym_ExclusiveOS] = ACTIONS(370),
    [anon_sym_Obsoletes] = ACTIONS(370),
    [anon_sym_OrderWithRequires] = ACTIONS(370),
    [anon_sym_Prefix] = ACTIONS(370),
    [anon_sym_Prefixes] = ACTIONS(370),
    [anon_sym_Prereq] = ACTIONS(370),
    [anon_sym_Provides] = ACTIONS(370),
    [anon_sym_Recommends] = ACTIONS(370),
    [anon_sym_RemovePathPostfixes] = ACTIONS(370),
    [anon_sym_Suggests] = ACTIONS(370),
    [anon_sym_Supplements] = ACTIONS(370),
    [anon_sym_PERCENTdescription] = ACTIONS(370),
    [anon_sym_PERCENTpackage] = ACTIONS(370),
    [anon_sym_PERCENTprep] = ACTIONS(370),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(370),
    [anon_sym_PERCENTconf] = ACTIONS(370),
    [anon_sym_PERCENTbuild] = ACTIONS(370),
    [anon_sym_PERCENTinstall] = ACTIONS(370),
    [anon_sym_PERCENTcheck] = ACTIONS(370),
    [anon_sym_PERCENTclean] = ACTIONS(370),
    [anon_sym_PERCENTpre] = ACTIONS(370),
    [anon_sym_PERCENTpost] = ACTIONS(370),
    [anon_sym_PERCENTpreun] = ACTIONS(370),
    [anon_sym_PERCENTpostun] = ACTIONS(370),
    [anon_sym_PERCENTpretrans] = ACTIONS(370),
    [anon_sym_PERCENTposttrans] = ACTIONS(370),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(370),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(370),
    [anon_sym_PERCENTverify] = ACTIONS(370),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(370),
    [anon_sym_PERCENTtriggerin] = ACTIONS(370),
    [anon_sym_PERCENTtriggerun] = ACTIONS(370),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(370),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(370),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(370),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(370),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(370),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(370),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(370),
    [anon_sym_PERCENTfiles] = ACTIONS(370),
    [anon_sym_PERCENTchangelog] = ACTIONS(370),
    [anon_sym_PERCENTglobal] = ACTIONS(370),
    [anon_sym_PERCENTdefine] = ACTIONS(370),
    [anon_sym_PERCENTundefine] = ACTIONS(370),
    [anon_sym_PERCENT] = ACTIONS(370),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(370),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(370),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [aux_sym__simple_statements_token1] = ACTIONS(476),
    [sym_comment] = ACTIONS(9),
    [anon_sym_PERCENTif] = ACTIONS(478),
    [anon_sym_PERCENTifarch] = ACTIONS(478),
    [anon_sym_PERCENTifos] = ACTIONS(478),
    [anon_sym_PERCENTifnarch] = ACTIONS(478),
    [anon_sym_PERCENTifnos] = ACTIONS(478),
    [anon_sym_AutoProv] = ACTIONS(478),
    [anon_sym_AutoReq] = ACTIONS(478),
    [anon_sym_AutoReqProv] = ACTIONS(478),
    [anon_sym_BugUrl] = ACTIONS(478),
    [anon_sym_BuildRoot] = ACTIONS(478),
    [anon_sym_BuildSystem] = ACTIONS(478),
    [anon_sym_DistTag] = ACTIONS(478),
    [anon_sym_Distribution] = ACTIONS(478),
    [anon_sym_Epoch] = ACTIONS(478),
    [anon_sym_Group] = ACTIONS(478),
    [anon_sym_License] = ACTIONS(478),
    [anon_sym_ModularityLabel] = ACTIONS(478),
    [anon_sym_Name] = ACTIONS(478),
    [anon_sym_NoPatch] = ACTIONS(478),
    [anon_sym_NoSource] = ACTIONS(478),
    [anon_sym_Packager] = ACTIONS(478),
    [anon_sym_Release] = ACTIONS(478),
    [anon_sym_SourceLicense] = ACTIONS(478),
    [anon_sym_Summary] = ACTIONS(478),
    [anon_sym_URL] = ACTIONS(478),
    [anon_sym_Url] = ACTIONS(478),
    [anon_sym_VCS] = ACTIONS(478),
    [anon_sym_Vendor] = ACTIONS(478),
    [anon_sym_Version] = ACTIONS(478),
    [aux_sym_tag_token1] = ACTIONS(478),
    [aux_sym_tag_token2] = ACTIONS(478),
    [anon_sym_Requires] = ACTIONS(478),
    [anon_sym_BuildArch] = ACTIONS(478),
    [anon_sym_BuildArchitectures] = ACTIONS(478),
    [anon_sym_BuildConflicts] = ACTIONS(478),
    [anon_sym_BuildPrereq] = ACTIONS(478),
    [anon_sym_BuildRequires] = ACTIONS(478),
    [anon_sym_Conflicts] = ACTIONS(478),
    [anon_sym_DocDir] = ACTIONS(478),
    [anon_sym_Enhances] = ACTIONS(478),
    [anon_sym_ExcludeArch] = ACTIONS(478),
    [anon_sym_ExcludeOS] = ACTIONS(478),
    [anon_sym_ExclusiveArch] = ACTIONS(478),
    [anon_sym_ExclusiveOS] = ACTIONS(478),
    [anon_sym_Obsoletes] = ACTIONS(478),
    [anon_sym_OrderWithRequires] = ACTIONS(478),
    [anon_sym_Prefix] = ACTIONS(478),
    [anon_sym_Prefixes] = ACTIONS(478),
    [anon_sym_Prereq] = ACTIONS(478),
    [anon_sym_Provides] = ACTIONS(478),
    [anon_sym_Recommends] = ACTIONS(478),
    [anon_sym_RemovePathPostfixes] = ACTIONS(478),
    [anon_sym_Suggests] = ACTIONS(478),
    [anon_sym_Supplements] = ACTIONS(478),
    [anon_sym_PERCENTdescription] = ACTIONS(478),
    [anon_sym_PERCENTpackage] = ACTIONS(478),
    [anon_sym_PERCENTprep] = ACTIONS(478),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(478),
    [anon_sym_PERCENTconf] = ACTIONS(478),
    [anon_sym_PERCENTbuild] = ACTIONS(478),
    [anon_sym_PERCENTinstall] = ACTIONS(478),
    [anon_sym_PERCENTcheck] = ACTIONS(478),
    [anon_sym_PERCENTclean] = ACTIONS(478),
    [anon_sym_PERCENTpre] = ACTIONS(478),
    [anon_sym_PERCENTpost] = ACTIONS(478),
    [anon_sym_PERCENTpreun] = ACTIONS(478),
    [anon_sym_PERCENTpostun] = ACTIONS(478),
    [anon_sym_PERCENTpretrans] = ACTIONS(478),
    [anon_sym_PERCENTposttrans] = ACTIONS(478),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(478),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(478),
    [anon_sym_PERCENTverify] = ACTIONS(478),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(478),
    [anon_sym_PERCENTtriggerin] = ACTIONS(478),
    [anon_sym_PERCENTtriggerun] = ACTIONS(478),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(478),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(478),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(478),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(478),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(478),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(478),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(478),
    [anon_sym_PERCENTfiles] = ACTIONS(478),
    [anon_sym_PERCENTchangelog] = ACTIONS(478),
    [anon_sym_PERCENTglobal] = ACTIONS(478),
    [anon_sym_PERCENTdefine] = ACTIONS(478),
    [anon_sym_PERCENTundefine] = ACTIONS(478),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(478),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(478),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 5,
      anon_sym_PERCENTelif,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    ACTIONS(460), 50,
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
  [63] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 5,
      anon_sym_PERCENTelif,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    ACTIONS(432), 50,
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
  [126] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_Requires,
    ACTIONS(486), 1,
      anon_sym_PERCENTdescription,
    STATE(69), 1,
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
    STATE(456), 2,
      sym_tag,
      sym_dependency_tag,
    ACTIONS(484), 20,
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
    ACTIONS(480), 24,
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
  [203] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_Requires,
    ACTIONS(503), 1,
      anon_sym_PERCENTdescription,
    STATE(69), 1,
      sym_tags,
    ACTIONS(491), 2,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
    ACTIONS(497), 2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    STATE(72), 2,
      sym_preamble,
      aux_sym_subsection_package_repeat1,
    STATE(456), 2,
      sym_tag,
      sym_dependency_tag,
    ACTIONS(500), 20,
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
    ACTIONS(488), 24,
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
    ACTIONS(482), 1,
      anon_sym_Requires,
    STATE(69), 1,
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
    STATE(456), 2,
      sym_tag,
      sym_dependency_tag,
    ACTIONS(484), 20,
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
    ACTIONS(480), 24,
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
    ACTIONS(507), 1,
      anon_sym_PERCENTdefattr,
    STATE(98), 1,
      sym_attr,
    STATE(152), 1,
      sym_verify,
    STATE(327), 1,
      sym_string,
    ACTIONS(505), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(77), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(238), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(509), 9,
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
    ACTIONS(507), 1,
      anon_sym_PERCENTdefattr,
    STATE(98), 1,
      sym_attr,
    STATE(152), 1,
      sym_verify,
    STATE(327), 1,
      sym_string,
    ACTIONS(505), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(76), 4,
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
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(509), 9,
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
    ACTIONS(507), 1,
      anon_sym_PERCENTdefattr,
    STATE(98), 1,
      sym_attr,
    STATE(152), 1,
      sym_verify,
    STATE(327), 1,
      sym_string,
    ACTIONS(505), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(78), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(234), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(509), 9,
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
    ACTIONS(507), 1,
      anon_sym_PERCENTdefattr,
    STATE(98), 1,
      sym_attr,
    STATE(152), 1,
      sym_verify,
    STATE(327), 1,
      sym_string,
    ACTIONS(505), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(78), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(230), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(509), 9,
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
    ACTIONS(200), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENTattr,
    ACTIONS(212), 1,
      anon_sym_PERCENT,
    ACTIONS(215), 1,
      sym_string_content,
    ACTIONS(218), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(221), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(514), 1,
      anon_sym_PERCENTdefattr,
    STATE(98), 1,
      sym_attr,
    STATE(152), 1,
      sym_verify,
    STATE(327), 1,
      sym_string,
    ACTIONS(511), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(78), 4,
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
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(517), 9,
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
    ACTIONS(507), 1,
      anon_sym_PERCENTdefattr,
    STATE(98), 1,
      sym_attr,
    STATE(152), 1,
      sym_verify,
    STATE(327), 1,
      sym_string,
    ACTIONS(505), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(80), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    ACTIONS(226), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(509), 9,
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
    ACTIONS(507), 1,
      anon_sym_PERCENTdefattr,
    STATE(98), 1,
      sym_attr,
    STATE(152), 1,
      sym_verify,
    STATE(327), 1,
      sym_string,
    ACTIONS(505), 3,
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
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(509), 9,
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
    ACTIONS(195), 1,
      anon_sym_PERCENTendif,
    ACTIONS(200), 1,
      anon_sym_PERCENTverify,
    ACTIONS(209), 1,
      anon_sym_PERCENTattr,
    ACTIONS(212), 1,
      anon_sym_PERCENT,
    ACTIONS(215), 1,
      sym_string_content,
    ACTIONS(218), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(221), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(523), 1,
      anon_sym_PERCENTdefattr,
    STATE(97), 1,
      sym_attr,
    STATE(140), 1,
      sym_verify,
    STATE(360), 1,
      sym_string,
    ACTIONS(520), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(81), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(526), 9,
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
    ACTIONS(531), 1,
      anon_sym_PERCENTdefattr,
    STATE(97), 1,
      sym_attr,
    STATE(140), 1,
      sym_verify,
    STATE(360), 1,
      sym_string,
    ACTIONS(529), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(87), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(135), 5,
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
    ACTIONS(238), 1,
      anon_sym_PERCENTendif,
    ACTIONS(531), 1,
      anon_sym_PERCENTdefattr,
    STATE(97), 1,
      sym_attr,
    STATE(140), 1,
      sym_verify,
    STATE(360), 1,
      sym_string,
    ACTIONS(529), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(86), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(135), 5,
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
  [1042] = 16,
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
    ACTIONS(531), 1,
      anon_sym_PERCENTdefattr,
    STATE(97), 1,
      sym_attr,
    STATE(140), 1,
      sym_verify,
    STATE(360), 1,
      sym_string,
    ACTIONS(529), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(81), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(135), 5,
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
    ACTIONS(226), 1,
      anon_sym_PERCENTendif,
    ACTIONS(531), 1,
      anon_sym_PERCENTdefattr,
    STATE(97), 1,
      sym_attr,
    STATE(140), 1,
      sym_verify,
    STATE(360), 1,
      sym_string,
    ACTIONS(529), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(84), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(135), 5,
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
  [1174] = 16,
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
    ACTIONS(230), 1,
      anon_sym_PERCENTendif,
    ACTIONS(531), 1,
      anon_sym_PERCENTdefattr,
    STATE(97), 1,
      sym_attr,
    STATE(140), 1,
      sym_verify,
    STATE(360), 1,
      sym_string,
    ACTIONS(529), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(81), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(135), 5,
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
    ACTIONS(234), 1,
      anon_sym_PERCENTendif,
    ACTIONS(531), 1,
      anon_sym_PERCENTdefattr,
    STATE(97), 1,
      sym_attr,
    STATE(140), 1,
      sym_verify,
    STATE(360), 1,
      sym_string,
    ACTIONS(529), 3,
      anon_sym_PERCENTif,
      anon_sym_PERCENTifarch,
      anon_sym_PERCENTifos,
    STATE(81), 4,
      sym_conditional_files,
      sym_defattr,
      sym_file,
      aux_sym_files_repeat1,
    STATE(135), 5,
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
    ACTIONS(535), 1,
      anon_sym_PERCENTdefattr,
    STATE(96), 1,
      sym_attr,
    STATE(149), 1,
      sym_verify,
    STATE(348), 1,
      sym_string,
    STATE(411), 2,
      sym_defattr,
      sym_file,
    STATE(135), 5,
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
    ACTIONS(535), 1,
      anon_sym_PERCENTdefattr,
    STATE(96), 1,
      sym_attr,
    STATE(149), 1,
      sym_verify,
    STATE(348), 1,
      sym_string,
    STATE(425), 2,
      sym_defattr,
      sym_file,
    STATE(135), 5,
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
    ACTIONS(535), 1,
      anon_sym_PERCENTdefattr,
    STATE(96), 1,
      sym_attr,
    STATE(149), 1,
      sym_verify,
    STATE(348), 1,
      sym_string,
    STATE(381), 2,
      sym_defattr,
      sym_file,
    STATE(135), 5,
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
  [1474] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(270), 24,
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
    ACTIONS(258), 24,
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
    ACTIONS(266), 24,
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
    ACTIONS(262), 24,
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
    ACTIONS(274), 24,
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
    STATE(144), 1,
      sym_verify,
    STATE(350), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(539), 9,
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
    STATE(139), 1,
      sym_verify,
    STATE(362), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(541), 9,
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
    STATE(141), 1,
      sym_verify,
    STATE(331), 1,
      sym_string,
    STATE(135), 5,
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
    STATE(157), 1,
      sym_verify,
    STATE(295), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(545), 9,
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
    ACTIONS(274), 20,
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
    ACTIONS(262), 20,
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
    ACTIONS(266), 20,
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
    ACTIONS(270), 20,
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
    ACTIONS(258), 20,
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
  [1926] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_PERCENT,
    ACTIONS(549), 1,
      sym_string_content_with_newlines,
    ACTIONS(551), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(553), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(218), 1,
      sym_string_with_newlines,
    ACTIONS(278), 5,
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
  [1959] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_PERCENT,
    ACTIONS(549), 1,
      sym_string_content_with_newlines,
    ACTIONS(551), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(553), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(200), 1,
      sym_string_with_newlines,
    ACTIONS(298), 5,
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
  [1992] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_PERCENT,
    ACTIONS(549), 1,
      sym_string_content_with_newlines,
    ACTIONS(551), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(553), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(203), 1,
      sym_string_with_newlines,
    ACTIONS(294), 5,
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
  [2025] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_PERCENT,
    ACTIONS(549), 1,
      sym_string_content_with_newlines,
    ACTIONS(551), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(553), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(204), 1,
      sym_string_with_newlines,
    ACTIONS(290), 5,
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
  [2058] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_PERCENT,
    ACTIONS(558), 1,
      sym_string_content_with_newlines,
    ACTIONS(561), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(564), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(308), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(109), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2088] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(571), 1,
      anon_sym_PERCENT,
    ACTIONS(573), 1,
      sym_string_content,
    ACTIONS(575), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(577), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(569), 2,
      sym_integer,
      sym_float,
    STATE(112), 2,
      aux_sym__value,
      sym_string,
    STATE(122), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2122] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(579), 14,
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
  [2142] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(581), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(586), 1,
      anon_sym_PERCENT,
    ACTIONS(589), 1,
      sym_string_content,
    ACTIONS(592), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(595), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(583), 2,
      sym_integer,
      sym_float,
    STATE(112), 2,
      aux_sym__value,
      sym_string,
    STATE(122), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2176] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_PERCENT,
    ACTIONS(573), 1,
      sym_string_content,
    ACTIONS(575), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(577), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(598), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(569), 2,
      sym_integer,
      sym_float,
    STATE(112), 2,
      aux_sym__value,
      sym_string,
    STATE(122), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2210] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_PERCENT,
    ACTIONS(551), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(553), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(600), 1,
      sym_string_content_with_newlines,
    ACTIONS(302), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
    STATE(109), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2240] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_PERCENT,
    ACTIONS(573), 1,
      sym_string_content,
    ACTIONS(575), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(577), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(602), 2,
      sym_integer,
      sym_float,
    STATE(113), 2,
      aux_sym__value,
      sym_string,
    STATE(122), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2271] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_PERCENT,
    ACTIONS(573), 1,
      sym_string_content,
    ACTIONS(575), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(577), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(604), 2,
      sym_integer,
      sym_float,
    STATE(110), 2,
      aux_sym__value,
      sym_string,
    STATE(122), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RPAREN2,
    STATE(117), 1,
      aux_sym_verify_repeat1,
    ACTIONS(606), 11,
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
  [2325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_RPAREN2,
    STATE(119), 1,
      aux_sym_verify_repeat1,
    ACTIONS(611), 11,
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
  [2348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RPAREN2,
    STATE(117), 1,
      aux_sym_verify_repeat1,
    ACTIONS(615), 11,
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
  [2371] = 9,
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
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_macro_options,
    STATE(329), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2403] = 9,
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
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym_macro_options,
    STATE(303), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2435] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_PERCENT,
    ACTIONS(575), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(577), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(623), 1,
      sym_string_content,
    ACTIONS(621), 3,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
    STATE(123), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2463] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_PERCENT,
    ACTIONS(630), 1,
      sym_string_content,
    ACTIONS(633), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(636), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(625), 3,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
    STATE(123), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2491] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_PERCENT,
    ACTIONS(642), 1,
      sym_string_content,
    ACTIONS(645), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(648), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(625), 2,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
    STATE(124), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2518] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_PERCENTendif,
    ACTIONS(651), 1,
      anon_sym_PERCENT,
    ACTIONS(653), 1,
      sym_string_content_with_newlines,
    ACTIONS(655), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(657), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(203), 1,
      sym_string_with_newlines,
    STATE(131), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2547] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_PERCENT,
    ACTIONS(661), 1,
      sym_string_content,
    ACTIONS(663), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(665), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(621), 2,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
    STATE(124), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2574] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_PERCENTendif,
    ACTIONS(651), 1,
      anon_sym_PERCENT,
    ACTIONS(653), 1,
      sym_string_content_with_newlines,
    ACTIONS(655), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(657), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(204), 1,
      sym_string_with_newlines,
    STATE(131), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2603] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_PERCENTendif,
    ACTIONS(651), 1,
      anon_sym_PERCENT,
    ACTIONS(653), 1,
      sym_string_content_with_newlines,
    ACTIONS(655), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(657), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(200), 1,
      sym_string_with_newlines,
    STATE(131), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2632] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_PERCENTendif,
    ACTIONS(651), 1,
      anon_sym_PERCENT,
    ACTIONS(653), 1,
      sym_string_content_with_newlines,
    ACTIONS(655), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(657), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(218), 1,
      sym_string_with_newlines,
    STATE(131), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2661] = 7,
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
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2687] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_PERCENTendif,
    ACTIONS(651), 1,
      anon_sym_PERCENT,
    ACTIONS(655), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(657), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(667), 1,
      sym_string_content_with_newlines,
    STATE(145), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [2713] = 7,
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
    STATE(326), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2739] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_PERCENT,
    ACTIONS(663), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(665), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(669), 1,
      sym_string_content,
    STATE(262), 1,
      sym_string,
    STATE(126), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2765] = 7,
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
    STATE(306), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2791] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(187), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(621), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(671), 1,
      sym_string_content,
    STATE(147), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2817] = 7,
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
    STATE(312), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2843] = 7,
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
    STATE(295), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2869] = 7,
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
    STATE(293), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2895] = 7,
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
    STATE(364), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2921] = 7,
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
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2947] = 7,
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
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2973] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_PERCENT,
    ACTIONS(663), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(665), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(669), 1,
      sym_string_content,
    STATE(269), 1,
      sym_string,
    STATE(126), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [2999] = 7,
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
    STATE(353), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3025] = 7,
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
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3051] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_PERCENTendif,
    ACTIONS(673), 1,
      anon_sym_PERCENT,
    ACTIONS(676), 1,
      sym_string_content_with_newlines,
    ACTIONS(679), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(682), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(145), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_with_newlines_repeat1,
  [3077] = 7,
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
    STATE(328), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3103] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(625), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(685), 1,
      anon_sym_PERCENT,
    ACTIONS(688), 1,
      sym_string_content,
    ACTIONS(691), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(694), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(147), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3129] = 7,
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
    STATE(337), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3155] = 7,
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
    STATE(350), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3181] = 7,
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
    STATE(340), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3207] = 7,
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
    STATE(427), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3233] = 7,
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
    STATE(331), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3259] = 7,
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
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3285] = 7,
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
    STATE(280), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3311] = 7,
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
    STATE(347), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3337] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_PERCENT,
    ACTIONS(663), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(665), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(669), 1,
      sym_string_content,
    STATE(267), 1,
      sym_string,
    STATE(126), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3363] = 7,
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
    STATE(281), 1,
      sym_string,
    STATE(135), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [3389] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(362), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3404] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_PERCENT,
    ACTIONS(699), 1,
      sym_string_content,
    ACTIONS(701), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(703), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(335), 1,
      sym_single_word,
    STATE(398), 4,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
  [3429] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(308), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3444] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_PERCENT,
    ACTIONS(699), 1,
      sym_string_content,
    ACTIONS(701), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(703), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(290), 1,
      sym_single_word,
    STATE(398), 4,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
  [3469] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(382), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3484] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(374), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(313), 1,
      sym_qualifier,
    ACTIONS(705), 2,
      anon_sym_pre,
      anon_sym_post,
    ACTIONS(707), 6,
      anon_sym_postun,
      anon_sym_pretrans,
      anon_sym_posttrans,
      anon_sym_verify,
      anon_sym_interp,
      anon_sym_meta,
  [3518] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(370), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3533] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(378), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3548] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_PERCENT,
    ACTIONS(699), 1,
      sym_string_content,
    ACTIONS(701), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(703), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(397), 1,
      sym_single_word,
    STATE(398), 4,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
  [3573] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(366), 9,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3588] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_PERCENTelif,
    ACTIONS(709), 1,
      anon_sym_PERCENTendif,
    ACTIONS(713), 1,
      anon_sym_PERCENTelse,
    STATE(174), 1,
      aux_sym_if_statement_repeat1,
    STATE(215), 1,
      sym_elif_clause,
    STATE(288), 1,
      sym_else_clause,
    ACTIONS(711), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [3614] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_PERCENTelif,
    ACTIONS(715), 1,
      anon_sym_STAR,
    STATE(177), 2,
      sym_changelog_entry,
      aux_sym_changelog_repeat1,
    ACTIONS(348), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [3634] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_PERCENTelif,
    ACTIONS(715), 1,
      anon_sym_STAR,
    STATE(170), 2,
      sym_changelog_entry,
      aux_sym_changelog_repeat1,
    ACTIONS(329), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [3654] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_PERCENTelif,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(172), 1,
      aux_sym_changelog_entry_repeat1,
    ACTIONS(335), 5,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_STAR,
  [3674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_PERCENTelif,
    ACTIONS(720), 1,
      anon_sym_DASH,
    STATE(172), 1,
      aux_sym_changelog_entry_repeat1,
    ACTIONS(342), 5,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_STAR,
  [3694] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_PERCENTelif,
    ACTIONS(713), 1,
      anon_sym_PERCENTelse,
    ACTIONS(722), 1,
      anon_sym_PERCENTendif,
    STATE(184), 1,
      aux_sym_if_statement_repeat1,
    STATE(215), 1,
      sym_elif_clause,
    STATE(370), 1,
      sym_else_clause,
    ACTIONS(711), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [3720] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_PERCENTelif,
    ACTIONS(720), 1,
      anon_sym_DASH,
    STATE(173), 1,
      aux_sym_changelog_entry_repeat1,
    ACTIONS(352), 5,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_STAR,
  [3740] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_PERCENTelif,
    ACTIONS(713), 1,
      anon_sym_PERCENTelse,
    ACTIONS(724), 1,
      anon_sym_PERCENTendif,
    STATE(184), 1,
      aux_sym_if_statement_repeat1,
    STATE(215), 1,
      sym_elif_clause,
    STATE(284), 1,
      sym_else_clause,
    ACTIONS(711), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [3766] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_PERCENTelif,
    ACTIONS(726), 1,
      anon_sym_STAR,
    STATE(177), 2,
      sym_changelog_entry,
      aux_sym_changelog_repeat1,
    ACTIONS(322), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [3786] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(370), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3799] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(366), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3812] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(362), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3825] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(382), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3838] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(378), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3851] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(374), 7,
      aux_sym__simple_statements_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3864] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_PERCENTelif,
    STATE(184), 1,
      aux_sym_if_statement_repeat1,
    STATE(215), 1,
      sym_elif_clause,
    ACTIONS(729), 2,
      anon_sym_PERCENTendif,
      anon_sym_PERCENTelse,
    ACTIONS(734), 2,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
  [3885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_PERCENTelif,
    ACTIONS(356), 6,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
      anon_sym_DASH,
      anon_sym_STAR,
  [3900] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(378), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3912] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(362), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3924] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(382), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3936] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(374), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3948] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(370), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3960] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(366), 6,
      aux_sym__simple_statements_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_PERCENTelif,
    ACTIONS(416), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [3985] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(374), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [3996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_PERCENTelif,
    ACTIONS(412), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4009] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(374), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4020] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(362), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_PERCENTelif,
    ACTIONS(364), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_PERCENTelif,
    ACTIONS(404), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_PERCENTelif,
    ACTIONS(440), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_PERCENTelif,
    ACTIONS(384), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_PERCENTelif,
    ACTIONS(400), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_PERCENTelif,
    ACTIONS(360), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_PERCENTelif,
    ACTIONS(468), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_PERCENTelif,
    ACTIONS(472), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_PERCENTelif,
    ACTIONS(376), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_PERCENTelif,
    ACTIONS(368), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_PERCENTelif,
    ACTIONS(396), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_PERCENTelif,
    ACTIONS(372), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_PERCENTelif,
    ACTIONS(380), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4200] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(370), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4211] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(382), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4222] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(382), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_PERCENTelif,
    ACTIONS(408), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4246] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(378), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_PERCENTelif,
    ACTIONS(737), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_PERCENTelif,
    ACTIONS(448), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4283] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(370), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_PERCENTelif,
    ACTIONS(456), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4307] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(378), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4318] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(362), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4329] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(366), 5,
      aux_sym__simple_statements_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_PERCENTelif,
    ACTIONS(420), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_PERCENTelif,
    ACTIONS(388), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4366] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(366), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_PERCENTelif,
    ACTIONS(741), 4,
      anon_sym_PERCENTendif,
      anon_sym_elifarch,
      anon_sym_PERCENTelifos,
      anon_sym_PERCENTelse,
  [4390] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(308), 5,
      anon_sym_PERCENTendif,
      anon_sym_PERCENT,
      sym_string_content_with_newlines,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4401] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(745), 4,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4411] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(747), 4,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4421] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(749), 4,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [4431] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(753), 1,
      anon_sym_DASHn,
    ACTIONS(755), 1,
      anon_sym_DASHf,
  [4444] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(757), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(759), 1,
      anon_sym_DASHn,
    ACTIONS(761), 1,
      anon_sym_DASHf,
  [4457] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(763), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(765), 1,
      anon_sym_DASHn,
    ACTIONS(767), 1,
      anon_sym_DASHf,
  [4470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_COLON,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
  [4480] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym_string_content_with_newlines,
    ACTIONS(775), 1,
      sym_variable_name,
  [4490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [4498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [4506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [4514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_COLON,
    ACTIONS(785), 1,
      anon_sym_LPAREN,
  [4524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym_variable_name,
    ACTIONS(789), 1,
      anon_sym_QMARK,
  [4534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym_variable_name,
    ACTIONS(793), 1,
      anon_sym_QMARK,
  [4544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym_variable_name,
    ACTIONS(797), 1,
      anon_sym_QMARK,
  [4554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_variable_name,
    ACTIONS(801), 1,
      anon_sym_QMARK,
  [4564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      sym_variable_name,
    ACTIONS(805), 1,
      anon_sym_QMARK,
  [4574] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(807), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(809), 1,
      anon_sym_DASHn,
  [4584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      sym_variable_name,
    ACTIONS(813), 1,
      anon_sym_QMARK,
  [4594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym_variable_name,
    ACTIONS(817), 1,
      anon_sym_QMARK,
  [4604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym_variable_name,
    ACTIONS(821), 1,
      anon_sym_QMARK,
  [4614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_PERCENTdescription,
    STATE(57), 1,
      sym_subsection_description,
  [4624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym_variable_name,
    ACTIONS(827), 1,
      anon_sym_QMARK,
  [4634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_COLON,
    ACTIONS(831), 1,
      anon_sym_RBRACE,
  [4644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_COLON,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
  [4654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_COLON,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
  [4664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_COLON,
    ACTIONS(843), 1,
      anon_sym_RBRACE,
  [4674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COLON,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
  [4684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_COLON,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
  [4694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_COLON,
    ACTIONS(855), 1,
      anon_sym_RBRACE,
  [4704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_COLON,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
  [4714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_COLON,
    ACTIONS(863), 1,
      anon_sym_RBRACE,
  [4724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_COLON,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
  [4734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_COLON,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
  [4744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_COLON,
    ACTIONS(875), 1,
      anon_sym_RBRACE,
  [4754] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(879), 1,
      anon_sym_DASHf,
  [4764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [4772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_COLON,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
  [4782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [4790] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym_string_content_with_newlines,
    ACTIONS(891), 1,
      sym_variable_name,
  [4800] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(893), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(895), 1,
      anon_sym_DASHf,
  [4810] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(897), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(899), 1,
      anon_sym_DASHn,
  [4820] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(901), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(903), 1,
      anon_sym_DASHf,
  [4830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_COLON,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
  [4840] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(909), 1,
      sym_string_content_with_newlines,
    ACTIONS(911), 1,
      sym_variable_name,
  [4850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_COLON,
    ACTIONS(915), 1,
      anon_sym_RBRACE,
  [4860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_COLON,
    ACTIONS(919), 1,
      anon_sym_RBRACE,
  [4870] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(921), 1,
      aux_sym__simple_statements_token1,
    ACTIONS(923), 1,
      anon_sym_DASHn,
  [4880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_COLON,
    ACTIONS(927), 1,
      anon_sym_RBRACE,
  [4890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_PERCENTdescription,
    STATE(199), 1,
      sym_subsection_description,
  [4900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_variable_name,
  [4907] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(933), 1,
      aux_sym__simple_statements_token1,
  [4914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
  [4921] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__simple_statements_token1,
  [4928] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(939), 1,
      aux_sym__simple_statements_token1,
  [4935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_COMMA,
  [4942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      sym_variable_name,
  [4949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_PERCENTendif,
  [4956] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym__simple_statements_token1,
  [4963] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(949), 1,
      aux_sym__simple_statements_token1,
  [4970] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(951), 1,
      aux_sym__simple_statements_token1,
  [4977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_PERCENTendif,
  [4984] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(955), 1,
      aux_sym__simple_statements_token1,
  [4991] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(957), 1,
      aux_sym__simple_statements_token1,
  [4998] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym_string_content,
  [5005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
  [5012] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(963), 1,
      aux_sym__simple_statements_token1,
  [5019] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(965), 1,
      aux_sym__simple_statements_token1,
  [5026] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(967), 1,
      aux_sym__simple_statements_token1,
  [5033] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(969), 1,
      aux_sym__simple_statements_token1,
  [5040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_COLON,
  [5047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_PERCENTendif,
  [5054] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(975), 1,
      aux_sym__simple_statements_token1,
  [5061] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(977), 1,
      aux_sym_if_statement_token1,
  [5068] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(979), 1,
      aux_sym__simple_statements_token1,
  [5075] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(981), 1,
      sym_string_content,
  [5082] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(983), 1,
      aux_sym__simple_statements_token1,
  [5089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
  [5096] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(987), 1,
      sym_string_content,
  [5103] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym__simple_statements_token1,
  [5110] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(989), 1,
      aux_sym__simple_statements_token1,
  [5117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_LPAREN,
  [5124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_LPAREN,
  [5131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_LPAREN2,
  [5138] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(997), 1,
      aux_sym_if_statement_token1,
  [5145] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(999), 1,
      aux_sym__simple_statements_token1,
  [5152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
  [5159] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1003), 1,
      aux_sym__simple_statements_token1,
  [5166] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1005), 1,
      aux_sym__simple_statements_token1,
  [5173] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1007), 1,
      aux_sym__simple_statements_token1,
  [5180] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1009), 1,
      aux_sym__simple_statements_token1,
  [5187] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1011), 1,
      aux_sym__simple_statements_token1,
  [5194] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1013), 1,
      aux_sym__simple_statements_token1,
  [5201] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1015), 1,
      aux_sym__simple_statements_token1,
  [5208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
  [5215] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1019), 1,
      aux_sym__simple_statements_token1,
  [5222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      sym_variable_name,
  [5229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
  [5236] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1025), 1,
      aux_sym__simple_statements_token1,
  [5243] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1027), 1,
      aux_sym__simple_statements_token1,
  [5250] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1029), 1,
      aux_sym__simple_statements_token1,
  [5257] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(901), 1,
      aux_sym__simple_statements_token1,
  [5264] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1031), 1,
      aux_sym__simple_statements_token1,
  [5271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_DASHn,
  [5278] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1035), 1,
      aux_sym__simple_statements_token1,
  [5285] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1037), 1,
      aux_sym__simple_statements_token1,
  [5292] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1039), 1,
      aux_sym__simple_statements_token1,
  [5299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_RBRACE,
  [5306] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1043), 1,
      aux_sym__simple_statements_token1,
  [5313] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1045), 1,
      aux_sym__simple_statements_token1,
  [5320] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1047), 1,
      aux_sym__simple_statements_token1,
  [5327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_RBRACE,
  [5334] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1051), 1,
      aux_sym__simple_statements_token1,
  [5341] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1053), 1,
      aux_sym__simple_statements_token1,
  [5348] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1055), 1,
      aux_sym__simple_statements_token1,
  [5355] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1057), 1,
      aux_sym__simple_statements_token1,
  [5362] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1059), 1,
      aux_sym__simple_statements_token1,
  [5369] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1061), 1,
      aux_sym_if_statement_token1,
  [5376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym_variable_name,
  [5383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
  [5390] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1067), 1,
      aux_sym__simple_statements_token1,
  [5397] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1069), 1,
      aux_sym__simple_statements_token1,
  [5404] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(893), 1,
      aux_sym__simple_statements_token1,
  [5411] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1071), 1,
      aux_sym__simple_statements_token1,
  [5418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_RBRACE,
  [5425] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1075), 1,
      aux_sym__simple_statements_token1,
  [5432] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1077), 1,
      aux_sym__simple_statements_token1,
  [5439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_RBRACE,
  [5446] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1081), 1,
      aux_sym__simple_statements_token1,
  [5453] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1083), 1,
      aux_sym__simple_statements_token1,
  [5460] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym__simple_statements_token1,
  [5467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
  [5474] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym__simple_statements_token1,
  [5481] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1087), 1,
      aux_sym__simple_statements_token1,
  [5488] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1089), 1,
      aux_sym__simple_statements_token1,
  [5495] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1091), 1,
      aux_sym__simple_statements_token1,
  [5502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_RBRACE,
  [5509] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1095), 1,
      aux_sym__simple_statements_token1,
  [5516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_RBRACE,
  [5523] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1099), 1,
      aux_sym__simple_statements_token1,
  [5530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      sym_variable_name,
  [5537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
  [5544] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1105), 1,
      aux_sym__simple_statements_token1,
  [5551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_PERCENTendif,
  [5558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_RBRACE,
  [5565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_RBRACE,
  [5572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      sym_variable_name,
  [5579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
  [5586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_PERCENTendif,
  [5593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_PERCENTendif,
  [5600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_RBRACE,
  [5607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_RBRACE,
  [5614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
  [5621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_PERCENTendif,
  [5628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_PERCENTendif,
  [5635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_RBRACE,
  [5642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_RBRACE,
  [5649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_RPAREN,
  [5656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_PERCENTendif,
  [5663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      aux_sym_defattr_token2,
  [5670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_RBRACE,
  [5677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_RBRACE,
  [5684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
  [5691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      aux_sym_defattr_token2,
  [5698] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1143), 1,
      aux_sym__simple_statements_token1,
  [5705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_RBRACE,
  [5712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_RBRACE,
  [5719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      sym_variable_name,
  [5726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_PERCENTendif,
  [5733] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1151), 1,
      aux_sym__simple_statements_token1,
  [5740] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1153), 1,
      aux_sym__simple_statements_token1,
  [5747] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym__simple_statements_token1,
  [5754] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1157), 1,
      aux_sym__simple_statements_token1,
  [5761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      sym_variable_name,
  [5768] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1161), 1,
      aux_sym__simple_statements_token1,
  [5775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_COLON,
  [5782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      ts_builtin_sym_end,
  [5789] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_string_content,
  [5796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      anon_sym_RPAREN,
  [5803] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1171), 1,
      sym_string_content,
  [5810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_COMMA,
  [5817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_variable_name,
  [5824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      sym_variable_name,
  [5831] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1179), 1,
      sym_string_content,
  [5838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_PERCENTendif,
  [5845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      sym_variable_name,
  [5852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
  [5859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
  [5866] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1189), 1,
      aux_sym__simple_statements_token1,
  [5873] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1191), 1,
      aux_sym__simple_statements_token1,
  [5880] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1193), 1,
      aux_sym__simple_statements_token1,
  [5887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      sym_variable_name,
  [5894] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1197), 1,
      aux_sym__simple_statements_token1,
  [5901] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1199), 1,
      aux_sym__simple_statements_token1,
  [5908] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1201), 1,
      sym_string_content,
  [5915] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1203), 1,
      aux_sym__simple_statements_token1,
  [5922] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym__simple_statements_token1,
  [5929] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1207), 1,
      sym_string_content,
  [5936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_PERCENTendif,
  [5943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_RPAREN,
  [5950] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1213), 1,
      aux_sym__simple_statements_token1,
  [5957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      sym_variable_name,
  [5964] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1217), 1,
      aux_sym__simple_statements_token1,
  [5971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      aux_sym_defattr_token2,
  [5978] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1221), 1,
      sym_string_content,
  [5985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_COLON,
  [5992] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1223), 1,
      sym_string_content,
  [5999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      anon_sym_RPAREN,
  [6006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      aux_sym_defattr_token2,
  [6013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 1,
      sym_variable_name,
  [6020] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1231), 1,
      sym_string_content,
  [6027] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1233), 1,
      sym_string_content,
  [6034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      anon_sym_RPAREN,
  [6041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      sym_variable_name,
  [6048] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1239), 1,
      sym_string_content,
  [6055] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1241), 1,
      sym_string_content,
  [6062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
  [6069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      sym_variable_name,
  [6076] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1247), 1,
      sym_string_content,
  [6083] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1249), 1,
      sym_string_content,
  [6090] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1251), 1,
      aux_sym__simple_statements_token1,
  [6097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      sym_variable_name,
  [6104] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1255), 1,
      sym_string_content,
  [6111] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1257), 1,
      sym_string_content,
  [6118] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym__simple_statements_token1,
  [6125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      sym_variable_name,
  [6132] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1261), 1,
      sym_string_content,
  [6139] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1263), 1,
      sym_string_content,
  [6146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1265), 1,
      sym_variable_name,
  [6153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      anon_sym_COLON,
  [6160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      anon_sym_DASHn,
  [6167] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(372), 1,
      aux_sym__simple_statements_token1,
  [6174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      aux_sym_defattr_token2,
  [6181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1273), 1,
      anon_sym_COLON,
  [6188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      aux_sym_defattr_token2,
  [6195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1277), 1,
      aux_sym_defattr_token2,
  [6202] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1279), 1,
      aux_sym__simple_statements_token1,
  [6209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1281), 1,
      anon_sym_COMMA,
  [6216] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1283), 1,
      aux_sym__simple_statements_token1,
  [6223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
  [6230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 1,
      anon_sym_COMMA,
  [6237] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1289), 1,
      aux_sym_if_statement_token1,
  [6244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      aux_sym_defattr_token2,
  [6251] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(1293), 1,
      aux_sym_if_statement_token1,
  [6258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 1,
      aux_sym_defattr_token2,
  [6265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      aux_sym_defattr_token2,
  [6272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
  [6279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 1,
      anon_sym_COMMA,
  [6286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_COMMA,
  [6293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_COMMA,
  [6300] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym__simple_statements_token1,
  [6307] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(360), 1,
      aux_sym__simple_statements_token1,
  [6314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      anon_sym_LPAREN,
  [6321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      anon_sym_LPAREN,
  [6328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(69)] = 0,
  [SMALL_STATE(70)] = 63,
  [SMALL_STATE(71)] = 126,
  [SMALL_STATE(72)] = 203,
  [SMALL_STATE(73)] = 280,
  [SMALL_STATE(74)] = 354,
  [SMALL_STATE(75)] = 424,
  [SMALL_STATE(76)] = 494,
  [SMALL_STATE(77)] = 564,
  [SMALL_STATE(78)] = 634,
  [SMALL_STATE(79)] = 704,
  [SMALL_STATE(80)] = 774,
  [SMALL_STATE(81)] = 844,
  [SMALL_STATE(82)] = 910,
  [SMALL_STATE(83)] = 976,
  [SMALL_STATE(84)] = 1042,
  [SMALL_STATE(85)] = 1108,
  [SMALL_STATE(86)] = 1174,
  [SMALL_STATE(87)] = 1240,
  [SMALL_STATE(88)] = 1306,
  [SMALL_STATE(89)] = 1362,
  [SMALL_STATE(90)] = 1418,
  [SMALL_STATE(91)] = 1474,
  [SMALL_STATE(92)] = 1504,
  [SMALL_STATE(93)] = 1534,
  [SMALL_STATE(94)] = 1564,
  [SMALL_STATE(95)] = 1594,
  [SMALL_STATE(96)] = 1624,
  [SMALL_STATE(97)] = 1667,
  [SMALL_STATE(98)] = 1710,
  [SMALL_STATE(99)] = 1753,
  [SMALL_STATE(100)] = 1796,
  [SMALL_STATE(101)] = 1822,
  [SMALL_STATE(102)] = 1848,
  [SMALL_STATE(103)] = 1874,
  [SMALL_STATE(104)] = 1900,
  [SMALL_STATE(105)] = 1926,
  [SMALL_STATE(106)] = 1959,
  [SMALL_STATE(107)] = 1992,
  [SMALL_STATE(108)] = 2025,
  [SMALL_STATE(109)] = 2058,
  [SMALL_STATE(110)] = 2088,
  [SMALL_STATE(111)] = 2122,
  [SMALL_STATE(112)] = 2142,
  [SMALL_STATE(113)] = 2176,
  [SMALL_STATE(114)] = 2210,
  [SMALL_STATE(115)] = 2240,
  [SMALL_STATE(116)] = 2271,
  [SMALL_STATE(117)] = 2302,
  [SMALL_STATE(118)] = 2325,
  [SMALL_STATE(119)] = 2348,
  [SMALL_STATE(120)] = 2371,
  [SMALL_STATE(121)] = 2403,
  [SMALL_STATE(122)] = 2435,
  [SMALL_STATE(123)] = 2463,
  [SMALL_STATE(124)] = 2491,
  [SMALL_STATE(125)] = 2518,
  [SMALL_STATE(126)] = 2547,
  [SMALL_STATE(127)] = 2574,
  [SMALL_STATE(128)] = 2603,
  [SMALL_STATE(129)] = 2632,
  [SMALL_STATE(130)] = 2661,
  [SMALL_STATE(131)] = 2687,
  [SMALL_STATE(132)] = 2713,
  [SMALL_STATE(133)] = 2739,
  [SMALL_STATE(134)] = 2765,
  [SMALL_STATE(135)] = 2791,
  [SMALL_STATE(136)] = 2817,
  [SMALL_STATE(137)] = 2843,
  [SMALL_STATE(138)] = 2869,
  [SMALL_STATE(139)] = 2895,
  [SMALL_STATE(140)] = 2921,
  [SMALL_STATE(141)] = 2947,
  [SMALL_STATE(142)] = 2973,
  [SMALL_STATE(143)] = 2999,
  [SMALL_STATE(144)] = 3025,
  [SMALL_STATE(145)] = 3051,
  [SMALL_STATE(146)] = 3077,
  [SMALL_STATE(147)] = 3103,
  [SMALL_STATE(148)] = 3129,
  [SMALL_STATE(149)] = 3155,
  [SMALL_STATE(150)] = 3181,
  [SMALL_STATE(151)] = 3207,
  [SMALL_STATE(152)] = 3233,
  [SMALL_STATE(153)] = 3259,
  [SMALL_STATE(154)] = 3285,
  [SMALL_STATE(155)] = 3311,
  [SMALL_STATE(156)] = 3337,
  [SMALL_STATE(157)] = 3363,
  [SMALL_STATE(158)] = 3389,
  [SMALL_STATE(159)] = 3404,
  [SMALL_STATE(160)] = 3429,
  [SMALL_STATE(161)] = 3444,
  [SMALL_STATE(162)] = 3469,
  [SMALL_STATE(163)] = 3484,
  [SMALL_STATE(164)] = 3499,
  [SMALL_STATE(165)] = 3518,
  [SMALL_STATE(166)] = 3533,
  [SMALL_STATE(167)] = 3548,
  [SMALL_STATE(168)] = 3573,
  [SMALL_STATE(169)] = 3588,
  [SMALL_STATE(170)] = 3614,
  [SMALL_STATE(171)] = 3634,
  [SMALL_STATE(172)] = 3654,
  [SMALL_STATE(173)] = 3674,
  [SMALL_STATE(174)] = 3694,
  [SMALL_STATE(175)] = 3720,
  [SMALL_STATE(176)] = 3740,
  [SMALL_STATE(177)] = 3766,
  [SMALL_STATE(178)] = 3786,
  [SMALL_STATE(179)] = 3799,
  [SMALL_STATE(180)] = 3812,
  [SMALL_STATE(181)] = 3825,
  [SMALL_STATE(182)] = 3838,
  [SMALL_STATE(183)] = 3851,
  [SMALL_STATE(184)] = 3864,
  [SMALL_STATE(185)] = 3885,
  [SMALL_STATE(186)] = 3900,
  [SMALL_STATE(187)] = 3912,
  [SMALL_STATE(188)] = 3924,
  [SMALL_STATE(189)] = 3936,
  [SMALL_STATE(190)] = 3948,
  [SMALL_STATE(191)] = 3960,
  [SMALL_STATE(192)] = 3972,
  [SMALL_STATE(193)] = 3985,
  [SMALL_STATE(194)] = 3996,
  [SMALL_STATE(195)] = 4009,
  [SMALL_STATE(196)] = 4020,
  [SMALL_STATE(197)] = 4031,
  [SMALL_STATE(198)] = 4044,
  [SMALL_STATE(199)] = 4057,
  [SMALL_STATE(200)] = 4070,
  [SMALL_STATE(201)] = 4083,
  [SMALL_STATE(202)] = 4096,
  [SMALL_STATE(203)] = 4109,
  [SMALL_STATE(204)] = 4122,
  [SMALL_STATE(205)] = 4135,
  [SMALL_STATE(206)] = 4148,
  [SMALL_STATE(207)] = 4161,
  [SMALL_STATE(208)] = 4174,
  [SMALL_STATE(209)] = 4187,
  [SMALL_STATE(210)] = 4200,
  [SMALL_STATE(211)] = 4211,
  [SMALL_STATE(212)] = 4222,
  [SMALL_STATE(213)] = 4233,
  [SMALL_STATE(214)] = 4246,
  [SMALL_STATE(215)] = 4257,
  [SMALL_STATE(216)] = 4270,
  [SMALL_STATE(217)] = 4283,
  [SMALL_STATE(218)] = 4294,
  [SMALL_STATE(219)] = 4307,
  [SMALL_STATE(220)] = 4318,
  [SMALL_STATE(221)] = 4329,
  [SMALL_STATE(222)] = 4340,
  [SMALL_STATE(223)] = 4353,
  [SMALL_STATE(224)] = 4366,
  [SMALL_STATE(225)] = 4377,
  [SMALL_STATE(226)] = 4390,
  [SMALL_STATE(227)] = 4401,
  [SMALL_STATE(228)] = 4411,
  [SMALL_STATE(229)] = 4421,
  [SMALL_STATE(230)] = 4431,
  [SMALL_STATE(231)] = 4444,
  [SMALL_STATE(232)] = 4457,
  [SMALL_STATE(233)] = 4470,
  [SMALL_STATE(234)] = 4480,
  [SMALL_STATE(235)] = 4490,
  [SMALL_STATE(236)] = 4498,
  [SMALL_STATE(237)] = 4506,
  [SMALL_STATE(238)] = 4514,
  [SMALL_STATE(239)] = 4524,
  [SMALL_STATE(240)] = 4534,
  [SMALL_STATE(241)] = 4544,
  [SMALL_STATE(242)] = 4554,
  [SMALL_STATE(243)] = 4564,
  [SMALL_STATE(244)] = 4574,
  [SMALL_STATE(245)] = 4584,
  [SMALL_STATE(246)] = 4594,
  [SMALL_STATE(247)] = 4604,
  [SMALL_STATE(248)] = 4614,
  [SMALL_STATE(249)] = 4624,
  [SMALL_STATE(250)] = 4634,
  [SMALL_STATE(251)] = 4644,
  [SMALL_STATE(252)] = 4654,
  [SMALL_STATE(253)] = 4664,
  [SMALL_STATE(254)] = 4674,
  [SMALL_STATE(255)] = 4684,
  [SMALL_STATE(256)] = 4694,
  [SMALL_STATE(257)] = 4704,
  [SMALL_STATE(258)] = 4714,
  [SMALL_STATE(259)] = 4724,
  [SMALL_STATE(260)] = 4734,
  [SMALL_STATE(261)] = 4744,
  [SMALL_STATE(262)] = 4754,
  [SMALL_STATE(263)] = 4764,
  [SMALL_STATE(264)] = 4772,
  [SMALL_STATE(265)] = 4782,
  [SMALL_STATE(266)] = 4790,
  [SMALL_STATE(267)] = 4800,
  [SMALL_STATE(268)] = 4810,
  [SMALL_STATE(269)] = 4820,
  [SMALL_STATE(270)] = 4830,
  [SMALL_STATE(271)] = 4840,
  [SMALL_STATE(272)] = 4850,
  [SMALL_STATE(273)] = 4860,
  [SMALL_STATE(274)] = 4870,
  [SMALL_STATE(275)] = 4880,
  [SMALL_STATE(276)] = 4890,
  [SMALL_STATE(277)] = 4900,
  [SMALL_STATE(278)] = 4907,
  [SMALL_STATE(279)] = 4914,
  [SMALL_STATE(280)] = 4921,
  [SMALL_STATE(281)] = 4928,
  [SMALL_STATE(282)] = 4935,
  [SMALL_STATE(283)] = 4942,
  [SMALL_STATE(284)] = 4949,
  [SMALL_STATE(285)] = 4956,
  [SMALL_STATE(286)] = 4963,
  [SMALL_STATE(287)] = 4970,
  [SMALL_STATE(288)] = 4977,
  [SMALL_STATE(289)] = 4984,
  [SMALL_STATE(290)] = 4991,
  [SMALL_STATE(291)] = 4998,
  [SMALL_STATE(292)] = 5005,
  [SMALL_STATE(293)] = 5012,
  [SMALL_STATE(294)] = 5019,
  [SMALL_STATE(295)] = 5026,
  [SMALL_STATE(296)] = 5033,
  [SMALL_STATE(297)] = 5040,
  [SMALL_STATE(298)] = 5047,
  [SMALL_STATE(299)] = 5054,
  [SMALL_STATE(300)] = 5061,
  [SMALL_STATE(301)] = 5068,
  [SMALL_STATE(302)] = 5075,
  [SMALL_STATE(303)] = 5082,
  [SMALL_STATE(304)] = 5089,
  [SMALL_STATE(305)] = 5096,
  [SMALL_STATE(306)] = 5103,
  [SMALL_STATE(307)] = 5110,
  [SMALL_STATE(308)] = 5117,
  [SMALL_STATE(309)] = 5124,
  [SMALL_STATE(310)] = 5131,
  [SMALL_STATE(311)] = 5138,
  [SMALL_STATE(312)] = 5145,
  [SMALL_STATE(313)] = 5152,
  [SMALL_STATE(314)] = 5159,
  [SMALL_STATE(315)] = 5166,
  [SMALL_STATE(316)] = 5173,
  [SMALL_STATE(317)] = 5180,
  [SMALL_STATE(318)] = 5187,
  [SMALL_STATE(319)] = 5194,
  [SMALL_STATE(320)] = 5201,
  [SMALL_STATE(321)] = 5208,
  [SMALL_STATE(322)] = 5215,
  [SMALL_STATE(323)] = 5222,
  [SMALL_STATE(324)] = 5229,
  [SMALL_STATE(325)] = 5236,
  [SMALL_STATE(326)] = 5243,
  [SMALL_STATE(327)] = 5250,
  [SMALL_STATE(328)] = 5257,
  [SMALL_STATE(329)] = 5264,
  [SMALL_STATE(330)] = 5271,
  [SMALL_STATE(331)] = 5278,
  [SMALL_STATE(332)] = 5285,
  [SMALL_STATE(333)] = 5292,
  [SMALL_STATE(334)] = 5299,
  [SMALL_STATE(335)] = 5306,
  [SMALL_STATE(336)] = 5313,
  [SMALL_STATE(337)] = 5320,
  [SMALL_STATE(338)] = 5327,
  [SMALL_STATE(339)] = 5334,
  [SMALL_STATE(340)] = 5341,
  [SMALL_STATE(341)] = 5348,
  [SMALL_STATE(342)] = 5355,
  [SMALL_STATE(343)] = 5362,
  [SMALL_STATE(344)] = 5369,
  [SMALL_STATE(345)] = 5376,
  [SMALL_STATE(346)] = 5383,
  [SMALL_STATE(347)] = 5390,
  [SMALL_STATE(348)] = 5397,
  [SMALL_STATE(349)] = 5404,
  [SMALL_STATE(350)] = 5411,
  [SMALL_STATE(351)] = 5418,
  [SMALL_STATE(352)] = 5425,
  [SMALL_STATE(353)] = 5432,
  [SMALL_STATE(354)] = 5439,
  [SMALL_STATE(355)] = 5446,
  [SMALL_STATE(356)] = 5453,
  [SMALL_STATE(357)] = 5460,
  [SMALL_STATE(358)] = 5467,
  [SMALL_STATE(359)] = 5474,
  [SMALL_STATE(360)] = 5481,
  [SMALL_STATE(361)] = 5488,
  [SMALL_STATE(362)] = 5495,
  [SMALL_STATE(363)] = 5502,
  [SMALL_STATE(364)] = 5509,
  [SMALL_STATE(365)] = 5516,
  [SMALL_STATE(366)] = 5523,
  [SMALL_STATE(367)] = 5530,
  [SMALL_STATE(368)] = 5537,
  [SMALL_STATE(369)] = 5544,
  [SMALL_STATE(370)] = 5551,
  [SMALL_STATE(371)] = 5558,
  [SMALL_STATE(372)] = 5565,
  [SMALL_STATE(373)] = 5572,
  [SMALL_STATE(374)] = 5579,
  [SMALL_STATE(375)] = 5586,
  [SMALL_STATE(376)] = 5593,
  [SMALL_STATE(377)] = 5600,
  [SMALL_STATE(378)] = 5607,
  [SMALL_STATE(379)] = 5614,
  [SMALL_STATE(380)] = 5621,
  [SMALL_STATE(381)] = 5628,
  [SMALL_STATE(382)] = 5635,
  [SMALL_STATE(383)] = 5642,
  [SMALL_STATE(384)] = 5649,
  [SMALL_STATE(385)] = 5656,
  [SMALL_STATE(386)] = 5663,
  [SMALL_STATE(387)] = 5670,
  [SMALL_STATE(388)] = 5677,
  [SMALL_STATE(389)] = 5684,
  [SMALL_STATE(390)] = 5691,
  [SMALL_STATE(391)] = 5698,
  [SMALL_STATE(392)] = 5705,
  [SMALL_STATE(393)] = 5712,
  [SMALL_STATE(394)] = 5719,
  [SMALL_STATE(395)] = 5726,
  [SMALL_STATE(396)] = 5733,
  [SMALL_STATE(397)] = 5740,
  [SMALL_STATE(398)] = 5747,
  [SMALL_STATE(399)] = 5754,
  [SMALL_STATE(400)] = 5761,
  [SMALL_STATE(401)] = 5768,
  [SMALL_STATE(402)] = 5775,
  [SMALL_STATE(403)] = 5782,
  [SMALL_STATE(404)] = 5789,
  [SMALL_STATE(405)] = 5796,
  [SMALL_STATE(406)] = 5803,
  [SMALL_STATE(407)] = 5810,
  [SMALL_STATE(408)] = 5817,
  [SMALL_STATE(409)] = 5824,
  [SMALL_STATE(410)] = 5831,
  [SMALL_STATE(411)] = 5838,
  [SMALL_STATE(412)] = 5845,
  [SMALL_STATE(413)] = 5852,
  [SMALL_STATE(414)] = 5859,
  [SMALL_STATE(415)] = 5866,
  [SMALL_STATE(416)] = 5873,
  [SMALL_STATE(417)] = 5880,
  [SMALL_STATE(418)] = 5887,
  [SMALL_STATE(419)] = 5894,
  [SMALL_STATE(420)] = 5901,
  [SMALL_STATE(421)] = 5908,
  [SMALL_STATE(422)] = 5915,
  [SMALL_STATE(423)] = 5922,
  [SMALL_STATE(424)] = 5929,
  [SMALL_STATE(425)] = 5936,
  [SMALL_STATE(426)] = 5943,
  [SMALL_STATE(427)] = 5950,
  [SMALL_STATE(428)] = 5957,
  [SMALL_STATE(429)] = 5964,
  [SMALL_STATE(430)] = 5971,
  [SMALL_STATE(431)] = 5978,
  [SMALL_STATE(432)] = 5985,
  [SMALL_STATE(433)] = 5992,
  [SMALL_STATE(434)] = 5999,
  [SMALL_STATE(435)] = 6006,
  [SMALL_STATE(436)] = 6013,
  [SMALL_STATE(437)] = 6020,
  [SMALL_STATE(438)] = 6027,
  [SMALL_STATE(439)] = 6034,
  [SMALL_STATE(440)] = 6041,
  [SMALL_STATE(441)] = 6048,
  [SMALL_STATE(442)] = 6055,
  [SMALL_STATE(443)] = 6062,
  [SMALL_STATE(444)] = 6069,
  [SMALL_STATE(445)] = 6076,
  [SMALL_STATE(446)] = 6083,
  [SMALL_STATE(447)] = 6090,
  [SMALL_STATE(448)] = 6097,
  [SMALL_STATE(449)] = 6104,
  [SMALL_STATE(450)] = 6111,
  [SMALL_STATE(451)] = 6118,
  [SMALL_STATE(452)] = 6125,
  [SMALL_STATE(453)] = 6132,
  [SMALL_STATE(454)] = 6139,
  [SMALL_STATE(455)] = 6146,
  [SMALL_STATE(456)] = 6153,
  [SMALL_STATE(457)] = 6160,
  [SMALL_STATE(458)] = 6167,
  [SMALL_STATE(459)] = 6174,
  [SMALL_STATE(460)] = 6181,
  [SMALL_STATE(461)] = 6188,
  [SMALL_STATE(462)] = 6195,
  [SMALL_STATE(463)] = 6202,
  [SMALL_STATE(464)] = 6209,
  [SMALL_STATE(465)] = 6216,
  [SMALL_STATE(466)] = 6223,
  [SMALL_STATE(467)] = 6230,
  [SMALL_STATE(468)] = 6237,
  [SMALL_STATE(469)] = 6244,
  [SMALL_STATE(470)] = 6251,
  [SMALL_STATE(471)] = 6258,
  [SMALL_STATE(472)] = 6265,
  [SMALL_STATE(473)] = 6272,
  [SMALL_STATE(474)] = 6279,
  [SMALL_STATE(475)] = 6286,
  [SMALL_STATE(476)] = 6293,
  [SMALL_STATE(477)] = 6300,
  [SMALL_STATE(478)] = 6307,
  [SMALL_STATE(479)] = 6314,
  [SMALL_STATE(480)] = 6321,
  [SMALL_STATE(481)] = 6328,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(460),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(429),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(423),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(422),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(420),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(419),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(417),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(416),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(415),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(405),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 5, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 5, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(308),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(345),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(358),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 4, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 4, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 7, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 7, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 6, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 6, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_files, 6, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_files, 6, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 4, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file, 4, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defattr, 9, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defattr, 9, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 4, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 4, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_buildrequires, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate_buildrequires, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prep_scriptlet, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prep_scriptlet, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_with_newlines, 1, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_with_newlines, 1, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog_entry, 4, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog_entry, 4, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog, 3, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog, 3, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog_entry, 3, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog_entry, 3, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changelog_entry_repeat1, 3, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changelog_entry_repeat1, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 5, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 5, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 6, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 6, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 3, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 3, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_expansion, 2, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_expansion, 2, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 4, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 4, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expansion, 2, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expansion, 2, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_description, 4, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_description, 4, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 3),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_undefinition, 3, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_undefinition, 3, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conf_scriptlet, 2, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conf_scriptlet, 2, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_scriptlet, 2, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_scriptlet, 2, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_install_scriptlet, 2, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_install_scriptlet, 2, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_scriptlet, 2, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_scriptlet, 2, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clean_scriptlet, 2, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clean_scriptlet, 2, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 5, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 5, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 11),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 11),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 10),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 10),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 4, 0, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags, 4, 0, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 9),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 9),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection, 2, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 12),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, 0, 12),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 4, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 4, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 5),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 5),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 5, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 5, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 1, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 8),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 8),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prep_scriptlet, 3, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prep_scriptlet, 3, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_buildrequires, 3, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate_buildrequires, 3, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 7),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 7),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_package, 4, 0, 0),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(460),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(460),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(468),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(479),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(470),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 8, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(112),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(367),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(122),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(242),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(374),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verify_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_repeat1, 2, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [645] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [648] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [673] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [676] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [679] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [682] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(345),
  [688] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(358),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 4),
  [731] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 4), SHIFT_REPEAT(300),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 4), SHIFT_REPEAT(300),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, 0, 1),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, 0, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_clause, 4, 0, 5),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_clause, 4, 0, 5),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_options, 2, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verify, 3, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verify, 4, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_tag, 1, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_tag, 4, 0, 0),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1, 0, 0),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 3, 0, 6),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_word, 1, 0, 0),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1165] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
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
