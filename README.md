# tree-sitter-logstash-pipeline

Tree-sitter grammar for Logstash pipelines. The goal is to align the grammar 
with the specification found here: [https://github.com/elastic/logstash/blob/be914390f2749843f588cfba65eca133ff729308/logstash-core/lib/logstash/config/grammar.treetop](https://github.com/elastic/logstash/blob/be914390f2749843f588cfba65eca133ff729308/logstash-core/lib/logstash/config/grammar.treetop). However, some 
additional niceties, such as parsing of byte values are implemented.
