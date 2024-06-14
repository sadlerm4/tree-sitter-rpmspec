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
#define STATE_COUNT 385
#define LARGE_STATE_COUNT 118
#define SYMBOL_COUNT 193
#define ALIAS_COUNT 0
#define TOKEN_COUNT 144
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  aux_sym__top_level_token1 = 1,
  sym_comment = 2,
  anon_sym_PERCENTif = 3,
  anon_sym_PERCENTifarch = 4,
  anon_sym_PERCENTifos = 5,
  anon_sym_PERCENTifnarch = 6,
  anon_sym_PERCENTifnos = 7,
  aux_sym_conditional_token1 = 8,
  anon_sym_PERCENTendif = 9,
  anon_sym_COLON = 10,
  anon_sym_AutoProv = 11,
  anon_sym_AutoReq = 12,
  anon_sym_AutoReqProv = 13,
  anon_sym_BugUrl = 14,
  anon_sym_BuildRoot = 15,
  anon_sym_BuildSystem = 16,
  anon_sym_DistTag = 17,
  anon_sym_Distribution = 18,
  anon_sym_Epoch = 19,
  anon_sym_Group = 20,
  anon_sym_License = 21,
  anon_sym_ModularityLabel = 22,
  anon_sym_Name = 23,
  anon_sym_NoPatch = 24,
  anon_sym_NoSource = 25,
  anon_sym_Packager = 26,
  anon_sym_Release = 27,
  anon_sym_SourceLicense = 28,
  anon_sym_Summary = 29,
  anon_sym_URL = 30,
  anon_sym_Url = 31,
  anon_sym_VCS = 32,
  anon_sym_Vendor = 33,
  anon_sym_Version = 34,
  aux_sym_tag_token1 = 35,
  aux_sym_tag_token2 = 36,
  anon_sym_pre = 37,
  anon_sym_post = 38,
  anon_sym_postun = 39,
  anon_sym_pretrans = 40,
  anon_sym_posttrans = 41,
  anon_sym_verify = 42,
  anon_sym_interp = 43,
  anon_sym_meta = 44,
  anon_sym_Requires = 45,
  anon_sym_LPAREN = 46,
  anon_sym_RPAREN = 47,
  anon_sym_BuildArch = 48,
  anon_sym_BuildArchitectures = 49,
  anon_sym_BuildConflicts = 50,
  anon_sym_BuildPrereq = 51,
  anon_sym_BuildRequires = 52,
  anon_sym_Conflicts = 53,
  anon_sym_DocDir = 54,
  anon_sym_Enhances = 55,
  anon_sym_ExcludeArch = 56,
  anon_sym_ExcludeOS = 57,
  anon_sym_ExclusiveArch = 58,
  anon_sym_ExclusiveOS = 59,
  anon_sym_Obsoletes = 60,
  anon_sym_OrderWithRequires = 61,
  anon_sym_Prefix = 62,
  anon_sym_Prefixes = 63,
  anon_sym_Prereq = 64,
  anon_sym_Provides = 65,
  anon_sym_Recommends = 66,
  anon_sym_RemovePathPostfixes = 67,
  anon_sym_Suggests = 68,
  anon_sym_Supplements = 69,
  anon_sym_PERCENTdescription = 70,
  anon_sym_DASHn = 71,
  anon_sym_PERCENTpackage = 72,
  anon_sym_PERCENTprep = 73,
  anon_sym_PERCENTgenerate_buildrequires = 74,
  anon_sym_PERCENTconf = 75,
  anon_sym_PERCENTbuild = 76,
  anon_sym_PERCENTinstall = 77,
  anon_sym_PERCENTcheck = 78,
  anon_sym_PERCENTclean = 79,
  anon_sym_PERCENTpre = 80,
  anon_sym_PERCENTpost = 81,
  anon_sym_PERCENTpreun = 82,
  anon_sym_PERCENTpostun = 83,
  anon_sym_PERCENTpretrans = 84,
  anon_sym_PERCENTposttrans = 85,
  anon_sym_PERCENTpreuntrans = 86,
  anon_sym_PERCENTpostuntrans = 87,
  anon_sym_PERCENTverify = 88,
  anon_sym_PERCENTtriggerprein = 89,
  anon_sym_PERCENTtriggerin = 90,
  anon_sym_PERCENTtriggerun = 91,
  anon_sym_PERCENTtriggerpostun = 92,
  anon_sym_PERCENTfiletriggerin = 93,
  anon_sym_PERCENTfiletriggerun = 94,
  anon_sym_PERCENTfiletriggerpostun = 95,
  anon_sym_PERCENTtransfiletriggerin = 96,
  anon_sym_PERCENTtransfiletriggerun = 97,
  anon_sym_PERCENTtransfiletriggerpostun = 98,
  anon_sym_PERCENTfiles = 99,
  anon_sym_DASHf = 100,
  anon_sym_PERCENTdefattr = 101,
  anon_sym_DASH = 102,
  aux_sym_defattr_token1 = 103,
  anon_sym_COMMA = 104,
  aux_sym_defattr_token2 = 105,
  anon_sym_PERCENTartifact = 106,
  anon_sym_PERCENTconfig = 107,
  anon_sym_PERCENTdir = 108,
  anon_sym_PERCENTdoc = 109,
  anon_sym_PERCENTdocdir = 110,
  anon_sym_PERCENTghost = 111,
  anon_sym_PERCENTlicense = 112,
  anon_sym_PERCENTmissingok = 113,
  anon_sym_PERCENTreadme = 114,
  anon_sym_PERCENTattr = 115,
  anon_sym_LPAREN2 = 116,
  anon_sym_filedigest = 117,
  anon_sym_group = 118,
  anon_sym_maj = 119,
  anon_sym_md5 = 120,
  anon_sym_mode = 121,
  anon_sym_min = 122,
  anon_sym_mtime = 123,
  anon_sym_not = 124,
  anon_sym_owner = 125,
  anon_sym_size = 126,
  anon_sym_symlink = 127,
  anon_sym_RPAREN2 = 128,
  anon_sym_PERCENTchangelog = 129,
  anon_sym_STAR = 130,
  anon_sym_PERCENTglobal = 131,
  anon_sym_PERCENTdefine = 132,
  anon_sym_PERCENTundefine = 133,
  sym_integer = 134,
  sym_float = 135,
  anon_sym_PERCENT = 136,
  sym_string_content_with_newlines = 137,
  sym_string_content = 138,
  sym_variable_name = 139,
  anon_sym_QMARK = 140,
  anon_sym_PERCENT_LBRACE = 141,
  anon_sym_RBRACE = 142,
  anon_sym_PERCENT_LPAREN = 143,
  sym_spec = 144,
  sym__top_level = 145,
  sym_conditional = 146,
  sym_preamble = 147,
  sym_tags = 148,
  sym_tag = 149,
  sym_qualifier = 150,
  sym_dependency_tag = 151,
  aux_sym__value = 152,
  sym_description = 153,
  sym_subsection = 154,
  sym_subsection_package = 155,
  sym_subsection_description = 156,
  sym_prep_scriptlet = 157,
  sym_generate_buildrequires = 158,
  sym_conf_scriptlet = 159,
  sym_build_scriptlet = 160,
  sym_install_scriptlet = 161,
  sym_check_scriptlet = 162,
  sym_clean_scriptlet = 163,
  sym__runtime_scriptlet = 164,
  sym__triggers = 165,
  sym__file_triggers = 166,
  sym_files = 167,
  sym_conditional_files = 168,
  sym_defattr = 169,
  sym_file = 170,
  sym_attr = 171,
  sym_verify = 172,
  sym_changelog = 173,
  sym_changelog_entry = 174,
  sym_macro_definition = 175,
  sym_macro_options = 176,
  sym_macro_undefinition = 177,
  sym_string_with_newlines = 178,
  sym_string = 179,
  sym_single_word = 180,
  sym__macro_expansion = 181,
  sym_simple_expansion = 182,
  sym_full_expansion = 183,
  sym_shell_expansion = 184,
  aux_sym__top_level_repeat1 = 185,
  aux_sym_subsection_package_repeat1 = 186,
  aux_sym_files_repeat1 = 187,
  aux_sym_verify_repeat1 = 188,
  aux_sym_changelog_repeat1 = 189,
  aux_sym_changelog_entry_repeat1 = 190,
  aux_sym_string_with_newlines_repeat1 = 191,
  aux_sym_string_repeat1 = 192,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__top_level_token1] = "_top_level_token1",
  [sym_comment] = "comment",
  [anon_sym_PERCENTif] = "%if",
  [anon_sym_PERCENTifarch] = "%ifarch",
  [anon_sym_PERCENTifos] = "%ifos",
  [anon_sym_PERCENTifnarch] = "%ifnarch",
  [anon_sym_PERCENTifnos] = "%ifnos",
  [aux_sym_conditional_token1] = "conditional_token1",
  [anon_sym_PERCENTendif] = "%endif",
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
  [sym__top_level] = "_top_level",
  [sym_conditional] = "conditional",
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
  [aux_sym__top_level_repeat1] = "_top_level_repeat1",
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
  [aux_sym__top_level_token1] = aux_sym__top_level_token1,
  [sym_comment] = sym_comment,
  [anon_sym_PERCENTif] = anon_sym_PERCENTif,
  [anon_sym_PERCENTifarch] = anon_sym_PERCENTifarch,
  [anon_sym_PERCENTifos] = anon_sym_PERCENTifos,
  [anon_sym_PERCENTifnarch] = anon_sym_PERCENTifnarch,
  [anon_sym_PERCENTifnos] = anon_sym_PERCENTifnos,
  [aux_sym_conditional_token1] = aux_sym_conditional_token1,
  [anon_sym_PERCENTendif] = anon_sym_PERCENTendif,
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
  [sym__top_level] = sym__top_level,
  [sym_conditional] = sym_conditional,
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
  [aux_sym__top_level_repeat1] = aux_sym__top_level_repeat1,
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
  [aux_sym__top_level_token1] = {
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
  [aux_sym_conditional_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENTendif] = {
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
  [sym__top_level] = {
    .visible = false,
    .named = true,
  },
  [sym_conditional] = {
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
  [aux_sym__top_level_repeat1] = {
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
  field_value = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 2},
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
  [4] = 3,
  [5] = 5,
  [6] = 2,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 12,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 11,
  [20] = 17,
  [21] = 9,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 26,
  [27] = 24,
  [28] = 28,
  [29] = 22,
  [30] = 28,
  [31] = 26,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 35,
  [37] = 32,
  [38] = 33,
  [39] = 34,
  [40] = 40,
  [41] = 41,
  [42] = 41,
  [43] = 40,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 44,
  [48] = 48,
  [49] = 45,
  [50] = 50,
  [51] = 51,
  [52] = 51,
  [53] = 48,
  [54] = 50,
  [55] = 46,
  [56] = 56,
  [57] = 56,
  [58] = 58,
  [59] = 59,
  [60] = 58,
  [61] = 61,
  [62] = 61,
  [63] = 59,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 66,
  [70] = 68,
  [71] = 67,
  [72] = 61,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 67,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 64,
  [81] = 81,
  [82] = 59,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 84,
  [87] = 83,
  [88] = 88,
  [89] = 59,
  [90] = 58,
  [91] = 61,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 96,
  [100] = 85,
  [101] = 95,
  [102] = 94,
  [103] = 93,
  [104] = 66,
  [105] = 73,
  [106] = 92,
  [107] = 74,
  [108] = 81,
  [109] = 75,
  [110] = 67,
  [111] = 64,
  [112] = 79,
  [113] = 77,
  [114] = 66,
  [115] = 58,
  [116] = 78,
  [117] = 88,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 97,
  [122] = 79,
  [123] = 123,
  [124] = 123,
  [125] = 125,
  [126] = 125,
  [127] = 125,
  [128] = 128,
  [129] = 129,
  [130] = 129,
  [131] = 129,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 133,
  [136] = 133,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 139,
  [142] = 142,
  [143] = 142,
  [144] = 140,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 140,
  [149] = 149,
  [150] = 150,
  [151] = 147,
  [152] = 149,
  [153] = 142,
  [154] = 149,
  [155] = 155,
  [156] = 150,
  [157] = 146,
  [158] = 145,
  [159] = 159,
  [160] = 160,
  [161] = 146,
  [162] = 159,
  [163] = 160,
  [164] = 155,
  [165] = 165,
  [166] = 166,
  [167] = 166,
  [168] = 168,
  [169] = 61,
  [170] = 64,
  [171] = 58,
  [172] = 59,
  [173] = 67,
  [174] = 66,
  [175] = 64,
  [176] = 67,
  [177] = 59,
  [178] = 66,
  [179] = 61,
  [180] = 58,
  [181] = 67,
  [182] = 66,
  [183] = 64,
  [184] = 59,
  [185] = 58,
  [186] = 61,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 190,
  [192] = 192,
  [193] = 193,
  [194] = 192,
  [195] = 192,
  [196] = 196,
  [197] = 197,
  [198] = 197,
  [199] = 197,
  [200] = 197,
  [201] = 201,
  [202] = 197,
  [203] = 197,
  [204] = 197,
  [205] = 193,
  [206] = 206,
  [207] = 193,
  [208] = 206,
  [209] = 193,
  [210] = 206,
  [211] = 193,
  [212] = 206,
  [213] = 193,
  [214] = 206,
  [215] = 215,
  [216] = 201,
  [217] = 217,
  [218] = 218,
  [219] = 215,
  [220] = 220,
  [221] = 193,
  [222] = 206,
  [223] = 206,
  [224] = 217,
  [225] = 220,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 28,
  [231] = 231,
  [232] = 26,
  [233] = 233,
  [234] = 23,
  [235] = 235,
  [236] = 22,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 253,
  [268] = 248,
  [269] = 243,
  [270] = 242,
  [271] = 239,
  [272] = 272,
  [273] = 231,
  [274] = 229,
  [275] = 228,
  [276] = 227,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 265,
  [286] = 266,
  [287] = 243,
  [288] = 284,
  [289] = 289,
  [290] = 231,
  [291] = 227,
  [292] = 279,
  [293] = 281,
  [294] = 284,
  [295] = 265,
  [296] = 266,
  [297] = 297,
  [298] = 277,
  [299] = 227,
  [300] = 281,
  [301] = 265,
  [302] = 266,
  [303] = 278,
  [304] = 304,
  [305] = 227,
  [306] = 281,
  [307] = 266,
  [308] = 308,
  [309] = 279,
  [310] = 227,
  [311] = 281,
  [312] = 266,
  [313] = 280,
  [314] = 314,
  [315] = 227,
  [316] = 281,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 266,
  [321] = 281,
  [322] = 265,
  [323] = 252,
  [324] = 317,
  [325] = 325,
  [326] = 264,
  [327] = 241,
  [328] = 263,
  [329] = 238,
  [330] = 262,
  [331] = 237,
  [332] = 261,
  [333] = 260,
  [334] = 297,
  [335] = 335,
  [336] = 259,
  [337] = 318,
  [338] = 338,
  [339] = 252,
  [340] = 258,
  [341] = 257,
  [342] = 342,
  [343] = 238,
  [344] = 344,
  [345] = 297,
  [346] = 318,
  [347] = 347,
  [348] = 252,
  [349] = 238,
  [350] = 297,
  [351] = 351,
  [352] = 252,
  [353] = 238,
  [354] = 297,
  [355] = 283,
  [356] = 252,
  [357] = 238,
  [358] = 297,
  [359] = 335,
  [360] = 252,
  [361] = 238,
  [362] = 297,
  [363] = 325,
  [364] = 272,
  [365] = 251,
  [366] = 366,
  [367] = 367,
  [368] = 342,
  [369] = 272,
  [370] = 342,
  [371] = 256,
  [372] = 233,
  [373] = 373,
  [374] = 373,
  [375] = 249,
  [376] = 247,
  [377] = 351,
  [378] = 351,
  [379] = 304,
  [380] = 304,
  [381] = 373,
  [382] = 282,
  [383] = 245,
  [384] = 245,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(615);
      ADVANCE_MAP(
        '#', 628,
        '%', 784,
        '(', 760,
        ')', 772,
        '*', 774,
        ',', 748,
        '-', 745,
        ':', 643,
        '?', 1347,
        'A', 557,
        'B', 558,
        'C', 389,
        'D', 251,
        'E', 335,
        'G', 440,
        'L', 258,
        'M', 385,
        'N', 49,
        'O', 82,
        'P', 50,
        'R', 128,
        'S', 391,
        'U', 40,
        'V', 32,
      );
      if (lookahead == '\\') SKIP(612);
      if (lookahead == 'f') ADVANCE(254);
      if (lookahead == 'g') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(581);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 'v') ADVANCE(155);
      if (lookahead == '}') ADVANCE(1349);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(611);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(746);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 616,
        '\r', 1,
        '#', 628,
        '%', 789,
        '*', 774,
        '-', 745,
        'A', 557,
        'B', 558,
        'C', 389,
        'D', 251,
        'E', 335,
        'G', 440,
        'L', 258,
        'M', 385,
        'N', 49,
        'O', 82,
        'P', 50,
        'R', 128,
        'S', 391,
        'U', 40,
        'V', 32,
      );
      if (lookahead == '\\') SKIP(590);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 617,
        '\r', 2,
        '#', 627,
        '%', 784,
        'A', 1322,
        'B', 1323,
        'C', 1236,
        'D', 1190,
        'E', 1227,
        'G', 1266,
        'L', 1194,
        'M', 1237,
        'N', 1094,
        'O', 1105,
        'P', 1095,
        'R', 1138,
        'S', 1240,
        'U', 1086,
        'V', 1078,
      );
      if (lookahead == '\\') SKIP(591);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 618,
        '\r', 3,
        '#', 626,
        '%', 789,
        'A', 1040,
        'B', 1041,
        'C', 954,
        'D', 908,
        'E', 945,
        'G', 984,
        'L', 912,
        'M', 955,
        'N', 813,
        'O', 824,
        'P', 814,
        'R', 857,
        'S', 958,
        'U', 805,
        'V', 797,
        '\\', 11,
        '\t', 791,
        0x0b, 791,
        '\f', 791,
        ' ', 791,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '\\') SKIP(599);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 620,
        '\r', 5,
        '#', 627,
        '%', 785,
        'A', 1322,
        'B', 1323,
        'C', 1236,
        'D', 1190,
        'E', 1227,
        'G', 1266,
        'L', 1194,
        'M', 1237,
        'N', 1094,
        'O', 1105,
        'P', 1095,
        'R', 1138,
        'S', 1240,
        'U', 1086,
        'V', 1078,
      );
      if (lookahead == '\\') SKIP(603);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(621);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(790);
      if (lookahead == '\\') SKIP(593);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(622);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(790);
      if (lookahead == '-') ADVANCE(1171);
      if (lookahead == '\\') SKIP(597);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(623);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(790);
      if (lookahead == '\\') SKIP(598);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\n', 624,
        '\r', 9,
        '#', 628,
        '%', 788,
        '*', 774,
        '-', 745,
        'A', 557,
        'B', 558,
        'C', 389,
        'D', 251,
        'E', 335,
        'G', 440,
        'L', 258,
        'M', 385,
        'N', 49,
        'O', 82,
        'P', 50,
        'R', 128,
        'S', 391,
        'U', 40,
        'V', 32,
      );
      if (lookahead == '\\') SKIP(602);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 625,
        '\r', 10,
        '#', 626,
        '%', 788,
        'A', 1040,
        'B', 1041,
        'C', 954,
        'D', 908,
        'E', 945,
        'G', 984,
        'L', 912,
        'M', 955,
        'N', 813,
        'O', 824,
        'P', 814,
        'R', 857,
        'S', 958,
        'U', 805,
        'V', 797,
        '\\', 13,
        '\t', 792,
        0x0b, 792,
        '\f', 792,
        ' ', 792,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 11:
      if (lookahead == '\r') ADVANCE(1063);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(791);
      if (lookahead != 0) ADVANCE(1062);
      END_STATE();
    case 12:
      if (lookahead == '\r') ADVANCE(1063);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(793);
      if (lookahead != 0) ADVANCE(1062);
      END_STATE();
    case 13:
      if (lookahead == '\r') ADVANCE(1063);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(792);
      if (lookahead != 0) ADVANCE(1062);
      END_STATE();
    case 14:
      if (lookahead == '\r') ADVANCE(1063);
      if (lookahead != 0) ADVANCE(1062);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(628);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '(') ADVANCE(760);
      if (lookahead == ')') ADVANCE(685);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '?') ADVANCE(1347);
      if (lookahead == '\\') SKIP(600);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1346);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '(') ADVANCE(684);
      if (lookahead == ')') ADVANCE(772);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead == ':') ADVANCE(643);
      if (lookahead == '\\') SKIP(595);
      if (lookahead == 'f') ADVANCE(254);
      if (lookahead == 'g') ADVANCE(444);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(581);
      if (lookahead == 's') ADVANCE(252);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(747);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '(') ADVANCE(684);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead == ':') ADVANCE(643);
      if (lookahead == '\\') SKIP(595);
      if (lookahead == 'f') ADVANCE(254);
      if (lookahead == 'g') ADVANCE(444);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(581);
      if (lookahead == 's') ADVANCE(252);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(747);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == ')') ADVANCE(685);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '\\') SKIP(600);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1346);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '\\') SKIP(601);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(749);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '\\') SKIP(592);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(790);
      if (lookahead == '(') ADVANCE(684);
      if (lookahead == '\\') SKIP(596);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(790);
      if (lookahead == '\\') SKIP(594);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(790);
      if (lookahead == '\\') SKIP(604);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(787);
      if (lookahead == '\\') SKIP(606);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '\\') SKIP(605);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(793);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1346);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(1062);
      END_STATE();
    case 28:
      if (lookahead == '5') ADVANCE(764);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(414);
      if (lookahead == 'P') ADVANCE(472);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(588);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(451);
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(453);
      if (lookahead == 'O') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(268);
      END_STATE();
    case 34:
      if (lookahead == 'L') ADVANCE(665);
      END_STATE();
    case 35:
      if (lookahead == 'L') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'P') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(413);
      END_STATE();
    case 37:
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'R') ADVANCE(154);
      END_STATE();
    case 38:
      if (lookahead == 'P') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(410);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 41:
      if (lookahead == 'R') ADVANCE(200);
      END_STATE();
    case 42:
      if (lookahead == 'S') ADVANCE(667);
      END_STATE();
    case 43:
      if (lookahead == 'S') ADVANCE(697);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(699);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 46:
      if (lookahead == 'U') ADVANCE(446);
      END_STATE();
    case 47:
      if (lookahead == 'W') ADVANCE(272);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(529);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(682);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(538);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(439);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'o') ADVANCE(478);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(512);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(545);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(172);
      END_STATE();
    case 85:
      if (lookahead == 'b') ADVANCE(575);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(574);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(303);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(753);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(300);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == 'm') ADVANCE(388);
      if (lookahead == 'q') ADVANCE(568);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(540);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(526);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(548);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(543);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(719);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(563);
      END_STATE();
    case 116:
      if (lookahead == 'd') ADVANCE(263);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(490);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'o') ADVANCE(578);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(770);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(776);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(756);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(777);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == 'h') ADVANCE(408);
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 202:
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'n') ADVANCE(515);
      END_STATE();
    case 203:
      if (lookahead == 'f') ADVANCE(718);
      END_STATE();
    case 204:
      if (lookahead == 'f') ADVANCE(584);
      END_STATE();
    case 205:
      if (lookahead == 'f') ADVANCE(642);
      END_STATE();
    case 206:
      if (lookahead == 'f') ADVANCE(717);
      END_STATE();
    case 207:
      if (lookahead == 'f') ADVANCE(743);
      if (lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 208:
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 209:
      if (lookahead == 'f') ADVANCE(585);
      END_STATE();
    case 210:
      if (lookahead == 'f') ADVANCE(324);
      END_STATE();
    case 211:
      if (lookahead == 'f') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 212:
      if (lookahead == 'f') ADVANCE(77);
      END_STATE();
    case 213:
      if (lookahead == 'f') ADVANCE(284);
      END_STATE();
    case 214:
      if (lookahead == 'f') ADVANCE(256);
      END_STATE();
    case 215:
      if (lookahead == 'f') ADVANCE(260);
      END_STATE();
    case 216:
      if (lookahead == 'f') ADVANCE(266);
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 217:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 218:
      if (lookahead == 'f') ADVANCE(291);
      END_STATE();
    case 219:
      if (lookahead == 'f') ADVANCE(325);
      END_STATE();
    case 220:
      if (lookahead == 'g') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 221:
      if (lookahead == 'g') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(328);
      if (lookahead == 'p') ADVANCE(419);
      END_STATE();
    case 222:
      if (lookahead == 'g') ADVANCE(751);
      END_STATE();
    case 223:
      if (lookahead == 'g') ADVANCE(652);
      END_STATE();
    case 224:
      if (lookahead == 'g') ADVANCE(773);
      END_STATE();
    case 225:
      if (lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 226:
      if (lookahead == 'g') ADVANCE(394);
      END_STATE();
    case 227:
      if (lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 228:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 229:
      if (lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 231:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 232:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 233:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 234:
      if (lookahead == 'g') ADVANCE(196);
      END_STATE();
    case 235:
      if (lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 236:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 237:
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 238:
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 239:
      if (lookahead == 'h') ADVANCE(654);
      END_STATE();
    case 240:
      if (lookahead == 'h') ADVANCE(670);
      END_STATE();
    case 241:
      if (lookahead == 'h') ADVANCE(631);
      END_STATE();
    case 242:
      if (lookahead == 'h') ADVANCE(659);
      END_STATE();
    case 243:
      if (lookahead == 'h') ADVANCE(633);
      END_STATE();
    case 244:
      if (lookahead == 'h') ADVANCE(688);
      END_STATE();
    case 245:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 246:
      if (lookahead == 'h') ADVANCE(696);
      END_STATE();
    case 247:
      if (lookahead == 'h') ADVANCE(698);
      END_STATE();
    case 248:
      if (lookahead == 'h') ADVANCE(60);
      END_STATE();
    case 249:
      if (lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 250:
      if (lookahead == 'h') ADVANCE(408);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(582);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(583);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(457);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(530);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(409);
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 'p') ADVANCE(411);
      if (lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == 'p') ADVANCE(412);
      if (lookahead == 'u') ADVANCE(353);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(580);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(459);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(404);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(460);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(462);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 299:
      if (lookahead == 'j') ADVANCE(763);
      END_STATE();
    case 300:
      if (lookahead == 'k') ADVANCE(721);
      END_STATE();
    case 301:
      if (lookahead == 'k') ADVANCE(771);
      END_STATE();
    case 302:
      if (lookahead == 'k') ADVANCE(757);
      END_STATE();
    case 303:
      if (lookahead == 'k') ADVANCE(81);
      END_STATE();
    case 304:
      if (lookahead == 'k') ADVANCE(79);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(666);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(649);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(775);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(720);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(657);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(559);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 326:
      if (lookahead == 'm') ADVANCE(651);
      END_STATE();
    case 327:
      if (lookahead == 'm') ADVANCE(317);
      END_STATE();
    case 328:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 329:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 330:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 331:
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 332:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 333:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 334:
      if (lookahead == 'm') ADVANCE(332);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(397);
      if (lookahead == 'x') ADVANCE(95);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(766);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(722);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(725);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(677);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(726);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(669);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 344:
      if (lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(712);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(653);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(732);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(735);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(739);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(740);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(741);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(552);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(502);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(511);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(484);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(491);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(542);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 379:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 380:
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 382:
      if (lookahead == 'n') ADVANCE(514);
      END_STATE();
    case 383:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 384:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 385:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(579);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(501);
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 409:
      if (lookahead == 'o') ADVANCE(509);
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 410:
      if (lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 411:
      if (lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 412:
      if (lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 413:
      if (lookahead == 'o') ADVANCE(573);
      END_STATE();
    case 414:
      if (lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 415:
      if (lookahead == 'p') ADVANCE(655);
      END_STATE();
    case 416:
      if (lookahead == 'p') ADVANCE(762);
      END_STATE();
    case 417:
      if (lookahead == 'p') ADVANCE(681);
      END_STATE();
    case 418:
      if (lookahead == 'p') ADVANCE(554);
      END_STATE();
    case 419:
      if (lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 420:
      if (lookahead == 'q') ADVANCE(706);
      END_STATE();
    case 421:
      if (lookahead == 'q') ADVANCE(647);
      END_STATE();
    case 422:
      if (lookahead == 'q') ADVANCE(691);
      END_STATE();
    case 423:
      if (lookahead == 'q') ADVANCE(569);
      END_STATE();
    case 424:
      if (lookahead == 'q') ADVANCE(570);
      END_STATE();
    case 425:
      if (lookahead == 'q') ADVANCE(571);
      END_STATE();
    case 426:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(752);
      END_STATE();
    case 428:
      if (lookahead == 'r') ADVANCE(759);
      END_STATE();
    case 429:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 430:
      if (lookahead == 'r') ADVANCE(769);
      END_STATE();
    case 431:
      if (lookahead == 'r') ADVANCE(694);
      END_STATE();
    case 432:
      if (lookahead == 'r') ADVANCE(668);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(754);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(744);
      END_STATE();
    case 435:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 436:
      if (lookahead == 'r') ADVANCE(661);
      END_STATE();
    case 437:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 438:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 439:
      if (lookahead == 'r') ADVANCE(586);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(532);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(532);
      if (lookahead == 't') ADVANCE(531);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 457:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 458:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 460:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 463:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 466:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 467:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 471:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 472:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 473:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 474:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 475:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 476:
      if (lookahead == 's') ADVANCE(632);
      END_STATE();
    case 477:
      if (lookahead == 's') ADVANCE(742);
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 478:
      if (lookahead == 's') ADVANCE(634);
      END_STATE();
    case 479:
      if (lookahead == 's') ADVANCE(695);
      END_STATE();
    case 480:
      if (lookahead == 's') ADVANCE(705);
      END_STATE();
    case 481:
      if (lookahead == 's') ADVANCE(707);
      END_STATE();
    case 482:
      if (lookahead == 's') ADVANCE(683);
      END_STATE();
    case 483:
      if (lookahead == 's') ADVANCE(710);
      END_STATE();
    case 484:
      if (lookahead == 's') ADVANCE(678);
      END_STATE();
    case 485:
      if (lookahead == 's') ADVANCE(727);
      END_STATE();
    case 486:
      if (lookahead == 's') ADVANCE(693);
      END_STATE();
    case 487:
      if (lookahead == 's') ADVANCE(700);
      END_STATE();
    case 488:
      if (lookahead == 's') ADVANCE(679);
      END_STATE();
    case 489:
      if (lookahead == 's') ADVANCE(728);
      END_STATE();
    case 490:
      if (lookahead == 's') ADVANCE(708);
      END_STATE();
    case 491:
      if (lookahead == 's') ADVANCE(729);
      END_STATE();
    case 492:
      if (lookahead == 's') ADVANCE(711);
      END_STATE();
    case 493:
      if (lookahead == 's') ADVANCE(730);
      END_STATE();
    case 494:
      if (lookahead == 's') ADVANCE(692);
      END_STATE();
    case 495:
      if (lookahead == 's') ADVANCE(690);
      END_STATE();
    case 496:
      if (lookahead == 's') ADVANCE(701);
      END_STATE();
    case 497:
      if (lookahead == 's') ADVANCE(689);
      END_STATE();
    case 498:
      if (lookahead == 's') ADVANCE(709);
      END_STATE();
    case 499:
      if (lookahead == 's') ADVANCE(716);
      END_STATE();
    case 500:
      if (lookahead == 's') ADVANCE(522);
      END_STATE();
    case 501:
      if (lookahead == 's') ADVANCE(523);
      END_STATE();
    case 502:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(524);
      END_STATE();
    case 504:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 505:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 506:
      if (lookahead == 's') ADVANCE(525);
      END_STATE();
    case 507:
      if (lookahead == 's') ADVANCE(539);
      END_STATE();
    case 508:
      if (lookahead == 's') ADVANCE(528);
      END_STATE();
    case 509:
      if (lookahead == 's') ADVANCE(536);
      END_STATE();
    case 510:
      if (lookahead == 's') ADVANCE(549);
      END_STATE();
    case 511:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 512:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 513:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 514:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 515:
      if (lookahead == 's') ADVANCE(550);
      END_STATE();
    case 516:
      if (lookahead == 's') ADVANCE(517);
      END_STATE();
    case 517:
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 518:
      if (lookahead == 's') ADVANCE(551);
      END_STATE();
    case 519:
      if (lookahead == 's') ADVANCE(546);
      END_STATE();
    case 520:
      if (lookahead == 's') ADVANCE(553);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(768);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(676);
      END_STATE();
    case 524:
      if (lookahead == 't') ADVANCE(724);
      END_STATE();
    case 525:
      if (lookahead == 't') ADVANCE(755);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(750);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(650);
      END_STATE();
    case 528:
      if (lookahead == 't') ADVANCE(761);
      END_STATE();
    case 529:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 530:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 531:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 532:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 533:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 534:
      if (lookahead == 't') ADVANCE(387);
      END_STATE();
    case 535:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 536:
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 537:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 538:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 539:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 540:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 541:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 542:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 543:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 544:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 545:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 546:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 547:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 548:
      if (lookahead == 't') ADVANCE(572);
      END_STATE();
    case 549:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 550:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 551:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 552:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 553:
      if (lookahead == 't') ADVANCE(566);
      END_STATE();
    case 554:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 555:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 556:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 557:
      if (lookahead == 'u') ADVANCE(534);
      END_STATE();
    case 558:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 559:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 560:
      if (lookahead == 'u') ADVANCE(415);
      END_STATE();
    case 561:
      if (lookahead == 'u') ADVANCE(416);
      END_STATE();
    case 562:
      if (lookahead == 'u') ADVANCE(464);
      END_STATE();
    case 563:
      if (lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 564:
      if (lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 565:
      if (lookahead == 'u') ADVANCE(351);
      END_STATE();
    case 566:
      if (lookahead == 'u') ADVANCE(354);
      END_STATE();
    case 567:
      if (lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 568:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 569:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 570:
      if (lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 571:
      if (lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 572:
      if (lookahead == 'u') ADVANCE(461);
      END_STATE();
    case 573:
      if (lookahead == 'u') ADVANCE(468);
      END_STATE();
    case 574:
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 575:
      if (lookahead == 'u') ADVANCE(555);
      END_STATE();
    case 576:
      if (lookahead == 'v') ADVANCE(644);
      END_STATE();
    case 577:
      if (lookahead == 'v') ADVANCE(648);
      END_STATE();
    case 578:
      if (lookahead == 'v') ADVANCE(286);
      END_STATE();
    case 579:
      if (lookahead == 'v') ADVANCE(140);
      END_STATE();
    case 580:
      if (lookahead == 'v') ADVANCE(184);
      END_STATE();
    case 581:
      if (lookahead == 'w') ADVANCE(381);
      END_STATE();
    case 582:
      if (lookahead == 'x') ADVANCE(704);
      END_STATE();
    case 583:
      if (lookahead == 'x') ADVANCE(181);
      END_STATE();
    case 584:
      if (lookahead == 'y') ADVANCE(680);
      END_STATE();
    case 585:
      if (lookahead == 'y') ADVANCE(731);
      END_STATE();
    case 586:
      if (lookahead == 'y') ADVANCE(664);
      END_STATE();
    case 587:
      if (lookahead == 'y') ADVANCE(35);
      END_STATE();
    case 588:
      if (lookahead == 'y') ADVANCE(519);
      END_STATE();
    case 589:
      if (lookahead == 'z') ADVANCE(136);
      END_STATE();
    case 590:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 591:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 592:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(21);
      END_STATE();
    case 593:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 594:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(23);
      END_STATE();
    case 595:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(18);
      END_STATE();
    case 596:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(22);
      END_STATE();
    case 597:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 598:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 599:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 600:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(19);
      END_STATE();
    case 601:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 602:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 603:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 604:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(24);
      END_STATE();
    case 605:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(26);
      END_STATE();
    case 606:
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(25);
      END_STATE();
    case 607:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      END_STATE();
    case 608:
      if (eof) ADVANCE(615);
      ADVANCE_MAP(
        '\n', 616,
        '\r', 1,
        '#', 628,
        '%', 789,
        '*', 774,
        '-', 745,
        'A', 557,
        'B', 558,
        'C', 389,
        'D', 251,
        'E', 335,
        'G', 440,
        'L', 258,
        'M', 385,
        'N', 49,
        'O', 82,
        'P', 50,
        'R', 128,
        'S', 391,
        'U', 40,
        'V', 32,
      );
      if (lookahead == '\\') SKIP(613);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(608);
      END_STATE();
    case 609:
      if (eof) ADVANCE(615);
      ADVANCE_MAP(
        '\n', 618,
        '\r', 3,
        '#', 626,
        '%', 789,
        'A', 1040,
        'B', 1041,
        'C', 954,
        'D', 908,
        'E', 945,
        'G', 984,
        'L', 912,
        'M', 955,
        'N', 813,
        'O', 824,
        'P', 814,
        'R', 857,
        'S', 958,
        'U', 805,
        'V', 797,
        '\\', 11,
        '\t', 791,
        0x0b, 791,
        '\f', 791,
        ' ', 791,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 610:
      if (eof) ADVANCE(615);
      ADVANCE_MAP(
        '\n', 620,
        '\r', 5,
        '#', 627,
        '%', 785,
        'A', 1322,
        'B', 1323,
        'C', 1236,
        'D', 1190,
        'E', 1227,
        'G', 1266,
        'L', 1194,
        'M', 1237,
        'N', 1094,
        'O', 1105,
        'P', 1095,
        'R', 1138,
        'S', 1240,
        'U', 1086,
        'V', 1078,
      );
      if (lookahead == '\\') SKIP(614);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 611:
      if (eof) ADVANCE(615);
      ADVANCE_MAP(
        '#', 628,
        '%', 784,
        '(', 684,
        ')', 685,
        '*', 774,
        ',', 748,
        '-', 745,
        ':', 643,
        'A', 557,
        'B', 558,
        'C', 389,
        'D', 251,
        'E', 335,
        'G', 440,
        'L', 258,
        'M', 385,
        'N', 49,
        'O', 82,
        'P', 50,
        'R', 128,
        'S', 391,
        'U', 40,
        'V', 32,
      );
      if (lookahead == '\\') SKIP(612);
      if (lookahead == 'f') ADVANCE(254);
      if (lookahead == 'g') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(581);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 'v') ADVANCE(155);
      if (lookahead == '}') ADVANCE(1349);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(611);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(746);
      END_STATE();
    case 612:
      if (eof) ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(611);
      END_STATE();
    case 613:
      if (eof) ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(608);
      END_STATE();
    case 614:
      if (eof) ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(610);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__top_level_token1);
      if (lookahead == '\n') ADVANCE(616);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__top_level_token1);
      if (lookahead == '\n') ADVANCE(617);
      if (lookahead == '\r') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1064);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__top_level_token1);
      if (lookahead == '\n') ADVANCE(618);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(791);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__top_level_token1);
      if (lookahead == '\n') ADVANCE(619);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__top_level_token1);
      if (lookahead == '\n') ADVANCE(620);
      if (lookahead == '\r') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1065);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__top_level_token1);
      if (lookahead == '\n') ADVANCE(621);
      if (lookahead == '\r') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1066);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__top_level_token1);
      if (lookahead == '\n') ADVANCE(622);
      if (lookahead == '\r') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1067);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__top_level_token1);
      if (lookahead == '\n') ADVANCE(623);
      if (lookahead == '\r') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1068);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__top_level_token1);
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '\r') ADVANCE(9);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__top_level_token1);
      if (lookahead == '\n') ADVANCE(625);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(792);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(629);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '`') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(628);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(626);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_PERCENTif);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(476);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_PERCENTifarch);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_PERCENTifos);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_PERCENTifnarch);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_PERCENTifnos);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_conditional_token1);
      if (lookahead == ' ') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(641);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_conditional_token1);
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '%') ADVANCE(637);
      if (lookahead == '\\') ADVANCE(640);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(636);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(641);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_conditional_token1);
      if (lookahead == 'd') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(641);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_conditional_token1);
      if (lookahead == 'l') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(641);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_conditional_token1);
      if (lookahead == 'n') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(641);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_conditional_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(636);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(641);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_conditional_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(641);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_PERCENTendif);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_AutoProv);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(1274);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(992);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(454);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_AutoReqProv);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_BugUrl);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_BuildRoot);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_BuildSystem);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_DistTag);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_Distribution);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_Epoch);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_Group);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_License);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_ModularityLabel);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_Name);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_NoPatch);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_NoSource);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_Packager);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_Release);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_SourceLicense);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_Summary);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_URL);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_Url);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_VCS);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_Vendor);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_Version);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(674);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(674);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(674);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(674);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_pre);
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_post);
      if (lookahead == 't') ADVANCE(469);
      if (lookahead == 'u') ADVANCE(340);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_postun);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_pretrans);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_posttrans);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_verify);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_interp);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_Requires);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(1320);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(1038);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_BuildArchitectures);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_BuildConflicts);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_BuildPrereq);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_BuildRequires);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_DocDir);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_Enhances);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_ExcludeArch);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_ExcludeOS);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_ExclusiveArch);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_ExclusiveOS);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_Obsoletes);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_OrderWithRequires);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_Prefix);
      if (lookahead == 'e') ADVANCE(1283);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_Prefix);
      if (lookahead == 'e') ADVANCE(1001);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_Prefix);
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_Prefixes);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_Prereq);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_Provides);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_Recommends);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_RemovePathPostfixes);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_Suggests);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_Supplements);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_PERCENTdescription);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_DASHn);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_PERCENTpackage);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_PERCENTprep);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_PERCENTgenerate_buildrequires);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_PERCENTconf);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_PERCENTconf);
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_PERCENTbuild);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_PERCENTinstall);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_PERCENTcheck);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_PERCENTclean);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_PERCENTpre);
      if (lookahead == 'p') ADVANCE(715);
      if (lookahead == 't') ADVANCE(467);
      if (lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_PERCENTpost);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == 'u') ADVANCE(341);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_PERCENTpreun);
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_PERCENTpostun);
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_PERCENTpretrans);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_PERCENTposttrans);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_PERCENTpreuntrans);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_PERCENTpostuntrans);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_PERCENTverify);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_PERCENTtriggerprein);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_PERCENTtriggerin);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_PERCENTtriggerun);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_PERCENTtriggerpostun);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_PERCENTfiletriggerin);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_PERCENTfiletriggerun);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_PERCENTfiletriggerpostun);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_PERCENTtransfiletriggerin);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_PERCENTtransfiletriggerun);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_PERCENTtransfiletriggerpostun);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_PERCENTfiles);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_PERCENTdefattr);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_defattr_token1);
      if (lookahead == '.') ADVANCE(607);
      if (lookahead == '_') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(746);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_defattr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(747);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_defattr_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(749);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_PERCENTartifact);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_PERCENTconfig);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_PERCENTdir);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_PERCENTdoc);
      if (lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_PERCENTdocdir);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_PERCENTghost);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_PERCENTlicense);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_PERCENTmissingok);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_PERCENTreadme);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_PERCENTattr);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_filedigest);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_maj);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_mtime);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_owner);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_symlink);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_PERCENTchangelog);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_PERCENTglobal);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_PERCENTdefine);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_PERCENTundefine);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(607);
      if (lookahead == '_') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(1344);
      if (lookahead == '_') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(780);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(780);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1350,
        'a', 443,
        'b', 567,
        'c', 237,
        'd', 129,
        'e', 360,
        'f', 281,
        'g', 197,
        'i', 202,
        'l', 296,
        'm', 257,
        'p', 56,
        'r', 130,
        't', 426,
        'u', 376,
        'v', 186,
        '{', 1348,
      );
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1350,
        'a', 443,
        'b', 567,
        'c', 237,
        'd', 129,
        'f', 281,
        'g', 197,
        'i', 202,
        'l', 296,
        'm', 257,
        'p', 56,
        'r', 130,
        't', 426,
        'u', 376,
        'v', 186,
        '{', 1348,
      );
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1350,
        'a', 443,
        'c', 405,
        'd', 165,
        'g', 250,
        'l', 296,
        'm', 257,
        'r', 130,
        'v', 186,
        '{', 1348,
      );
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1350,
        'a', 442,
        'c', 405,
        'd', 261,
        'g', 250,
        'l', 296,
        'm', 257,
        'r', 130,
        'v', 186,
        '{', 1348,
      );
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1350,
        'b', 567,
        'c', 238,
        'd', 153,
        'e', 360,
        'f', 281,
        'g', 198,
        'i', 202,
        'p', 56,
        't', 426,
        'u', 376,
        'v', 186,
        '{', 1348,
      );
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      ADVANCE_MAP(
        '(', 1350,
        'b', 567,
        'c', 238,
        'd', 153,
        'f', 281,
        'g', 198,
        'i', 202,
        'p', 56,
        't', 426,
        'u', 376,
        'v', 186,
        '{', 1348,
      );
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '(') ADVANCE(1350);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == '{') ADVANCE(1348);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      ADVANCE_MAP(
        '\n', 618,
        '\r', 3,
        '#', 626,
        '%', 789,
        'A', 1040,
        'B', 1041,
        'C', 954,
        'D', 908,
        'E', 945,
        'G', 984,
        'L', 912,
        'M', 955,
        'N', 813,
        'O', 824,
        'P', 814,
        'R', 857,
        'S', 958,
        'U', 805,
        'V', 797,
        '\\', 11,
        '\t', 791,
        0x0b, 791,
        '\f', 791,
        ' ', 791,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      ADVANCE_MAP(
        '\n', 625,
        '\r', 10,
        '#', 626,
        '%', 788,
        'A', 1040,
        'B', 1041,
        'C', 954,
        'D', 908,
        'E', 945,
        'G', 984,
        'L', 912,
        'M', 955,
        'N', 813,
        'O', 824,
        'P', 814,
        'R', 857,
        'S', 958,
        'U', 805,
        'V', 797,
        '\\', 13,
        '\t', 792,
        0x0b, 792,
        '\f', 792,
        ' ', 792,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(793);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1346);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '_' || 'z' < lookahead)) ADVANCE(1062);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'A') ADVANCE(988);
      if (lookahead == 'C') ADVANCE(971);
      if (lookahead == 'P') ADVANCE(994);
      if (lookahead == 'R') ADVANCE(865);
      if (lookahead == 'S') ADVANCE(1061);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'A') ADVANCE(989);
      if (lookahead == 'O') ADVANCE(808);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'A') ADVANCE(991);
      if (lookahead == 'O') ADVANCE(809);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'C') ADVANCE(807);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'D') ADVANCE(913);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'L') ADVANCE(665);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'L') ADVANCE(817);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'P') ADVANCE(818);
      if (lookahead == 'S') ADVANCE(970);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'P') ADVANCE(969);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'P') ADVANCE(990);
      if (lookahead == 'R') ADVANCE(862);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'P') ADVANCE(823);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'R') ADVANCE(799);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'R') ADVANCE(889);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'S') ADVANCE(667);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'S') ADVANCE(697);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'S') ADVANCE(699);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'T') ADVANCE(816);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'U') ADVANCE(986);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == 'W') ADVANCE(915);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(938);
      if (lookahead == 'o') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1062);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(828);
      if (lookahead == 'r') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1062);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1062);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1062);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1062);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1062);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1062);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1062);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1062);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1062);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1062);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(1017);
      if (lookahead == 'r') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(926);
      if (lookahead == 't') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(959);
      if (lookahead == 'l') ADVANCE(869);
      if (lookahead == 'm') ADVANCE(957);
      if (lookahead == 'q') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(1033);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(1007);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(861);
      if (lookahead == 's') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(890);
      if (lookahead == 'o') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(977);
      if (lookahead == 'o') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(1036);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(909);
      if (lookahead == 'r') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'g') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'g') ADVANCE(811);
      if (lookahead == 'i') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'g') ADVANCE(897);
      if (lookahead == 'm') ADVANCE(939);
      if (lookahead == 'p') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'g') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'g') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(1014);
      if (lookahead == 'o') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'k') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(1042);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'm') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'm') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'm') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'm') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'm') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'm') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(904);
      if (lookahead == 'p') ADVANCE(963);
      if (lookahead == 'x') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(848);
      if (lookahead == 'r') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(1043);
      if (lookahead == 'u') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'q') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'q') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'q') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'q') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'q') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(1024);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(1032);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 's') ADVANCE(1037);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 't') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'y') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'y') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == 'y') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_string_content_with_newlines);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(1062);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_string_content);
      ADVANCE_MAP(
        '\n', 617,
        '\r', 2,
        '#', 627,
        '%', 784,
        'A', 1322,
        'B', 1323,
        'C', 1236,
        'D', 1190,
        'E', 1227,
        'G', 1266,
        'L', 1194,
        'M', 1237,
        'N', 1094,
        'O', 1105,
        'P', 1095,
        'R', 1138,
        'S', 1240,
        'U', 1086,
        'V', 1078,
      );
      if (lookahead == '\\') SKIP(591);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_string_content);
      ADVANCE_MAP(
        '\n', 620,
        '\r', 5,
        '#', 627,
        '%', 785,
        'A', 1322,
        'B', 1323,
        'C', 1236,
        'D', 1190,
        'E', 1227,
        'G', 1266,
        'L', 1194,
        'M', 1237,
        'N', 1094,
        'O', 1105,
        'P', 1095,
        'R', 1138,
        'S', 1240,
        'U', 1086,
        'V', 1078,
      );
      if (lookahead == '\\') SKIP(603);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(621);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(790);
      if (lookahead == '\\') SKIP(593);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(622);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(790);
      if (lookahead == '-') ADVANCE(1171);
      if (lookahead == '\\') SKIP(597);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(623);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(790);
      if (lookahead == '\\') SKIP(598);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '\\') SKIP(592);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(790);
      if (lookahead == '(') ADVANCE(684);
      if (lookahead == '\\') SKIP(596);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(790);
      if (lookahead == '\\') SKIP(594);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(790);
      if (lookahead == '\\') SKIP(604);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(787);
      if (lookahead == '\\') SKIP(606);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '\\') SKIP(605);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(1270);
      if (lookahead == 'C') ADVANCE(1253);
      if (lookahead == 'P') ADVANCE(1276);
      if (lookahead == 'R') ADVANCE(1146);
      if (lookahead == 'S') ADVANCE(1343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(1271);
      if (lookahead == 'O') ADVANCE(1089);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(1273);
      if (lookahead == 'O') ADVANCE(1090);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'C') ADVANCE(1088);
      if (lookahead == 'e') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'D') ADVANCE(1195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'L') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'L') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(1099);
      if (lookahead == 'S') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(1272);
      if (lookahead == 'R') ADVANCE(1144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'R') ADVANCE(1080);
      if (lookahead == 'r') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'R') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'T') ADVANCE(1097);
      if (lookahead == 'r') ADVANCE(1192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'U') ADVANCE(1268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'W') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1220);
      if (lookahead == 'o') ADVANCE(1082);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1345);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1109);
      if (lookahead == 'r') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1345);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1345);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1345);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1345);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1345);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1345);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1345);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1345);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1345);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'a') ADVANCE(1312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1345);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'b') ADVANCE(1299);
      if (lookahead == 'r') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'b') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'b') ADVANCE(1328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1079);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1208);
      if (lookahead == 't') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1241);
      if (lookahead == 'l') ADVANCE(1150);
      if (lookahead == 'm') ADVANCE(1239);
      if (lookahead == 'q') ADVANCE(1329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'c') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1075);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1142);
      if (lookahead == 's') ADVANCE(1202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'd') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1172);
      if (lookahead == 'o') ADVANCE(1336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1085);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'o') ADVANCE(1248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'e') ADVANCE(1260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1191);
      if (lookahead == 'r') ADVANCE(1140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'f') ADVANCE(1218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(1092);
      if (lookahead == 'i') ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(1179);
      if (lookahead == 'm') ADVANCE(1221);
      if (lookahead == 'p') ADVANCE(1255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(1165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'g') ADVANCE(1158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'h') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1296);
      if (lookahead == 'o') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'i') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'k') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'l') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'm') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1186);
      if (lookahead == 'p') ADVANCE(1245);
      if (lookahead == 'x') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1129);
      if (lookahead == 'r') ADVANCE(1297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'n') ADVANCE(1175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1325);
      if (lookahead == 'u') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'p') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'p') ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'q') ADVANCE(1333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'r') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 's') ADVANCE(1319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 't') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'u') ADVANCE(1205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(1201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'v') ADVANCE(1166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'x') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'x') ADVANCE(1164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'y') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'y') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'y') ADVANCE(1304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_string_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1345);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1346);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_PERCENT_LPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 608},
  [2] = {.lex_state = 608},
  [3] = {.lex_state = 608},
  [4] = {.lex_state = 608},
  [5] = {.lex_state = 608},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 610},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 610},
  [13] = {.lex_state = 610},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 610},
  [18] = {.lex_state = 610},
  [19] = {.lex_state = 610},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 610},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 610},
  [26] = {.lex_state = 610},
  [27] = {.lex_state = 610},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 610},
  [30] = {.lex_state = 610},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 609},
  [33] = {.lex_state = 609},
  [34] = {.lex_state = 609},
  [35] = {.lex_state = 609},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 609},
  [41] = {.lex_state = 609},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 608},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 608},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 608},
  [51] = {.lex_state = 608},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 608},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 608},
  [56] = {.lex_state = 608},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 609},
  [59] = {.lex_state = 609},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 609},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 609},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 609},
  [67] = {.lex_state = 609},
  [68] = {.lex_state = 609},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 608},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 608},
  [87] = {.lex_state = 608},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 608},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 608},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 608},
  [100] = {.lex_state = 608},
  [101] = {.lex_state = 608},
  [102] = {.lex_state = 608},
  [103] = {.lex_state = 608},
  [104] = {.lex_state = 608},
  [105] = {.lex_state = 608},
  [106] = {.lex_state = 608},
  [107] = {.lex_state = 608},
  [108] = {.lex_state = 608},
  [109] = {.lex_state = 608},
  [110] = {.lex_state = 608},
  [111] = {.lex_state = 608},
  [112] = {.lex_state = 608},
  [113] = {.lex_state = 608},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 608},
  [116] = {.lex_state = 608},
  [117] = {.lex_state = 608},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 21},
  [124] = {.lex_state = 21},
  [125] = {.lex_state = 25},
  [126] = {.lex_state = 25},
  [127] = {.lex_state = 25},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 25},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 17},
  [135] = {.lex_state = 23},
  [136] = {.lex_state = 23},
  [137] = {.lex_state = 17},
  [138] = {.lex_state = 17},
  [139] = {.lex_state = 22},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 22},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 24},
  [146] = {.lex_state = 24},
  [147] = {.lex_state = 24},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 24},
  [150] = {.lex_state = 24},
  [151] = {.lex_state = 24},
  [152] = {.lex_state = 24},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 24},
  [155] = {.lex_state = 24},
  [156] = {.lex_state = 24},
  [157] = {.lex_state = 24},
  [158] = {.lex_state = 24},
  [159] = {.lex_state = 24},
  [160] = {.lex_state = 24},
  [161] = {.lex_state = 24},
  [162] = {.lex_state = 24},
  [163] = {.lex_state = 24},
  [164] = {.lex_state = 24},
  [165] = {.lex_state = 24},
  [166] = {.lex_state = 24},
  [167] = {.lex_state = 24},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 24},
  [188] = {.lex_state = 24},
  [189] = {.lex_state = 24},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 17},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 17},
  [195] = {.lex_state = 17},
  [196] = {.lex_state = 17},
  [197] = {.lex_state = 16},
  [198] = {.lex_state = 16},
  [199] = {.lex_state = 16},
  [200] = {.lex_state = 16},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 16},
  [203] = {.lex_state = 16},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 27},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 27},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 608},
  [229] = {.lex_state = 608},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 608},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 608},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 26},
  [239] = {.lex_state = 608},
  [240] = {.lex_state = 16},
  [241] = {.lex_state = 26},
  [242] = {.lex_state = 608},
  [243] = {.lex_state = 608},
  [244] = {.lex_state = 17},
  [245] = {.lex_state = 17},
  [246] = {.lex_state = 16},
  [247] = {.lex_state = 636},
  [248] = {.lex_state = 608},
  [249] = {.lex_state = 636},
  [250] = {.lex_state = 16},
  [251] = {.lex_state = 16},
  [252] = {.lex_state = 16},
  [253] = {.lex_state = 608},
  [254] = {.lex_state = 608},
  [255] = {.lex_state = 608},
  [256] = {.lex_state = 608},
  [257] = {.lex_state = 608},
  [258] = {.lex_state = 608},
  [259] = {.lex_state = 608},
  [260] = {.lex_state = 608},
  [261] = {.lex_state = 608},
  [262] = {.lex_state = 608},
  [263] = {.lex_state = 608},
  [264] = {.lex_state = 608},
  [265] = {.lex_state = 16},
  [266] = {.lex_state = 16},
  [267] = {.lex_state = 608},
  [268] = {.lex_state = 608},
  [269] = {.lex_state = 608},
  [270] = {.lex_state = 608},
  [271] = {.lex_state = 608},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 608},
  [274] = {.lex_state = 608},
  [275] = {.lex_state = 608},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 608},
  [278] = {.lex_state = 608},
  [279] = {.lex_state = 608},
  [280] = {.lex_state = 608},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 608},
  [283] = {.lex_state = 608},
  [284] = {.lex_state = 608},
  [285] = {.lex_state = 16},
  [286] = {.lex_state = 16},
  [287] = {.lex_state = 608},
  [288] = {.lex_state = 608},
  [289] = {.lex_state = 16},
  [290] = {.lex_state = 608},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 608},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 608},
  [295] = {.lex_state = 16},
  [296] = {.lex_state = 16},
  [297] = {.lex_state = 26},
  [298] = {.lex_state = 608},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 16},
  [302] = {.lex_state = 16},
  [303] = {.lex_state = 608},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 16},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 608},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 16},
  [313] = {.lex_state = 608},
  [314] = {.lex_state = 16},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 16},
  [318] = {.lex_state = 16},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 16},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 16},
  [323] = {.lex_state = 16},
  [324] = {.lex_state = 16},
  [325] = {.lex_state = 16},
  [326] = {.lex_state = 608},
  [327] = {.lex_state = 26},
  [328] = {.lex_state = 608},
  [329] = {.lex_state = 26},
  [330] = {.lex_state = 608},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 608},
  [333] = {.lex_state = 608},
  [334] = {.lex_state = 26},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 608},
  [337] = {.lex_state = 16},
  [338] = {.lex_state = 20},
  [339] = {.lex_state = 16},
  [340] = {.lex_state = 608},
  [341] = {.lex_state = 608},
  [342] = {.lex_state = 20},
  [343] = {.lex_state = 26},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 26},
  [346] = {.lex_state = 16},
  [347] = {.lex_state = 20},
  [348] = {.lex_state = 16},
  [349] = {.lex_state = 26},
  [350] = {.lex_state = 26},
  [351] = {.lex_state = 20},
  [352] = {.lex_state = 16},
  [353] = {.lex_state = 26},
  [354] = {.lex_state = 26},
  [355] = {.lex_state = 608},
  [356] = {.lex_state = 16},
  [357] = {.lex_state = 26},
  [358] = {.lex_state = 26},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 16},
  [361] = {.lex_state = 26},
  [362] = {.lex_state = 26},
  [363] = {.lex_state = 16},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 16},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 20},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 20},
  [371] = {.lex_state = 608},
  [372] = {.lex_state = 608},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 636},
  [376] = {.lex_state = 636},
  [377] = {.lex_state = 20},
  [378] = {.lex_state = 20},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 608},
  [383] = {.lex_state = 17},
  [384] = {.lex_state = 17},
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
    [sym_spec] = STATE(319),
    [sym__top_level] = STATE(226),
    [sym_conditional] = STATE(2),
    [sym_preamble] = STATE(2),
    [sym_tags] = STATE(97),
    [sym_tag] = STATE(272),
    [sym_dependency_tag] = STATE(272),
    [sym_description] = STATE(2),
    [sym_subsection] = STATE(2),
    [sym_subsection_package] = STATE(217),
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
    [aux_sym__top_level_repeat1] = STATE(2),
    [aux_sym__top_level_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(9),
    [anon_sym_PERCENTifarch] = ACTIONS(9),
    [anon_sym_PERCENTifos] = ACTIONS(9),
    [anon_sym_PERCENTifnarch] = ACTIONS(9),
    [anon_sym_PERCENTifnos] = ACTIONS(9),
    [anon_sym_AutoProv] = ACTIONS(11),
    [anon_sym_AutoReq] = ACTIONS(11),
    [anon_sym_AutoReqProv] = ACTIONS(11),
    [anon_sym_BugUrl] = ACTIONS(11),
    [anon_sym_BuildRoot] = ACTIONS(11),
    [anon_sym_BuildSystem] = ACTIONS(11),
    [anon_sym_DistTag] = ACTIONS(11),
    [anon_sym_Distribution] = ACTIONS(11),
    [anon_sym_Epoch] = ACTIONS(11),
    [anon_sym_Group] = ACTIONS(11),
    [anon_sym_License] = ACTIONS(11),
    [anon_sym_ModularityLabel] = ACTIONS(11),
    [anon_sym_Name] = ACTIONS(11),
    [anon_sym_NoPatch] = ACTIONS(11),
    [anon_sym_NoSource] = ACTIONS(11),
    [anon_sym_Packager] = ACTIONS(11),
    [anon_sym_Release] = ACTIONS(11),
    [anon_sym_SourceLicense] = ACTIONS(11),
    [anon_sym_Summary] = ACTIONS(11),
    [anon_sym_URL] = ACTIONS(11),
    [anon_sym_Url] = ACTIONS(11),
    [anon_sym_VCS] = ACTIONS(11),
    [anon_sym_Vendor] = ACTIONS(11),
    [anon_sym_Version] = ACTIONS(11),
    [aux_sym_tag_token1] = ACTIONS(11),
    [aux_sym_tag_token2] = ACTIONS(11),
    [anon_sym_Requires] = ACTIONS(13),
    [anon_sym_BuildArch] = ACTIONS(15),
    [anon_sym_BuildArchitectures] = ACTIONS(15),
    [anon_sym_BuildConflicts] = ACTIONS(15),
    [anon_sym_BuildPrereq] = ACTIONS(15),
    [anon_sym_BuildRequires] = ACTIONS(15),
    [anon_sym_Conflicts] = ACTIONS(15),
    [anon_sym_DocDir] = ACTIONS(15),
    [anon_sym_Enhances] = ACTIONS(15),
    [anon_sym_ExcludeArch] = ACTIONS(15),
    [anon_sym_ExcludeOS] = ACTIONS(15),
    [anon_sym_ExclusiveArch] = ACTIONS(15),
    [anon_sym_ExclusiveOS] = ACTIONS(15),
    [anon_sym_Obsoletes] = ACTIONS(15),
    [anon_sym_OrderWithRequires] = ACTIONS(15),
    [anon_sym_Prefix] = ACTIONS(15),
    [anon_sym_Prefixes] = ACTIONS(15),
    [anon_sym_Prereq] = ACTIONS(15),
    [anon_sym_Provides] = ACTIONS(15),
    [anon_sym_Recommends] = ACTIONS(15),
    [anon_sym_RemovePathPostfixes] = ACTIONS(15),
    [anon_sym_Suggests] = ACTIONS(15),
    [anon_sym_Supplements] = ACTIONS(15),
    [anon_sym_PERCENTdescription] = ACTIONS(17),
    [anon_sym_PERCENTpackage] = ACTIONS(19),
    [anon_sym_PERCENTprep] = ACTIONS(21),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(23),
    [anon_sym_PERCENTconf] = ACTIONS(25),
    [anon_sym_PERCENTbuild] = ACTIONS(27),
    [anon_sym_PERCENTinstall] = ACTIONS(29),
    [anon_sym_PERCENTcheck] = ACTIONS(31),
    [anon_sym_PERCENTclean] = ACTIONS(33),
    [anon_sym_PERCENTpre] = ACTIONS(35),
    [anon_sym_PERCENTpost] = ACTIONS(35),
    [anon_sym_PERCENTpreun] = ACTIONS(35),
    [anon_sym_PERCENTpostun] = ACTIONS(35),
    [anon_sym_PERCENTpretrans] = ACTIONS(35),
    [anon_sym_PERCENTposttrans] = ACTIONS(35),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(35),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(35),
    [anon_sym_PERCENTverify] = ACTIONS(35),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(35),
    [anon_sym_PERCENTtriggerin] = ACTIONS(35),
    [anon_sym_PERCENTtriggerun] = ACTIONS(35),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(35),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(35),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(35),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(35),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(35),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(35),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(35),
    [anon_sym_PERCENTfiles] = ACTIONS(37),
    [anon_sym_PERCENTchangelog] = ACTIONS(39),
    [anon_sym_PERCENTglobal] = ACTIONS(41),
    [anon_sym_PERCENTdefine] = ACTIONS(41),
    [anon_sym_PERCENTundefine] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(45),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(47),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(49),
  },
  [2] = {
    [sym_conditional] = STATE(5),
    [sym_preamble] = STATE(5),
    [sym_tags] = STATE(97),
    [sym_tag] = STATE(272),
    [sym_dependency_tag] = STATE(272),
    [sym_description] = STATE(5),
    [sym_subsection] = STATE(5),
    [sym_subsection_package] = STATE(217),
    [sym_prep_scriptlet] = STATE(5),
    [sym_generate_buildrequires] = STATE(5),
    [sym_conf_scriptlet] = STATE(5),
    [sym_build_scriptlet] = STATE(5),
    [sym_install_scriptlet] = STATE(5),
    [sym_check_scriptlet] = STATE(5),
    [sym_clean_scriptlet] = STATE(5),
    [sym__runtime_scriptlet] = STATE(5),
    [sym__triggers] = STATE(5),
    [sym__file_triggers] = STATE(5),
    [sym_files] = STATE(5),
    [sym_changelog] = STATE(5),
    [sym_macro_definition] = STATE(5),
    [sym_macro_undefinition] = STATE(5),
    [sym__macro_expansion] = STATE(5),
    [sym_simple_expansion] = STATE(5),
    [sym_full_expansion] = STATE(5),
    [sym_shell_expansion] = STATE(5),
    [aux_sym__top_level_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(51),
    [aux_sym__top_level_token1] = ACTIONS(53),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(9),
    [anon_sym_PERCENTifarch] = ACTIONS(9),
    [anon_sym_PERCENTifos] = ACTIONS(9),
    [anon_sym_PERCENTifnarch] = ACTIONS(9),
    [anon_sym_PERCENTifnos] = ACTIONS(9),
    [anon_sym_AutoProv] = ACTIONS(11),
    [anon_sym_AutoReq] = ACTIONS(11),
    [anon_sym_AutoReqProv] = ACTIONS(11),
    [anon_sym_BugUrl] = ACTIONS(11),
    [anon_sym_BuildRoot] = ACTIONS(11),
    [anon_sym_BuildSystem] = ACTIONS(11),
    [anon_sym_DistTag] = ACTIONS(11),
    [anon_sym_Distribution] = ACTIONS(11),
    [anon_sym_Epoch] = ACTIONS(11),
    [anon_sym_Group] = ACTIONS(11),
    [anon_sym_License] = ACTIONS(11),
    [anon_sym_ModularityLabel] = ACTIONS(11),
    [anon_sym_Name] = ACTIONS(11),
    [anon_sym_NoPatch] = ACTIONS(11),
    [anon_sym_NoSource] = ACTIONS(11),
    [anon_sym_Packager] = ACTIONS(11),
    [anon_sym_Release] = ACTIONS(11),
    [anon_sym_SourceLicense] = ACTIONS(11),
    [anon_sym_Summary] = ACTIONS(11),
    [anon_sym_URL] = ACTIONS(11),
    [anon_sym_Url] = ACTIONS(11),
    [anon_sym_VCS] = ACTIONS(11),
    [anon_sym_Vendor] = ACTIONS(11),
    [anon_sym_Version] = ACTIONS(11),
    [aux_sym_tag_token1] = ACTIONS(11),
    [aux_sym_tag_token2] = ACTIONS(11),
    [anon_sym_Requires] = ACTIONS(13),
    [anon_sym_BuildArch] = ACTIONS(15),
    [anon_sym_BuildArchitectures] = ACTIONS(15),
    [anon_sym_BuildConflicts] = ACTIONS(15),
    [anon_sym_BuildPrereq] = ACTIONS(15),
    [anon_sym_BuildRequires] = ACTIONS(15),
    [anon_sym_Conflicts] = ACTIONS(15),
    [anon_sym_DocDir] = ACTIONS(15),
    [anon_sym_Enhances] = ACTIONS(15),
    [anon_sym_ExcludeArch] = ACTIONS(15),
    [anon_sym_ExcludeOS] = ACTIONS(15),
    [anon_sym_ExclusiveArch] = ACTIONS(15),
    [anon_sym_ExclusiveOS] = ACTIONS(15),
    [anon_sym_Obsoletes] = ACTIONS(15),
    [anon_sym_OrderWithRequires] = ACTIONS(15),
    [anon_sym_Prefix] = ACTIONS(15),
    [anon_sym_Prefixes] = ACTIONS(15),
    [anon_sym_Prereq] = ACTIONS(15),
    [anon_sym_Provides] = ACTIONS(15),
    [anon_sym_Recommends] = ACTIONS(15),
    [anon_sym_RemovePathPostfixes] = ACTIONS(15),
    [anon_sym_Suggests] = ACTIONS(15),
    [anon_sym_Supplements] = ACTIONS(15),
    [anon_sym_PERCENTdescription] = ACTIONS(17),
    [anon_sym_PERCENTpackage] = ACTIONS(19),
    [anon_sym_PERCENTprep] = ACTIONS(21),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(23),
    [anon_sym_PERCENTconf] = ACTIONS(25),
    [anon_sym_PERCENTbuild] = ACTIONS(27),
    [anon_sym_PERCENTinstall] = ACTIONS(29),
    [anon_sym_PERCENTcheck] = ACTIONS(31),
    [anon_sym_PERCENTclean] = ACTIONS(33),
    [anon_sym_PERCENTpre] = ACTIONS(55),
    [anon_sym_PERCENTpost] = ACTIONS(55),
    [anon_sym_PERCENTpreun] = ACTIONS(55),
    [anon_sym_PERCENTpostun] = ACTIONS(55),
    [anon_sym_PERCENTpretrans] = ACTIONS(55),
    [anon_sym_PERCENTposttrans] = ACTIONS(55),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(55),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(55),
    [anon_sym_PERCENTverify] = ACTIONS(55),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(55),
    [anon_sym_PERCENTtriggerin] = ACTIONS(55),
    [anon_sym_PERCENTtriggerun] = ACTIONS(55),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(55),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(55),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(55),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(55),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(55),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(55),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(55),
    [anon_sym_PERCENTfiles] = ACTIONS(37),
    [anon_sym_PERCENTchangelog] = ACTIONS(39),
    [anon_sym_PERCENTglobal] = ACTIONS(41),
    [anon_sym_PERCENTdefine] = ACTIONS(41),
    [anon_sym_PERCENTundefine] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(45),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(47),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(49),
  },
  [3] = {
    [sym__top_level] = STATE(237),
    [sym_conditional] = STATE(6),
    [sym_preamble] = STATE(6),
    [sym_tags] = STATE(98),
    [sym_tag] = STATE(364),
    [sym_dependency_tag] = STATE(364),
    [sym_description] = STATE(6),
    [sym_subsection] = STATE(6),
    [sym_subsection_package] = STATE(224),
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
    [sym__macro_expansion] = STATE(6),
    [sym_simple_expansion] = STATE(6),
    [sym_full_expansion] = STATE(6),
    [sym_shell_expansion] = STATE(6),
    [aux_sym__top_level_repeat1] = STATE(6),
    [aux_sym__top_level_token1] = ACTIONS(57),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(59),
    [anon_sym_PERCENTifarch] = ACTIONS(59),
    [anon_sym_PERCENTifos] = ACTIONS(59),
    [anon_sym_PERCENTifnarch] = ACTIONS(59),
    [anon_sym_PERCENTifnos] = ACTIONS(59),
    [anon_sym_AutoProv] = ACTIONS(11),
    [anon_sym_AutoReq] = ACTIONS(11),
    [anon_sym_AutoReqProv] = ACTIONS(11),
    [anon_sym_BugUrl] = ACTIONS(11),
    [anon_sym_BuildRoot] = ACTIONS(11),
    [anon_sym_BuildSystem] = ACTIONS(11),
    [anon_sym_DistTag] = ACTIONS(11),
    [anon_sym_Distribution] = ACTIONS(11),
    [anon_sym_Epoch] = ACTIONS(11),
    [anon_sym_Group] = ACTIONS(11),
    [anon_sym_License] = ACTIONS(11),
    [anon_sym_ModularityLabel] = ACTIONS(11),
    [anon_sym_Name] = ACTIONS(11),
    [anon_sym_NoPatch] = ACTIONS(11),
    [anon_sym_NoSource] = ACTIONS(11),
    [anon_sym_Packager] = ACTIONS(11),
    [anon_sym_Release] = ACTIONS(11),
    [anon_sym_SourceLicense] = ACTIONS(11),
    [anon_sym_Summary] = ACTIONS(11),
    [anon_sym_URL] = ACTIONS(11),
    [anon_sym_Url] = ACTIONS(11),
    [anon_sym_VCS] = ACTIONS(11),
    [anon_sym_Vendor] = ACTIONS(11),
    [anon_sym_Version] = ACTIONS(11),
    [aux_sym_tag_token1] = ACTIONS(11),
    [aux_sym_tag_token2] = ACTIONS(11),
    [anon_sym_Requires] = ACTIONS(13),
    [anon_sym_BuildArch] = ACTIONS(15),
    [anon_sym_BuildArchitectures] = ACTIONS(15),
    [anon_sym_BuildConflicts] = ACTIONS(15),
    [anon_sym_BuildPrereq] = ACTIONS(15),
    [anon_sym_BuildRequires] = ACTIONS(15),
    [anon_sym_Conflicts] = ACTIONS(15),
    [anon_sym_DocDir] = ACTIONS(15),
    [anon_sym_Enhances] = ACTIONS(15),
    [anon_sym_ExcludeArch] = ACTIONS(15),
    [anon_sym_ExcludeOS] = ACTIONS(15),
    [anon_sym_ExclusiveArch] = ACTIONS(15),
    [anon_sym_ExclusiveOS] = ACTIONS(15),
    [anon_sym_Obsoletes] = ACTIONS(15),
    [anon_sym_OrderWithRequires] = ACTIONS(15),
    [anon_sym_Prefix] = ACTIONS(15),
    [anon_sym_Prefixes] = ACTIONS(15),
    [anon_sym_Prereq] = ACTIONS(15),
    [anon_sym_Provides] = ACTIONS(15),
    [anon_sym_Recommends] = ACTIONS(15),
    [anon_sym_RemovePathPostfixes] = ACTIONS(15),
    [anon_sym_Suggests] = ACTIONS(15),
    [anon_sym_Supplements] = ACTIONS(15),
    [anon_sym_PERCENTdescription] = ACTIONS(61),
    [anon_sym_PERCENTpackage] = ACTIONS(19),
    [anon_sym_PERCENTprep] = ACTIONS(63),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(65),
    [anon_sym_PERCENTconf] = ACTIONS(67),
    [anon_sym_PERCENTbuild] = ACTIONS(69),
    [anon_sym_PERCENTinstall] = ACTIONS(71),
    [anon_sym_PERCENTcheck] = ACTIONS(73),
    [anon_sym_PERCENTclean] = ACTIONS(75),
    [anon_sym_PERCENTpre] = ACTIONS(77),
    [anon_sym_PERCENTpost] = ACTIONS(77),
    [anon_sym_PERCENTpreun] = ACTIONS(77),
    [anon_sym_PERCENTpostun] = ACTIONS(77),
    [anon_sym_PERCENTpretrans] = ACTIONS(77),
    [anon_sym_PERCENTposttrans] = ACTIONS(77),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(77),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(77),
    [anon_sym_PERCENTverify] = ACTIONS(77),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(77),
    [anon_sym_PERCENTtriggerin] = ACTIONS(77),
    [anon_sym_PERCENTtriggerun] = ACTIONS(77),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(77),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(77),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(77),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(77),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(77),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(77),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(77),
    [anon_sym_PERCENTfiles] = ACTIONS(79),
    [anon_sym_PERCENTchangelog] = ACTIONS(81),
    [anon_sym_PERCENTglobal] = ACTIONS(83),
    [anon_sym_PERCENTdefine] = ACTIONS(83),
    [anon_sym_PERCENTundefine] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(89),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(91),
  },
  [4] = {
    [sym__top_level] = STATE(331),
    [sym_conditional] = STATE(6),
    [sym_preamble] = STATE(6),
    [sym_tags] = STATE(98),
    [sym_tag] = STATE(364),
    [sym_dependency_tag] = STATE(364),
    [sym_description] = STATE(6),
    [sym_subsection] = STATE(6),
    [sym_subsection_package] = STATE(224),
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
    [sym__macro_expansion] = STATE(6),
    [sym_simple_expansion] = STATE(6),
    [sym_full_expansion] = STATE(6),
    [sym_shell_expansion] = STATE(6),
    [aux_sym__top_level_repeat1] = STATE(6),
    [aux_sym__top_level_token1] = ACTIONS(57),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(59),
    [anon_sym_PERCENTifarch] = ACTIONS(59),
    [anon_sym_PERCENTifos] = ACTIONS(59),
    [anon_sym_PERCENTifnarch] = ACTIONS(59),
    [anon_sym_PERCENTifnos] = ACTIONS(59),
    [anon_sym_AutoProv] = ACTIONS(11),
    [anon_sym_AutoReq] = ACTIONS(11),
    [anon_sym_AutoReqProv] = ACTIONS(11),
    [anon_sym_BugUrl] = ACTIONS(11),
    [anon_sym_BuildRoot] = ACTIONS(11),
    [anon_sym_BuildSystem] = ACTIONS(11),
    [anon_sym_DistTag] = ACTIONS(11),
    [anon_sym_Distribution] = ACTIONS(11),
    [anon_sym_Epoch] = ACTIONS(11),
    [anon_sym_Group] = ACTIONS(11),
    [anon_sym_License] = ACTIONS(11),
    [anon_sym_ModularityLabel] = ACTIONS(11),
    [anon_sym_Name] = ACTIONS(11),
    [anon_sym_NoPatch] = ACTIONS(11),
    [anon_sym_NoSource] = ACTIONS(11),
    [anon_sym_Packager] = ACTIONS(11),
    [anon_sym_Release] = ACTIONS(11),
    [anon_sym_SourceLicense] = ACTIONS(11),
    [anon_sym_Summary] = ACTIONS(11),
    [anon_sym_URL] = ACTIONS(11),
    [anon_sym_Url] = ACTIONS(11),
    [anon_sym_VCS] = ACTIONS(11),
    [anon_sym_Vendor] = ACTIONS(11),
    [anon_sym_Version] = ACTIONS(11),
    [aux_sym_tag_token1] = ACTIONS(11),
    [aux_sym_tag_token2] = ACTIONS(11),
    [anon_sym_Requires] = ACTIONS(13),
    [anon_sym_BuildArch] = ACTIONS(15),
    [anon_sym_BuildArchitectures] = ACTIONS(15),
    [anon_sym_BuildConflicts] = ACTIONS(15),
    [anon_sym_BuildPrereq] = ACTIONS(15),
    [anon_sym_BuildRequires] = ACTIONS(15),
    [anon_sym_Conflicts] = ACTIONS(15),
    [anon_sym_DocDir] = ACTIONS(15),
    [anon_sym_Enhances] = ACTIONS(15),
    [anon_sym_ExcludeArch] = ACTIONS(15),
    [anon_sym_ExcludeOS] = ACTIONS(15),
    [anon_sym_ExclusiveArch] = ACTIONS(15),
    [anon_sym_ExclusiveOS] = ACTIONS(15),
    [anon_sym_Obsoletes] = ACTIONS(15),
    [anon_sym_OrderWithRequires] = ACTIONS(15),
    [anon_sym_Prefix] = ACTIONS(15),
    [anon_sym_Prefixes] = ACTIONS(15),
    [anon_sym_Prereq] = ACTIONS(15),
    [anon_sym_Provides] = ACTIONS(15),
    [anon_sym_Recommends] = ACTIONS(15),
    [anon_sym_RemovePathPostfixes] = ACTIONS(15),
    [anon_sym_Suggests] = ACTIONS(15),
    [anon_sym_Supplements] = ACTIONS(15),
    [anon_sym_PERCENTdescription] = ACTIONS(61),
    [anon_sym_PERCENTpackage] = ACTIONS(19),
    [anon_sym_PERCENTprep] = ACTIONS(63),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(65),
    [anon_sym_PERCENTconf] = ACTIONS(67),
    [anon_sym_PERCENTbuild] = ACTIONS(69),
    [anon_sym_PERCENTinstall] = ACTIONS(71),
    [anon_sym_PERCENTcheck] = ACTIONS(73),
    [anon_sym_PERCENTclean] = ACTIONS(75),
    [anon_sym_PERCENTpre] = ACTIONS(77),
    [anon_sym_PERCENTpost] = ACTIONS(77),
    [anon_sym_PERCENTpreun] = ACTIONS(77),
    [anon_sym_PERCENTpostun] = ACTIONS(77),
    [anon_sym_PERCENTpretrans] = ACTIONS(77),
    [anon_sym_PERCENTposttrans] = ACTIONS(77),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(77),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(77),
    [anon_sym_PERCENTverify] = ACTIONS(77),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(77),
    [anon_sym_PERCENTtriggerin] = ACTIONS(77),
    [anon_sym_PERCENTtriggerun] = ACTIONS(77),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(77),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(77),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(77),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(77),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(77),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(77),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(77),
    [anon_sym_PERCENTfiles] = ACTIONS(79),
    [anon_sym_PERCENTchangelog] = ACTIONS(81),
    [anon_sym_PERCENTglobal] = ACTIONS(83),
    [anon_sym_PERCENTdefine] = ACTIONS(83),
    [anon_sym_PERCENTundefine] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(89),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(91),
  },
  [5] = {
    [sym_conditional] = STATE(5),
    [sym_preamble] = STATE(5),
    [sym_tags] = STATE(97),
    [sym_tag] = STATE(272),
    [sym_dependency_tag] = STATE(272),
    [sym_description] = STATE(5),
    [sym_subsection] = STATE(5),
    [sym_subsection_package] = STATE(217),
    [sym_prep_scriptlet] = STATE(5),
    [sym_generate_buildrequires] = STATE(5),
    [sym_conf_scriptlet] = STATE(5),
    [sym_build_scriptlet] = STATE(5),
    [sym_install_scriptlet] = STATE(5),
    [sym_check_scriptlet] = STATE(5),
    [sym_clean_scriptlet] = STATE(5),
    [sym__runtime_scriptlet] = STATE(5),
    [sym__triggers] = STATE(5),
    [sym__file_triggers] = STATE(5),
    [sym_files] = STATE(5),
    [sym_changelog] = STATE(5),
    [sym_macro_definition] = STATE(5),
    [sym_macro_undefinition] = STATE(5),
    [sym__macro_expansion] = STATE(5),
    [sym_simple_expansion] = STATE(5),
    [sym_full_expansion] = STATE(5),
    [sym_shell_expansion] = STATE(5),
    [aux_sym__top_level_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(93),
    [aux_sym__top_level_token1] = ACTIONS(95),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(98),
    [anon_sym_PERCENTifarch] = ACTIONS(98),
    [anon_sym_PERCENTifos] = ACTIONS(98),
    [anon_sym_PERCENTifnarch] = ACTIONS(98),
    [anon_sym_PERCENTifnos] = ACTIONS(98),
    [anon_sym_AutoProv] = ACTIONS(101),
    [anon_sym_AutoReq] = ACTIONS(101),
    [anon_sym_AutoReqProv] = ACTIONS(101),
    [anon_sym_BugUrl] = ACTIONS(101),
    [anon_sym_BuildRoot] = ACTIONS(101),
    [anon_sym_BuildSystem] = ACTIONS(101),
    [anon_sym_DistTag] = ACTIONS(101),
    [anon_sym_Distribution] = ACTIONS(101),
    [anon_sym_Epoch] = ACTIONS(101),
    [anon_sym_Group] = ACTIONS(101),
    [anon_sym_License] = ACTIONS(101),
    [anon_sym_ModularityLabel] = ACTIONS(101),
    [anon_sym_Name] = ACTIONS(101),
    [anon_sym_NoPatch] = ACTIONS(101),
    [anon_sym_NoSource] = ACTIONS(101),
    [anon_sym_Packager] = ACTIONS(101),
    [anon_sym_Release] = ACTIONS(101),
    [anon_sym_SourceLicense] = ACTIONS(101),
    [anon_sym_Summary] = ACTIONS(101),
    [anon_sym_URL] = ACTIONS(101),
    [anon_sym_Url] = ACTIONS(101),
    [anon_sym_VCS] = ACTIONS(101),
    [anon_sym_Vendor] = ACTIONS(101),
    [anon_sym_Version] = ACTIONS(101),
    [aux_sym_tag_token1] = ACTIONS(101),
    [aux_sym_tag_token2] = ACTIONS(101),
    [anon_sym_Requires] = ACTIONS(104),
    [anon_sym_BuildArch] = ACTIONS(107),
    [anon_sym_BuildArchitectures] = ACTIONS(107),
    [anon_sym_BuildConflicts] = ACTIONS(107),
    [anon_sym_BuildPrereq] = ACTIONS(107),
    [anon_sym_BuildRequires] = ACTIONS(107),
    [anon_sym_Conflicts] = ACTIONS(107),
    [anon_sym_DocDir] = ACTIONS(107),
    [anon_sym_Enhances] = ACTIONS(107),
    [anon_sym_ExcludeArch] = ACTIONS(107),
    [anon_sym_ExcludeOS] = ACTIONS(107),
    [anon_sym_ExclusiveArch] = ACTIONS(107),
    [anon_sym_ExclusiveOS] = ACTIONS(107),
    [anon_sym_Obsoletes] = ACTIONS(107),
    [anon_sym_OrderWithRequires] = ACTIONS(107),
    [anon_sym_Prefix] = ACTIONS(107),
    [anon_sym_Prefixes] = ACTIONS(107),
    [anon_sym_Prereq] = ACTIONS(107),
    [anon_sym_Provides] = ACTIONS(107),
    [anon_sym_Recommends] = ACTIONS(107),
    [anon_sym_RemovePathPostfixes] = ACTIONS(107),
    [anon_sym_Suggests] = ACTIONS(107),
    [anon_sym_Supplements] = ACTIONS(107),
    [anon_sym_PERCENTdescription] = ACTIONS(110),
    [anon_sym_PERCENTpackage] = ACTIONS(113),
    [anon_sym_PERCENTprep] = ACTIONS(116),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(119),
    [anon_sym_PERCENTconf] = ACTIONS(122),
    [anon_sym_PERCENTbuild] = ACTIONS(125),
    [anon_sym_PERCENTinstall] = ACTIONS(128),
    [anon_sym_PERCENTcheck] = ACTIONS(131),
    [anon_sym_PERCENTclean] = ACTIONS(134),
    [anon_sym_PERCENTpre] = ACTIONS(137),
    [anon_sym_PERCENTpost] = ACTIONS(137),
    [anon_sym_PERCENTpreun] = ACTIONS(137),
    [anon_sym_PERCENTpostun] = ACTIONS(137),
    [anon_sym_PERCENTpretrans] = ACTIONS(137),
    [anon_sym_PERCENTposttrans] = ACTIONS(137),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(137),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(137),
    [anon_sym_PERCENTverify] = ACTIONS(137),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(137),
    [anon_sym_PERCENTtriggerin] = ACTIONS(137),
    [anon_sym_PERCENTtriggerun] = ACTIONS(137),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(137),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(137),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(137),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(137),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(137),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(137),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(137),
    [anon_sym_PERCENTfiles] = ACTIONS(140),
    [anon_sym_PERCENTchangelog] = ACTIONS(143),
    [anon_sym_PERCENTglobal] = ACTIONS(146),
    [anon_sym_PERCENTdefine] = ACTIONS(146),
    [anon_sym_PERCENTundefine] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(152),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(155),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(158),
  },
  [6] = {
    [sym_conditional] = STATE(7),
    [sym_preamble] = STATE(7),
    [sym_tags] = STATE(98),
    [sym_tag] = STATE(364),
    [sym_dependency_tag] = STATE(364),
    [sym_description] = STATE(7),
    [sym_subsection] = STATE(7),
    [sym_subsection_package] = STATE(224),
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
    [sym__macro_expansion] = STATE(7),
    [sym_simple_expansion] = STATE(7),
    [sym_full_expansion] = STATE(7),
    [sym_shell_expansion] = STATE(7),
    [aux_sym__top_level_repeat1] = STATE(7),
    [aux_sym__top_level_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(59),
    [anon_sym_PERCENTifarch] = ACTIONS(59),
    [anon_sym_PERCENTifos] = ACTIONS(59),
    [anon_sym_PERCENTifnarch] = ACTIONS(59),
    [anon_sym_PERCENTifnos] = ACTIONS(59),
    [anon_sym_PERCENTendif] = ACTIONS(163),
    [anon_sym_AutoProv] = ACTIONS(11),
    [anon_sym_AutoReq] = ACTIONS(11),
    [anon_sym_AutoReqProv] = ACTIONS(11),
    [anon_sym_BugUrl] = ACTIONS(11),
    [anon_sym_BuildRoot] = ACTIONS(11),
    [anon_sym_BuildSystem] = ACTIONS(11),
    [anon_sym_DistTag] = ACTIONS(11),
    [anon_sym_Distribution] = ACTIONS(11),
    [anon_sym_Epoch] = ACTIONS(11),
    [anon_sym_Group] = ACTIONS(11),
    [anon_sym_License] = ACTIONS(11),
    [anon_sym_ModularityLabel] = ACTIONS(11),
    [anon_sym_Name] = ACTIONS(11),
    [anon_sym_NoPatch] = ACTIONS(11),
    [anon_sym_NoSource] = ACTIONS(11),
    [anon_sym_Packager] = ACTIONS(11),
    [anon_sym_Release] = ACTIONS(11),
    [anon_sym_SourceLicense] = ACTIONS(11),
    [anon_sym_Summary] = ACTIONS(11),
    [anon_sym_URL] = ACTIONS(11),
    [anon_sym_Url] = ACTIONS(11),
    [anon_sym_VCS] = ACTIONS(11),
    [anon_sym_Vendor] = ACTIONS(11),
    [anon_sym_Version] = ACTIONS(11),
    [aux_sym_tag_token1] = ACTIONS(11),
    [aux_sym_tag_token2] = ACTIONS(11),
    [anon_sym_Requires] = ACTIONS(13),
    [anon_sym_BuildArch] = ACTIONS(15),
    [anon_sym_BuildArchitectures] = ACTIONS(15),
    [anon_sym_BuildConflicts] = ACTIONS(15),
    [anon_sym_BuildPrereq] = ACTIONS(15),
    [anon_sym_BuildRequires] = ACTIONS(15),
    [anon_sym_Conflicts] = ACTIONS(15),
    [anon_sym_DocDir] = ACTIONS(15),
    [anon_sym_Enhances] = ACTIONS(15),
    [anon_sym_ExcludeArch] = ACTIONS(15),
    [anon_sym_ExcludeOS] = ACTIONS(15),
    [anon_sym_ExclusiveArch] = ACTIONS(15),
    [anon_sym_ExclusiveOS] = ACTIONS(15),
    [anon_sym_Obsoletes] = ACTIONS(15),
    [anon_sym_OrderWithRequires] = ACTIONS(15),
    [anon_sym_Prefix] = ACTIONS(15),
    [anon_sym_Prefixes] = ACTIONS(15),
    [anon_sym_Prereq] = ACTIONS(15),
    [anon_sym_Provides] = ACTIONS(15),
    [anon_sym_Recommends] = ACTIONS(15),
    [anon_sym_RemovePathPostfixes] = ACTIONS(15),
    [anon_sym_Suggests] = ACTIONS(15),
    [anon_sym_Supplements] = ACTIONS(15),
    [anon_sym_PERCENTdescription] = ACTIONS(61),
    [anon_sym_PERCENTpackage] = ACTIONS(19),
    [anon_sym_PERCENTprep] = ACTIONS(63),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(65),
    [anon_sym_PERCENTconf] = ACTIONS(67),
    [anon_sym_PERCENTbuild] = ACTIONS(69),
    [anon_sym_PERCENTinstall] = ACTIONS(71),
    [anon_sym_PERCENTcheck] = ACTIONS(73),
    [anon_sym_PERCENTclean] = ACTIONS(75),
    [anon_sym_PERCENTpre] = ACTIONS(165),
    [anon_sym_PERCENTpost] = ACTIONS(165),
    [anon_sym_PERCENTpreun] = ACTIONS(165),
    [anon_sym_PERCENTpostun] = ACTIONS(165),
    [anon_sym_PERCENTpretrans] = ACTIONS(165),
    [anon_sym_PERCENTposttrans] = ACTIONS(165),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(165),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(165),
    [anon_sym_PERCENTverify] = ACTIONS(165),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(165),
    [anon_sym_PERCENTtriggerin] = ACTIONS(165),
    [anon_sym_PERCENTtriggerun] = ACTIONS(165),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(165),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(165),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(165),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(165),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(165),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(165),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(165),
    [anon_sym_PERCENTfiles] = ACTIONS(79),
    [anon_sym_PERCENTchangelog] = ACTIONS(81),
    [anon_sym_PERCENTglobal] = ACTIONS(83),
    [anon_sym_PERCENTdefine] = ACTIONS(83),
    [anon_sym_PERCENTundefine] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(89),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(91),
  },
  [7] = {
    [sym_conditional] = STATE(7),
    [sym_preamble] = STATE(7),
    [sym_tags] = STATE(98),
    [sym_tag] = STATE(364),
    [sym_dependency_tag] = STATE(364),
    [sym_description] = STATE(7),
    [sym_subsection] = STATE(7),
    [sym_subsection_package] = STATE(224),
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
    [sym__macro_expansion] = STATE(7),
    [sym_simple_expansion] = STATE(7),
    [sym_full_expansion] = STATE(7),
    [sym_shell_expansion] = STATE(7),
    [aux_sym__top_level_repeat1] = STATE(7),
    [aux_sym__top_level_token1] = ACTIONS(167),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(170),
    [anon_sym_PERCENTifarch] = ACTIONS(170),
    [anon_sym_PERCENTifos] = ACTIONS(170),
    [anon_sym_PERCENTifnarch] = ACTIONS(170),
    [anon_sym_PERCENTifnos] = ACTIONS(170),
    [anon_sym_PERCENTendif] = ACTIONS(173),
    [anon_sym_AutoProv] = ACTIONS(101),
    [anon_sym_AutoReq] = ACTIONS(101),
    [anon_sym_AutoReqProv] = ACTIONS(101),
    [anon_sym_BugUrl] = ACTIONS(101),
    [anon_sym_BuildRoot] = ACTIONS(101),
    [anon_sym_BuildSystem] = ACTIONS(101),
    [anon_sym_DistTag] = ACTIONS(101),
    [anon_sym_Distribution] = ACTIONS(101),
    [anon_sym_Epoch] = ACTIONS(101),
    [anon_sym_Group] = ACTIONS(101),
    [anon_sym_License] = ACTIONS(101),
    [anon_sym_ModularityLabel] = ACTIONS(101),
    [anon_sym_Name] = ACTIONS(101),
    [anon_sym_NoPatch] = ACTIONS(101),
    [anon_sym_NoSource] = ACTIONS(101),
    [anon_sym_Packager] = ACTIONS(101),
    [anon_sym_Release] = ACTIONS(101),
    [anon_sym_SourceLicense] = ACTIONS(101),
    [anon_sym_Summary] = ACTIONS(101),
    [anon_sym_URL] = ACTIONS(101),
    [anon_sym_Url] = ACTIONS(101),
    [anon_sym_VCS] = ACTIONS(101),
    [anon_sym_Vendor] = ACTIONS(101),
    [anon_sym_Version] = ACTIONS(101),
    [aux_sym_tag_token1] = ACTIONS(101),
    [aux_sym_tag_token2] = ACTIONS(101),
    [anon_sym_Requires] = ACTIONS(104),
    [anon_sym_BuildArch] = ACTIONS(107),
    [anon_sym_BuildArchitectures] = ACTIONS(107),
    [anon_sym_BuildConflicts] = ACTIONS(107),
    [anon_sym_BuildPrereq] = ACTIONS(107),
    [anon_sym_BuildRequires] = ACTIONS(107),
    [anon_sym_Conflicts] = ACTIONS(107),
    [anon_sym_DocDir] = ACTIONS(107),
    [anon_sym_Enhances] = ACTIONS(107),
    [anon_sym_ExcludeArch] = ACTIONS(107),
    [anon_sym_ExcludeOS] = ACTIONS(107),
    [anon_sym_ExclusiveArch] = ACTIONS(107),
    [anon_sym_ExclusiveOS] = ACTIONS(107),
    [anon_sym_Obsoletes] = ACTIONS(107),
    [anon_sym_OrderWithRequires] = ACTIONS(107),
    [anon_sym_Prefix] = ACTIONS(107),
    [anon_sym_Prefixes] = ACTIONS(107),
    [anon_sym_Prereq] = ACTIONS(107),
    [anon_sym_Provides] = ACTIONS(107),
    [anon_sym_Recommends] = ACTIONS(107),
    [anon_sym_RemovePathPostfixes] = ACTIONS(107),
    [anon_sym_Suggests] = ACTIONS(107),
    [anon_sym_Supplements] = ACTIONS(107),
    [anon_sym_PERCENTdescription] = ACTIONS(175),
    [anon_sym_PERCENTpackage] = ACTIONS(113),
    [anon_sym_PERCENTprep] = ACTIONS(178),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(181),
    [anon_sym_PERCENTconf] = ACTIONS(184),
    [anon_sym_PERCENTbuild] = ACTIONS(187),
    [anon_sym_PERCENTinstall] = ACTIONS(190),
    [anon_sym_PERCENTcheck] = ACTIONS(193),
    [anon_sym_PERCENTclean] = ACTIONS(196),
    [anon_sym_PERCENTpre] = ACTIONS(199),
    [anon_sym_PERCENTpost] = ACTIONS(199),
    [anon_sym_PERCENTpreun] = ACTIONS(199),
    [anon_sym_PERCENTpostun] = ACTIONS(199),
    [anon_sym_PERCENTpretrans] = ACTIONS(199),
    [anon_sym_PERCENTposttrans] = ACTIONS(199),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(199),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(199),
    [anon_sym_PERCENTverify] = ACTIONS(199),
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
    [anon_sym_PERCENTfiles] = ACTIONS(202),
    [anon_sym_PERCENTchangelog] = ACTIONS(205),
    [anon_sym_PERCENTglobal] = ACTIONS(208),
    [anon_sym_PERCENTdefine] = ACTIONS(208),
    [anon_sym_PERCENTundefine] = ACTIONS(211),
    [anon_sym_PERCENT] = ACTIONS(214),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(217),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(220),
  },
  [8] = {
    [sym_conditional_files] = STATE(15),
    [sym_defattr] = STATE(15),
    [sym_file] = STATE(15),
    [sym_attr] = STATE(126),
    [sym_verify] = STATE(146),
    [sym_string] = STATE(269),
    [sym__macro_expansion] = STATE(148),
    [sym_simple_expansion] = STATE(148),
    [sym_full_expansion] = STATE(148),
    [sym_shell_expansion] = STATE(148),
    [aux_sym_files_repeat1] = STATE(15),
    [aux_sym_string_repeat1] = STATE(148),
    [aux_sym__top_level_token1] = ACTIONS(223),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(225),
    [anon_sym_PERCENTifarch] = ACTIONS(225),
    [anon_sym_PERCENTifos] = ACTIONS(225),
    [anon_sym_PERCENTifnarch] = ACTIONS(223),
    [anon_sym_PERCENTifnos] = ACTIONS(223),
    [anon_sym_PERCENTendif] = ACTIONS(223),
    [anon_sym_AutoProv] = ACTIONS(223),
    [anon_sym_AutoReq] = ACTIONS(223),
    [anon_sym_AutoReqProv] = ACTIONS(223),
    [anon_sym_BugUrl] = ACTIONS(223),
    [anon_sym_BuildRoot] = ACTIONS(223),
    [anon_sym_BuildSystem] = ACTIONS(223),
    [anon_sym_DistTag] = ACTIONS(223),
    [anon_sym_Distribution] = ACTIONS(223),
    [anon_sym_Epoch] = ACTIONS(223),
    [anon_sym_Group] = ACTIONS(223),
    [anon_sym_License] = ACTIONS(223),
    [anon_sym_ModularityLabel] = ACTIONS(223),
    [anon_sym_Name] = ACTIONS(223),
    [anon_sym_NoPatch] = ACTIONS(223),
    [anon_sym_NoSource] = ACTIONS(223),
    [anon_sym_Packager] = ACTIONS(223),
    [anon_sym_Release] = ACTIONS(223),
    [anon_sym_SourceLicense] = ACTIONS(223),
    [anon_sym_Summary] = ACTIONS(223),
    [anon_sym_URL] = ACTIONS(223),
    [anon_sym_Url] = ACTIONS(223),
    [anon_sym_VCS] = ACTIONS(223),
    [anon_sym_Vendor] = ACTIONS(223),
    [anon_sym_Version] = ACTIONS(223),
    [aux_sym_tag_token1] = ACTIONS(223),
    [aux_sym_tag_token2] = ACTIONS(223),
    [anon_sym_Requires] = ACTIONS(223),
    [anon_sym_BuildArch] = ACTIONS(223),
    [anon_sym_BuildArchitectures] = ACTIONS(223),
    [anon_sym_BuildConflicts] = ACTIONS(223),
    [anon_sym_BuildPrereq] = ACTIONS(223),
    [anon_sym_BuildRequires] = ACTIONS(223),
    [anon_sym_Conflicts] = ACTIONS(223),
    [anon_sym_DocDir] = ACTIONS(223),
    [anon_sym_Enhances] = ACTIONS(223),
    [anon_sym_ExcludeArch] = ACTIONS(223),
    [anon_sym_ExcludeOS] = ACTIONS(223),
    [anon_sym_ExclusiveArch] = ACTIONS(223),
    [anon_sym_ExclusiveOS] = ACTIONS(223),
    [anon_sym_Obsoletes] = ACTIONS(223),
    [anon_sym_OrderWithRequires] = ACTIONS(223),
    [anon_sym_Prefix] = ACTIONS(223),
    [anon_sym_Prefixes] = ACTIONS(223),
    [anon_sym_Prereq] = ACTIONS(223),
    [anon_sym_Provides] = ACTIONS(223),
    [anon_sym_Recommends] = ACTIONS(223),
    [anon_sym_RemovePathPostfixes] = ACTIONS(223),
    [anon_sym_Suggests] = ACTIONS(223),
    [anon_sym_Supplements] = ACTIONS(223),
    [anon_sym_PERCENTdescription] = ACTIONS(223),
    [anon_sym_PERCENTpackage] = ACTIONS(223),
    [anon_sym_PERCENTprep] = ACTIONS(223),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(223),
    [anon_sym_PERCENTconf] = ACTIONS(223),
    [anon_sym_PERCENTbuild] = ACTIONS(223),
    [anon_sym_PERCENTinstall] = ACTIONS(223),
    [anon_sym_PERCENTcheck] = ACTIONS(223),
    [anon_sym_PERCENTclean] = ACTIONS(223),
    [anon_sym_PERCENTpre] = ACTIONS(223),
    [anon_sym_PERCENTpost] = ACTIONS(223),
    [anon_sym_PERCENTpreun] = ACTIONS(223),
    [anon_sym_PERCENTpostun] = ACTIONS(223),
    [anon_sym_PERCENTpretrans] = ACTIONS(223),
    [anon_sym_PERCENTposttrans] = ACTIONS(223),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(223),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(223),
    [anon_sym_PERCENTverify] = ACTIONS(227),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(223),
    [anon_sym_PERCENTtriggerin] = ACTIONS(223),
    [anon_sym_PERCENTtriggerun] = ACTIONS(223),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(223),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(223),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(223),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(223),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(223),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(223),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(223),
    [anon_sym_PERCENTfiles] = ACTIONS(223),
    [anon_sym_PERCENTdefattr] = ACTIONS(229),
    [anon_sym_PERCENTartifact] = ACTIONS(231),
    [anon_sym_PERCENTconfig] = ACTIONS(231),
    [anon_sym_PERCENTdir] = ACTIONS(231),
    [anon_sym_PERCENTdoc] = ACTIONS(231),
    [anon_sym_PERCENTdocdir] = ACTIONS(231),
    [anon_sym_PERCENTghost] = ACTIONS(231),
    [anon_sym_PERCENTlicense] = ACTIONS(231),
    [anon_sym_PERCENTmissingok] = ACTIONS(231),
    [anon_sym_PERCENTreadme] = ACTIONS(231),
    [anon_sym_PERCENTattr] = ACTIONS(233),
    [anon_sym_PERCENTchangelog] = ACTIONS(223),
    [anon_sym_PERCENTglobal] = ACTIONS(223),
    [anon_sym_PERCENTdefine] = ACTIONS(223),
    [anon_sym_PERCENTundefine] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(235),
    [sym_string_content] = ACTIONS(237),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(239),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(241),
  },
  [9] = {
    [sym_conditional_files] = STATE(8),
    [sym_defattr] = STATE(8),
    [sym_file] = STATE(8),
    [sym_attr] = STATE(126),
    [sym_verify] = STATE(146),
    [sym_string] = STATE(269),
    [sym__macro_expansion] = STATE(148),
    [sym_simple_expansion] = STATE(148),
    [sym_full_expansion] = STATE(148),
    [sym_shell_expansion] = STATE(148),
    [aux_sym_files_repeat1] = STATE(8),
    [aux_sym_string_repeat1] = STATE(148),
    [aux_sym__top_level_token1] = ACTIONS(243),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(225),
    [anon_sym_PERCENTifarch] = ACTIONS(225),
    [anon_sym_PERCENTifos] = ACTIONS(225),
    [anon_sym_PERCENTifnarch] = ACTIONS(243),
    [anon_sym_PERCENTifnos] = ACTIONS(243),
    [anon_sym_PERCENTendif] = ACTIONS(243),
    [anon_sym_AutoProv] = ACTIONS(243),
    [anon_sym_AutoReq] = ACTIONS(243),
    [anon_sym_AutoReqProv] = ACTIONS(243),
    [anon_sym_BugUrl] = ACTIONS(243),
    [anon_sym_BuildRoot] = ACTIONS(243),
    [anon_sym_BuildSystem] = ACTIONS(243),
    [anon_sym_DistTag] = ACTIONS(243),
    [anon_sym_Distribution] = ACTIONS(243),
    [anon_sym_Epoch] = ACTIONS(243),
    [anon_sym_Group] = ACTIONS(243),
    [anon_sym_License] = ACTIONS(243),
    [anon_sym_ModularityLabel] = ACTIONS(243),
    [anon_sym_Name] = ACTIONS(243),
    [anon_sym_NoPatch] = ACTIONS(243),
    [anon_sym_NoSource] = ACTIONS(243),
    [anon_sym_Packager] = ACTIONS(243),
    [anon_sym_Release] = ACTIONS(243),
    [anon_sym_SourceLicense] = ACTIONS(243),
    [anon_sym_Summary] = ACTIONS(243),
    [anon_sym_URL] = ACTIONS(243),
    [anon_sym_Url] = ACTIONS(243),
    [anon_sym_VCS] = ACTIONS(243),
    [anon_sym_Vendor] = ACTIONS(243),
    [anon_sym_Version] = ACTIONS(243),
    [aux_sym_tag_token1] = ACTIONS(243),
    [aux_sym_tag_token2] = ACTIONS(243),
    [anon_sym_Requires] = ACTIONS(243),
    [anon_sym_BuildArch] = ACTIONS(243),
    [anon_sym_BuildArchitectures] = ACTIONS(243),
    [anon_sym_BuildConflicts] = ACTIONS(243),
    [anon_sym_BuildPrereq] = ACTIONS(243),
    [anon_sym_BuildRequires] = ACTIONS(243),
    [anon_sym_Conflicts] = ACTIONS(243),
    [anon_sym_DocDir] = ACTIONS(243),
    [anon_sym_Enhances] = ACTIONS(243),
    [anon_sym_ExcludeArch] = ACTIONS(243),
    [anon_sym_ExcludeOS] = ACTIONS(243),
    [anon_sym_ExclusiveArch] = ACTIONS(243),
    [anon_sym_ExclusiveOS] = ACTIONS(243),
    [anon_sym_Obsoletes] = ACTIONS(243),
    [anon_sym_OrderWithRequires] = ACTIONS(243),
    [anon_sym_Prefix] = ACTIONS(243),
    [anon_sym_Prefixes] = ACTIONS(243),
    [anon_sym_Prereq] = ACTIONS(243),
    [anon_sym_Provides] = ACTIONS(243),
    [anon_sym_Recommends] = ACTIONS(243),
    [anon_sym_RemovePathPostfixes] = ACTIONS(243),
    [anon_sym_Suggests] = ACTIONS(243),
    [anon_sym_Supplements] = ACTIONS(243),
    [anon_sym_PERCENTdescription] = ACTIONS(243),
    [anon_sym_PERCENTpackage] = ACTIONS(243),
    [anon_sym_PERCENTprep] = ACTIONS(243),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(243),
    [anon_sym_PERCENTconf] = ACTIONS(243),
    [anon_sym_PERCENTbuild] = ACTIONS(243),
    [anon_sym_PERCENTinstall] = ACTIONS(243),
    [anon_sym_PERCENTcheck] = ACTIONS(243),
    [anon_sym_PERCENTclean] = ACTIONS(243),
    [anon_sym_PERCENTpre] = ACTIONS(243),
    [anon_sym_PERCENTpost] = ACTIONS(243),
    [anon_sym_PERCENTpreun] = ACTIONS(243),
    [anon_sym_PERCENTpostun] = ACTIONS(243),
    [anon_sym_PERCENTpretrans] = ACTIONS(243),
    [anon_sym_PERCENTposttrans] = ACTIONS(243),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(243),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(243),
    [anon_sym_PERCENTverify] = ACTIONS(227),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(243),
    [anon_sym_PERCENTtriggerin] = ACTIONS(243),
    [anon_sym_PERCENTtriggerun] = ACTIONS(243),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(243),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(243),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(243),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(243),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(243),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(243),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(243),
    [anon_sym_PERCENTfiles] = ACTIONS(243),
    [anon_sym_PERCENTdefattr] = ACTIONS(229),
    [anon_sym_PERCENTartifact] = ACTIONS(231),
    [anon_sym_PERCENTconfig] = ACTIONS(231),
    [anon_sym_PERCENTdir] = ACTIONS(231),
    [anon_sym_PERCENTdoc] = ACTIONS(231),
    [anon_sym_PERCENTdocdir] = ACTIONS(231),
    [anon_sym_PERCENTghost] = ACTIONS(231),
    [anon_sym_PERCENTlicense] = ACTIONS(231),
    [anon_sym_PERCENTmissingok] = ACTIONS(231),
    [anon_sym_PERCENTreadme] = ACTIONS(231),
    [anon_sym_PERCENTattr] = ACTIONS(233),
    [anon_sym_PERCENTchangelog] = ACTIONS(243),
    [anon_sym_PERCENTglobal] = ACTIONS(243),
    [anon_sym_PERCENTdefine] = ACTIONS(243),
    [anon_sym_PERCENTundefine] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(235),
    [sym_string_content] = ACTIONS(237),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(239),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(241),
  },
  [10] = {
    [sym_conditional_files] = STATE(12),
    [sym_defattr] = STATE(12),
    [sym_file] = STATE(12),
    [sym_attr] = STATE(125),
    [sym_verify] = STATE(161),
    [sym_string] = STATE(243),
    [sym__macro_expansion] = STATE(148),
    [sym_simple_expansion] = STATE(148),
    [sym_full_expansion] = STATE(148),
    [sym_shell_expansion] = STATE(148),
    [aux_sym_files_repeat1] = STATE(12),
    [aux_sym_string_repeat1] = STATE(148),
    [ts_builtin_sym_end] = ACTIONS(245),
    [aux_sym__top_level_token1] = ACTIONS(223),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(247),
    [anon_sym_PERCENTifarch] = ACTIONS(247),
    [anon_sym_PERCENTifos] = ACTIONS(247),
    [anon_sym_PERCENTifnarch] = ACTIONS(223),
    [anon_sym_PERCENTifnos] = ACTIONS(223),
    [anon_sym_AutoProv] = ACTIONS(223),
    [anon_sym_AutoReq] = ACTIONS(223),
    [anon_sym_AutoReqProv] = ACTIONS(223),
    [anon_sym_BugUrl] = ACTIONS(223),
    [anon_sym_BuildRoot] = ACTIONS(223),
    [anon_sym_BuildSystem] = ACTIONS(223),
    [anon_sym_DistTag] = ACTIONS(223),
    [anon_sym_Distribution] = ACTIONS(223),
    [anon_sym_Epoch] = ACTIONS(223),
    [anon_sym_Group] = ACTIONS(223),
    [anon_sym_License] = ACTIONS(223),
    [anon_sym_ModularityLabel] = ACTIONS(223),
    [anon_sym_Name] = ACTIONS(223),
    [anon_sym_NoPatch] = ACTIONS(223),
    [anon_sym_NoSource] = ACTIONS(223),
    [anon_sym_Packager] = ACTIONS(223),
    [anon_sym_Release] = ACTIONS(223),
    [anon_sym_SourceLicense] = ACTIONS(223),
    [anon_sym_Summary] = ACTIONS(223),
    [anon_sym_URL] = ACTIONS(223),
    [anon_sym_Url] = ACTIONS(223),
    [anon_sym_VCS] = ACTIONS(223),
    [anon_sym_Vendor] = ACTIONS(223),
    [anon_sym_Version] = ACTIONS(223),
    [aux_sym_tag_token1] = ACTIONS(223),
    [aux_sym_tag_token2] = ACTIONS(223),
    [anon_sym_Requires] = ACTIONS(223),
    [anon_sym_BuildArch] = ACTIONS(223),
    [anon_sym_BuildArchitectures] = ACTIONS(223),
    [anon_sym_BuildConflicts] = ACTIONS(223),
    [anon_sym_BuildPrereq] = ACTIONS(223),
    [anon_sym_BuildRequires] = ACTIONS(223),
    [anon_sym_Conflicts] = ACTIONS(223),
    [anon_sym_DocDir] = ACTIONS(223),
    [anon_sym_Enhances] = ACTIONS(223),
    [anon_sym_ExcludeArch] = ACTIONS(223),
    [anon_sym_ExcludeOS] = ACTIONS(223),
    [anon_sym_ExclusiveArch] = ACTIONS(223),
    [anon_sym_ExclusiveOS] = ACTIONS(223),
    [anon_sym_Obsoletes] = ACTIONS(223),
    [anon_sym_OrderWithRequires] = ACTIONS(223),
    [anon_sym_Prefix] = ACTIONS(223),
    [anon_sym_Prefixes] = ACTIONS(223),
    [anon_sym_Prereq] = ACTIONS(223),
    [anon_sym_Provides] = ACTIONS(223),
    [anon_sym_Recommends] = ACTIONS(223),
    [anon_sym_RemovePathPostfixes] = ACTIONS(223),
    [anon_sym_Suggests] = ACTIONS(223),
    [anon_sym_Supplements] = ACTIONS(223),
    [anon_sym_PERCENTdescription] = ACTIONS(223),
    [anon_sym_PERCENTpackage] = ACTIONS(223),
    [anon_sym_PERCENTprep] = ACTIONS(223),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(223),
    [anon_sym_PERCENTconf] = ACTIONS(223),
    [anon_sym_PERCENTbuild] = ACTIONS(223),
    [anon_sym_PERCENTinstall] = ACTIONS(223),
    [anon_sym_PERCENTcheck] = ACTIONS(223),
    [anon_sym_PERCENTclean] = ACTIONS(223),
    [anon_sym_PERCENTpre] = ACTIONS(223),
    [anon_sym_PERCENTpost] = ACTIONS(223),
    [anon_sym_PERCENTpreun] = ACTIONS(223),
    [anon_sym_PERCENTpostun] = ACTIONS(223),
    [anon_sym_PERCENTpretrans] = ACTIONS(223),
    [anon_sym_PERCENTposttrans] = ACTIONS(223),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(223),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(223),
    [anon_sym_PERCENTverify] = ACTIONS(227),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(223),
    [anon_sym_PERCENTtriggerin] = ACTIONS(223),
    [anon_sym_PERCENTtriggerun] = ACTIONS(223),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(223),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(223),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(223),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(223),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(223),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(223),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(223),
    [anon_sym_PERCENTfiles] = ACTIONS(223),
    [anon_sym_PERCENTdefattr] = ACTIONS(249),
    [anon_sym_PERCENTartifact] = ACTIONS(251),
    [anon_sym_PERCENTconfig] = ACTIONS(251),
    [anon_sym_PERCENTdir] = ACTIONS(251),
    [anon_sym_PERCENTdoc] = ACTIONS(251),
    [anon_sym_PERCENTdocdir] = ACTIONS(251),
    [anon_sym_PERCENTghost] = ACTIONS(251),
    [anon_sym_PERCENTlicense] = ACTIONS(251),
    [anon_sym_PERCENTmissingok] = ACTIONS(251),
    [anon_sym_PERCENTreadme] = ACTIONS(251),
    [anon_sym_PERCENTattr] = ACTIONS(233),
    [anon_sym_PERCENTchangelog] = ACTIONS(223),
    [anon_sym_PERCENTglobal] = ACTIONS(223),
    [anon_sym_PERCENTdefine] = ACTIONS(223),
    [anon_sym_PERCENTundefine] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(235),
    [sym_string_content] = ACTIONS(237),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(239),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(241),
  },
  [11] = {
    [sym_conditional_files] = STATE(15),
    [sym_defattr] = STATE(15),
    [sym_file] = STATE(15),
    [sym_attr] = STATE(126),
    [sym_verify] = STATE(146),
    [sym_string] = STATE(269),
    [sym__macro_expansion] = STATE(148),
    [sym_simple_expansion] = STATE(148),
    [sym_full_expansion] = STATE(148),
    [sym_shell_expansion] = STATE(148),
    [aux_sym_files_repeat1] = STATE(15),
    [aux_sym_string_repeat1] = STATE(148),
    [aux_sym__top_level_token1] = ACTIONS(253),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(225),
    [anon_sym_PERCENTifarch] = ACTIONS(225),
    [anon_sym_PERCENTifos] = ACTIONS(225),
    [anon_sym_PERCENTifnarch] = ACTIONS(253),
    [anon_sym_PERCENTifnos] = ACTIONS(253),
    [anon_sym_PERCENTendif] = ACTIONS(253),
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
    [anon_sym_PERCENTverify] = ACTIONS(227),
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
    [anon_sym_PERCENTdefattr] = ACTIONS(229),
    [anon_sym_PERCENTartifact] = ACTIONS(231),
    [anon_sym_PERCENTconfig] = ACTIONS(231),
    [anon_sym_PERCENTdir] = ACTIONS(231),
    [anon_sym_PERCENTdoc] = ACTIONS(231),
    [anon_sym_PERCENTdocdir] = ACTIONS(231),
    [anon_sym_PERCENTghost] = ACTIONS(231),
    [anon_sym_PERCENTlicense] = ACTIONS(231),
    [anon_sym_PERCENTmissingok] = ACTIONS(231),
    [anon_sym_PERCENTreadme] = ACTIONS(231),
    [anon_sym_PERCENTattr] = ACTIONS(233),
    [anon_sym_PERCENTchangelog] = ACTIONS(253),
    [anon_sym_PERCENTglobal] = ACTIONS(253),
    [anon_sym_PERCENTdefine] = ACTIONS(253),
    [anon_sym_PERCENTundefine] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(235),
    [sym_string_content] = ACTIONS(237),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(239),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(241),
  },
  [12] = {
    [sym_conditional_files] = STATE(12),
    [sym_defattr] = STATE(12),
    [sym_file] = STATE(12),
    [sym_attr] = STATE(125),
    [sym_verify] = STATE(161),
    [sym_string] = STATE(243),
    [sym__macro_expansion] = STATE(148),
    [sym_simple_expansion] = STATE(148),
    [sym_full_expansion] = STATE(148),
    [sym_shell_expansion] = STATE(148),
    [aux_sym_files_repeat1] = STATE(12),
    [aux_sym_string_repeat1] = STATE(148),
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym__top_level_token1] = ACTIONS(257),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(259),
    [anon_sym_PERCENTifarch] = ACTIONS(259),
    [anon_sym_PERCENTifos] = ACTIONS(259),
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
    [anon_sym_PERCENTverify] = ACTIONS(262),
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
    [anon_sym_PERCENTdefattr] = ACTIONS(265),
    [anon_sym_PERCENTartifact] = ACTIONS(268),
    [anon_sym_PERCENTconfig] = ACTIONS(268),
    [anon_sym_PERCENTdir] = ACTIONS(268),
    [anon_sym_PERCENTdoc] = ACTIONS(268),
    [anon_sym_PERCENTdocdir] = ACTIONS(268),
    [anon_sym_PERCENTghost] = ACTIONS(268),
    [anon_sym_PERCENTlicense] = ACTIONS(268),
    [anon_sym_PERCENTmissingok] = ACTIONS(268),
    [anon_sym_PERCENTreadme] = ACTIONS(268),
    [anon_sym_PERCENTattr] = ACTIONS(271),
    [anon_sym_PERCENTchangelog] = ACTIONS(257),
    [anon_sym_PERCENTglobal] = ACTIONS(257),
    [anon_sym_PERCENTdefine] = ACTIONS(257),
    [anon_sym_PERCENTundefine] = ACTIONS(257),
    [anon_sym_PERCENT] = ACTIONS(274),
    [sym_string_content] = ACTIONS(277),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(280),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(283),
  },
  [13] = {
    [sym_conditional_files] = STATE(19),
    [sym_defattr] = STATE(19),
    [sym_file] = STATE(19),
    [sym_attr] = STATE(125),
    [sym_verify] = STATE(161),
    [sym_string] = STATE(243),
    [sym__macro_expansion] = STATE(148),
    [sym_simple_expansion] = STATE(148),
    [sym_full_expansion] = STATE(148),
    [sym_shell_expansion] = STATE(148),
    [aux_sym_files_repeat1] = STATE(19),
    [aux_sym_string_repeat1] = STATE(148),
    [ts_builtin_sym_end] = ACTIONS(286),
    [aux_sym__top_level_token1] = ACTIONS(288),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(247),
    [anon_sym_PERCENTifarch] = ACTIONS(247),
    [anon_sym_PERCENTifos] = ACTIONS(247),
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
    [anon_sym_PERCENTverify] = ACTIONS(227),
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
    [anon_sym_PERCENTdefattr] = ACTIONS(249),
    [anon_sym_PERCENTartifact] = ACTIONS(251),
    [anon_sym_PERCENTconfig] = ACTIONS(251),
    [anon_sym_PERCENTdir] = ACTIONS(251),
    [anon_sym_PERCENTdoc] = ACTIONS(251),
    [anon_sym_PERCENTdocdir] = ACTIONS(251),
    [anon_sym_PERCENTghost] = ACTIONS(251),
    [anon_sym_PERCENTlicense] = ACTIONS(251),
    [anon_sym_PERCENTmissingok] = ACTIONS(251),
    [anon_sym_PERCENTreadme] = ACTIONS(251),
    [anon_sym_PERCENTattr] = ACTIONS(233),
    [anon_sym_PERCENTchangelog] = ACTIONS(288),
    [anon_sym_PERCENTglobal] = ACTIONS(288),
    [anon_sym_PERCENTdefine] = ACTIONS(288),
    [anon_sym_PERCENTundefine] = ACTIONS(288),
    [anon_sym_PERCENT] = ACTIONS(235),
    [sym_string_content] = ACTIONS(237),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(239),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(241),
  },
  [14] = {
    [sym_conditional_files] = STATE(11),
    [sym_defattr] = STATE(11),
    [sym_file] = STATE(11),
    [sym_attr] = STATE(126),
    [sym_verify] = STATE(146),
    [sym_string] = STATE(269),
    [sym__macro_expansion] = STATE(148),
    [sym_simple_expansion] = STATE(148),
    [sym_full_expansion] = STATE(148),
    [sym_shell_expansion] = STATE(148),
    [aux_sym_files_repeat1] = STATE(11),
    [aux_sym_string_repeat1] = STATE(148),
    [aux_sym__top_level_token1] = ACTIONS(288),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(225),
    [anon_sym_PERCENTifarch] = ACTIONS(225),
    [anon_sym_PERCENTifos] = ACTIONS(225),
    [anon_sym_PERCENTifnarch] = ACTIONS(288),
    [anon_sym_PERCENTifnos] = ACTIONS(288),
    [anon_sym_PERCENTendif] = ACTIONS(288),
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
    [anon_sym_PERCENTverify] = ACTIONS(227),
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
    [anon_sym_PERCENTdefattr] = ACTIONS(229),
    [anon_sym_PERCENTartifact] = ACTIONS(231),
    [anon_sym_PERCENTconfig] = ACTIONS(231),
    [anon_sym_PERCENTdir] = ACTIONS(231),
    [anon_sym_PERCENTdoc] = ACTIONS(231),
    [anon_sym_PERCENTdocdir] = ACTIONS(231),
    [anon_sym_PERCENTghost] = ACTIONS(231),
    [anon_sym_PERCENTlicense] = ACTIONS(231),
    [anon_sym_PERCENTmissingok] = ACTIONS(231),
    [anon_sym_PERCENTreadme] = ACTIONS(231),
    [anon_sym_PERCENTattr] = ACTIONS(233),
    [anon_sym_PERCENTchangelog] = ACTIONS(288),
    [anon_sym_PERCENTglobal] = ACTIONS(288),
    [anon_sym_PERCENTdefine] = ACTIONS(288),
    [anon_sym_PERCENTundefine] = ACTIONS(288),
    [anon_sym_PERCENT] = ACTIONS(235),
    [sym_string_content] = ACTIONS(237),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(239),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(241),
  },
  [15] = {
    [sym_conditional_files] = STATE(15),
    [sym_defattr] = STATE(15),
    [sym_file] = STATE(15),
    [sym_attr] = STATE(126),
    [sym_verify] = STATE(146),
    [sym_string] = STATE(269),
    [sym__macro_expansion] = STATE(148),
    [sym_simple_expansion] = STATE(148),
    [sym_full_expansion] = STATE(148),
    [sym_shell_expansion] = STATE(148),
    [aux_sym_files_repeat1] = STATE(15),
    [aux_sym_string_repeat1] = STATE(148),
    [aux_sym__top_level_token1] = ACTIONS(257),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(290),
    [anon_sym_PERCENTifarch] = ACTIONS(290),
    [anon_sym_PERCENTifos] = ACTIONS(290),
    [anon_sym_PERCENTifnarch] = ACTIONS(257),
    [anon_sym_PERCENTifnos] = ACTIONS(257),
    [anon_sym_PERCENTendif] = ACTIONS(257),
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
    [anon_sym_PERCENTverify] = ACTIONS(262),
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
    [anon_sym_PERCENTdefattr] = ACTIONS(293),
    [anon_sym_PERCENTartifact] = ACTIONS(296),
    [anon_sym_PERCENTconfig] = ACTIONS(296),
    [anon_sym_PERCENTdir] = ACTIONS(296),
    [anon_sym_PERCENTdoc] = ACTIONS(296),
    [anon_sym_PERCENTdocdir] = ACTIONS(296),
    [anon_sym_PERCENTghost] = ACTIONS(296),
    [anon_sym_PERCENTlicense] = ACTIONS(296),
    [anon_sym_PERCENTmissingok] = ACTIONS(296),
    [anon_sym_PERCENTreadme] = ACTIONS(296),
    [anon_sym_PERCENTattr] = ACTIONS(271),
    [anon_sym_PERCENTchangelog] = ACTIONS(257),
    [anon_sym_PERCENTglobal] = ACTIONS(257),
    [anon_sym_PERCENTdefine] = ACTIONS(257),
    [anon_sym_PERCENTundefine] = ACTIONS(257),
    [anon_sym_PERCENT] = ACTIONS(274),
    [sym_string_content] = ACTIONS(277),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(280),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(283),
  },
  [16] = {
    [sym_conditional_files] = STATE(20),
    [sym_defattr] = STATE(20),
    [sym_file] = STATE(20),
    [sym_attr] = STATE(126),
    [sym_verify] = STATE(146),
    [sym_string] = STATE(269),
    [sym__macro_expansion] = STATE(148),
    [sym_simple_expansion] = STATE(148),
    [sym_full_expansion] = STATE(148),
    [sym_shell_expansion] = STATE(148),
    [aux_sym_files_repeat1] = STATE(20),
    [aux_sym_string_repeat1] = STATE(148),
    [aux_sym__top_level_token1] = ACTIONS(299),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(225),
    [anon_sym_PERCENTifarch] = ACTIONS(225),
    [anon_sym_PERCENTifos] = ACTIONS(225),
    [anon_sym_PERCENTifnarch] = ACTIONS(299),
    [anon_sym_PERCENTifnos] = ACTIONS(299),
    [anon_sym_PERCENTendif] = ACTIONS(299),
    [anon_sym_AutoProv] = ACTIONS(299),
    [anon_sym_AutoReq] = ACTIONS(299),
    [anon_sym_AutoReqProv] = ACTIONS(299),
    [anon_sym_BugUrl] = ACTIONS(299),
    [anon_sym_BuildRoot] = ACTIONS(299),
    [anon_sym_BuildSystem] = ACTIONS(299),
    [anon_sym_DistTag] = ACTIONS(299),
    [anon_sym_Distribution] = ACTIONS(299),
    [anon_sym_Epoch] = ACTIONS(299),
    [anon_sym_Group] = ACTIONS(299),
    [anon_sym_License] = ACTIONS(299),
    [anon_sym_ModularityLabel] = ACTIONS(299),
    [anon_sym_Name] = ACTIONS(299),
    [anon_sym_NoPatch] = ACTIONS(299),
    [anon_sym_NoSource] = ACTIONS(299),
    [anon_sym_Packager] = ACTIONS(299),
    [anon_sym_Release] = ACTIONS(299),
    [anon_sym_SourceLicense] = ACTIONS(299),
    [anon_sym_Summary] = ACTIONS(299),
    [anon_sym_URL] = ACTIONS(299),
    [anon_sym_Url] = ACTIONS(299),
    [anon_sym_VCS] = ACTIONS(299),
    [anon_sym_Vendor] = ACTIONS(299),
    [anon_sym_Version] = ACTIONS(299),
    [aux_sym_tag_token1] = ACTIONS(299),
    [aux_sym_tag_token2] = ACTIONS(299),
    [anon_sym_Requires] = ACTIONS(299),
    [anon_sym_BuildArch] = ACTIONS(299),
    [anon_sym_BuildArchitectures] = ACTIONS(299),
    [anon_sym_BuildConflicts] = ACTIONS(299),
    [anon_sym_BuildPrereq] = ACTIONS(299),
    [anon_sym_BuildRequires] = ACTIONS(299),
    [anon_sym_Conflicts] = ACTIONS(299),
    [anon_sym_DocDir] = ACTIONS(299),
    [anon_sym_Enhances] = ACTIONS(299),
    [anon_sym_ExcludeArch] = ACTIONS(299),
    [anon_sym_ExcludeOS] = ACTIONS(299),
    [anon_sym_ExclusiveArch] = ACTIONS(299),
    [anon_sym_ExclusiveOS] = ACTIONS(299),
    [anon_sym_Obsoletes] = ACTIONS(299),
    [anon_sym_OrderWithRequires] = ACTIONS(299),
    [anon_sym_Prefix] = ACTIONS(299),
    [anon_sym_Prefixes] = ACTIONS(299),
    [anon_sym_Prereq] = ACTIONS(299),
    [anon_sym_Provides] = ACTIONS(299),
    [anon_sym_Recommends] = ACTIONS(299),
    [anon_sym_RemovePathPostfixes] = ACTIONS(299),
    [anon_sym_Suggests] = ACTIONS(299),
    [anon_sym_Supplements] = ACTIONS(299),
    [anon_sym_PERCENTdescription] = ACTIONS(299),
    [anon_sym_PERCENTpackage] = ACTIONS(299),
    [anon_sym_PERCENTprep] = ACTIONS(299),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(299),
    [anon_sym_PERCENTconf] = ACTIONS(299),
    [anon_sym_PERCENTbuild] = ACTIONS(299),
    [anon_sym_PERCENTinstall] = ACTIONS(299),
    [anon_sym_PERCENTcheck] = ACTIONS(299),
    [anon_sym_PERCENTclean] = ACTIONS(299),
    [anon_sym_PERCENTpre] = ACTIONS(299),
    [anon_sym_PERCENTpost] = ACTIONS(299),
    [anon_sym_PERCENTpreun] = ACTIONS(299),
    [anon_sym_PERCENTpostun] = ACTIONS(299),
    [anon_sym_PERCENTpretrans] = ACTIONS(299),
    [anon_sym_PERCENTposttrans] = ACTIONS(299),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(299),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(299),
    [anon_sym_PERCENTverify] = ACTIONS(227),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(299),
    [anon_sym_PERCENTtriggerin] = ACTIONS(299),
    [anon_sym_PERCENTtriggerun] = ACTIONS(299),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(299),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(299),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(299),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(299),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(299),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(299),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(299),
    [anon_sym_PERCENTfiles] = ACTIONS(299),
    [anon_sym_PERCENTdefattr] = ACTIONS(229),
    [anon_sym_PERCENTartifact] = ACTIONS(231),
    [anon_sym_PERCENTconfig] = ACTIONS(231),
    [anon_sym_PERCENTdir] = ACTIONS(231),
    [anon_sym_PERCENTdoc] = ACTIONS(231),
    [anon_sym_PERCENTdocdir] = ACTIONS(231),
    [anon_sym_PERCENTghost] = ACTIONS(231),
    [anon_sym_PERCENTlicense] = ACTIONS(231),
    [anon_sym_PERCENTmissingok] = ACTIONS(231),
    [anon_sym_PERCENTreadme] = ACTIONS(231),
    [anon_sym_PERCENTattr] = ACTIONS(233),
    [anon_sym_PERCENTchangelog] = ACTIONS(299),
    [anon_sym_PERCENTglobal] = ACTIONS(299),
    [anon_sym_PERCENTdefine] = ACTIONS(299),
    [anon_sym_PERCENTundefine] = ACTIONS(299),
    [anon_sym_PERCENT] = ACTIONS(235),
    [sym_string_content] = ACTIONS(237),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(239),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(241),
  },
  [17] = {
    [sym_conditional_files] = STATE(12),
    [sym_defattr] = STATE(12),
    [sym_file] = STATE(12),
    [sym_attr] = STATE(125),
    [sym_verify] = STATE(161),
    [sym_string] = STATE(243),
    [sym__macro_expansion] = STATE(148),
    [sym_simple_expansion] = STATE(148),
    [sym_full_expansion] = STATE(148),
    [sym_shell_expansion] = STATE(148),
    [aux_sym_files_repeat1] = STATE(12),
    [aux_sym_string_repeat1] = STATE(148),
    [ts_builtin_sym_end] = ACTIONS(301),
    [aux_sym__top_level_token1] = ACTIONS(303),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(247),
    [anon_sym_PERCENTifarch] = ACTIONS(247),
    [anon_sym_PERCENTifos] = ACTIONS(247),
    [anon_sym_PERCENTifnarch] = ACTIONS(303),
    [anon_sym_PERCENTifnos] = ACTIONS(303),
    [anon_sym_AutoProv] = ACTIONS(303),
    [anon_sym_AutoReq] = ACTIONS(303),
    [anon_sym_AutoReqProv] = ACTIONS(303),
    [anon_sym_BugUrl] = ACTIONS(303),
    [anon_sym_BuildRoot] = ACTIONS(303),
    [anon_sym_BuildSystem] = ACTIONS(303),
    [anon_sym_DistTag] = ACTIONS(303),
    [anon_sym_Distribution] = ACTIONS(303),
    [anon_sym_Epoch] = ACTIONS(303),
    [anon_sym_Group] = ACTIONS(303),
    [anon_sym_License] = ACTIONS(303),
    [anon_sym_ModularityLabel] = ACTIONS(303),
    [anon_sym_Name] = ACTIONS(303),
    [anon_sym_NoPatch] = ACTIONS(303),
    [anon_sym_NoSource] = ACTIONS(303),
    [anon_sym_Packager] = ACTIONS(303),
    [anon_sym_Release] = ACTIONS(303),
    [anon_sym_SourceLicense] = ACTIONS(303),
    [anon_sym_Summary] = ACTIONS(303),
    [anon_sym_URL] = ACTIONS(303),
    [anon_sym_Url] = ACTIONS(303),
    [anon_sym_VCS] = ACTIONS(303),
    [anon_sym_Vendor] = ACTIONS(303),
    [anon_sym_Version] = ACTIONS(303),
    [aux_sym_tag_token1] = ACTIONS(303),
    [aux_sym_tag_token2] = ACTIONS(303),
    [anon_sym_Requires] = ACTIONS(303),
    [anon_sym_BuildArch] = ACTIONS(303),
    [anon_sym_BuildArchitectures] = ACTIONS(303),
    [anon_sym_BuildConflicts] = ACTIONS(303),
    [anon_sym_BuildPrereq] = ACTIONS(303),
    [anon_sym_BuildRequires] = ACTIONS(303),
    [anon_sym_Conflicts] = ACTIONS(303),
    [anon_sym_DocDir] = ACTIONS(303),
    [anon_sym_Enhances] = ACTIONS(303),
    [anon_sym_ExcludeArch] = ACTIONS(303),
    [anon_sym_ExcludeOS] = ACTIONS(303),
    [anon_sym_ExclusiveArch] = ACTIONS(303),
    [anon_sym_ExclusiveOS] = ACTIONS(303),
    [anon_sym_Obsoletes] = ACTIONS(303),
    [anon_sym_OrderWithRequires] = ACTIONS(303),
    [anon_sym_Prefix] = ACTIONS(303),
    [anon_sym_Prefixes] = ACTIONS(303),
    [anon_sym_Prereq] = ACTIONS(303),
    [anon_sym_Provides] = ACTIONS(303),
    [anon_sym_Recommends] = ACTIONS(303),
    [anon_sym_RemovePathPostfixes] = ACTIONS(303),
    [anon_sym_Suggests] = ACTIONS(303),
    [anon_sym_Supplements] = ACTIONS(303),
    [anon_sym_PERCENTdescription] = ACTIONS(303),
    [anon_sym_PERCENTpackage] = ACTIONS(303),
    [anon_sym_PERCENTprep] = ACTIONS(303),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(303),
    [anon_sym_PERCENTconf] = ACTIONS(303),
    [anon_sym_PERCENTbuild] = ACTIONS(303),
    [anon_sym_PERCENTinstall] = ACTIONS(303),
    [anon_sym_PERCENTcheck] = ACTIONS(303),
    [anon_sym_PERCENTclean] = ACTIONS(303),
    [anon_sym_PERCENTpre] = ACTIONS(303),
    [anon_sym_PERCENTpost] = ACTIONS(303),
    [anon_sym_PERCENTpreun] = ACTIONS(303),
    [anon_sym_PERCENTpostun] = ACTIONS(303),
    [anon_sym_PERCENTpretrans] = ACTIONS(303),
    [anon_sym_PERCENTposttrans] = ACTIONS(303),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(303),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(303),
    [anon_sym_PERCENTverify] = ACTIONS(227),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(303),
    [anon_sym_PERCENTtriggerin] = ACTIONS(303),
    [anon_sym_PERCENTtriggerun] = ACTIONS(303),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(303),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(303),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(303),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(303),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(303),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(303),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(303),
    [anon_sym_PERCENTfiles] = ACTIONS(303),
    [anon_sym_PERCENTdefattr] = ACTIONS(249),
    [anon_sym_PERCENTartifact] = ACTIONS(251),
    [anon_sym_PERCENTconfig] = ACTIONS(251),
    [anon_sym_PERCENTdir] = ACTIONS(251),
    [anon_sym_PERCENTdoc] = ACTIONS(251),
    [anon_sym_PERCENTdocdir] = ACTIONS(251),
    [anon_sym_PERCENTghost] = ACTIONS(251),
    [anon_sym_PERCENTlicense] = ACTIONS(251),
    [anon_sym_PERCENTmissingok] = ACTIONS(251),
    [anon_sym_PERCENTreadme] = ACTIONS(251),
    [anon_sym_PERCENTattr] = ACTIONS(233),
    [anon_sym_PERCENTchangelog] = ACTIONS(303),
    [anon_sym_PERCENTglobal] = ACTIONS(303),
    [anon_sym_PERCENTdefine] = ACTIONS(303),
    [anon_sym_PERCENTundefine] = ACTIONS(303),
    [anon_sym_PERCENT] = ACTIONS(235),
    [sym_string_content] = ACTIONS(237),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(239),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(241),
  },
  [18] = {
    [sym_conditional_files] = STATE(17),
    [sym_defattr] = STATE(17),
    [sym_file] = STATE(17),
    [sym_attr] = STATE(125),
    [sym_verify] = STATE(161),
    [sym_string] = STATE(243),
    [sym__macro_expansion] = STATE(148),
    [sym_simple_expansion] = STATE(148),
    [sym_full_expansion] = STATE(148),
    [sym_shell_expansion] = STATE(148),
    [aux_sym_files_repeat1] = STATE(17),
    [aux_sym_string_repeat1] = STATE(148),
    [ts_builtin_sym_end] = ACTIONS(305),
    [aux_sym__top_level_token1] = ACTIONS(299),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(247),
    [anon_sym_PERCENTifarch] = ACTIONS(247),
    [anon_sym_PERCENTifos] = ACTIONS(247),
    [anon_sym_PERCENTifnarch] = ACTIONS(299),
    [anon_sym_PERCENTifnos] = ACTIONS(299),
    [anon_sym_AutoProv] = ACTIONS(299),
    [anon_sym_AutoReq] = ACTIONS(299),
    [anon_sym_AutoReqProv] = ACTIONS(299),
    [anon_sym_BugUrl] = ACTIONS(299),
    [anon_sym_BuildRoot] = ACTIONS(299),
    [anon_sym_BuildSystem] = ACTIONS(299),
    [anon_sym_DistTag] = ACTIONS(299),
    [anon_sym_Distribution] = ACTIONS(299),
    [anon_sym_Epoch] = ACTIONS(299),
    [anon_sym_Group] = ACTIONS(299),
    [anon_sym_License] = ACTIONS(299),
    [anon_sym_ModularityLabel] = ACTIONS(299),
    [anon_sym_Name] = ACTIONS(299),
    [anon_sym_NoPatch] = ACTIONS(299),
    [anon_sym_NoSource] = ACTIONS(299),
    [anon_sym_Packager] = ACTIONS(299),
    [anon_sym_Release] = ACTIONS(299),
    [anon_sym_SourceLicense] = ACTIONS(299),
    [anon_sym_Summary] = ACTIONS(299),
    [anon_sym_URL] = ACTIONS(299),
    [anon_sym_Url] = ACTIONS(299),
    [anon_sym_VCS] = ACTIONS(299),
    [anon_sym_Vendor] = ACTIONS(299),
    [anon_sym_Version] = ACTIONS(299),
    [aux_sym_tag_token1] = ACTIONS(299),
    [aux_sym_tag_token2] = ACTIONS(299),
    [anon_sym_Requires] = ACTIONS(299),
    [anon_sym_BuildArch] = ACTIONS(299),
    [anon_sym_BuildArchitectures] = ACTIONS(299),
    [anon_sym_BuildConflicts] = ACTIONS(299),
    [anon_sym_BuildPrereq] = ACTIONS(299),
    [anon_sym_BuildRequires] = ACTIONS(299),
    [anon_sym_Conflicts] = ACTIONS(299),
    [anon_sym_DocDir] = ACTIONS(299),
    [anon_sym_Enhances] = ACTIONS(299),
    [anon_sym_ExcludeArch] = ACTIONS(299),
    [anon_sym_ExcludeOS] = ACTIONS(299),
    [anon_sym_ExclusiveArch] = ACTIONS(299),
    [anon_sym_ExclusiveOS] = ACTIONS(299),
    [anon_sym_Obsoletes] = ACTIONS(299),
    [anon_sym_OrderWithRequires] = ACTIONS(299),
    [anon_sym_Prefix] = ACTIONS(299),
    [anon_sym_Prefixes] = ACTIONS(299),
    [anon_sym_Prereq] = ACTIONS(299),
    [anon_sym_Provides] = ACTIONS(299),
    [anon_sym_Recommends] = ACTIONS(299),
    [anon_sym_RemovePathPostfixes] = ACTIONS(299),
    [anon_sym_Suggests] = ACTIONS(299),
    [anon_sym_Supplements] = ACTIONS(299),
    [anon_sym_PERCENTdescription] = ACTIONS(299),
    [anon_sym_PERCENTpackage] = ACTIONS(299),
    [anon_sym_PERCENTprep] = ACTIONS(299),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(299),
    [anon_sym_PERCENTconf] = ACTIONS(299),
    [anon_sym_PERCENTbuild] = ACTIONS(299),
    [anon_sym_PERCENTinstall] = ACTIONS(299),
    [anon_sym_PERCENTcheck] = ACTIONS(299),
    [anon_sym_PERCENTclean] = ACTIONS(299),
    [anon_sym_PERCENTpre] = ACTIONS(299),
    [anon_sym_PERCENTpost] = ACTIONS(299),
    [anon_sym_PERCENTpreun] = ACTIONS(299),
    [anon_sym_PERCENTpostun] = ACTIONS(299),
    [anon_sym_PERCENTpretrans] = ACTIONS(299),
    [anon_sym_PERCENTposttrans] = ACTIONS(299),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(299),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(299),
    [anon_sym_PERCENTverify] = ACTIONS(227),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(299),
    [anon_sym_PERCENTtriggerin] = ACTIONS(299),
    [anon_sym_PERCENTtriggerun] = ACTIONS(299),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(299),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(299),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(299),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(299),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(299),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(299),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(299),
    [anon_sym_PERCENTfiles] = ACTIONS(299),
    [anon_sym_PERCENTdefattr] = ACTIONS(249),
    [anon_sym_PERCENTartifact] = ACTIONS(251),
    [anon_sym_PERCENTconfig] = ACTIONS(251),
    [anon_sym_PERCENTdir] = ACTIONS(251),
    [anon_sym_PERCENTdoc] = ACTIONS(251),
    [anon_sym_PERCENTdocdir] = ACTIONS(251),
    [anon_sym_PERCENTghost] = ACTIONS(251),
    [anon_sym_PERCENTlicense] = ACTIONS(251),
    [anon_sym_PERCENTmissingok] = ACTIONS(251),
    [anon_sym_PERCENTreadme] = ACTIONS(251),
    [anon_sym_PERCENTattr] = ACTIONS(233),
    [anon_sym_PERCENTchangelog] = ACTIONS(299),
    [anon_sym_PERCENTglobal] = ACTIONS(299),
    [anon_sym_PERCENTdefine] = ACTIONS(299),
    [anon_sym_PERCENTundefine] = ACTIONS(299),
    [anon_sym_PERCENT] = ACTIONS(235),
    [sym_string_content] = ACTIONS(237),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(239),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(241),
  },
  [19] = {
    [sym_conditional_files] = STATE(12),
    [sym_defattr] = STATE(12),
    [sym_file] = STATE(12),
    [sym_attr] = STATE(125),
    [sym_verify] = STATE(161),
    [sym_string] = STATE(243),
    [sym__macro_expansion] = STATE(148),
    [sym_simple_expansion] = STATE(148),
    [sym_full_expansion] = STATE(148),
    [sym_shell_expansion] = STATE(148),
    [aux_sym_files_repeat1] = STATE(12),
    [aux_sym_string_repeat1] = STATE(148),
    [ts_builtin_sym_end] = ACTIONS(307),
    [aux_sym__top_level_token1] = ACTIONS(253),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(247),
    [anon_sym_PERCENTifarch] = ACTIONS(247),
    [anon_sym_PERCENTifos] = ACTIONS(247),
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
    [anon_sym_PERCENTverify] = ACTIONS(227),
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
    [anon_sym_PERCENTdefattr] = ACTIONS(249),
    [anon_sym_PERCENTartifact] = ACTIONS(251),
    [anon_sym_PERCENTconfig] = ACTIONS(251),
    [anon_sym_PERCENTdir] = ACTIONS(251),
    [anon_sym_PERCENTdoc] = ACTIONS(251),
    [anon_sym_PERCENTdocdir] = ACTIONS(251),
    [anon_sym_PERCENTghost] = ACTIONS(251),
    [anon_sym_PERCENTlicense] = ACTIONS(251),
    [anon_sym_PERCENTmissingok] = ACTIONS(251),
    [anon_sym_PERCENTreadme] = ACTIONS(251),
    [anon_sym_PERCENTattr] = ACTIONS(233),
    [anon_sym_PERCENTchangelog] = ACTIONS(253),
    [anon_sym_PERCENTglobal] = ACTIONS(253),
    [anon_sym_PERCENTdefine] = ACTIONS(253),
    [anon_sym_PERCENTundefine] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(235),
    [sym_string_content] = ACTIONS(237),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(239),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(241),
  },
  [20] = {
    [sym_conditional_files] = STATE(15),
    [sym_defattr] = STATE(15),
    [sym_file] = STATE(15),
    [sym_attr] = STATE(126),
    [sym_verify] = STATE(146),
    [sym_string] = STATE(269),
    [sym__macro_expansion] = STATE(148),
    [sym_simple_expansion] = STATE(148),
    [sym_full_expansion] = STATE(148),
    [sym_shell_expansion] = STATE(148),
    [aux_sym_files_repeat1] = STATE(15),
    [aux_sym_string_repeat1] = STATE(148),
    [aux_sym__top_level_token1] = ACTIONS(303),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(225),
    [anon_sym_PERCENTifarch] = ACTIONS(225),
    [anon_sym_PERCENTifos] = ACTIONS(225),
    [anon_sym_PERCENTifnarch] = ACTIONS(303),
    [anon_sym_PERCENTifnos] = ACTIONS(303),
    [anon_sym_PERCENTendif] = ACTIONS(303),
    [anon_sym_AutoProv] = ACTIONS(303),
    [anon_sym_AutoReq] = ACTIONS(303),
    [anon_sym_AutoReqProv] = ACTIONS(303),
    [anon_sym_BugUrl] = ACTIONS(303),
    [anon_sym_BuildRoot] = ACTIONS(303),
    [anon_sym_BuildSystem] = ACTIONS(303),
    [anon_sym_DistTag] = ACTIONS(303),
    [anon_sym_Distribution] = ACTIONS(303),
    [anon_sym_Epoch] = ACTIONS(303),
    [anon_sym_Group] = ACTIONS(303),
    [anon_sym_License] = ACTIONS(303),
    [anon_sym_ModularityLabel] = ACTIONS(303),
    [anon_sym_Name] = ACTIONS(303),
    [anon_sym_NoPatch] = ACTIONS(303),
    [anon_sym_NoSource] = ACTIONS(303),
    [anon_sym_Packager] = ACTIONS(303),
    [anon_sym_Release] = ACTIONS(303),
    [anon_sym_SourceLicense] = ACTIONS(303),
    [anon_sym_Summary] = ACTIONS(303),
    [anon_sym_URL] = ACTIONS(303),
    [anon_sym_Url] = ACTIONS(303),
    [anon_sym_VCS] = ACTIONS(303),
    [anon_sym_Vendor] = ACTIONS(303),
    [anon_sym_Version] = ACTIONS(303),
    [aux_sym_tag_token1] = ACTIONS(303),
    [aux_sym_tag_token2] = ACTIONS(303),
    [anon_sym_Requires] = ACTIONS(303),
    [anon_sym_BuildArch] = ACTIONS(303),
    [anon_sym_BuildArchitectures] = ACTIONS(303),
    [anon_sym_BuildConflicts] = ACTIONS(303),
    [anon_sym_BuildPrereq] = ACTIONS(303),
    [anon_sym_BuildRequires] = ACTIONS(303),
    [anon_sym_Conflicts] = ACTIONS(303),
    [anon_sym_DocDir] = ACTIONS(303),
    [anon_sym_Enhances] = ACTIONS(303),
    [anon_sym_ExcludeArch] = ACTIONS(303),
    [anon_sym_ExcludeOS] = ACTIONS(303),
    [anon_sym_ExclusiveArch] = ACTIONS(303),
    [anon_sym_ExclusiveOS] = ACTIONS(303),
    [anon_sym_Obsoletes] = ACTIONS(303),
    [anon_sym_OrderWithRequires] = ACTIONS(303),
    [anon_sym_Prefix] = ACTIONS(303),
    [anon_sym_Prefixes] = ACTIONS(303),
    [anon_sym_Prereq] = ACTIONS(303),
    [anon_sym_Provides] = ACTIONS(303),
    [anon_sym_Recommends] = ACTIONS(303),
    [anon_sym_RemovePathPostfixes] = ACTIONS(303),
    [anon_sym_Suggests] = ACTIONS(303),
    [anon_sym_Supplements] = ACTIONS(303),
    [anon_sym_PERCENTdescription] = ACTIONS(303),
    [anon_sym_PERCENTpackage] = ACTIONS(303),
    [anon_sym_PERCENTprep] = ACTIONS(303),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(303),
    [anon_sym_PERCENTconf] = ACTIONS(303),
    [anon_sym_PERCENTbuild] = ACTIONS(303),
    [anon_sym_PERCENTinstall] = ACTIONS(303),
    [anon_sym_PERCENTcheck] = ACTIONS(303),
    [anon_sym_PERCENTclean] = ACTIONS(303),
    [anon_sym_PERCENTpre] = ACTIONS(303),
    [anon_sym_PERCENTpost] = ACTIONS(303),
    [anon_sym_PERCENTpreun] = ACTIONS(303),
    [anon_sym_PERCENTpostun] = ACTIONS(303),
    [anon_sym_PERCENTpretrans] = ACTIONS(303),
    [anon_sym_PERCENTposttrans] = ACTIONS(303),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(303),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(303),
    [anon_sym_PERCENTverify] = ACTIONS(227),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(303),
    [anon_sym_PERCENTtriggerin] = ACTIONS(303),
    [anon_sym_PERCENTtriggerun] = ACTIONS(303),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(303),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(303),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(303),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(303),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(303),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(303),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(303),
    [anon_sym_PERCENTfiles] = ACTIONS(303),
    [anon_sym_PERCENTdefattr] = ACTIONS(229),
    [anon_sym_PERCENTartifact] = ACTIONS(231),
    [anon_sym_PERCENTconfig] = ACTIONS(231),
    [anon_sym_PERCENTdir] = ACTIONS(231),
    [anon_sym_PERCENTdoc] = ACTIONS(231),
    [anon_sym_PERCENTdocdir] = ACTIONS(231),
    [anon_sym_PERCENTghost] = ACTIONS(231),
    [anon_sym_PERCENTlicense] = ACTIONS(231),
    [anon_sym_PERCENTmissingok] = ACTIONS(231),
    [anon_sym_PERCENTreadme] = ACTIONS(231),
    [anon_sym_PERCENTattr] = ACTIONS(233),
    [anon_sym_PERCENTchangelog] = ACTIONS(303),
    [anon_sym_PERCENTglobal] = ACTIONS(303),
    [anon_sym_PERCENTdefine] = ACTIONS(303),
    [anon_sym_PERCENTundefine] = ACTIONS(303),
    [anon_sym_PERCENT] = ACTIONS(235),
    [sym_string_content] = ACTIONS(237),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(239),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(241),
  },
  [21] = {
    [sym_conditional_files] = STATE(10),
    [sym_defattr] = STATE(10),
    [sym_file] = STATE(10),
    [sym_attr] = STATE(125),
    [sym_verify] = STATE(161),
    [sym_string] = STATE(243),
    [sym__macro_expansion] = STATE(148),
    [sym_simple_expansion] = STATE(148),
    [sym_full_expansion] = STATE(148),
    [sym_shell_expansion] = STATE(148),
    [aux_sym_files_repeat1] = STATE(10),
    [aux_sym_string_repeat1] = STATE(148),
    [ts_builtin_sym_end] = ACTIONS(309),
    [aux_sym__top_level_token1] = ACTIONS(243),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(247),
    [anon_sym_PERCENTifarch] = ACTIONS(247),
    [anon_sym_PERCENTifos] = ACTIONS(247),
    [anon_sym_PERCENTifnarch] = ACTIONS(243),
    [anon_sym_PERCENTifnos] = ACTIONS(243),
    [anon_sym_AutoProv] = ACTIONS(243),
    [anon_sym_AutoReq] = ACTIONS(243),
    [anon_sym_AutoReqProv] = ACTIONS(243),
    [anon_sym_BugUrl] = ACTIONS(243),
    [anon_sym_BuildRoot] = ACTIONS(243),
    [anon_sym_BuildSystem] = ACTIONS(243),
    [anon_sym_DistTag] = ACTIONS(243),
    [anon_sym_Distribution] = ACTIONS(243),
    [anon_sym_Epoch] = ACTIONS(243),
    [anon_sym_Group] = ACTIONS(243),
    [anon_sym_License] = ACTIONS(243),
    [anon_sym_ModularityLabel] = ACTIONS(243),
    [anon_sym_Name] = ACTIONS(243),
    [anon_sym_NoPatch] = ACTIONS(243),
    [anon_sym_NoSource] = ACTIONS(243),
    [anon_sym_Packager] = ACTIONS(243),
    [anon_sym_Release] = ACTIONS(243),
    [anon_sym_SourceLicense] = ACTIONS(243),
    [anon_sym_Summary] = ACTIONS(243),
    [anon_sym_URL] = ACTIONS(243),
    [anon_sym_Url] = ACTIONS(243),
    [anon_sym_VCS] = ACTIONS(243),
    [anon_sym_Vendor] = ACTIONS(243),
    [anon_sym_Version] = ACTIONS(243),
    [aux_sym_tag_token1] = ACTIONS(243),
    [aux_sym_tag_token2] = ACTIONS(243),
    [anon_sym_Requires] = ACTIONS(243),
    [anon_sym_BuildArch] = ACTIONS(243),
    [anon_sym_BuildArchitectures] = ACTIONS(243),
    [anon_sym_BuildConflicts] = ACTIONS(243),
    [anon_sym_BuildPrereq] = ACTIONS(243),
    [anon_sym_BuildRequires] = ACTIONS(243),
    [anon_sym_Conflicts] = ACTIONS(243),
    [anon_sym_DocDir] = ACTIONS(243),
    [anon_sym_Enhances] = ACTIONS(243),
    [anon_sym_ExcludeArch] = ACTIONS(243),
    [anon_sym_ExcludeOS] = ACTIONS(243),
    [anon_sym_ExclusiveArch] = ACTIONS(243),
    [anon_sym_ExclusiveOS] = ACTIONS(243),
    [anon_sym_Obsoletes] = ACTIONS(243),
    [anon_sym_OrderWithRequires] = ACTIONS(243),
    [anon_sym_Prefix] = ACTIONS(243),
    [anon_sym_Prefixes] = ACTIONS(243),
    [anon_sym_Prereq] = ACTIONS(243),
    [anon_sym_Provides] = ACTIONS(243),
    [anon_sym_Recommends] = ACTIONS(243),
    [anon_sym_RemovePathPostfixes] = ACTIONS(243),
    [anon_sym_Suggests] = ACTIONS(243),
    [anon_sym_Supplements] = ACTIONS(243),
    [anon_sym_PERCENTdescription] = ACTIONS(243),
    [anon_sym_PERCENTpackage] = ACTIONS(243),
    [anon_sym_PERCENTprep] = ACTIONS(243),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(243),
    [anon_sym_PERCENTconf] = ACTIONS(243),
    [anon_sym_PERCENTbuild] = ACTIONS(243),
    [anon_sym_PERCENTinstall] = ACTIONS(243),
    [anon_sym_PERCENTcheck] = ACTIONS(243),
    [anon_sym_PERCENTclean] = ACTIONS(243),
    [anon_sym_PERCENTpre] = ACTIONS(243),
    [anon_sym_PERCENTpost] = ACTIONS(243),
    [anon_sym_PERCENTpreun] = ACTIONS(243),
    [anon_sym_PERCENTpostun] = ACTIONS(243),
    [anon_sym_PERCENTpretrans] = ACTIONS(243),
    [anon_sym_PERCENTposttrans] = ACTIONS(243),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(243),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(243),
    [anon_sym_PERCENTverify] = ACTIONS(227),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(243),
    [anon_sym_PERCENTtriggerin] = ACTIONS(243),
    [anon_sym_PERCENTtriggerun] = ACTIONS(243),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(243),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(243),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(243),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(243),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(243),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(243),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(243),
    [anon_sym_PERCENTfiles] = ACTIONS(243),
    [anon_sym_PERCENTdefattr] = ACTIONS(249),
    [anon_sym_PERCENTartifact] = ACTIONS(251),
    [anon_sym_PERCENTconfig] = ACTIONS(251),
    [anon_sym_PERCENTdir] = ACTIONS(251),
    [anon_sym_PERCENTdoc] = ACTIONS(251),
    [anon_sym_PERCENTdocdir] = ACTIONS(251),
    [anon_sym_PERCENTghost] = ACTIONS(251),
    [anon_sym_PERCENTlicense] = ACTIONS(251),
    [anon_sym_PERCENTmissingok] = ACTIONS(251),
    [anon_sym_PERCENTreadme] = ACTIONS(251),
    [anon_sym_PERCENTattr] = ACTIONS(233),
    [anon_sym_PERCENTchangelog] = ACTIONS(243),
    [anon_sym_PERCENTglobal] = ACTIONS(243),
    [anon_sym_PERCENTdefine] = ACTIONS(243),
    [anon_sym_PERCENTundefine] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(235),
    [sym_string_content] = ACTIONS(237),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(239),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(241),
  },
  [22] = {
    [aux_sym__top_level_token1] = ACTIONS(311),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(311),
    [anon_sym_PERCENTifarch] = ACTIONS(311),
    [anon_sym_PERCENTifos] = ACTIONS(311),
    [anon_sym_PERCENTifnarch] = ACTIONS(311),
    [anon_sym_PERCENTifnos] = ACTIONS(311),
    [anon_sym_PERCENTendif] = ACTIONS(311),
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
    [anon_sym_PERCENTdefattr] = ACTIONS(311),
    [anon_sym_PERCENTartifact] = ACTIONS(311),
    [anon_sym_PERCENTconfig] = ACTIONS(311),
    [anon_sym_PERCENTdir] = ACTIONS(311),
    [anon_sym_PERCENTdoc] = ACTIONS(311),
    [anon_sym_PERCENTdocdir] = ACTIONS(311),
    [anon_sym_PERCENTghost] = ACTIONS(311),
    [anon_sym_PERCENTlicense] = ACTIONS(311),
    [anon_sym_PERCENTmissingok] = ACTIONS(311),
    [anon_sym_PERCENTreadme] = ACTIONS(311),
    [anon_sym_PERCENTattr] = ACTIONS(311),
    [anon_sym_PERCENTchangelog] = ACTIONS(311),
    [anon_sym_PERCENTglobal] = ACTIONS(311),
    [anon_sym_PERCENTdefine] = ACTIONS(311),
    [anon_sym_PERCENTundefine] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(311),
    [sym_string_content] = ACTIONS(311),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(311),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(311),
  },
  [23] = {
    [aux_sym__top_level_token1] = ACTIONS(313),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(313),
    [anon_sym_PERCENTifarch] = ACTIONS(313),
    [anon_sym_PERCENTifos] = ACTIONS(313),
    [anon_sym_PERCENTifnarch] = ACTIONS(313),
    [anon_sym_PERCENTifnos] = ACTIONS(313),
    [anon_sym_PERCENTendif] = ACTIONS(313),
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
    [anon_sym_PERCENTdefattr] = ACTIONS(313),
    [anon_sym_PERCENTartifact] = ACTIONS(313),
    [anon_sym_PERCENTconfig] = ACTIONS(313),
    [anon_sym_PERCENTdir] = ACTIONS(313),
    [anon_sym_PERCENTdoc] = ACTIONS(313),
    [anon_sym_PERCENTdocdir] = ACTIONS(313),
    [anon_sym_PERCENTghost] = ACTIONS(313),
    [anon_sym_PERCENTlicense] = ACTIONS(313),
    [anon_sym_PERCENTmissingok] = ACTIONS(313),
    [anon_sym_PERCENTreadme] = ACTIONS(313),
    [anon_sym_PERCENTattr] = ACTIONS(313),
    [anon_sym_PERCENTchangelog] = ACTIONS(313),
    [anon_sym_PERCENTglobal] = ACTIONS(313),
    [anon_sym_PERCENTdefine] = ACTIONS(313),
    [anon_sym_PERCENTundefine] = ACTIONS(313),
    [anon_sym_PERCENT] = ACTIONS(313),
    [sym_string_content] = ACTIONS(313),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(313),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(313),
  },
  [24] = {
    [aux_sym__top_level_token1] = ACTIONS(315),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(315),
    [anon_sym_PERCENTifarch] = ACTIONS(315),
    [anon_sym_PERCENTifos] = ACTIONS(315),
    [anon_sym_PERCENTifnarch] = ACTIONS(315),
    [anon_sym_PERCENTifnos] = ACTIONS(315),
    [anon_sym_PERCENTendif] = ACTIONS(315),
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
    [anon_sym_PERCENTdefattr] = ACTIONS(315),
    [anon_sym_PERCENTartifact] = ACTIONS(315),
    [anon_sym_PERCENTconfig] = ACTIONS(315),
    [anon_sym_PERCENTdir] = ACTIONS(315),
    [anon_sym_PERCENTdoc] = ACTIONS(315),
    [anon_sym_PERCENTdocdir] = ACTIONS(315),
    [anon_sym_PERCENTghost] = ACTIONS(315),
    [anon_sym_PERCENTlicense] = ACTIONS(315),
    [anon_sym_PERCENTmissingok] = ACTIONS(315),
    [anon_sym_PERCENTreadme] = ACTIONS(315),
    [anon_sym_PERCENTattr] = ACTIONS(315),
    [anon_sym_PERCENTchangelog] = ACTIONS(315),
    [anon_sym_PERCENTglobal] = ACTIONS(315),
    [anon_sym_PERCENTdefine] = ACTIONS(315),
    [anon_sym_PERCENTundefine] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(315),
    [sym_string_content] = ACTIONS(315),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(315),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(315),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [aux_sym__top_level_token1] = ACTIONS(313),
    [sym_comment] = ACTIONS(7),
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
    [anon_sym_PERCENTdefattr] = ACTIONS(313),
    [anon_sym_PERCENTartifact] = ACTIONS(313),
    [anon_sym_PERCENTconfig] = ACTIONS(313),
    [anon_sym_PERCENTdir] = ACTIONS(313),
    [anon_sym_PERCENTdoc] = ACTIONS(313),
    [anon_sym_PERCENTdocdir] = ACTIONS(313),
    [anon_sym_PERCENTghost] = ACTIONS(313),
    [anon_sym_PERCENTlicense] = ACTIONS(313),
    [anon_sym_PERCENTmissingok] = ACTIONS(313),
    [anon_sym_PERCENTreadme] = ACTIONS(313),
    [anon_sym_PERCENTattr] = ACTIONS(313),
    [anon_sym_PERCENTchangelog] = ACTIONS(313),
    [anon_sym_PERCENTglobal] = ACTIONS(313),
    [anon_sym_PERCENTdefine] = ACTIONS(313),
    [anon_sym_PERCENTundefine] = ACTIONS(313),
    [anon_sym_PERCENT] = ACTIONS(313),
    [sym_string_content] = ACTIONS(313),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(313),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(313),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym__top_level_token1] = ACTIONS(321),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(321),
    [anon_sym_PERCENTifarch] = ACTIONS(321),
    [anon_sym_PERCENTifos] = ACTIONS(321),
    [anon_sym_PERCENTifnarch] = ACTIONS(321),
    [anon_sym_PERCENTifnos] = ACTIONS(321),
    [anon_sym_AutoProv] = ACTIONS(321),
    [anon_sym_AutoReq] = ACTIONS(321),
    [anon_sym_AutoReqProv] = ACTIONS(321),
    [anon_sym_BugUrl] = ACTIONS(321),
    [anon_sym_BuildRoot] = ACTIONS(321),
    [anon_sym_BuildSystem] = ACTIONS(321),
    [anon_sym_DistTag] = ACTIONS(321),
    [anon_sym_Distribution] = ACTIONS(321),
    [anon_sym_Epoch] = ACTIONS(321),
    [anon_sym_Group] = ACTIONS(321),
    [anon_sym_License] = ACTIONS(321),
    [anon_sym_ModularityLabel] = ACTIONS(321),
    [anon_sym_Name] = ACTIONS(321),
    [anon_sym_NoPatch] = ACTIONS(321),
    [anon_sym_NoSource] = ACTIONS(321),
    [anon_sym_Packager] = ACTIONS(321),
    [anon_sym_Release] = ACTIONS(321),
    [anon_sym_SourceLicense] = ACTIONS(321),
    [anon_sym_Summary] = ACTIONS(321),
    [anon_sym_URL] = ACTIONS(321),
    [anon_sym_Url] = ACTIONS(321),
    [anon_sym_VCS] = ACTIONS(321),
    [anon_sym_Vendor] = ACTIONS(321),
    [anon_sym_Version] = ACTIONS(321),
    [aux_sym_tag_token1] = ACTIONS(321),
    [aux_sym_tag_token2] = ACTIONS(321),
    [anon_sym_Requires] = ACTIONS(321),
    [anon_sym_BuildArch] = ACTIONS(321),
    [anon_sym_BuildArchitectures] = ACTIONS(321),
    [anon_sym_BuildConflicts] = ACTIONS(321),
    [anon_sym_BuildPrereq] = ACTIONS(321),
    [anon_sym_BuildRequires] = ACTIONS(321),
    [anon_sym_Conflicts] = ACTIONS(321),
    [anon_sym_DocDir] = ACTIONS(321),
    [anon_sym_Enhances] = ACTIONS(321),
    [anon_sym_ExcludeArch] = ACTIONS(321),
    [anon_sym_ExcludeOS] = ACTIONS(321),
    [anon_sym_ExclusiveArch] = ACTIONS(321),
    [anon_sym_ExclusiveOS] = ACTIONS(321),
    [anon_sym_Obsoletes] = ACTIONS(321),
    [anon_sym_OrderWithRequires] = ACTIONS(321),
    [anon_sym_Prefix] = ACTIONS(321),
    [anon_sym_Prefixes] = ACTIONS(321),
    [anon_sym_Prereq] = ACTIONS(321),
    [anon_sym_Provides] = ACTIONS(321),
    [anon_sym_Recommends] = ACTIONS(321),
    [anon_sym_RemovePathPostfixes] = ACTIONS(321),
    [anon_sym_Suggests] = ACTIONS(321),
    [anon_sym_Supplements] = ACTIONS(321),
    [anon_sym_PERCENTdescription] = ACTIONS(321),
    [anon_sym_PERCENTpackage] = ACTIONS(321),
    [anon_sym_PERCENTprep] = ACTIONS(321),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(321),
    [anon_sym_PERCENTconf] = ACTIONS(321),
    [anon_sym_PERCENTbuild] = ACTIONS(321),
    [anon_sym_PERCENTinstall] = ACTIONS(321),
    [anon_sym_PERCENTcheck] = ACTIONS(321),
    [anon_sym_PERCENTclean] = ACTIONS(321),
    [anon_sym_PERCENTpre] = ACTIONS(321),
    [anon_sym_PERCENTpost] = ACTIONS(321),
    [anon_sym_PERCENTpreun] = ACTIONS(321),
    [anon_sym_PERCENTpostun] = ACTIONS(321),
    [anon_sym_PERCENTpretrans] = ACTIONS(321),
    [anon_sym_PERCENTposttrans] = ACTIONS(321),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(321),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(321),
    [anon_sym_PERCENTverify] = ACTIONS(321),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(321),
    [anon_sym_PERCENTtriggerin] = ACTIONS(321),
    [anon_sym_PERCENTtriggerun] = ACTIONS(321),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(321),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(321),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(321),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(321),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(321),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(321),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(321),
    [anon_sym_PERCENTfiles] = ACTIONS(321),
    [anon_sym_PERCENTdefattr] = ACTIONS(321),
    [anon_sym_PERCENTartifact] = ACTIONS(321),
    [anon_sym_PERCENTconfig] = ACTIONS(321),
    [anon_sym_PERCENTdir] = ACTIONS(321),
    [anon_sym_PERCENTdoc] = ACTIONS(321),
    [anon_sym_PERCENTdocdir] = ACTIONS(321),
    [anon_sym_PERCENTghost] = ACTIONS(321),
    [anon_sym_PERCENTlicense] = ACTIONS(321),
    [anon_sym_PERCENTmissingok] = ACTIONS(321),
    [anon_sym_PERCENTreadme] = ACTIONS(321),
    [anon_sym_PERCENTattr] = ACTIONS(321),
    [anon_sym_PERCENTchangelog] = ACTIONS(321),
    [anon_sym_PERCENTglobal] = ACTIONS(321),
    [anon_sym_PERCENTdefine] = ACTIONS(321),
    [anon_sym_PERCENTundefine] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(321),
    [sym_string_content] = ACTIONS(321),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(321),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(321),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [aux_sym__top_level_token1] = ACTIONS(315),
    [sym_comment] = ACTIONS(7),
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
    [anon_sym_PERCENTdefattr] = ACTIONS(315),
    [anon_sym_PERCENTartifact] = ACTIONS(315),
    [anon_sym_PERCENTconfig] = ACTIONS(315),
    [anon_sym_PERCENTdir] = ACTIONS(315),
    [anon_sym_PERCENTdoc] = ACTIONS(315),
    [anon_sym_PERCENTdocdir] = ACTIONS(315),
    [anon_sym_PERCENTghost] = ACTIONS(315),
    [anon_sym_PERCENTlicense] = ACTIONS(315),
    [anon_sym_PERCENTmissingok] = ACTIONS(315),
    [anon_sym_PERCENTreadme] = ACTIONS(315),
    [anon_sym_PERCENTattr] = ACTIONS(315),
    [anon_sym_PERCENTchangelog] = ACTIONS(315),
    [anon_sym_PERCENTglobal] = ACTIONS(315),
    [anon_sym_PERCENTdefine] = ACTIONS(315),
    [anon_sym_PERCENTundefine] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(315),
    [sym_string_content] = ACTIONS(315),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(315),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(315),
  },
  [28] = {
    [aux_sym__top_level_token1] = ACTIONS(325),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(325),
    [anon_sym_PERCENTifarch] = ACTIONS(325),
    [anon_sym_PERCENTifos] = ACTIONS(325),
    [anon_sym_PERCENTifnarch] = ACTIONS(325),
    [anon_sym_PERCENTifnos] = ACTIONS(325),
    [anon_sym_PERCENTendif] = ACTIONS(325),
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
    [anon_sym_PERCENTdefattr] = ACTIONS(325),
    [anon_sym_PERCENTartifact] = ACTIONS(325),
    [anon_sym_PERCENTconfig] = ACTIONS(325),
    [anon_sym_PERCENTdir] = ACTIONS(325),
    [anon_sym_PERCENTdoc] = ACTIONS(325),
    [anon_sym_PERCENTdocdir] = ACTIONS(325),
    [anon_sym_PERCENTghost] = ACTIONS(325),
    [anon_sym_PERCENTlicense] = ACTIONS(325),
    [anon_sym_PERCENTmissingok] = ACTIONS(325),
    [anon_sym_PERCENTreadme] = ACTIONS(325),
    [anon_sym_PERCENTattr] = ACTIONS(325),
    [anon_sym_PERCENTchangelog] = ACTIONS(325),
    [anon_sym_PERCENTglobal] = ACTIONS(325),
    [anon_sym_PERCENTdefine] = ACTIONS(325),
    [anon_sym_PERCENTundefine] = ACTIONS(325),
    [anon_sym_PERCENT] = ACTIONS(325),
    [sym_string_content] = ACTIONS(325),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(325),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(325),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [aux_sym__top_level_token1] = ACTIONS(311),
    [sym_comment] = ACTIONS(7),
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
    [anon_sym_PERCENTdefattr] = ACTIONS(311),
    [anon_sym_PERCENTartifact] = ACTIONS(311),
    [anon_sym_PERCENTconfig] = ACTIONS(311),
    [anon_sym_PERCENTdir] = ACTIONS(311),
    [anon_sym_PERCENTdoc] = ACTIONS(311),
    [anon_sym_PERCENTdocdir] = ACTIONS(311),
    [anon_sym_PERCENTghost] = ACTIONS(311),
    [anon_sym_PERCENTlicense] = ACTIONS(311),
    [anon_sym_PERCENTmissingok] = ACTIONS(311),
    [anon_sym_PERCENTreadme] = ACTIONS(311),
    [anon_sym_PERCENTattr] = ACTIONS(311),
    [anon_sym_PERCENTchangelog] = ACTIONS(311),
    [anon_sym_PERCENTglobal] = ACTIONS(311),
    [anon_sym_PERCENTdefine] = ACTIONS(311),
    [anon_sym_PERCENTundefine] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(311),
    [sym_string_content] = ACTIONS(311),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(311),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(311),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [aux_sym__top_level_token1] = ACTIONS(325),
    [sym_comment] = ACTIONS(7),
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
    [anon_sym_PERCENTdefattr] = ACTIONS(325),
    [anon_sym_PERCENTartifact] = ACTIONS(325),
    [anon_sym_PERCENTconfig] = ACTIONS(325),
    [anon_sym_PERCENTdir] = ACTIONS(325),
    [anon_sym_PERCENTdoc] = ACTIONS(325),
    [anon_sym_PERCENTdocdir] = ACTIONS(325),
    [anon_sym_PERCENTghost] = ACTIONS(325),
    [anon_sym_PERCENTlicense] = ACTIONS(325),
    [anon_sym_PERCENTmissingok] = ACTIONS(325),
    [anon_sym_PERCENTreadme] = ACTIONS(325),
    [anon_sym_PERCENTattr] = ACTIONS(325),
    [anon_sym_PERCENTchangelog] = ACTIONS(325),
    [anon_sym_PERCENTglobal] = ACTIONS(325),
    [anon_sym_PERCENTdefine] = ACTIONS(325),
    [anon_sym_PERCENTundefine] = ACTIONS(325),
    [anon_sym_PERCENT] = ACTIONS(325),
    [sym_string_content] = ACTIONS(325),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(325),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(325),
  },
  [31] = {
    [aux_sym__top_level_token1] = ACTIONS(321),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(321),
    [anon_sym_PERCENTifarch] = ACTIONS(321),
    [anon_sym_PERCENTifos] = ACTIONS(321),
    [anon_sym_PERCENTifnarch] = ACTIONS(321),
    [anon_sym_PERCENTifnos] = ACTIONS(321),
    [anon_sym_PERCENTendif] = ACTIONS(321),
    [anon_sym_AutoProv] = ACTIONS(321),
    [anon_sym_AutoReq] = ACTIONS(321),
    [anon_sym_AutoReqProv] = ACTIONS(321),
    [anon_sym_BugUrl] = ACTIONS(321),
    [anon_sym_BuildRoot] = ACTIONS(321),
    [anon_sym_BuildSystem] = ACTIONS(321),
    [anon_sym_DistTag] = ACTIONS(321),
    [anon_sym_Distribution] = ACTIONS(321),
    [anon_sym_Epoch] = ACTIONS(321),
    [anon_sym_Group] = ACTIONS(321),
    [anon_sym_License] = ACTIONS(321),
    [anon_sym_ModularityLabel] = ACTIONS(321),
    [anon_sym_Name] = ACTIONS(321),
    [anon_sym_NoPatch] = ACTIONS(321),
    [anon_sym_NoSource] = ACTIONS(321),
    [anon_sym_Packager] = ACTIONS(321),
    [anon_sym_Release] = ACTIONS(321),
    [anon_sym_SourceLicense] = ACTIONS(321),
    [anon_sym_Summary] = ACTIONS(321),
    [anon_sym_URL] = ACTIONS(321),
    [anon_sym_Url] = ACTIONS(321),
    [anon_sym_VCS] = ACTIONS(321),
    [anon_sym_Vendor] = ACTIONS(321),
    [anon_sym_Version] = ACTIONS(321),
    [aux_sym_tag_token1] = ACTIONS(321),
    [aux_sym_tag_token2] = ACTIONS(321),
    [anon_sym_Requires] = ACTIONS(321),
    [anon_sym_BuildArch] = ACTIONS(321),
    [anon_sym_BuildArchitectures] = ACTIONS(321),
    [anon_sym_BuildConflicts] = ACTIONS(321),
    [anon_sym_BuildPrereq] = ACTIONS(321),
    [anon_sym_BuildRequires] = ACTIONS(321),
    [anon_sym_Conflicts] = ACTIONS(321),
    [anon_sym_DocDir] = ACTIONS(321),
    [anon_sym_Enhances] = ACTIONS(321),
    [anon_sym_ExcludeArch] = ACTIONS(321),
    [anon_sym_ExcludeOS] = ACTIONS(321),
    [anon_sym_ExclusiveArch] = ACTIONS(321),
    [anon_sym_ExclusiveOS] = ACTIONS(321),
    [anon_sym_Obsoletes] = ACTIONS(321),
    [anon_sym_OrderWithRequires] = ACTIONS(321),
    [anon_sym_Prefix] = ACTIONS(321),
    [anon_sym_Prefixes] = ACTIONS(321),
    [anon_sym_Prereq] = ACTIONS(321),
    [anon_sym_Provides] = ACTIONS(321),
    [anon_sym_Recommends] = ACTIONS(321),
    [anon_sym_RemovePathPostfixes] = ACTIONS(321),
    [anon_sym_Suggests] = ACTIONS(321),
    [anon_sym_Supplements] = ACTIONS(321),
    [anon_sym_PERCENTdescription] = ACTIONS(321),
    [anon_sym_PERCENTpackage] = ACTIONS(321),
    [anon_sym_PERCENTprep] = ACTIONS(321),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(321),
    [anon_sym_PERCENTconf] = ACTIONS(321),
    [anon_sym_PERCENTbuild] = ACTIONS(321),
    [anon_sym_PERCENTinstall] = ACTIONS(321),
    [anon_sym_PERCENTcheck] = ACTIONS(321),
    [anon_sym_PERCENTclean] = ACTIONS(321),
    [anon_sym_PERCENTpre] = ACTIONS(321),
    [anon_sym_PERCENTpost] = ACTIONS(321),
    [anon_sym_PERCENTpreun] = ACTIONS(321),
    [anon_sym_PERCENTpostun] = ACTIONS(321),
    [anon_sym_PERCENTpretrans] = ACTIONS(321),
    [anon_sym_PERCENTposttrans] = ACTIONS(321),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(321),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(321),
    [anon_sym_PERCENTverify] = ACTIONS(321),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(321),
    [anon_sym_PERCENTtriggerin] = ACTIONS(321),
    [anon_sym_PERCENTtriggerun] = ACTIONS(321),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(321),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(321),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(321),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(321),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(321),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(321),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(321),
    [anon_sym_PERCENTfiles] = ACTIONS(321),
    [anon_sym_PERCENTdefattr] = ACTIONS(321),
    [anon_sym_PERCENTartifact] = ACTIONS(321),
    [anon_sym_PERCENTconfig] = ACTIONS(321),
    [anon_sym_PERCENTdir] = ACTIONS(321),
    [anon_sym_PERCENTdoc] = ACTIONS(321),
    [anon_sym_PERCENTdocdir] = ACTIONS(321),
    [anon_sym_PERCENTghost] = ACTIONS(321),
    [anon_sym_PERCENTlicense] = ACTIONS(321),
    [anon_sym_PERCENTmissingok] = ACTIONS(321),
    [anon_sym_PERCENTreadme] = ACTIONS(321),
    [anon_sym_PERCENTattr] = ACTIONS(321),
    [anon_sym_PERCENTchangelog] = ACTIONS(321),
    [anon_sym_PERCENTglobal] = ACTIONS(321),
    [anon_sym_PERCENTdefine] = ACTIONS(321),
    [anon_sym_PERCENTundefine] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(321),
    [sym_string_content] = ACTIONS(321),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(321),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(321),
  },
  [32] = {
    [sym_string_with_newlines] = STATE(105),
    [sym__macro_expansion] = STATE(41),
    [sym_simple_expansion] = STATE(41),
    [sym_full_expansion] = STATE(41),
    [sym_shell_expansion] = STATE(41),
    [aux_sym_string_with_newlines_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(331),
    [aux_sym__top_level_token1] = ACTIONS(333),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(333),
    [anon_sym_PERCENTifarch] = ACTIONS(333),
    [anon_sym_PERCENTifos] = ACTIONS(333),
    [anon_sym_PERCENTifnarch] = ACTIONS(333),
    [anon_sym_PERCENTifnos] = ACTIONS(333),
    [anon_sym_AutoProv] = ACTIONS(333),
    [anon_sym_AutoReq] = ACTIONS(333),
    [anon_sym_AutoReqProv] = ACTIONS(333),
    [anon_sym_BugUrl] = ACTIONS(333),
    [anon_sym_BuildRoot] = ACTIONS(333),
    [anon_sym_BuildSystem] = ACTIONS(333),
    [anon_sym_DistTag] = ACTIONS(333),
    [anon_sym_Distribution] = ACTIONS(333),
    [anon_sym_Epoch] = ACTIONS(333),
    [anon_sym_Group] = ACTIONS(333),
    [anon_sym_License] = ACTIONS(333),
    [anon_sym_ModularityLabel] = ACTIONS(333),
    [anon_sym_Name] = ACTIONS(333),
    [anon_sym_NoPatch] = ACTIONS(333),
    [anon_sym_NoSource] = ACTIONS(333),
    [anon_sym_Packager] = ACTIONS(333),
    [anon_sym_Release] = ACTIONS(333),
    [anon_sym_SourceLicense] = ACTIONS(333),
    [anon_sym_Summary] = ACTIONS(333),
    [anon_sym_URL] = ACTIONS(333),
    [anon_sym_Url] = ACTIONS(333),
    [anon_sym_VCS] = ACTIONS(333),
    [anon_sym_Vendor] = ACTIONS(333),
    [anon_sym_Version] = ACTIONS(333),
    [aux_sym_tag_token1] = ACTIONS(333),
    [aux_sym_tag_token2] = ACTIONS(333),
    [anon_sym_Requires] = ACTIONS(333),
    [anon_sym_BuildArch] = ACTIONS(333),
    [anon_sym_BuildArchitectures] = ACTIONS(333),
    [anon_sym_BuildConflicts] = ACTIONS(333),
    [anon_sym_BuildPrereq] = ACTIONS(333),
    [anon_sym_BuildRequires] = ACTIONS(333),
    [anon_sym_Conflicts] = ACTIONS(333),
    [anon_sym_DocDir] = ACTIONS(333),
    [anon_sym_Enhances] = ACTIONS(333),
    [anon_sym_ExcludeArch] = ACTIONS(333),
    [anon_sym_ExcludeOS] = ACTIONS(333),
    [anon_sym_ExclusiveArch] = ACTIONS(333),
    [anon_sym_ExclusiveOS] = ACTIONS(333),
    [anon_sym_Obsoletes] = ACTIONS(333),
    [anon_sym_OrderWithRequires] = ACTIONS(333),
    [anon_sym_Prefix] = ACTIONS(333),
    [anon_sym_Prefixes] = ACTIONS(333),
    [anon_sym_Prereq] = ACTIONS(333),
    [anon_sym_Provides] = ACTIONS(333),
    [anon_sym_Recommends] = ACTIONS(333),
    [anon_sym_RemovePathPostfixes] = ACTIONS(333),
    [anon_sym_Suggests] = ACTIONS(333),
    [anon_sym_Supplements] = ACTIONS(333),
    [anon_sym_PERCENTdescription] = ACTIONS(333),
    [anon_sym_PERCENTpackage] = ACTIONS(333),
    [anon_sym_PERCENTprep] = ACTIONS(333),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(333),
    [anon_sym_PERCENTconf] = ACTIONS(333),
    [anon_sym_PERCENTbuild] = ACTIONS(333),
    [anon_sym_PERCENTinstall] = ACTIONS(333),
    [anon_sym_PERCENTcheck] = ACTIONS(333),
    [anon_sym_PERCENTclean] = ACTIONS(333),
    [anon_sym_PERCENTpre] = ACTIONS(333),
    [anon_sym_PERCENTpost] = ACTIONS(333),
    [anon_sym_PERCENTpreun] = ACTIONS(333),
    [anon_sym_PERCENTpostun] = ACTIONS(333),
    [anon_sym_PERCENTpretrans] = ACTIONS(333),
    [anon_sym_PERCENTposttrans] = ACTIONS(333),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(333),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(333),
    [anon_sym_PERCENTverify] = ACTIONS(333),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(333),
    [anon_sym_PERCENTtriggerin] = ACTIONS(333),
    [anon_sym_PERCENTtriggerun] = ACTIONS(333),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(333),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(333),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(333),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(333),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(333),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(333),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(333),
    [anon_sym_PERCENTfiles] = ACTIONS(333),
    [anon_sym_PERCENTchangelog] = ACTIONS(333),
    [anon_sym_PERCENTglobal] = ACTIONS(333),
    [anon_sym_PERCENTdefine] = ACTIONS(333),
    [anon_sym_PERCENTundefine] = ACTIONS(333),
    [anon_sym_PERCENT] = ACTIONS(335),
    [sym_string_content_with_newlines] = ACTIONS(337),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(339),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(341),
  },
  [33] = {
    [sym_string_with_newlines] = STATE(100),
    [sym__macro_expansion] = STATE(41),
    [sym_simple_expansion] = STATE(41),
    [sym_full_expansion] = STATE(41),
    [sym_shell_expansion] = STATE(41),
    [aux_sym_string_with_newlines_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(343),
    [aux_sym__top_level_token1] = ACTIONS(345),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(345),
    [anon_sym_PERCENTifarch] = ACTIONS(345),
    [anon_sym_PERCENTifos] = ACTIONS(345),
    [anon_sym_PERCENTifnarch] = ACTIONS(345),
    [anon_sym_PERCENTifnos] = ACTIONS(345),
    [anon_sym_AutoProv] = ACTIONS(345),
    [anon_sym_AutoReq] = ACTIONS(345),
    [anon_sym_AutoReqProv] = ACTIONS(345),
    [anon_sym_BugUrl] = ACTIONS(345),
    [anon_sym_BuildRoot] = ACTIONS(345),
    [anon_sym_BuildSystem] = ACTIONS(345),
    [anon_sym_DistTag] = ACTIONS(345),
    [anon_sym_Distribution] = ACTIONS(345),
    [anon_sym_Epoch] = ACTIONS(345),
    [anon_sym_Group] = ACTIONS(345),
    [anon_sym_License] = ACTIONS(345),
    [anon_sym_ModularityLabel] = ACTIONS(345),
    [anon_sym_Name] = ACTIONS(345),
    [anon_sym_NoPatch] = ACTIONS(345),
    [anon_sym_NoSource] = ACTIONS(345),
    [anon_sym_Packager] = ACTIONS(345),
    [anon_sym_Release] = ACTIONS(345),
    [anon_sym_SourceLicense] = ACTIONS(345),
    [anon_sym_Summary] = ACTIONS(345),
    [anon_sym_URL] = ACTIONS(345),
    [anon_sym_Url] = ACTIONS(345),
    [anon_sym_VCS] = ACTIONS(345),
    [anon_sym_Vendor] = ACTIONS(345),
    [anon_sym_Version] = ACTIONS(345),
    [aux_sym_tag_token1] = ACTIONS(345),
    [aux_sym_tag_token2] = ACTIONS(345),
    [anon_sym_Requires] = ACTIONS(345),
    [anon_sym_BuildArch] = ACTIONS(345),
    [anon_sym_BuildArchitectures] = ACTIONS(345),
    [anon_sym_BuildConflicts] = ACTIONS(345),
    [anon_sym_BuildPrereq] = ACTIONS(345),
    [anon_sym_BuildRequires] = ACTIONS(345),
    [anon_sym_Conflicts] = ACTIONS(345),
    [anon_sym_DocDir] = ACTIONS(345),
    [anon_sym_Enhances] = ACTIONS(345),
    [anon_sym_ExcludeArch] = ACTIONS(345),
    [anon_sym_ExcludeOS] = ACTIONS(345),
    [anon_sym_ExclusiveArch] = ACTIONS(345),
    [anon_sym_ExclusiveOS] = ACTIONS(345),
    [anon_sym_Obsoletes] = ACTIONS(345),
    [anon_sym_OrderWithRequires] = ACTIONS(345),
    [anon_sym_Prefix] = ACTIONS(345),
    [anon_sym_Prefixes] = ACTIONS(345),
    [anon_sym_Prereq] = ACTIONS(345),
    [anon_sym_Provides] = ACTIONS(345),
    [anon_sym_Recommends] = ACTIONS(345),
    [anon_sym_RemovePathPostfixes] = ACTIONS(345),
    [anon_sym_Suggests] = ACTIONS(345),
    [anon_sym_Supplements] = ACTIONS(345),
    [anon_sym_PERCENTdescription] = ACTIONS(345),
    [anon_sym_PERCENTpackage] = ACTIONS(345),
    [anon_sym_PERCENTprep] = ACTIONS(345),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(345),
    [anon_sym_PERCENTconf] = ACTIONS(345),
    [anon_sym_PERCENTbuild] = ACTIONS(345),
    [anon_sym_PERCENTinstall] = ACTIONS(345),
    [anon_sym_PERCENTcheck] = ACTIONS(345),
    [anon_sym_PERCENTclean] = ACTIONS(345),
    [anon_sym_PERCENTpre] = ACTIONS(345),
    [anon_sym_PERCENTpost] = ACTIONS(345),
    [anon_sym_PERCENTpreun] = ACTIONS(345),
    [anon_sym_PERCENTpostun] = ACTIONS(345),
    [anon_sym_PERCENTpretrans] = ACTIONS(345),
    [anon_sym_PERCENTposttrans] = ACTIONS(345),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(345),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(345),
    [anon_sym_PERCENTverify] = ACTIONS(345),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(345),
    [anon_sym_PERCENTtriggerin] = ACTIONS(345),
    [anon_sym_PERCENTtriggerun] = ACTIONS(345),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(345),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(345),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(345),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(345),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(345),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(345),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(345),
    [anon_sym_PERCENTfiles] = ACTIONS(345),
    [anon_sym_PERCENTchangelog] = ACTIONS(345),
    [anon_sym_PERCENTglobal] = ACTIONS(345),
    [anon_sym_PERCENTdefine] = ACTIONS(345),
    [anon_sym_PERCENTundefine] = ACTIONS(345),
    [anon_sym_PERCENT] = ACTIONS(335),
    [sym_string_content_with_newlines] = ACTIONS(337),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(339),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(341),
  },
  [34] = {
    [sym_string_with_newlines] = STATE(86),
    [sym__macro_expansion] = STATE(41),
    [sym_simple_expansion] = STATE(41),
    [sym_full_expansion] = STATE(41),
    [sym_shell_expansion] = STATE(41),
    [aux_sym_string_with_newlines_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(347),
    [aux_sym__top_level_token1] = ACTIONS(349),
    [sym_comment] = ACTIONS(7),
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
    [anon_sym_PERCENTchangelog] = ACTIONS(349),
    [anon_sym_PERCENTglobal] = ACTIONS(349),
    [anon_sym_PERCENTdefine] = ACTIONS(349),
    [anon_sym_PERCENTundefine] = ACTIONS(349),
    [anon_sym_PERCENT] = ACTIONS(335),
    [sym_string_content_with_newlines] = ACTIONS(337),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(339),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(341),
  },
  [35] = {
    [sym_string_with_newlines] = STATE(116),
    [sym__macro_expansion] = STATE(41),
    [sym_simple_expansion] = STATE(41),
    [sym_full_expansion] = STATE(41),
    [sym_shell_expansion] = STATE(41),
    [aux_sym_string_with_newlines_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(351),
    [aux_sym__top_level_token1] = ACTIONS(353),
    [sym_comment] = ACTIONS(7),
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
    [anon_sym_PERCENTglobal] = ACTIONS(353),
    [anon_sym_PERCENTdefine] = ACTIONS(353),
    [anon_sym_PERCENTundefine] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(335),
    [sym_string_content_with_newlines] = ACTIONS(337),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(339),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(341),
  },
  [36] = {
    [sym_string_with_newlines] = STATE(78),
    [sym__macro_expansion] = STATE(42),
    [sym_simple_expansion] = STATE(42),
    [sym_full_expansion] = STATE(42),
    [sym_shell_expansion] = STATE(42),
    [aux_sym_string_with_newlines_repeat1] = STATE(42),
    [aux_sym__top_level_token1] = ACTIONS(353),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(353),
    [anon_sym_PERCENTifarch] = ACTIONS(353),
    [anon_sym_PERCENTifos] = ACTIONS(353),
    [anon_sym_PERCENTifnarch] = ACTIONS(353),
    [anon_sym_PERCENTifnos] = ACTIONS(353),
    [anon_sym_PERCENTendif] = ACTIONS(353),
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
    [anon_sym_PERCENTglobal] = ACTIONS(353),
    [anon_sym_PERCENTdefine] = ACTIONS(353),
    [anon_sym_PERCENTundefine] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
    [sym_string_content_with_newlines] = ACTIONS(357),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(359),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(361),
  },
  [37] = {
    [sym_string_with_newlines] = STATE(73),
    [sym__macro_expansion] = STATE(42),
    [sym_simple_expansion] = STATE(42),
    [sym_full_expansion] = STATE(42),
    [sym_shell_expansion] = STATE(42),
    [aux_sym_string_with_newlines_repeat1] = STATE(42),
    [aux_sym__top_level_token1] = ACTIONS(333),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(333),
    [anon_sym_PERCENTifarch] = ACTIONS(333),
    [anon_sym_PERCENTifos] = ACTIONS(333),
    [anon_sym_PERCENTifnarch] = ACTIONS(333),
    [anon_sym_PERCENTifnos] = ACTIONS(333),
    [anon_sym_PERCENTendif] = ACTIONS(333),
    [anon_sym_AutoProv] = ACTIONS(333),
    [anon_sym_AutoReq] = ACTIONS(333),
    [anon_sym_AutoReqProv] = ACTIONS(333),
    [anon_sym_BugUrl] = ACTIONS(333),
    [anon_sym_BuildRoot] = ACTIONS(333),
    [anon_sym_BuildSystem] = ACTIONS(333),
    [anon_sym_DistTag] = ACTIONS(333),
    [anon_sym_Distribution] = ACTIONS(333),
    [anon_sym_Epoch] = ACTIONS(333),
    [anon_sym_Group] = ACTIONS(333),
    [anon_sym_License] = ACTIONS(333),
    [anon_sym_ModularityLabel] = ACTIONS(333),
    [anon_sym_Name] = ACTIONS(333),
    [anon_sym_NoPatch] = ACTIONS(333),
    [anon_sym_NoSource] = ACTIONS(333),
    [anon_sym_Packager] = ACTIONS(333),
    [anon_sym_Release] = ACTIONS(333),
    [anon_sym_SourceLicense] = ACTIONS(333),
    [anon_sym_Summary] = ACTIONS(333),
    [anon_sym_URL] = ACTIONS(333),
    [anon_sym_Url] = ACTIONS(333),
    [anon_sym_VCS] = ACTIONS(333),
    [anon_sym_Vendor] = ACTIONS(333),
    [anon_sym_Version] = ACTIONS(333),
    [aux_sym_tag_token1] = ACTIONS(333),
    [aux_sym_tag_token2] = ACTIONS(333),
    [anon_sym_Requires] = ACTIONS(333),
    [anon_sym_BuildArch] = ACTIONS(333),
    [anon_sym_BuildArchitectures] = ACTIONS(333),
    [anon_sym_BuildConflicts] = ACTIONS(333),
    [anon_sym_BuildPrereq] = ACTIONS(333),
    [anon_sym_BuildRequires] = ACTIONS(333),
    [anon_sym_Conflicts] = ACTIONS(333),
    [anon_sym_DocDir] = ACTIONS(333),
    [anon_sym_Enhances] = ACTIONS(333),
    [anon_sym_ExcludeArch] = ACTIONS(333),
    [anon_sym_ExcludeOS] = ACTIONS(333),
    [anon_sym_ExclusiveArch] = ACTIONS(333),
    [anon_sym_ExclusiveOS] = ACTIONS(333),
    [anon_sym_Obsoletes] = ACTIONS(333),
    [anon_sym_OrderWithRequires] = ACTIONS(333),
    [anon_sym_Prefix] = ACTIONS(333),
    [anon_sym_Prefixes] = ACTIONS(333),
    [anon_sym_Prereq] = ACTIONS(333),
    [anon_sym_Provides] = ACTIONS(333),
    [anon_sym_Recommends] = ACTIONS(333),
    [anon_sym_RemovePathPostfixes] = ACTIONS(333),
    [anon_sym_Suggests] = ACTIONS(333),
    [anon_sym_Supplements] = ACTIONS(333),
    [anon_sym_PERCENTdescription] = ACTIONS(333),
    [anon_sym_PERCENTpackage] = ACTIONS(333),
    [anon_sym_PERCENTprep] = ACTIONS(333),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(333),
    [anon_sym_PERCENTconf] = ACTIONS(333),
    [anon_sym_PERCENTbuild] = ACTIONS(333),
    [anon_sym_PERCENTinstall] = ACTIONS(333),
    [anon_sym_PERCENTcheck] = ACTIONS(333),
    [anon_sym_PERCENTclean] = ACTIONS(333),
    [anon_sym_PERCENTpre] = ACTIONS(333),
    [anon_sym_PERCENTpost] = ACTIONS(333),
    [anon_sym_PERCENTpreun] = ACTIONS(333),
    [anon_sym_PERCENTpostun] = ACTIONS(333),
    [anon_sym_PERCENTpretrans] = ACTIONS(333),
    [anon_sym_PERCENTposttrans] = ACTIONS(333),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(333),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(333),
    [anon_sym_PERCENTverify] = ACTIONS(333),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(333),
    [anon_sym_PERCENTtriggerin] = ACTIONS(333),
    [anon_sym_PERCENTtriggerun] = ACTIONS(333),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(333),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(333),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(333),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(333),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(333),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(333),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(333),
    [anon_sym_PERCENTfiles] = ACTIONS(333),
    [anon_sym_PERCENTchangelog] = ACTIONS(333),
    [anon_sym_PERCENTglobal] = ACTIONS(333),
    [anon_sym_PERCENTdefine] = ACTIONS(333),
    [anon_sym_PERCENTundefine] = ACTIONS(333),
    [anon_sym_PERCENT] = ACTIONS(355),
    [sym_string_content_with_newlines] = ACTIONS(357),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(359),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(361),
  },
  [38] = {
    [sym_string_with_newlines] = STATE(85),
    [sym__macro_expansion] = STATE(42),
    [sym_simple_expansion] = STATE(42),
    [sym_full_expansion] = STATE(42),
    [sym_shell_expansion] = STATE(42),
    [aux_sym_string_with_newlines_repeat1] = STATE(42),
    [aux_sym__top_level_token1] = ACTIONS(345),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(345),
    [anon_sym_PERCENTifarch] = ACTIONS(345),
    [anon_sym_PERCENTifos] = ACTIONS(345),
    [anon_sym_PERCENTifnarch] = ACTIONS(345),
    [anon_sym_PERCENTifnos] = ACTIONS(345),
    [anon_sym_PERCENTendif] = ACTIONS(345),
    [anon_sym_AutoProv] = ACTIONS(345),
    [anon_sym_AutoReq] = ACTIONS(345),
    [anon_sym_AutoReqProv] = ACTIONS(345),
    [anon_sym_BugUrl] = ACTIONS(345),
    [anon_sym_BuildRoot] = ACTIONS(345),
    [anon_sym_BuildSystem] = ACTIONS(345),
    [anon_sym_DistTag] = ACTIONS(345),
    [anon_sym_Distribution] = ACTIONS(345),
    [anon_sym_Epoch] = ACTIONS(345),
    [anon_sym_Group] = ACTIONS(345),
    [anon_sym_License] = ACTIONS(345),
    [anon_sym_ModularityLabel] = ACTIONS(345),
    [anon_sym_Name] = ACTIONS(345),
    [anon_sym_NoPatch] = ACTIONS(345),
    [anon_sym_NoSource] = ACTIONS(345),
    [anon_sym_Packager] = ACTIONS(345),
    [anon_sym_Release] = ACTIONS(345),
    [anon_sym_SourceLicense] = ACTIONS(345),
    [anon_sym_Summary] = ACTIONS(345),
    [anon_sym_URL] = ACTIONS(345),
    [anon_sym_Url] = ACTIONS(345),
    [anon_sym_VCS] = ACTIONS(345),
    [anon_sym_Vendor] = ACTIONS(345),
    [anon_sym_Version] = ACTIONS(345),
    [aux_sym_tag_token1] = ACTIONS(345),
    [aux_sym_tag_token2] = ACTIONS(345),
    [anon_sym_Requires] = ACTIONS(345),
    [anon_sym_BuildArch] = ACTIONS(345),
    [anon_sym_BuildArchitectures] = ACTIONS(345),
    [anon_sym_BuildConflicts] = ACTIONS(345),
    [anon_sym_BuildPrereq] = ACTIONS(345),
    [anon_sym_BuildRequires] = ACTIONS(345),
    [anon_sym_Conflicts] = ACTIONS(345),
    [anon_sym_DocDir] = ACTIONS(345),
    [anon_sym_Enhances] = ACTIONS(345),
    [anon_sym_ExcludeArch] = ACTIONS(345),
    [anon_sym_ExcludeOS] = ACTIONS(345),
    [anon_sym_ExclusiveArch] = ACTIONS(345),
    [anon_sym_ExclusiveOS] = ACTIONS(345),
    [anon_sym_Obsoletes] = ACTIONS(345),
    [anon_sym_OrderWithRequires] = ACTIONS(345),
    [anon_sym_Prefix] = ACTIONS(345),
    [anon_sym_Prefixes] = ACTIONS(345),
    [anon_sym_Prereq] = ACTIONS(345),
    [anon_sym_Provides] = ACTIONS(345),
    [anon_sym_Recommends] = ACTIONS(345),
    [anon_sym_RemovePathPostfixes] = ACTIONS(345),
    [anon_sym_Suggests] = ACTIONS(345),
    [anon_sym_Supplements] = ACTIONS(345),
    [anon_sym_PERCENTdescription] = ACTIONS(345),
    [anon_sym_PERCENTpackage] = ACTIONS(345),
    [anon_sym_PERCENTprep] = ACTIONS(345),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(345),
    [anon_sym_PERCENTconf] = ACTIONS(345),
    [anon_sym_PERCENTbuild] = ACTIONS(345),
    [anon_sym_PERCENTinstall] = ACTIONS(345),
    [anon_sym_PERCENTcheck] = ACTIONS(345),
    [anon_sym_PERCENTclean] = ACTIONS(345),
    [anon_sym_PERCENTpre] = ACTIONS(345),
    [anon_sym_PERCENTpost] = ACTIONS(345),
    [anon_sym_PERCENTpreun] = ACTIONS(345),
    [anon_sym_PERCENTpostun] = ACTIONS(345),
    [anon_sym_PERCENTpretrans] = ACTIONS(345),
    [anon_sym_PERCENTposttrans] = ACTIONS(345),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(345),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(345),
    [anon_sym_PERCENTverify] = ACTIONS(345),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(345),
    [anon_sym_PERCENTtriggerin] = ACTIONS(345),
    [anon_sym_PERCENTtriggerun] = ACTIONS(345),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(345),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(345),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(345),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(345),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(345),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(345),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(345),
    [anon_sym_PERCENTfiles] = ACTIONS(345),
    [anon_sym_PERCENTchangelog] = ACTIONS(345),
    [anon_sym_PERCENTglobal] = ACTIONS(345),
    [anon_sym_PERCENTdefine] = ACTIONS(345),
    [anon_sym_PERCENTundefine] = ACTIONS(345),
    [anon_sym_PERCENT] = ACTIONS(355),
    [sym_string_content_with_newlines] = ACTIONS(357),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(359),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(361),
  },
  [39] = {
    [sym_string_with_newlines] = STATE(84),
    [sym__macro_expansion] = STATE(42),
    [sym_simple_expansion] = STATE(42),
    [sym_full_expansion] = STATE(42),
    [sym_shell_expansion] = STATE(42),
    [aux_sym_string_with_newlines_repeat1] = STATE(42),
    [aux_sym__top_level_token1] = ACTIONS(349),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(349),
    [anon_sym_PERCENTifarch] = ACTIONS(349),
    [anon_sym_PERCENTifos] = ACTIONS(349),
    [anon_sym_PERCENTifnarch] = ACTIONS(349),
    [anon_sym_PERCENTifnos] = ACTIONS(349),
    [anon_sym_PERCENTendif] = ACTIONS(349),
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
    [anon_sym_PERCENTchangelog] = ACTIONS(349),
    [anon_sym_PERCENTglobal] = ACTIONS(349),
    [anon_sym_PERCENTdefine] = ACTIONS(349),
    [anon_sym_PERCENTundefine] = ACTIONS(349),
    [anon_sym_PERCENT] = ACTIONS(355),
    [sym_string_content_with_newlines] = ACTIONS(357),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(359),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(361),
  },
  [40] = {
    [sym__macro_expansion] = STATE(40),
    [sym_simple_expansion] = STATE(40),
    [sym_full_expansion] = STATE(40),
    [sym_shell_expansion] = STATE(40),
    [aux_sym_string_with_newlines_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym__top_level_token1] = ACTIONS(365),
    [sym_comment] = ACTIONS(7),
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
    [anon_sym_PERCENT] = ACTIONS(367),
    [sym_string_content_with_newlines] = ACTIONS(370),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(373),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(376),
  },
  [41] = {
    [sym__macro_expansion] = STATE(40),
    [sym_simple_expansion] = STATE(40),
    [sym_full_expansion] = STATE(40),
    [sym_shell_expansion] = STATE(40),
    [aux_sym_string_with_newlines_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym__top_level_token1] = ACTIONS(381),
    [sym_comment] = ACTIONS(7),
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
    [anon_sym_PERCENT] = ACTIONS(335),
    [sym_string_content_with_newlines] = ACTIONS(383),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(339),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(341),
  },
  [42] = {
    [sym__macro_expansion] = STATE(43),
    [sym_simple_expansion] = STATE(43),
    [sym_full_expansion] = STATE(43),
    [sym_shell_expansion] = STATE(43),
    [aux_sym_string_with_newlines_repeat1] = STATE(43),
    [aux_sym__top_level_token1] = ACTIONS(381),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(381),
    [anon_sym_PERCENTifarch] = ACTIONS(381),
    [anon_sym_PERCENTifos] = ACTIONS(381),
    [anon_sym_PERCENTifnarch] = ACTIONS(381),
    [anon_sym_PERCENTifnos] = ACTIONS(381),
    [anon_sym_PERCENTendif] = ACTIONS(381),
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
    [anon_sym_PERCENT] = ACTIONS(355),
    [sym_string_content_with_newlines] = ACTIONS(385),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(359),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(361),
  },
  [43] = {
    [sym__macro_expansion] = STATE(43),
    [sym_simple_expansion] = STATE(43),
    [sym_full_expansion] = STATE(43),
    [sym_shell_expansion] = STATE(43),
    [aux_sym_string_with_newlines_repeat1] = STATE(43),
    [aux_sym__top_level_token1] = ACTIONS(365),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(365),
    [anon_sym_PERCENTifarch] = ACTIONS(365),
    [anon_sym_PERCENTifos] = ACTIONS(365),
    [anon_sym_PERCENTifnarch] = ACTIONS(365),
    [anon_sym_PERCENTifnos] = ACTIONS(365),
    [anon_sym_PERCENTendif] = ACTIONS(365),
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
    [anon_sym_PERCENT] = ACTIONS(387),
    [sym_string_content_with_newlines] = ACTIONS(390),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(393),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(396),
  },
  [44] = {
    [sym_changelog_entry] = STATE(49),
    [aux_sym_changelog_repeat1] = STATE(49),
    [aux_sym__top_level_token1] = ACTIONS(399),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(401),
    [anon_sym_PERCENTifarch] = ACTIONS(401),
    [anon_sym_PERCENTifos] = ACTIONS(401),
    [anon_sym_PERCENTifnarch] = ACTIONS(401),
    [anon_sym_PERCENTifnos] = ACTIONS(401),
    [anon_sym_PERCENTendif] = ACTIONS(401),
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
    [anon_sym_STAR] = ACTIONS(403),
    [anon_sym_PERCENTglobal] = ACTIONS(401),
    [anon_sym_PERCENTdefine] = ACTIONS(401),
    [anon_sym_PERCENTundefine] = ACTIONS(401),
    [anon_sym_PERCENT] = ACTIONS(401),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(401),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(401),
  },
  [45] = {
    [sym_changelog_entry] = STATE(45),
    [aux_sym_changelog_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(405),
    [aux_sym__top_level_token1] = ACTIONS(405),
    [sym_comment] = ACTIONS(7),
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
    [anon_sym_STAR] = ACTIONS(409),
    [anon_sym_PERCENTglobal] = ACTIONS(407),
    [anon_sym_PERCENTdefine] = ACTIONS(407),
    [anon_sym_PERCENTundefine] = ACTIONS(407),
    [anon_sym_PERCENT] = ACTIONS(407),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(407),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(407),
  },
  [46] = {
    [sym_changelog_entry] = STATE(44),
    [aux_sym_changelog_repeat1] = STATE(44),
    [aux_sym__top_level_token1] = ACTIONS(412),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(414),
    [anon_sym_PERCENTifarch] = ACTIONS(414),
    [anon_sym_PERCENTifos] = ACTIONS(414),
    [anon_sym_PERCENTifnarch] = ACTIONS(414),
    [anon_sym_PERCENTifnos] = ACTIONS(414),
    [anon_sym_PERCENTendif] = ACTIONS(414),
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
    [anon_sym_STAR] = ACTIONS(403),
    [anon_sym_PERCENTglobal] = ACTIONS(414),
    [anon_sym_PERCENTdefine] = ACTIONS(414),
    [anon_sym_PERCENTundefine] = ACTIONS(414),
    [anon_sym_PERCENT] = ACTIONS(414),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(414),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(414),
  },
  [47] = {
    [sym_changelog_entry] = STATE(45),
    [aux_sym_changelog_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(399),
    [aux_sym__top_level_token1] = ACTIONS(399),
    [sym_comment] = ACTIONS(7),
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
    [anon_sym_STAR] = ACTIONS(416),
    [anon_sym_PERCENTglobal] = ACTIONS(401),
    [anon_sym_PERCENTdefine] = ACTIONS(401),
    [anon_sym_PERCENTundefine] = ACTIONS(401),
    [anon_sym_PERCENT] = ACTIONS(401),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(401),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(401),
  },
  [48] = {
    [aux_sym_changelog_entry_repeat1] = STATE(48),
    [aux_sym__top_level_token1] = ACTIONS(418),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(420),
    [anon_sym_PERCENTifarch] = ACTIONS(420),
    [anon_sym_PERCENTifos] = ACTIONS(420),
    [anon_sym_PERCENTifnarch] = ACTIONS(420),
    [anon_sym_PERCENTifnos] = ACTIONS(420),
    [anon_sym_PERCENTendif] = ACTIONS(420),
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
    [anon_sym_DASH] = ACTIONS(422),
    [anon_sym_PERCENTchangelog] = ACTIONS(420),
    [anon_sym_STAR] = ACTIONS(420),
    [anon_sym_PERCENTglobal] = ACTIONS(420),
    [anon_sym_PERCENTdefine] = ACTIONS(420),
    [anon_sym_PERCENTundefine] = ACTIONS(420),
    [anon_sym_PERCENT] = ACTIONS(420),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(420),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(420),
  },
  [49] = {
    [sym_changelog_entry] = STATE(49),
    [aux_sym_changelog_repeat1] = STATE(49),
    [aux_sym__top_level_token1] = ACTIONS(405),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(407),
    [anon_sym_PERCENTifarch] = ACTIONS(407),
    [anon_sym_PERCENTifos] = ACTIONS(407),
    [anon_sym_PERCENTifnarch] = ACTIONS(407),
    [anon_sym_PERCENTifnos] = ACTIONS(407),
    [anon_sym_PERCENTendif] = ACTIONS(407),
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
    [anon_sym_STAR] = ACTIONS(425),
    [anon_sym_PERCENTglobal] = ACTIONS(407),
    [anon_sym_PERCENTdefine] = ACTIONS(407),
    [anon_sym_PERCENTundefine] = ACTIONS(407),
    [anon_sym_PERCENT] = ACTIONS(407),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(407),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(407),
  },
  [50] = {
    [aux_sym_changelog_entry_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(428),
    [aux_sym__top_level_token1] = ACTIONS(428),
    [sym_comment] = ACTIONS(7),
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
    [anon_sym_DASH] = ACTIONS(432),
    [anon_sym_PERCENTchangelog] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(430),
    [anon_sym_PERCENTglobal] = ACTIONS(430),
    [anon_sym_PERCENTdefine] = ACTIONS(430),
    [anon_sym_PERCENTundefine] = ACTIONS(430),
    [anon_sym_PERCENT] = ACTIONS(430),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(430),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(430),
  },
  [51] = {
    [aux_sym_changelog_entry_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(434),
    [aux_sym__top_level_token1] = ACTIONS(434),
    [sym_comment] = ACTIONS(7),
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
    [anon_sym_DASH] = ACTIONS(432),
    [anon_sym_PERCENTchangelog] = ACTIONS(436),
    [anon_sym_STAR] = ACTIONS(436),
    [anon_sym_PERCENTglobal] = ACTIONS(436),
    [anon_sym_PERCENTdefine] = ACTIONS(436),
    [anon_sym_PERCENTundefine] = ACTIONS(436),
    [anon_sym_PERCENT] = ACTIONS(436),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(436),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(436),
  },
  [52] = {
    [aux_sym_changelog_entry_repeat1] = STATE(48),
    [aux_sym__top_level_token1] = ACTIONS(434),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(436),
    [anon_sym_PERCENTifarch] = ACTIONS(436),
    [anon_sym_PERCENTifos] = ACTIONS(436),
    [anon_sym_PERCENTifnarch] = ACTIONS(436),
    [anon_sym_PERCENTifnos] = ACTIONS(436),
    [anon_sym_PERCENTendif] = ACTIONS(436),
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
    [anon_sym_DASH] = ACTIONS(438),
    [anon_sym_PERCENTchangelog] = ACTIONS(436),
    [anon_sym_STAR] = ACTIONS(436),
    [anon_sym_PERCENTglobal] = ACTIONS(436),
    [anon_sym_PERCENTdefine] = ACTIONS(436),
    [anon_sym_PERCENTundefine] = ACTIONS(436),
    [anon_sym_PERCENT] = ACTIONS(436),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(436),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(436),
  },
  [53] = {
    [aux_sym_changelog_entry_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(418),
    [aux_sym__top_level_token1] = ACTIONS(418),
    [sym_comment] = ACTIONS(7),
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
    [anon_sym_DASH] = ACTIONS(440),
    [anon_sym_PERCENTchangelog] = ACTIONS(420),
    [anon_sym_STAR] = ACTIONS(420),
    [anon_sym_PERCENTglobal] = ACTIONS(420),
    [anon_sym_PERCENTdefine] = ACTIONS(420),
    [anon_sym_PERCENTundefine] = ACTIONS(420),
    [anon_sym_PERCENT] = ACTIONS(420),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(420),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(420),
  },
  [54] = {
    [aux_sym_changelog_entry_repeat1] = STATE(52),
    [aux_sym__top_level_token1] = ACTIONS(428),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(430),
    [anon_sym_PERCENTifarch] = ACTIONS(430),
    [anon_sym_PERCENTifos] = ACTIONS(430),
    [anon_sym_PERCENTifnarch] = ACTIONS(430),
    [anon_sym_PERCENTifnos] = ACTIONS(430),
    [anon_sym_PERCENTendif] = ACTIONS(430),
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
    [anon_sym_DASH] = ACTIONS(438),
    [anon_sym_PERCENTchangelog] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(430),
    [anon_sym_PERCENTglobal] = ACTIONS(430),
    [anon_sym_PERCENTdefine] = ACTIONS(430),
    [anon_sym_PERCENTundefine] = ACTIONS(430),
    [anon_sym_PERCENT] = ACTIONS(430),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(430),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(430),
  },
  [55] = {
    [sym_changelog_entry] = STATE(47),
    [aux_sym_changelog_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(412),
    [aux_sym__top_level_token1] = ACTIONS(412),
    [sym_comment] = ACTIONS(7),
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
    [anon_sym_STAR] = ACTIONS(416),
    [anon_sym_PERCENTglobal] = ACTIONS(414),
    [anon_sym_PERCENTdefine] = ACTIONS(414),
    [anon_sym_PERCENTundefine] = ACTIONS(414),
    [anon_sym_PERCENT] = ACTIONS(414),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(414),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(414),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [aux_sym__top_level_token1] = ACTIONS(443),
    [sym_comment] = ACTIONS(7),
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
    [anon_sym_DASH] = ACTIONS(445),
    [anon_sym_PERCENTchangelog] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(445),
    [anon_sym_PERCENTglobal] = ACTIONS(445),
    [anon_sym_PERCENTdefine] = ACTIONS(445),
    [anon_sym_PERCENTundefine] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(445),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(445),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(445),
  },
  [57] = {
    [aux_sym__top_level_token1] = ACTIONS(443),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(445),
    [anon_sym_PERCENTifarch] = ACTIONS(445),
    [anon_sym_PERCENTifos] = ACTIONS(445),
    [anon_sym_PERCENTifnarch] = ACTIONS(445),
    [anon_sym_PERCENTifnos] = ACTIONS(445),
    [anon_sym_PERCENTendif] = ACTIONS(445),
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
    [anon_sym_DASH] = ACTIONS(445),
    [anon_sym_PERCENTchangelog] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(445),
    [anon_sym_PERCENTglobal] = ACTIONS(445),
    [anon_sym_PERCENTdefine] = ACTIONS(445),
    [anon_sym_PERCENTundefine] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(445),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(445),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(445),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym__top_level_token1] = ACTIONS(449),
    [sym_comment] = ACTIONS(7),
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
    [sym_string_content_with_newlines] = ACTIONS(449),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(449),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(449),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [aux_sym__top_level_token1] = ACTIONS(453),
    [sym_comment] = ACTIONS(7),
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
    [sym_string_content_with_newlines] = ACTIONS(453),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(453),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(453),
  },
  [60] = {
    [aux_sym__top_level_token1] = ACTIONS(449),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(449),
    [anon_sym_PERCENTifarch] = ACTIONS(449),
    [anon_sym_PERCENTifos] = ACTIONS(449),
    [anon_sym_PERCENTifnarch] = ACTIONS(449),
    [anon_sym_PERCENTifnos] = ACTIONS(449),
    [anon_sym_PERCENTendif] = ACTIONS(449),
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
    [sym_string_content_with_newlines] = ACTIONS(449),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(449),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(449),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [aux_sym__top_level_token1] = ACTIONS(457),
    [sym_comment] = ACTIONS(7),
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
    [sym_string_content_with_newlines] = ACTIONS(457),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(457),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(457),
  },
  [62] = {
    [aux_sym__top_level_token1] = ACTIONS(457),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(457),
    [anon_sym_PERCENTifarch] = ACTIONS(457),
    [anon_sym_PERCENTifos] = ACTIONS(457),
    [anon_sym_PERCENTifnarch] = ACTIONS(457),
    [anon_sym_PERCENTifnos] = ACTIONS(457),
    [anon_sym_PERCENTendif] = ACTIONS(457),
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
    [sym_string_content_with_newlines] = ACTIONS(457),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(457),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(457),
  },
  [63] = {
    [aux_sym__top_level_token1] = ACTIONS(453),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(453),
    [anon_sym_PERCENTifarch] = ACTIONS(453),
    [anon_sym_PERCENTifos] = ACTIONS(453),
    [anon_sym_PERCENTifnarch] = ACTIONS(453),
    [anon_sym_PERCENTifnos] = ACTIONS(453),
    [anon_sym_PERCENTendif] = ACTIONS(453),
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
    [sym_string_content_with_newlines] = ACTIONS(453),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(453),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(453),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [aux_sym__top_level_token1] = ACTIONS(461),
    [sym_comment] = ACTIONS(7),
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
    [sym_string_content_with_newlines] = ACTIONS(461),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(461),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(461),
  },
  [65] = {
    [aux_sym__top_level_token1] = ACTIONS(461),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(461),
    [anon_sym_PERCENTifarch] = ACTIONS(461),
    [anon_sym_PERCENTifos] = ACTIONS(461),
    [anon_sym_PERCENTifnarch] = ACTIONS(461),
    [anon_sym_PERCENTifnos] = ACTIONS(461),
    [anon_sym_PERCENTendif] = ACTIONS(461),
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
    [sym_string_content_with_newlines] = ACTIONS(461),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(461),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(461),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [aux_sym__top_level_token1] = ACTIONS(465),
    [sym_comment] = ACTIONS(7),
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
    [sym_string_content_with_newlines] = ACTIONS(465),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(465),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(465),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [aux_sym__top_level_token1] = ACTIONS(469),
    [sym_comment] = ACTIONS(7),
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
    [sym_string_content_with_newlines] = ACTIONS(469),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(469),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(469),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym__top_level_token1] = ACTIONS(365),
    [sym_comment] = ACTIONS(7),
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
  [69] = {
    [aux_sym__top_level_token1] = ACTIONS(465),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(465),
    [anon_sym_PERCENTifarch] = ACTIONS(465),
    [anon_sym_PERCENTifos] = ACTIONS(465),
    [anon_sym_PERCENTifnarch] = ACTIONS(465),
    [anon_sym_PERCENTifnos] = ACTIONS(465),
    [anon_sym_PERCENTendif] = ACTIONS(465),
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
    [sym_string_content_with_newlines] = ACTIONS(465),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(465),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(465),
  },
  [70] = {
    [aux_sym__top_level_token1] = ACTIONS(365),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(365),
    [anon_sym_PERCENTifarch] = ACTIONS(365),
    [anon_sym_PERCENTifos] = ACTIONS(365),
    [anon_sym_PERCENTifnarch] = ACTIONS(365),
    [anon_sym_PERCENTifnos] = ACTIONS(365),
    [anon_sym_PERCENTendif] = ACTIONS(365),
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
  [71] = {
    [aux_sym__top_level_token1] = ACTIONS(469),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(469),
    [anon_sym_PERCENTifarch] = ACTIONS(469),
    [anon_sym_PERCENTifos] = ACTIONS(469),
    [anon_sym_PERCENTifnarch] = ACTIONS(469),
    [anon_sym_PERCENTifnos] = ACTIONS(469),
    [anon_sym_PERCENTendif] = ACTIONS(469),
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
    [sym_string_content_with_newlines] = ACTIONS(469),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(469),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(469),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [aux_sym__top_level_token1] = ACTIONS(455),
    [sym_comment] = ACTIONS(7),
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
  [73] = {
    [aux_sym__top_level_token1] = ACTIONS(471),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(473),
    [anon_sym_PERCENTifarch] = ACTIONS(473),
    [anon_sym_PERCENTifos] = ACTIONS(473),
    [anon_sym_PERCENTifnarch] = ACTIONS(473),
    [anon_sym_PERCENTifnos] = ACTIONS(473),
    [anon_sym_PERCENTendif] = ACTIONS(473),
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
  [74] = {
    [aux_sym__top_level_token1] = ACTIONS(475),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(477),
    [anon_sym_PERCENTifarch] = ACTIONS(477),
    [anon_sym_PERCENTifos] = ACTIONS(477),
    [anon_sym_PERCENTifnarch] = ACTIONS(477),
    [anon_sym_PERCENTifnos] = ACTIONS(477),
    [anon_sym_PERCENTendif] = ACTIONS(477),
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
  [75] = {
    [aux_sym__top_level_token1] = ACTIONS(479),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(481),
    [anon_sym_PERCENTifarch] = ACTIONS(481),
    [anon_sym_PERCENTifos] = ACTIONS(481),
    [anon_sym_PERCENTifnarch] = ACTIONS(481),
    [anon_sym_PERCENTifnos] = ACTIONS(481),
    [anon_sym_PERCENTendif] = ACTIONS(481),
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
  [76] = {
    [aux_sym__top_level_token1] = ACTIONS(467),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(469),
    [anon_sym_PERCENTifarch] = ACTIONS(469),
    [anon_sym_PERCENTifos] = ACTIONS(469),
    [anon_sym_PERCENTifnarch] = ACTIONS(469),
    [anon_sym_PERCENTifnos] = ACTIONS(469),
    [anon_sym_PERCENTendif] = ACTIONS(469),
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
  [77] = {
    [aux_sym__top_level_token1] = ACTIONS(483),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(485),
    [anon_sym_PERCENTifarch] = ACTIONS(485),
    [anon_sym_PERCENTifos] = ACTIONS(485),
    [anon_sym_PERCENTifnarch] = ACTIONS(485),
    [anon_sym_PERCENTifnos] = ACTIONS(485),
    [anon_sym_PERCENTendif] = ACTIONS(485),
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
  [78] = {
    [aux_sym__top_level_token1] = ACTIONS(487),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(489),
    [anon_sym_PERCENTifarch] = ACTIONS(489),
    [anon_sym_PERCENTifos] = ACTIONS(489),
    [anon_sym_PERCENTifnarch] = ACTIONS(489),
    [anon_sym_PERCENTifnos] = ACTIONS(489),
    [anon_sym_PERCENTendif] = ACTIONS(489),
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
  [79] = {
    [aux_sym__top_level_token1] = ACTIONS(491),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(493),
    [anon_sym_PERCENTifarch] = ACTIONS(493),
    [anon_sym_PERCENTifos] = ACTIONS(493),
    [anon_sym_PERCENTifnarch] = ACTIONS(493),
    [anon_sym_PERCENTifnos] = ACTIONS(493),
    [anon_sym_PERCENTendif] = ACTIONS(493),
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
  [80] = {
    [aux_sym__top_level_token1] = ACTIONS(459),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(461),
    [anon_sym_PERCENTifarch] = ACTIONS(461),
    [anon_sym_PERCENTifos] = ACTIONS(461),
    [anon_sym_PERCENTifnarch] = ACTIONS(461),
    [anon_sym_PERCENTifnos] = ACTIONS(461),
    [anon_sym_PERCENTendif] = ACTIONS(461),
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
  [81] = {
    [aux_sym__top_level_token1] = ACTIONS(495),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(497),
    [anon_sym_PERCENTifarch] = ACTIONS(497),
    [anon_sym_PERCENTifos] = ACTIONS(497),
    [anon_sym_PERCENTifnarch] = ACTIONS(497),
    [anon_sym_PERCENTifnos] = ACTIONS(497),
    [anon_sym_PERCENTendif] = ACTIONS(497),
    [anon_sym_AutoProv] = ACTIONS(497),
    [anon_sym_AutoReq] = ACTIONS(497),
    [anon_sym_AutoReqProv] = ACTIONS(497),
    [anon_sym_BugUrl] = ACTIONS(497),
    [anon_sym_BuildRoot] = ACTIONS(497),
    [anon_sym_BuildSystem] = ACTIONS(497),
    [anon_sym_DistTag] = ACTIONS(497),
    [anon_sym_Distribution] = ACTIONS(497),
    [anon_sym_Epoch] = ACTIONS(497),
    [anon_sym_Group] = ACTIONS(497),
    [anon_sym_License] = ACTIONS(497),
    [anon_sym_ModularityLabel] = ACTIONS(497),
    [anon_sym_Name] = ACTIONS(497),
    [anon_sym_NoPatch] = ACTIONS(497),
    [anon_sym_NoSource] = ACTIONS(497),
    [anon_sym_Packager] = ACTIONS(497),
    [anon_sym_Release] = ACTIONS(497),
    [anon_sym_SourceLicense] = ACTIONS(497),
    [anon_sym_Summary] = ACTIONS(497),
    [anon_sym_URL] = ACTIONS(497),
    [anon_sym_Url] = ACTIONS(497),
    [anon_sym_VCS] = ACTIONS(497),
    [anon_sym_Vendor] = ACTIONS(497),
    [anon_sym_Version] = ACTIONS(497),
    [aux_sym_tag_token1] = ACTIONS(497),
    [aux_sym_tag_token2] = ACTIONS(497),
    [anon_sym_Requires] = ACTIONS(497),
    [anon_sym_BuildArch] = ACTIONS(497),
    [anon_sym_BuildArchitectures] = ACTIONS(497),
    [anon_sym_BuildConflicts] = ACTIONS(497),
    [anon_sym_BuildPrereq] = ACTIONS(497),
    [anon_sym_BuildRequires] = ACTIONS(497),
    [anon_sym_Conflicts] = ACTIONS(497),
    [anon_sym_DocDir] = ACTIONS(497),
    [anon_sym_Enhances] = ACTIONS(497),
    [anon_sym_ExcludeArch] = ACTIONS(497),
    [anon_sym_ExcludeOS] = ACTIONS(497),
    [anon_sym_ExclusiveArch] = ACTIONS(497),
    [anon_sym_ExclusiveOS] = ACTIONS(497),
    [anon_sym_Obsoletes] = ACTIONS(497),
    [anon_sym_OrderWithRequires] = ACTIONS(497),
    [anon_sym_Prefix] = ACTIONS(497),
    [anon_sym_Prefixes] = ACTIONS(497),
    [anon_sym_Prereq] = ACTIONS(497),
    [anon_sym_Provides] = ACTIONS(497),
    [anon_sym_Recommends] = ACTIONS(497),
    [anon_sym_RemovePathPostfixes] = ACTIONS(497),
    [anon_sym_Suggests] = ACTIONS(497),
    [anon_sym_Supplements] = ACTIONS(497),
    [anon_sym_PERCENTdescription] = ACTIONS(497),
    [anon_sym_PERCENTpackage] = ACTIONS(497),
    [anon_sym_PERCENTprep] = ACTIONS(497),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(497),
    [anon_sym_PERCENTconf] = ACTIONS(497),
    [anon_sym_PERCENTbuild] = ACTIONS(497),
    [anon_sym_PERCENTinstall] = ACTIONS(497),
    [anon_sym_PERCENTcheck] = ACTIONS(497),
    [anon_sym_PERCENTclean] = ACTIONS(497),
    [anon_sym_PERCENTpre] = ACTIONS(497),
    [anon_sym_PERCENTpost] = ACTIONS(497),
    [anon_sym_PERCENTpreun] = ACTIONS(497),
    [anon_sym_PERCENTpostun] = ACTIONS(497),
    [anon_sym_PERCENTpretrans] = ACTIONS(497),
    [anon_sym_PERCENTposttrans] = ACTIONS(497),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(497),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(497),
    [anon_sym_PERCENTverify] = ACTIONS(497),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(497),
    [anon_sym_PERCENTtriggerin] = ACTIONS(497),
    [anon_sym_PERCENTtriggerun] = ACTIONS(497),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(497),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(497),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(497),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(497),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(497),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(497),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(497),
    [anon_sym_PERCENTfiles] = ACTIONS(497),
    [anon_sym_PERCENTchangelog] = ACTIONS(497),
    [anon_sym_PERCENTglobal] = ACTIONS(497),
    [anon_sym_PERCENTdefine] = ACTIONS(497),
    [anon_sym_PERCENTundefine] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(497),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(497),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(497),
  },
  [82] = {
    [aux_sym__top_level_token1] = ACTIONS(451),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(453),
    [anon_sym_PERCENTifarch] = ACTIONS(453),
    [anon_sym_PERCENTifos] = ACTIONS(453),
    [anon_sym_PERCENTifnarch] = ACTIONS(453),
    [anon_sym_PERCENTifnos] = ACTIONS(453),
    [anon_sym_PERCENTendif] = ACTIONS(453),
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
  [83] = {
    [aux_sym__top_level_token1] = ACTIONS(499),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(501),
    [anon_sym_PERCENTifarch] = ACTIONS(501),
    [anon_sym_PERCENTifos] = ACTIONS(501),
    [anon_sym_PERCENTifnarch] = ACTIONS(501),
    [anon_sym_PERCENTifnos] = ACTIONS(501),
    [anon_sym_PERCENTendif] = ACTIONS(501),
    [anon_sym_AutoProv] = ACTIONS(501),
    [anon_sym_AutoReq] = ACTIONS(501),
    [anon_sym_AutoReqProv] = ACTIONS(501),
    [anon_sym_BugUrl] = ACTIONS(501),
    [anon_sym_BuildRoot] = ACTIONS(501),
    [anon_sym_BuildSystem] = ACTIONS(501),
    [anon_sym_DistTag] = ACTIONS(501),
    [anon_sym_Distribution] = ACTIONS(501),
    [anon_sym_Epoch] = ACTIONS(501),
    [anon_sym_Group] = ACTIONS(501),
    [anon_sym_License] = ACTIONS(501),
    [anon_sym_ModularityLabel] = ACTIONS(501),
    [anon_sym_Name] = ACTIONS(501),
    [anon_sym_NoPatch] = ACTIONS(501),
    [anon_sym_NoSource] = ACTIONS(501),
    [anon_sym_Packager] = ACTIONS(501),
    [anon_sym_Release] = ACTIONS(501),
    [anon_sym_SourceLicense] = ACTIONS(501),
    [anon_sym_Summary] = ACTIONS(501),
    [anon_sym_URL] = ACTIONS(501),
    [anon_sym_Url] = ACTIONS(501),
    [anon_sym_VCS] = ACTIONS(501),
    [anon_sym_Vendor] = ACTIONS(501),
    [anon_sym_Version] = ACTIONS(501),
    [aux_sym_tag_token1] = ACTIONS(501),
    [aux_sym_tag_token2] = ACTIONS(501),
    [anon_sym_Requires] = ACTIONS(501),
    [anon_sym_BuildArch] = ACTIONS(501),
    [anon_sym_BuildArchitectures] = ACTIONS(501),
    [anon_sym_BuildConflicts] = ACTIONS(501),
    [anon_sym_BuildPrereq] = ACTIONS(501),
    [anon_sym_BuildRequires] = ACTIONS(501),
    [anon_sym_Conflicts] = ACTIONS(501),
    [anon_sym_DocDir] = ACTIONS(501),
    [anon_sym_Enhances] = ACTIONS(501),
    [anon_sym_ExcludeArch] = ACTIONS(501),
    [anon_sym_ExcludeOS] = ACTIONS(501),
    [anon_sym_ExclusiveArch] = ACTIONS(501),
    [anon_sym_ExclusiveOS] = ACTIONS(501),
    [anon_sym_Obsoletes] = ACTIONS(501),
    [anon_sym_OrderWithRequires] = ACTIONS(501),
    [anon_sym_Prefix] = ACTIONS(501),
    [anon_sym_Prefixes] = ACTIONS(501),
    [anon_sym_Prereq] = ACTIONS(501),
    [anon_sym_Provides] = ACTIONS(501),
    [anon_sym_Recommends] = ACTIONS(501),
    [anon_sym_RemovePathPostfixes] = ACTIONS(501),
    [anon_sym_Suggests] = ACTIONS(501),
    [anon_sym_Supplements] = ACTIONS(501),
    [anon_sym_PERCENTdescription] = ACTIONS(501),
    [anon_sym_PERCENTpackage] = ACTIONS(501),
    [anon_sym_PERCENTprep] = ACTIONS(501),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(501),
    [anon_sym_PERCENTconf] = ACTIONS(501),
    [anon_sym_PERCENTbuild] = ACTIONS(501),
    [anon_sym_PERCENTinstall] = ACTIONS(501),
    [anon_sym_PERCENTcheck] = ACTIONS(501),
    [anon_sym_PERCENTclean] = ACTIONS(501),
    [anon_sym_PERCENTpre] = ACTIONS(501),
    [anon_sym_PERCENTpost] = ACTIONS(501),
    [anon_sym_PERCENTpreun] = ACTIONS(501),
    [anon_sym_PERCENTpostun] = ACTIONS(501),
    [anon_sym_PERCENTpretrans] = ACTIONS(501),
    [anon_sym_PERCENTposttrans] = ACTIONS(501),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(501),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(501),
    [anon_sym_PERCENTverify] = ACTIONS(501),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(501),
    [anon_sym_PERCENTtriggerin] = ACTIONS(501),
    [anon_sym_PERCENTtriggerun] = ACTIONS(501),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(501),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(501),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(501),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(501),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(501),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(501),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(501),
    [anon_sym_PERCENTfiles] = ACTIONS(501),
    [anon_sym_PERCENTchangelog] = ACTIONS(501),
    [anon_sym_PERCENTglobal] = ACTIONS(501),
    [anon_sym_PERCENTdefine] = ACTIONS(501),
    [anon_sym_PERCENTundefine] = ACTIONS(501),
    [anon_sym_PERCENT] = ACTIONS(501),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(501),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(501),
  },
  [84] = {
    [aux_sym__top_level_token1] = ACTIONS(503),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(505),
    [anon_sym_PERCENTifarch] = ACTIONS(505),
    [anon_sym_PERCENTifos] = ACTIONS(505),
    [anon_sym_PERCENTifnarch] = ACTIONS(505),
    [anon_sym_PERCENTifnos] = ACTIONS(505),
    [anon_sym_PERCENTendif] = ACTIONS(505),
    [anon_sym_AutoProv] = ACTIONS(505),
    [anon_sym_AutoReq] = ACTIONS(505),
    [anon_sym_AutoReqProv] = ACTIONS(505),
    [anon_sym_BugUrl] = ACTIONS(505),
    [anon_sym_BuildRoot] = ACTIONS(505),
    [anon_sym_BuildSystem] = ACTIONS(505),
    [anon_sym_DistTag] = ACTIONS(505),
    [anon_sym_Distribution] = ACTIONS(505),
    [anon_sym_Epoch] = ACTIONS(505),
    [anon_sym_Group] = ACTIONS(505),
    [anon_sym_License] = ACTIONS(505),
    [anon_sym_ModularityLabel] = ACTIONS(505),
    [anon_sym_Name] = ACTIONS(505),
    [anon_sym_NoPatch] = ACTIONS(505),
    [anon_sym_NoSource] = ACTIONS(505),
    [anon_sym_Packager] = ACTIONS(505),
    [anon_sym_Release] = ACTIONS(505),
    [anon_sym_SourceLicense] = ACTIONS(505),
    [anon_sym_Summary] = ACTIONS(505),
    [anon_sym_URL] = ACTIONS(505),
    [anon_sym_Url] = ACTIONS(505),
    [anon_sym_VCS] = ACTIONS(505),
    [anon_sym_Vendor] = ACTIONS(505),
    [anon_sym_Version] = ACTIONS(505),
    [aux_sym_tag_token1] = ACTIONS(505),
    [aux_sym_tag_token2] = ACTIONS(505),
    [anon_sym_Requires] = ACTIONS(505),
    [anon_sym_BuildArch] = ACTIONS(505),
    [anon_sym_BuildArchitectures] = ACTIONS(505),
    [anon_sym_BuildConflicts] = ACTIONS(505),
    [anon_sym_BuildPrereq] = ACTIONS(505),
    [anon_sym_BuildRequires] = ACTIONS(505),
    [anon_sym_Conflicts] = ACTIONS(505),
    [anon_sym_DocDir] = ACTIONS(505),
    [anon_sym_Enhances] = ACTIONS(505),
    [anon_sym_ExcludeArch] = ACTIONS(505),
    [anon_sym_ExcludeOS] = ACTIONS(505),
    [anon_sym_ExclusiveArch] = ACTIONS(505),
    [anon_sym_ExclusiveOS] = ACTIONS(505),
    [anon_sym_Obsoletes] = ACTIONS(505),
    [anon_sym_OrderWithRequires] = ACTIONS(505),
    [anon_sym_Prefix] = ACTIONS(505),
    [anon_sym_Prefixes] = ACTIONS(505),
    [anon_sym_Prereq] = ACTIONS(505),
    [anon_sym_Provides] = ACTIONS(505),
    [anon_sym_Recommends] = ACTIONS(505),
    [anon_sym_RemovePathPostfixes] = ACTIONS(505),
    [anon_sym_Suggests] = ACTIONS(505),
    [anon_sym_Supplements] = ACTIONS(505),
    [anon_sym_PERCENTdescription] = ACTIONS(505),
    [anon_sym_PERCENTpackage] = ACTIONS(505),
    [anon_sym_PERCENTprep] = ACTIONS(505),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(505),
    [anon_sym_PERCENTconf] = ACTIONS(505),
    [anon_sym_PERCENTbuild] = ACTIONS(505),
    [anon_sym_PERCENTinstall] = ACTIONS(505),
    [anon_sym_PERCENTcheck] = ACTIONS(505),
    [anon_sym_PERCENTclean] = ACTIONS(505),
    [anon_sym_PERCENTpre] = ACTIONS(505),
    [anon_sym_PERCENTpost] = ACTIONS(505),
    [anon_sym_PERCENTpreun] = ACTIONS(505),
    [anon_sym_PERCENTpostun] = ACTIONS(505),
    [anon_sym_PERCENTpretrans] = ACTIONS(505),
    [anon_sym_PERCENTposttrans] = ACTIONS(505),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(505),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(505),
    [anon_sym_PERCENTverify] = ACTIONS(505),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(505),
    [anon_sym_PERCENTtriggerin] = ACTIONS(505),
    [anon_sym_PERCENTtriggerun] = ACTIONS(505),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(505),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(505),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(505),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(505),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(505),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(505),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(505),
    [anon_sym_PERCENTfiles] = ACTIONS(505),
    [anon_sym_PERCENTchangelog] = ACTIONS(505),
    [anon_sym_PERCENTglobal] = ACTIONS(505),
    [anon_sym_PERCENTdefine] = ACTIONS(505),
    [anon_sym_PERCENTundefine] = ACTIONS(505),
    [anon_sym_PERCENT] = ACTIONS(505),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(505),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(505),
  },
  [85] = {
    [aux_sym__top_level_token1] = ACTIONS(507),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(509),
    [anon_sym_PERCENTifarch] = ACTIONS(509),
    [anon_sym_PERCENTifos] = ACTIONS(509),
    [anon_sym_PERCENTifnarch] = ACTIONS(509),
    [anon_sym_PERCENTifnos] = ACTIONS(509),
    [anon_sym_PERCENTendif] = ACTIONS(509),
    [anon_sym_AutoProv] = ACTIONS(509),
    [anon_sym_AutoReq] = ACTIONS(509),
    [anon_sym_AutoReqProv] = ACTIONS(509),
    [anon_sym_BugUrl] = ACTIONS(509),
    [anon_sym_BuildRoot] = ACTIONS(509),
    [anon_sym_BuildSystem] = ACTIONS(509),
    [anon_sym_DistTag] = ACTIONS(509),
    [anon_sym_Distribution] = ACTIONS(509),
    [anon_sym_Epoch] = ACTIONS(509),
    [anon_sym_Group] = ACTIONS(509),
    [anon_sym_License] = ACTIONS(509),
    [anon_sym_ModularityLabel] = ACTIONS(509),
    [anon_sym_Name] = ACTIONS(509),
    [anon_sym_NoPatch] = ACTIONS(509),
    [anon_sym_NoSource] = ACTIONS(509),
    [anon_sym_Packager] = ACTIONS(509),
    [anon_sym_Release] = ACTIONS(509),
    [anon_sym_SourceLicense] = ACTIONS(509),
    [anon_sym_Summary] = ACTIONS(509),
    [anon_sym_URL] = ACTIONS(509),
    [anon_sym_Url] = ACTIONS(509),
    [anon_sym_VCS] = ACTIONS(509),
    [anon_sym_Vendor] = ACTIONS(509),
    [anon_sym_Version] = ACTIONS(509),
    [aux_sym_tag_token1] = ACTIONS(509),
    [aux_sym_tag_token2] = ACTIONS(509),
    [anon_sym_Requires] = ACTIONS(509),
    [anon_sym_BuildArch] = ACTIONS(509),
    [anon_sym_BuildArchitectures] = ACTIONS(509),
    [anon_sym_BuildConflicts] = ACTIONS(509),
    [anon_sym_BuildPrereq] = ACTIONS(509),
    [anon_sym_BuildRequires] = ACTIONS(509),
    [anon_sym_Conflicts] = ACTIONS(509),
    [anon_sym_DocDir] = ACTIONS(509),
    [anon_sym_Enhances] = ACTIONS(509),
    [anon_sym_ExcludeArch] = ACTIONS(509),
    [anon_sym_ExcludeOS] = ACTIONS(509),
    [anon_sym_ExclusiveArch] = ACTIONS(509),
    [anon_sym_ExclusiveOS] = ACTIONS(509),
    [anon_sym_Obsoletes] = ACTIONS(509),
    [anon_sym_OrderWithRequires] = ACTIONS(509),
    [anon_sym_Prefix] = ACTIONS(509),
    [anon_sym_Prefixes] = ACTIONS(509),
    [anon_sym_Prereq] = ACTIONS(509),
    [anon_sym_Provides] = ACTIONS(509),
    [anon_sym_Recommends] = ACTIONS(509),
    [anon_sym_RemovePathPostfixes] = ACTIONS(509),
    [anon_sym_Suggests] = ACTIONS(509),
    [anon_sym_Supplements] = ACTIONS(509),
    [anon_sym_PERCENTdescription] = ACTIONS(509),
    [anon_sym_PERCENTpackage] = ACTIONS(509),
    [anon_sym_PERCENTprep] = ACTIONS(509),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(509),
    [anon_sym_PERCENTconf] = ACTIONS(509),
    [anon_sym_PERCENTbuild] = ACTIONS(509),
    [anon_sym_PERCENTinstall] = ACTIONS(509),
    [anon_sym_PERCENTcheck] = ACTIONS(509),
    [anon_sym_PERCENTclean] = ACTIONS(509),
    [anon_sym_PERCENTpre] = ACTIONS(509),
    [anon_sym_PERCENTpost] = ACTIONS(509),
    [anon_sym_PERCENTpreun] = ACTIONS(509),
    [anon_sym_PERCENTpostun] = ACTIONS(509),
    [anon_sym_PERCENTpretrans] = ACTIONS(509),
    [anon_sym_PERCENTposttrans] = ACTIONS(509),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(509),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(509),
    [anon_sym_PERCENTverify] = ACTIONS(509),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(509),
    [anon_sym_PERCENTtriggerin] = ACTIONS(509),
    [anon_sym_PERCENTtriggerun] = ACTIONS(509),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(509),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(509),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(509),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(509),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(509),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(509),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(509),
    [anon_sym_PERCENTfiles] = ACTIONS(509),
    [anon_sym_PERCENTchangelog] = ACTIONS(509),
    [anon_sym_PERCENTglobal] = ACTIONS(509),
    [anon_sym_PERCENTdefine] = ACTIONS(509),
    [anon_sym_PERCENTundefine] = ACTIONS(509),
    [anon_sym_PERCENT] = ACTIONS(509),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(509),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(509),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [aux_sym__top_level_token1] = ACTIONS(503),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(505),
    [anon_sym_PERCENTifarch] = ACTIONS(505),
    [anon_sym_PERCENTifos] = ACTIONS(505),
    [anon_sym_PERCENTifnarch] = ACTIONS(505),
    [anon_sym_PERCENTifnos] = ACTIONS(505),
    [anon_sym_AutoProv] = ACTIONS(505),
    [anon_sym_AutoReq] = ACTIONS(505),
    [anon_sym_AutoReqProv] = ACTIONS(505),
    [anon_sym_BugUrl] = ACTIONS(505),
    [anon_sym_BuildRoot] = ACTIONS(505),
    [anon_sym_BuildSystem] = ACTIONS(505),
    [anon_sym_DistTag] = ACTIONS(505),
    [anon_sym_Distribution] = ACTIONS(505),
    [anon_sym_Epoch] = ACTIONS(505),
    [anon_sym_Group] = ACTIONS(505),
    [anon_sym_License] = ACTIONS(505),
    [anon_sym_ModularityLabel] = ACTIONS(505),
    [anon_sym_Name] = ACTIONS(505),
    [anon_sym_NoPatch] = ACTIONS(505),
    [anon_sym_NoSource] = ACTIONS(505),
    [anon_sym_Packager] = ACTIONS(505),
    [anon_sym_Release] = ACTIONS(505),
    [anon_sym_SourceLicense] = ACTIONS(505),
    [anon_sym_Summary] = ACTIONS(505),
    [anon_sym_URL] = ACTIONS(505),
    [anon_sym_Url] = ACTIONS(505),
    [anon_sym_VCS] = ACTIONS(505),
    [anon_sym_Vendor] = ACTIONS(505),
    [anon_sym_Version] = ACTIONS(505),
    [aux_sym_tag_token1] = ACTIONS(505),
    [aux_sym_tag_token2] = ACTIONS(505),
    [anon_sym_Requires] = ACTIONS(505),
    [anon_sym_BuildArch] = ACTIONS(505),
    [anon_sym_BuildArchitectures] = ACTIONS(505),
    [anon_sym_BuildConflicts] = ACTIONS(505),
    [anon_sym_BuildPrereq] = ACTIONS(505),
    [anon_sym_BuildRequires] = ACTIONS(505),
    [anon_sym_Conflicts] = ACTIONS(505),
    [anon_sym_DocDir] = ACTIONS(505),
    [anon_sym_Enhances] = ACTIONS(505),
    [anon_sym_ExcludeArch] = ACTIONS(505),
    [anon_sym_ExcludeOS] = ACTIONS(505),
    [anon_sym_ExclusiveArch] = ACTIONS(505),
    [anon_sym_ExclusiveOS] = ACTIONS(505),
    [anon_sym_Obsoletes] = ACTIONS(505),
    [anon_sym_OrderWithRequires] = ACTIONS(505),
    [anon_sym_Prefix] = ACTIONS(505),
    [anon_sym_Prefixes] = ACTIONS(505),
    [anon_sym_Prereq] = ACTIONS(505),
    [anon_sym_Provides] = ACTIONS(505),
    [anon_sym_Recommends] = ACTIONS(505),
    [anon_sym_RemovePathPostfixes] = ACTIONS(505),
    [anon_sym_Suggests] = ACTIONS(505),
    [anon_sym_Supplements] = ACTIONS(505),
    [anon_sym_PERCENTdescription] = ACTIONS(505),
    [anon_sym_PERCENTpackage] = ACTIONS(505),
    [anon_sym_PERCENTprep] = ACTIONS(505),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(505),
    [anon_sym_PERCENTconf] = ACTIONS(505),
    [anon_sym_PERCENTbuild] = ACTIONS(505),
    [anon_sym_PERCENTinstall] = ACTIONS(505),
    [anon_sym_PERCENTcheck] = ACTIONS(505),
    [anon_sym_PERCENTclean] = ACTIONS(505),
    [anon_sym_PERCENTpre] = ACTIONS(505),
    [anon_sym_PERCENTpost] = ACTIONS(505),
    [anon_sym_PERCENTpreun] = ACTIONS(505),
    [anon_sym_PERCENTpostun] = ACTIONS(505),
    [anon_sym_PERCENTpretrans] = ACTIONS(505),
    [anon_sym_PERCENTposttrans] = ACTIONS(505),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(505),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(505),
    [anon_sym_PERCENTverify] = ACTIONS(505),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(505),
    [anon_sym_PERCENTtriggerin] = ACTIONS(505),
    [anon_sym_PERCENTtriggerun] = ACTIONS(505),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(505),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(505),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(505),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(505),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(505),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(505),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(505),
    [anon_sym_PERCENTfiles] = ACTIONS(505),
    [anon_sym_PERCENTchangelog] = ACTIONS(505),
    [anon_sym_PERCENTglobal] = ACTIONS(505),
    [anon_sym_PERCENTdefine] = ACTIONS(505),
    [anon_sym_PERCENTundefine] = ACTIONS(505),
    [anon_sym_PERCENT] = ACTIONS(505),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(505),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(505),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [aux_sym__top_level_token1] = ACTIONS(499),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(501),
    [anon_sym_PERCENTifarch] = ACTIONS(501),
    [anon_sym_PERCENTifos] = ACTIONS(501),
    [anon_sym_PERCENTifnarch] = ACTIONS(501),
    [anon_sym_PERCENTifnos] = ACTIONS(501),
    [anon_sym_AutoProv] = ACTIONS(501),
    [anon_sym_AutoReq] = ACTIONS(501),
    [anon_sym_AutoReqProv] = ACTIONS(501),
    [anon_sym_BugUrl] = ACTIONS(501),
    [anon_sym_BuildRoot] = ACTIONS(501),
    [anon_sym_BuildSystem] = ACTIONS(501),
    [anon_sym_DistTag] = ACTIONS(501),
    [anon_sym_Distribution] = ACTIONS(501),
    [anon_sym_Epoch] = ACTIONS(501),
    [anon_sym_Group] = ACTIONS(501),
    [anon_sym_License] = ACTIONS(501),
    [anon_sym_ModularityLabel] = ACTIONS(501),
    [anon_sym_Name] = ACTIONS(501),
    [anon_sym_NoPatch] = ACTIONS(501),
    [anon_sym_NoSource] = ACTIONS(501),
    [anon_sym_Packager] = ACTIONS(501),
    [anon_sym_Release] = ACTIONS(501),
    [anon_sym_SourceLicense] = ACTIONS(501),
    [anon_sym_Summary] = ACTIONS(501),
    [anon_sym_URL] = ACTIONS(501),
    [anon_sym_Url] = ACTIONS(501),
    [anon_sym_VCS] = ACTIONS(501),
    [anon_sym_Vendor] = ACTIONS(501),
    [anon_sym_Version] = ACTIONS(501),
    [aux_sym_tag_token1] = ACTIONS(501),
    [aux_sym_tag_token2] = ACTIONS(501),
    [anon_sym_Requires] = ACTIONS(501),
    [anon_sym_BuildArch] = ACTIONS(501),
    [anon_sym_BuildArchitectures] = ACTIONS(501),
    [anon_sym_BuildConflicts] = ACTIONS(501),
    [anon_sym_BuildPrereq] = ACTIONS(501),
    [anon_sym_BuildRequires] = ACTIONS(501),
    [anon_sym_Conflicts] = ACTIONS(501),
    [anon_sym_DocDir] = ACTIONS(501),
    [anon_sym_Enhances] = ACTIONS(501),
    [anon_sym_ExcludeArch] = ACTIONS(501),
    [anon_sym_ExcludeOS] = ACTIONS(501),
    [anon_sym_ExclusiveArch] = ACTIONS(501),
    [anon_sym_ExclusiveOS] = ACTIONS(501),
    [anon_sym_Obsoletes] = ACTIONS(501),
    [anon_sym_OrderWithRequires] = ACTIONS(501),
    [anon_sym_Prefix] = ACTIONS(501),
    [anon_sym_Prefixes] = ACTIONS(501),
    [anon_sym_Prereq] = ACTIONS(501),
    [anon_sym_Provides] = ACTIONS(501),
    [anon_sym_Recommends] = ACTIONS(501),
    [anon_sym_RemovePathPostfixes] = ACTIONS(501),
    [anon_sym_Suggests] = ACTIONS(501),
    [anon_sym_Supplements] = ACTIONS(501),
    [anon_sym_PERCENTdescription] = ACTIONS(501),
    [anon_sym_PERCENTpackage] = ACTIONS(501),
    [anon_sym_PERCENTprep] = ACTIONS(501),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(501),
    [anon_sym_PERCENTconf] = ACTIONS(501),
    [anon_sym_PERCENTbuild] = ACTIONS(501),
    [anon_sym_PERCENTinstall] = ACTIONS(501),
    [anon_sym_PERCENTcheck] = ACTIONS(501),
    [anon_sym_PERCENTclean] = ACTIONS(501),
    [anon_sym_PERCENTpre] = ACTIONS(501),
    [anon_sym_PERCENTpost] = ACTIONS(501),
    [anon_sym_PERCENTpreun] = ACTIONS(501),
    [anon_sym_PERCENTpostun] = ACTIONS(501),
    [anon_sym_PERCENTpretrans] = ACTIONS(501),
    [anon_sym_PERCENTposttrans] = ACTIONS(501),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(501),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(501),
    [anon_sym_PERCENTverify] = ACTIONS(501),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(501),
    [anon_sym_PERCENTtriggerin] = ACTIONS(501),
    [anon_sym_PERCENTtriggerun] = ACTIONS(501),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(501),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(501),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(501),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(501),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(501),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(501),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(501),
    [anon_sym_PERCENTfiles] = ACTIONS(501),
    [anon_sym_PERCENTchangelog] = ACTIONS(501),
    [anon_sym_PERCENTglobal] = ACTIONS(501),
    [anon_sym_PERCENTdefine] = ACTIONS(501),
    [anon_sym_PERCENTundefine] = ACTIONS(501),
    [anon_sym_PERCENT] = ACTIONS(501),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(501),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(501),
  },
  [88] = {
    [aux_sym__top_level_token1] = ACTIONS(511),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(513),
    [anon_sym_PERCENTifarch] = ACTIONS(513),
    [anon_sym_PERCENTifos] = ACTIONS(513),
    [anon_sym_PERCENTifnarch] = ACTIONS(513),
    [anon_sym_PERCENTifnos] = ACTIONS(513),
    [anon_sym_PERCENTendif] = ACTIONS(513),
    [anon_sym_AutoProv] = ACTIONS(513),
    [anon_sym_AutoReq] = ACTIONS(513),
    [anon_sym_AutoReqProv] = ACTIONS(513),
    [anon_sym_BugUrl] = ACTIONS(513),
    [anon_sym_BuildRoot] = ACTIONS(513),
    [anon_sym_BuildSystem] = ACTIONS(513),
    [anon_sym_DistTag] = ACTIONS(513),
    [anon_sym_Distribution] = ACTIONS(513),
    [anon_sym_Epoch] = ACTIONS(513),
    [anon_sym_Group] = ACTIONS(513),
    [anon_sym_License] = ACTIONS(513),
    [anon_sym_ModularityLabel] = ACTIONS(513),
    [anon_sym_Name] = ACTIONS(513),
    [anon_sym_NoPatch] = ACTIONS(513),
    [anon_sym_NoSource] = ACTIONS(513),
    [anon_sym_Packager] = ACTIONS(513),
    [anon_sym_Release] = ACTIONS(513),
    [anon_sym_SourceLicense] = ACTIONS(513),
    [anon_sym_Summary] = ACTIONS(513),
    [anon_sym_URL] = ACTIONS(513),
    [anon_sym_Url] = ACTIONS(513),
    [anon_sym_VCS] = ACTIONS(513),
    [anon_sym_Vendor] = ACTIONS(513),
    [anon_sym_Version] = ACTIONS(513),
    [aux_sym_tag_token1] = ACTIONS(513),
    [aux_sym_tag_token2] = ACTIONS(513),
    [anon_sym_Requires] = ACTIONS(513),
    [anon_sym_BuildArch] = ACTIONS(513),
    [anon_sym_BuildArchitectures] = ACTIONS(513),
    [anon_sym_BuildConflicts] = ACTIONS(513),
    [anon_sym_BuildPrereq] = ACTIONS(513),
    [anon_sym_BuildRequires] = ACTIONS(513),
    [anon_sym_Conflicts] = ACTIONS(513),
    [anon_sym_DocDir] = ACTIONS(513),
    [anon_sym_Enhances] = ACTIONS(513),
    [anon_sym_ExcludeArch] = ACTIONS(513),
    [anon_sym_ExcludeOS] = ACTIONS(513),
    [anon_sym_ExclusiveArch] = ACTIONS(513),
    [anon_sym_ExclusiveOS] = ACTIONS(513),
    [anon_sym_Obsoletes] = ACTIONS(513),
    [anon_sym_OrderWithRequires] = ACTIONS(513),
    [anon_sym_Prefix] = ACTIONS(513),
    [anon_sym_Prefixes] = ACTIONS(513),
    [anon_sym_Prereq] = ACTIONS(513),
    [anon_sym_Provides] = ACTIONS(513),
    [anon_sym_Recommends] = ACTIONS(513),
    [anon_sym_RemovePathPostfixes] = ACTIONS(513),
    [anon_sym_Suggests] = ACTIONS(513),
    [anon_sym_Supplements] = ACTIONS(513),
    [anon_sym_PERCENTdescription] = ACTIONS(513),
    [anon_sym_PERCENTpackage] = ACTIONS(513),
    [anon_sym_PERCENTprep] = ACTIONS(513),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(513),
    [anon_sym_PERCENTconf] = ACTIONS(513),
    [anon_sym_PERCENTbuild] = ACTIONS(513),
    [anon_sym_PERCENTinstall] = ACTIONS(513),
    [anon_sym_PERCENTcheck] = ACTIONS(513),
    [anon_sym_PERCENTclean] = ACTIONS(513),
    [anon_sym_PERCENTpre] = ACTIONS(513),
    [anon_sym_PERCENTpost] = ACTIONS(513),
    [anon_sym_PERCENTpreun] = ACTIONS(513),
    [anon_sym_PERCENTpostun] = ACTIONS(513),
    [anon_sym_PERCENTpretrans] = ACTIONS(513),
    [anon_sym_PERCENTposttrans] = ACTIONS(513),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(513),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(513),
    [anon_sym_PERCENTverify] = ACTIONS(513),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(513),
    [anon_sym_PERCENTtriggerin] = ACTIONS(513),
    [anon_sym_PERCENTtriggerun] = ACTIONS(513),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(513),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(513),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(513),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(513),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(513),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(513),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(513),
    [anon_sym_PERCENTfiles] = ACTIONS(513),
    [anon_sym_PERCENTchangelog] = ACTIONS(513),
    [anon_sym_PERCENTglobal] = ACTIONS(513),
    [anon_sym_PERCENTdefine] = ACTIONS(513),
    [anon_sym_PERCENTundefine] = ACTIONS(513),
    [anon_sym_PERCENT] = ACTIONS(513),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(513),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(513),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [aux_sym__top_level_token1] = ACTIONS(451),
    [sym_comment] = ACTIONS(7),
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
  [90] = {
    [aux_sym__top_level_token1] = ACTIONS(447),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(449),
    [anon_sym_PERCENTifarch] = ACTIONS(449),
    [anon_sym_PERCENTifos] = ACTIONS(449),
    [anon_sym_PERCENTifnarch] = ACTIONS(449),
    [anon_sym_PERCENTifnos] = ACTIONS(449),
    [anon_sym_PERCENTendif] = ACTIONS(449),
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
  [91] = {
    [aux_sym__top_level_token1] = ACTIONS(455),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(457),
    [anon_sym_PERCENTifarch] = ACTIONS(457),
    [anon_sym_PERCENTifos] = ACTIONS(457),
    [anon_sym_PERCENTifnarch] = ACTIONS(457),
    [anon_sym_PERCENTifnos] = ACTIONS(457),
    [anon_sym_PERCENTendif] = ACTIONS(457),
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
  [92] = {
    [aux_sym__top_level_token1] = ACTIONS(515),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(517),
    [anon_sym_PERCENTifarch] = ACTIONS(517),
    [anon_sym_PERCENTifos] = ACTIONS(517),
    [anon_sym_PERCENTifnarch] = ACTIONS(517),
    [anon_sym_PERCENTifnos] = ACTIONS(517),
    [anon_sym_PERCENTendif] = ACTIONS(517),
    [anon_sym_AutoProv] = ACTIONS(517),
    [anon_sym_AutoReq] = ACTIONS(517),
    [anon_sym_AutoReqProv] = ACTIONS(517),
    [anon_sym_BugUrl] = ACTIONS(517),
    [anon_sym_BuildRoot] = ACTIONS(517),
    [anon_sym_BuildSystem] = ACTIONS(517),
    [anon_sym_DistTag] = ACTIONS(517),
    [anon_sym_Distribution] = ACTIONS(517),
    [anon_sym_Epoch] = ACTIONS(517),
    [anon_sym_Group] = ACTIONS(517),
    [anon_sym_License] = ACTIONS(517),
    [anon_sym_ModularityLabel] = ACTIONS(517),
    [anon_sym_Name] = ACTIONS(517),
    [anon_sym_NoPatch] = ACTIONS(517),
    [anon_sym_NoSource] = ACTIONS(517),
    [anon_sym_Packager] = ACTIONS(517),
    [anon_sym_Release] = ACTIONS(517),
    [anon_sym_SourceLicense] = ACTIONS(517),
    [anon_sym_Summary] = ACTIONS(517),
    [anon_sym_URL] = ACTIONS(517),
    [anon_sym_Url] = ACTIONS(517),
    [anon_sym_VCS] = ACTIONS(517),
    [anon_sym_Vendor] = ACTIONS(517),
    [anon_sym_Version] = ACTIONS(517),
    [aux_sym_tag_token1] = ACTIONS(517),
    [aux_sym_tag_token2] = ACTIONS(517),
    [anon_sym_Requires] = ACTIONS(517),
    [anon_sym_BuildArch] = ACTIONS(517),
    [anon_sym_BuildArchitectures] = ACTIONS(517),
    [anon_sym_BuildConflicts] = ACTIONS(517),
    [anon_sym_BuildPrereq] = ACTIONS(517),
    [anon_sym_BuildRequires] = ACTIONS(517),
    [anon_sym_Conflicts] = ACTIONS(517),
    [anon_sym_DocDir] = ACTIONS(517),
    [anon_sym_Enhances] = ACTIONS(517),
    [anon_sym_ExcludeArch] = ACTIONS(517),
    [anon_sym_ExcludeOS] = ACTIONS(517),
    [anon_sym_ExclusiveArch] = ACTIONS(517),
    [anon_sym_ExclusiveOS] = ACTIONS(517),
    [anon_sym_Obsoletes] = ACTIONS(517),
    [anon_sym_OrderWithRequires] = ACTIONS(517),
    [anon_sym_Prefix] = ACTIONS(517),
    [anon_sym_Prefixes] = ACTIONS(517),
    [anon_sym_Prereq] = ACTIONS(517),
    [anon_sym_Provides] = ACTIONS(517),
    [anon_sym_Recommends] = ACTIONS(517),
    [anon_sym_RemovePathPostfixes] = ACTIONS(517),
    [anon_sym_Suggests] = ACTIONS(517),
    [anon_sym_Supplements] = ACTIONS(517),
    [anon_sym_PERCENTdescription] = ACTIONS(517),
    [anon_sym_PERCENTpackage] = ACTIONS(517),
    [anon_sym_PERCENTprep] = ACTIONS(517),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(517),
    [anon_sym_PERCENTconf] = ACTIONS(517),
    [anon_sym_PERCENTbuild] = ACTIONS(517),
    [anon_sym_PERCENTinstall] = ACTIONS(517),
    [anon_sym_PERCENTcheck] = ACTIONS(517),
    [anon_sym_PERCENTclean] = ACTIONS(517),
    [anon_sym_PERCENTpre] = ACTIONS(517),
    [anon_sym_PERCENTpost] = ACTIONS(517),
    [anon_sym_PERCENTpreun] = ACTIONS(517),
    [anon_sym_PERCENTpostun] = ACTIONS(517),
    [anon_sym_PERCENTpretrans] = ACTIONS(517),
    [anon_sym_PERCENTposttrans] = ACTIONS(517),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(517),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(517),
    [anon_sym_PERCENTverify] = ACTIONS(517),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(517),
    [anon_sym_PERCENTtriggerin] = ACTIONS(517),
    [anon_sym_PERCENTtriggerun] = ACTIONS(517),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(517),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(517),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(517),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(517),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(517),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(517),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(517),
    [anon_sym_PERCENTfiles] = ACTIONS(517),
    [anon_sym_PERCENTchangelog] = ACTIONS(517),
    [anon_sym_PERCENTglobal] = ACTIONS(517),
    [anon_sym_PERCENTdefine] = ACTIONS(517),
    [anon_sym_PERCENTundefine] = ACTIONS(517),
    [anon_sym_PERCENT] = ACTIONS(517),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(517),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(517),
  },
  [93] = {
    [aux_sym__top_level_token1] = ACTIONS(519),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(521),
    [anon_sym_PERCENTifarch] = ACTIONS(521),
    [anon_sym_PERCENTifos] = ACTIONS(521),
    [anon_sym_PERCENTifnarch] = ACTIONS(521),
    [anon_sym_PERCENTifnos] = ACTIONS(521),
    [anon_sym_PERCENTendif] = ACTIONS(521),
    [anon_sym_AutoProv] = ACTIONS(521),
    [anon_sym_AutoReq] = ACTIONS(521),
    [anon_sym_AutoReqProv] = ACTIONS(521),
    [anon_sym_BugUrl] = ACTIONS(521),
    [anon_sym_BuildRoot] = ACTIONS(521),
    [anon_sym_BuildSystem] = ACTIONS(521),
    [anon_sym_DistTag] = ACTIONS(521),
    [anon_sym_Distribution] = ACTIONS(521),
    [anon_sym_Epoch] = ACTIONS(521),
    [anon_sym_Group] = ACTIONS(521),
    [anon_sym_License] = ACTIONS(521),
    [anon_sym_ModularityLabel] = ACTIONS(521),
    [anon_sym_Name] = ACTIONS(521),
    [anon_sym_NoPatch] = ACTIONS(521),
    [anon_sym_NoSource] = ACTIONS(521),
    [anon_sym_Packager] = ACTIONS(521),
    [anon_sym_Release] = ACTIONS(521),
    [anon_sym_SourceLicense] = ACTIONS(521),
    [anon_sym_Summary] = ACTIONS(521),
    [anon_sym_URL] = ACTIONS(521),
    [anon_sym_Url] = ACTIONS(521),
    [anon_sym_VCS] = ACTIONS(521),
    [anon_sym_Vendor] = ACTIONS(521),
    [anon_sym_Version] = ACTIONS(521),
    [aux_sym_tag_token1] = ACTIONS(521),
    [aux_sym_tag_token2] = ACTIONS(521),
    [anon_sym_Requires] = ACTIONS(521),
    [anon_sym_BuildArch] = ACTIONS(521),
    [anon_sym_BuildArchitectures] = ACTIONS(521),
    [anon_sym_BuildConflicts] = ACTIONS(521),
    [anon_sym_BuildPrereq] = ACTIONS(521),
    [anon_sym_BuildRequires] = ACTIONS(521),
    [anon_sym_Conflicts] = ACTIONS(521),
    [anon_sym_DocDir] = ACTIONS(521),
    [anon_sym_Enhances] = ACTIONS(521),
    [anon_sym_ExcludeArch] = ACTIONS(521),
    [anon_sym_ExcludeOS] = ACTIONS(521),
    [anon_sym_ExclusiveArch] = ACTIONS(521),
    [anon_sym_ExclusiveOS] = ACTIONS(521),
    [anon_sym_Obsoletes] = ACTIONS(521),
    [anon_sym_OrderWithRequires] = ACTIONS(521),
    [anon_sym_Prefix] = ACTIONS(521),
    [anon_sym_Prefixes] = ACTIONS(521),
    [anon_sym_Prereq] = ACTIONS(521),
    [anon_sym_Provides] = ACTIONS(521),
    [anon_sym_Recommends] = ACTIONS(521),
    [anon_sym_RemovePathPostfixes] = ACTIONS(521),
    [anon_sym_Suggests] = ACTIONS(521),
    [anon_sym_Supplements] = ACTIONS(521),
    [anon_sym_PERCENTdescription] = ACTIONS(521),
    [anon_sym_PERCENTpackage] = ACTIONS(521),
    [anon_sym_PERCENTprep] = ACTIONS(521),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(521),
    [anon_sym_PERCENTconf] = ACTIONS(521),
    [anon_sym_PERCENTbuild] = ACTIONS(521),
    [anon_sym_PERCENTinstall] = ACTIONS(521),
    [anon_sym_PERCENTcheck] = ACTIONS(521),
    [anon_sym_PERCENTclean] = ACTIONS(521),
    [anon_sym_PERCENTpre] = ACTIONS(521),
    [anon_sym_PERCENTpost] = ACTIONS(521),
    [anon_sym_PERCENTpreun] = ACTIONS(521),
    [anon_sym_PERCENTpostun] = ACTIONS(521),
    [anon_sym_PERCENTpretrans] = ACTIONS(521),
    [anon_sym_PERCENTposttrans] = ACTIONS(521),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(521),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(521),
    [anon_sym_PERCENTverify] = ACTIONS(521),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(521),
    [anon_sym_PERCENTtriggerin] = ACTIONS(521),
    [anon_sym_PERCENTtriggerun] = ACTIONS(521),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(521),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(521),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(521),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(521),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(521),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(521),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(521),
    [anon_sym_PERCENTfiles] = ACTIONS(521),
    [anon_sym_PERCENTchangelog] = ACTIONS(521),
    [anon_sym_PERCENTglobal] = ACTIONS(521),
    [anon_sym_PERCENTdefine] = ACTIONS(521),
    [anon_sym_PERCENTundefine] = ACTIONS(521),
    [anon_sym_PERCENT] = ACTIONS(521),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(521),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(521),
  },
  [94] = {
    [aux_sym__top_level_token1] = ACTIONS(523),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(525),
    [anon_sym_PERCENTifarch] = ACTIONS(525),
    [anon_sym_PERCENTifos] = ACTIONS(525),
    [anon_sym_PERCENTifnarch] = ACTIONS(525),
    [anon_sym_PERCENTifnos] = ACTIONS(525),
    [anon_sym_PERCENTendif] = ACTIONS(525),
    [anon_sym_AutoProv] = ACTIONS(525),
    [anon_sym_AutoReq] = ACTIONS(525),
    [anon_sym_AutoReqProv] = ACTIONS(525),
    [anon_sym_BugUrl] = ACTIONS(525),
    [anon_sym_BuildRoot] = ACTIONS(525),
    [anon_sym_BuildSystem] = ACTIONS(525),
    [anon_sym_DistTag] = ACTIONS(525),
    [anon_sym_Distribution] = ACTIONS(525),
    [anon_sym_Epoch] = ACTIONS(525),
    [anon_sym_Group] = ACTIONS(525),
    [anon_sym_License] = ACTIONS(525),
    [anon_sym_ModularityLabel] = ACTIONS(525),
    [anon_sym_Name] = ACTIONS(525),
    [anon_sym_NoPatch] = ACTIONS(525),
    [anon_sym_NoSource] = ACTIONS(525),
    [anon_sym_Packager] = ACTIONS(525),
    [anon_sym_Release] = ACTIONS(525),
    [anon_sym_SourceLicense] = ACTIONS(525),
    [anon_sym_Summary] = ACTIONS(525),
    [anon_sym_URL] = ACTIONS(525),
    [anon_sym_Url] = ACTIONS(525),
    [anon_sym_VCS] = ACTIONS(525),
    [anon_sym_Vendor] = ACTIONS(525),
    [anon_sym_Version] = ACTIONS(525),
    [aux_sym_tag_token1] = ACTIONS(525),
    [aux_sym_tag_token2] = ACTIONS(525),
    [anon_sym_Requires] = ACTIONS(525),
    [anon_sym_BuildArch] = ACTIONS(525),
    [anon_sym_BuildArchitectures] = ACTIONS(525),
    [anon_sym_BuildConflicts] = ACTIONS(525),
    [anon_sym_BuildPrereq] = ACTIONS(525),
    [anon_sym_BuildRequires] = ACTIONS(525),
    [anon_sym_Conflicts] = ACTIONS(525),
    [anon_sym_DocDir] = ACTIONS(525),
    [anon_sym_Enhances] = ACTIONS(525),
    [anon_sym_ExcludeArch] = ACTIONS(525),
    [anon_sym_ExcludeOS] = ACTIONS(525),
    [anon_sym_ExclusiveArch] = ACTIONS(525),
    [anon_sym_ExclusiveOS] = ACTIONS(525),
    [anon_sym_Obsoletes] = ACTIONS(525),
    [anon_sym_OrderWithRequires] = ACTIONS(525),
    [anon_sym_Prefix] = ACTIONS(525),
    [anon_sym_Prefixes] = ACTIONS(525),
    [anon_sym_Prereq] = ACTIONS(525),
    [anon_sym_Provides] = ACTIONS(525),
    [anon_sym_Recommends] = ACTIONS(525),
    [anon_sym_RemovePathPostfixes] = ACTIONS(525),
    [anon_sym_Suggests] = ACTIONS(525),
    [anon_sym_Supplements] = ACTIONS(525),
    [anon_sym_PERCENTdescription] = ACTIONS(525),
    [anon_sym_PERCENTpackage] = ACTIONS(525),
    [anon_sym_PERCENTprep] = ACTIONS(525),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(525),
    [anon_sym_PERCENTconf] = ACTIONS(525),
    [anon_sym_PERCENTbuild] = ACTIONS(525),
    [anon_sym_PERCENTinstall] = ACTIONS(525),
    [anon_sym_PERCENTcheck] = ACTIONS(525),
    [anon_sym_PERCENTclean] = ACTIONS(525),
    [anon_sym_PERCENTpre] = ACTIONS(525),
    [anon_sym_PERCENTpost] = ACTIONS(525),
    [anon_sym_PERCENTpreun] = ACTIONS(525),
    [anon_sym_PERCENTpostun] = ACTIONS(525),
    [anon_sym_PERCENTpretrans] = ACTIONS(525),
    [anon_sym_PERCENTposttrans] = ACTIONS(525),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(525),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(525),
    [anon_sym_PERCENTverify] = ACTIONS(525),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(525),
    [anon_sym_PERCENTtriggerin] = ACTIONS(525),
    [anon_sym_PERCENTtriggerun] = ACTIONS(525),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(525),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(525),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(525),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(525),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(525),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(525),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(525),
    [anon_sym_PERCENTfiles] = ACTIONS(525),
    [anon_sym_PERCENTchangelog] = ACTIONS(525),
    [anon_sym_PERCENTglobal] = ACTIONS(525),
    [anon_sym_PERCENTdefine] = ACTIONS(525),
    [anon_sym_PERCENTundefine] = ACTIONS(525),
    [anon_sym_PERCENT] = ACTIONS(525),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(525),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(525),
  },
  [95] = {
    [aux_sym__top_level_token1] = ACTIONS(527),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(529),
    [anon_sym_PERCENTifarch] = ACTIONS(529),
    [anon_sym_PERCENTifos] = ACTIONS(529),
    [anon_sym_PERCENTifnarch] = ACTIONS(529),
    [anon_sym_PERCENTifnos] = ACTIONS(529),
    [anon_sym_PERCENTendif] = ACTIONS(529),
    [anon_sym_AutoProv] = ACTIONS(529),
    [anon_sym_AutoReq] = ACTIONS(529),
    [anon_sym_AutoReqProv] = ACTIONS(529),
    [anon_sym_BugUrl] = ACTIONS(529),
    [anon_sym_BuildRoot] = ACTIONS(529),
    [anon_sym_BuildSystem] = ACTIONS(529),
    [anon_sym_DistTag] = ACTIONS(529),
    [anon_sym_Distribution] = ACTIONS(529),
    [anon_sym_Epoch] = ACTIONS(529),
    [anon_sym_Group] = ACTIONS(529),
    [anon_sym_License] = ACTIONS(529),
    [anon_sym_ModularityLabel] = ACTIONS(529),
    [anon_sym_Name] = ACTIONS(529),
    [anon_sym_NoPatch] = ACTIONS(529),
    [anon_sym_NoSource] = ACTIONS(529),
    [anon_sym_Packager] = ACTIONS(529),
    [anon_sym_Release] = ACTIONS(529),
    [anon_sym_SourceLicense] = ACTIONS(529),
    [anon_sym_Summary] = ACTIONS(529),
    [anon_sym_URL] = ACTIONS(529),
    [anon_sym_Url] = ACTIONS(529),
    [anon_sym_VCS] = ACTIONS(529),
    [anon_sym_Vendor] = ACTIONS(529),
    [anon_sym_Version] = ACTIONS(529),
    [aux_sym_tag_token1] = ACTIONS(529),
    [aux_sym_tag_token2] = ACTIONS(529),
    [anon_sym_Requires] = ACTIONS(529),
    [anon_sym_BuildArch] = ACTIONS(529),
    [anon_sym_BuildArchitectures] = ACTIONS(529),
    [anon_sym_BuildConflicts] = ACTIONS(529),
    [anon_sym_BuildPrereq] = ACTIONS(529),
    [anon_sym_BuildRequires] = ACTIONS(529),
    [anon_sym_Conflicts] = ACTIONS(529),
    [anon_sym_DocDir] = ACTIONS(529),
    [anon_sym_Enhances] = ACTIONS(529),
    [anon_sym_ExcludeArch] = ACTIONS(529),
    [anon_sym_ExcludeOS] = ACTIONS(529),
    [anon_sym_ExclusiveArch] = ACTIONS(529),
    [anon_sym_ExclusiveOS] = ACTIONS(529),
    [anon_sym_Obsoletes] = ACTIONS(529),
    [anon_sym_OrderWithRequires] = ACTIONS(529),
    [anon_sym_Prefix] = ACTIONS(529),
    [anon_sym_Prefixes] = ACTIONS(529),
    [anon_sym_Prereq] = ACTIONS(529),
    [anon_sym_Provides] = ACTIONS(529),
    [anon_sym_Recommends] = ACTIONS(529),
    [anon_sym_RemovePathPostfixes] = ACTIONS(529),
    [anon_sym_Suggests] = ACTIONS(529),
    [anon_sym_Supplements] = ACTIONS(529),
    [anon_sym_PERCENTdescription] = ACTIONS(529),
    [anon_sym_PERCENTpackage] = ACTIONS(529),
    [anon_sym_PERCENTprep] = ACTIONS(529),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(529),
    [anon_sym_PERCENTconf] = ACTIONS(529),
    [anon_sym_PERCENTbuild] = ACTIONS(529),
    [anon_sym_PERCENTinstall] = ACTIONS(529),
    [anon_sym_PERCENTcheck] = ACTIONS(529),
    [anon_sym_PERCENTclean] = ACTIONS(529),
    [anon_sym_PERCENTpre] = ACTIONS(529),
    [anon_sym_PERCENTpost] = ACTIONS(529),
    [anon_sym_PERCENTpreun] = ACTIONS(529),
    [anon_sym_PERCENTpostun] = ACTIONS(529),
    [anon_sym_PERCENTpretrans] = ACTIONS(529),
    [anon_sym_PERCENTposttrans] = ACTIONS(529),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(529),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(529),
    [anon_sym_PERCENTverify] = ACTIONS(529),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(529),
    [anon_sym_PERCENTtriggerin] = ACTIONS(529),
    [anon_sym_PERCENTtriggerun] = ACTIONS(529),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(529),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(529),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(529),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(529),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(529),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(529),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(529),
    [anon_sym_PERCENTfiles] = ACTIONS(529),
    [anon_sym_PERCENTchangelog] = ACTIONS(529),
    [anon_sym_PERCENTglobal] = ACTIONS(529),
    [anon_sym_PERCENTdefine] = ACTIONS(529),
    [anon_sym_PERCENTundefine] = ACTIONS(529),
    [anon_sym_PERCENT] = ACTIONS(529),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(529),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(529),
  },
  [96] = {
    [aux_sym__top_level_token1] = ACTIONS(531),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(533),
    [anon_sym_PERCENTifarch] = ACTIONS(533),
    [anon_sym_PERCENTifos] = ACTIONS(533),
    [anon_sym_PERCENTifnarch] = ACTIONS(533),
    [anon_sym_PERCENTifnos] = ACTIONS(533),
    [anon_sym_PERCENTendif] = ACTIONS(533),
    [anon_sym_AutoProv] = ACTIONS(533),
    [anon_sym_AutoReq] = ACTIONS(533),
    [anon_sym_AutoReqProv] = ACTIONS(533),
    [anon_sym_BugUrl] = ACTIONS(533),
    [anon_sym_BuildRoot] = ACTIONS(533),
    [anon_sym_BuildSystem] = ACTIONS(533),
    [anon_sym_DistTag] = ACTIONS(533),
    [anon_sym_Distribution] = ACTIONS(533),
    [anon_sym_Epoch] = ACTIONS(533),
    [anon_sym_Group] = ACTIONS(533),
    [anon_sym_License] = ACTIONS(533),
    [anon_sym_ModularityLabel] = ACTIONS(533),
    [anon_sym_Name] = ACTIONS(533),
    [anon_sym_NoPatch] = ACTIONS(533),
    [anon_sym_NoSource] = ACTIONS(533),
    [anon_sym_Packager] = ACTIONS(533),
    [anon_sym_Release] = ACTIONS(533),
    [anon_sym_SourceLicense] = ACTIONS(533),
    [anon_sym_Summary] = ACTIONS(533),
    [anon_sym_URL] = ACTIONS(533),
    [anon_sym_Url] = ACTIONS(533),
    [anon_sym_VCS] = ACTIONS(533),
    [anon_sym_Vendor] = ACTIONS(533),
    [anon_sym_Version] = ACTIONS(533),
    [aux_sym_tag_token1] = ACTIONS(533),
    [aux_sym_tag_token2] = ACTIONS(533),
    [anon_sym_Requires] = ACTIONS(533),
    [anon_sym_BuildArch] = ACTIONS(533),
    [anon_sym_BuildArchitectures] = ACTIONS(533),
    [anon_sym_BuildConflicts] = ACTIONS(533),
    [anon_sym_BuildPrereq] = ACTIONS(533),
    [anon_sym_BuildRequires] = ACTIONS(533),
    [anon_sym_Conflicts] = ACTIONS(533),
    [anon_sym_DocDir] = ACTIONS(533),
    [anon_sym_Enhances] = ACTIONS(533),
    [anon_sym_ExcludeArch] = ACTIONS(533),
    [anon_sym_ExcludeOS] = ACTIONS(533),
    [anon_sym_ExclusiveArch] = ACTIONS(533),
    [anon_sym_ExclusiveOS] = ACTIONS(533),
    [anon_sym_Obsoletes] = ACTIONS(533),
    [anon_sym_OrderWithRequires] = ACTIONS(533),
    [anon_sym_Prefix] = ACTIONS(533),
    [anon_sym_Prefixes] = ACTIONS(533),
    [anon_sym_Prereq] = ACTIONS(533),
    [anon_sym_Provides] = ACTIONS(533),
    [anon_sym_Recommends] = ACTIONS(533),
    [anon_sym_RemovePathPostfixes] = ACTIONS(533),
    [anon_sym_Suggests] = ACTIONS(533),
    [anon_sym_Supplements] = ACTIONS(533),
    [anon_sym_PERCENTdescription] = ACTIONS(533),
    [anon_sym_PERCENTpackage] = ACTIONS(533),
    [anon_sym_PERCENTprep] = ACTIONS(533),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(533),
    [anon_sym_PERCENTconf] = ACTIONS(533),
    [anon_sym_PERCENTbuild] = ACTIONS(533),
    [anon_sym_PERCENTinstall] = ACTIONS(533),
    [anon_sym_PERCENTcheck] = ACTIONS(533),
    [anon_sym_PERCENTclean] = ACTIONS(533),
    [anon_sym_PERCENTpre] = ACTIONS(533),
    [anon_sym_PERCENTpost] = ACTIONS(533),
    [anon_sym_PERCENTpreun] = ACTIONS(533),
    [anon_sym_PERCENTpostun] = ACTIONS(533),
    [anon_sym_PERCENTpretrans] = ACTIONS(533),
    [anon_sym_PERCENTposttrans] = ACTIONS(533),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(533),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(533),
    [anon_sym_PERCENTverify] = ACTIONS(533),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(533),
    [anon_sym_PERCENTtriggerin] = ACTIONS(533),
    [anon_sym_PERCENTtriggerun] = ACTIONS(533),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(533),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(533),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(533),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(533),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(533),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(533),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(533),
    [anon_sym_PERCENTfiles] = ACTIONS(533),
    [anon_sym_PERCENTchangelog] = ACTIONS(533),
    [anon_sym_PERCENTglobal] = ACTIONS(533),
    [anon_sym_PERCENTdefine] = ACTIONS(533),
    [anon_sym_PERCENTundefine] = ACTIONS(533),
    [anon_sym_PERCENT] = ACTIONS(533),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(533),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(533),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(535),
    [aux_sym__top_level_token1] = ACTIONS(535),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(537),
    [anon_sym_PERCENTifarch] = ACTIONS(537),
    [anon_sym_PERCENTifos] = ACTIONS(537),
    [anon_sym_PERCENTifnarch] = ACTIONS(537),
    [anon_sym_PERCENTifnos] = ACTIONS(537),
    [anon_sym_AutoProv] = ACTIONS(537),
    [anon_sym_AutoReq] = ACTIONS(537),
    [anon_sym_AutoReqProv] = ACTIONS(537),
    [anon_sym_BugUrl] = ACTIONS(537),
    [anon_sym_BuildRoot] = ACTIONS(537),
    [anon_sym_BuildSystem] = ACTIONS(537),
    [anon_sym_DistTag] = ACTIONS(537),
    [anon_sym_Distribution] = ACTIONS(537),
    [anon_sym_Epoch] = ACTIONS(537),
    [anon_sym_Group] = ACTIONS(537),
    [anon_sym_License] = ACTIONS(537),
    [anon_sym_ModularityLabel] = ACTIONS(537),
    [anon_sym_Name] = ACTIONS(537),
    [anon_sym_NoPatch] = ACTIONS(537),
    [anon_sym_NoSource] = ACTIONS(537),
    [anon_sym_Packager] = ACTIONS(537),
    [anon_sym_Release] = ACTIONS(537),
    [anon_sym_SourceLicense] = ACTIONS(537),
    [anon_sym_Summary] = ACTIONS(537),
    [anon_sym_URL] = ACTIONS(537),
    [anon_sym_Url] = ACTIONS(537),
    [anon_sym_VCS] = ACTIONS(537),
    [anon_sym_Vendor] = ACTIONS(537),
    [anon_sym_Version] = ACTIONS(537),
    [aux_sym_tag_token1] = ACTIONS(537),
    [aux_sym_tag_token2] = ACTIONS(537),
    [anon_sym_Requires] = ACTIONS(537),
    [anon_sym_BuildArch] = ACTIONS(537),
    [anon_sym_BuildArchitectures] = ACTIONS(537),
    [anon_sym_BuildConflicts] = ACTIONS(537),
    [anon_sym_BuildPrereq] = ACTIONS(537),
    [anon_sym_BuildRequires] = ACTIONS(537),
    [anon_sym_Conflicts] = ACTIONS(537),
    [anon_sym_DocDir] = ACTIONS(537),
    [anon_sym_Enhances] = ACTIONS(537),
    [anon_sym_ExcludeArch] = ACTIONS(537),
    [anon_sym_ExcludeOS] = ACTIONS(537),
    [anon_sym_ExclusiveArch] = ACTIONS(537),
    [anon_sym_ExclusiveOS] = ACTIONS(537),
    [anon_sym_Obsoletes] = ACTIONS(537),
    [anon_sym_OrderWithRequires] = ACTIONS(537),
    [anon_sym_Prefix] = ACTIONS(537),
    [anon_sym_Prefixes] = ACTIONS(537),
    [anon_sym_Prereq] = ACTIONS(537),
    [anon_sym_Provides] = ACTIONS(537),
    [anon_sym_Recommends] = ACTIONS(537),
    [anon_sym_RemovePathPostfixes] = ACTIONS(537),
    [anon_sym_Suggests] = ACTIONS(537),
    [anon_sym_Supplements] = ACTIONS(537),
    [anon_sym_PERCENTdescription] = ACTIONS(537),
    [anon_sym_PERCENTpackage] = ACTIONS(537),
    [anon_sym_PERCENTprep] = ACTIONS(537),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(537),
    [anon_sym_PERCENTconf] = ACTIONS(537),
    [anon_sym_PERCENTbuild] = ACTIONS(537),
    [anon_sym_PERCENTinstall] = ACTIONS(537),
    [anon_sym_PERCENTcheck] = ACTIONS(537),
    [anon_sym_PERCENTclean] = ACTIONS(537),
    [anon_sym_PERCENTpre] = ACTIONS(537),
    [anon_sym_PERCENTpost] = ACTIONS(537),
    [anon_sym_PERCENTpreun] = ACTIONS(537),
    [anon_sym_PERCENTpostun] = ACTIONS(537),
    [anon_sym_PERCENTpretrans] = ACTIONS(537),
    [anon_sym_PERCENTposttrans] = ACTIONS(537),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(537),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(537),
    [anon_sym_PERCENTverify] = ACTIONS(537),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(537),
    [anon_sym_PERCENTtriggerin] = ACTIONS(537),
    [anon_sym_PERCENTtriggerun] = ACTIONS(537),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(537),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(537),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(537),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(537),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(537),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(537),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(537),
    [anon_sym_PERCENTfiles] = ACTIONS(537),
    [anon_sym_PERCENTchangelog] = ACTIONS(537),
    [anon_sym_PERCENTglobal] = ACTIONS(537),
    [anon_sym_PERCENTdefine] = ACTIONS(537),
    [anon_sym_PERCENTundefine] = ACTIONS(537),
    [anon_sym_PERCENT] = ACTIONS(537),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(537),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(537),
  },
  [98] = {
    [aux_sym__top_level_token1] = ACTIONS(535),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(537),
    [anon_sym_PERCENTifarch] = ACTIONS(537),
    [anon_sym_PERCENTifos] = ACTIONS(537),
    [anon_sym_PERCENTifnarch] = ACTIONS(537),
    [anon_sym_PERCENTifnos] = ACTIONS(537),
    [anon_sym_PERCENTendif] = ACTIONS(537),
    [anon_sym_AutoProv] = ACTIONS(537),
    [anon_sym_AutoReq] = ACTIONS(537),
    [anon_sym_AutoReqProv] = ACTIONS(537),
    [anon_sym_BugUrl] = ACTIONS(537),
    [anon_sym_BuildRoot] = ACTIONS(537),
    [anon_sym_BuildSystem] = ACTIONS(537),
    [anon_sym_DistTag] = ACTIONS(537),
    [anon_sym_Distribution] = ACTIONS(537),
    [anon_sym_Epoch] = ACTIONS(537),
    [anon_sym_Group] = ACTIONS(537),
    [anon_sym_License] = ACTIONS(537),
    [anon_sym_ModularityLabel] = ACTIONS(537),
    [anon_sym_Name] = ACTIONS(537),
    [anon_sym_NoPatch] = ACTIONS(537),
    [anon_sym_NoSource] = ACTIONS(537),
    [anon_sym_Packager] = ACTIONS(537),
    [anon_sym_Release] = ACTIONS(537),
    [anon_sym_SourceLicense] = ACTIONS(537),
    [anon_sym_Summary] = ACTIONS(537),
    [anon_sym_URL] = ACTIONS(537),
    [anon_sym_Url] = ACTIONS(537),
    [anon_sym_VCS] = ACTIONS(537),
    [anon_sym_Vendor] = ACTIONS(537),
    [anon_sym_Version] = ACTIONS(537),
    [aux_sym_tag_token1] = ACTIONS(537),
    [aux_sym_tag_token2] = ACTIONS(537),
    [anon_sym_Requires] = ACTIONS(537),
    [anon_sym_BuildArch] = ACTIONS(537),
    [anon_sym_BuildArchitectures] = ACTIONS(537),
    [anon_sym_BuildConflicts] = ACTIONS(537),
    [anon_sym_BuildPrereq] = ACTIONS(537),
    [anon_sym_BuildRequires] = ACTIONS(537),
    [anon_sym_Conflicts] = ACTIONS(537),
    [anon_sym_DocDir] = ACTIONS(537),
    [anon_sym_Enhances] = ACTIONS(537),
    [anon_sym_ExcludeArch] = ACTIONS(537),
    [anon_sym_ExcludeOS] = ACTIONS(537),
    [anon_sym_ExclusiveArch] = ACTIONS(537),
    [anon_sym_ExclusiveOS] = ACTIONS(537),
    [anon_sym_Obsoletes] = ACTIONS(537),
    [anon_sym_OrderWithRequires] = ACTIONS(537),
    [anon_sym_Prefix] = ACTIONS(537),
    [anon_sym_Prefixes] = ACTIONS(537),
    [anon_sym_Prereq] = ACTIONS(537),
    [anon_sym_Provides] = ACTIONS(537),
    [anon_sym_Recommends] = ACTIONS(537),
    [anon_sym_RemovePathPostfixes] = ACTIONS(537),
    [anon_sym_Suggests] = ACTIONS(537),
    [anon_sym_Supplements] = ACTIONS(537),
    [anon_sym_PERCENTdescription] = ACTIONS(537),
    [anon_sym_PERCENTpackage] = ACTIONS(537),
    [anon_sym_PERCENTprep] = ACTIONS(537),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(537),
    [anon_sym_PERCENTconf] = ACTIONS(537),
    [anon_sym_PERCENTbuild] = ACTIONS(537),
    [anon_sym_PERCENTinstall] = ACTIONS(537),
    [anon_sym_PERCENTcheck] = ACTIONS(537),
    [anon_sym_PERCENTclean] = ACTIONS(537),
    [anon_sym_PERCENTpre] = ACTIONS(537),
    [anon_sym_PERCENTpost] = ACTIONS(537),
    [anon_sym_PERCENTpreun] = ACTIONS(537),
    [anon_sym_PERCENTpostun] = ACTIONS(537),
    [anon_sym_PERCENTpretrans] = ACTIONS(537),
    [anon_sym_PERCENTposttrans] = ACTIONS(537),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(537),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(537),
    [anon_sym_PERCENTverify] = ACTIONS(537),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(537),
    [anon_sym_PERCENTtriggerin] = ACTIONS(537),
    [anon_sym_PERCENTtriggerun] = ACTIONS(537),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(537),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(537),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(537),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(537),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(537),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(537),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(537),
    [anon_sym_PERCENTfiles] = ACTIONS(537),
    [anon_sym_PERCENTchangelog] = ACTIONS(537),
    [anon_sym_PERCENTglobal] = ACTIONS(537),
    [anon_sym_PERCENTdefine] = ACTIONS(537),
    [anon_sym_PERCENTundefine] = ACTIONS(537),
    [anon_sym_PERCENT] = ACTIONS(537),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(537),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(537),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(531),
    [aux_sym__top_level_token1] = ACTIONS(531),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(533),
    [anon_sym_PERCENTifarch] = ACTIONS(533),
    [anon_sym_PERCENTifos] = ACTIONS(533),
    [anon_sym_PERCENTifnarch] = ACTIONS(533),
    [anon_sym_PERCENTifnos] = ACTIONS(533),
    [anon_sym_AutoProv] = ACTIONS(533),
    [anon_sym_AutoReq] = ACTIONS(533),
    [anon_sym_AutoReqProv] = ACTIONS(533),
    [anon_sym_BugUrl] = ACTIONS(533),
    [anon_sym_BuildRoot] = ACTIONS(533),
    [anon_sym_BuildSystem] = ACTIONS(533),
    [anon_sym_DistTag] = ACTIONS(533),
    [anon_sym_Distribution] = ACTIONS(533),
    [anon_sym_Epoch] = ACTIONS(533),
    [anon_sym_Group] = ACTIONS(533),
    [anon_sym_License] = ACTIONS(533),
    [anon_sym_ModularityLabel] = ACTIONS(533),
    [anon_sym_Name] = ACTIONS(533),
    [anon_sym_NoPatch] = ACTIONS(533),
    [anon_sym_NoSource] = ACTIONS(533),
    [anon_sym_Packager] = ACTIONS(533),
    [anon_sym_Release] = ACTIONS(533),
    [anon_sym_SourceLicense] = ACTIONS(533),
    [anon_sym_Summary] = ACTIONS(533),
    [anon_sym_URL] = ACTIONS(533),
    [anon_sym_Url] = ACTIONS(533),
    [anon_sym_VCS] = ACTIONS(533),
    [anon_sym_Vendor] = ACTIONS(533),
    [anon_sym_Version] = ACTIONS(533),
    [aux_sym_tag_token1] = ACTIONS(533),
    [aux_sym_tag_token2] = ACTIONS(533),
    [anon_sym_Requires] = ACTIONS(533),
    [anon_sym_BuildArch] = ACTIONS(533),
    [anon_sym_BuildArchitectures] = ACTIONS(533),
    [anon_sym_BuildConflicts] = ACTIONS(533),
    [anon_sym_BuildPrereq] = ACTIONS(533),
    [anon_sym_BuildRequires] = ACTIONS(533),
    [anon_sym_Conflicts] = ACTIONS(533),
    [anon_sym_DocDir] = ACTIONS(533),
    [anon_sym_Enhances] = ACTIONS(533),
    [anon_sym_ExcludeArch] = ACTIONS(533),
    [anon_sym_ExcludeOS] = ACTIONS(533),
    [anon_sym_ExclusiveArch] = ACTIONS(533),
    [anon_sym_ExclusiveOS] = ACTIONS(533),
    [anon_sym_Obsoletes] = ACTIONS(533),
    [anon_sym_OrderWithRequires] = ACTIONS(533),
    [anon_sym_Prefix] = ACTIONS(533),
    [anon_sym_Prefixes] = ACTIONS(533),
    [anon_sym_Prereq] = ACTIONS(533),
    [anon_sym_Provides] = ACTIONS(533),
    [anon_sym_Recommends] = ACTIONS(533),
    [anon_sym_RemovePathPostfixes] = ACTIONS(533),
    [anon_sym_Suggests] = ACTIONS(533),
    [anon_sym_Supplements] = ACTIONS(533),
    [anon_sym_PERCENTdescription] = ACTIONS(533),
    [anon_sym_PERCENTpackage] = ACTIONS(533),
    [anon_sym_PERCENTprep] = ACTIONS(533),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(533),
    [anon_sym_PERCENTconf] = ACTIONS(533),
    [anon_sym_PERCENTbuild] = ACTIONS(533),
    [anon_sym_PERCENTinstall] = ACTIONS(533),
    [anon_sym_PERCENTcheck] = ACTIONS(533),
    [anon_sym_PERCENTclean] = ACTIONS(533),
    [anon_sym_PERCENTpre] = ACTIONS(533),
    [anon_sym_PERCENTpost] = ACTIONS(533),
    [anon_sym_PERCENTpreun] = ACTIONS(533),
    [anon_sym_PERCENTpostun] = ACTIONS(533),
    [anon_sym_PERCENTpretrans] = ACTIONS(533),
    [anon_sym_PERCENTposttrans] = ACTIONS(533),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(533),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(533),
    [anon_sym_PERCENTverify] = ACTIONS(533),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(533),
    [anon_sym_PERCENTtriggerin] = ACTIONS(533),
    [anon_sym_PERCENTtriggerun] = ACTIONS(533),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(533),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(533),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(533),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(533),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(533),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(533),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(533),
    [anon_sym_PERCENTfiles] = ACTIONS(533),
    [anon_sym_PERCENTchangelog] = ACTIONS(533),
    [anon_sym_PERCENTglobal] = ACTIONS(533),
    [anon_sym_PERCENTdefine] = ACTIONS(533),
    [anon_sym_PERCENTundefine] = ACTIONS(533),
    [anon_sym_PERCENT] = ACTIONS(533),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(533),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(533),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(507),
    [aux_sym__top_level_token1] = ACTIONS(507),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(509),
    [anon_sym_PERCENTifarch] = ACTIONS(509),
    [anon_sym_PERCENTifos] = ACTIONS(509),
    [anon_sym_PERCENTifnarch] = ACTIONS(509),
    [anon_sym_PERCENTifnos] = ACTIONS(509),
    [anon_sym_AutoProv] = ACTIONS(509),
    [anon_sym_AutoReq] = ACTIONS(509),
    [anon_sym_AutoReqProv] = ACTIONS(509),
    [anon_sym_BugUrl] = ACTIONS(509),
    [anon_sym_BuildRoot] = ACTIONS(509),
    [anon_sym_BuildSystem] = ACTIONS(509),
    [anon_sym_DistTag] = ACTIONS(509),
    [anon_sym_Distribution] = ACTIONS(509),
    [anon_sym_Epoch] = ACTIONS(509),
    [anon_sym_Group] = ACTIONS(509),
    [anon_sym_License] = ACTIONS(509),
    [anon_sym_ModularityLabel] = ACTIONS(509),
    [anon_sym_Name] = ACTIONS(509),
    [anon_sym_NoPatch] = ACTIONS(509),
    [anon_sym_NoSource] = ACTIONS(509),
    [anon_sym_Packager] = ACTIONS(509),
    [anon_sym_Release] = ACTIONS(509),
    [anon_sym_SourceLicense] = ACTIONS(509),
    [anon_sym_Summary] = ACTIONS(509),
    [anon_sym_URL] = ACTIONS(509),
    [anon_sym_Url] = ACTIONS(509),
    [anon_sym_VCS] = ACTIONS(509),
    [anon_sym_Vendor] = ACTIONS(509),
    [anon_sym_Version] = ACTIONS(509),
    [aux_sym_tag_token1] = ACTIONS(509),
    [aux_sym_tag_token2] = ACTIONS(509),
    [anon_sym_Requires] = ACTIONS(509),
    [anon_sym_BuildArch] = ACTIONS(509),
    [anon_sym_BuildArchitectures] = ACTIONS(509),
    [anon_sym_BuildConflicts] = ACTIONS(509),
    [anon_sym_BuildPrereq] = ACTIONS(509),
    [anon_sym_BuildRequires] = ACTIONS(509),
    [anon_sym_Conflicts] = ACTIONS(509),
    [anon_sym_DocDir] = ACTIONS(509),
    [anon_sym_Enhances] = ACTIONS(509),
    [anon_sym_ExcludeArch] = ACTIONS(509),
    [anon_sym_ExcludeOS] = ACTIONS(509),
    [anon_sym_ExclusiveArch] = ACTIONS(509),
    [anon_sym_ExclusiveOS] = ACTIONS(509),
    [anon_sym_Obsoletes] = ACTIONS(509),
    [anon_sym_OrderWithRequires] = ACTIONS(509),
    [anon_sym_Prefix] = ACTIONS(509),
    [anon_sym_Prefixes] = ACTIONS(509),
    [anon_sym_Prereq] = ACTIONS(509),
    [anon_sym_Provides] = ACTIONS(509),
    [anon_sym_Recommends] = ACTIONS(509),
    [anon_sym_RemovePathPostfixes] = ACTIONS(509),
    [anon_sym_Suggests] = ACTIONS(509),
    [anon_sym_Supplements] = ACTIONS(509),
    [anon_sym_PERCENTdescription] = ACTIONS(509),
    [anon_sym_PERCENTpackage] = ACTIONS(509),
    [anon_sym_PERCENTprep] = ACTIONS(509),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(509),
    [anon_sym_PERCENTconf] = ACTIONS(509),
    [anon_sym_PERCENTbuild] = ACTIONS(509),
    [anon_sym_PERCENTinstall] = ACTIONS(509),
    [anon_sym_PERCENTcheck] = ACTIONS(509),
    [anon_sym_PERCENTclean] = ACTIONS(509),
    [anon_sym_PERCENTpre] = ACTIONS(509),
    [anon_sym_PERCENTpost] = ACTIONS(509),
    [anon_sym_PERCENTpreun] = ACTIONS(509),
    [anon_sym_PERCENTpostun] = ACTIONS(509),
    [anon_sym_PERCENTpretrans] = ACTIONS(509),
    [anon_sym_PERCENTposttrans] = ACTIONS(509),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(509),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(509),
    [anon_sym_PERCENTverify] = ACTIONS(509),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(509),
    [anon_sym_PERCENTtriggerin] = ACTIONS(509),
    [anon_sym_PERCENTtriggerun] = ACTIONS(509),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(509),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(509),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(509),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(509),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(509),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(509),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(509),
    [anon_sym_PERCENTfiles] = ACTIONS(509),
    [anon_sym_PERCENTchangelog] = ACTIONS(509),
    [anon_sym_PERCENTglobal] = ACTIONS(509),
    [anon_sym_PERCENTdefine] = ACTIONS(509),
    [anon_sym_PERCENTundefine] = ACTIONS(509),
    [anon_sym_PERCENT] = ACTIONS(509),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(509),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(509),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [aux_sym__top_level_token1] = ACTIONS(527),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(529),
    [anon_sym_PERCENTifarch] = ACTIONS(529),
    [anon_sym_PERCENTifos] = ACTIONS(529),
    [anon_sym_PERCENTifnarch] = ACTIONS(529),
    [anon_sym_PERCENTifnos] = ACTIONS(529),
    [anon_sym_AutoProv] = ACTIONS(529),
    [anon_sym_AutoReq] = ACTIONS(529),
    [anon_sym_AutoReqProv] = ACTIONS(529),
    [anon_sym_BugUrl] = ACTIONS(529),
    [anon_sym_BuildRoot] = ACTIONS(529),
    [anon_sym_BuildSystem] = ACTIONS(529),
    [anon_sym_DistTag] = ACTIONS(529),
    [anon_sym_Distribution] = ACTIONS(529),
    [anon_sym_Epoch] = ACTIONS(529),
    [anon_sym_Group] = ACTIONS(529),
    [anon_sym_License] = ACTIONS(529),
    [anon_sym_ModularityLabel] = ACTIONS(529),
    [anon_sym_Name] = ACTIONS(529),
    [anon_sym_NoPatch] = ACTIONS(529),
    [anon_sym_NoSource] = ACTIONS(529),
    [anon_sym_Packager] = ACTIONS(529),
    [anon_sym_Release] = ACTIONS(529),
    [anon_sym_SourceLicense] = ACTIONS(529),
    [anon_sym_Summary] = ACTIONS(529),
    [anon_sym_URL] = ACTIONS(529),
    [anon_sym_Url] = ACTIONS(529),
    [anon_sym_VCS] = ACTIONS(529),
    [anon_sym_Vendor] = ACTIONS(529),
    [anon_sym_Version] = ACTIONS(529),
    [aux_sym_tag_token1] = ACTIONS(529),
    [aux_sym_tag_token2] = ACTIONS(529),
    [anon_sym_Requires] = ACTIONS(529),
    [anon_sym_BuildArch] = ACTIONS(529),
    [anon_sym_BuildArchitectures] = ACTIONS(529),
    [anon_sym_BuildConflicts] = ACTIONS(529),
    [anon_sym_BuildPrereq] = ACTIONS(529),
    [anon_sym_BuildRequires] = ACTIONS(529),
    [anon_sym_Conflicts] = ACTIONS(529),
    [anon_sym_DocDir] = ACTIONS(529),
    [anon_sym_Enhances] = ACTIONS(529),
    [anon_sym_ExcludeArch] = ACTIONS(529),
    [anon_sym_ExcludeOS] = ACTIONS(529),
    [anon_sym_ExclusiveArch] = ACTIONS(529),
    [anon_sym_ExclusiveOS] = ACTIONS(529),
    [anon_sym_Obsoletes] = ACTIONS(529),
    [anon_sym_OrderWithRequires] = ACTIONS(529),
    [anon_sym_Prefix] = ACTIONS(529),
    [anon_sym_Prefixes] = ACTIONS(529),
    [anon_sym_Prereq] = ACTIONS(529),
    [anon_sym_Provides] = ACTIONS(529),
    [anon_sym_Recommends] = ACTIONS(529),
    [anon_sym_RemovePathPostfixes] = ACTIONS(529),
    [anon_sym_Suggests] = ACTIONS(529),
    [anon_sym_Supplements] = ACTIONS(529),
    [anon_sym_PERCENTdescription] = ACTIONS(529),
    [anon_sym_PERCENTpackage] = ACTIONS(529),
    [anon_sym_PERCENTprep] = ACTIONS(529),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(529),
    [anon_sym_PERCENTconf] = ACTIONS(529),
    [anon_sym_PERCENTbuild] = ACTIONS(529),
    [anon_sym_PERCENTinstall] = ACTIONS(529),
    [anon_sym_PERCENTcheck] = ACTIONS(529),
    [anon_sym_PERCENTclean] = ACTIONS(529),
    [anon_sym_PERCENTpre] = ACTIONS(529),
    [anon_sym_PERCENTpost] = ACTIONS(529),
    [anon_sym_PERCENTpreun] = ACTIONS(529),
    [anon_sym_PERCENTpostun] = ACTIONS(529),
    [anon_sym_PERCENTpretrans] = ACTIONS(529),
    [anon_sym_PERCENTposttrans] = ACTIONS(529),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(529),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(529),
    [anon_sym_PERCENTverify] = ACTIONS(529),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(529),
    [anon_sym_PERCENTtriggerin] = ACTIONS(529),
    [anon_sym_PERCENTtriggerun] = ACTIONS(529),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(529),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(529),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(529),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(529),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(529),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(529),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(529),
    [anon_sym_PERCENTfiles] = ACTIONS(529),
    [anon_sym_PERCENTchangelog] = ACTIONS(529),
    [anon_sym_PERCENTglobal] = ACTIONS(529),
    [anon_sym_PERCENTdefine] = ACTIONS(529),
    [anon_sym_PERCENTundefine] = ACTIONS(529),
    [anon_sym_PERCENT] = ACTIONS(529),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(529),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(529),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(523),
    [aux_sym__top_level_token1] = ACTIONS(523),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(525),
    [anon_sym_PERCENTifarch] = ACTIONS(525),
    [anon_sym_PERCENTifos] = ACTIONS(525),
    [anon_sym_PERCENTifnarch] = ACTIONS(525),
    [anon_sym_PERCENTifnos] = ACTIONS(525),
    [anon_sym_AutoProv] = ACTIONS(525),
    [anon_sym_AutoReq] = ACTIONS(525),
    [anon_sym_AutoReqProv] = ACTIONS(525),
    [anon_sym_BugUrl] = ACTIONS(525),
    [anon_sym_BuildRoot] = ACTIONS(525),
    [anon_sym_BuildSystem] = ACTIONS(525),
    [anon_sym_DistTag] = ACTIONS(525),
    [anon_sym_Distribution] = ACTIONS(525),
    [anon_sym_Epoch] = ACTIONS(525),
    [anon_sym_Group] = ACTIONS(525),
    [anon_sym_License] = ACTIONS(525),
    [anon_sym_ModularityLabel] = ACTIONS(525),
    [anon_sym_Name] = ACTIONS(525),
    [anon_sym_NoPatch] = ACTIONS(525),
    [anon_sym_NoSource] = ACTIONS(525),
    [anon_sym_Packager] = ACTIONS(525),
    [anon_sym_Release] = ACTIONS(525),
    [anon_sym_SourceLicense] = ACTIONS(525),
    [anon_sym_Summary] = ACTIONS(525),
    [anon_sym_URL] = ACTIONS(525),
    [anon_sym_Url] = ACTIONS(525),
    [anon_sym_VCS] = ACTIONS(525),
    [anon_sym_Vendor] = ACTIONS(525),
    [anon_sym_Version] = ACTIONS(525),
    [aux_sym_tag_token1] = ACTIONS(525),
    [aux_sym_tag_token2] = ACTIONS(525),
    [anon_sym_Requires] = ACTIONS(525),
    [anon_sym_BuildArch] = ACTIONS(525),
    [anon_sym_BuildArchitectures] = ACTIONS(525),
    [anon_sym_BuildConflicts] = ACTIONS(525),
    [anon_sym_BuildPrereq] = ACTIONS(525),
    [anon_sym_BuildRequires] = ACTIONS(525),
    [anon_sym_Conflicts] = ACTIONS(525),
    [anon_sym_DocDir] = ACTIONS(525),
    [anon_sym_Enhances] = ACTIONS(525),
    [anon_sym_ExcludeArch] = ACTIONS(525),
    [anon_sym_ExcludeOS] = ACTIONS(525),
    [anon_sym_ExclusiveArch] = ACTIONS(525),
    [anon_sym_ExclusiveOS] = ACTIONS(525),
    [anon_sym_Obsoletes] = ACTIONS(525),
    [anon_sym_OrderWithRequires] = ACTIONS(525),
    [anon_sym_Prefix] = ACTIONS(525),
    [anon_sym_Prefixes] = ACTIONS(525),
    [anon_sym_Prereq] = ACTIONS(525),
    [anon_sym_Provides] = ACTIONS(525),
    [anon_sym_Recommends] = ACTIONS(525),
    [anon_sym_RemovePathPostfixes] = ACTIONS(525),
    [anon_sym_Suggests] = ACTIONS(525),
    [anon_sym_Supplements] = ACTIONS(525),
    [anon_sym_PERCENTdescription] = ACTIONS(525),
    [anon_sym_PERCENTpackage] = ACTIONS(525),
    [anon_sym_PERCENTprep] = ACTIONS(525),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(525),
    [anon_sym_PERCENTconf] = ACTIONS(525),
    [anon_sym_PERCENTbuild] = ACTIONS(525),
    [anon_sym_PERCENTinstall] = ACTIONS(525),
    [anon_sym_PERCENTcheck] = ACTIONS(525),
    [anon_sym_PERCENTclean] = ACTIONS(525),
    [anon_sym_PERCENTpre] = ACTIONS(525),
    [anon_sym_PERCENTpost] = ACTIONS(525),
    [anon_sym_PERCENTpreun] = ACTIONS(525),
    [anon_sym_PERCENTpostun] = ACTIONS(525),
    [anon_sym_PERCENTpretrans] = ACTIONS(525),
    [anon_sym_PERCENTposttrans] = ACTIONS(525),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(525),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(525),
    [anon_sym_PERCENTverify] = ACTIONS(525),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(525),
    [anon_sym_PERCENTtriggerin] = ACTIONS(525),
    [anon_sym_PERCENTtriggerun] = ACTIONS(525),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(525),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(525),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(525),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(525),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(525),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(525),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(525),
    [anon_sym_PERCENTfiles] = ACTIONS(525),
    [anon_sym_PERCENTchangelog] = ACTIONS(525),
    [anon_sym_PERCENTglobal] = ACTIONS(525),
    [anon_sym_PERCENTdefine] = ACTIONS(525),
    [anon_sym_PERCENTundefine] = ACTIONS(525),
    [anon_sym_PERCENT] = ACTIONS(525),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(525),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(525),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(519),
    [aux_sym__top_level_token1] = ACTIONS(519),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(521),
    [anon_sym_PERCENTifarch] = ACTIONS(521),
    [anon_sym_PERCENTifos] = ACTIONS(521),
    [anon_sym_PERCENTifnarch] = ACTIONS(521),
    [anon_sym_PERCENTifnos] = ACTIONS(521),
    [anon_sym_AutoProv] = ACTIONS(521),
    [anon_sym_AutoReq] = ACTIONS(521),
    [anon_sym_AutoReqProv] = ACTIONS(521),
    [anon_sym_BugUrl] = ACTIONS(521),
    [anon_sym_BuildRoot] = ACTIONS(521),
    [anon_sym_BuildSystem] = ACTIONS(521),
    [anon_sym_DistTag] = ACTIONS(521),
    [anon_sym_Distribution] = ACTIONS(521),
    [anon_sym_Epoch] = ACTIONS(521),
    [anon_sym_Group] = ACTIONS(521),
    [anon_sym_License] = ACTIONS(521),
    [anon_sym_ModularityLabel] = ACTIONS(521),
    [anon_sym_Name] = ACTIONS(521),
    [anon_sym_NoPatch] = ACTIONS(521),
    [anon_sym_NoSource] = ACTIONS(521),
    [anon_sym_Packager] = ACTIONS(521),
    [anon_sym_Release] = ACTIONS(521),
    [anon_sym_SourceLicense] = ACTIONS(521),
    [anon_sym_Summary] = ACTIONS(521),
    [anon_sym_URL] = ACTIONS(521),
    [anon_sym_Url] = ACTIONS(521),
    [anon_sym_VCS] = ACTIONS(521),
    [anon_sym_Vendor] = ACTIONS(521),
    [anon_sym_Version] = ACTIONS(521),
    [aux_sym_tag_token1] = ACTIONS(521),
    [aux_sym_tag_token2] = ACTIONS(521),
    [anon_sym_Requires] = ACTIONS(521),
    [anon_sym_BuildArch] = ACTIONS(521),
    [anon_sym_BuildArchitectures] = ACTIONS(521),
    [anon_sym_BuildConflicts] = ACTIONS(521),
    [anon_sym_BuildPrereq] = ACTIONS(521),
    [anon_sym_BuildRequires] = ACTIONS(521),
    [anon_sym_Conflicts] = ACTIONS(521),
    [anon_sym_DocDir] = ACTIONS(521),
    [anon_sym_Enhances] = ACTIONS(521),
    [anon_sym_ExcludeArch] = ACTIONS(521),
    [anon_sym_ExcludeOS] = ACTIONS(521),
    [anon_sym_ExclusiveArch] = ACTIONS(521),
    [anon_sym_ExclusiveOS] = ACTIONS(521),
    [anon_sym_Obsoletes] = ACTIONS(521),
    [anon_sym_OrderWithRequires] = ACTIONS(521),
    [anon_sym_Prefix] = ACTIONS(521),
    [anon_sym_Prefixes] = ACTIONS(521),
    [anon_sym_Prereq] = ACTIONS(521),
    [anon_sym_Provides] = ACTIONS(521),
    [anon_sym_Recommends] = ACTIONS(521),
    [anon_sym_RemovePathPostfixes] = ACTIONS(521),
    [anon_sym_Suggests] = ACTIONS(521),
    [anon_sym_Supplements] = ACTIONS(521),
    [anon_sym_PERCENTdescription] = ACTIONS(521),
    [anon_sym_PERCENTpackage] = ACTIONS(521),
    [anon_sym_PERCENTprep] = ACTIONS(521),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(521),
    [anon_sym_PERCENTconf] = ACTIONS(521),
    [anon_sym_PERCENTbuild] = ACTIONS(521),
    [anon_sym_PERCENTinstall] = ACTIONS(521),
    [anon_sym_PERCENTcheck] = ACTIONS(521),
    [anon_sym_PERCENTclean] = ACTIONS(521),
    [anon_sym_PERCENTpre] = ACTIONS(521),
    [anon_sym_PERCENTpost] = ACTIONS(521),
    [anon_sym_PERCENTpreun] = ACTIONS(521),
    [anon_sym_PERCENTpostun] = ACTIONS(521),
    [anon_sym_PERCENTpretrans] = ACTIONS(521),
    [anon_sym_PERCENTposttrans] = ACTIONS(521),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(521),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(521),
    [anon_sym_PERCENTverify] = ACTIONS(521),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(521),
    [anon_sym_PERCENTtriggerin] = ACTIONS(521),
    [anon_sym_PERCENTtriggerun] = ACTIONS(521),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(521),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(521),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(521),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(521),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(521),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(521),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(521),
    [anon_sym_PERCENTfiles] = ACTIONS(521),
    [anon_sym_PERCENTchangelog] = ACTIONS(521),
    [anon_sym_PERCENTglobal] = ACTIONS(521),
    [anon_sym_PERCENTdefine] = ACTIONS(521),
    [anon_sym_PERCENTundefine] = ACTIONS(521),
    [anon_sym_PERCENT] = ACTIONS(521),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(521),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(521),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [aux_sym__top_level_token1] = ACTIONS(463),
    [sym_comment] = ACTIONS(7),
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
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [aux_sym__top_level_token1] = ACTIONS(471),
    [sym_comment] = ACTIONS(7),
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
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(515),
    [aux_sym__top_level_token1] = ACTIONS(515),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(517),
    [anon_sym_PERCENTifarch] = ACTIONS(517),
    [anon_sym_PERCENTifos] = ACTIONS(517),
    [anon_sym_PERCENTifnarch] = ACTIONS(517),
    [anon_sym_PERCENTifnos] = ACTIONS(517),
    [anon_sym_AutoProv] = ACTIONS(517),
    [anon_sym_AutoReq] = ACTIONS(517),
    [anon_sym_AutoReqProv] = ACTIONS(517),
    [anon_sym_BugUrl] = ACTIONS(517),
    [anon_sym_BuildRoot] = ACTIONS(517),
    [anon_sym_BuildSystem] = ACTIONS(517),
    [anon_sym_DistTag] = ACTIONS(517),
    [anon_sym_Distribution] = ACTIONS(517),
    [anon_sym_Epoch] = ACTIONS(517),
    [anon_sym_Group] = ACTIONS(517),
    [anon_sym_License] = ACTIONS(517),
    [anon_sym_ModularityLabel] = ACTIONS(517),
    [anon_sym_Name] = ACTIONS(517),
    [anon_sym_NoPatch] = ACTIONS(517),
    [anon_sym_NoSource] = ACTIONS(517),
    [anon_sym_Packager] = ACTIONS(517),
    [anon_sym_Release] = ACTIONS(517),
    [anon_sym_SourceLicense] = ACTIONS(517),
    [anon_sym_Summary] = ACTIONS(517),
    [anon_sym_URL] = ACTIONS(517),
    [anon_sym_Url] = ACTIONS(517),
    [anon_sym_VCS] = ACTIONS(517),
    [anon_sym_Vendor] = ACTIONS(517),
    [anon_sym_Version] = ACTIONS(517),
    [aux_sym_tag_token1] = ACTIONS(517),
    [aux_sym_tag_token2] = ACTIONS(517),
    [anon_sym_Requires] = ACTIONS(517),
    [anon_sym_BuildArch] = ACTIONS(517),
    [anon_sym_BuildArchitectures] = ACTIONS(517),
    [anon_sym_BuildConflicts] = ACTIONS(517),
    [anon_sym_BuildPrereq] = ACTIONS(517),
    [anon_sym_BuildRequires] = ACTIONS(517),
    [anon_sym_Conflicts] = ACTIONS(517),
    [anon_sym_DocDir] = ACTIONS(517),
    [anon_sym_Enhances] = ACTIONS(517),
    [anon_sym_ExcludeArch] = ACTIONS(517),
    [anon_sym_ExcludeOS] = ACTIONS(517),
    [anon_sym_ExclusiveArch] = ACTIONS(517),
    [anon_sym_ExclusiveOS] = ACTIONS(517),
    [anon_sym_Obsoletes] = ACTIONS(517),
    [anon_sym_OrderWithRequires] = ACTIONS(517),
    [anon_sym_Prefix] = ACTIONS(517),
    [anon_sym_Prefixes] = ACTIONS(517),
    [anon_sym_Prereq] = ACTIONS(517),
    [anon_sym_Provides] = ACTIONS(517),
    [anon_sym_Recommends] = ACTIONS(517),
    [anon_sym_RemovePathPostfixes] = ACTIONS(517),
    [anon_sym_Suggests] = ACTIONS(517),
    [anon_sym_Supplements] = ACTIONS(517),
    [anon_sym_PERCENTdescription] = ACTIONS(517),
    [anon_sym_PERCENTpackage] = ACTIONS(517),
    [anon_sym_PERCENTprep] = ACTIONS(517),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(517),
    [anon_sym_PERCENTconf] = ACTIONS(517),
    [anon_sym_PERCENTbuild] = ACTIONS(517),
    [anon_sym_PERCENTinstall] = ACTIONS(517),
    [anon_sym_PERCENTcheck] = ACTIONS(517),
    [anon_sym_PERCENTclean] = ACTIONS(517),
    [anon_sym_PERCENTpre] = ACTIONS(517),
    [anon_sym_PERCENTpost] = ACTIONS(517),
    [anon_sym_PERCENTpreun] = ACTIONS(517),
    [anon_sym_PERCENTpostun] = ACTIONS(517),
    [anon_sym_PERCENTpretrans] = ACTIONS(517),
    [anon_sym_PERCENTposttrans] = ACTIONS(517),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(517),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(517),
    [anon_sym_PERCENTverify] = ACTIONS(517),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(517),
    [anon_sym_PERCENTtriggerin] = ACTIONS(517),
    [anon_sym_PERCENTtriggerun] = ACTIONS(517),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(517),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(517),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(517),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(517),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(517),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(517),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(517),
    [anon_sym_PERCENTfiles] = ACTIONS(517),
    [anon_sym_PERCENTchangelog] = ACTIONS(517),
    [anon_sym_PERCENTglobal] = ACTIONS(517),
    [anon_sym_PERCENTdefine] = ACTIONS(517),
    [anon_sym_PERCENTundefine] = ACTIONS(517),
    [anon_sym_PERCENT] = ACTIONS(517),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(517),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(517),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [aux_sym__top_level_token1] = ACTIONS(475),
    [sym_comment] = ACTIONS(7),
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
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(495),
    [aux_sym__top_level_token1] = ACTIONS(495),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(497),
    [anon_sym_PERCENTifarch] = ACTIONS(497),
    [anon_sym_PERCENTifos] = ACTIONS(497),
    [anon_sym_PERCENTifnarch] = ACTIONS(497),
    [anon_sym_PERCENTifnos] = ACTIONS(497),
    [anon_sym_AutoProv] = ACTIONS(497),
    [anon_sym_AutoReq] = ACTIONS(497),
    [anon_sym_AutoReqProv] = ACTIONS(497),
    [anon_sym_BugUrl] = ACTIONS(497),
    [anon_sym_BuildRoot] = ACTIONS(497),
    [anon_sym_BuildSystem] = ACTIONS(497),
    [anon_sym_DistTag] = ACTIONS(497),
    [anon_sym_Distribution] = ACTIONS(497),
    [anon_sym_Epoch] = ACTIONS(497),
    [anon_sym_Group] = ACTIONS(497),
    [anon_sym_License] = ACTIONS(497),
    [anon_sym_ModularityLabel] = ACTIONS(497),
    [anon_sym_Name] = ACTIONS(497),
    [anon_sym_NoPatch] = ACTIONS(497),
    [anon_sym_NoSource] = ACTIONS(497),
    [anon_sym_Packager] = ACTIONS(497),
    [anon_sym_Release] = ACTIONS(497),
    [anon_sym_SourceLicense] = ACTIONS(497),
    [anon_sym_Summary] = ACTIONS(497),
    [anon_sym_URL] = ACTIONS(497),
    [anon_sym_Url] = ACTIONS(497),
    [anon_sym_VCS] = ACTIONS(497),
    [anon_sym_Vendor] = ACTIONS(497),
    [anon_sym_Version] = ACTIONS(497),
    [aux_sym_tag_token1] = ACTIONS(497),
    [aux_sym_tag_token2] = ACTIONS(497),
    [anon_sym_Requires] = ACTIONS(497),
    [anon_sym_BuildArch] = ACTIONS(497),
    [anon_sym_BuildArchitectures] = ACTIONS(497),
    [anon_sym_BuildConflicts] = ACTIONS(497),
    [anon_sym_BuildPrereq] = ACTIONS(497),
    [anon_sym_BuildRequires] = ACTIONS(497),
    [anon_sym_Conflicts] = ACTIONS(497),
    [anon_sym_DocDir] = ACTIONS(497),
    [anon_sym_Enhances] = ACTIONS(497),
    [anon_sym_ExcludeArch] = ACTIONS(497),
    [anon_sym_ExcludeOS] = ACTIONS(497),
    [anon_sym_ExclusiveArch] = ACTIONS(497),
    [anon_sym_ExclusiveOS] = ACTIONS(497),
    [anon_sym_Obsoletes] = ACTIONS(497),
    [anon_sym_OrderWithRequires] = ACTIONS(497),
    [anon_sym_Prefix] = ACTIONS(497),
    [anon_sym_Prefixes] = ACTIONS(497),
    [anon_sym_Prereq] = ACTIONS(497),
    [anon_sym_Provides] = ACTIONS(497),
    [anon_sym_Recommends] = ACTIONS(497),
    [anon_sym_RemovePathPostfixes] = ACTIONS(497),
    [anon_sym_Suggests] = ACTIONS(497),
    [anon_sym_Supplements] = ACTIONS(497),
    [anon_sym_PERCENTdescription] = ACTIONS(497),
    [anon_sym_PERCENTpackage] = ACTIONS(497),
    [anon_sym_PERCENTprep] = ACTIONS(497),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(497),
    [anon_sym_PERCENTconf] = ACTIONS(497),
    [anon_sym_PERCENTbuild] = ACTIONS(497),
    [anon_sym_PERCENTinstall] = ACTIONS(497),
    [anon_sym_PERCENTcheck] = ACTIONS(497),
    [anon_sym_PERCENTclean] = ACTIONS(497),
    [anon_sym_PERCENTpre] = ACTIONS(497),
    [anon_sym_PERCENTpost] = ACTIONS(497),
    [anon_sym_PERCENTpreun] = ACTIONS(497),
    [anon_sym_PERCENTpostun] = ACTIONS(497),
    [anon_sym_PERCENTpretrans] = ACTIONS(497),
    [anon_sym_PERCENTposttrans] = ACTIONS(497),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(497),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(497),
    [anon_sym_PERCENTverify] = ACTIONS(497),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(497),
    [anon_sym_PERCENTtriggerin] = ACTIONS(497),
    [anon_sym_PERCENTtriggerun] = ACTIONS(497),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(497),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(497),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(497),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(497),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(497),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(497),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(497),
    [anon_sym_PERCENTfiles] = ACTIONS(497),
    [anon_sym_PERCENTchangelog] = ACTIONS(497),
    [anon_sym_PERCENTglobal] = ACTIONS(497),
    [anon_sym_PERCENTdefine] = ACTIONS(497),
    [anon_sym_PERCENTundefine] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(497),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(497),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(497),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [aux_sym__top_level_token1] = ACTIONS(479),
    [sym_comment] = ACTIONS(7),
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
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [aux_sym__top_level_token1] = ACTIONS(467),
    [sym_comment] = ACTIONS(7),
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
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [aux_sym__top_level_token1] = ACTIONS(459),
    [sym_comment] = ACTIONS(7),
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
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [aux_sym__top_level_token1] = ACTIONS(491),
    [sym_comment] = ACTIONS(7),
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
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [aux_sym__top_level_token1] = ACTIONS(483),
    [sym_comment] = ACTIONS(7),
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
  [114] = {
    [aux_sym__top_level_token1] = ACTIONS(463),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(465),
    [anon_sym_PERCENTifarch] = ACTIONS(465),
    [anon_sym_PERCENTifos] = ACTIONS(465),
    [anon_sym_PERCENTifnarch] = ACTIONS(465),
    [anon_sym_PERCENTifnos] = ACTIONS(465),
    [anon_sym_PERCENTendif] = ACTIONS(465),
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
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym__top_level_token1] = ACTIONS(447),
    [sym_comment] = ACTIONS(7),
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
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [aux_sym__top_level_token1] = ACTIONS(487),
    [sym_comment] = ACTIONS(7),
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
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(511),
    [aux_sym__top_level_token1] = ACTIONS(511),
    [sym_comment] = ACTIONS(7),
    [anon_sym_PERCENTif] = ACTIONS(513),
    [anon_sym_PERCENTifarch] = ACTIONS(513),
    [anon_sym_PERCENTifos] = ACTIONS(513),
    [anon_sym_PERCENTifnarch] = ACTIONS(513),
    [anon_sym_PERCENTifnos] = ACTIONS(513),
    [anon_sym_AutoProv] = ACTIONS(513),
    [anon_sym_AutoReq] = ACTIONS(513),
    [anon_sym_AutoReqProv] = ACTIONS(513),
    [anon_sym_BugUrl] = ACTIONS(513),
    [anon_sym_BuildRoot] = ACTIONS(513),
    [anon_sym_BuildSystem] = ACTIONS(513),
    [anon_sym_DistTag] = ACTIONS(513),
    [anon_sym_Distribution] = ACTIONS(513),
    [anon_sym_Epoch] = ACTIONS(513),
    [anon_sym_Group] = ACTIONS(513),
    [anon_sym_License] = ACTIONS(513),
    [anon_sym_ModularityLabel] = ACTIONS(513),
    [anon_sym_Name] = ACTIONS(513),
    [anon_sym_NoPatch] = ACTIONS(513),
    [anon_sym_NoSource] = ACTIONS(513),
    [anon_sym_Packager] = ACTIONS(513),
    [anon_sym_Release] = ACTIONS(513),
    [anon_sym_SourceLicense] = ACTIONS(513),
    [anon_sym_Summary] = ACTIONS(513),
    [anon_sym_URL] = ACTIONS(513),
    [anon_sym_Url] = ACTIONS(513),
    [anon_sym_VCS] = ACTIONS(513),
    [anon_sym_Vendor] = ACTIONS(513),
    [anon_sym_Version] = ACTIONS(513),
    [aux_sym_tag_token1] = ACTIONS(513),
    [aux_sym_tag_token2] = ACTIONS(513),
    [anon_sym_Requires] = ACTIONS(513),
    [anon_sym_BuildArch] = ACTIONS(513),
    [anon_sym_BuildArchitectures] = ACTIONS(513),
    [anon_sym_BuildConflicts] = ACTIONS(513),
    [anon_sym_BuildPrereq] = ACTIONS(513),
    [anon_sym_BuildRequires] = ACTIONS(513),
    [anon_sym_Conflicts] = ACTIONS(513),
    [anon_sym_DocDir] = ACTIONS(513),
    [anon_sym_Enhances] = ACTIONS(513),
    [anon_sym_ExcludeArch] = ACTIONS(513),
    [anon_sym_ExcludeOS] = ACTIONS(513),
    [anon_sym_ExclusiveArch] = ACTIONS(513),
    [anon_sym_ExclusiveOS] = ACTIONS(513),
    [anon_sym_Obsoletes] = ACTIONS(513),
    [anon_sym_OrderWithRequires] = ACTIONS(513),
    [anon_sym_Prefix] = ACTIONS(513),
    [anon_sym_Prefixes] = ACTIONS(513),
    [anon_sym_Prereq] = ACTIONS(513),
    [anon_sym_Provides] = ACTIONS(513),
    [anon_sym_Recommends] = ACTIONS(513),
    [anon_sym_RemovePathPostfixes] = ACTIONS(513),
    [anon_sym_Suggests] = ACTIONS(513),
    [anon_sym_Supplements] = ACTIONS(513),
    [anon_sym_PERCENTdescription] = ACTIONS(513),
    [anon_sym_PERCENTpackage] = ACTIONS(513),
    [anon_sym_PERCENTprep] = ACTIONS(513),
    [anon_sym_PERCENTgenerate_buildrequires] = ACTIONS(513),
    [anon_sym_PERCENTconf] = ACTIONS(513),
    [anon_sym_PERCENTbuild] = ACTIONS(513),
    [anon_sym_PERCENTinstall] = ACTIONS(513),
    [anon_sym_PERCENTcheck] = ACTIONS(513),
    [anon_sym_PERCENTclean] = ACTIONS(513),
    [anon_sym_PERCENTpre] = ACTIONS(513),
    [anon_sym_PERCENTpost] = ACTIONS(513),
    [anon_sym_PERCENTpreun] = ACTIONS(513),
    [anon_sym_PERCENTpostun] = ACTIONS(513),
    [anon_sym_PERCENTpretrans] = ACTIONS(513),
    [anon_sym_PERCENTposttrans] = ACTIONS(513),
    [anon_sym_PERCENTpreuntrans] = ACTIONS(513),
    [anon_sym_PERCENTpostuntrans] = ACTIONS(513),
    [anon_sym_PERCENTverify] = ACTIONS(513),
    [anon_sym_PERCENTtriggerprein] = ACTIONS(513),
    [anon_sym_PERCENTtriggerin] = ACTIONS(513),
    [anon_sym_PERCENTtriggerun] = ACTIONS(513),
    [anon_sym_PERCENTtriggerpostun] = ACTIONS(513),
    [anon_sym_PERCENTfiletriggerin] = ACTIONS(513),
    [anon_sym_PERCENTfiletriggerun] = ACTIONS(513),
    [anon_sym_PERCENTfiletriggerpostun] = ACTIONS(513),
    [anon_sym_PERCENTtransfiletriggerin] = ACTIONS(513),
    [anon_sym_PERCENTtransfiletriggerun] = ACTIONS(513),
    [anon_sym_PERCENTtransfiletriggerpostun] = ACTIONS(513),
    [anon_sym_PERCENTfiles] = ACTIONS(513),
    [anon_sym_PERCENTchangelog] = ACTIONS(513),
    [anon_sym_PERCENTglobal] = ACTIONS(513),
    [anon_sym_PERCENTdefine] = ACTIONS(513),
    [anon_sym_PERCENTundefine] = ACTIONS(513),
    [anon_sym_PERCENT] = ACTIONS(513),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(513),
    [anon_sym_PERCENT_LPAREN] = ACTIONS(513),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_Requires,
    ACTIONS(554), 1,
      anon_sym_PERCENTdescription,
    STATE(121), 1,
      sym_tags,
    ACTIONS(542), 2,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
    ACTIONS(548), 2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    STATE(118), 2,
      sym_preamble,
      aux_sym_subsection_package_repeat1,
    STATE(369), 2,
      sym_tag,
      sym_dependency_tag,
    ACTIONS(551), 20,
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
    ACTIONS(539), 24,
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
    ACTIONS(558), 1,
      anon_sym_Requires,
    ACTIONS(562), 1,
      anon_sym_PERCENTdescription,
    STATE(121), 1,
      sym_tags,
    ACTIONS(11), 2,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
    ACTIONS(15), 2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    STATE(118), 2,
      sym_preamble,
      aux_sym_subsection_package_repeat1,
    STATE(369), 2,
      sym_tag,
      sym_dependency_tag,
    ACTIONS(560), 20,
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
    ACTIONS(556), 24,
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
  [154] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_Requires,
    STATE(121), 1,
      sym_tags,
    ACTIONS(11), 2,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
    ACTIONS(15), 2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    STATE(119), 2,
      sym_preamble,
      aux_sym_subsection_package_repeat1,
    STATE(369), 2,
      sym_tag,
      sym_dependency_tag,
    ACTIONS(560), 20,
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
    ACTIONS(556), 24,
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
  [228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 4,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    ACTIONS(535), 46,
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
  [286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 4,
      anon_sym_AutoReq,
      aux_sym_tag_token2,
      anon_sym_BuildArch,
      anon_sym_Prefix,
    ACTIONS(491), 46,
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
  [344] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_PERCENTverify,
    ACTIONS(233), 1,
      anon_sym_PERCENTattr,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(564), 1,
      anon_sym_PERCENTdefattr,
    STATE(127), 1,
      sym_attr,
    STATE(157), 1,
      sym_verify,
    STATE(287), 1,
      sym_string,
    STATE(335), 2,
      sym_defattr,
      sym_file,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(566), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [400] = 14,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_PERCENTverify,
    ACTIONS(233), 1,
      anon_sym_PERCENTattr,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(564), 1,
      anon_sym_PERCENTdefattr,
    STATE(127), 1,
      sym_attr,
    STATE(157), 1,
      sym_verify,
    STATE(287), 1,
      sym_string,
    STATE(359), 2,
      sym_defattr,
      sym_file,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(566), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [456] = 10,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_PERCENTverify,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(149), 1,
      sym_verify,
    STATE(231), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(568), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [499] = 10,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_PERCENTverify,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(154), 1,
      sym_verify,
    STATE(273), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(570), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [542] = 10,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_PERCENTverify,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(152), 1,
      sym_verify,
    STATE(290), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
    ACTIONS(572), 9,
      anon_sym_PERCENTartifact,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTdir,
      anon_sym_PERCENTdoc,
      anon_sym_PERCENTdocdir,
      anon_sym_PERCENTghost,
      anon_sym_PERCENTlicense,
      anon_sym_PERCENTmissingok,
      anon_sym_PERCENTreadme,
  [585] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(574), 1,
      aux_sym__top_level_token1,
    ACTIONS(579), 1,
      anon_sym_PERCENT,
    ACTIONS(582), 1,
      sym_string_content,
    ACTIONS(585), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(588), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(576), 2,
      sym_integer,
      sym_float,
    STATE(128), 2,
      aux_sym__value,
      sym_string,
    STATE(140), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [619] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(591), 1,
      aux_sym__top_level_token1,
    ACTIONS(595), 1,
      anon_sym_PERCENT,
    ACTIONS(597), 1,
      sym_string_content,
    ACTIONS(599), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(601), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(593), 2,
      sym_integer,
      sym_float,
    STATE(128), 2,
      aux_sym__value,
      sym_string,
    STATE(140), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [653] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_PERCENT,
    ACTIONS(597), 1,
      sym_string_content,
    ACTIONS(599), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(601), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(603), 1,
      aux_sym__top_level_token1,
    ACTIONS(593), 2,
      sym_integer,
      sym_float,
    STATE(128), 2,
      aux_sym__value,
      sym_string,
    STATE(140), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [687] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_PERCENT,
    ACTIONS(597), 1,
      sym_string_content,
    ACTIONS(599), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(601), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(605), 1,
      aux_sym__top_level_token1,
    ACTIONS(593), 2,
      sym_integer,
      sym_float,
    STATE(128), 2,
      aux_sym__value,
      sym_string,
    STATE(140), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [721] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(607), 14,
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
  [741] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_PERCENT,
    ACTIONS(597), 1,
      sym_string_content,
    ACTIONS(599), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(601), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(609), 2,
      sym_integer,
      sym_float,
    STATE(131), 2,
      aux_sym__value,
      sym_string,
    STATE(140), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RPAREN2,
    STATE(134), 1,
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
  [795] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_PERCENT,
    ACTIONS(597), 1,
      sym_string_content,
    ACTIONS(599), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(601), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(616), 2,
      sym_integer,
      sym_float,
    STATE(129), 2,
      aux_sym__value,
      sym_string,
    STATE(140), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [826] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_PERCENT,
    ACTIONS(597), 1,
      sym_string_content,
    ACTIONS(599), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(601), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(618), 2,
      sym_integer,
      sym_float,
    STATE(130), 2,
      aux_sym__value,
      sym_string,
    STATE(140), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_RPAREN2,
    STATE(134), 1,
      aux_sym_verify_repeat1,
    ACTIONS(620), 11,
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
  [880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_RPAREN2,
    STATE(137), 1,
      aux_sym_verify_repeat1,
    ACTIONS(624), 11,
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
  [903] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      sym_macro_options,
    STATE(239), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [935] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_PERCENT,
    ACTIONS(599), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(601), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(632), 1,
      sym_string_content,
    ACTIONS(630), 3,
      aux_sym__top_level_token1,
      sym_integer,
      sym_float,
    STATE(142), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [963] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_macro_options,
    STATE(271), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [995] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_PERCENT,
    ACTIONS(639), 1,
      sym_string_content,
    ACTIONS(642), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(645), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(634), 3,
      aux_sym__top_level_token1,
      sym_integer,
      sym_float,
    STATE(142), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1023] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_PERCENT,
    ACTIONS(651), 1,
      sym_string_content,
    ACTIONS(654), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(657), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(634), 2,
      aux_sym__top_level_token1,
      anon_sym_DASHf,
    STATE(143), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1050] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_PERCENT,
    ACTIONS(662), 1,
      sym_string_content,
    ACTIONS(664), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(666), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(630), 2,
      aux_sym__top_level_token1,
      anon_sym_DASHf,
    STATE(143), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1077] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(355), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1103] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(273), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1129] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(313), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1155] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(630), 1,
      aux_sym__top_level_token1,
    ACTIONS(668), 1,
      sym_string_content,
    STATE(153), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1181] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(309), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1207] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(248), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1233] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(280), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1259] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(292), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1285] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(634), 1,
      aux_sym__top_level_token1,
    ACTIONS(670), 1,
      anon_sym_PERCENT,
    ACTIONS(673), 1,
      sym_string_content,
    ACTIONS(676), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(679), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(153), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1311] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(279), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1337] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(275), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1363] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(268), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1389] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(290), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1415] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(283), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1441] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(242), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1467] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_PERCENT,
    ACTIONS(664), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(666), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(682), 1,
      sym_string_content,
    STATE(225), 1,
      sym_string,
    STATE(144), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1493] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(231), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1519] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(270), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1545] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_PERCENT,
    ACTIONS(664), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(666), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(682), 1,
      sym_string_content,
    STATE(220), 1,
      sym_string,
    STATE(144), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1571] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    ACTIONS(237), 1,
      sym_string_content,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(241), 1,
      anon_sym_PERCENT_LPAREN,
    STATE(228), 1,
      sym_string,
    STATE(148), 5,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
      aux_sym_string_repeat1,
  [1597] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(91), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(684), 1,
      sym_string_content,
    STATE(254), 1,
      sym_single_word,
    STATE(255), 4,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
  [1622] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(91), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(684), 1,
      sym_string_content,
    STATE(277), 1,
      sym_single_word,
    STATE(255), 4,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
  [1647] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PERCENT,
    ACTIONS(89), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(91), 1,
      anon_sym_PERCENT_LPAREN,
    ACTIONS(684), 1,
      sym_string_content,
    STATE(298), 1,
      sym_single_word,
    STATE(255), 4,
      sym__macro_expansion,
      sym_simple_expansion,
      sym_full_expansion,
      sym_shell_expansion,
  [1672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(314), 1,
      sym_qualifier,
    ACTIONS(686), 2,
      anon_sym_pre,
      anon_sym_post,
    ACTIONS(688), 6,
      anon_sym_postun,
      anon_sym_pretrans,
      anon_sym_posttrans,
      anon_sym_verify,
      anon_sym_interp,
      anon_sym_meta,
  [1691] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(457), 7,
      aux_sym__top_level_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1704] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(461), 7,
      aux_sym__top_level_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1717] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(449), 7,
      aux_sym__top_level_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1730] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(453), 7,
      aux_sym__top_level_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1743] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(469), 7,
      aux_sym__top_level_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1756] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(465), 7,
      aux_sym__top_level_token1,
      sym_integer,
      sym_float,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1769] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(461), 6,
      aux_sym__top_level_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1781] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(469), 6,
      aux_sym__top_level_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1793] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(453), 6,
      aux_sym__top_level_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1805] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(465), 6,
      aux_sym__top_level_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1817] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(457), 6,
      aux_sym__top_level_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1829] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(449), 6,
      aux_sym__top_level_token1,
      anon_sym_DASHf,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1841] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(469), 5,
      aux_sym__top_level_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1852] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(465), 5,
      aux_sym__top_level_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1863] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(461), 5,
      aux_sym__top_level_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1874] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(453), 5,
      aux_sym__top_level_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1885] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(449), 5,
      aux_sym__top_level_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1896] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(457), 5,
      aux_sym__top_level_token1,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1907] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(690), 4,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1917] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(692), 4,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1927] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(694), 4,
      anon_sym_PERCENT,
      sym_string_content,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_LPAREN,
  [1937] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(696), 1,
      aux_sym__top_level_token1,
    ACTIONS(698), 1,
      anon_sym_DASHn,
    ACTIONS(700), 1,
      anon_sym_DASHf,
  [1950] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(702), 1,
      aux_sym__top_level_token1,
    ACTIONS(704), 1,
      anon_sym_DASHn,
    ACTIONS(706), 1,
      anon_sym_DASHf,
  [1963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [1971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_COLON,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
  [1981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [1989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [1997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_COLON,
    ACTIONS(720), 1,
      anon_sym_LPAREN,
  [2007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_variable_name,
    ACTIONS(724), 1,
      anon_sym_QMARK,
  [2017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym_variable_name,
    ACTIONS(728), 1,
      anon_sym_QMARK,
  [2027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym_variable_name,
    ACTIONS(732), 1,
      anon_sym_QMARK,
  [2037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym_variable_name,
    ACTIONS(736), 1,
      anon_sym_QMARK,
  [2047] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(738), 1,
      aux_sym__top_level_token1,
    ACTIONS(740), 1,
      anon_sym_DASHn,
  [2057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_variable_name,
    ACTIONS(744), 1,
      anon_sym_QMARK,
  [2067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_variable_name,
    ACTIONS(748), 1,
      anon_sym_QMARK,
  [2077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      sym_variable_name,
    ACTIONS(752), 1,
      anon_sym_QMARK,
  [2087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_COLON,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
  [2097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_COLON,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
  [2107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_COLON,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
  [2117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_COLON,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
  [2127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_COLON,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
  [2137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COLON,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
  [2147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_COLON,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
  [2157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_COLON,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
  [2167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_COLON,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
  [2177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_COLON,
    ACTIONS(792), 1,
      anon_sym_RBRACE,
  [2187] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym_string_content_with_newlines,
    ACTIONS(796), 1,
      sym_variable_name,
  [2197] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(798), 1,
      aux_sym__top_level_token1,
    ACTIONS(800), 1,
      anon_sym_DASHn,
  [2207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_PERCENTdescription,
    STATE(117), 1,
      sym_subsection_description,
  [2217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 2,
      anon_sym_DASH,
      aux_sym_defattr_token1,
  [2225] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym_string_content_with_newlines,
    ACTIONS(808), 1,
      sym_variable_name,
  [2235] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(810), 1,
      aux_sym__top_level_token1,
    ACTIONS(812), 1,
      anon_sym_DASHf,
  [2245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_COLON,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
  [2255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_COLON,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
  [2265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_COLON,
    ACTIONS(824), 1,
      anon_sym_RBRACE,
  [2275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_PERCENTdescription,
    STATE(88), 1,
      sym_subsection_description,
  [2285] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(828), 1,
      aux_sym__top_level_token1,
    ACTIONS(830), 1,
      anon_sym_DASHf,
  [2295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      ts_builtin_sym_end,
  [2302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RBRACE,
  [2309] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(836), 1,
      aux_sym__top_level_token1,
  [2316] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(838), 1,
      aux_sym__top_level_token1,
  [2323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_PERCENTendif,
  [2330] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(840), 1,
      aux_sym__top_level_token1,
  [2337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_PERCENTendif,
  [2344] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(842), 1,
      aux_sym__top_level_token1,
  [2351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_PERCENTendif,
  [2358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_COLON,
  [2365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_PERCENTendif,
  [2372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_PERCENTendif,
  [2379] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(848), 1,
      sym_string_content,
  [2386] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(850), 1,
      aux_sym__top_level_token1,
  [2393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
  [2400] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(854), 1,
      sym_string_content,
  [2407] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(810), 1,
      aux_sym__top_level_token1,
  [2414] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(856), 1,
      aux_sym__top_level_token1,
  [2421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_LPAREN,
  [2428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_LPAREN,
  [2435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_LPAREN2,
  [2442] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(864), 1,
      aux_sym_conditional_token1,
  [2449] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(866), 1,
      aux_sym__top_level_token1,
  [2456] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(868), 1,
      aux_sym_conditional_token1,
  [2463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
  [2470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_DASHn,
  [2477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym_variable_name,
  [2484] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(876), 1,
      aux_sym__top_level_token1,
  [2491] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(878), 1,
      aux_sym__top_level_token1,
  [2498] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(880), 1,
      aux_sym__top_level_token1,
  [2505] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(882), 1,
      aux_sym__top_level_token1,
  [2512] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(884), 1,
      aux_sym__top_level_token1,
  [2519] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(886), 1,
      aux_sym__top_level_token1,
  [2526] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(888), 1,
      aux_sym__top_level_token1,
  [2533] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym__top_level_token1,
  [2540] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(892), 1,
      aux_sym__top_level_token1,
  [2547] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(894), 1,
      aux_sym__top_level_token1,
  [2554] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(896), 1,
      aux_sym__top_level_token1,
  [2561] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(898), 1,
      aux_sym__top_level_token1,
  [2568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_variable_name,
  [2575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
  [2582] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(904), 1,
      aux_sym__top_level_token1,
  [2589] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(906), 1,
      aux_sym__top_level_token1,
  [2596] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(908), 1,
      aux_sym__top_level_token1,
  [2603] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(828), 1,
      aux_sym__top_level_token1,
  [2610] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(910), 1,
      aux_sym__top_level_token1,
  [2617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_COLON,
  [2624] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(914), 1,
      aux_sym__top_level_token1,
  [2631] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(916), 1,
      aux_sym__top_level_token1,
  [2638] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(918), 1,
      aux_sym__top_level_token1,
  [2645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_RBRACE,
  [2652] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(922), 1,
      aux_sym__top_level_token1,
  [2659] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(924), 1,
      aux_sym__top_level_token1,
  [2666] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(926), 1,
      aux_sym__top_level_token1,
  [2673] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(928), 1,
      aux_sym__top_level_token1,
  [2680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_RBRACE,
  [2687] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(932), 1,
      aux_sym__top_level_token1,
  [2694] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(934), 1,
      aux_sym__top_level_token1,
  [2701] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__top_level_token1,
  [2708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      sym_variable_name,
  [2715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_RPAREN,
  [2722] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(942), 1,
      aux_sym__top_level_token1,
  [2729] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(944), 1,
      aux_sym__top_level_token1,
  [2736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
  [2743] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(948), 1,
      aux_sym__top_level_token1,
  [2750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_RBRACE,
  [2757] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(952), 1,
      aux_sym__top_level_token1,
  [2764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_RBRACE,
  [2771] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(956), 1,
      aux_sym__top_level_token1,
  [2778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      sym_variable_name,
  [2785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_RPAREN,
  [2792] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(962), 1,
      sym_string_content,
  [2799] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(964), 1,
      aux_sym__top_level_token1,
  [2806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_RBRACE,
  [2813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_RBRACE,
  [2820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      sym_variable_name,
  [2827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_RPAREN,
  [2834] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(974), 1,
      aux_sym__top_level_token1,
  [2841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_COMMA,
  [2848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_RBRACE,
  [2855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_RBRACE,
  [2862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
  [2869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_COMMA,
  [2876] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(986), 1,
      aux_sym__top_level_token1,
  [2883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_RBRACE,
  [2890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_RBRACE,
  [2897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
  [2904] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(994), 1,
      aux_sym__top_level_token1,
  [2911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
  [2918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_RBRACE,
  [2925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_RBRACE,
  [2932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      sym_variable_name,
  [2939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
  [2946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      ts_builtin_sym_end,
  [2953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
  [2960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_RBRACE,
  [2967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      sym_variable_name,
  [2974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      sym_variable_name,
  [2981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      sym_variable_name,
  [2988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      sym_variable_name,
  [2995] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1020), 1,
      aux_sym__top_level_token1,
  [3002] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1022), 1,
      sym_string_content,
  [3009] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1024), 1,
      aux_sym__top_level_token1,
  [3016] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym_string_content,
  [3023] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1028), 1,
      aux_sym__top_level_token1,
  [3030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_PERCENTendif,
  [3037] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1032), 1,
      aux_sym__top_level_token1,
  [3044] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1034), 1,
      aux_sym__top_level_token1,
  [3051] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1036), 1,
      sym_string_content,
  [3058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_PERCENTendif,
  [3065] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1040), 1,
      aux_sym__top_level_token1,
  [3072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
  [3079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      aux_sym_defattr_token2,
  [3086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym_variable_name,
  [3093] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1048), 1,
      aux_sym__top_level_token1,
  [3100] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1050), 1,
      aux_sym__top_level_token1,
  [3107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      aux_sym_defattr_token2,
  [3114] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1054), 1,
      sym_string_content,
  [3121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_COLON,
  [3128] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1056), 1,
      sym_string_content,
  [3135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
  [3142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      aux_sym_defattr_token2,
  [3149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym_variable_name,
  [3156] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1064), 1,
      sym_string_content,
  [3163] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1066), 1,
      sym_string_content,
  [3170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      aux_sym_defattr_token2,
  [3177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      sym_variable_name,
  [3184] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1072), 1,
      sym_string_content,
  [3191] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1074), 1,
      sym_string_content,
  [3198] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1076), 1,
      aux_sym__top_level_token1,
  [3205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      sym_variable_name,
  [3212] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym_string_content,
  [3219] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1082), 1,
      sym_string_content,
  [3226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_PERCENTendif,
  [3233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      sym_variable_name,
  [3240] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym_string_content,
  [3247] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym_string_content,
  [3254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      sym_variable_name,
  [3261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_COLON,
  [3268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_DASHn,
  [3275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
  [3282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_COLON,
  [3289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      aux_sym_defattr_token2,
  [3296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_COLON,
  [3303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      aux_sym_defattr_token2,
  [3310] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1108), 1,
      aux_sym__top_level_token1,
  [3317] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1110), 1,
      aux_sym__top_level_token1,
  [3324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_COMMA,
  [3331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_COMMA,
  [3338] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1116), 1,
      aux_sym_conditional_token1,
  [3345] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1118), 1,
      aux_sym_conditional_token1,
  [3352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      aux_sym_defattr_token2,
  [3359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      aux_sym_defattr_token2,
  [3366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_COMMA,
  [3373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
  [3380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
  [3387] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(1130), 1,
      aux_sym__top_level_token1,
  [3394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
  [3401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(118)] = 0,
  [SMALL_STATE(119)] = 77,
  [SMALL_STATE(120)] = 154,
  [SMALL_STATE(121)] = 228,
  [SMALL_STATE(122)] = 286,
  [SMALL_STATE(123)] = 344,
  [SMALL_STATE(124)] = 400,
  [SMALL_STATE(125)] = 456,
  [SMALL_STATE(126)] = 499,
  [SMALL_STATE(127)] = 542,
  [SMALL_STATE(128)] = 585,
  [SMALL_STATE(129)] = 619,
  [SMALL_STATE(130)] = 653,
  [SMALL_STATE(131)] = 687,
  [SMALL_STATE(132)] = 721,
  [SMALL_STATE(133)] = 741,
  [SMALL_STATE(134)] = 772,
  [SMALL_STATE(135)] = 795,
  [SMALL_STATE(136)] = 826,
  [SMALL_STATE(137)] = 857,
  [SMALL_STATE(138)] = 880,
  [SMALL_STATE(139)] = 903,
  [SMALL_STATE(140)] = 935,
  [SMALL_STATE(141)] = 963,
  [SMALL_STATE(142)] = 995,
  [SMALL_STATE(143)] = 1023,
  [SMALL_STATE(144)] = 1050,
  [SMALL_STATE(145)] = 1077,
  [SMALL_STATE(146)] = 1103,
  [SMALL_STATE(147)] = 1129,
  [SMALL_STATE(148)] = 1155,
  [SMALL_STATE(149)] = 1181,
  [SMALL_STATE(150)] = 1207,
  [SMALL_STATE(151)] = 1233,
  [SMALL_STATE(152)] = 1259,
  [SMALL_STATE(153)] = 1285,
  [SMALL_STATE(154)] = 1311,
  [SMALL_STATE(155)] = 1337,
  [SMALL_STATE(156)] = 1363,
  [SMALL_STATE(157)] = 1389,
  [SMALL_STATE(158)] = 1415,
  [SMALL_STATE(159)] = 1441,
  [SMALL_STATE(160)] = 1467,
  [SMALL_STATE(161)] = 1493,
  [SMALL_STATE(162)] = 1519,
  [SMALL_STATE(163)] = 1545,
  [SMALL_STATE(164)] = 1571,
  [SMALL_STATE(165)] = 1597,
  [SMALL_STATE(166)] = 1622,
  [SMALL_STATE(167)] = 1647,
  [SMALL_STATE(168)] = 1672,
  [SMALL_STATE(169)] = 1691,
  [SMALL_STATE(170)] = 1704,
  [SMALL_STATE(171)] = 1717,
  [SMALL_STATE(172)] = 1730,
  [SMALL_STATE(173)] = 1743,
  [SMALL_STATE(174)] = 1756,
  [SMALL_STATE(175)] = 1769,
  [SMALL_STATE(176)] = 1781,
  [SMALL_STATE(177)] = 1793,
  [SMALL_STATE(178)] = 1805,
  [SMALL_STATE(179)] = 1817,
  [SMALL_STATE(180)] = 1829,
  [SMALL_STATE(181)] = 1841,
  [SMALL_STATE(182)] = 1852,
  [SMALL_STATE(183)] = 1863,
  [SMALL_STATE(184)] = 1874,
  [SMALL_STATE(185)] = 1885,
  [SMALL_STATE(186)] = 1896,
  [SMALL_STATE(187)] = 1907,
  [SMALL_STATE(188)] = 1917,
  [SMALL_STATE(189)] = 1927,
  [SMALL_STATE(190)] = 1937,
  [SMALL_STATE(191)] = 1950,
  [SMALL_STATE(192)] = 1963,
  [SMALL_STATE(193)] = 1971,
  [SMALL_STATE(194)] = 1981,
  [SMALL_STATE(195)] = 1989,
  [SMALL_STATE(196)] = 1997,
  [SMALL_STATE(197)] = 2007,
  [SMALL_STATE(198)] = 2017,
  [SMALL_STATE(199)] = 2027,
  [SMALL_STATE(200)] = 2037,
  [SMALL_STATE(201)] = 2047,
  [SMALL_STATE(202)] = 2057,
  [SMALL_STATE(203)] = 2067,
  [SMALL_STATE(204)] = 2077,
  [SMALL_STATE(205)] = 2087,
  [SMALL_STATE(206)] = 2097,
  [SMALL_STATE(207)] = 2107,
  [SMALL_STATE(208)] = 2117,
  [SMALL_STATE(209)] = 2127,
  [SMALL_STATE(210)] = 2137,
  [SMALL_STATE(211)] = 2147,
  [SMALL_STATE(212)] = 2157,
  [SMALL_STATE(213)] = 2167,
  [SMALL_STATE(214)] = 2177,
  [SMALL_STATE(215)] = 2187,
  [SMALL_STATE(216)] = 2197,
  [SMALL_STATE(217)] = 2207,
  [SMALL_STATE(218)] = 2217,
  [SMALL_STATE(219)] = 2225,
  [SMALL_STATE(220)] = 2235,
  [SMALL_STATE(221)] = 2245,
  [SMALL_STATE(222)] = 2255,
  [SMALL_STATE(223)] = 2265,
  [SMALL_STATE(224)] = 2275,
  [SMALL_STATE(225)] = 2285,
  [SMALL_STATE(226)] = 2295,
  [SMALL_STATE(227)] = 2302,
  [SMALL_STATE(228)] = 2309,
  [SMALL_STATE(229)] = 2316,
  [SMALL_STATE(230)] = 2323,
  [SMALL_STATE(231)] = 2330,
  [SMALL_STATE(232)] = 2337,
  [SMALL_STATE(233)] = 2344,
  [SMALL_STATE(234)] = 2351,
  [SMALL_STATE(235)] = 2358,
  [SMALL_STATE(236)] = 2365,
  [SMALL_STATE(237)] = 2372,
  [SMALL_STATE(238)] = 2379,
  [SMALL_STATE(239)] = 2386,
  [SMALL_STATE(240)] = 2393,
  [SMALL_STATE(241)] = 2400,
  [SMALL_STATE(242)] = 2407,
  [SMALL_STATE(243)] = 2414,
  [SMALL_STATE(244)] = 2421,
  [SMALL_STATE(245)] = 2428,
  [SMALL_STATE(246)] = 2435,
  [SMALL_STATE(247)] = 2442,
  [SMALL_STATE(248)] = 2449,
  [SMALL_STATE(249)] = 2456,
  [SMALL_STATE(250)] = 2463,
  [SMALL_STATE(251)] = 2470,
  [SMALL_STATE(252)] = 2477,
  [SMALL_STATE(253)] = 2484,
  [SMALL_STATE(254)] = 2491,
  [SMALL_STATE(255)] = 2498,
  [SMALL_STATE(256)] = 2505,
  [SMALL_STATE(257)] = 2512,
  [SMALL_STATE(258)] = 2519,
  [SMALL_STATE(259)] = 2526,
  [SMALL_STATE(260)] = 2533,
  [SMALL_STATE(261)] = 2540,
  [SMALL_STATE(262)] = 2547,
  [SMALL_STATE(263)] = 2554,
  [SMALL_STATE(264)] = 2561,
  [SMALL_STATE(265)] = 2568,
  [SMALL_STATE(266)] = 2575,
  [SMALL_STATE(267)] = 2582,
  [SMALL_STATE(268)] = 2589,
  [SMALL_STATE(269)] = 2596,
  [SMALL_STATE(270)] = 2603,
  [SMALL_STATE(271)] = 2610,
  [SMALL_STATE(272)] = 2617,
  [SMALL_STATE(273)] = 2624,
  [SMALL_STATE(274)] = 2631,
  [SMALL_STATE(275)] = 2638,
  [SMALL_STATE(276)] = 2645,
  [SMALL_STATE(277)] = 2652,
  [SMALL_STATE(278)] = 2659,
  [SMALL_STATE(279)] = 2666,
  [SMALL_STATE(280)] = 2673,
  [SMALL_STATE(281)] = 2680,
  [SMALL_STATE(282)] = 2687,
  [SMALL_STATE(283)] = 2694,
  [SMALL_STATE(284)] = 2701,
  [SMALL_STATE(285)] = 2708,
  [SMALL_STATE(286)] = 2715,
  [SMALL_STATE(287)] = 2722,
  [SMALL_STATE(288)] = 2729,
  [SMALL_STATE(289)] = 2736,
  [SMALL_STATE(290)] = 2743,
  [SMALL_STATE(291)] = 2750,
  [SMALL_STATE(292)] = 2757,
  [SMALL_STATE(293)] = 2764,
  [SMALL_STATE(294)] = 2771,
  [SMALL_STATE(295)] = 2778,
  [SMALL_STATE(296)] = 2785,
  [SMALL_STATE(297)] = 2792,
  [SMALL_STATE(298)] = 2799,
  [SMALL_STATE(299)] = 2806,
  [SMALL_STATE(300)] = 2813,
  [SMALL_STATE(301)] = 2820,
  [SMALL_STATE(302)] = 2827,
  [SMALL_STATE(303)] = 2834,
  [SMALL_STATE(304)] = 2841,
  [SMALL_STATE(305)] = 2848,
  [SMALL_STATE(306)] = 2855,
  [SMALL_STATE(307)] = 2862,
  [SMALL_STATE(308)] = 2869,
  [SMALL_STATE(309)] = 2876,
  [SMALL_STATE(310)] = 2883,
  [SMALL_STATE(311)] = 2890,
  [SMALL_STATE(312)] = 2897,
  [SMALL_STATE(313)] = 2904,
  [SMALL_STATE(314)] = 2911,
  [SMALL_STATE(315)] = 2918,
  [SMALL_STATE(316)] = 2925,
  [SMALL_STATE(317)] = 2932,
  [SMALL_STATE(318)] = 2939,
  [SMALL_STATE(319)] = 2946,
  [SMALL_STATE(320)] = 2953,
  [SMALL_STATE(321)] = 2960,
  [SMALL_STATE(322)] = 2967,
  [SMALL_STATE(323)] = 2974,
  [SMALL_STATE(324)] = 2981,
  [SMALL_STATE(325)] = 2988,
  [SMALL_STATE(326)] = 2995,
  [SMALL_STATE(327)] = 3002,
  [SMALL_STATE(328)] = 3009,
  [SMALL_STATE(329)] = 3016,
  [SMALL_STATE(330)] = 3023,
  [SMALL_STATE(331)] = 3030,
  [SMALL_STATE(332)] = 3037,
  [SMALL_STATE(333)] = 3044,
  [SMALL_STATE(334)] = 3051,
  [SMALL_STATE(335)] = 3058,
  [SMALL_STATE(336)] = 3065,
  [SMALL_STATE(337)] = 3072,
  [SMALL_STATE(338)] = 3079,
  [SMALL_STATE(339)] = 3086,
  [SMALL_STATE(340)] = 3093,
  [SMALL_STATE(341)] = 3100,
  [SMALL_STATE(342)] = 3107,
  [SMALL_STATE(343)] = 3114,
  [SMALL_STATE(344)] = 3121,
  [SMALL_STATE(345)] = 3128,
  [SMALL_STATE(346)] = 3135,
  [SMALL_STATE(347)] = 3142,
  [SMALL_STATE(348)] = 3149,
  [SMALL_STATE(349)] = 3156,
  [SMALL_STATE(350)] = 3163,
  [SMALL_STATE(351)] = 3170,
  [SMALL_STATE(352)] = 3177,
  [SMALL_STATE(353)] = 3184,
  [SMALL_STATE(354)] = 3191,
  [SMALL_STATE(355)] = 3198,
  [SMALL_STATE(356)] = 3205,
  [SMALL_STATE(357)] = 3212,
  [SMALL_STATE(358)] = 3219,
  [SMALL_STATE(359)] = 3226,
  [SMALL_STATE(360)] = 3233,
  [SMALL_STATE(361)] = 3240,
  [SMALL_STATE(362)] = 3247,
  [SMALL_STATE(363)] = 3254,
  [SMALL_STATE(364)] = 3261,
  [SMALL_STATE(365)] = 3268,
  [SMALL_STATE(366)] = 3275,
  [SMALL_STATE(367)] = 3282,
  [SMALL_STATE(368)] = 3289,
  [SMALL_STATE(369)] = 3296,
  [SMALL_STATE(370)] = 3303,
  [SMALL_STATE(371)] = 3310,
  [SMALL_STATE(372)] = 3317,
  [SMALL_STATE(373)] = 3324,
  [SMALL_STATE(374)] = 3331,
  [SMALL_STATE(375)] = 3338,
  [SMALL_STATE(376)] = 3345,
  [SMALL_STATE(377)] = 3352,
  [SMALL_STATE(378)] = 3359,
  [SMALL_STATE(379)] = 3366,
  [SMALL_STATE(380)] = 3373,
  [SMALL_STATE(381)] = 3380,
  [SMALL_STATE(382)] = 3387,
  [SMALL_STATE(383)] = 3394,
  [SMALL_STATE(384)] = 3401,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(341),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(340),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(336),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(333),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(332),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(328),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(320),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_level, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(258),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(264),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(317),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__top_level_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 5, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 4, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 4, 0, 0),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(376),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_files_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 6, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 7, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_files, 7, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 6, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 5, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_files, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defattr, 9, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_files, 6, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 4, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_files, 6, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defattr, 9, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prep_scriptlet, 2, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prep_scriptlet, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_buildrequires, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate_buildrequires, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 4, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 4, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_with_newlines, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_with_newlines, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_newlines_repeat1, 2, 0, 0), SHIFT_REPEAT(312),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog, 2, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog, 2, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changelog_repeat1, 2, 0, 0), SHIFT_REPEAT(327),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog_entry, 3, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog_entry, 3, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changelog_entry, 4, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changelog_entry, 4, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changelog_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changelog_entry_repeat1, 3, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changelog_entry_repeat1, 3, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_expansion, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_expansion, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 3, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 3, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expansion, 2, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expansion, 2, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 4, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 4, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 6, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 6, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expansion, 5, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expansion, 5, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 6, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 6, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_description, 4, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_description, 4, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 5, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 5, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 5, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 5, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 4, 0, 1),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags, 4, 0, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 4, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 4, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_undefinition, 3, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_undefinition, 3, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_buildrequires, 3, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate_buildrequires, 3, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prep_scriptlet, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prep_scriptlet, 3, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection, 2, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection, 2, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clean_scriptlet, 2, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clean_scriptlet, 2, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_scriptlet, 2, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_scriptlet, 2, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_install_scriptlet, 2, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_install_scriptlet, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_scriptlet, 2, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_scriptlet, 2, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conf_scriptlet, 2, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conf_scriptlet, 2, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 1, 0, 0),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_package_repeat1, 2, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_package, 4, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(128),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(301),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(140),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(198),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2, 0, 0), SHIFT_REPEAT(307),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 8, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verify_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_repeat1, 2, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [645] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [648] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [651] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [673] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [676] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [679] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verify, 4, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_options, 2, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verify, 3, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_tag, 1, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 1, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_tag, 4, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1, 0, 0),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_word, 1, 0, 0),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1006] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
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
