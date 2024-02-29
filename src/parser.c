#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_preamble_section_token1 = 1,
  anon_sym_Name = 2,
  anon_sym_Version = 3,
  anon_sym_Release = 4,
  anon_sym_COLON = 5,
  sym_comment = 6,
  sym_integer = 7,
  sym_escape_sequence = 8,
  anon_sym_DQUOTE = 9,
  aux_sym__quoted_string_token1 = 10,
  sym__unquoted_string = 11,
  anon_sym_BSLASH = 12,
  sym_spec = 13,
  sym_preamble_section = 14,
  sym_preamble_value = 15,
  sym_preamble_name = 16,
  sym_preamble_variable = 17,
  sym__quoted_string = 18,
  sym_string = 19,
  aux_sym_spec_repeat1 = 20,
  aux_sym__quoted_string_repeat1 = 21,
  aux_sym_string_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_preamble_section_token1] = "preamble_section_token1",
  [anon_sym_Name] = "Name",
  [anon_sym_Version] = "Version",
  [anon_sym_Release] = "Release",
  [anon_sym_COLON] = ": ",
  [sym_comment] = "comment",
  [sym_integer] = "integer",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_string_token1] = "_quoted_string_token1",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_BSLASH] = "\\",
  [sym_spec] = "spec",
  [sym_preamble_section] = "preamble_section",
  [sym_preamble_value] = "preamble_value",
  [sym_preamble_name] = "preamble_name",
  [sym_preamble_variable] = "preamble_variable",
  [sym__quoted_string] = "_quoted_string",
  [sym_string] = "string",
  [aux_sym_spec_repeat1] = "spec_repeat1",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_preamble_section_token1] = aux_sym_preamble_section_token1,
  [anon_sym_Name] = anon_sym_Name,
  [anon_sym_Version] = anon_sym_Version,
  [anon_sym_Release] = anon_sym_Release,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_comment] = sym_comment,
  [sym_integer] = sym_integer,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_string_token1] = aux_sym__quoted_string_token1,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_spec] = sym_spec,
  [sym_preamble_section] = sym_preamble_section,
  [sym_preamble_value] = sym_preamble_value,
  [sym_preamble_name] = sym_preamble_name,
  [sym_preamble_variable] = sym_preamble_variable,
  [sym__quoted_string] = sym__quoted_string,
  [sym_string] = sym_string,
  [aux_sym_spec_repeat1] = aux_sym_spec_repeat1,
  [aux_sym__quoted_string_repeat1] = aux_sym__quoted_string_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_preamble_section_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Release] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble_section] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble_value] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble_name] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') SKIP(32)
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 'N') ADVANCE(9);
      if (lookahead == 'R') ADVANCE(11);
      if (lookahead == 'V') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(4)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == 11) SKIP(6)
      END_STATE();
    case 4:
      if (lookahead == '\f') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == 'U') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 32:
      if (eof) ADVANCE(39);
      if (lookahead == '\t') SKIP(37)
      END_STATE();
    case 33:
      if (eof) ADVANCE(39);
      if (lookahead == '\t') SKIP(38)
      END_STATE();
    case 34:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') SKIP(33)
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == 'R') ADVANCE(56);
      if (lookahead == 'V') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead) &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 35:
      if (eof) ADVANCE(39);
      if (lookahead == 11) SKIP(0)
      END_STATE();
    case 36:
      if (eof) ADVANCE(39);
      if (lookahead == 11) SKIP(34)
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '\f') SKIP(35)
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '\f') SKIP(36)
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_preamble_section_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_Name);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_Name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_Version);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_Version);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_Release);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_Release);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'U') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_preamble_section_token1] = ACTIONS(1),
    [anon_sym_Name] = ACTIONS(1),
    [anon_sym_Version] = ACTIONS(1),
    [anon_sym_Release] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_spec] = STATE(18),
    [sym_preamble_section] = STATE(5),
    [sym_preamble_name] = STATE(9),
    [sym_preamble_variable] = STATE(12),
    [aux_sym_spec_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_preamble_section_token1] = ACTIONS(5),
    [anon_sym_Name] = ACTIONS(7),
    [anon_sym_Version] = ACTIONS(7),
    [anon_sym_Release] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(18), 1,
      sym__unquoted_string,
    ACTIONS(21), 1,
      anon_sym_BSLASH,
    STATE(2), 2,
      sym__quoted_string,
      aux_sym_string_repeat1,
    ACTIONS(11), 3,
      ts_builtin_sym_end,
      aux_sym_preamble_section_token1,
      sym_comment,
    ACTIONS(13), 3,
      anon_sym_Name,
      anon_sym_Version,
      anon_sym_Release,
  [24] = 6,
    ACTIONS(28), 1,
      anon_sym_DQUOTE,
    ACTIONS(30), 1,
      sym__unquoted_string,
    ACTIONS(32), 1,
      anon_sym_BSLASH,
    STATE(2), 2,
      sym__quoted_string,
      aux_sym_string_repeat1,
    ACTIONS(24), 3,
      ts_builtin_sym_end,
      aux_sym_preamble_section_token1,
      sym_comment,
    ACTIONS(26), 3,
      anon_sym_Name,
      anon_sym_Version,
      anon_sym_Release,
  [48] = 7,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      aux_sym_preamble_section_token1,
    ACTIONS(42), 1,
      sym_comment,
    STATE(9), 1,
      sym_preamble_name,
    STATE(12), 1,
      sym_preamble_variable,
    STATE(4), 2,
      sym_preamble_section,
      aux_sym_spec_repeat1,
    ACTIONS(39), 3,
      anon_sym_Name,
      anon_sym_Version,
      anon_sym_Release,
  [73] = 7,
    ACTIONS(5), 1,
      aux_sym_preamble_section_token1,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_preamble_name,
    STATE(12), 1,
      sym_preamble_variable,
    STATE(4), 2,
      sym_preamble_section,
      aux_sym_spec_repeat1,
    ACTIONS(7), 3,
      anon_sym_Name,
      anon_sym_Version,
      anon_sym_Release,
  [98] = 2,
    ACTIONS(13), 4,
      anon_sym_Name,
      anon_sym_Version,
      anon_sym_Release,
      sym__unquoted_string,
    ACTIONS(11), 5,
      ts_builtin_sym_end,
      aux_sym_preamble_section_token1,
      sym_comment,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [112] = 2,
    ACTIONS(49), 4,
      anon_sym_Name,
      anon_sym_Version,
      anon_sym_Release,
      sym__unquoted_string,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      aux_sym_preamble_section_token1,
      sym_comment,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [126] = 7,
    ACTIONS(28), 1,
      anon_sym_DQUOTE,
    ACTIONS(32), 1,
      anon_sym_BSLASH,
    ACTIONS(51), 1,
      sym_integer,
    ACTIONS(53), 1,
      sym__unquoted_string,
    STATE(13), 1,
      sym_string,
    STATE(14), 1,
      sym_preamble_value,
    STATE(3), 2,
      sym__quoted_string,
      aux_sym_string_repeat1,
  [149] = 2,
    ACTIONS(57), 1,
      anon_sym_COLON,
    ACTIONS(55), 6,
      ts_builtin_sym_end,
      aux_sym_preamble_section_token1,
      anon_sym_Name,
      anon_sym_Version,
      anon_sym_Release,
      sym_comment,
  [161] = 1,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      aux_sym_preamble_section_token1,
      anon_sym_Name,
      anon_sym_Version,
      anon_sym_Release,
      anon_sym_COLON,
      sym_comment,
  [171] = 1,
    ACTIONS(61), 6,
      ts_builtin_sym_end,
      aux_sym_preamble_section_token1,
      anon_sym_Name,
      anon_sym_Version,
      anon_sym_Release,
      sym_comment,
  [180] = 1,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      aux_sym_preamble_section_token1,
      anon_sym_Name,
      anon_sym_Version,
      anon_sym_Release,
      sym_comment,
  [189] = 1,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      aux_sym_preamble_section_token1,
      anon_sym_Name,
      anon_sym_Version,
      anon_sym_Release,
      sym_comment,
  [198] = 1,
    ACTIONS(67), 6,
      ts_builtin_sym_end,
      aux_sym_preamble_section_token1,
      anon_sym_Name,
      anon_sym_Version,
      anon_sym_Release,
      sym_comment,
  [207] = 4,
    ACTIONS(69), 1,
      sym_escape_sequence,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      aux_sym__quoted_string_token1,
    STATE(16), 1,
      aux_sym__quoted_string_repeat1,
  [220] = 4,
    ACTIONS(75), 1,
      sym_escape_sequence,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      aux_sym__quoted_string_token1,
    STATE(16), 1,
      aux_sym__quoted_string_repeat1,
  [233] = 3,
    ACTIONS(83), 1,
      sym_escape_sequence,
    ACTIONS(85), 1,
      aux_sym__quoted_string_token1,
    STATE(15), 1,
      aux_sym__quoted_string_repeat1,
  [243] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
  [247] = 1,
    ACTIONS(89), 1,
      aux_sym_preamble_section_token1,
  [251] = 1,
    ACTIONS(91), 1,
      aux_sym_preamble_section_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 149,
  [SMALL_STATE(10)] = 161,
  [SMALL_STATE(11)] = 171,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 189,
  [SMALL_STATE(14)] = 198,
  [SMALL_STATE(15)] = 207,
  [SMALL_STATE(16)] = 220,
  [SMALL_STATE(17)] = 233,
  [SMALL_STATE(18)] = 243,
  [SMALL_STATE(19)] = 247,
  [SMALL_STATE(20)] = 251,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(17),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(19),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(12),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(10),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_spec_repeat1, 2), SHIFT_REPEAT(20),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble_variable, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble_name, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble_section, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble_section, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble_value, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preamble_variable, 3, .production_id = 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(16),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(16),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [87] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
