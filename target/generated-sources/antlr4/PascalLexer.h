
    #include <map>
    #include "intermediate/symtab/Symtab.h"
    #include "intermediate/type/Typespec.h"
    using namespace intermediate::symtab;
    using namespace intermediate::type;


// Generated from Pascal.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  PascalLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    PROGRAM = 21, PROGRAMS = 22, PLAIN = 23, SWING = 24, CONST = 25, TYPE = 26, 
    ARRAY = 27, OF = 28, RECORD = 29, VAR = 30, BEGIN = 31, END = 32, DIV = 33, 
    MOD = 34, AND = 35, OR = 36, NOT = 37, IF = 38, THEN = 39, ELSE = 40, 
    CASE = 41, REPEAT = 42, UNTIL = 43, WHILE = 44, DO = 45, FOR = 46, TO = 47, 
    DOWNTO = 48, WRITE = 49, WRITELN = 50, READ = 51, READLN = 52, PROCEDURE = 53, 
    PUBLIC = 54, PRIVATE = 55, FUNCTION = 56, SCREEN = 57, NEWSCREEN = 58, 
    SIZE = 59, PIG = 60, SIZEY = 61, SIZEX = 62, CREATE = 63, GRAPHICS = 64, 
    ALLOWGRAPHICS = 65, PAINTING = 66, ADDGRAPHICS = 67, SHAPE = 68, POSITIONX = 69, 
    POSITIONY = 70, WIDTH = 71, HEIGHT = 72, RECTANGLE = 73, CIRCLE = 74, 
    COLOR = 75, SET = 76, FILL = 77, WINDOW = 78, IDENTIFIER = 79, INTEGER = 80, 
    REAL = 81, NEWLINE = 82, WS = 83, QUOTE = 84, CHARACTER = 85, STRING = 86, 
    COMMENT = 87
  };

  explicit PascalLexer(antlr4::CharStream *input);
  ~PascalLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

