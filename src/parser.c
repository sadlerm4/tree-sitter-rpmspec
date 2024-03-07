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
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_spec_token1 = 1,
  sym_comment = 2,
  aux_sym_variable_token1 = 3,
  anon_sym_AutoProv = 4,
  anon_sym_AutoReq = 5,
  anon_sym_AutoReqProv = 6,
  anon_sym_AutoRequires = 7,
  anon_sym_BuildArch = 8,
  anon_sym_BuildArchitectures = 9,
  anon_sym_BuildConflicts = 10,
  anon_sym_BuildPreReq = 11,
  anon_sym_BuildRequires = 12,
  anon_sym_BuildRoot = 13,
  anon_sym_Conflicts = 14,
  anon_sym_Distribution = 15,
  anon_sym_Enhances = 16,
  anon_sym_Epoch = 17,
  anon_sym_ExcludeArch = 18,
  anon_sym_ExclusiveArch = 19,
  anon_sym_ExclusiveOS = 20,
  anon_sym_Group = 21,
  anon_sym_License = 22,
  anon_sym_Name = 23,
  anon_sym_Obsoletes = 24,
  anon_sym_Packager = 25,
  anon_sym_Prereq = 26,
  anon_sym_Provides = 27,
  anon_sym_Recommends = 28,
  anon_sym_Release = 29,
  anon_sym_Requires = 30,
  anon_sym_Suggests = 31,
  anon_sym_Summary = 32,
  anon_sym_Supplements = 33,
  anon_sym_URL = 34,
  anon_sym_Url = 35,
  anon_sym_Vendor = 36,
  anon_sym_Version = 37,
  aux_sym_name_token1 = 38,
  aux_sym_name_token2 = 39,
  sym_integer = 40,
  sym_float = 41,
  anon_sym_BSLASH = 42,
  sym_string_content = 43,
  aux_sym__quoted_string_token1 = 44,
  anon_sym_PERCENT = 45,
  sym_variable_name = 46,
  anon_sym_QMARK = 47,
  anon_sym_PERCENT_LBRACE = 48,
  anon_sym_RBRACE = 49,
  sym_spec = 50,
  sym_preamble = 51,
  sym_variable = 52,
  sym_name = 53,
  sym__value = 54,
  sym_string = 55,
  sym__quoted_string = 56,
  sym__unquoted_string = 57,
  sym_simple_expansion = 58,
  sym_expansion = 59,
  aux_sym_spec_repeat1 = 60,
  aux_sym__quoted_string_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_spec_token1] = "spec_token1",
  [sym_comment] = "comment",
  [aux_sym_variable_token1] = "variable_token1",
  [anon_sym_AutoProv] = "AutoProv",
  [anon_sym_AutoReq] = "AutoReq",
  [anon_sym_AutoReqProv] = "AutoReqProv",
  [anon_sym_AutoRequires] = "AutoRequires",
  [anon_sym_BuildArch] = "BuildArch",
  [anon_sym_BuildArchitectures] = "BuildArchitectures",
  [anon_sym_BuildConflicts] = "BuildConflicts",
  [anon_sym_BuildPreReq] = "BuildPreReq",
  [anon_sym_BuildRequires] = "BuildRequires",
  [anon_sym_BuildRoot] = "BuildRoot",
  [anon_sym_Conflicts] = "Conflicts",
  [anon_sym_Distribution] = "Distribution",
  [anon_sym_Enhances] = "Enhances",
  [anon_sym_Epoch] = "Epoch",
  [anon_sym_ExcludeArch] = "ExcludeArch",
  [anon_sym_ExclusiveArch] = "ExclusiveArch",
  [anon_sym_ExclusiveOS] = "ExclusiveOS",
  [anon_sym_Group] = "Group",
  [anon_sym_License] = "License",
  [anon_sym_Name] = "Name",
  [anon_sym_Obsoletes] = "Obsoletes",
  [anon_sym_Packager] = "Packager",
  [anon_sym_Prereq] = "Prereq",
  [anon_sym_Provides] = "Provides",
  [anon_sym_Recommends] = "Recommends",
  [anon_sym_Release] = "Release",
  [anon_sym_Requires] = "Requires",
  [anon_sym_Suggests] = "Suggests",
  [anon_sym_Summary] = "Summary",
  [anon_sym_Supplements] = "Supplements",
  [anon_sym_URL] = "URL",
  [anon_sym_Url] = "Url",
  [anon_sym_Vendor] = "Vendor",
  [anon_sym_Version] = "Version",
  [aux_sym_name_token1] = "name_token1",
  [aux_sym_name_token2] = "name_token2",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_BSLASH] = "\\",
  [sym_string_content] = "string_content",
  [aux_sym__quoted_string_token1] = "_quoted_string_token1",
  [anon_sym_PERCENT] = "%",
  [sym_variable_name] = "variable_name",
  [anon_sym_QMARK] = "special_variable_name",
  [anon_sym_PERCENT_LBRACE] = "%{",
  [anon_sym_RBRACE] = "}",
  [sym_spec] = "spec",
  [sym_preamble] = "preamble",
  [sym_variable] = "variable",
  [sym_name] = "name",
  [sym__value] = "_value",
  [sym_string] = "string",
  [sym__quoted_string] = "_quoted_string",
  [sym__unquoted_string] = "_unquoted_string",
  [sym_simple_expansion] = "simple_expansion",
  [sym_expansion] = "expansion",
  [aux_sym_spec_repeat1] = "spec_repeat1",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_spec_token1] = aux_sym_spec_token1,
  [sym_comment] = sym_comment,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [anon_sym_AutoProv] = anon_sym_AutoProv,
  [anon_sym_AutoReq] = anon_sym_AutoReq,
  [anon_sym_AutoReqProv] = anon_sym_AutoReqProv,
  [anon_sym_AutoRequires] = anon_sym_AutoRequires,
  [anon_sym_BuildArch] = anon_sym_BuildArch,
  [anon_sym_BuildArchitectures] = anon_sym_BuildArchitectures,
  [anon_sym_BuildConflicts] = anon_sym_BuildConflicts,
  [anon_sym_BuildPreReq] = anon_sym_BuildPreReq,
  [anon_sym_BuildRequires] = anon_sym_BuildRequires,
  [anon_sym_BuildRoot] = anon_sym_BuildRoot,
  [anon_sym_Conflicts] = anon_sym_Conflicts,
  [anon_sym_Distribution] = anon_sym_Distribution,
  [anon_sym_Enhances] = anon_sym_Enhances,
  [anon_sym_Epoch] = anon_sym_Epoch,
  [anon_sym_ExcludeArch] = anon_sym_ExcludeArch,
  [anon_sym_ExclusiveArch] = anon_sym_ExclusiveArch,
  [anon_sym_ExclusiveOS] = anon_sym_ExclusiveOS,
  [anon_sym_Group] = anon_sym_Group,
  [anon_sym_License] = anon_sym_License,
  [anon_sym_Name] = anon_sym_Name,
  [anon_sym_Obsoletes] = anon_sym_Obsoletes,
  [anon_sym_Packager] = anon_sym_Packager,
  [anon_sym_Prereq] = anon_sym_Prereq,
  [anon_sym_Provides] = anon_sym_Provides,
  [anon_sym_Recommends] = anon_sym_Recommends,
  [anon_sym_Release] = anon_sym_Release,
  [anon_sym_Requires] = anon_sym_Requires,
  [anon_sym_Suggests] = anon_sym_Suggests,
  [anon_sym_Summary] = anon_sym_Summary,
  [anon_sym_Supplements] = anon_sym_Supplements,
  [anon_sym_URL] = anon_sym_URL,
  [anon_sym_Url] = anon_sym_Url,
  [anon_sym_Vendor] = anon_sym_Vendor,
  [anon_sym_Version] = anon_sym_Version,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [aux_sym_name_token2] = aux_sym_name_token2,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_string_content] = sym_string_content,
  [aux_sym__quoted_string_token1] = aux_sym__quoted_string_token1,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_variable_name] = sym_variable_name,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_PERCENT_LBRACE] = anon_sym_PERCENT_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_spec] = sym_spec,
  [sym_preamble] = sym_preamble,
  [sym_variable] = sym_variable,
  [sym_name] = sym_name,
  [sym__value] = sym__value,
  [sym_string] = sym_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym__unquoted_string] = sym__unquoted_string,
  [sym_simple_expansion] = sym_simple_expansion,
  [sym_expansion] = sym_expansion,
  [aux_sym_spec_repeat1] = aux_sym_spec_repeat1,
  [aux_sym__quoted_string_repeat1] = aux_sym__quoted_string_repeat1,
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
  [aux_sym_variable_token1] = {
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
  [anon_sym_Conflicts] = {
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
  [anon_sym_Name] = {
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
  [anon_sym_Vendor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Version] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_name_token2] = {
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
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = true,
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__unquoted_string] = {
    .visible = false,
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
  [aux_sym__quoted_string_repeat1] = {
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
  [22] = 10,
  [23] = 8,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(212);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') SKIP(205)
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '%') ADVANCE(317);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '?') ADVANCE(511);
      if (lookahead == 'A') ADVANCE(496);
      if (lookahead == 'B') ADVANCE(499);
      if (lookahead == 'C') ADVANCE(430);
      if (lookahead == 'D') ADVANCE(394);
      if (lookahead == 'E') ADVANCE(420);
      if (lookahead == 'G') ADVANCE(453);
      if (lookahead == 'L') ADVANCE(396);
      if (lookahead == 'N') ADVANCE(326);
      if (lookahead == 'O') ADVANCE(332);
      if (lookahead == 'P') ADVANCE(327);
      if (lookahead == 'R') ADVANCE(353);
      if (lookahead == 'S') ADVANCE(433);
      if (lookahead == 'U') ADVANCE(323);
      if (lookahead == 'V') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(296);
      if (lookahead == '}') ADVANCE(513);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(4)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(213);
      END_STATE();
    case 3:
      if (lookahead == 11) SKIP(7)
      END_STATE();
    case 4:
      if (lookahead == '\f') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(217);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '%') ADVANCE(317);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '?') ADVANCE(511);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(298);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '%') ADVANCE(317);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(299);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '?') ADVANCE(511);
      if (lookahead == '\\') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(300);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '?') ADVANCE(511);
      if (lookahead == '\\') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(148);
      if (lookahead == 'C') ADVANCE(136);
      if (lookahead == 'P') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(150);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(152);
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'L') ADVANCE(278);
      END_STATE();
    case 15:
      if (lookahead == 'P') ADVANCE(151);
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == 'R') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 17:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == 'S') ADVANCE(250);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(174);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(195);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'q') ADVANCE(194);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(106);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(244);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(287);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(227);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(246);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(248);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 100:
      if (lookahead == 'k') ADVANCE(23);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 139:
      if (lookahead == 'q') ADVANCE(262);
      END_STATE();
    case 140:
      if (lookahead == 'q') ADVANCE(221);
      END_STATE();
    case 141:
      if (lookahead == 'q') ADVANCE(232);
      END_STATE();
    case 142:
      if (lookahead == 'q') ADVANCE(197);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 198:
      if (lookahead == 'v') ADVANCE(218);
      END_STATE();
    case 199:
      if (lookahead == 'v') ADVANCE(222);
      END_STATE();
    case 200:
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 201:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 202:
      if (lookahead == 'y') ADVANCE(274);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 204:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(314);
      if (lookahead == '\r') ADVANCE(315);
      END_STATE();
    case 205:
      if (eof) ADVANCE(212);
      if (lookahead == '\t') SKIP(210)
      END_STATE();
    case 206:
      if (eof) ADVANCE(212);
      if (lookahead == '\t') SKIP(211)
      END_STATE();
    case 207:
      if (eof) ADVANCE(212);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') SKIP(206)
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '%') ADVANCE(317);
      if (lookahead == 'A') ADVANCE(189);
      if (lookahead == 'B') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(123);
      if (lookahead == 'D') ADVANCE(87);
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == 'G') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(89);
      if (lookahead == 'N') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(25);
      if (lookahead == 'P') ADVANCE(20);
      if (lookahead == 'R') ADVANCE(46);
      if (lookahead == 'S') ADVANCE(126);
      if (lookahead == 'U') ADVANCE(16);
      if (lookahead == 'V') ADVANCE(47);
      END_STATE();
    case 208:
      if (eof) ADVANCE(212);
      if (lookahead == 11) SKIP(0)
      END_STATE();
    case 209:
      if (eof) ADVANCE(212);
      if (lookahead == 11) SKIP(207)
      END_STATE();
    case 210:
      if (eof) ADVANCE(212);
      if (lookahead == '\f') SKIP(208)
      END_STATE();
    case 211:
      if (eof) ADVANCE(212);
      if (lookahead == '\f') SKIP(209)
      END_STATE();
    case 212:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_spec_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(216);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '`') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(214);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == ' ') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_AutoProv);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_AutoProv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'u') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_AutoReqProv);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_AutoReqProv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_AutoRequires);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_AutoRequires);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_BuildArchitectures);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_BuildArchitectures);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_BuildConflicts);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_BuildConflicts);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_BuildPreReq);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BuildPreReq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BuildRequires);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_BuildRequires);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_BuildRoot);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_BuildRoot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_Distribution);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_Distribution);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_Enhances);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_Enhances);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_Epoch);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_Epoch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_ExcludeArch);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_ExcludeArch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_ExclusiveArch);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_ExclusiveArch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_ExclusiveOS);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_ExclusiveOS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_Group);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_Group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_License);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_License);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_Name);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_Name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_Obsoletes);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_Obsoletes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_Packager);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_Packager);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_Prereq);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_Prereq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_Provides);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_Provides);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_Recommends);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_Recommends);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_Release);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_Release);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_Requires);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_Requires);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_Suggests);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_Suggests);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_Summary);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_Summary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_Supplements);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_Supplements);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_URL);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_URL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_Url);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_Url);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_Vendor);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_Vendor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_Version);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_Version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '_') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '_') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t') ADVANCE(305);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 11) ADVANCE(309);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 11) ADVANCE(310);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 11) ADVANCE(311);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 11) ADVANCE(312);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\f') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\f') ADVANCE(302);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\f') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\f') ADVANCE(304);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '%') ADVANCE(317);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ' ') ADVANCE(298);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '%') ADVANCE(317);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ' ') ADVANCE(299);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '?') ADVANCE(511);
      if (lookahead == '\\') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ' ') ADVANCE(300);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '?') ADVANCE(511);
      if (lookahead == '\\') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(204);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '{') ADVANCE(512);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'C') ADVANCE(443);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'A') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'A') ADVANCE(459);
      if (lookahead == 'O') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'L') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'P') ADVANCE(458);
      if (lookahead == 'R') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'R') ADVANCE(321);
      if (lookahead == 'r') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'R') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'S') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == 'r') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'b') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'b') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(407);
      if (lookahead == 't') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(435);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'q') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == 's') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == 'o') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'f') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'f') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(416);
      if (lookahead == 'p') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'k') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 'x') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead == 'u') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'p') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'p') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'y') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 207},
  [2] = {.lex_state = 207},
  [3] = {.lex_state = 207},
  [4] = {.lex_state = 207},
  [5] = {.lex_state = 207},
  [6] = {.lex_state = 207},
  [7] = {.lex_state = 207},
  [8] = {.lex_state = 207},
  [9] = {.lex_state = 207},
  [10] = {.lex_state = 207},
  [11] = {.lex_state = 207},
  [12] = {.lex_state = 207},
  [13] = {.lex_state = 207},
  [14] = {.lex_state = 207},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_spec_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_variable_token1] = ACTIONS(1),
    [anon_sym_AutoProv] = ACTIONS(1),
    [anon_sym_AutoReq] = ACTIONS(1),
    [anon_sym_AutoReqProv] = ACTIONS(1),
    [anon_sym_AutoRequires] = ACTIONS(1),
    [anon_sym_BuildArch] = ACTIONS(1),
    [anon_sym_BuildArchitectures] = ACTIONS(1),
    [anon_sym_BuildConflicts] = ACTIONS(1),
    [anon_sym_BuildPreReq] = ACTIONS(1),
    [anon_sym_BuildRequires] = ACTIONS(1),
    [anon_sym_BuildRoot] = ACTIONS(1),
    [anon_sym_Conflicts] = ACTIONS(1),
    [anon_sym_Distribution] = ACTIONS(1),
    [anon_sym_Enhances] = ACTIONS(1),
    [anon_sym_Epoch] = ACTIONS(1),
    [anon_sym_ExcludeArch] = ACTIONS(1),
    [anon_sym_ExclusiveArch] = ACTIONS(1),
    [anon_sym_ExclusiveOS] = ACTIONS(1),
    [anon_sym_Group] = ACTIONS(1),
    [anon_sym_License] = ACTIONS(1),
    [anon_sym_Name] = ACTIONS(1),
    [anon_sym_Obsoletes] = ACTIONS(1),
    [anon_sym_Packager] = ACTIONS(1),
    [anon_sym_Prereq] = ACTIONS(1),
    [anon_sym_Provides] = ACTIONS(1),
    [anon_sym_Recommends] = ACTIONS(1),
    [anon_sym_Release] = ACTIONS(1),
    [anon_sym_Requires] = ACTIONS(1),
    [anon_sym_Suggests] = ACTIONS(1),
    [anon_sym_Summary] = ACTIONS(1),
    [anon_sym_Supplements] = ACTIONS(1),
    [anon_sym_URL] = ACTIONS(1),
    [anon_sym_Url] = ACTIONS(1),
    [anon_sym_Vendor] = ACTIONS(1),
    [anon_sym_Version] = ACTIONS(1),
    [aux_sym_name_token1] = ACTIONS(1),
    [aux_sym_name_token2] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym__quoted_string_token1] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_variable_name] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_spec] = STATE(28),
    [sym_preamble] = STATE(4),
    [sym_variable] = STATE(11),
    [sym_name] = STATE(29),
    [aux_sym_spec_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_spec_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(9),
    [anon_sym_AutoReq] = ACTIONS(11),
    [anon_sym_AutoReqProv] = ACTIONS(9),
    [anon_sym_AutoRequires] = ACTIONS(9),
    [anon_sym_BuildArch] = ACTIONS(11),
    [anon_sym_BuildArchitectures] = ACTIONS(9),
    [anon_sym_BuildConflicts] = ACTIONS(9),
    [anon_sym_BuildPreReq] = ACTIONS(9),
    [anon_sym_BuildRequires] = ACTIONS(9),
    [anon_sym_BuildRoot] = ACTIONS(9),
    [anon_sym_Conflicts] = ACTIONS(9),
    [anon_sym_Distribution] = ACTIONS(9),
    [anon_sym_Enhances] = ACTIONS(9),
    [anon_sym_Epoch] = ACTIONS(9),
    [anon_sym_ExcludeArch] = ACTIONS(9),
    [anon_sym_ExclusiveArch] = ACTIONS(9),
    [anon_sym_ExclusiveOS] = ACTIONS(9),
    [anon_sym_Group] = ACTIONS(9),
    [anon_sym_License] = ACTIONS(9),
    [anon_sym_Name] = ACTIONS(9),
    [anon_sym_Obsoletes] = ACTIONS(9),
    [anon_sym_Packager] = ACTIONS(9),
    [anon_sym_Prereq] = ACTIONS(9),
    [anon_sym_Provides] = ACTIONS(9),
    [anon_sym_Recommends] = ACTIONS(9),
    [anon_sym_Release] = ACTIONS(9),
    [anon_sym_Requires] = ACTIONS(9),
    [anon_sym_Suggests] = ACTIONS(9),
    [anon_sym_Summary] = ACTIONS(9),
    [anon_sym_Supplements] = ACTIONS(9),
    [anon_sym_URL] = ACTIONS(9),
    [anon_sym_Url] = ACTIONS(9),
    [anon_sym_Vendor] = ACTIONS(9),
    [anon_sym_Version] = ACTIONS(9),
    [aux_sym_name_token1] = ACTIONS(9),
    [aux_sym_name_token2] = ACTIONS(9),
  },
  [2] = {
    [sym_preamble] = STATE(2),
    [sym_variable] = STATE(11),
    [sym_name] = STATE(29),
    [aux_sym_spec_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_spec_token1] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(18),
    [anon_sym_AutoReq] = ACTIONS(21),
    [anon_sym_AutoReqProv] = ACTIONS(18),
    [anon_sym_AutoRequires] = ACTIONS(18),
    [anon_sym_BuildArch] = ACTIONS(21),
    [anon_sym_BuildArchitectures] = ACTIONS(18),
    [anon_sym_BuildConflicts] = ACTIONS(18),
    [anon_sym_BuildPreReq] = ACTIONS(18),
    [anon_sym_BuildRequires] = ACTIONS(18),
    [anon_sym_BuildRoot] = ACTIONS(18),
    [anon_sym_Conflicts] = ACTIONS(18),
    [anon_sym_Distribution] = ACTIONS(18),
    [anon_sym_Enhances] = ACTIONS(18),
    [anon_sym_Epoch] = ACTIONS(18),
    [anon_sym_ExcludeArch] = ACTIONS(18),
    [anon_sym_ExclusiveArch] = ACTIONS(18),
    [anon_sym_ExclusiveOS] = ACTIONS(18),
    [anon_sym_Group] = ACTIONS(18),
    [anon_sym_License] = ACTIONS(18),
    [anon_sym_Name] = ACTIONS(18),
    [anon_sym_Obsoletes] = ACTIONS(18),
    [anon_sym_Packager] = ACTIONS(18),
    [anon_sym_Prereq] = ACTIONS(18),
    [anon_sym_Provides] = ACTIONS(18),
    [anon_sym_Recommends] = ACTIONS(18),
    [anon_sym_Release] = ACTIONS(18),
    [anon_sym_Requires] = ACTIONS(18),
    [anon_sym_Suggests] = ACTIONS(18),
    [anon_sym_Summary] = ACTIONS(18),
    [anon_sym_Supplements] = ACTIONS(18),
    [anon_sym_URL] = ACTIONS(18),
    [anon_sym_Url] = ACTIONS(18),
    [anon_sym_Vendor] = ACTIONS(18),
    [anon_sym_Version] = ACTIONS(18),
    [aux_sym_name_token1] = ACTIONS(18),
    [aux_sym_name_token2] = ACTIONS(18),
  },
  [3] = {
    [sym_simple_expansion] = STATE(5),
    [sym_expansion] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(24),
    [aux_sym_spec_token1] = ACTIONS(24),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(24),
    [anon_sym_AutoReq] = ACTIONS(26),
    [anon_sym_AutoReqProv] = ACTIONS(24),
    [anon_sym_AutoRequires] = ACTIONS(24),
    [anon_sym_BuildArch] = ACTIONS(26),
    [anon_sym_BuildArchitectures] = ACTIONS(24),
    [anon_sym_BuildConflicts] = ACTIONS(24),
    [anon_sym_BuildPreReq] = ACTIONS(24),
    [anon_sym_BuildRequires] = ACTIONS(24),
    [anon_sym_BuildRoot] = ACTIONS(24),
    [anon_sym_Conflicts] = ACTIONS(24),
    [anon_sym_Distribution] = ACTIONS(24),
    [anon_sym_Enhances] = ACTIONS(24),
    [anon_sym_Epoch] = ACTIONS(24),
    [anon_sym_ExcludeArch] = ACTIONS(24),
    [anon_sym_ExclusiveArch] = ACTIONS(24),
    [anon_sym_ExclusiveOS] = ACTIONS(24),
    [anon_sym_Group] = ACTIONS(24),
    [anon_sym_License] = ACTIONS(24),
    [anon_sym_Name] = ACTIONS(24),
    [anon_sym_Obsoletes] = ACTIONS(24),
    [anon_sym_Packager] = ACTIONS(24),
    [anon_sym_Prereq] = ACTIONS(24),
    [anon_sym_Provides] = ACTIONS(24),
    [anon_sym_Recommends] = ACTIONS(24),
    [anon_sym_Release] = ACTIONS(24),
    [anon_sym_Requires] = ACTIONS(24),
    [anon_sym_Suggests] = ACTIONS(24),
    [anon_sym_Summary] = ACTIONS(24),
    [anon_sym_Supplements] = ACTIONS(24),
    [anon_sym_URL] = ACTIONS(24),
    [anon_sym_Url] = ACTIONS(24),
    [anon_sym_Vendor] = ACTIONS(24),
    [anon_sym_Version] = ACTIONS(24),
    [aux_sym_name_token1] = ACTIONS(24),
    [aux_sym_name_token2] = ACTIONS(24),
    [anon_sym_PERCENT] = ACTIONS(28),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(30),
  },
  [4] = {
    [sym_preamble] = STATE(2),
    [sym_variable] = STATE(11),
    [sym_name] = STATE(29),
    [aux_sym_spec_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(32),
    [aux_sym_spec_token1] = ACTIONS(34),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(9),
    [anon_sym_AutoReq] = ACTIONS(11),
    [anon_sym_AutoReqProv] = ACTIONS(9),
    [anon_sym_AutoRequires] = ACTIONS(9),
    [anon_sym_BuildArch] = ACTIONS(11),
    [anon_sym_BuildArchitectures] = ACTIONS(9),
    [anon_sym_BuildConflicts] = ACTIONS(9),
    [anon_sym_BuildPreReq] = ACTIONS(9),
    [anon_sym_BuildRequires] = ACTIONS(9),
    [anon_sym_BuildRoot] = ACTIONS(9),
    [anon_sym_Conflicts] = ACTIONS(9),
    [anon_sym_Distribution] = ACTIONS(9),
    [anon_sym_Enhances] = ACTIONS(9),
    [anon_sym_Epoch] = ACTIONS(9),
    [anon_sym_ExcludeArch] = ACTIONS(9),
    [anon_sym_ExclusiveArch] = ACTIONS(9),
    [anon_sym_ExclusiveOS] = ACTIONS(9),
    [anon_sym_Group] = ACTIONS(9),
    [anon_sym_License] = ACTIONS(9),
    [anon_sym_Name] = ACTIONS(9),
    [anon_sym_Obsoletes] = ACTIONS(9),
    [anon_sym_Packager] = ACTIONS(9),
    [anon_sym_Prereq] = ACTIONS(9),
    [anon_sym_Provides] = ACTIONS(9),
    [anon_sym_Recommends] = ACTIONS(9),
    [anon_sym_Release] = ACTIONS(9),
    [anon_sym_Requires] = ACTIONS(9),
    [anon_sym_Suggests] = ACTIONS(9),
    [anon_sym_Summary] = ACTIONS(9),
    [anon_sym_Supplements] = ACTIONS(9),
    [anon_sym_URL] = ACTIONS(9),
    [anon_sym_Url] = ACTIONS(9),
    [anon_sym_Vendor] = ACTIONS(9),
    [anon_sym_Version] = ACTIONS(9),
    [aux_sym_name_token1] = ACTIONS(9),
    [aux_sym_name_token2] = ACTIONS(9),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [aux_sym_spec_token1] = ACTIONS(36),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(36),
    [anon_sym_AutoReq] = ACTIONS(38),
    [anon_sym_AutoReqProv] = ACTIONS(36),
    [anon_sym_AutoRequires] = ACTIONS(36),
    [anon_sym_BuildArch] = ACTIONS(38),
    [anon_sym_BuildArchitectures] = ACTIONS(36),
    [anon_sym_BuildConflicts] = ACTIONS(36),
    [anon_sym_BuildPreReq] = ACTIONS(36),
    [anon_sym_BuildRequires] = ACTIONS(36),
    [anon_sym_BuildRoot] = ACTIONS(36),
    [anon_sym_Conflicts] = ACTIONS(36),
    [anon_sym_Distribution] = ACTIONS(36),
    [anon_sym_Enhances] = ACTIONS(36),
    [anon_sym_Epoch] = ACTIONS(36),
    [anon_sym_ExcludeArch] = ACTIONS(36),
    [anon_sym_ExclusiveArch] = ACTIONS(36),
    [anon_sym_ExclusiveOS] = ACTIONS(36),
    [anon_sym_Group] = ACTIONS(36),
    [anon_sym_License] = ACTIONS(36),
    [anon_sym_Name] = ACTIONS(36),
    [anon_sym_Obsoletes] = ACTIONS(36),
    [anon_sym_Packager] = ACTIONS(36),
    [anon_sym_Prereq] = ACTIONS(36),
    [anon_sym_Provides] = ACTIONS(36),
    [anon_sym_Recommends] = ACTIONS(36),
    [anon_sym_Release] = ACTIONS(36),
    [anon_sym_Requires] = ACTIONS(36),
    [anon_sym_Suggests] = ACTIONS(36),
    [anon_sym_Summary] = ACTIONS(36),
    [anon_sym_Supplements] = ACTIONS(36),
    [anon_sym_URL] = ACTIONS(36),
    [anon_sym_Url] = ACTIONS(36),
    [anon_sym_Vendor] = ACTIONS(36),
    [anon_sym_Version] = ACTIONS(36),
    [aux_sym_name_token1] = ACTIONS(36),
    [aux_sym_name_token2] = ACTIONS(36),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [aux_sym_spec_token1] = ACTIONS(40),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(40),
    [anon_sym_AutoReq] = ACTIONS(42),
    [anon_sym_AutoReqProv] = ACTIONS(40),
    [anon_sym_AutoRequires] = ACTIONS(40),
    [anon_sym_BuildArch] = ACTIONS(42),
    [anon_sym_BuildArchitectures] = ACTIONS(40),
    [anon_sym_BuildConflicts] = ACTIONS(40),
    [anon_sym_BuildPreReq] = ACTIONS(40),
    [anon_sym_BuildRequires] = ACTIONS(40),
    [anon_sym_BuildRoot] = ACTIONS(40),
    [anon_sym_Conflicts] = ACTIONS(40),
    [anon_sym_Distribution] = ACTIONS(40),
    [anon_sym_Enhances] = ACTIONS(40),
    [anon_sym_Epoch] = ACTIONS(40),
    [anon_sym_ExcludeArch] = ACTIONS(40),
    [anon_sym_ExclusiveArch] = ACTIONS(40),
    [anon_sym_ExclusiveOS] = ACTIONS(40),
    [anon_sym_Group] = ACTIONS(40),
    [anon_sym_License] = ACTIONS(40),
    [anon_sym_Name] = ACTIONS(40),
    [anon_sym_Obsoletes] = ACTIONS(40),
    [anon_sym_Packager] = ACTIONS(40),
    [anon_sym_Prereq] = ACTIONS(40),
    [anon_sym_Provides] = ACTIONS(40),
    [anon_sym_Recommends] = ACTIONS(40),
    [anon_sym_Release] = ACTIONS(40),
    [anon_sym_Requires] = ACTIONS(40),
    [anon_sym_Suggests] = ACTIONS(40),
    [anon_sym_Summary] = ACTIONS(40),
    [anon_sym_Supplements] = ACTIONS(40),
    [anon_sym_URL] = ACTIONS(40),
    [anon_sym_Url] = ACTIONS(40),
    [anon_sym_Vendor] = ACTIONS(40),
    [anon_sym_Version] = ACTIONS(40),
    [aux_sym_name_token1] = ACTIONS(40),
    [aux_sym_name_token2] = ACTIONS(40),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [aux_sym_spec_token1] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(44),
    [anon_sym_AutoReq] = ACTIONS(46),
    [anon_sym_AutoReqProv] = ACTIONS(44),
    [anon_sym_AutoRequires] = ACTIONS(44),
    [anon_sym_BuildArch] = ACTIONS(46),
    [anon_sym_BuildArchitectures] = ACTIONS(44),
    [anon_sym_BuildConflicts] = ACTIONS(44),
    [anon_sym_BuildPreReq] = ACTIONS(44),
    [anon_sym_BuildRequires] = ACTIONS(44),
    [anon_sym_BuildRoot] = ACTIONS(44),
    [anon_sym_Conflicts] = ACTIONS(44),
    [anon_sym_Distribution] = ACTIONS(44),
    [anon_sym_Enhances] = ACTIONS(44),
    [anon_sym_Epoch] = ACTIONS(44),
    [anon_sym_ExcludeArch] = ACTIONS(44),
    [anon_sym_ExclusiveArch] = ACTIONS(44),
    [anon_sym_ExclusiveOS] = ACTIONS(44),
    [anon_sym_Group] = ACTIONS(44),
    [anon_sym_License] = ACTIONS(44),
    [anon_sym_Name] = ACTIONS(44),
    [anon_sym_Obsoletes] = ACTIONS(44),
    [anon_sym_Packager] = ACTIONS(44),
    [anon_sym_Prereq] = ACTIONS(44),
    [anon_sym_Provides] = ACTIONS(44),
    [anon_sym_Recommends] = ACTIONS(44),
    [anon_sym_Release] = ACTIONS(44),
    [anon_sym_Requires] = ACTIONS(44),
    [anon_sym_Suggests] = ACTIONS(44),
    [anon_sym_Summary] = ACTIONS(44),
    [anon_sym_Supplements] = ACTIONS(44),
    [anon_sym_URL] = ACTIONS(44),
    [anon_sym_Url] = ACTIONS(44),
    [anon_sym_Vendor] = ACTIONS(44),
    [anon_sym_Version] = ACTIONS(44),
    [aux_sym_name_token1] = ACTIONS(44),
    [aux_sym_name_token2] = ACTIONS(44),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [aux_sym_spec_token1] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(48),
    [anon_sym_AutoReq] = ACTIONS(50),
    [anon_sym_AutoReqProv] = ACTIONS(48),
    [anon_sym_AutoRequires] = ACTIONS(48),
    [anon_sym_BuildArch] = ACTIONS(50),
    [anon_sym_BuildArchitectures] = ACTIONS(48),
    [anon_sym_BuildConflicts] = ACTIONS(48),
    [anon_sym_BuildPreReq] = ACTIONS(48),
    [anon_sym_BuildRequires] = ACTIONS(48),
    [anon_sym_BuildRoot] = ACTIONS(48),
    [anon_sym_Conflicts] = ACTIONS(48),
    [anon_sym_Distribution] = ACTIONS(48),
    [anon_sym_Enhances] = ACTIONS(48),
    [anon_sym_Epoch] = ACTIONS(48),
    [anon_sym_ExcludeArch] = ACTIONS(48),
    [anon_sym_ExclusiveArch] = ACTIONS(48),
    [anon_sym_ExclusiveOS] = ACTIONS(48),
    [anon_sym_Group] = ACTIONS(48),
    [anon_sym_License] = ACTIONS(48),
    [anon_sym_Name] = ACTIONS(48),
    [anon_sym_Obsoletes] = ACTIONS(48),
    [anon_sym_Packager] = ACTIONS(48),
    [anon_sym_Prereq] = ACTIONS(48),
    [anon_sym_Provides] = ACTIONS(48),
    [anon_sym_Recommends] = ACTIONS(48),
    [anon_sym_Release] = ACTIONS(48),
    [anon_sym_Requires] = ACTIONS(48),
    [anon_sym_Suggests] = ACTIONS(48),
    [anon_sym_Summary] = ACTIONS(48),
    [anon_sym_Supplements] = ACTIONS(48),
    [anon_sym_URL] = ACTIONS(48),
    [anon_sym_Url] = ACTIONS(48),
    [anon_sym_Vendor] = ACTIONS(48),
    [anon_sym_Version] = ACTIONS(48),
    [aux_sym_name_token1] = ACTIONS(48),
    [aux_sym_name_token2] = ACTIONS(48),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [aux_sym_spec_token1] = ACTIONS(52),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(52),
    [anon_sym_AutoReq] = ACTIONS(54),
    [anon_sym_AutoReqProv] = ACTIONS(52),
    [anon_sym_AutoRequires] = ACTIONS(52),
    [anon_sym_BuildArch] = ACTIONS(54),
    [anon_sym_BuildArchitectures] = ACTIONS(52),
    [anon_sym_BuildConflicts] = ACTIONS(52),
    [anon_sym_BuildPreReq] = ACTIONS(52),
    [anon_sym_BuildRequires] = ACTIONS(52),
    [anon_sym_BuildRoot] = ACTIONS(52),
    [anon_sym_Conflicts] = ACTIONS(52),
    [anon_sym_Distribution] = ACTIONS(52),
    [anon_sym_Enhances] = ACTIONS(52),
    [anon_sym_Epoch] = ACTIONS(52),
    [anon_sym_ExcludeArch] = ACTIONS(52),
    [anon_sym_ExclusiveArch] = ACTIONS(52),
    [anon_sym_ExclusiveOS] = ACTIONS(52),
    [anon_sym_Group] = ACTIONS(52),
    [anon_sym_License] = ACTIONS(52),
    [anon_sym_Name] = ACTIONS(52),
    [anon_sym_Obsoletes] = ACTIONS(52),
    [anon_sym_Packager] = ACTIONS(52),
    [anon_sym_Prereq] = ACTIONS(52),
    [anon_sym_Provides] = ACTIONS(52),
    [anon_sym_Recommends] = ACTIONS(52),
    [anon_sym_Release] = ACTIONS(52),
    [anon_sym_Requires] = ACTIONS(52),
    [anon_sym_Suggests] = ACTIONS(52),
    [anon_sym_Summary] = ACTIONS(52),
    [anon_sym_Supplements] = ACTIONS(52),
    [anon_sym_URL] = ACTIONS(52),
    [anon_sym_Url] = ACTIONS(52),
    [anon_sym_Vendor] = ACTIONS(52),
    [anon_sym_Version] = ACTIONS(52),
    [aux_sym_name_token1] = ACTIONS(52),
    [aux_sym_name_token2] = ACTIONS(52),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [aux_sym_spec_token1] = ACTIONS(56),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(56),
    [anon_sym_AutoReq] = ACTIONS(58),
    [anon_sym_AutoReqProv] = ACTIONS(56),
    [anon_sym_AutoRequires] = ACTIONS(56),
    [anon_sym_BuildArch] = ACTIONS(58),
    [anon_sym_BuildArchitectures] = ACTIONS(56),
    [anon_sym_BuildConflicts] = ACTIONS(56),
    [anon_sym_BuildPreReq] = ACTIONS(56),
    [anon_sym_BuildRequires] = ACTIONS(56),
    [anon_sym_BuildRoot] = ACTIONS(56),
    [anon_sym_Conflicts] = ACTIONS(56),
    [anon_sym_Distribution] = ACTIONS(56),
    [anon_sym_Enhances] = ACTIONS(56),
    [anon_sym_Epoch] = ACTIONS(56),
    [anon_sym_ExcludeArch] = ACTIONS(56),
    [anon_sym_ExclusiveArch] = ACTIONS(56),
    [anon_sym_ExclusiveOS] = ACTIONS(56),
    [anon_sym_Group] = ACTIONS(56),
    [anon_sym_License] = ACTIONS(56),
    [anon_sym_Name] = ACTIONS(56),
    [anon_sym_Obsoletes] = ACTIONS(56),
    [anon_sym_Packager] = ACTIONS(56),
    [anon_sym_Prereq] = ACTIONS(56),
    [anon_sym_Provides] = ACTIONS(56),
    [anon_sym_Recommends] = ACTIONS(56),
    [anon_sym_Release] = ACTIONS(56),
    [anon_sym_Requires] = ACTIONS(56),
    [anon_sym_Suggests] = ACTIONS(56),
    [anon_sym_Summary] = ACTIONS(56),
    [anon_sym_Supplements] = ACTIONS(56),
    [anon_sym_URL] = ACTIONS(56),
    [anon_sym_Url] = ACTIONS(56),
    [anon_sym_Vendor] = ACTIONS(56),
    [anon_sym_Version] = ACTIONS(56),
    [aux_sym_name_token1] = ACTIONS(56),
    [aux_sym_name_token2] = ACTIONS(56),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [aux_sym_spec_token1] = ACTIONS(60),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(60),
    [anon_sym_AutoReq] = ACTIONS(62),
    [anon_sym_AutoReqProv] = ACTIONS(60),
    [anon_sym_AutoRequires] = ACTIONS(60),
    [anon_sym_BuildArch] = ACTIONS(62),
    [anon_sym_BuildArchitectures] = ACTIONS(60),
    [anon_sym_BuildConflicts] = ACTIONS(60),
    [anon_sym_BuildPreReq] = ACTIONS(60),
    [anon_sym_BuildRequires] = ACTIONS(60),
    [anon_sym_BuildRoot] = ACTIONS(60),
    [anon_sym_Conflicts] = ACTIONS(60),
    [anon_sym_Distribution] = ACTIONS(60),
    [anon_sym_Enhances] = ACTIONS(60),
    [anon_sym_Epoch] = ACTIONS(60),
    [anon_sym_ExcludeArch] = ACTIONS(60),
    [anon_sym_ExclusiveArch] = ACTIONS(60),
    [anon_sym_ExclusiveOS] = ACTIONS(60),
    [anon_sym_Group] = ACTIONS(60),
    [anon_sym_License] = ACTIONS(60),
    [anon_sym_Name] = ACTIONS(60),
    [anon_sym_Obsoletes] = ACTIONS(60),
    [anon_sym_Packager] = ACTIONS(60),
    [anon_sym_Prereq] = ACTIONS(60),
    [anon_sym_Provides] = ACTIONS(60),
    [anon_sym_Recommends] = ACTIONS(60),
    [anon_sym_Release] = ACTIONS(60),
    [anon_sym_Requires] = ACTIONS(60),
    [anon_sym_Suggests] = ACTIONS(60),
    [anon_sym_Summary] = ACTIONS(60),
    [anon_sym_Supplements] = ACTIONS(60),
    [anon_sym_URL] = ACTIONS(60),
    [anon_sym_Url] = ACTIONS(60),
    [anon_sym_Vendor] = ACTIONS(60),
    [anon_sym_Version] = ACTIONS(60),
    [aux_sym_name_token1] = ACTIONS(60),
    [aux_sym_name_token2] = ACTIONS(60),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [aux_sym_spec_token1] = ACTIONS(64),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(64),
    [anon_sym_AutoReq] = ACTIONS(66),
    [anon_sym_AutoReqProv] = ACTIONS(64),
    [anon_sym_AutoRequires] = ACTIONS(64),
    [anon_sym_BuildArch] = ACTIONS(66),
    [anon_sym_BuildArchitectures] = ACTIONS(64),
    [anon_sym_BuildConflicts] = ACTIONS(64),
    [anon_sym_BuildPreReq] = ACTIONS(64),
    [anon_sym_BuildRequires] = ACTIONS(64),
    [anon_sym_BuildRoot] = ACTIONS(64),
    [anon_sym_Conflicts] = ACTIONS(64),
    [anon_sym_Distribution] = ACTIONS(64),
    [anon_sym_Enhances] = ACTIONS(64),
    [anon_sym_Epoch] = ACTIONS(64),
    [anon_sym_ExcludeArch] = ACTIONS(64),
    [anon_sym_ExclusiveArch] = ACTIONS(64),
    [anon_sym_ExclusiveOS] = ACTIONS(64),
    [anon_sym_Group] = ACTIONS(64),
    [anon_sym_License] = ACTIONS(64),
    [anon_sym_Name] = ACTIONS(64),
    [anon_sym_Obsoletes] = ACTIONS(64),
    [anon_sym_Packager] = ACTIONS(64),
    [anon_sym_Prereq] = ACTIONS(64),
    [anon_sym_Provides] = ACTIONS(64),
    [anon_sym_Recommends] = ACTIONS(64),
    [anon_sym_Release] = ACTIONS(64),
    [anon_sym_Requires] = ACTIONS(64),
    [anon_sym_Suggests] = ACTIONS(64),
    [anon_sym_Summary] = ACTIONS(64),
    [anon_sym_Supplements] = ACTIONS(64),
    [anon_sym_URL] = ACTIONS(64),
    [anon_sym_Url] = ACTIONS(64),
    [anon_sym_Vendor] = ACTIONS(64),
    [anon_sym_Version] = ACTIONS(64),
    [aux_sym_name_token1] = ACTIONS(64),
    [aux_sym_name_token2] = ACTIONS(64),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [aux_sym_spec_token1] = ACTIONS(68),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(68),
    [anon_sym_AutoReq] = ACTIONS(70),
    [anon_sym_AutoReqProv] = ACTIONS(68),
    [anon_sym_AutoRequires] = ACTIONS(68),
    [anon_sym_BuildArch] = ACTIONS(70),
    [anon_sym_BuildArchitectures] = ACTIONS(68),
    [anon_sym_BuildConflicts] = ACTIONS(68),
    [anon_sym_BuildPreReq] = ACTIONS(68),
    [anon_sym_BuildRequires] = ACTIONS(68),
    [anon_sym_BuildRoot] = ACTIONS(68),
    [anon_sym_Conflicts] = ACTIONS(68),
    [anon_sym_Distribution] = ACTIONS(68),
    [anon_sym_Enhances] = ACTIONS(68),
    [anon_sym_Epoch] = ACTIONS(68),
    [anon_sym_ExcludeArch] = ACTIONS(68),
    [anon_sym_ExclusiveArch] = ACTIONS(68),
    [anon_sym_ExclusiveOS] = ACTIONS(68),
    [anon_sym_Group] = ACTIONS(68),
    [anon_sym_License] = ACTIONS(68),
    [anon_sym_Name] = ACTIONS(68),
    [anon_sym_Obsoletes] = ACTIONS(68),
    [anon_sym_Packager] = ACTIONS(68),
    [anon_sym_Prereq] = ACTIONS(68),
    [anon_sym_Provides] = ACTIONS(68),
    [anon_sym_Recommends] = ACTIONS(68),
    [anon_sym_Release] = ACTIONS(68),
    [anon_sym_Requires] = ACTIONS(68),
    [anon_sym_Suggests] = ACTIONS(68),
    [anon_sym_Summary] = ACTIONS(68),
    [anon_sym_Supplements] = ACTIONS(68),
    [anon_sym_URL] = ACTIONS(68),
    [anon_sym_Url] = ACTIONS(68),
    [anon_sym_Vendor] = ACTIONS(68),
    [anon_sym_Version] = ACTIONS(68),
    [aux_sym_name_token1] = ACTIONS(68),
    [aux_sym_name_token2] = ACTIONS(68),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [aux_sym_spec_token1] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(72),
    [anon_sym_AutoReq] = ACTIONS(74),
    [anon_sym_AutoReqProv] = ACTIONS(72),
    [anon_sym_AutoRequires] = ACTIONS(72),
    [anon_sym_BuildArch] = ACTIONS(74),
    [anon_sym_BuildArchitectures] = ACTIONS(72),
    [anon_sym_BuildConflicts] = ACTIONS(72),
    [anon_sym_BuildPreReq] = ACTIONS(72),
    [anon_sym_BuildRequires] = ACTIONS(72),
    [anon_sym_BuildRoot] = ACTIONS(72),
    [anon_sym_Conflicts] = ACTIONS(72),
    [anon_sym_Distribution] = ACTIONS(72),
    [anon_sym_Enhances] = ACTIONS(72),
    [anon_sym_Epoch] = ACTIONS(72),
    [anon_sym_ExcludeArch] = ACTIONS(72),
    [anon_sym_ExclusiveArch] = ACTIONS(72),
    [anon_sym_ExclusiveOS] = ACTIONS(72),
    [anon_sym_Group] = ACTIONS(72),
    [anon_sym_License] = ACTIONS(72),
    [anon_sym_Name] = ACTIONS(72),
    [anon_sym_Obsoletes] = ACTIONS(72),
    [anon_sym_Packager] = ACTIONS(72),
    [anon_sym_Prereq] = ACTIONS(72),
    [anon_sym_Provides] = ACTIONS(72),
    [anon_sym_Recommends] = ACTIONS(72),
    [anon_sym_Release] = ACTIONS(72),
    [anon_sym_Requires] = ACTIONS(72),
    [anon_sym_Suggests] = ACTIONS(72),
    [anon_sym_Summary] = ACTIONS(72),
    [anon_sym_Supplements] = ACTIONS(72),
    [anon_sym_URL] = ACTIONS(72),
    [anon_sym_Url] = ACTIONS(72),
    [anon_sym_Vendor] = ACTIONS(72),
    [anon_sym_Version] = ACTIONS(72),
    [aux_sym_name_token1] = ACTIONS(72),
    [aux_sym_name_token2] = ACTIONS(72),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(28), 1,
      anon_sym_PERCENT,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_integer,
    ACTIONS(80), 1,
      sym_float,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      sym_string_content,
    ACTIONS(86), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(88), 1,
      anon_sym_PERCENT_LBRACE,
    STATE(14), 2,
      sym__quoted_string,
      sym__unquoted_string,
    STATE(13), 4,
      sym__value,
      sym_string,
      sym_simple_expansion,
      sym_expansion,
  [35] = 6,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_string_content,
    ACTIONS(92), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(94), 1,
      anon_sym_PERCENT,
    ACTIONS(96), 1,
      anon_sym_PERCENT_LBRACE,
    STATE(18), 3,
      sym_simple_expansion,
      sym_expansion,
      aux_sym__quoted_string_repeat1,
  [56] = 6,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(98), 1,
      sym_string_content,
    ACTIONS(100), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    STATE(16), 3,
      sym_simple_expansion,
      sym_expansion,
      aux_sym__quoted_string_repeat1,
  [77] = 6,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_string_content,
    ACTIONS(107), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(109), 1,
      anon_sym_PERCENT,
    ACTIONS(112), 1,
      anon_sym_PERCENT_LBRACE,
    STATE(18), 3,
      sym_simple_expansion,
      sym_expansion,
      aux_sym__quoted_string_repeat1,
  [98] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(115), 1,
      sym_string_content,
    ACTIONS(117), 2,
      sym_variable_name,
      anon_sym_QMARK,
  [112] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(107), 4,
      sym_string_content,
      aux_sym__quoted_string_token1,
      anon_sym_PERCENT,
      anon_sym_PERCENT_LBRACE,
  [122] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_string_content,
    ACTIONS(119), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(117), 2,
      sym_variable_name,
      anon_sym_QMARK,
  [136] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(58), 4,
      sym_string_content,
      aux_sym__quoted_string_token1,
      anon_sym_PERCENT,
      anon_sym_PERCENT_LBRACE,
  [146] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(50), 4,
      sym_string_content,
      aux_sym__quoted_string_token1,
      anon_sym_PERCENT,
      anon_sym_PERCENT_LBRACE,
  [156] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_string_content,
    ACTIONS(117), 2,
      sym_variable_name,
      anon_sym_QMARK,
  [167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      sym_variable_name,
      anon_sym_QMARK,
  [175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      sym_variable_name,
      anon_sym_QMARK,
  [183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      sym_variable_name,
      anon_sym_QMARK,
  [191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_variable_token1,
  [205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
  [212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_spec_token1,
  [219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      aux_sym_variable_token1,
  [226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 35,
  [SMALL_STATE(17)] = 56,
  [SMALL_STATE(18)] = 77,
  [SMALL_STATE(19)] = 98,
  [SMALL_STATE(20)] = 112,
  [SMALL_STATE(21)] = 122,
  [SMALL_STATE(22)] = 136,
  [SMALL_STATE(23)] = 146,
  [SMALL_STATE(24)] = 156,
  [SMALL_STATE(25)] = 167,
  [SMALL_STATE(26)] = 175,
  [SMALL_STATE(27)] = 183,
  [SMALL_STATE(28)] = 191,
  [SMALL_STATE(29)] = 198,
  [SMALL_STATE(30)] = 205,
  [SMALL_STATE(31)] = 212,
  [SMALL_STATE(32)] = 219,
  [SMALL_STATE(33)] = 226,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(32),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(32),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 4),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expansion, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expansion, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(18),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(24),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(27),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
