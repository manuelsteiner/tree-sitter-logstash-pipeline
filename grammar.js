// TODO: better way to handle string quotes (singel and double)?

// TODO: check for regexp correctness wrt what Logstash accepts
const integer_literal = /[+-]?(0|[1-9](_?[0-9])*)/;

module.exports = grammar({
  name: 'logstash_pipeline',

  extras: $ => [
    $.comment,
    /\s/,
    /\\\r?\n/
  ],

  rules: {
    source_file: $ => repeat($._section_definition),

    _section_definition: $ => choice(
      $.input_definition,
      $.filter_definition,
      $.output_definition,
    ),

    input_definition: $ => seq(
      'input',
      $.section_block,
    ),

    filter_definition: $ => seq(
      'filter',
      $.section_block,
    ),

    output_definition: $ => seq(
      'output',
      $.section_block,
    ),

    section_block: $ => seq(
      '{',
      repeat($.plugin_definition),
      '}',
    ),

    plugin_definition: $ => seq(
      $.identifier,
      $.plugin_block,
    ),

    plugin_block: $ => seq(
      '{',
      repeat($.setting_statement),
      '}',
    ),

    setting_statement: $ => seq(
      $.identifier,
      '=>',
      $._value,
    ),

    _value: $ => choice(
      $.boolean_literal,
      $._number_literal,
      $.bytes_literal,
      $.string_literal,
      //$.array,
      //$.list,
      $.hash,
    ),

    boolean_literal: $ => choice(
     'true',
      'false',
    ),

    // TODO: leave as hidden? a number is either an integer or float
    _number_literal: $ => choice(
      $.integer_literal,
      $.float_literal,
    ),

    integer_literal: $ => integer_literal,

    // TODO: check for regexp correctness wrt what Logstash accepts
    float_literal: $ => token(
      seq(
        integer_literal,
        /[.][0-9](_?[0-9])*/,
      ),
    ),

    // TODO: check for regexp correctness wrt what Logstash accepts
    bytes_literal: $ => token(
      choice(
        seq(
          '"',
          /[0-9](_?[0-9])*/,
          optional(/[\s]?[KkMmGgTtPpEeZzYy][Ii]?[Bb]/),
          '"',
        ),
        seq(
          "'",
          /[0-9](_?[0-9])*/,
          optional(/[\s]?[KkMmGgTtPpEeZzYy][Ii]?[Bb]/),
          "'",
        ),
      ),
    ),

    string_literal: $ => token(
      choice(
        seq(
          '"',
          /.*/,
          '"',
        ),
        seq(
          "'",
          /.*/,
          "'",
        ),
      ),
    ),

    hash: $ => seq(
      '{',
      repeat($.hash_entry),
      '}',
    ),

    hash_entry: $ => seq(
      $.hash_key,
      '=>',
      $.hash_value,
    ),

    // TODO: check if single quotes are allowed for hash keys
    hash_key: $ => token(
      choice(
        seq(
          '"',
          /[a-z0-9-_]+/,
          '"',
        ),
        seq(
          "'",
          /[a-z0-9-_]+/,
          "'",
        ),
      ),
    ),

    // TODO: unify with string literal since it is the same?
    // TODO: check if single quotes are allowed for hash values
    hash_value: $ => token(
      choice(
        seq(
          '"',
          /(\\.|[^\"])*/,
          '"',
        ),
        seq(
          "'",
          /(\\.|[^\'])*/,
          "'",
        ),
      ),
    ),

    // TODO: check for regexp correctness wrt what Logstash accepts
    identifier: $ => /[a-z-_]+/,

    comment: $ => seq(
      '#',
      /.*/
    ),

  }
});

