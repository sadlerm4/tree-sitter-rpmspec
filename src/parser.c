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
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
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
  anon_sym_AutoRequires = 7,
  anon_sym_BugUrl = 8,
  anon_sym_BuildArch = 9,
  anon_sym_BuildArchitectures = 10,
  anon_sym_BuildConflicts = 11,
  anon_sym_BuildPreReq = 12,
  anon_sym_BuildRequires = 13,
  anon_sym_BuildRoot = 14,
  anon_sym_BuildSystem = 15,
  anon_sym_Conflicts = 16,
  anon_sym_DistTag = 17,
  anon_sym_Distribution = 18,
  anon_sym_Enhances = 19,
  anon_sym_Epoch = 20,
  anon_sym_ExcludeArch = 21,
  anon_sym_ExclusiveArch = 22,
  anon_sym_ExclusiveOS = 23,
  anon_sym_Group = 24,
  anon_sym_License = 25,
  anon_sym_ModularityLabel = 26,
  anon_sym_Name = 27,
  anon_sym_NoPatch = 28,
  anon_sym_NoSource = 29,
  anon_sym_Obsoletes = 30,
  anon_sym_Packager = 31,
  anon_sym_Prereq = 32,
  anon_sym_Provides = 33,
  anon_sym_Recommends = 34,
  anon_sym_Release = 35,
  anon_sym_Requires = 36,
  anon_sym_SourceLicense = 37,
  anon_sym_Suggests = 38,
  anon_sym_Summary = 39,
  anon_sym_Supplements = 40,
  anon_sym_URL = 41,
  anon_sym_Url = 42,
  anon_sym_VCS = 43,
  anon_sym_Vendor = 44,
  anon_sym_Version = 45,
  aux_sym_tag_token1 = 46,
  aux_sym_tag_token2 = 47,
  sym_integer = 48,
  sym_float = 49,
  anon_sym_PERCENT = 50,
  sym_string_content = 51,
  sym_variable_name = 52,
  anon_sym_QMARK = 53,
  anon_sym_PERCENT_LBRACE = 54,
  anon_sym_RBRACE = 55,
  sym_spec = 56,
  sym_preamble = 57,
  sym_tags = 58,
  sym_tag = 59,
  aux_sym__value = 60,
  sym_string = 61,
  sym_simple_expansion = 62,
  sym_expansion = 63,
  aux_sym_spec_repeat1 = 64,
  aux_sym_string_repeat1 = 65,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_spec_token1] = "spec_token1",
  [sym_comment] = "comment",
  [aux_sym_tags_token1] = "tags_token1",
  [anon_sym_AutoProv] = "AutoProv",
  [anon_sym_AutoReq] = "AutoReq",
  [anon_sym_AutoReqProv] = "AutoReqProv",
  [anon_sym_AutoRequires] = "AutoRequires",
  [anon_sym_BugUrl] = "BugUrl",
  [anon_sym_BuildArch] = "BuildArch",
  [anon_sym_BuildArchitectures] = "BuildArchitectures",
  [anon_sym_BuildConflicts] = "BuildConflicts",
  [anon_sym_BuildPreReq] = "BuildPreReq",
  [anon_sym_BuildRequires] = "BuildRequires",
  [anon_sym_BuildRoot] = "BuildRoot",
  [anon_sym_BuildSystem] = "BuildSystem",
  [anon_sym_Conflicts] = "Conflicts",
  [anon_sym_DistTag] = "DistTag",
  [anon_sym_Distribution] = "Distribution",
  [anon_sym_Enhances] = "Enhances",
  [anon_sym_Epoch] = "Epoch",
  [anon_sym_ExcludeArch] = "ExcludeArch",
  [anon_sym_ExclusiveArch] = "ExclusiveArch",
  [anon_sym_ExclusiveOS] = "ExclusiveOS",
  [anon_sym_Group] = "Group",
  [anon_sym_License] = "License",
  [anon_sym_ModularityLabel] = "ModularityLabel",
  [anon_sym_Name] = "Name",
  [anon_sym_NoPatch] = "NoPatch",
  [anon_sym_NoSource] = "NoSource",
  [anon_sym_Obsoletes] = "Obsoletes",
  [anon_sym_Packager] = "Packager",
  [anon_sym_Prereq] = "Prereq",
  [anon_sym_Provides] = "Provides",
  [anon_sym_Recommends] = "Recommends",
  [anon_sym_Release] = "Release",
  [anon_sym_Requires] = "Requires",
  [anon_sym_SourceLicense] = "SourceLicense",
  [anon_sym_Suggests] = "Suggests",
  [anon_sym_Summary] = "Summary",
  [anon_sym_Supplements] = "Supplements",
  [anon_sym_URL] = "URL",
  [anon_sym_Url] = "Url",
  [anon_sym_VCS] = "VCS",
  [anon_sym_Vendor] = "Vendor",
  [anon_sym_Version] = "Version",
  [aux_sym_tag_token1] = "tag_token1",
  [aux_sym_tag_token2] = "tag_token2",
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
  [anon_sym_AutoRequires] = anon_sym_AutoRequires,
  [anon_sym_BugUrl] = anon_sym_BugUrl,
  [anon_sym_BuildArch] = anon_sym_BuildArch,
  [anon_sym_BuildArchitectures] = anon_sym_BuildArchitectures,
  [anon_sym_BuildConflicts] = anon_sym_BuildConflicts,
  [anon_sym_BuildPreReq] = anon_sym_BuildPreReq,
  [anon_sym_BuildRequires] = anon_sym_BuildRequires,
  [anon_sym_BuildRoot] = anon_sym_BuildRoot,
  [anon_sym_BuildSystem] = anon_sym_BuildSystem,
  [anon_sym_Conflicts] = anon_sym_Conflicts,
  [anon_sym_DistTag] = anon_sym_DistTag,
  [anon_sym_Distribution] = anon_sym_Distribution,
  [anon_sym_Enhances] = anon_sym_Enhances,
  [anon_sym_Epoch] = anon_sym_Epoch,
  [anon_sym_ExcludeArch] = anon_sym_ExcludeArch,
  [anon_sym_ExclusiveArch] = anon_sym_ExclusiveArch,
  [anon_sym_ExclusiveOS] = anon_sym_ExclusiveOS,
  [anon_sym_Group] = anon_sym_Group,
  [anon_sym_License] = anon_sym_License,
  [anon_sym_ModularityLabel] = anon_sym_ModularityLabel,
  [anon_sym_Name] = anon_sym_Name,
  [anon_sym_NoPatch] = anon_sym_NoPatch,
  [anon_sym_NoSource] = anon_sym_NoSource,
  [anon_sym_Obsoletes] = anon_sym_Obsoletes,
  [anon_sym_Packager] = anon_sym_Packager,
  [anon_sym_Prereq] = anon_sym_Prereq,
  [anon_sym_Provides] = anon_sym_Provides,
  [anon_sym_Recommends] = anon_sym_Recommends,
  [anon_sym_Release] = anon_sym_Release,
  [anon_sym_Requires] = anon_sym_Requires,
  [anon_sym_SourceLicense] = anon_sym_SourceLicense,
  [anon_sym_Suggests] = anon_sym_Suggests,
  [anon_sym_Summary] = anon_sym_Summary,
  [anon_sym_Supplements] = anon_sym_Supplements,
  [anon_sym_URL] = anon_sym_URL,
  [anon_sym_Url] = anon_sym_Url,
  [anon_sym_VCS] = anon_sym_VCS,
  [anon_sym_Vendor] = anon_sym_Vendor,
  [anon_sym_Version] = anon_sym_Version,
  [aux_sym_tag_token1] = aux_sym_tag_token1,
  [aux_sym_tag_token2] = aux_sym_tag_token2,
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
  [anon_sym_AutoRequires] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BugUrl] = {
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
  [anon_sym_BuildPreReq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BuildRequires] = {
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
  [anon_sym_Conflicts] = {
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
  [anon_sym_Enhances] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Epoch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ExcludeArch] = {
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
  [anon_sym_Obsoletes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Packager] = {
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
  [anon_sym_Release] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Requires] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SourceLicense] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Suggests] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Summary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Supplements] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(254);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') SKIP(245)
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '?') ADVANCE(842);
      if (lookahead == 'A') ADVANCE(823);
      if (lookahead == 'B') ADVANCE(824);
      if (lookahead == 'C') ADVANCE(748);
      if (lookahead == 'D') ADVANCE(706);
      if (lookahead == 'E') ADVANCE(737);
      if (lookahead == 'G') ADVANCE(773);
      if (lookahead == 'L') ADVANCE(708);
      if (lookahead == 'M') ADVANCE(749);
      if (lookahead == 'N') ADVANCE(622);
      if (lookahead == 'O') ADVANCE(632);
      if (lookahead == 'P') ADVANCE(623);
      if (lookahead == 'R') ADVANCE(658);
      if (lookahead == 'S') ADVANCE(752);
      if (lookahead == 'U') ADVANCE(616);
      if (lookahead == 'V') ADVANCE(611);
      if (lookahead == '}') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(4)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(255);
      END_STATE();
    case 3:
      if (lookahead == 11) SKIP(7)
      END_STATE();
    case 4:
      if (lookahead == '\f') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '?') ADVANCE(842);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '#') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(362);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(180);
      if (lookahead == 'C') ADVANCE(165);
      if (lookahead == 'P') ADVANCE(186);
      if (lookahead == 'R') ADVANCE(74);
      if (lookahead == 'S') ADVANCE(242);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(181);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(183);
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 14:
      if (lookahead == 'L') ADVANCE(336);
      END_STATE();
    case 15:
      if (lookahead == 'L') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'P') ADVANCE(29);
      if (lookahead == 'S') ADVANCE(164);
      END_STATE();
    case 17:
      if (lookahead == 'P') ADVANCE(182);
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'R') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == 'S') ADVANCE(340);
      END_STATE();
    case 21:
      if (lookahead == 'S') ADVANCE(300);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 23:
      if (lookahead == 'U') ADVANCE(178);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(206);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(232);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'q') ADVANCE(230);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(132);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(288);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(294);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(347);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(310);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(272);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(296);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(298);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 122:
      if (lookahead == 'k') ADVANCE(32);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(284);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(155);
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(302);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 168:
      if (lookahead == 'q') ADVANCE(318);
      END_STATE();
    case 169:
      if (lookahead == 'q') ADVANCE(263);
      END_STATE();
    case 170:
      if (lookahead == 'q') ADVANCE(278);
      END_STATE();
    case 171:
      if (lookahead == 'q') ADVANCE(235);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 236:
      if (lookahead == 'v') ADVANCE(260);
      END_STATE();
    case 237:
      if (lookahead == 'v') ADVANCE(265);
      END_STATE();
    case 238:
      if (lookahead == 'v') ADVANCE(112);
      END_STATE();
    case 239:
      if (lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 240:
      if (lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 241:
      if (lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 242:
      if (lookahead == 'y') ADVANCE(210);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 244:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(607);
      END_STATE();
    case 245:
      if (eof) ADVANCE(254);
      if (lookahead == '\t') SKIP(252)
      END_STATE();
    case 246:
      if (eof) ADVANCE(254);
      if (lookahead == '\t') SKIP(253)
      END_STATE();
    case 247:
      if (eof) ADVANCE(254);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') SKIP(245)
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(823);
      if (lookahead == 'B') ADVANCE(824);
      if (lookahead == 'C') ADVANCE(748);
      if (lookahead == 'D') ADVANCE(706);
      if (lookahead == 'E') ADVANCE(737);
      if (lookahead == 'G') ADVANCE(773);
      if (lookahead == 'L') ADVANCE(708);
      if (lookahead == 'M') ADVANCE(749);
      if (lookahead == 'N') ADVANCE(622);
      if (lookahead == 'O') ADVANCE(632);
      if (lookahead == 'P') ADVANCE(623);
      if (lookahead == 'R') ADVANCE(658);
      if (lookahead == 'S') ADVANCE(752);
      if (lookahead == 'U') ADVANCE(616);
      if (lookahead == 'V') ADVANCE(611);
      if (lookahead == '}') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 248:
      if (eof) ADVANCE(254);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(360);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'A') ADVANCE(587);
      if (lookahead == 'B') ADVANCE(588);
      if (lookahead == 'C') ADVANCE(512);
      if (lookahead == 'D') ADVANCE(470);
      if (lookahead == 'E') ADVANCE(503);
      if (lookahead == 'G') ADVANCE(537);
      if (lookahead == 'L') ADVANCE(472);
      if (lookahead == 'M') ADVANCE(513);
      if (lookahead == 'N') ADVANCE(386);
      if (lookahead == 'O') ADVANCE(396);
      if (lookahead == 'P') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'S') ADVANCE(516);
      if (lookahead == 'U') ADVANCE(380);
      if (lookahead == 'V') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 249:
      if (eof) ADVANCE(254);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') SKIP(246)
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == 'A') ADVANCE(225);
      if (lookahead == 'B') ADVANCE(226);
      if (lookahead == 'C') ADVANCE(150);
      if (lookahead == 'D') ADVANCE(108);
      if (lookahead == 'E') ADVANCE(139);
      if (lookahead == 'G') ADVANCE(175);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'M') ADVANCE(151);
      if (lookahead == 'N') ADVANCE(24);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == 'P') ADVANCE(25);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(154);
      if (lookahead == 'U') ADVANCE(18);
      if (lookahead == 'V') ADVANCE(13);
      END_STATE();
    case 250:
      if (eof) ADVANCE(254);
      if (lookahead == 11) SKIP(247)
      END_STATE();
    case 251:
      if (eof) ADVANCE(254);
      if (lookahead == 11) SKIP(249)
      END_STATE();
    case 252:
      if (eof) ADVANCE(254);
      if (lookahead == '\f') SKIP(250)
      END_STATE();
    case 253:
      if (eof) ADVANCE(254);
      if (lookahead == '\f') SKIP(251)
      END_STATE();
    case 254:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_spec_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '`') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(256);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_tags_token1);
      if (lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_AutoProv);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_AutoProv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(782);
      if (lookahead == 'u') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(546);
      if (lookahead == 'u') ADVANCE(480);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_AutoReqProv);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_AutoReqProv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_AutoRequires);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_AutoRequires);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_BugUrl);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_BugUrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(585);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_BuildArchitectures);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_BuildArchitectures);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_BuildConflicts);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_BuildConflicts);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_BuildPreReq);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_BuildPreReq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_BuildRequires);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_BuildRequires);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_BuildRoot);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_BuildRoot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_BuildSystem);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_BuildSystem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DistTag);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DistTag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_Distribution);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_Distribution);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_Enhances);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_Enhances);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_Epoch);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_Epoch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_ExcludeArch);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_ExcludeArch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_ExclusiveArch);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_ExclusiveArch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_ExclusiveOS);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_ExclusiveOS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_Group);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_Group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_License);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_License);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_ModularityLabel);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_ModularityLabel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_Name);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_Name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_NoPatch);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_NoPatch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_NoSource);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_NoSource);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_Obsoletes);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_Obsoletes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_Packager);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_Packager);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_Prereq);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_Prereq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_Provides);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_Provides);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_Recommends);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_Recommends);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_Release);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_Release);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_Requires);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_Requires);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_SourceLicense);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_SourceLicense);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_Suggests);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_Suggests);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_Summary);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_Summary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_Supplements);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_Supplements);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_URL);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_URL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Url);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_Url);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_VCS);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_VCS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_Vendor);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_Vendor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_Version);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_Version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == 'L') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == '_') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(605);
      if (lookahead == '_') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '{') ADVANCE(843);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t') ADVANCE(367);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t') ADVANCE(368);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(360);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == 'A') ADVANCE(587);
      if (lookahead == 'B') ADVANCE(588);
      if (lookahead == 'C') ADVANCE(512);
      if (lookahead == 'D') ADVANCE(470);
      if (lookahead == 'E') ADVANCE(503);
      if (lookahead == 'G') ADVANCE(537);
      if (lookahead == 'L') ADVANCE(472);
      if (lookahead == 'M') ADVANCE(513);
      if (lookahead == 'N') ADVANCE(386);
      if (lookahead == 'O') ADVANCE(396);
      if (lookahead == 'P') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(427);
      if (lookahead == 'S') ADVANCE(516);
      if (lookahead == 'U') ADVANCE(380);
      if (lookahead == 'V') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 11) ADVANCE(363);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 11) ADVANCE(370);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 11) ADVANCE(371);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\f') ADVANCE(364);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\f') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\f') ADVANCE(366);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '%') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ' ') ADVANCE(362);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(542);
      if (lookahead == 'C') ADVANCE(527);
      if (lookahead == 'P') ADVANCE(548);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == 'S') ADVANCE(604);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(543);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(545);
      if (lookahead == 'O') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'C') ADVANCE(382);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'L') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'L') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(391);
      if (lookahead == 'S') ADVANCE(526);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(544);
      if (lookahead == 'R') ADVANCE(434);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'R') ADVANCE(376);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'R') ADVANCE(440);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(300);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'T') ADVANCE(389);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'U') ADVANCE(540);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'r') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'a') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'a') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'a') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'a') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'b') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'b') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'b') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(484);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(518);
      if (lookahead == 'l') ADVANCE(439);
      if (lookahead == 'q') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'd') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'd') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'd') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'd') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'd') ADVANCE(429);
      if (lookahead == 's') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(538);
      if (lookahead == 'o') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'g') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'g') ADVANCE(385);
      if (lookahead == 'i') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'g') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(497);
      if (lookahead == 'p') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'g') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'g') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'h') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'h') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'h') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'h') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'h') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'h') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(468);
      if (lookahead == 'p') ADVANCE(517);
      if (lookahead == 'x') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(591);
      if (lookahead == 'u') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'p') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'q') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'q') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'q') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'q') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 's') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 't') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 't') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 't') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 't') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 't') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 't') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'u') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'u') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'u') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'u') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'u') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'u') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'u') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'u') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'u') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'u') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'u') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'v') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'v') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'v') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'v') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'y') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'y') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'y') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '`') ADVANCE(606);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(606);
      if (lookahead == '\\') ADVANCE(244);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'A') ADVANCE(778);
      if (lookahead == 'C') ADVANCE(763);
      if (lookahead == 'P') ADVANCE(784);
      if (lookahead == 'R') ADVANCE(672);
      if (lookahead == 'S') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'A') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'A') ADVANCE(781);
      if (lookahead == 'O') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'C') ADVANCE(618);
      if (lookahead == 'e') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'L') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'L') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'P') ADVANCE(627);
      if (lookahead == 'S') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'P') ADVANCE(780);
      if (lookahead == 'R') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'R') ADVANCE(612);
      if (lookahead == 'r') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'R') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'S') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'S') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'T') ADVANCE(625);
      if (lookahead == 'r') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'U') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead == 'o') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(635);
      if (lookahead == 'r') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'b') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'b') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'b') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(720);
      if (lookahead == 't') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(675);
      if (lookahead == 'q') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead == 's') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(774);
      if (lookahead == 'o') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(769);
      if (lookahead == 'o') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'f') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'f') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(621);
      if (lookahead == 'i') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(697);
      if (lookahead == 'm') ADVANCE(733);
      if (lookahead == 'p') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'k') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(699);
      if (lookahead == 'p') ADVANCE(753);
      if (lookahead == 'x') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(654);
      if (lookahead == 'r') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(827);
      if (lookahead == 'u') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'p') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'p') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'y') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'y') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'y') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 249},
  [2] = {.lex_state = 248},
  [3] = {.lex_state = 248},
  [4] = {.lex_state = 248},
  [5] = {.lex_state = 248},
  [6] = {.lex_state = 248},
  [7] = {.lex_state = 248},
  [8] = {.lex_state = 248},
  [9] = {.lex_state = 248},
  [10] = {.lex_state = 249},
  [11] = {.lex_state = 249},
  [12] = {.lex_state = 249},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
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
    [anon_sym_AutoRequires] = ACTIONS(1),
    [anon_sym_BugUrl] = ACTIONS(1),
    [anon_sym_BuildArch] = ACTIONS(1),
    [anon_sym_BuildArchitectures] = ACTIONS(1),
    [anon_sym_BuildConflicts] = ACTIONS(1),
    [anon_sym_BuildPreReq] = ACTIONS(1),
    [anon_sym_BuildRequires] = ACTIONS(1),
    [anon_sym_BuildRoot] = ACTIONS(1),
    [anon_sym_BuildSystem] = ACTIONS(1),
    [anon_sym_Conflicts] = ACTIONS(1),
    [anon_sym_DistTag] = ACTIONS(1),
    [anon_sym_Distribution] = ACTIONS(1),
    [anon_sym_Enhances] = ACTIONS(1),
    [anon_sym_Epoch] = ACTIONS(1),
    [anon_sym_ExcludeArch] = ACTIONS(1),
    [anon_sym_ExclusiveArch] = ACTIONS(1),
    [anon_sym_ExclusiveOS] = ACTIONS(1),
    [anon_sym_Group] = ACTIONS(1),
    [anon_sym_License] = ACTIONS(1),
    [anon_sym_ModularityLabel] = ACTIONS(1),
    [anon_sym_Name] = ACTIONS(1),
    [anon_sym_NoPatch] = ACTIONS(1),
    [anon_sym_NoSource] = ACTIONS(1),
    [anon_sym_Obsoletes] = ACTIONS(1),
    [anon_sym_Packager] = ACTIONS(1),
    [anon_sym_Prereq] = ACTIONS(1),
    [anon_sym_Provides] = ACTIONS(1),
    [anon_sym_Recommends] = ACTIONS(1),
    [anon_sym_Release] = ACTIONS(1),
    [anon_sym_Requires] = ACTIONS(1),
    [anon_sym_SourceLicense] = ACTIONS(1),
    [anon_sym_Suggests] = ACTIONS(1),
    [anon_sym_Summary] = ACTIONS(1),
    [anon_sym_Supplements] = ACTIONS(1),
    [anon_sym_URL] = ACTIONS(1),
    [anon_sym_Url] = ACTIONS(1),
    [anon_sym_VCS] = ACTIONS(1),
    [anon_sym_Vendor] = ACTIONS(1),
    [anon_sym_Version] = ACTIONS(1),
    [aux_sym_tag_token1] = ACTIONS(1),
    [aux_sym_tag_token2] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_variable_name] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_spec] = STATE(21),
    [sym_preamble] = STATE(10),
    [sym_tags] = STATE(12),
    [sym_tag] = STATE(16),
    [aux_sym_spec_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_spec_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(9),
    [anon_sym_AutoReq] = ACTIONS(11),
    [anon_sym_AutoReqProv] = ACTIONS(9),
    [anon_sym_AutoRequires] = ACTIONS(9),
    [anon_sym_BugUrl] = ACTIONS(9),
    [anon_sym_BuildArch] = ACTIONS(11),
    [anon_sym_BuildArchitectures] = ACTIONS(9),
    [anon_sym_BuildConflicts] = ACTIONS(9),
    [anon_sym_BuildPreReq] = ACTIONS(9),
    [anon_sym_BuildRequires] = ACTIONS(9),
    [anon_sym_BuildRoot] = ACTIONS(9),
    [anon_sym_BuildSystem] = ACTIONS(9),
    [anon_sym_Conflicts] = ACTIONS(9),
    [anon_sym_DistTag] = ACTIONS(9),
    [anon_sym_Distribution] = ACTIONS(9),
    [anon_sym_Enhances] = ACTIONS(9),
    [anon_sym_Epoch] = ACTIONS(9),
    [anon_sym_ExcludeArch] = ACTIONS(9),
    [anon_sym_ExclusiveArch] = ACTIONS(9),
    [anon_sym_ExclusiveOS] = ACTIONS(9),
    [anon_sym_Group] = ACTIONS(9),
    [anon_sym_License] = ACTIONS(9),
    [anon_sym_ModularityLabel] = ACTIONS(9),
    [anon_sym_Name] = ACTIONS(9),
    [anon_sym_NoPatch] = ACTIONS(9),
    [anon_sym_NoSource] = ACTIONS(9),
    [anon_sym_Obsoletes] = ACTIONS(9),
    [anon_sym_Packager] = ACTIONS(9),
    [anon_sym_Prereq] = ACTIONS(9),
    [anon_sym_Provides] = ACTIONS(9),
    [anon_sym_Recommends] = ACTIONS(9),
    [anon_sym_Release] = ACTIONS(9),
    [anon_sym_Requires] = ACTIONS(9),
    [anon_sym_SourceLicense] = ACTIONS(9),
    [anon_sym_Suggests] = ACTIONS(9),
    [anon_sym_Summary] = ACTIONS(9),
    [anon_sym_Supplements] = ACTIONS(9),
    [anon_sym_URL] = ACTIONS(9),
    [anon_sym_Url] = ACTIONS(9),
    [anon_sym_VCS] = ACTIONS(9),
    [anon_sym_Vendor] = ACTIONS(9),
    [anon_sym_Version] = ACTIONS(9),
    [aux_sym_tag_token1] = ACTIONS(9),
    [aux_sym_tag_token2] = ACTIONS(11),
  },
  [2] = {
    [aux_sym__value] = STATE(3),
    [sym_string] = STATE(3),
    [sym_simple_expansion] = STATE(5),
    [sym_expansion] = STATE(5),
    [aux_sym_string_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_spec_token1] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(15),
    [anon_sym_AutoReq] = ACTIONS(15),
    [anon_sym_AutoReqProv] = ACTIONS(15),
    [anon_sym_AutoRequires] = ACTIONS(15),
    [anon_sym_BugUrl] = ACTIONS(15),
    [anon_sym_BuildArch] = ACTIONS(15),
    [anon_sym_BuildArchitectures] = ACTIONS(15),
    [anon_sym_BuildConflicts] = ACTIONS(15),
    [anon_sym_BuildPreReq] = ACTIONS(15),
    [anon_sym_BuildRequires] = ACTIONS(15),
    [anon_sym_BuildRoot] = ACTIONS(15),
    [anon_sym_BuildSystem] = ACTIONS(15),
    [anon_sym_Conflicts] = ACTIONS(15),
    [anon_sym_DistTag] = ACTIONS(15),
    [anon_sym_Distribution] = ACTIONS(15),
    [anon_sym_Enhances] = ACTIONS(15),
    [anon_sym_Epoch] = ACTIONS(15),
    [anon_sym_ExcludeArch] = ACTIONS(15),
    [anon_sym_ExclusiveArch] = ACTIONS(15),
    [anon_sym_ExclusiveOS] = ACTIONS(15),
    [anon_sym_Group] = ACTIONS(15),
    [anon_sym_License] = ACTIONS(15),
    [anon_sym_ModularityLabel] = ACTIONS(15),
    [anon_sym_Name] = ACTIONS(15),
    [anon_sym_NoPatch] = ACTIONS(15),
    [anon_sym_NoSource] = ACTIONS(15),
    [anon_sym_Obsoletes] = ACTIONS(15),
    [anon_sym_Packager] = ACTIONS(15),
    [anon_sym_Prereq] = ACTIONS(15),
    [anon_sym_Provides] = ACTIONS(15),
    [anon_sym_Recommends] = ACTIONS(15),
    [anon_sym_Release] = ACTIONS(15),
    [anon_sym_Requires] = ACTIONS(15),
    [anon_sym_SourceLicense] = ACTIONS(15),
    [anon_sym_Suggests] = ACTIONS(15),
    [anon_sym_Summary] = ACTIONS(15),
    [anon_sym_Supplements] = ACTIONS(15),
    [anon_sym_URL] = ACTIONS(15),
    [anon_sym_Url] = ACTIONS(15),
    [anon_sym_VCS] = ACTIONS(15),
    [anon_sym_Vendor] = ACTIONS(15),
    [anon_sym_Version] = ACTIONS(15),
    [aux_sym_tag_token1] = ACTIONS(15),
    [aux_sym_tag_token2] = ACTIONS(15),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(21),
    [sym_string_content] = ACTIONS(23),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(25),
  },
  [3] = {
    [aux_sym__value] = STATE(3),
    [sym_string] = STATE(3),
    [sym_simple_expansion] = STATE(5),
    [sym_expansion] = STATE(5),
    [aux_sym_string_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_spec_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(29),
    [anon_sym_AutoReq] = ACTIONS(29),
    [anon_sym_AutoReqProv] = ACTIONS(29),
    [anon_sym_AutoRequires] = ACTIONS(29),
    [anon_sym_BugUrl] = ACTIONS(29),
    [anon_sym_BuildArch] = ACTIONS(29),
    [anon_sym_BuildArchitectures] = ACTIONS(29),
    [anon_sym_BuildConflicts] = ACTIONS(29),
    [anon_sym_BuildPreReq] = ACTIONS(29),
    [anon_sym_BuildRequires] = ACTIONS(29),
    [anon_sym_BuildRoot] = ACTIONS(29),
    [anon_sym_BuildSystem] = ACTIONS(29),
    [anon_sym_Conflicts] = ACTIONS(29),
    [anon_sym_DistTag] = ACTIONS(29),
    [anon_sym_Distribution] = ACTIONS(29),
    [anon_sym_Enhances] = ACTIONS(29),
    [anon_sym_Epoch] = ACTIONS(29),
    [anon_sym_ExcludeArch] = ACTIONS(29),
    [anon_sym_ExclusiveArch] = ACTIONS(29),
    [anon_sym_ExclusiveOS] = ACTIONS(29),
    [anon_sym_Group] = ACTIONS(29),
    [anon_sym_License] = ACTIONS(29),
    [anon_sym_ModularityLabel] = ACTIONS(29),
    [anon_sym_Name] = ACTIONS(29),
    [anon_sym_NoPatch] = ACTIONS(29),
    [anon_sym_NoSource] = ACTIONS(29),
    [anon_sym_Obsoletes] = ACTIONS(29),
    [anon_sym_Packager] = ACTIONS(29),
    [anon_sym_Prereq] = ACTIONS(29),
    [anon_sym_Provides] = ACTIONS(29),
    [anon_sym_Recommends] = ACTIONS(29),
    [anon_sym_Release] = ACTIONS(29),
    [anon_sym_Requires] = ACTIONS(29),
    [anon_sym_SourceLicense] = ACTIONS(29),
    [anon_sym_Suggests] = ACTIONS(29),
    [anon_sym_Summary] = ACTIONS(29),
    [anon_sym_Supplements] = ACTIONS(29),
    [anon_sym_URL] = ACTIONS(29),
    [anon_sym_Url] = ACTIONS(29),
    [anon_sym_VCS] = ACTIONS(29),
    [anon_sym_Vendor] = ACTIONS(29),
    [anon_sym_Version] = ACTIONS(29),
    [aux_sym_tag_token1] = ACTIONS(29),
    [aux_sym_tag_token2] = ACTIONS(29),
    [sym_integer] = ACTIONS(31),
    [sym_float] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(34),
    [sym_string_content] = ACTIONS(37),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(40),
  },
  [4] = {
    [sym_simple_expansion] = STATE(4),
    [sym_expansion] = STATE(4),
    [aux_sym_string_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_spec_token1] = ACTIONS(45),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(45),
    [anon_sym_AutoReq] = ACTIONS(45),
    [anon_sym_AutoReqProv] = ACTIONS(45),
    [anon_sym_AutoRequires] = ACTIONS(45),
    [anon_sym_BugUrl] = ACTIONS(45),
    [anon_sym_BuildArch] = ACTIONS(45),
    [anon_sym_BuildArchitectures] = ACTIONS(45),
    [anon_sym_BuildConflicts] = ACTIONS(45),
    [anon_sym_BuildPreReq] = ACTIONS(45),
    [anon_sym_BuildRequires] = ACTIONS(45),
    [anon_sym_BuildRoot] = ACTIONS(45),
    [anon_sym_BuildSystem] = ACTIONS(45),
    [anon_sym_Conflicts] = ACTIONS(45),
    [anon_sym_DistTag] = ACTIONS(45),
    [anon_sym_Distribution] = ACTIONS(45),
    [anon_sym_Enhances] = ACTIONS(45),
    [anon_sym_Epoch] = ACTIONS(45),
    [anon_sym_ExcludeArch] = ACTIONS(45),
    [anon_sym_ExclusiveArch] = ACTIONS(45),
    [anon_sym_ExclusiveOS] = ACTIONS(45),
    [anon_sym_Group] = ACTIONS(45),
    [anon_sym_License] = ACTIONS(45),
    [anon_sym_ModularityLabel] = ACTIONS(45),
    [anon_sym_Name] = ACTIONS(45),
    [anon_sym_NoPatch] = ACTIONS(45),
    [anon_sym_NoSource] = ACTIONS(45),
    [anon_sym_Obsoletes] = ACTIONS(45),
    [anon_sym_Packager] = ACTIONS(45),
    [anon_sym_Prereq] = ACTIONS(45),
    [anon_sym_Provides] = ACTIONS(45),
    [anon_sym_Recommends] = ACTIONS(45),
    [anon_sym_Release] = ACTIONS(45),
    [anon_sym_Requires] = ACTIONS(45),
    [anon_sym_SourceLicense] = ACTIONS(45),
    [anon_sym_Suggests] = ACTIONS(45),
    [anon_sym_Summary] = ACTIONS(45),
    [anon_sym_Supplements] = ACTIONS(45),
    [anon_sym_URL] = ACTIONS(45),
    [anon_sym_Url] = ACTIONS(45),
    [anon_sym_VCS] = ACTIONS(45),
    [anon_sym_Vendor] = ACTIONS(45),
    [anon_sym_Version] = ACTIONS(45),
    [aux_sym_tag_token1] = ACTIONS(45),
    [aux_sym_tag_token2] = ACTIONS(45),
    [sym_integer] = ACTIONS(45),
    [sym_float] = ACTIONS(45),
    [anon_sym_PERCENT] = ACTIONS(47),
    [sym_string_content] = ACTIONS(50),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(53),
  },
  [5] = {
    [sym_simple_expansion] = STATE(4),
    [sym_expansion] = STATE(4),
    [aux_sym_string_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(56),
    [aux_sym_spec_token1] = ACTIONS(58),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(58),
    [anon_sym_AutoReq] = ACTIONS(58),
    [anon_sym_AutoReqProv] = ACTIONS(58),
    [anon_sym_AutoRequires] = ACTIONS(58),
    [anon_sym_BugUrl] = ACTIONS(58),
    [anon_sym_BuildArch] = ACTIONS(58),
    [anon_sym_BuildArchitectures] = ACTIONS(58),
    [anon_sym_BuildConflicts] = ACTIONS(58),
    [anon_sym_BuildPreReq] = ACTIONS(58),
    [anon_sym_BuildRequires] = ACTIONS(58),
    [anon_sym_BuildRoot] = ACTIONS(58),
    [anon_sym_BuildSystem] = ACTIONS(58),
    [anon_sym_Conflicts] = ACTIONS(58),
    [anon_sym_DistTag] = ACTIONS(58),
    [anon_sym_Distribution] = ACTIONS(58),
    [anon_sym_Enhances] = ACTIONS(58),
    [anon_sym_Epoch] = ACTIONS(58),
    [anon_sym_ExcludeArch] = ACTIONS(58),
    [anon_sym_ExclusiveArch] = ACTIONS(58),
    [anon_sym_ExclusiveOS] = ACTIONS(58),
    [anon_sym_Group] = ACTIONS(58),
    [anon_sym_License] = ACTIONS(58),
    [anon_sym_ModularityLabel] = ACTIONS(58),
    [anon_sym_Name] = ACTIONS(58),
    [anon_sym_NoPatch] = ACTIONS(58),
    [anon_sym_NoSource] = ACTIONS(58),
    [anon_sym_Obsoletes] = ACTIONS(58),
    [anon_sym_Packager] = ACTIONS(58),
    [anon_sym_Prereq] = ACTIONS(58),
    [anon_sym_Provides] = ACTIONS(58),
    [anon_sym_Recommends] = ACTIONS(58),
    [anon_sym_Release] = ACTIONS(58),
    [anon_sym_Requires] = ACTIONS(58),
    [anon_sym_SourceLicense] = ACTIONS(58),
    [anon_sym_Suggests] = ACTIONS(58),
    [anon_sym_Summary] = ACTIONS(58),
    [anon_sym_Supplements] = ACTIONS(58),
    [anon_sym_URL] = ACTIONS(58),
    [anon_sym_Url] = ACTIONS(58),
    [anon_sym_VCS] = ACTIONS(58),
    [anon_sym_Vendor] = ACTIONS(58),
    [anon_sym_Version] = ACTIONS(58),
    [aux_sym_tag_token1] = ACTIONS(58),
    [aux_sym_tag_token2] = ACTIONS(58),
    [sym_integer] = ACTIONS(58),
    [sym_float] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(21),
    [sym_string_content] = ACTIONS(60),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(25),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [aux_sym_spec_token1] = ACTIONS(64),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(64),
    [anon_sym_AutoReq] = ACTIONS(64),
    [anon_sym_AutoReqProv] = ACTIONS(64),
    [anon_sym_AutoRequires] = ACTIONS(64),
    [anon_sym_BugUrl] = ACTIONS(64),
    [anon_sym_BuildArch] = ACTIONS(64),
    [anon_sym_BuildArchitectures] = ACTIONS(64),
    [anon_sym_BuildConflicts] = ACTIONS(64),
    [anon_sym_BuildPreReq] = ACTIONS(64),
    [anon_sym_BuildRequires] = ACTIONS(64),
    [anon_sym_BuildRoot] = ACTIONS(64),
    [anon_sym_BuildSystem] = ACTIONS(64),
    [anon_sym_Conflicts] = ACTIONS(64),
    [anon_sym_DistTag] = ACTIONS(64),
    [anon_sym_Distribution] = ACTIONS(64),
    [anon_sym_Enhances] = ACTIONS(64),
    [anon_sym_Epoch] = ACTIONS(64),
    [anon_sym_ExcludeArch] = ACTIONS(64),
    [anon_sym_ExclusiveArch] = ACTIONS(64),
    [anon_sym_ExclusiveOS] = ACTIONS(64),
    [anon_sym_Group] = ACTIONS(64),
    [anon_sym_License] = ACTIONS(64),
    [anon_sym_ModularityLabel] = ACTIONS(64),
    [anon_sym_Name] = ACTIONS(64),
    [anon_sym_NoPatch] = ACTIONS(64),
    [anon_sym_NoSource] = ACTIONS(64),
    [anon_sym_Obsoletes] = ACTIONS(64),
    [anon_sym_Packager] = ACTIONS(64),
    [anon_sym_Prereq] = ACTIONS(64),
    [anon_sym_Provides] = ACTIONS(64),
    [anon_sym_Recommends] = ACTIONS(64),
    [anon_sym_Release] = ACTIONS(64),
    [anon_sym_Requires] = ACTIONS(64),
    [anon_sym_SourceLicense] = ACTIONS(64),
    [anon_sym_Suggests] = ACTIONS(64),
    [anon_sym_Summary] = ACTIONS(64),
    [anon_sym_Supplements] = ACTIONS(64),
    [anon_sym_URL] = ACTIONS(64),
    [anon_sym_Url] = ACTIONS(64),
    [anon_sym_VCS] = ACTIONS(64),
    [anon_sym_Vendor] = ACTIONS(64),
    [anon_sym_Version] = ACTIONS(64),
    [aux_sym_tag_token1] = ACTIONS(64),
    [aux_sym_tag_token2] = ACTIONS(64),
    [sym_integer] = ACTIONS(64),
    [sym_float] = ACTIONS(64),
    [anon_sym_PERCENT] = ACTIONS(64),
    [sym_string_content] = ACTIONS(64),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(64),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [aux_sym_spec_token1] = ACTIONS(68),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(68),
    [anon_sym_AutoReq] = ACTIONS(68),
    [anon_sym_AutoReqProv] = ACTIONS(68),
    [anon_sym_AutoRequires] = ACTIONS(68),
    [anon_sym_BugUrl] = ACTIONS(68),
    [anon_sym_BuildArch] = ACTIONS(68),
    [anon_sym_BuildArchitectures] = ACTIONS(68),
    [anon_sym_BuildConflicts] = ACTIONS(68),
    [anon_sym_BuildPreReq] = ACTIONS(68),
    [anon_sym_BuildRequires] = ACTIONS(68),
    [anon_sym_BuildRoot] = ACTIONS(68),
    [anon_sym_BuildSystem] = ACTIONS(68),
    [anon_sym_Conflicts] = ACTIONS(68),
    [anon_sym_DistTag] = ACTIONS(68),
    [anon_sym_Distribution] = ACTIONS(68),
    [anon_sym_Enhances] = ACTIONS(68),
    [anon_sym_Epoch] = ACTIONS(68),
    [anon_sym_ExcludeArch] = ACTIONS(68),
    [anon_sym_ExclusiveArch] = ACTIONS(68),
    [anon_sym_ExclusiveOS] = ACTIONS(68),
    [anon_sym_Group] = ACTIONS(68),
    [anon_sym_License] = ACTIONS(68),
    [anon_sym_ModularityLabel] = ACTIONS(68),
    [anon_sym_Name] = ACTIONS(68),
    [anon_sym_NoPatch] = ACTIONS(68),
    [anon_sym_NoSource] = ACTIONS(68),
    [anon_sym_Obsoletes] = ACTIONS(68),
    [anon_sym_Packager] = ACTIONS(68),
    [anon_sym_Prereq] = ACTIONS(68),
    [anon_sym_Provides] = ACTIONS(68),
    [anon_sym_Recommends] = ACTIONS(68),
    [anon_sym_Release] = ACTIONS(68),
    [anon_sym_Requires] = ACTIONS(68),
    [anon_sym_SourceLicense] = ACTIONS(68),
    [anon_sym_Suggests] = ACTIONS(68),
    [anon_sym_Summary] = ACTIONS(68),
    [anon_sym_Supplements] = ACTIONS(68),
    [anon_sym_URL] = ACTIONS(68),
    [anon_sym_Url] = ACTIONS(68),
    [anon_sym_VCS] = ACTIONS(68),
    [anon_sym_Vendor] = ACTIONS(68),
    [anon_sym_Version] = ACTIONS(68),
    [aux_sym_tag_token1] = ACTIONS(68),
    [aux_sym_tag_token2] = ACTIONS(68),
    [sym_integer] = ACTIONS(68),
    [sym_float] = ACTIONS(68),
    [anon_sym_PERCENT] = ACTIONS(68),
    [sym_string_content] = ACTIONS(68),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(68),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_spec_token1] = ACTIONS(45),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(45),
    [anon_sym_AutoReq] = ACTIONS(45),
    [anon_sym_AutoReqProv] = ACTIONS(45),
    [anon_sym_AutoRequires] = ACTIONS(45),
    [anon_sym_BugUrl] = ACTIONS(45),
    [anon_sym_BuildArch] = ACTIONS(45),
    [anon_sym_BuildArchitectures] = ACTIONS(45),
    [anon_sym_BuildConflicts] = ACTIONS(45),
    [anon_sym_BuildPreReq] = ACTIONS(45),
    [anon_sym_BuildRequires] = ACTIONS(45),
    [anon_sym_BuildRoot] = ACTIONS(45),
    [anon_sym_BuildSystem] = ACTIONS(45),
    [anon_sym_Conflicts] = ACTIONS(45),
    [anon_sym_DistTag] = ACTIONS(45),
    [anon_sym_Distribution] = ACTIONS(45),
    [anon_sym_Enhances] = ACTIONS(45),
    [anon_sym_Epoch] = ACTIONS(45),
    [anon_sym_ExcludeArch] = ACTIONS(45),
    [anon_sym_ExclusiveArch] = ACTIONS(45),
    [anon_sym_ExclusiveOS] = ACTIONS(45),
    [anon_sym_Group] = ACTIONS(45),
    [anon_sym_License] = ACTIONS(45),
    [anon_sym_ModularityLabel] = ACTIONS(45),
    [anon_sym_Name] = ACTIONS(45),
    [anon_sym_NoPatch] = ACTIONS(45),
    [anon_sym_NoSource] = ACTIONS(45),
    [anon_sym_Obsoletes] = ACTIONS(45),
    [anon_sym_Packager] = ACTIONS(45),
    [anon_sym_Prereq] = ACTIONS(45),
    [anon_sym_Provides] = ACTIONS(45),
    [anon_sym_Recommends] = ACTIONS(45),
    [anon_sym_Release] = ACTIONS(45),
    [anon_sym_Requires] = ACTIONS(45),
    [anon_sym_SourceLicense] = ACTIONS(45),
    [anon_sym_Suggests] = ACTIONS(45),
    [anon_sym_Summary] = ACTIONS(45),
    [anon_sym_Supplements] = ACTIONS(45),
    [anon_sym_URL] = ACTIONS(45),
    [anon_sym_Url] = ACTIONS(45),
    [anon_sym_VCS] = ACTIONS(45),
    [anon_sym_Vendor] = ACTIONS(45),
    [anon_sym_Version] = ACTIONS(45),
    [aux_sym_tag_token1] = ACTIONS(45),
    [aux_sym_tag_token2] = ACTIONS(45),
    [sym_integer] = ACTIONS(45),
    [sym_float] = ACTIONS(45),
    [anon_sym_PERCENT] = ACTIONS(45),
    [sym_string_content] = ACTIONS(45),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(45),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [aux_sym_spec_token1] = ACTIONS(72),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(72),
    [anon_sym_AutoReq] = ACTIONS(72),
    [anon_sym_AutoReqProv] = ACTIONS(72),
    [anon_sym_AutoRequires] = ACTIONS(72),
    [anon_sym_BugUrl] = ACTIONS(72),
    [anon_sym_BuildArch] = ACTIONS(72),
    [anon_sym_BuildArchitectures] = ACTIONS(72),
    [anon_sym_BuildConflicts] = ACTIONS(72),
    [anon_sym_BuildPreReq] = ACTIONS(72),
    [anon_sym_BuildRequires] = ACTIONS(72),
    [anon_sym_BuildRoot] = ACTIONS(72),
    [anon_sym_BuildSystem] = ACTIONS(72),
    [anon_sym_Conflicts] = ACTIONS(72),
    [anon_sym_DistTag] = ACTIONS(72),
    [anon_sym_Distribution] = ACTIONS(72),
    [anon_sym_Enhances] = ACTIONS(72),
    [anon_sym_Epoch] = ACTIONS(72),
    [anon_sym_ExcludeArch] = ACTIONS(72),
    [anon_sym_ExclusiveArch] = ACTIONS(72),
    [anon_sym_ExclusiveOS] = ACTIONS(72),
    [anon_sym_Group] = ACTIONS(72),
    [anon_sym_License] = ACTIONS(72),
    [anon_sym_ModularityLabel] = ACTIONS(72),
    [anon_sym_Name] = ACTIONS(72),
    [anon_sym_NoPatch] = ACTIONS(72),
    [anon_sym_NoSource] = ACTIONS(72),
    [anon_sym_Obsoletes] = ACTIONS(72),
    [anon_sym_Packager] = ACTIONS(72),
    [anon_sym_Prereq] = ACTIONS(72),
    [anon_sym_Provides] = ACTIONS(72),
    [anon_sym_Recommends] = ACTIONS(72),
    [anon_sym_Release] = ACTIONS(72),
    [anon_sym_Requires] = ACTIONS(72),
    [anon_sym_SourceLicense] = ACTIONS(72),
    [anon_sym_Suggests] = ACTIONS(72),
    [anon_sym_Summary] = ACTIONS(72),
    [anon_sym_Supplements] = ACTIONS(72),
    [anon_sym_URL] = ACTIONS(72),
    [anon_sym_Url] = ACTIONS(72),
    [anon_sym_VCS] = ACTIONS(72),
    [anon_sym_Vendor] = ACTIONS(72),
    [anon_sym_Version] = ACTIONS(72),
    [aux_sym_tag_token1] = ACTIONS(72),
    [aux_sym_tag_token2] = ACTIONS(72),
    [sym_integer] = ACTIONS(72),
    [sym_float] = ACTIONS(72),
    [anon_sym_PERCENT] = ACTIONS(72),
    [sym_string_content] = ACTIONS(72),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(72),
  },
  [10] = {
    [sym_preamble] = STATE(11),
    [sym_tags] = STATE(12),
    [sym_tag] = STATE(16),
    [aux_sym_spec_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(74),
    [aux_sym_spec_token1] = ACTIONS(76),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(9),
    [anon_sym_AutoReq] = ACTIONS(11),
    [anon_sym_AutoReqProv] = ACTIONS(9),
    [anon_sym_AutoRequires] = ACTIONS(9),
    [anon_sym_BugUrl] = ACTIONS(9),
    [anon_sym_BuildArch] = ACTIONS(11),
    [anon_sym_BuildArchitectures] = ACTIONS(9),
    [anon_sym_BuildConflicts] = ACTIONS(9),
    [anon_sym_BuildPreReq] = ACTIONS(9),
    [anon_sym_BuildRequires] = ACTIONS(9),
    [anon_sym_BuildRoot] = ACTIONS(9),
    [anon_sym_BuildSystem] = ACTIONS(9),
    [anon_sym_Conflicts] = ACTIONS(9),
    [anon_sym_DistTag] = ACTIONS(9),
    [anon_sym_Distribution] = ACTIONS(9),
    [anon_sym_Enhances] = ACTIONS(9),
    [anon_sym_Epoch] = ACTIONS(9),
    [anon_sym_ExcludeArch] = ACTIONS(9),
    [anon_sym_ExclusiveArch] = ACTIONS(9),
    [anon_sym_ExclusiveOS] = ACTIONS(9),
    [anon_sym_Group] = ACTIONS(9),
    [anon_sym_License] = ACTIONS(9),
    [anon_sym_ModularityLabel] = ACTIONS(9),
    [anon_sym_Name] = ACTIONS(9),
    [anon_sym_NoPatch] = ACTIONS(9),
    [anon_sym_NoSource] = ACTIONS(9),
    [anon_sym_Obsoletes] = ACTIONS(9),
    [anon_sym_Packager] = ACTIONS(9),
    [anon_sym_Prereq] = ACTIONS(9),
    [anon_sym_Provides] = ACTIONS(9),
    [anon_sym_Recommends] = ACTIONS(9),
    [anon_sym_Release] = ACTIONS(9),
    [anon_sym_Requires] = ACTIONS(9),
    [anon_sym_SourceLicense] = ACTIONS(9),
    [anon_sym_Suggests] = ACTIONS(9),
    [anon_sym_Summary] = ACTIONS(9),
    [anon_sym_Supplements] = ACTIONS(9),
    [anon_sym_URL] = ACTIONS(9),
    [anon_sym_Url] = ACTIONS(9),
    [anon_sym_VCS] = ACTIONS(9),
    [anon_sym_Vendor] = ACTIONS(9),
    [anon_sym_Version] = ACTIONS(9),
    [aux_sym_tag_token1] = ACTIONS(9),
    [aux_sym_tag_token2] = ACTIONS(11),
  },
  [11] = {
    [sym_preamble] = STATE(11),
    [sym_tags] = STATE(12),
    [sym_tag] = STATE(16),
    [aux_sym_spec_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(78),
    [aux_sym_spec_token1] = ACTIONS(80),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(83),
    [anon_sym_AutoReq] = ACTIONS(86),
    [anon_sym_AutoReqProv] = ACTIONS(83),
    [anon_sym_AutoRequires] = ACTIONS(83),
    [anon_sym_BugUrl] = ACTIONS(83),
    [anon_sym_BuildArch] = ACTIONS(86),
    [anon_sym_BuildArchitectures] = ACTIONS(83),
    [anon_sym_BuildConflicts] = ACTIONS(83),
    [anon_sym_BuildPreReq] = ACTIONS(83),
    [anon_sym_BuildRequires] = ACTIONS(83),
    [anon_sym_BuildRoot] = ACTIONS(83),
    [anon_sym_BuildSystem] = ACTIONS(83),
    [anon_sym_Conflicts] = ACTIONS(83),
    [anon_sym_DistTag] = ACTIONS(83),
    [anon_sym_Distribution] = ACTIONS(83),
    [anon_sym_Enhances] = ACTIONS(83),
    [anon_sym_Epoch] = ACTIONS(83),
    [anon_sym_ExcludeArch] = ACTIONS(83),
    [anon_sym_ExclusiveArch] = ACTIONS(83),
    [anon_sym_ExclusiveOS] = ACTIONS(83),
    [anon_sym_Group] = ACTIONS(83),
    [anon_sym_License] = ACTIONS(83),
    [anon_sym_ModularityLabel] = ACTIONS(83),
    [anon_sym_Name] = ACTIONS(83),
    [anon_sym_NoPatch] = ACTIONS(83),
    [anon_sym_NoSource] = ACTIONS(83),
    [anon_sym_Obsoletes] = ACTIONS(83),
    [anon_sym_Packager] = ACTIONS(83),
    [anon_sym_Prereq] = ACTIONS(83),
    [anon_sym_Provides] = ACTIONS(83),
    [anon_sym_Recommends] = ACTIONS(83),
    [anon_sym_Release] = ACTIONS(83),
    [anon_sym_Requires] = ACTIONS(83),
    [anon_sym_SourceLicense] = ACTIONS(83),
    [anon_sym_Suggests] = ACTIONS(83),
    [anon_sym_Summary] = ACTIONS(83),
    [anon_sym_Supplements] = ACTIONS(83),
    [anon_sym_URL] = ACTIONS(83),
    [anon_sym_Url] = ACTIONS(83),
    [anon_sym_VCS] = ACTIONS(83),
    [anon_sym_Vendor] = ACTIONS(83),
    [anon_sym_Version] = ACTIONS(83),
    [aux_sym_tag_token1] = ACTIONS(83),
    [aux_sym_tag_token2] = ACTIONS(86),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [aux_sym_spec_token1] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(89),
    [anon_sym_AutoReq] = ACTIONS(91),
    [anon_sym_AutoReqProv] = ACTIONS(89),
    [anon_sym_AutoRequires] = ACTIONS(89),
    [anon_sym_BugUrl] = ACTIONS(89),
    [anon_sym_BuildArch] = ACTIONS(91),
    [anon_sym_BuildArchitectures] = ACTIONS(89),
    [anon_sym_BuildConflicts] = ACTIONS(89),
    [anon_sym_BuildPreReq] = ACTIONS(89),
    [anon_sym_BuildRequires] = ACTIONS(89),
    [anon_sym_BuildRoot] = ACTIONS(89),
    [anon_sym_BuildSystem] = ACTIONS(89),
    [anon_sym_Conflicts] = ACTIONS(89),
    [anon_sym_DistTag] = ACTIONS(89),
    [anon_sym_Distribution] = ACTIONS(89),
    [anon_sym_Enhances] = ACTIONS(89),
    [anon_sym_Epoch] = ACTIONS(89),
    [anon_sym_ExcludeArch] = ACTIONS(89),
    [anon_sym_ExclusiveArch] = ACTIONS(89),
    [anon_sym_ExclusiveOS] = ACTIONS(89),
    [anon_sym_Group] = ACTIONS(89),
    [anon_sym_License] = ACTIONS(89),
    [anon_sym_ModularityLabel] = ACTIONS(89),
    [anon_sym_Name] = ACTIONS(89),
    [anon_sym_NoPatch] = ACTIONS(89),
    [anon_sym_NoSource] = ACTIONS(89),
    [anon_sym_Obsoletes] = ACTIONS(89),
    [anon_sym_Packager] = ACTIONS(89),
    [anon_sym_Prereq] = ACTIONS(89),
    [anon_sym_Provides] = ACTIONS(89),
    [anon_sym_Recommends] = ACTIONS(89),
    [anon_sym_Release] = ACTIONS(89),
    [anon_sym_Requires] = ACTIONS(89),
    [anon_sym_SourceLicense] = ACTIONS(89),
    [anon_sym_Suggests] = ACTIONS(89),
    [anon_sym_Summary] = ACTIONS(89),
    [anon_sym_Supplements] = ACTIONS(89),
    [anon_sym_URL] = ACTIONS(89),
    [anon_sym_Url] = ACTIONS(89),
    [anon_sym_VCS] = ACTIONS(89),
    [anon_sym_Vendor] = ACTIONS(89),
    [anon_sym_Version] = ACTIONS(89),
    [aux_sym_tag_token1] = ACTIONS(89),
    [aux_sym_tag_token2] = ACTIONS(91),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      sym_string_content,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(93), 2,
      sym_integer,
      sym_float,
    STATE(2), 2,
      aux_sym__value,
      sym_string,
    STATE(5), 3,
      sym_simple_expansion,
      sym_expansion,
      aux_sym_string_repeat1,
  [26] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_string_content,
    ACTIONS(97), 1,
      sym_variable_name,
  [36] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_variable_name,
    ACTIONS(101), 1,
      anon_sym_QMARK,
  [46] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_tags_token1,
  [53] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
  [60] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_variable_name,
  [67] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_tags_token1,
  [74] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
  [81] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 26,
  [SMALL_STATE(15)] = 36,
  [SMALL_STATE(16)] = 46,
  [SMALL_STATE(17)] = 53,
  [SMALL_STATE(18)] = 60,
  [SMALL_STATE(19)] = 67,
  [SMALL_STATE(20)] = 74,
  [SMALL_STATE(21)] = 81,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 3, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags, 3, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(3),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(14),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(15),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(14),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(4),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(15),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expansion, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expansion, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(11),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(19),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(19),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [113] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
