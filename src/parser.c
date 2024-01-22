#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_input = 1,
  anon_sym_filter = 2,
  anon_sym_output = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_EQ_GT = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  sym_integer_literal = 9,
  sym_float_literal = 10,
  sym_bytes_literal = 11,
  aux_sym_string_literal_token1 = 12,
  sym_hash_key = 13,
  sym_identifier = 14,
  anon_sym_POUND = 15,
  aux_sym_comment_token1 = 16,
  sym_source_file = 17,
  sym__section_definition = 18,
  sym_input_definition = 19,
  sym_filter_definition = 20,
  sym_output_definition = 21,
  sym_section_block = 22,
  sym_plugin_definition = 23,
  sym_plugin_block = 24,
  sym_setting_statement = 25,
  sym__value = 26,
  sym_boolean_literal = 27,
  sym__number_literal = 28,
  sym_string_literal = 29,
  sym_hash = 30,
  sym_hash_entry = 31,
  sym_hash_value = 32,
  sym_comment = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_section_block_repeat1 = 35,
  aux_sym_plugin_block_repeat1 = 36,
  aux_sym_hash_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_input] = "input",
  [anon_sym_filter] = "filter",
  [anon_sym_output] = "output",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [sym_bytes_literal] = "bytes_literal",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_hash_key] = "hash_key",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym__section_definition] = "_section_definition",
  [sym_input_definition] = "input_definition",
  [sym_filter_definition] = "filter_definition",
  [sym_output_definition] = "output_definition",
  [sym_section_block] = "section_block",
  [sym_plugin_definition] = "plugin_definition",
  [sym_plugin_block] = "plugin_block",
  [sym_setting_statement] = "setting_statement",
  [sym__value] = "_value",
  [sym_boolean_literal] = "boolean_literal",
  [sym__number_literal] = "_number_literal",
  [sym_string_literal] = "string_literal",
  [sym_hash] = "hash",
  [sym_hash_entry] = "hash_entry",
  [sym_hash_value] = "hash_value",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_section_block_repeat1] = "section_block_repeat1",
  [aux_sym_plugin_block_repeat1] = "plugin_block_repeat1",
  [aux_sym_hash_repeat1] = "hash_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer_literal] = sym_integer_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_bytes_literal] = sym_bytes_literal,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_hash_key] = sym_hash_key,
  [sym_identifier] = sym_identifier,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym__section_definition] = sym__section_definition,
  [sym_input_definition] = sym_input_definition,
  [sym_filter_definition] = sym_filter_definition,
  [sym_output_definition] = sym_output_definition,
  [sym_section_block] = sym_section_block,
  [sym_plugin_definition] = sym_plugin_definition,
  [sym_plugin_block] = sym_plugin_block,
  [sym_setting_statement] = sym_setting_statement,
  [sym__value] = sym__value,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym__number_literal] = sym__number_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_hash] = sym_hash,
  [sym_hash_entry] = sym_hash_entry,
  [sym_hash_value] = sym_hash_value,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_section_block_repeat1] = aux_sym_section_block_repeat1,
  [aux_sym_plugin_block_repeat1] = aux_sym_plugin_block_repeat1,
  [aux_sym_hash_repeat1] = aux_sym_hash_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_bytes_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_hash_key] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__section_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_input_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_output_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_section_block] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin_block] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__number_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_value] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_plugin_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hash_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static inline bool aux_sym_string_literal_token1_character_set_1(int32_t c) {
  return (c < 'e'
    ? (c < 'M'
      ? (c < 'G'
        ? c == 'E'
        : (c <= 'G' || c == 'K'))
      : (c <= 'M' || (c < 'T'
        ? c == 'P'
        : (c <= 'T' || (c >= 'Y' && c <= 'Z')))))
    : (c <= 'e' || (c < 'p'
      ? (c < 'k'
        ? c == 'g'
        : (c <= 'k' || c == 'm'))
      : (c <= 'p' || (c < 'y'
        ? c == 't'
        : c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(69);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '0') ADVANCE(78);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '\\') SKIP(68)
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == 'B') ADVANCE(20);
      if (lookahead == 'I') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == 'B') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(20);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(10);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(20);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(65);
      if (aux_sym_string_literal_token1_character_set_1(lookahead)) ADVANCE(9);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          lookahead == 'T' ||
          lookahead == 'Y' ||
          lookahead == 'Z') ADVANCE(9);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 'p' ||
          lookahead == 't' ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'x')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (aux_sym_string_literal_token1_character_set_1(lookahead)) ADVANCE(9);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '0') ADVANCE(78);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == 'B') ADVANCE(36);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == 'B') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(27);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(36);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(66);
      if (aux_sym_string_literal_token1_character_set_1(lookahead)) ADVANCE(26);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          lookahead == 'T' ||
          lookahead == 'Y' ||
          lookahead == 'Z') ADVANCE(26);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 'p' ||
          lookahead == 't' ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'x')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (aux_sym_string_literal_token1_character_set_1(lookahead)) ADVANCE(26);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(78);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 63:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 64:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 65:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(15);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(66);
      END_STATE();
    case 67:
      if (eof) ADVANCE(69);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(67)
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_bytes_literal);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_hash_key);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 22},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 90},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_bytes_literal] = ACTIONS(1),
    [aux_sym_string_literal_token1] = ACTIONS(1),
    [sym_hash_key] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym__section_definition] = STATE(8),
    [sym_input_definition] = STATE(9),
    [sym_filter_definition] = STATE(9),
    [sym_output_definition] = STATE(9),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_input] = ACTIONS(7),
    [anon_sym_filter] = ACTIONS(9),
    [anon_sym_output] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_integer_literal,
    ACTIONS(19), 1,
      sym_float_literal,
    ACTIONS(21), 1,
      sym_bytes_literal,
    ACTIONS(23), 1,
      aux_sym_string_literal_token1,
    STATE(2), 1,
      sym_comment,
    STATE(36), 1,
      sym__value,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 4,
      sym_boolean_literal,
      sym__number_literal,
      sym_string_literal,
      sym_hash,
  [35] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      anon_sym_input,
    ACTIONS(9), 1,
      anon_sym_filter,
    ACTIONS(11), 1,
      anon_sym_output,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      sym__section_definition,
    STATE(9), 3,
      sym_input_definition,
      sym_filter_definition,
      sym_output_definition,
  [65] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_input,
    ACTIONS(32), 1,
      anon_sym_filter,
    ACTIONS(35), 1,
      anon_sym_output,
    STATE(8), 1,
      sym__section_definition,
    STATE(4), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(9), 3,
      sym_input_definition,
      sym_filter_definition,
      sym_output_definition,
  [93] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(5), 1,
      sym_comment,
    ACTIONS(38), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [106] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    ACTIONS(42), 1,
      sym_identifier,
    STATE(30), 1,
      sym_plugin_definition,
    STATE(6), 2,
      sym_comment,
      aux_sym_section_block_repeat1,
  [123] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      sym_hash_key,
    STATE(39), 1,
      sym_hash_entry,
    STATE(7), 2,
      sym_comment,
      aux_sym_hash_repeat1,
  [140] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [153] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [166] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      sym_hash_key,
    STATE(7), 1,
      aux_sym_hash_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(39), 1,
      sym_hash_entry,
  [185] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(11), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_section_block_repeat1,
    STATE(30), 1,
      sym_plugin_definition,
  [204] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [217] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [230] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [243] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(56), 1,
      sym_hash_key,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_hash_repeat1,
    STATE(15), 1,
      sym_comment,
    STATE(39), 1,
      sym_hash_entry,
  [262] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [275] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      sym_identifier,
    STATE(21), 1,
      sym_setting_statement,
    STATE(17), 2,
      sym_comment,
      aux_sym_plugin_block_repeat1,
  [292] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(17), 1,
      aux_sym_plugin_block_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(21), 1,
      sym_setting_statement,
  [311] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_section_block_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(30), 1,
      sym_plugin_definition,
  [330] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_plugin_block_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(21), 1,
      sym_setting_statement,
  [349] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [360] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(87), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [371] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_section_block,
    STATE(23), 1,
      sym_comment,
  [384] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(91), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [395] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(93), 2,
      anon_sym_RBRACE,
      sym_hash_key,
  [406] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_section_block,
    STATE(26), 1,
      sym_comment,
  [419] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(95), 2,
      anon_sym_RBRACE,
      sym_hash_key,
  [430] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_section_block,
    STATE(28), 1,
      sym_comment,
  [443] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [454] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [465] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_comment,
    STATE(34), 1,
      sym_plugin_block,
  [478] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [489] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [500] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [511] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [522] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [533] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [544] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [555] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_RBRACE,
      sym_hash_key,
  [566] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      aux_sym_string_literal_token1,
    STATE(25), 1,
      sym_hash_value,
    STATE(40), 1,
      sym_comment,
  [579] = 3,
    ACTIONS(121), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
  [589] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      anon_sym_EQ_GT,
    STATE(42), 1,
      sym_comment,
  [599] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_comment,
  [609] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      anon_sym_EQ_GT,
    STATE(44), 1,
      sym_comment,
  [619] = 1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 65,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 153,
  [SMALL_STATE(10)] = 166,
  [SMALL_STATE(11)] = 185,
  [SMALL_STATE(12)] = 204,
  [SMALL_STATE(13)] = 217,
  [SMALL_STATE(14)] = 230,
  [SMALL_STATE(15)] = 243,
  [SMALL_STATE(16)] = 262,
  [SMALL_STATE(17)] = 275,
  [SMALL_STATE(18)] = 292,
  [SMALL_STATE(19)] = 311,
  [SMALL_STATE(20)] = 330,
  [SMALL_STATE(21)] = 349,
  [SMALL_STATE(22)] = 360,
  [SMALL_STATE(23)] = 371,
  [SMALL_STATE(24)] = 384,
  [SMALL_STATE(25)] = 395,
  [SMALL_STATE(26)] = 406,
  [SMALL_STATE(27)] = 419,
  [SMALL_STATE(28)] = 430,
  [SMALL_STATE(29)] = 443,
  [SMALL_STATE(30)] = 454,
  [SMALL_STATE(31)] = 465,
  [SMALL_STATE(32)] = 478,
  [SMALL_STATE(33)] = 489,
  [SMALL_STATE(34)] = 500,
  [SMALL_STATE(35)] = 511,
  [SMALL_STATE(36)] = 522,
  [SMALL_STATE(37)] = 533,
  [SMALL_STATE(38)] = 544,
  [SMALL_STATE(39)] = 555,
  [SMALL_STATE(40)] = 566,
  [SMALL_STATE(41)] = 579,
  [SMALL_STATE(42)] = 589,
  [SMALL_STATE(43)] = 599,
  [SMALL_STATE(44)] = 609,
  [SMALL_STATE(45)] = 619,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_block, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2), SHIFT_REPEAT(31),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2), SHIFT_REPEAT(42),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_definition, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_definition, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_definition, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_definition, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_block, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plugin_block_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plugin_block_repeat1, 2), SHIFT_REPEAT(44),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plugin_block_repeat1, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_block, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_entry, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_value, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_block, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_literal, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_definition, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_logstash_pipeline(void) {
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
