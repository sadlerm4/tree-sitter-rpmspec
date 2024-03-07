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
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 16
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
  aux_sym__value = 54,
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
  [anon_sym_QMARK] = "\?",
  [anon_sym_PERCENT_LBRACE] = "%{",
  [anon_sym_RBRACE] = "}",
  [sym_spec] = "spec",
  [sym_preamble] = "preamble",
  [sym_variable] = "variable",
  [sym_name] = "name",
  [aux_sym__value] = "_value",
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
  [aux_sym__value] = aux_sym__value,
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
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
  [21] = 10,
  [22] = 22,
  [23] = 23,
  [24] = 7,
  [25] = 6,
  [26] = 8,
  [27] = 27,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 31,
  [39] = 35,
  [40] = 32,
  [41] = 41,
  [42] = 33,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(215);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') SKIP(206)
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '%') ADVANCE(518);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '?') ADVANCE(712);
      if (lookahead == 'A') ADVANCE(697);
      if (lookahead == 'B') ADVANCE(700);
      if (lookahead == 'C') ADVANCE(631);
      if (lookahead == 'D') ADVANCE(595);
      if (lookahead == 'E') ADVANCE(621);
      if (lookahead == 'G') ADVANCE(654);
      if (lookahead == 'L') ADVANCE(597);
      if (lookahead == 'N') ADVANCE(527);
      if (lookahead == 'O') ADVANCE(533);
      if (lookahead == 'P') ADVANCE(528);
      if (lookahead == 'R') ADVANCE(554);
      if (lookahead == 'S') ADVANCE(634);
      if (lookahead == 'U') ADVANCE(524);
      if (lookahead == 'V') ADVANCE(555);
      if (lookahead == '\\') ADVANCE(301);
      if (lookahead == '}') ADVANCE(714);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(4)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(216);
      END_STATE();
    case 3:
      if (lookahead == 11) SKIP(7)
      END_STATE();
    case 4:
      if (lookahead == '\f') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '?') ADVANCE(712);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '#') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '%') ADVANCE(518);
      if (lookahead == '\'') ADVANCE(517);
      if (lookahead == '\\') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(304);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '%') ADVANCE(518);
      if (lookahead == '\'') ADVANCE(517);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\'') ADVANCE(517);
      if (lookahead == '?') ADVANCE(712);
      if (lookahead == '\\') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '?') ADVANCE(712);
      if (lookahead == '\\') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(149);
      if (lookahead == 'C') ADVANCE(137);
      if (lookahead == 'P') ADVANCE(156);
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(151);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'L') ADVANCE(283);
      END_STATE();
    case 16:
      if (lookahead == 'P') ADVANCE(152);
      if (lookahead == 'R') ADVANCE(58);
      END_STATE();
    case 17:
      if (lookahead == 'R') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 18:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == 'S') ADVANCE(255);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(175);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(196);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'q') ADVANCE(195);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(249);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(292);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(231);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(251);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(253);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 101:
      if (lookahead == 'k') ADVANCE(24);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 140:
      if (lookahead == 'q') ADVANCE(267);
      END_STATE();
    case 141:
      if (lookahead == 'q') ADVANCE(224);
      END_STATE();
    case 142:
      if (lookahead == 'q') ADVANCE(237);
      END_STATE();
    case 143:
      if (lookahead == 'q') ADVANCE(198);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 199:
      if (lookahead == 'v') ADVANCE(221);
      END_STATE();
    case 200:
      if (lookahead == 'v') ADVANCE(226);
      END_STATE();
    case 201:
      if (lookahead == 'v') ADVANCE(93);
      END_STATE();
    case 202:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 203:
      if (lookahead == 'y') ADVANCE(279);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 205:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(515);
      if (lookahead == '\r') ADVANCE(516);
      END_STATE();
    case 206:
      if (eof) ADVANCE(215);
      if (lookahead == '\t') SKIP(213)
      END_STATE();
    case 207:
      if (eof) ADVANCE(215);
      if (lookahead == '\t') SKIP(214)
      END_STATE();
    case 208:
      if (eof) ADVANCE(215);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') SKIP(206)
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '%') ADVANCE(518);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(697);
      if (lookahead == 'B') ADVANCE(700);
      if (lookahead == 'C') ADVANCE(631);
      if (lookahead == 'D') ADVANCE(595);
      if (lookahead == 'E') ADVANCE(621);
      if (lookahead == 'G') ADVANCE(654);
      if (lookahead == 'L') ADVANCE(597);
      if (lookahead == 'N') ADVANCE(527);
      if (lookahead == 'O') ADVANCE(533);
      if (lookahead == 'P') ADVANCE(528);
      if (lookahead == 'R') ADVANCE(554);
      if (lookahead == 'S') ADVANCE(634);
      if (lookahead == 'U') ADVANCE(524);
      if (lookahead == 'V') ADVANCE(555);
      if (lookahead == '\\') ADVANCE(301);
      if (lookahead == '}') ADVANCE(714);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 209:
      if (eof) ADVANCE(215);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '%') ADVANCE(518);
      if (lookahead == '\'') ADVANCE(517);
      if (lookahead == 'A') ADVANCE(500);
      if (lookahead == 'B') ADVANCE(503);
      if (lookahead == 'C') ADVANCE(434);
      if (lookahead == 'D') ADVANCE(398);
      if (lookahead == 'E') ADVANCE(426);
      if (lookahead == 'G') ADVANCE(457);
      if (lookahead == 'L') ADVANCE(400);
      if (lookahead == 'N') ADVANCE(330);
      if (lookahead == 'O') ADVANCE(336);
      if (lookahead == 'P') ADVANCE(331);
      if (lookahead == 'R') ADVANCE(361);
      if (lookahead == 'S') ADVANCE(437);
      if (lookahead == 'U') ADVANCE(327);
      if (lookahead == 'V') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 210:
      if (eof) ADVANCE(215);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') SKIP(207)
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == 'A') ADVANCE(190);
      if (lookahead == 'B') ADVANCE(193);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == 'D') ADVANCE(88);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == 'G') ADVANCE(147);
      if (lookahead == 'L') ADVANCE(90);
      if (lookahead == 'N') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'P') ADVANCE(21);
      if (lookahead == 'R') ADVANCE(47);
      if (lookahead == 'S') ADVANCE(127);
      if (lookahead == 'U') ADVANCE(17);
      if (lookahead == 'V') ADVANCE(48);
      END_STATE();
    case 211:
      if (eof) ADVANCE(215);
      if (lookahead == 11) SKIP(208)
      END_STATE();
    case 212:
      if (eof) ADVANCE(215);
      if (lookahead == 11) SKIP(210)
      END_STATE();
    case 213:
      if (eof) ADVANCE(215);
      if (lookahead == '\f') SKIP(211)
      END_STATE();
    case 214:
      if (eof) ADVANCE(215);
      if (lookahead == '\f') SKIP(212)
      END_STATE();
    case 215:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_spec_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '`') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_AutoProv);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_AutoProv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(661);
      if (lookahead == 'u') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_AutoReq);
      if (lookahead == 'P') ADVANCE(464);
      if (lookahead == 'u') ADVANCE(408);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_AutoReqProv);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_AutoReqProv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_AutoRequires);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_AutoRequires);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_BuildArch);
      if (lookahead == 'i') ADVANCE(498);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BuildArchitectures);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BuildArchitectures);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_BuildConflicts);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_BuildConflicts);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_BuildPreReq);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_BuildPreReq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_BuildRequires);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_BuildRequires);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_BuildRoot);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_BuildRoot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_Distribution);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_Distribution);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_Enhances);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_Enhances);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_Epoch);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_Epoch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_ExcludeArch);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_ExcludeArch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_ExclusiveArch);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_ExclusiveArch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_ExclusiveOS);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_ExclusiveOS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_Group);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_Group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_License);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_License);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_Name);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_Name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_Obsoletes);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_Obsoletes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_Packager);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_Packager);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_Prereq);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_Prereq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_Provides);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_Provides);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_Recommends);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_Recommends);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_Release);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_Release);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_Requires);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_Requires);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_Suggests);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_Suggests);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_Summary);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_Summary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_Supplements);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_Supplements);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_URL);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_URL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_Url);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_Url);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_Vendor);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_Vendor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_Version);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_Version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_name_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '_') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(514);
      if (lookahead == '_') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t') ADVANCE(313);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t') ADVANCE(315);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '%') ADVANCE(518);
      if (lookahead == '\'') ADVANCE(517);
      if (lookahead == 'A') ADVANCE(500);
      if (lookahead == 'B') ADVANCE(503);
      if (lookahead == 'C') ADVANCE(434);
      if (lookahead == 'D') ADVANCE(398);
      if (lookahead == 'E') ADVANCE(426);
      if (lookahead == 'G') ADVANCE(457);
      if (lookahead == 'L') ADVANCE(400);
      if (lookahead == 'N') ADVANCE(330);
      if (lookahead == 'O') ADVANCE(336);
      if (lookahead == 'P') ADVANCE(331);
      if (lookahead == 'R') ADVANCE(361);
      if (lookahead == 'S') ADVANCE(437);
      if (lookahead == 'U') ADVANCE(327);
      if (lookahead == 'V') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 11) ADVANCE(307);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 11) ADVANCE(318);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 11) ADVANCE(319);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 11) ADVANCE(320);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 11) ADVANCE(321);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\f') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\f') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\f') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\f') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\f') ADVANCE(312);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '%') ADVANCE(518);
      if (lookahead == '\'') ADVANCE(517);
      if (lookahead == '\\') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ' ') ADVANCE(304);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '%') ADVANCE(518);
      if (lookahead == '\'') ADVANCE(517);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '"') ADVANCE(517);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\'') ADVANCE(517);
      if (lookahead == '\\') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(459);
      if (lookahead == 'C') ADVANCE(447);
      if (lookahead == 'P') ADVANCE(466);
      if (lookahead == 'R') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(461);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'A') ADVANCE(463);
      if (lookahead == 'O') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'L') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'R') ADVANCE(368);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'R') ADVANCE(325);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'R') ADVANCE(373);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == 'S') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'b') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'b') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(411);
      if (lookahead == 't') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(439);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == 'q') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'd') ADVANCE(364);
      if (lookahead == 's') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'd') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'g') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(420);
      if (lookahead == 'p') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'g') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'g') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'h') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'h') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'h') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'h') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'h') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'h') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'k') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'm') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'm') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'm') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'm') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'm') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == 'p') ADVANCE(438);
      if (lookahead == 'x') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead == 'r') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(504);
      if (lookahead == 'u') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'p') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'p') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'q') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'q') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'q') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'q') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 's') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 't') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 't') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'v') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'v') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'v') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'v') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == 'y') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(515);
      if (lookahead == '\\') ADVANCE(205);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '{') ADVANCE(713);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'A') ADVANCE(656);
      if (lookahead == 'C') ADVANCE(644);
      if (lookahead == 'P') ADVANCE(663);
      if (lookahead == 'R') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'A') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'A') ADVANCE(660);
      if (lookahead == 'O') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'L') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'P') ADVANCE(659);
      if (lookahead == 'R') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'R') ADVANCE(522);
      if (lookahead == 'r') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'R') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'S') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(535);
      if (lookahead == 'r') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'a') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'b') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'b') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(608);
      if (lookahead == 't') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(569);
      if (lookahead == 'q') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'c') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(559);
      if (lookahead == 's') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(655);
      if (lookahead == 'o') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'f') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'f') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(587);
      if (lookahead == 'm') ADVANCE(617);
      if (lookahead == 'p') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'h') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'k') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'l') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'm') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(594);
      if (lookahead == 'p') ADVANCE(635);
      if (lookahead == 'x') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead == 'u') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'o') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'p') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'p') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'q') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'r') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 's') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 't') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'u') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'v') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'y') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 210},
  [2] = {.lex_state = 209},
  [3] = {.lex_state = 209},
  [4] = {.lex_state = 209},
  [5] = {.lex_state = 209},
  [6] = {.lex_state = 209},
  [7] = {.lex_state = 209},
  [8] = {.lex_state = 209},
  [9] = {.lex_state = 209},
  [10] = {.lex_state = 209},
  [11] = {.lex_state = 209},
  [12] = {.lex_state = 209},
  [13] = {.lex_state = 210},
  [14] = {.lex_state = 210},
  [15] = {.lex_state = 210},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 6},
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
    [sym_spec] = STATE(41),
    [sym_preamble] = STATE(13),
    [sym_variable] = STATE(15),
    [sym_name] = STATE(37),
    [aux_sym_spec_repeat1] = STATE(13),
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
    [aux_sym__value] = STATE(2),
    [sym_string] = STATE(2),
    [sym__quoted_string] = STATE(11),
    [sym__unquoted_string] = STATE(11),
    [sym_simple_expansion] = STATE(2),
    [sym_expansion] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_spec_token1] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(15),
    [anon_sym_AutoReq] = ACTIONS(15),
    [anon_sym_AutoReqProv] = ACTIONS(15),
    [anon_sym_AutoRequires] = ACTIONS(15),
    [anon_sym_BuildArch] = ACTIONS(15),
    [anon_sym_BuildArchitectures] = ACTIONS(15),
    [anon_sym_BuildConflicts] = ACTIONS(15),
    [anon_sym_BuildPreReq] = ACTIONS(15),
    [anon_sym_BuildRequires] = ACTIONS(15),
    [anon_sym_BuildRoot] = ACTIONS(15),
    [anon_sym_Conflicts] = ACTIONS(15),
    [anon_sym_Distribution] = ACTIONS(15),
    [anon_sym_Enhances] = ACTIONS(15),
    [anon_sym_Epoch] = ACTIONS(15),
    [anon_sym_ExcludeArch] = ACTIONS(15),
    [anon_sym_ExclusiveArch] = ACTIONS(15),
    [anon_sym_ExclusiveOS] = ACTIONS(15),
    [anon_sym_Group] = ACTIONS(15),
    [anon_sym_License] = ACTIONS(15),
    [anon_sym_Name] = ACTIONS(15),
    [anon_sym_Obsoletes] = ACTIONS(15),
    [anon_sym_Packager] = ACTIONS(15),
    [anon_sym_Prereq] = ACTIONS(15),
    [anon_sym_Provides] = ACTIONS(15),
    [anon_sym_Recommends] = ACTIONS(15),
    [anon_sym_Release] = ACTIONS(15),
    [anon_sym_Requires] = ACTIONS(15),
    [anon_sym_Suggests] = ACTIONS(15),
    [anon_sym_Summary] = ACTIONS(15),
    [anon_sym_Supplements] = ACTIONS(15),
    [anon_sym_URL] = ACTIONS(15),
    [anon_sym_Url] = ACTIONS(15),
    [anon_sym_Vendor] = ACTIONS(15),
    [anon_sym_Version] = ACTIONS(15),
    [aux_sym_name_token1] = ACTIONS(15),
    [aux_sym_name_token2] = ACTIONS(15),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_BSLASH] = ACTIONS(22),
    [sym_string_content] = ACTIONS(25),
    [aux_sym__quoted_string_token1] = ACTIONS(28),
    [anon_sym_PERCENT] = ACTIONS(31),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(34),
  },
  [3] = {
    [aux_sym__value] = STATE(2),
    [sym_string] = STATE(2),
    [sym__quoted_string] = STATE(11),
    [sym__unquoted_string] = STATE(11),
    [sym_simple_expansion] = STATE(2),
    [sym_expansion] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_spec_token1] = ACTIONS(39),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(39),
    [anon_sym_AutoReq] = ACTIONS(39),
    [anon_sym_AutoReqProv] = ACTIONS(39),
    [anon_sym_AutoRequires] = ACTIONS(39),
    [anon_sym_BuildArch] = ACTIONS(39),
    [anon_sym_BuildArchitectures] = ACTIONS(39),
    [anon_sym_BuildConflicts] = ACTIONS(39),
    [anon_sym_BuildPreReq] = ACTIONS(39),
    [anon_sym_BuildRequires] = ACTIONS(39),
    [anon_sym_BuildRoot] = ACTIONS(39),
    [anon_sym_Conflicts] = ACTIONS(39),
    [anon_sym_Distribution] = ACTIONS(39),
    [anon_sym_Enhances] = ACTIONS(39),
    [anon_sym_Epoch] = ACTIONS(39),
    [anon_sym_ExcludeArch] = ACTIONS(39),
    [anon_sym_ExclusiveArch] = ACTIONS(39),
    [anon_sym_ExclusiveOS] = ACTIONS(39),
    [anon_sym_Group] = ACTIONS(39),
    [anon_sym_License] = ACTIONS(39),
    [anon_sym_Name] = ACTIONS(39),
    [anon_sym_Obsoletes] = ACTIONS(39),
    [anon_sym_Packager] = ACTIONS(39),
    [anon_sym_Prereq] = ACTIONS(39),
    [anon_sym_Provides] = ACTIONS(39),
    [anon_sym_Recommends] = ACTIONS(39),
    [anon_sym_Release] = ACTIONS(39),
    [anon_sym_Requires] = ACTIONS(39),
    [anon_sym_Suggests] = ACTIONS(39),
    [anon_sym_Summary] = ACTIONS(39),
    [anon_sym_Supplements] = ACTIONS(39),
    [anon_sym_URL] = ACTIONS(39),
    [anon_sym_Url] = ACTIONS(39),
    [anon_sym_Vendor] = ACTIONS(39),
    [anon_sym_Version] = ACTIONS(39),
    [aux_sym_name_token1] = ACTIONS(39),
    [aux_sym_name_token2] = ACTIONS(39),
    [sym_integer] = ACTIONS(41),
    [sym_float] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(43),
    [sym_string_content] = ACTIONS(45),
    [aux_sym__quoted_string_token1] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(51),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [aux_sym_spec_token1] = ACTIONS(55),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(55),
    [anon_sym_AutoReq] = ACTIONS(55),
    [anon_sym_AutoReqProv] = ACTIONS(55),
    [anon_sym_AutoRequires] = ACTIONS(55),
    [anon_sym_BuildArch] = ACTIONS(55),
    [anon_sym_BuildArchitectures] = ACTIONS(55),
    [anon_sym_BuildConflicts] = ACTIONS(55),
    [anon_sym_BuildPreReq] = ACTIONS(55),
    [anon_sym_BuildRequires] = ACTIONS(55),
    [anon_sym_BuildRoot] = ACTIONS(55),
    [anon_sym_Conflicts] = ACTIONS(55),
    [anon_sym_Distribution] = ACTIONS(55),
    [anon_sym_Enhances] = ACTIONS(55),
    [anon_sym_Epoch] = ACTIONS(55),
    [anon_sym_ExcludeArch] = ACTIONS(55),
    [anon_sym_ExclusiveArch] = ACTIONS(55),
    [anon_sym_ExclusiveOS] = ACTIONS(55),
    [anon_sym_Group] = ACTIONS(55),
    [anon_sym_License] = ACTIONS(55),
    [anon_sym_Name] = ACTIONS(55),
    [anon_sym_Obsoletes] = ACTIONS(55),
    [anon_sym_Packager] = ACTIONS(55),
    [anon_sym_Prereq] = ACTIONS(55),
    [anon_sym_Provides] = ACTIONS(55),
    [anon_sym_Recommends] = ACTIONS(55),
    [anon_sym_Release] = ACTIONS(55),
    [anon_sym_Requires] = ACTIONS(55),
    [anon_sym_Suggests] = ACTIONS(55),
    [anon_sym_Summary] = ACTIONS(55),
    [anon_sym_Supplements] = ACTIONS(55),
    [anon_sym_URL] = ACTIONS(55),
    [anon_sym_Url] = ACTIONS(55),
    [anon_sym_Vendor] = ACTIONS(55),
    [anon_sym_Version] = ACTIONS(55),
    [aux_sym_name_token1] = ACTIONS(55),
    [aux_sym_name_token2] = ACTIONS(55),
    [sym_integer] = ACTIONS(55),
    [sym_float] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(55),
    [sym_string_content] = ACTIONS(55),
    [aux_sym__quoted_string_token1] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(55),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [aux_sym_spec_token1] = ACTIONS(59),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(59),
    [anon_sym_AutoReq] = ACTIONS(59),
    [anon_sym_AutoReqProv] = ACTIONS(59),
    [anon_sym_AutoRequires] = ACTIONS(59),
    [anon_sym_BuildArch] = ACTIONS(59),
    [anon_sym_BuildArchitectures] = ACTIONS(59),
    [anon_sym_BuildConflicts] = ACTIONS(59),
    [anon_sym_BuildPreReq] = ACTIONS(59),
    [anon_sym_BuildRequires] = ACTIONS(59),
    [anon_sym_BuildRoot] = ACTIONS(59),
    [anon_sym_Conflicts] = ACTIONS(59),
    [anon_sym_Distribution] = ACTIONS(59),
    [anon_sym_Enhances] = ACTIONS(59),
    [anon_sym_Epoch] = ACTIONS(59),
    [anon_sym_ExcludeArch] = ACTIONS(59),
    [anon_sym_ExclusiveArch] = ACTIONS(59),
    [anon_sym_ExclusiveOS] = ACTIONS(59),
    [anon_sym_Group] = ACTIONS(59),
    [anon_sym_License] = ACTIONS(59),
    [anon_sym_Name] = ACTIONS(59),
    [anon_sym_Obsoletes] = ACTIONS(59),
    [anon_sym_Packager] = ACTIONS(59),
    [anon_sym_Prereq] = ACTIONS(59),
    [anon_sym_Provides] = ACTIONS(59),
    [anon_sym_Recommends] = ACTIONS(59),
    [anon_sym_Release] = ACTIONS(59),
    [anon_sym_Requires] = ACTIONS(59),
    [anon_sym_Suggests] = ACTIONS(59),
    [anon_sym_Summary] = ACTIONS(59),
    [anon_sym_Supplements] = ACTIONS(59),
    [anon_sym_URL] = ACTIONS(59),
    [anon_sym_Url] = ACTIONS(59),
    [anon_sym_Vendor] = ACTIONS(59),
    [anon_sym_Version] = ACTIONS(59),
    [aux_sym_name_token1] = ACTIONS(59),
    [aux_sym_name_token2] = ACTIONS(59),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(59),
    [anon_sym_BSLASH] = ACTIONS(59),
    [sym_string_content] = ACTIONS(59),
    [aux_sym__quoted_string_token1] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(59),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [aux_sym_spec_token1] = ACTIONS(63),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(63),
    [anon_sym_AutoReq] = ACTIONS(63),
    [anon_sym_AutoReqProv] = ACTIONS(63),
    [anon_sym_AutoRequires] = ACTIONS(63),
    [anon_sym_BuildArch] = ACTIONS(63),
    [anon_sym_BuildArchitectures] = ACTIONS(63),
    [anon_sym_BuildConflicts] = ACTIONS(63),
    [anon_sym_BuildPreReq] = ACTIONS(63),
    [anon_sym_BuildRequires] = ACTIONS(63),
    [anon_sym_BuildRoot] = ACTIONS(63),
    [anon_sym_Conflicts] = ACTIONS(63),
    [anon_sym_Distribution] = ACTIONS(63),
    [anon_sym_Enhances] = ACTIONS(63),
    [anon_sym_Epoch] = ACTIONS(63),
    [anon_sym_ExcludeArch] = ACTIONS(63),
    [anon_sym_ExclusiveArch] = ACTIONS(63),
    [anon_sym_ExclusiveOS] = ACTIONS(63),
    [anon_sym_Group] = ACTIONS(63),
    [anon_sym_License] = ACTIONS(63),
    [anon_sym_Name] = ACTIONS(63),
    [anon_sym_Obsoletes] = ACTIONS(63),
    [anon_sym_Packager] = ACTIONS(63),
    [anon_sym_Prereq] = ACTIONS(63),
    [anon_sym_Provides] = ACTIONS(63),
    [anon_sym_Recommends] = ACTIONS(63),
    [anon_sym_Release] = ACTIONS(63),
    [anon_sym_Requires] = ACTIONS(63),
    [anon_sym_Suggests] = ACTIONS(63),
    [anon_sym_Summary] = ACTIONS(63),
    [anon_sym_Supplements] = ACTIONS(63),
    [anon_sym_URL] = ACTIONS(63),
    [anon_sym_Url] = ACTIONS(63),
    [anon_sym_Vendor] = ACTIONS(63),
    [anon_sym_Version] = ACTIONS(63),
    [aux_sym_name_token1] = ACTIONS(63),
    [aux_sym_name_token2] = ACTIONS(63),
    [sym_integer] = ACTIONS(63),
    [sym_float] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(63),
    [sym_string_content] = ACTIONS(63),
    [aux_sym__quoted_string_token1] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(63),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [aux_sym_spec_token1] = ACTIONS(67),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(67),
    [anon_sym_AutoReq] = ACTIONS(67),
    [anon_sym_AutoReqProv] = ACTIONS(67),
    [anon_sym_AutoRequires] = ACTIONS(67),
    [anon_sym_BuildArch] = ACTIONS(67),
    [anon_sym_BuildArchitectures] = ACTIONS(67),
    [anon_sym_BuildConflicts] = ACTIONS(67),
    [anon_sym_BuildPreReq] = ACTIONS(67),
    [anon_sym_BuildRequires] = ACTIONS(67),
    [anon_sym_BuildRoot] = ACTIONS(67),
    [anon_sym_Conflicts] = ACTIONS(67),
    [anon_sym_Distribution] = ACTIONS(67),
    [anon_sym_Enhances] = ACTIONS(67),
    [anon_sym_Epoch] = ACTIONS(67),
    [anon_sym_ExcludeArch] = ACTIONS(67),
    [anon_sym_ExclusiveArch] = ACTIONS(67),
    [anon_sym_ExclusiveOS] = ACTIONS(67),
    [anon_sym_Group] = ACTIONS(67),
    [anon_sym_License] = ACTIONS(67),
    [anon_sym_Name] = ACTIONS(67),
    [anon_sym_Obsoletes] = ACTIONS(67),
    [anon_sym_Packager] = ACTIONS(67),
    [anon_sym_Prereq] = ACTIONS(67),
    [anon_sym_Provides] = ACTIONS(67),
    [anon_sym_Recommends] = ACTIONS(67),
    [anon_sym_Release] = ACTIONS(67),
    [anon_sym_Requires] = ACTIONS(67),
    [anon_sym_Suggests] = ACTIONS(67),
    [anon_sym_Summary] = ACTIONS(67),
    [anon_sym_Supplements] = ACTIONS(67),
    [anon_sym_URL] = ACTIONS(67),
    [anon_sym_Url] = ACTIONS(67),
    [anon_sym_Vendor] = ACTIONS(67),
    [anon_sym_Version] = ACTIONS(67),
    [aux_sym_name_token1] = ACTIONS(67),
    [aux_sym_name_token2] = ACTIONS(67),
    [sym_integer] = ACTIONS(67),
    [sym_float] = ACTIONS(67),
    [anon_sym_BSLASH] = ACTIONS(67),
    [sym_string_content] = ACTIONS(67),
    [aux_sym__quoted_string_token1] = ACTIONS(67),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(67),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [aux_sym_spec_token1] = ACTIONS(71),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(71),
    [anon_sym_AutoReq] = ACTIONS(71),
    [anon_sym_AutoReqProv] = ACTIONS(71),
    [anon_sym_AutoRequires] = ACTIONS(71),
    [anon_sym_BuildArch] = ACTIONS(71),
    [anon_sym_BuildArchitectures] = ACTIONS(71),
    [anon_sym_BuildConflicts] = ACTIONS(71),
    [anon_sym_BuildPreReq] = ACTIONS(71),
    [anon_sym_BuildRequires] = ACTIONS(71),
    [anon_sym_BuildRoot] = ACTIONS(71),
    [anon_sym_Conflicts] = ACTIONS(71),
    [anon_sym_Distribution] = ACTIONS(71),
    [anon_sym_Enhances] = ACTIONS(71),
    [anon_sym_Epoch] = ACTIONS(71),
    [anon_sym_ExcludeArch] = ACTIONS(71),
    [anon_sym_ExclusiveArch] = ACTIONS(71),
    [anon_sym_ExclusiveOS] = ACTIONS(71),
    [anon_sym_Group] = ACTIONS(71),
    [anon_sym_License] = ACTIONS(71),
    [anon_sym_Name] = ACTIONS(71),
    [anon_sym_Obsoletes] = ACTIONS(71),
    [anon_sym_Packager] = ACTIONS(71),
    [anon_sym_Prereq] = ACTIONS(71),
    [anon_sym_Provides] = ACTIONS(71),
    [anon_sym_Recommends] = ACTIONS(71),
    [anon_sym_Release] = ACTIONS(71),
    [anon_sym_Requires] = ACTIONS(71),
    [anon_sym_Suggests] = ACTIONS(71),
    [anon_sym_Summary] = ACTIONS(71),
    [anon_sym_Supplements] = ACTIONS(71),
    [anon_sym_URL] = ACTIONS(71),
    [anon_sym_Url] = ACTIONS(71),
    [anon_sym_Vendor] = ACTIONS(71),
    [anon_sym_Version] = ACTIONS(71),
    [aux_sym_name_token1] = ACTIONS(71),
    [aux_sym_name_token2] = ACTIONS(71),
    [sym_integer] = ACTIONS(71),
    [sym_float] = ACTIONS(71),
    [anon_sym_BSLASH] = ACTIONS(71),
    [sym_string_content] = ACTIONS(71),
    [aux_sym__quoted_string_token1] = ACTIONS(71),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(71),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [aux_sym_spec_token1] = ACTIONS(75),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(75),
    [anon_sym_AutoReq] = ACTIONS(75),
    [anon_sym_AutoReqProv] = ACTIONS(75),
    [anon_sym_AutoRequires] = ACTIONS(75),
    [anon_sym_BuildArch] = ACTIONS(75),
    [anon_sym_BuildArchitectures] = ACTIONS(75),
    [anon_sym_BuildConflicts] = ACTIONS(75),
    [anon_sym_BuildPreReq] = ACTIONS(75),
    [anon_sym_BuildRequires] = ACTIONS(75),
    [anon_sym_BuildRoot] = ACTIONS(75),
    [anon_sym_Conflicts] = ACTIONS(75),
    [anon_sym_Distribution] = ACTIONS(75),
    [anon_sym_Enhances] = ACTIONS(75),
    [anon_sym_Epoch] = ACTIONS(75),
    [anon_sym_ExcludeArch] = ACTIONS(75),
    [anon_sym_ExclusiveArch] = ACTIONS(75),
    [anon_sym_ExclusiveOS] = ACTIONS(75),
    [anon_sym_Group] = ACTIONS(75),
    [anon_sym_License] = ACTIONS(75),
    [anon_sym_Name] = ACTIONS(75),
    [anon_sym_Obsoletes] = ACTIONS(75),
    [anon_sym_Packager] = ACTIONS(75),
    [anon_sym_Prereq] = ACTIONS(75),
    [anon_sym_Provides] = ACTIONS(75),
    [anon_sym_Recommends] = ACTIONS(75),
    [anon_sym_Release] = ACTIONS(75),
    [anon_sym_Requires] = ACTIONS(75),
    [anon_sym_Suggests] = ACTIONS(75),
    [anon_sym_Summary] = ACTIONS(75),
    [anon_sym_Supplements] = ACTIONS(75),
    [anon_sym_URL] = ACTIONS(75),
    [anon_sym_Url] = ACTIONS(75),
    [anon_sym_Vendor] = ACTIONS(75),
    [anon_sym_Version] = ACTIONS(75),
    [aux_sym_name_token1] = ACTIONS(75),
    [aux_sym_name_token2] = ACTIONS(75),
    [sym_integer] = ACTIONS(75),
    [sym_float] = ACTIONS(75),
    [anon_sym_BSLASH] = ACTIONS(75),
    [sym_string_content] = ACTIONS(75),
    [aux_sym__quoted_string_token1] = ACTIONS(75),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(75),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_spec_token1] = ACTIONS(79),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(79),
    [anon_sym_AutoReq] = ACTIONS(79),
    [anon_sym_AutoReqProv] = ACTIONS(79),
    [anon_sym_AutoRequires] = ACTIONS(79),
    [anon_sym_BuildArch] = ACTIONS(79),
    [anon_sym_BuildArchitectures] = ACTIONS(79),
    [anon_sym_BuildConflicts] = ACTIONS(79),
    [anon_sym_BuildPreReq] = ACTIONS(79),
    [anon_sym_BuildRequires] = ACTIONS(79),
    [anon_sym_BuildRoot] = ACTIONS(79),
    [anon_sym_Conflicts] = ACTIONS(79),
    [anon_sym_Distribution] = ACTIONS(79),
    [anon_sym_Enhances] = ACTIONS(79),
    [anon_sym_Epoch] = ACTIONS(79),
    [anon_sym_ExcludeArch] = ACTIONS(79),
    [anon_sym_ExclusiveArch] = ACTIONS(79),
    [anon_sym_ExclusiveOS] = ACTIONS(79),
    [anon_sym_Group] = ACTIONS(79),
    [anon_sym_License] = ACTIONS(79),
    [anon_sym_Name] = ACTIONS(79),
    [anon_sym_Obsoletes] = ACTIONS(79),
    [anon_sym_Packager] = ACTIONS(79),
    [anon_sym_Prereq] = ACTIONS(79),
    [anon_sym_Provides] = ACTIONS(79),
    [anon_sym_Recommends] = ACTIONS(79),
    [anon_sym_Release] = ACTIONS(79),
    [anon_sym_Requires] = ACTIONS(79),
    [anon_sym_Suggests] = ACTIONS(79),
    [anon_sym_Summary] = ACTIONS(79),
    [anon_sym_Supplements] = ACTIONS(79),
    [anon_sym_URL] = ACTIONS(79),
    [anon_sym_Url] = ACTIONS(79),
    [anon_sym_Vendor] = ACTIONS(79),
    [anon_sym_Version] = ACTIONS(79),
    [aux_sym_name_token1] = ACTIONS(79),
    [aux_sym_name_token2] = ACTIONS(79),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(79),
    [sym_string_content] = ACTIONS(79),
    [aux_sym__quoted_string_token1] = ACTIONS(79),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(79),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [aux_sym_spec_token1] = ACTIONS(83),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(83),
    [anon_sym_AutoReq] = ACTIONS(83),
    [anon_sym_AutoReqProv] = ACTIONS(83),
    [anon_sym_AutoRequires] = ACTIONS(83),
    [anon_sym_BuildArch] = ACTIONS(83),
    [anon_sym_BuildArchitectures] = ACTIONS(83),
    [anon_sym_BuildConflicts] = ACTIONS(83),
    [anon_sym_BuildPreReq] = ACTIONS(83),
    [anon_sym_BuildRequires] = ACTIONS(83),
    [anon_sym_BuildRoot] = ACTIONS(83),
    [anon_sym_Conflicts] = ACTIONS(83),
    [anon_sym_Distribution] = ACTIONS(83),
    [anon_sym_Enhances] = ACTIONS(83),
    [anon_sym_Epoch] = ACTIONS(83),
    [anon_sym_ExcludeArch] = ACTIONS(83),
    [anon_sym_ExclusiveArch] = ACTIONS(83),
    [anon_sym_ExclusiveOS] = ACTIONS(83),
    [anon_sym_Group] = ACTIONS(83),
    [anon_sym_License] = ACTIONS(83),
    [anon_sym_Name] = ACTIONS(83),
    [anon_sym_Obsoletes] = ACTIONS(83),
    [anon_sym_Packager] = ACTIONS(83),
    [anon_sym_Prereq] = ACTIONS(83),
    [anon_sym_Provides] = ACTIONS(83),
    [anon_sym_Recommends] = ACTIONS(83),
    [anon_sym_Release] = ACTIONS(83),
    [anon_sym_Requires] = ACTIONS(83),
    [anon_sym_Suggests] = ACTIONS(83),
    [anon_sym_Summary] = ACTIONS(83),
    [anon_sym_Supplements] = ACTIONS(83),
    [anon_sym_URL] = ACTIONS(83),
    [anon_sym_Url] = ACTIONS(83),
    [anon_sym_Vendor] = ACTIONS(83),
    [anon_sym_Version] = ACTIONS(83),
    [aux_sym_name_token1] = ACTIONS(83),
    [aux_sym_name_token2] = ACTIONS(83),
    [sym_integer] = ACTIONS(83),
    [sym_float] = ACTIONS(83),
    [anon_sym_BSLASH] = ACTIONS(83),
    [sym_string_content] = ACTIONS(83),
    [aux_sym__quoted_string_token1] = ACTIONS(83),
    [anon_sym_PERCENT] = ACTIONS(83),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(83),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [aux_sym_spec_token1] = ACTIONS(87),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AutoProv] = ACTIONS(87),
    [anon_sym_AutoReq] = ACTIONS(87),
    [anon_sym_AutoReqProv] = ACTIONS(87),
    [anon_sym_AutoRequires] = ACTIONS(87),
    [anon_sym_BuildArch] = ACTIONS(87),
    [anon_sym_BuildArchitectures] = ACTIONS(87),
    [anon_sym_BuildConflicts] = ACTIONS(87),
    [anon_sym_BuildPreReq] = ACTIONS(87),
    [anon_sym_BuildRequires] = ACTIONS(87),
    [anon_sym_BuildRoot] = ACTIONS(87),
    [anon_sym_Conflicts] = ACTIONS(87),
    [anon_sym_Distribution] = ACTIONS(87),
    [anon_sym_Enhances] = ACTIONS(87),
    [anon_sym_Epoch] = ACTIONS(87),
    [anon_sym_ExcludeArch] = ACTIONS(87),
    [anon_sym_ExclusiveArch] = ACTIONS(87),
    [anon_sym_ExclusiveOS] = ACTIONS(87),
    [anon_sym_Group] = ACTIONS(87),
    [anon_sym_License] = ACTIONS(87),
    [anon_sym_Name] = ACTIONS(87),
    [anon_sym_Obsoletes] = ACTIONS(87),
    [anon_sym_Packager] = ACTIONS(87),
    [anon_sym_Prereq] = ACTIONS(87),
    [anon_sym_Provides] = ACTIONS(87),
    [anon_sym_Recommends] = ACTIONS(87),
    [anon_sym_Release] = ACTIONS(87),
    [anon_sym_Requires] = ACTIONS(87),
    [anon_sym_Suggests] = ACTIONS(87),
    [anon_sym_Summary] = ACTIONS(87),
    [anon_sym_Supplements] = ACTIONS(87),
    [anon_sym_URL] = ACTIONS(87),
    [anon_sym_Url] = ACTIONS(87),
    [anon_sym_Vendor] = ACTIONS(87),
    [anon_sym_Version] = ACTIONS(87),
    [aux_sym_name_token1] = ACTIONS(87),
    [aux_sym_name_token2] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(87),
    [anon_sym_BSLASH] = ACTIONS(87),
    [sym_string_content] = ACTIONS(87),
    [aux_sym__quoted_string_token1] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(87),
  },
  [13] = {
    [sym_preamble] = STATE(14),
    [sym_variable] = STATE(15),
    [sym_name] = STATE(37),
    [aux_sym_spec_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(89),
    [aux_sym_spec_token1] = ACTIONS(91),
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
  [14] = {
    [sym_preamble] = STATE(14),
    [sym_variable] = STATE(15),
    [sym_name] = STATE(37),
    [aux_sym_spec_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(93),
    [aux_sym_spec_token1] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(98),
    [anon_sym_AutoReq] = ACTIONS(101),
    [anon_sym_AutoReqProv] = ACTIONS(98),
    [anon_sym_AutoRequires] = ACTIONS(98),
    [anon_sym_BuildArch] = ACTIONS(101),
    [anon_sym_BuildArchitectures] = ACTIONS(98),
    [anon_sym_BuildConflicts] = ACTIONS(98),
    [anon_sym_BuildPreReq] = ACTIONS(98),
    [anon_sym_BuildRequires] = ACTIONS(98),
    [anon_sym_BuildRoot] = ACTIONS(98),
    [anon_sym_Conflicts] = ACTIONS(98),
    [anon_sym_Distribution] = ACTIONS(98),
    [anon_sym_Enhances] = ACTIONS(98),
    [anon_sym_Epoch] = ACTIONS(98),
    [anon_sym_ExcludeArch] = ACTIONS(98),
    [anon_sym_ExclusiveArch] = ACTIONS(98),
    [anon_sym_ExclusiveOS] = ACTIONS(98),
    [anon_sym_Group] = ACTIONS(98),
    [anon_sym_License] = ACTIONS(98),
    [anon_sym_Name] = ACTIONS(98),
    [anon_sym_Obsoletes] = ACTIONS(98),
    [anon_sym_Packager] = ACTIONS(98),
    [anon_sym_Prereq] = ACTIONS(98),
    [anon_sym_Provides] = ACTIONS(98),
    [anon_sym_Recommends] = ACTIONS(98),
    [anon_sym_Release] = ACTIONS(98),
    [anon_sym_Requires] = ACTIONS(98),
    [anon_sym_Suggests] = ACTIONS(98),
    [anon_sym_Summary] = ACTIONS(98),
    [anon_sym_Supplements] = ACTIONS(98),
    [anon_sym_URL] = ACTIONS(98),
    [anon_sym_Url] = ACTIONS(98),
    [anon_sym_Vendor] = ACTIONS(98),
    [anon_sym_Version] = ACTIONS(98),
    [aux_sym_name_token1] = ACTIONS(98),
    [aux_sym_name_token2] = ACTIONS(98),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [aux_sym_spec_token1] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AutoProv] = ACTIONS(104),
    [anon_sym_AutoReq] = ACTIONS(106),
    [anon_sym_AutoReqProv] = ACTIONS(104),
    [anon_sym_AutoRequires] = ACTIONS(104),
    [anon_sym_BuildArch] = ACTIONS(106),
    [anon_sym_BuildArchitectures] = ACTIONS(104),
    [anon_sym_BuildConflicts] = ACTIONS(104),
    [anon_sym_BuildPreReq] = ACTIONS(104),
    [anon_sym_BuildRequires] = ACTIONS(104),
    [anon_sym_BuildRoot] = ACTIONS(104),
    [anon_sym_Conflicts] = ACTIONS(104),
    [anon_sym_Distribution] = ACTIONS(104),
    [anon_sym_Enhances] = ACTIONS(104),
    [anon_sym_Epoch] = ACTIONS(104),
    [anon_sym_ExcludeArch] = ACTIONS(104),
    [anon_sym_ExclusiveArch] = ACTIONS(104),
    [anon_sym_ExclusiveOS] = ACTIONS(104),
    [anon_sym_Group] = ACTIONS(104),
    [anon_sym_License] = ACTIONS(104),
    [anon_sym_Name] = ACTIONS(104),
    [anon_sym_Obsoletes] = ACTIONS(104),
    [anon_sym_Packager] = ACTIONS(104),
    [anon_sym_Prereq] = ACTIONS(104),
    [anon_sym_Provides] = ACTIONS(104),
    [anon_sym_Recommends] = ACTIONS(104),
    [anon_sym_Release] = ACTIONS(104),
    [anon_sym_Requires] = ACTIONS(104),
    [anon_sym_Suggests] = ACTIONS(104),
    [anon_sym_Summary] = ACTIONS(104),
    [anon_sym_Supplements] = ACTIONS(104),
    [anon_sym_URL] = ACTIONS(104),
    [anon_sym_Url] = ACTIONS(104),
    [anon_sym_Vendor] = ACTIONS(104),
    [anon_sym_Version] = ACTIONS(104),
    [aux_sym_name_token1] = ACTIONS(104),
    [aux_sym_name_token2] = ACTIONS(104),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH,
    ACTIONS(45), 1,
      sym_string_content,
    ACTIONS(47), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(49), 1,
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(108), 2,
      sym_integer,
      sym_float,
    STATE(11), 2,
      sym__quoted_string,
      sym__unquoted_string,
    STATE(3), 4,
      aux_sym__value,
      sym_string,
      sym_simple_expansion,
      sym_expansion,
  [33] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_string_content,
    ACTIONS(112), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(114), 1,
      anon_sym_PERCENT,
    ACTIONS(116), 1,
      anon_sym_PERCENT_LBRACE,
    STATE(19), 3,
      sym_simple_expansion,
      sym_expansion,
      aux_sym__quoted_string_repeat1,
  [54] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(118), 1,
      sym_string_content,
    ACTIONS(120), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(122), 1,
      anon_sym_PERCENT,
    STATE(17), 3,
      sym_simple_expansion,
      sym_expansion,
      aux_sym__quoted_string_repeat1,
  [75] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_string_content,
    ACTIONS(127), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(132), 1,
      anon_sym_PERCENT_LBRACE,
    STATE(19), 3,
      sym_simple_expansion,
      sym_expansion,
      aux_sym__quoted_string_repeat1,
  [96] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(135), 1,
      sym_string_content,
    ACTIONS(137), 1,
      sym_variable_name,
    ACTIONS(139), 1,
      anon_sym_QMARK,
  [112] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(79), 4,
      sym_string_content,
      aux_sym__quoted_string_token1,
      anon_sym_PERCENT,
      anon_sym_PERCENT_LBRACE,
  [122] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(127), 4,
      sym_string_content,
      aux_sym__quoted_string_token1,
      anon_sym_PERCENT,
      anon_sym_PERCENT_LBRACE,
  [132] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_string_content,
    ACTIONS(137), 1,
      sym_variable_name,
    ACTIONS(139), 1,
      anon_sym_QMARK,
    ACTIONS(141), 1,
      aux_sym__quoted_string_token1,
  [148] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(67), 4,
      sym_string_content,
      aux_sym__quoted_string_token1,
      anon_sym_PERCENT,
      anon_sym_PERCENT_LBRACE,
  [158] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(63), 4,
      sym_string_content,
      aux_sym__quoted_string_token1,
      anon_sym_PERCENT,
      anon_sym_PERCENT_LBRACE,
  [168] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(71), 4,
      sym_string_content,
      aux_sym__quoted_string_token1,
      anon_sym_PERCENT,
      anon_sym_PERCENT_LBRACE,
  [178] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_string_content,
    ACTIONS(137), 1,
      sym_variable_name,
    ACTIONS(139), 1,
      anon_sym_QMARK,
  [191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_variable_name,
    ACTIONS(145), 1,
      anon_sym_QMARK,
  [201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_variable_name,
    ACTIONS(149), 1,
      anon_sym_QMARK,
  [211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_variable_name,
    ACTIONS(153), 1,
      anon_sym_QMARK,
  [221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_variable_name,
  [228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
  [235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_variable_name,
  [242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym_variable_token1,
  [249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
  [256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_spec_token1,
  [263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_variable_token1,
  [270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_variable_name,
  [277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
  [284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
  [291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
  [298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_variable_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 33,
  [SMALL_STATE(18)] = 54,
  [SMALL_STATE(19)] = 75,
  [SMALL_STATE(20)] = 96,
  [SMALL_STATE(21)] = 112,
  [SMALL_STATE(22)] = 122,
  [SMALL_STATE(23)] = 132,
  [SMALL_STATE(24)] = 148,
  [SMALL_STATE(25)] = 158,
  [SMALL_STATE(26)] = 168,
  [SMALL_STATE(27)] = 178,
  [SMALL_STATE(28)] = 191,
  [SMALL_STATE(29)] = 201,
  [SMALL_STATE(30)] = 211,
  [SMALL_STATE(31)] = 221,
  [SMALL_STATE(32)] = 228,
  [SMALL_STATE(33)] = 235,
  [SMALL_STATE(34)] = 242,
  [SMALL_STATE(35)] = 249,
  [SMALL_STATE(36)] = 256,
  [SMALL_STATE(37)] = 263,
  [SMALL_STATE(38)] = 270,
  [SMALL_STATE(39)] = 277,
  [SMALL_STATE(40)] = 284,
  [SMALL_STATE(41)] = 291,
  [SMALL_STATE(42)] = 298,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(36),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(11),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(18),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(30),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 4),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expansion, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expansion, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expansion, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expansion, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(14),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(34),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(34),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preamble, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(19),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(27),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(28),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [175] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
