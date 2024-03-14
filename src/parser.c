#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
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
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_spec_token1 = 1,
  sym_comment = 2,
  aux_sym_tags_token1 = 3,
  anon_sym_AutoProv = 4,
  anon_sym_AutoReq = 5,
  anon_sym_AutoReqProv = 6,
  anon_sym_BugUrl = 7,
  anon_sym_BuildRoot = 8,
  anon_sym_BuildSystem = 9,
  anon_sym_DistTag = 10,
  anon_sym_Distribution = 11,
  anon_sym_Epoch = 12,
  anon_sym_Group = 13,
  anon_sym_License = 14,
  anon_sym_ModularityLabel = 15,
  anon_sym_Name = 16,
  anon_sym_NoPatch = 17,
  anon_sym_NoSource = 18,
  anon_sym_Packager = 19,
  anon_sym_Release = 20,
  anon_sym_SourceLicense = 21,
  anon_sym_Summary = 22,
  anon_sym_URL = 23,
  anon_sym_Url = 24,
  anon_sym_VCS = 25,
  anon_sym_Vendor = 26,
  anon_sym_Version = 27,
  aux_sym_tag_token1 = 28,
  aux_sym_tag_token2 = 29,
  anon_sym_pre = 30,
  anon_sym_post = 31,
  anon_sym_postun = 32,
  anon_sym_pretrans = 33,
  anon_sym_posttrans = 34,
  anon_sym_verify = 35,
  anon_sym_interp = 36,
  anon_sym_meta = 37,
  anon_sym_Requires = 38,
  anon_sym_LPAREN = 39,
  anon_sym_RPAREN = 40,
  anon_sym_BuildArch = 41,
  anon_sym_BuildArchitectures = 42,
  anon_sym_BuildConflicts = 43,
  anon_sym_BuildPrereq = 44,
  anon_sym_BuildRequires = 45,
  anon_sym_Conflicts = 46,
  anon_sym_DocDir = 47,
  anon_sym_Enhances = 48,
  anon_sym_ExcludeArch = 49,
  anon_sym_ExcludeOS = 50,
  anon_sym_ExclusiveArch = 51,
  anon_sym_ExclusiveOS = 52,
  anon_sym_Obsoletes = 53,
  anon_sym_OrderWithRequires = 54,
  anon_sym_Prefix = 55,
  anon_sym_Prefixes = 56,
  anon_sym_Prereq = 57,
  anon_sym_Provides = 58,
  anon_sym_Recommends = 59,
  anon_sym_RemovePathPostfixes = 60,
  anon_sym_Suggests = 61,
  anon_sym_Supplements = 62,
  sym_integer = 63,
  sym_float = 64,
  anon_sym_PERCENT = 65,
  sym_string_content = 66,
  sym_variable_name = 67,
  anon_sym_QMARK = 68,
  anon_sym_PERCENT_LBRACE = 69,
  anon_sym_RBRACE = 70,
  sym_spec = 71,
  sym_preamble = 72,
  sym_tags = 73,
  sym_tag = 74,
  sym_qualifier = 75,
  sym_dependency_tag = 76,
  aux_sym__value = 77,
  sym_string = 78,
  sym_simple_expansion = 79,
  sym_expansion = 80,
  aux_sym_spec_repeat1 = 81,
  aux_sym_string_repeat1 = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_spec_token1] = "spec_token1",
  [sym_comment] = "comment",
  [aux_sym_tags_token1] = "tags_token1",
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
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_PERCENT] = "%",
  [sym_string_content] = "string_content",
  [sym_variable_name] = "variable_name",
  [anon_sym_QMARK] = "\?",
  [anon_sym_PERCENT_LBRACE] = "%{",
  [anon_sym_RBRACE] = "}",
  [sym_spec] = "spec",
  [sym_preamble] = "preamble",
  [sym_tags] = "tags",
  [sym_tag] = "tag",
  [sym_qualifier] = "qualifier",
  [sym_dependency_tag] = "dependency_tag",
  [aux_sym__value] = "_value",
  [sym_string] = "string",
  [sym_simple_expansion] = "simple_expansion",
  [sym_expansion] = "expansion",
  [aux_sym_spec_repeat1] = "spec_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_spec_token1] = aux_sym_spec_token1,
  [sym_comment] = sym_comment,
  [aux_sym_tags_token1] = aux_sym_tags_token1,
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
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_string_content] = sym_string_content,
  [sym_variable_name] = sym_variable_name,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_PERCENT_LBRACE] = anon_sym_PERCENT_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_spec] = sym_spec,
  [sym_preamble] = sym_preamble,
  [sym_tags] = sym_tags,
  [sym_tag] = sym_tag,
  [sym_qualifier] = sym_qualifier,
  [sym_dependency_tag] = sym_dependency_tag,
  [aux_sym__value] = aux_sym__value,
  [sym_string] = sym_string,
  [sym_simple_expansion] = sym_simple_expansion,
  [sym_expansion] = sym_expansion,
  [aux_sym_spec_repeat1] = aux_sym_spec_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_spec_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_tags_token1] = {
    .visible = false,
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
  [sym_spec] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_spec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(315);
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') SKIP(306)
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '%') ADVANCE(449);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ')') ADVANCE(396);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '?') ADVANCE(1028);
      if (lookahead == 'A') ADVANCE(1004);
      if (lookahead == 'B') ADVANCE(1005);
      if (lookahead == 'C') ADVANCE(908);
      if (lookahead == 'D') ADVANCE(855);
      if (lookahead == 'E') ADVANCE(891);
      if (lookahead == 'G') ADVANCE(940);
      if (lookahead == 'L') ADVANCE(860);
      if (lookahead == 'M') ADVANCE(906);
      if (lookahead == 'N') ADVANCE(752);
      if (lookahead == 'O') ADVANCE(766);
      if (lookahead == 'P') ADVANCE(753);
      if (lookahead == 'R') ADVANCE(794);
      if (lookahead == 'S') ADVANCE(910);
      if (lookahead == 'U') ADVANCE(744);
      if (lookahead == 'V') ADVANCE(736);
      if (lookahead == 'i') ADVANCE(896);
      if (lookahead == 'm') ADVANCE(808);
      if (lookahead == 'p') ADVANCE(921);
      if (lookahead == 'v') ADVANCE(806);
      if (lookahead == '}') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(4)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(316);
      END_STATE();
    case 3:
      if (lookahead == 11) SKIP(7)
      END_STATE();
    case 4:
      if (lookahead == '\f') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(320);
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '?') ADVANCE(1028);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '#') ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(451);
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '%') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(452);
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(218);
      if (lookahead == 'C') ADVANCE(201);
      if (lookahead == 'P') ADVANCE(226);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(303);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(220);
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(222);
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(139);
      END_STATE();
    case 15:
      if (lookahead == 'L') ADVANCE(360);
      END_STATE();
    case 16:
      if (lookahead == 'L') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'P') ADVANCE(35);
      if (lookahead == 'S') ADVANCE(200);
      END_STATE();
    case 18:
      if (lookahead == 'P') ADVANCE(199);
      END_STATE();
    case 19:
      if (lookahead == 'P') ADVANCE(223);
      if (lookahead == 'R') ADVANCE(84);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(112);
      END_STATE();
    case 23:
      if (lookahead == 'S') ADVANCE(364);
      END_STATE();
    case 24:
      if (lookahead == 'S') ADVANCE(416);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(420);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(219);
      END_STATE();
    case 28:
      if (lookahead == 'W') ADVANCE(140);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(287);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(186);
      if (lookahead == 'q') ADVANCE(288);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(300);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(159);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(136);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(334);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(338);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(371);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(348);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(399);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(414);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(418);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 151:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(332);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(340);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(389);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 205:
      if (lookahead == 'q') ADVANCE(431);
      END_STATE();
    case 206:
      if (lookahead == 'q') ADVANCE(324);
      END_STATE();
    case 207:
      if (lookahead == 'q') ADVANCE(404);
      END_STATE();
    case 208:
      if (lookahead == 'q') ADVANCE(289);
      END_STATE();
    case 209:
      if (lookahead == 'q') ADVANCE(292);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(412);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(393);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(383);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(406);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(400);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 284:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 285:
      if (lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 286:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 287:
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 288:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 289:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 290:
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 291:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 292:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 293:
      if (lookahead == 'v') ADVANCE(321);
      END_STATE();
    case 294:
      if (lookahead == 'v') ADVANCE(326);
      END_STATE();
    case 295:
      if (lookahead == 'v') ADVANCE(144);
      END_STATE();
    case 296:
      if (lookahead == 'v') ADVANCE(76);
      END_STATE();
    case 297:
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 298:
      if (lookahead == 'x') ADVANCE(427);
      END_STATE();
    case 299:
      if (lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 300:
      if (lookahead == 'y') ADVANCE(387);
      END_STATE();
    case 301:
      if (lookahead == 'y') ADVANCE(358);
      END_STATE();
    case 302:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 303:
      if (lookahead == 'y') ADVANCE(260);
      END_STATE();
    case 304:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 305:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(731);
      if (lookahead == '\r') ADVANCE(732);
      END_STATE();
    case 306:
      if (eof) ADVANCE(315);
      if (lookahead == '\t') SKIP(313)
      END_STATE();
    case 307:
      if (eof) ADVANCE(315);
      if (lookahead == '\t') SKIP(314)
      END_STATE();
    case 308:
      if (eof) ADVANCE(315);
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') SKIP(306)
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '%') ADVANCE(449);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ')') ADVANCE(396);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(1004);
      if (lookahead == 'B') ADVANCE(1005);
      if (lookahead == 'C') ADVANCE(908);
      if (lookahead == 'D') ADVANCE(855);
      if (lookahead == 'E') ADVANCE(891);
      if (lookahead == 'G') ADVANCE(940);
      if (lookahead == 'L') ADVANCE(860);
      if (lookahead == 'M') ADVANCE(906);
      if (lookahead == 'N') ADVANCE(752);
      if (lookahead == 'O') ADVANCE(766);
      if (lookahead == 'P') ADVANCE(753);
      if (lookahead == 'R') ADVANCE(794);
      if (lookahead == 'S') ADVANCE(910);
      if (lookahead == 'U') ADVANCE(744);
      if (lookahead == 'V') ADVANCE(736);
      if (lookahead == 'i') ADVANCE(896);
      if (lookahead == 'm') ADVANCE(808);
      if (lookahead == 'p') ADVANCE(921);
      if (lookahead == 'v') ADVANCE(806);
      if (lookahead == '}') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 309:
      if (eof) ADVANCE(315);
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(450);
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '%') ADVANCE(449);
      if (lookahead == 'A') ADVANCE(708);
      if (lookahead == 'B') ADVANCE(709);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(576);
      if (lookahead == 'E') ADVANCE(613);
      if (lookahead == 'G') ADVANCE(652);
      if (lookahead == 'L') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(623);
      if (lookahead == 'N') ADVANCE(481);
      if (lookahead == 'O') ADVANCE(492);
      if (lookahead == 'P') ADVANCE(482);
      if (lookahead == 'R') ADVANCE(525);
      if (lookahead == 'S') ADVANCE(626);
      if (lookahead == 'U') ADVANCE(473);
      if (lookahead == 'V') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 310:
      if (eof) ADVANCE(315);
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') SKIP(307)
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == 'A') ADVANCE(281);
      if (lookahead == 'B') ADVANCE(282);
      if (lookahead == 'C') ADVANCE(185);
      if (lookahead == 'D') ADVANCE(132);
      if (lookahead == 'E') ADVANCE(168);
      if (lookahead == 'G') ADVANCE(217);
      if (lookahead == 'L') ADVANCE(137);
      if (lookahead == 'M') ADVANCE(183);
      if (lookahead == 'N') ADVANCE(29);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'P') ADVANCE(30);
      if (lookahead == 'R') ADVANCE(71);
      if (lookahead == 'S') ADVANCE(187);
      if (lookahead == 'U') ADVANCE(21);
      if (lookahead == 'V') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(198);
      if (lookahead == 'v') ADVANCE(83);
      END_STATE();
    case 311:
      if (eof) ADVANCE(315);
      if (lookahead == 11) SKIP(308)
      END_STATE();
    case 312:
      if (eof) ADVANCE(315);
      if (lookahead == 11) SKIP(310)
      END_STATE();
    case 313:
      if (eof) ADVANCE(315);
      if (lookahead == '\f') SKIP(311)
      END_STATE();
    case 314:
      if (eof) ADVANCE(315);
      if (lookahead == '\f') SKIP(312)
      END_STATE();
    case 315:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_spec_token1);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(319);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '`') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(317);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_tags_token1);
      if (lookahead == ' ') ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_AutoProv);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_AutoProv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(224);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(660);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_AutoReqProv);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_AutoReqProv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_BugUrl);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_BugUrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_BuildRoot);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_BuildRoot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_BuildSystem);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_BuildSystem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DistTag);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_DistTag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_Distribution);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_Distribution);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Epoch);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_Epoch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_Group);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_Group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_License);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_License);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_ModularityLabel);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_ModularityLabel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_Name);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_Name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_NoPatch);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_NoPatch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_NoSource);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_NoSource);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_Packager);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_Packager);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_Release);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_Release);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_SourceLicense);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_SourceLicense);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_Summary);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_Summary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_URL);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_URL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_Url);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_Url);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_VCS);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_VCS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_Vendor);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_Vendor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_Version);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_Version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_pre);
      if (lookahead == 't') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_pre);
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_post);
      if (lookahead == 't') ADVANCE(957);
      if (lookahead == 'u') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_post);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_postun);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_postun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_pretrans);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_pretrans);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_posttrans);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_posttrans);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_verify);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_verify);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_interp);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_interp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_Requires);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_Requires);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(706);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_BuildArchitectures);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_BuildArchitectures);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_BuildConflicts);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_BuildConflicts);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_BuildPrereq);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_BuildPrereq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_BuildRequires);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_BuildRequires);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_DocDir);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_DocDir);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_Enhances);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_Enhances);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_ExcludeArch);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_ExcludeArch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_ExcludeOS);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_ExcludeOS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_ExclusiveArch);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_ExclusiveArch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_ExclusiveOS);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_ExclusiveOS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_Obsoletes);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_Obsoletes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_OrderWithRequires);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_OrderWithRequires);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_Prefix);
      if (lookahead == 'e') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_Prefix);
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_Prefix);
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_Prefixes);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_Prefixes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_Prereq);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_Prereq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_Provides);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_Provides);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_Recommends);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_Recommends);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_RemovePathPostfixes);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_RemovePathPostfixes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_Suggests);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_Suggests);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_Supplements);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_Supplements);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == '_') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(730);
      if (lookahead == '_') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '{') ADVANCE(1029);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t') ADVANCE(457);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t') ADVANCE(458);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t') ADVANCE(459);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(450);
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '%') ADVANCE(449);
      if (lookahead == 'A') ADVANCE(708);
      if (lookahead == 'B') ADVANCE(709);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(576);
      if (lookahead == 'E') ADVANCE(613);
      if (lookahead == 'G') ADVANCE(652);
      if (lookahead == 'L') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(623);
      if (lookahead == 'N') ADVANCE(481);
      if (lookahead == 'O') ADVANCE(492);
      if (lookahead == 'P') ADVANCE(482);
      if (lookahead == 'R') ADVANCE(525);
      if (lookahead == 'S') ADVANCE(626);
      if (lookahead == 'U') ADVANCE(473);
      if (lookahead == 'V') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 11) ADVANCE(453);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 11) ADVANCE(460);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 11) ADVANCE(461);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\f') ADVANCE(454);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\f') ADVANCE(455);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\f') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ' ') ADVANCE(451);
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '%') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ' ') ADVANCE(452);
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(656);
      if (lookahead == 'C') ADVANCE(639);
      if (lookahead == 'P') ADVANCE(662);
      if (lookahead == 'R') ADVANCE(533);
      if (lookahead == 'S') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(657);
      if (lookahead == 'O') ADVANCE(476);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(659);
      if (lookahead == 'O') ADVANCE(477);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'C') ADVANCE(475);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'L') ADVANCE(360);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'L') ADVANCE(485);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(486);
      if (lookahead == 'S') ADVANCE(638);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(637);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(658);
      if (lookahead == 'R') ADVANCE(531);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(491);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'R') ADVANCE(467);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'R') ADVANCE(557);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(364);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(416);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(420);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'T') ADVANCE(484);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'U') ADVANCE(654);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'W') ADVANCE(583);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'r') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'a') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'b') ADVANCE(685);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'b') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'b') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(594);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(627);
      if (lookahead == 'l') ADVANCE(537);
      if (lookahead == 'm') ADVANCE(625);
      if (lookahead == 'q') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(529);
      if (lookahead == 's') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == 'o') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'f') ADVANCE(577);
      if (lookahead == 'r') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'f') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'f') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'f') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'g') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'g') ADVANCE(479);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'g') ADVANCE(565);
      if (lookahead == 'm') ADVANCE(607);
      if (lookahead == 'p') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'g') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'g') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'h') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'h') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'h') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'h') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'h') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'h') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'h') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'h') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'h') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(682);
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'k') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'm') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'm') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'm') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'm') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'm') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'm') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(572);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == 'x') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(516);
      if (lookahead == 'r') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(711);
      if (lookahead == 'u') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'q') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'q') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'q') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'q') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'q') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 's') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'x') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'x') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'y') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'y') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == 'y') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(731);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(731);
      if (lookahead == '\\') ADVANCE(305);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'A') ADVANCE(941);
      if (lookahead == 'C') ADVANCE(924);
      if (lookahead == 'P') ADVANCE(949);
      if (lookahead == 'R') ADVANCE(809);
      if (lookahead == 'S') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'A') ADVANCE(943);
      if (lookahead == 'O') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'A') ADVANCE(945);
      if (lookahead == 'O') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'C') ADVANCE(746);
      if (lookahead == 'e') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'D') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'L') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'L') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'P') ADVANCE(758);
      if (lookahead == 'S') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'P') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'P') ADVANCE(946);
      if (lookahead == 'R') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'P') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'R') ADVANCE(738);
      if (lookahead == 'r') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'R') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'S') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'S') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'S') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'T') ADVANCE(755);
      if (lookahead == 'r') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'U') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'W') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(886);
      if (lookahead == 'o') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(770);
      if (lookahead == 'r') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'b') ADVANCE(977);
      if (lookahead == 'r') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'b') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'b') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(874);
      if (lookahead == 't') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(911);
      if (lookahead == 'l') ADVANCE(815);
      if (lookahead == 'm') ADVANCE(909);
      if (lookahead == 'q') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(801);
      if (lookahead == 's') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(837);
      if (lookahead == 'o') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(931);
      if (lookahead == 'o') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'f') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'f') ADVANCE(856);
      if (lookahead == 'r') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'f') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'f') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'f') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(750);
      if (lookahead == 'i') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(844);
      if (lookahead == 'm') ADVANCE(887);
      if (lookahead == 'p') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(974);
      if (lookahead == 'o') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'k') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(846);
      if (lookahead == 'p') ADVANCE(914);
      if (lookahead == 'x') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(790);
      if (lookahead == 'r') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(1008);
      if (lookahead == 'u') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(975);
      if (lookahead == 'r') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'p') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'p') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'p') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'x') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'x') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'y') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'y') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'y') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'y') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 310},
  [2] = {.lex_state = 309},
  [3] = {.lex_state = 309},
  [4] = {.lex_state = 309},
  [5] = {.lex_state = 309},
  [6] = {.lex_state = 309},
  [7] = {.lex_state = 309},
  [8] = {.lex_state = 309},
  [9] = {.lex_state = 310},
  [10] = {.lex_state = 310},
  [11] = {.lex_state = 309},
  [12] = {.lex_state = 310},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 310},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_spec_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_tags_token1] = ACTIONS(1),
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
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_variable_name] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_spec] = STATE(25),
    [sym_preamble] = STATE(9),
    [sym_tags] = STATE(12),
    [sym_tag] = STATE(18),
    [sym_dependency_tag] = STATE(18),
    [aux_sym_spec_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_spec_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(9),
    [anon_sym_AutoReq] = ACTIONS(11),
    [anon_sym_AutoReqProv] = ACTIONS(9),
    [anon_sym_BugUrl] = ACTIONS(9),
    [anon_sym_BuildRoot] = ACTIONS(9),
    [anon_sym_BuildSystem] = ACTIONS(9),
    [anon_sym_DistTag] = ACTIONS(9),
    [anon_sym_Distribution] = ACTIONS(9),
    [anon_sym_Epoch] = ACTIONS(9),
    [anon_sym_Group] = ACTIONS(9),
    [anon_sym_License] = ACTIONS(9),
    [anon_sym_ModularityLabel] = ACTIONS(9),
    [anon_sym_Name] = ACTIONS(9),
    [anon_sym_NoPatch] = ACTIONS(9),
    [anon_sym_NoSource] = ACTIONS(9),
    [anon_sym_Packager] = ACTIONS(9),
    [anon_sym_Release] = ACTIONS(9),
    [anon_sym_SourceLicense] = ACTIONS(9),
    [anon_sym_Summary] = ACTIONS(9),
    [anon_sym_URL] = ACTIONS(9),
    [anon_sym_Url] = ACTIONS(9),
    [anon_sym_VCS] = ACTIONS(9),
    [anon_sym_Vendor] = ACTIONS(9),
    [anon_sym_Version] = ACTIONS(9),
    [aux_sym_tag_token1] = ACTIONS(9),
    [aux_sym_tag_token2] = ACTIONS(11),
    [anon_sym_Requires] = ACTIONS(13),
    [anon_sym_BuildArch] = ACTIONS(15),
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
    [anon_sym_Prefix] = ACTIONS(15),
    [anon_sym_Prefixes] = ACTIONS(17),
    [anon_sym_Prereq] = ACTIONS(17),
    [anon_sym_Provides] = ACTIONS(17),
    [anon_sym_Recommends] = ACTIONS(17),
    [anon_sym_RemovePathPostfixes] = ACTIONS(17),
    [anon_sym_Suggests] = ACTIONS(17),
    [anon_sym_Supplements] = ACTIONS(17),
  },
  [2] = {
    [aux_sym__value] = STATE(2),
    [sym_string] = STATE(2),
    [sym_simple_expansion] = STATE(5),
    [sym_expansion] = STATE(5),
    [aux_sym_string_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_spec_token1] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [anon_sym_AutoProv] = ACTIONS(21),
    [anon_sym_AutoReq] = ACTIONS(21),
    [anon_sym_AutoReqProv] = ACTIONS(21),
    [anon_sym_BugUrl] = ACTIONS(21),
    [anon_sym_BuildRoot] = ACTIONS(21),
    [anon_sym_BuildSystem] = ACTIONS(21),
    [anon_sym_DistTag] = ACTIONS(21),
    [anon_sym_Distribution] = ACTIONS(21),
    [anon_sym_Epoch] = ACTIONS(21),
    [anon_sym_Group] = ACTIONS(21),
    [anon_sym_License] = ACTIONS(21),
    [anon_sym_ModularityLabel] = ACTIONS(21),
    [anon_sym_Name] = ACTIONS(21),
    [anon_sym_NoPatch] = ACTIONS(21),
    [anon_sym_NoSource] = ACTIONS(21),
    [anon_sym_Packager] = ACTIONS(21),
    [anon_sym_Release] = ACTIONS(21),
    [anon_sym_SourceLicense] = ACTIONS(21),
    [anon_sym_Summary] = ACTIONS(21),
    [anon_sym_URL] = ACTIONS(21),
    [anon_sym_Url] = ACTIONS(21),
    [anon_sym_VCS] = ACTIONS(21),
    [anon_sym_Vendor] = ACTIONS(21),
    [anon_sym_Version] = ACTIONS(21),
    [aux_sym_tag_token1] = ACTIONS(21),
    [aux_sym_tag_token2] = ACTIONS(21),
    [anon_sym_Requires] = ACTIONS(21),
    [anon_sym_BuildArch] = ACTIONS(21),
    [anon_sym_BuildArchitectures] = ACTIONS(21),
    [anon_sym_BuildConflicts] = ACTIONS(21),
    [anon_sym_BuildPrereq] = ACTIONS(21),
    [anon_sym_BuildRequires] = ACTIONS(21),
    [anon_sym_Conflicts] = ACTIONS(21),
    [anon_sym_DocDir] = ACTIONS(21),
    [anon_sym_Enhances] = ACTIONS(21),
    [anon_sym_ExcludeArch] = ACTIONS(21),
    [anon_sym_ExcludeOS] = ACTIONS(21),
    [anon_sym_ExclusiveArch] = ACTIONS(21),
    [anon_sym_ExclusiveOS] = ACTIONS(21),
    [anon_sym_Obsoletes] = ACTIONS(21),
    [anon_sym_OrderWithRequires] = ACTIONS(21),
    [anon_sym_Prefix] = ACTIONS(21),
    [anon_sym_Prefixes] = ACTIONS(21),
    [anon_sym_Prereq] = ACTIONS(21),
    [anon_sym_Provides] = ACTIONS(21),
    [anon_sym_Recommends] = ACTIONS(21),
    [anon_sym_RemovePathPostfixes] = ACTIONS(21),
    [anon_sym_Suggests] = ACTIONS(21),
    [anon_sym_Supplements] = ACTIONS(21),
    [sym_integer] = ACTIONS(25),
    [sym_float] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(28),
    [sym_string_content] = ACTIONS(31),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(34),
  },
  [3] = {
    [aux_sym__value] = STATE(2),
    [sym_string] = STATE(2),
    [sym_simple_expansion] = STATE(5),
    [sym_expansion] = STATE(5),
    [aux_sym_string_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_spec_token1] = ACTIONS(39),
    [sym_comment] = ACTIONS(23),
    [anon_sym_AutoProv] = ACTIONS(39),
    [anon_sym_AutoReq] = ACTIONS(39),
    [anon_sym_AutoReqProv] = ACTIONS(39),
    [anon_sym_BugUrl] = ACTIONS(39),
    [anon_sym_BuildRoot] = ACTIONS(39),
    [anon_sym_BuildSystem] = ACTIONS(39),
    [anon_sym_DistTag] = ACTIONS(39),
    [anon_sym_Distribution] = ACTIONS(39),
    [anon_sym_Epoch] = ACTIONS(39),
    [anon_sym_Group] = ACTIONS(39),
    [anon_sym_License] = ACTIONS(39),
    [anon_sym_ModularityLabel] = ACTIONS(39),
    [anon_sym_Name] = ACTIONS(39),
    [anon_sym_NoPatch] = ACTIONS(39),
    [anon_sym_NoSource] = ACTIONS(39),
    [anon_sym_Packager] = ACTIONS(39),
    [anon_sym_Release] = ACTIONS(39),
    [anon_sym_SourceLicense] = ACTIONS(39),
    [anon_sym_Summary] = ACTIONS(39),
    [anon_sym_URL] = ACTIONS(39),
    [anon_sym_Url] = ACTIONS(39),
    [anon_sym_VCS] = ACTIONS(39),
    [anon_sym_Vendor] = ACTIONS(39),
    [anon_sym_Version] = ACTIONS(39),
    [aux_sym_tag_token1] = ACTIONS(39),
    [aux_sym_tag_token2] = ACTIONS(39),
    [anon_sym_Requires] = ACTIONS(39),
    [anon_sym_BuildArch] = ACTIONS(39),
    [anon_sym_BuildArchitectures] = ACTIONS(39),
    [anon_sym_BuildConflicts] = ACTIONS(39),
    [anon_sym_BuildPrereq] = ACTIONS(39),
    [anon_sym_BuildRequires] = ACTIONS(39),
    [anon_sym_Conflicts] = ACTIONS(39),
    [anon_sym_DocDir] = ACTIONS(39),
    [anon_sym_Enhances] = ACTIONS(39),
    [anon_sym_ExcludeArch] = ACTIONS(39),
    [anon_sym_ExcludeOS] = ACTIONS(39),
    [anon_sym_ExclusiveArch] = ACTIONS(39),
    [anon_sym_ExclusiveOS] = ACTIONS(39),
    [anon_sym_Obsoletes] = ACTIONS(39),
    [anon_sym_OrderWithRequires] = ACTIONS(39),
    [anon_sym_Prefix] = ACTIONS(39),
    [anon_sym_Prefixes] = ACTIONS(39),
    [anon_sym_Prereq] = ACTIONS(39),
    [anon_sym_Provides] = ACTIONS(39),
    [anon_sym_Recommends] = ACTIONS(39),
    [anon_sym_RemovePathPostfixes] = ACTIONS(39),
    [anon_sym_Suggests] = ACTIONS(39),
    [anon_sym_Supplements] = ACTIONS(39),
    [sym_integer] = ACTIONS(41),
    [sym_float] = ACTIONS(41),
    [anon_sym_PERCENT] = ACTIONS(43),
    [sym_string_content] = ACTIONS(45),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(47),
  },
  [4] = {
    [sym_simple_expansion] = STATE(4),
    [sym_expansion] = STATE(4),
    [aux_sym_string_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym_spec_token1] = ACTIONS(51),
    [sym_comment] = ACTIONS(23),
    [anon_sym_AutoProv] = ACTIONS(51),
    [anon_sym_AutoReq] = ACTIONS(51),
    [anon_sym_AutoReqProv] = ACTIONS(51),
    [anon_sym_BugUrl] = ACTIONS(51),
    [anon_sym_BuildRoot] = ACTIONS(51),
    [anon_sym_BuildSystem] = ACTIONS(51),
    [anon_sym_DistTag] = ACTIONS(51),
    [anon_sym_Distribution] = ACTIONS(51),
    [anon_sym_Epoch] = ACTIONS(51),
    [anon_sym_Group] = ACTIONS(51),
    [anon_sym_License] = ACTIONS(51),
    [anon_sym_ModularityLabel] = ACTIONS(51),
    [anon_sym_Name] = ACTIONS(51),
    [anon_sym_NoPatch] = ACTIONS(51),
    [anon_sym_NoSource] = ACTIONS(51),
    [anon_sym_Packager] = ACTIONS(51),
    [anon_sym_Release] = ACTIONS(51),
    [anon_sym_SourceLicense] = ACTIONS(51),
    [anon_sym_Summary] = ACTIONS(51),
    [anon_sym_URL] = ACTIONS(51),
    [anon_sym_Url] = ACTIONS(51),
    [anon_sym_VCS] = ACTIONS(51),
    [anon_sym_Vendor] = ACTIONS(51),
    [anon_sym_Version] = ACTIONS(51),
    [aux_sym_tag_token1] = ACTIONS(51),
    [aux_sym_tag_token2] = ACTIONS(51),
    [anon_sym_Requires] = ACTIONS(51),
    [anon_sym_BuildArch] = ACTIONS(51),
    [anon_sym_BuildArchitectures] = ACTIONS(51),
    [anon_sym_BuildConflicts] = ACTIONS(51),
    [anon_sym_BuildPrereq] = ACTIONS(51),
    [anon_sym_BuildRequires] = ACTIONS(51),
    [anon_sym_Conflicts] = ACTIONS(51),
    [anon_sym_DocDir] = ACTIONS(51),
    [anon_sym_Enhances] = ACTIONS(51),
    [anon_sym_ExcludeArch] = ACTIONS(51),
    [anon_sym_ExcludeOS] = ACTIONS(51),
    [anon_sym_ExclusiveArch] = ACTIONS(51),
    [anon_sym_ExclusiveOS] = ACTIONS(51),
    [anon_sym_Obsoletes] = ACTIONS(51),
    [anon_sym_OrderWithRequires] = ACTIONS(51),
    [anon_sym_Prefix] = ACTIONS(51),
    [anon_sym_Prefixes] = ACTIONS(51),
    [anon_sym_Prereq] = ACTIONS(51),
    [anon_sym_Provides] = ACTIONS(51),
    [anon_sym_Recommends] = ACTIONS(51),
    [anon_sym_RemovePathPostfixes] = ACTIONS(51),
    [anon_sym_Suggests] = ACTIONS(51),
    [anon_sym_Supplements] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [anon_sym_PERCENT] = ACTIONS(53),
    [sym_string_content] = ACTIONS(56),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(59),
  },
  [5] = {
    [sym_simple_expansion] = STATE(4),
    [sym_expansion] = STATE(4),
    [aux_sym_string_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(62),
    [aux_sym_spec_token1] = ACTIONS(64),
    [sym_comment] = ACTIONS(23),
    [anon_sym_AutoProv] = ACTIONS(64),
    [anon_sym_AutoReq] = ACTIONS(64),
    [anon_sym_AutoReqProv] = ACTIONS(64),
    [anon_sym_BugUrl] = ACTIONS(64),
    [anon_sym_BuildRoot] = ACTIONS(64),
    [anon_sym_BuildSystem] = ACTIONS(64),
    [anon_sym_DistTag] = ACTIONS(64),
    [anon_sym_Distribution] = ACTIONS(64),
    [anon_sym_Epoch] = ACTIONS(64),
    [anon_sym_Group] = ACTIONS(64),
    [anon_sym_License] = ACTIONS(64),
    [anon_sym_ModularityLabel] = ACTIONS(64),
    [anon_sym_Name] = ACTIONS(64),
    [anon_sym_NoPatch] = ACTIONS(64),
    [anon_sym_NoSource] = ACTIONS(64),
    [anon_sym_Packager] = ACTIONS(64),
    [anon_sym_Release] = ACTIONS(64),
    [anon_sym_SourceLicense] = ACTIONS(64),
    [anon_sym_Summary] = ACTIONS(64),
    [anon_sym_URL] = ACTIONS(64),
    [anon_sym_Url] = ACTIONS(64),
    [anon_sym_VCS] = ACTIONS(64),
    [anon_sym_Vendor] = ACTIONS(64),
    [anon_sym_Version] = ACTIONS(64),
    [aux_sym_tag_token1] = ACTIONS(64),
    [aux_sym_tag_token2] = ACTIONS(64),
    [anon_sym_Requires] = ACTIONS(64),
    [anon_sym_BuildArch] = ACTIONS(64),
    [anon_sym_BuildArchitectures] = ACTIONS(64),
    [anon_sym_BuildConflicts] = ACTIONS(64),
    [anon_sym_BuildPrereq] = ACTIONS(64),
    [anon_sym_BuildRequires] = ACTIONS(64),
    [anon_sym_Conflicts] = ACTIONS(64),
    [anon_sym_DocDir] = ACTIONS(64),
    [anon_sym_Enhances] = ACTIONS(64),
    [anon_sym_ExcludeArch] = ACTIONS(64),
    [anon_sym_ExcludeOS] = ACTIONS(64),
    [anon_sym_ExclusiveArch] = ACTIONS(64),
    [anon_sym_ExclusiveOS] = ACTIONS(64),
    [anon_sym_Obsoletes] = ACTIONS(64),
    [anon_sym_OrderWithRequires] = ACTIONS(64),
    [anon_sym_Prefix] = ACTIONS(64),
    [anon_sym_Prefixes] = ACTIONS(64),
    [anon_sym_Prereq] = ACTIONS(64),
    [anon_sym_Provides] = ACTIONS(64),
    [anon_sym_Recommends] = ACTIONS(64),
    [anon_sym_RemovePathPostfixes] = ACTIONS(64),
    [anon_sym_Suggests] = ACTIONS(64),
    [anon_sym_Supplements] = ACTIONS(64),
    [sym_integer] = ACTIONS(64),
    [sym_float] = ACTIONS(64),
    [anon_sym_PERCENT] = ACTIONS(43),
    [sym_string_content] = ACTIONS(66),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(47),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym_spec_token1] = ACTIONS(51),
    [sym_comment] = ACTIONS(23),
    [anon_sym_AutoProv] = ACTIONS(51),
    [anon_sym_AutoReq] = ACTIONS(51),
    [anon_sym_AutoReqProv] = ACTIONS(51),
    [anon_sym_BugUrl] = ACTIONS(51),
    [anon_sym_BuildRoot] = ACTIONS(51),
    [anon_sym_BuildSystem] = ACTIONS(51),
    [anon_sym_DistTag] = ACTIONS(51),
    [anon_sym_Distribution] = ACTIONS(51),
    [anon_sym_Epoch] = ACTIONS(51),
    [anon_sym_Group] = ACTIONS(51),
    [anon_sym_License] = ACTIONS(51),
    [anon_sym_ModularityLabel] = ACTIONS(51),
    [anon_sym_Name] = ACTIONS(51),
    [anon_sym_NoPatch] = ACTIONS(51),
    [anon_sym_NoSource] = ACTIONS(51),
    [anon_sym_Packager] = ACTIONS(51),
    [anon_sym_Release] = ACTIONS(51),
    [anon_sym_SourceLicense] = ACTIONS(51),
    [anon_sym_Summary] = ACTIONS(51),
    [anon_sym_URL] = ACTIONS(51),
    [anon_sym_Url] = ACTIONS(51),
    [anon_sym_VCS] = ACTIONS(51),
    [anon_sym_Vendor] = ACTIONS(51),
    [anon_sym_Version] = ACTIONS(51),
    [aux_sym_tag_token1] = ACTIONS(51),
    [aux_sym_tag_token2] = ACTIONS(51),
    [anon_sym_Requires] = ACTIONS(51),
    [anon_sym_BuildArch] = ACTIONS(51),
    [anon_sym_BuildArchitectures] = ACTIONS(51),
    [anon_sym_BuildConflicts] = ACTIONS(51),
    [anon_sym_BuildPrereq] = ACTIONS(51),
    [anon_sym_BuildRequires] = ACTIONS(51),
    [anon_sym_Conflicts] = ACTIONS(51),
    [anon_sym_DocDir] = ACTIONS(51),
    [anon_sym_Enhances] = ACTIONS(51),
    [anon_sym_ExcludeArch] = ACTIONS(51),
    [anon_sym_ExcludeOS] = ACTIONS(51),
    [anon_sym_ExclusiveArch] = ACTIONS(51),
    [anon_sym_ExclusiveOS] = ACTIONS(51),
    [anon_sym_Obsoletes] = ACTIONS(51),
    [anon_sym_OrderWithRequires] = ACTIONS(51),
    [anon_sym_Prefix] = ACTIONS(51),
    [anon_sym_Prefixes] = ACTIONS(51),
    [anon_sym_Prereq] = ACTIONS(51),
    [anon_sym_Provides] = ACTIONS(51),
    [anon_sym_Recommends] = ACTIONS(51),
    [anon_sym_RemovePathPostfixes] = ACTIONS(51),
    [anon_sym_Suggests] = ACTIONS(51),
    [anon_sym_Supplements] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [anon_sym_PERCENT] = ACTIONS(51),
    [sym_string_content] = ACTIONS(51),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(51),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [aux_sym_spec_token1] = ACTIONS(70),
    [sym_comment] = ACTIONS(23),
    [anon_sym_AutoProv] = ACTIONS(70),
    [anon_sym_AutoReq] = ACTIONS(70),
    [anon_sym_AutoReqProv] = ACTIONS(70),
    [anon_sym_BugUrl] = ACTIONS(70),
    [anon_sym_BuildRoot] = ACTIONS(70),
    [anon_sym_BuildSystem] = ACTIONS(70),
    [anon_sym_DistTag] = ACTIONS(70),
    [anon_sym_Distribution] = ACTIONS(70),
    [anon_sym_Epoch] = ACTIONS(70),
    [anon_sym_Group] = ACTIONS(70),
    [anon_sym_License] = ACTIONS(70),
    [anon_sym_ModularityLabel] = ACTIONS(70),
    [anon_sym_Name] = ACTIONS(70),
    [anon_sym_NoPatch] = ACTIONS(70),
    [anon_sym_NoSource] = ACTIONS(70),
    [anon_sym_Packager] = ACTIONS(70),
    [anon_sym_Release] = ACTIONS(70),
    [anon_sym_SourceLicense] = ACTIONS(70),
    [anon_sym_Summary] = ACTIONS(70),
    [anon_sym_URL] = ACTIONS(70),
    [anon_sym_Url] = ACTIONS(70),
    [anon_sym_VCS] = ACTIONS(70),
    [anon_sym_Vendor] = ACTIONS(70),
    [anon_sym_Version] = ACTIONS(70),
    [aux_sym_tag_token1] = ACTIONS(70),
    [aux_sym_tag_token2] = ACTIONS(70),
    [anon_sym_Requires] = ACTIONS(70),
    [anon_sym_BuildArch] = ACTIONS(70),
    [anon_sym_BuildArchitectures] = ACTIONS(70),
    [anon_sym_BuildConflicts] = ACTIONS(70),
    [anon_sym_BuildPrereq] = ACTIONS(70),
    [anon_sym_BuildRequires] = ACTIONS(70),
    [anon_sym_Conflicts] = ACTIONS(70),
    [anon_sym_DocDir] = ACTIONS(70),
    [anon_sym_Enhances] = ACTIONS(70),
    [anon_sym_ExcludeArch] = ACTIONS(70),
    [anon_sym_ExcludeOS] = ACTIONS(70),
    [anon_sym_ExclusiveArch] = ACTIONS(70),
    [anon_sym_ExclusiveOS] = ACTIONS(70),
    [anon_sym_Obsoletes] = ACTIONS(70),
    [anon_sym_OrderWithRequires] = ACTIONS(70),
    [anon_sym_Prefix] = ACTIONS(70),
    [anon_sym_Prefixes] = ACTIONS(70),
    [anon_sym_Prereq] = ACTIONS(70),
    [anon_sym_Provides] = ACTIONS(70),
    [anon_sym_Recommends] = ACTIONS(70),
    [anon_sym_RemovePathPostfixes] = ACTIONS(70),
    [anon_sym_Suggests] = ACTIONS(70),
    [anon_sym_Supplements] = ACTIONS(70),
    [sym_integer] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [sym_string_content] = ACTIONS(70),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(70),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [aux_sym_spec_token1] = ACTIONS(74),
    [sym_comment] = ACTIONS(23),
    [anon_sym_AutoProv] = ACTIONS(74),
    [anon_sym_AutoReq] = ACTIONS(74),
    [anon_sym_AutoReqProv] = ACTIONS(74),
    [anon_sym_BugUrl] = ACTIONS(74),
    [anon_sym_BuildRoot] = ACTIONS(74),
    [anon_sym_BuildSystem] = ACTIONS(74),
    [anon_sym_DistTag] = ACTIONS(74),
    [anon_sym_Distribution] = ACTIONS(74),
    [anon_sym_Epoch] = ACTIONS(74),
    [anon_sym_Group] = ACTIONS(74),
    [anon_sym_License] = ACTIONS(74),
    [anon_sym_ModularityLabel] = ACTIONS(74),
    [anon_sym_Name] = ACTIONS(74),
    [anon_sym_NoPatch] = ACTIONS(74),
    [anon_sym_NoSource] = ACTIONS(74),
    [anon_sym_Packager] = ACTIONS(74),
    [anon_sym_Release] = ACTIONS(74),
    [anon_sym_SourceLicense] = ACTIONS(74),
    [anon_sym_Summary] = ACTIONS(74),
    [anon_sym_URL] = ACTIONS(74),
    [anon_sym_Url] = ACTIONS(74),
    [anon_sym_VCS] = ACTIONS(74),
    [anon_sym_Vendor] = ACTIONS(74),
    [anon_sym_Version] = ACTIONS(74),
    [aux_sym_tag_token1] = ACTIONS(74),
    [aux_sym_tag_token2] = ACTIONS(74),
    [anon_sym_Requires] = ACTIONS(74),
    [anon_sym_BuildArch] = ACTIONS(74),
    [anon_sym_BuildArchitectures] = ACTIONS(74),
    [anon_sym_BuildConflicts] = ACTIONS(74),
    [anon_sym_BuildPrereq] = ACTIONS(74),
    [anon_sym_BuildRequires] = ACTIONS(74),
    [anon_sym_Conflicts] = ACTIONS(74),
    [anon_sym_DocDir] = ACTIONS(74),
    [anon_sym_Enhances] = ACTIONS(74),
    [anon_sym_ExcludeArch] = ACTIONS(74),
    [anon_sym_ExcludeOS] = ACTIONS(74),
    [anon_sym_ExclusiveArch] = ACTIONS(74),
    [anon_sym_ExclusiveOS] = ACTIONS(74),
    [anon_sym_Obsoletes] = ACTIONS(74),
    [anon_sym_OrderWithRequires] = ACTIONS(74),
    [anon_sym_Prefix] = ACTIONS(74),
    [anon_sym_Prefixes] = ACTIONS(74),
    [anon_sym_Prereq] = ACTIONS(74),
    [anon_sym_Provides] = ACTIONS(74),
    [anon_sym_Recommends] = ACTIONS(74),
    [anon_sym_RemovePathPostfixes] = ACTIONS(74),
    [anon_sym_Suggests] = ACTIONS(74),
    [anon_sym_Supplements] = ACTIONS(74),
    [sym_integer] = ACTIONS(74),
    [sym_float] = ACTIONS(74),
    [anon_sym_PERCENT] = ACTIONS(74),
    [sym_string_content] = ACTIONS(74),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(74),
  },
  [9] = {
    [sym_preamble] = STATE(10),
    [sym_tags] = STATE(12),
    [sym_tag] = STATE(18),
    [sym_dependency_tag] = STATE(18),
    [aux_sym_spec_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(76),
    [aux_sym_spec_token1] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(9),
    [anon_sym_AutoReq] = ACTIONS(11),
    [anon_sym_AutoReqProv] = ACTIONS(9),
    [anon_sym_BugUrl] = ACTIONS(9),
    [anon_sym_BuildRoot] = ACTIONS(9),
    [anon_sym_BuildSystem] = ACTIONS(9),
    [anon_sym_DistTag] = ACTIONS(9),
    [anon_sym_Distribution] = ACTIONS(9),
    [anon_sym_Epoch] = ACTIONS(9),
    [anon_sym_Group] = ACTIONS(9),
    [anon_sym_License] = ACTIONS(9),
    [anon_sym_ModularityLabel] = ACTIONS(9),
    [anon_sym_Name] = ACTIONS(9),
    [anon_sym_NoPatch] = ACTIONS(9),
    [anon_sym_NoSource] = ACTIONS(9),
    [anon_sym_Packager] = ACTIONS(9),
    [anon_sym_Release] = ACTIONS(9),
    [anon_sym_SourceLicense] = ACTIONS(9),
    [anon_sym_Summary] = ACTIONS(9),
    [anon_sym_URL] = ACTIONS(9),
    [anon_sym_Url] = ACTIONS(9),
    [anon_sym_VCS] = ACTIONS(9),
    [anon_sym_Vendor] = ACTIONS(9),
    [anon_sym_Version] = ACTIONS(9),
    [aux_sym_tag_token1] = ACTIONS(9),
    [aux_sym_tag_token2] = ACTIONS(11),
    [anon_sym_Requires] = ACTIONS(13),
    [anon_sym_BuildArch] = ACTIONS(15),
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
    [anon_sym_Prefix] = ACTIONS(15),
    [anon_sym_Prefixes] = ACTIONS(17),
    [anon_sym_Prereq] = ACTIONS(17),
    [anon_sym_Provides] = ACTIONS(17),
    [anon_sym_Recommends] = ACTIONS(17),
    [anon_sym_RemovePathPostfixes] = ACTIONS(17),
    [anon_sym_Suggests] = ACTIONS(17),
    [anon_sym_Supplements] = ACTIONS(17),
  },
  [10] = {
    [sym_preamble] = STATE(10),
    [sym_tags] = STATE(12),
    [sym_tag] = STATE(18),
    [sym_dependency_tag] = STATE(18),
    [aux_sym_spec_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(80),
    [aux_sym_spec_token1] = ACTIONS(82),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(85),
    [anon_sym_AutoReq] = ACTIONS(88),
    [anon_sym_AutoReqProv] = ACTIONS(85),
    [anon_sym_BugUrl] = ACTIONS(85),
    [anon_sym_BuildRoot] = ACTIONS(85),
    [anon_sym_BuildSystem] = ACTIONS(85),
    [anon_sym_DistTag] = ACTIONS(85),
    [anon_sym_Distribution] = ACTIONS(85),
    [anon_sym_Epoch] = ACTIONS(85),
    [anon_sym_Group] = ACTIONS(85),
    [anon_sym_License] = ACTIONS(85),
    [anon_sym_ModularityLabel] = ACTIONS(85),
    [anon_sym_Name] = ACTIONS(85),
    [anon_sym_NoPatch] = ACTIONS(85),
    [anon_sym_NoSource] = ACTIONS(85),
    [anon_sym_Packager] = ACTIONS(85),
    [anon_sym_Release] = ACTIONS(85),
    [anon_sym_SourceLicense] = ACTIONS(85),
    [anon_sym_Summary] = ACTIONS(85),
    [anon_sym_URL] = ACTIONS(85),
    [anon_sym_Url] = ACTIONS(85),
    [anon_sym_VCS] = ACTIONS(85),
    [anon_sym_Vendor] = ACTIONS(85),
    [anon_sym_Version] = ACTIONS(85),
    [aux_sym_tag_token1] = ACTIONS(85),
    [aux_sym_tag_token2] = ACTIONS(88),
    [anon_sym_Requires] = ACTIONS(91),
    [anon_sym_BuildArch] = ACTIONS(94),
    [anon_sym_BuildArchitectures] = ACTIONS(97),
    [anon_sym_BuildConflicts] = ACTIONS(97),
    [anon_sym_BuildPrereq] = ACTIONS(97),
    [anon_sym_BuildRequires] = ACTIONS(97),
    [anon_sym_Conflicts] = ACTIONS(97),
    [anon_sym_DocDir] = ACTIONS(97),
    [anon_sym_Enhances] = ACTIONS(97),
    [anon_sym_ExcludeArch] = ACTIONS(97),
    [anon_sym_ExcludeOS] = ACTIONS(97),
    [anon_sym_ExclusiveArch] = ACTIONS(97),
    [anon_sym_ExclusiveOS] = ACTIONS(97),
    [anon_sym_Obsoletes] = ACTIONS(97),
    [anon_sym_OrderWithRequires] = ACTIONS(97),
    [anon_sym_Prefix] = ACTIONS(94),
    [anon_sym_Prefixes] = ACTIONS(97),
    [anon_sym_Prereq] = ACTIONS(97),
    [anon_sym_Provides] = ACTIONS(97),
    [anon_sym_Recommends] = ACTIONS(97),
    [anon_sym_RemovePathPostfixes] = ACTIONS(97),
    [anon_sym_Suggests] = ACTIONS(97),
    [anon_sym_Supplements] = ACTIONS(97),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_spec_token1] = ACTIONS(102),
    [sym_comment] = ACTIONS(23),
    [anon_sym_AutoProv] = ACTIONS(102),
    [anon_sym_AutoReq] = ACTIONS(102),
    [anon_sym_AutoReqProv] = ACTIONS(102),
    [anon_sym_BugUrl] = ACTIONS(102),
    [anon_sym_BuildRoot] = ACTIONS(102),
    [anon_sym_BuildSystem] = ACTIONS(102),
    [anon_sym_DistTag] = ACTIONS(102),
    [anon_sym_Distribution] = ACTIONS(102),
    [anon_sym_Epoch] = ACTIONS(102),
    [anon_sym_Group] = ACTIONS(102),
    [anon_sym_License] = ACTIONS(102),
    [anon_sym_ModularityLabel] = ACTIONS(102),
    [anon_sym_Name] = ACTIONS(102),
    [anon_sym_NoPatch] = ACTIONS(102),
    [anon_sym_NoSource] = ACTIONS(102),
    [anon_sym_Packager] = ACTIONS(102),
    [anon_sym_Release] = ACTIONS(102),
    [anon_sym_SourceLicense] = ACTIONS(102),
    [anon_sym_Summary] = ACTIONS(102),
    [anon_sym_URL] = ACTIONS(102),
    [anon_sym_Url] = ACTIONS(102),
    [anon_sym_VCS] = ACTIONS(102),
    [anon_sym_Vendor] = ACTIONS(102),
    [anon_sym_Version] = ACTIONS(102),
    [aux_sym_tag_token1] = ACTIONS(102),
    [aux_sym_tag_token2] = ACTIONS(102),
    [anon_sym_Requires] = ACTIONS(102),
    [anon_sym_BuildArch] = ACTIONS(102),
    [anon_sym_BuildArchitectures] = ACTIONS(102),
    [anon_sym_BuildConflicts] = ACTIONS(102),
    [anon_sym_BuildPrereq] = ACTIONS(102),
    [anon_sym_BuildRequires] = ACTIONS(102),
    [anon_sym_Conflicts] = ACTIONS(102),
    [anon_sym_DocDir] = ACTIONS(102),
    [anon_sym_Enhances] = ACTIONS(102),
    [anon_sym_ExcludeArch] = ACTIONS(102),
    [anon_sym_ExcludeOS] = ACTIONS(102),
    [anon_sym_ExclusiveArch] = ACTIONS(102),
    [anon_sym_ExclusiveOS] = ACTIONS(102),
    [anon_sym_Obsoletes] = ACTIONS(102),
    [anon_sym_OrderWithRequires] = ACTIONS(102),
    [anon_sym_Prefix] = ACTIONS(102),
    [anon_sym_Prefixes] = ACTIONS(102),
    [anon_sym_Prereq] = ACTIONS(102),
    [anon_sym_Provides] = ACTIONS(102),
    [anon_sym_Recommends] = ACTIONS(102),
    [anon_sym_RemovePathPostfixes] = ACTIONS(102),
    [anon_sym_Suggests] = ACTIONS(102),
    [anon_sym_Supplements] = ACTIONS(102),
    [sym_integer] = ACTIONS(102),
    [sym_float] = ACTIONS(102),
    [anon_sym_PERCENT] = ACTIONS(102),
    [sym_string_content] = ACTIONS(102),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(102),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [aux_sym_spec_token1] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(104),
    [anon_sym_AutoReq] = ACTIONS(106),
    [anon_sym_AutoReqProv] = ACTIONS(104),
    [anon_sym_BugUrl] = ACTIONS(104),
    [anon_sym_BuildRoot] = ACTIONS(104),
    [anon_sym_BuildSystem] = ACTIONS(104),
    [anon_sym_DistTag] = ACTIONS(104),
    [anon_sym_Distribution] = ACTIONS(104),
    [anon_sym_Epoch] = ACTIONS(104),
    [anon_sym_Group] = ACTIONS(104),
    [anon_sym_License] = ACTIONS(104),
    [anon_sym_ModularityLabel] = ACTIONS(104),
    [anon_sym_Name] = ACTIONS(104),
    [anon_sym_NoPatch] = ACTIONS(104),
    [anon_sym_NoSource] = ACTIONS(104),
    [anon_sym_Packager] = ACTIONS(104),
    [anon_sym_Release] = ACTIONS(104),
    [anon_sym_SourceLicense] = ACTIONS(104),
    [anon_sym_Summary] = ACTIONS(104),
    [anon_sym_URL] = ACTIONS(104),
    [anon_sym_Url] = ACTIONS(104),
    [anon_sym_VCS] = ACTIONS(104),
    [anon_sym_Vendor] = ACTIONS(104),
    [anon_sym_Version] = ACTIONS(104),
    [aux_sym_tag_token1] = ACTIONS(104),
    [aux_sym_tag_token2] = ACTIONS(106),
    [anon_sym_Requires] = ACTIONS(104),
    [anon_sym_BuildArch] = ACTIONS(106),
    [anon_sym_BuildArchitectures] = ACTIONS(104),
    [anon_sym_BuildConflicts] = ACTIONS(104),
    [anon_sym_BuildPrereq] = ACTIONS(104),
    [anon_sym_BuildRequires] = ACTIONS(104),
    [anon_sym_Conflicts] = ACTIONS(104),
    [anon_sym_DocDir] = ACTIONS(104),
    [anon_sym_Enhances] = ACTIONS(104),
    [anon_sym_ExcludeArch] = ACTIONS(104),
    [anon_sym_ExcludeOS] = ACTIONS(104),
    [anon_sym_ExclusiveArch] = ACTIONS(104),
    [anon_sym_ExclusiveOS] = ACTIONS(104),
    [anon_sym_Obsoletes] = ACTIONS(104),
    [anon_sym_OrderWithRequires] = ACTIONS(104),
    [anon_sym_Prefix] = ACTIONS(106),
    [anon_sym_Prefixes] = ACTIONS(104),
    [anon_sym_Prereq] = ACTIONS(104),
    [anon_sym_Provides] = ACTIONS(104),
    [anon_sym_Recommends] = ACTIONS(104),
    [anon_sym_RemovePathPostfixes] = ACTIONS(104),
    [anon_sym_Suggests] = ACTIONS(104),
    [anon_sym_Supplements] = ACTIONS(104),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_PERCENT,
    ACTIONS(45), 1,
      sym_string_content,
    ACTIONS(47), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(108), 2,
      sym_integer,
      sym_float,
    STATE(3), 2,
      aux_sym__value,
      sym_string,
    STATE(5), 3,
      sym_simple_expansion,
      sym_expansion,
      aux_sym_string_repeat1,
  [26] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym_qualifier,
    ACTIONS(110), 2,
      anon_sym_pre,
      anon_sym_post,
    ACTIONS(112), 6,
      anon_sym_postun,
      anon_sym_pretrans,
      anon_sym_posttrans,
      anon_sym_verify,
      anon_sym_interp,
      anon_sym_meta,
  [45] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      aux_sym_tags_token1,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
  [55] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_string_content,
    ACTIONS(120), 1,
      sym_variable_name,
  [65] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_variable_name,
    ACTIONS(124), 1,
      anon_sym_QMARK,
  [75] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym_tags_token1,
  [82] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      aux_sym_tags_token1,
  [89] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      aux_sym_tags_token1,
  [96] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
  [103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_variable_name,
  [110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
  [117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
  [124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
  [131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
  [138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      aux_sym_tags_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 26,
  [SMALL_STATE(15)] = 45,
  [SMALL_STATE(16)] = 55,
  [SMALL_STATE(17)] = 65,
  [SMALL_STATE(18)] = 75,
  [SMALL_STATE(19)] = 82,
  [SMALL_STATE(20)] = 89,
  [SMALL_STATE(21)] = 96,
  [SMALL_STATE(22)] = 103,
  [SMALL_STATE(23)] = 110,
  [SMALL_STATE(24)] = 117,
  [SMALL_STATE(25)] = 124,
  [SMALL_STATE(26)] = 131,
  [SMALL_STATE(27)] = 138,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(16),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(17),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 3, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags, 3, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(16),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(4),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(17),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(10),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(20),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(20),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(15),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(27),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expansion, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expansion, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_tag, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_tag, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1),
  [140] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rpmspec(void) {
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
