
    #include <map>
    #include "intermediate/symtab/Symtab.h"
    #include "intermediate/type/Typespec.h"
    using namespace intermediate::symtab;
    using namespace intermediate::type;


// Generated from Pascal.g4 by ANTLR 4.9.2


#include "PascalVisitor.h"

#include "PascalParser.h"


using namespace antlrcpp;
using namespace antlr4;

PascalParser::PascalParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

PascalParser::~PascalParser() {
  delete _interpreter;
}

std::string PascalParser::getGrammarFileName() const {
  return "Pascal.g4";
}

const std::vector<std::string>& PascalParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& PascalParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

PascalParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::ProgramHeaderContext* PascalParser::ProgramContext::programHeader() {
  return getRuleContext<PascalParser::ProgramHeaderContext>(0);
}

PascalParser::BlockContext* PascalParser::ProgramContext::block() {
  return getRuleContext<PascalParser::BlockContext>(0);
}

tree::TerminalNode* PascalParser::ProgramContext::PLAIN() {
  return getToken(PascalParser::PLAIN, 0);
}

tree::TerminalNode* PascalParser::ProgramContext::SWING() {
  return getToken(PascalParser::SWING, 0);
}


size_t PascalParser::ProgramContext::getRuleIndex() const {
  return PascalParser::RuleProgram;
}


antlrcpp::Any PascalParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ProgramContext* PascalParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, PascalParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    _la = _input->LA(1);
    if (!(_la == PascalParser::PLAIN

    || _la == PascalParser::SWING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(179);
    programHeader();
    setState(180);
    block();
    setState(181);
    match(PascalParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramHeaderContext ------------------------------------------------------------------

PascalParser::ProgramHeaderContext::ProgramHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::ProgramIdentifierContext* PascalParser::ProgramHeaderContext::programIdentifier() {
  return getRuleContext<PascalParser::ProgramIdentifierContext>(0);
}

tree::TerminalNode* PascalParser::ProgramHeaderContext::PROGRAM() {
  return getToken(PascalParser::PROGRAM, 0);
}

tree::TerminalNode* PascalParser::ProgramHeaderContext::PROGRAMS() {
  return getToken(PascalParser::PROGRAMS, 0);
}

PascalParser::ProgramParametersContext* PascalParser::ProgramHeaderContext::programParameters() {
  return getRuleContext<PascalParser::ProgramParametersContext>(0);
}


size_t PascalParser::ProgramHeaderContext::getRuleIndex() const {
  return PascalParser::RuleProgramHeader;
}


antlrcpp::Any PascalParser::ProgramHeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProgramHeader(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ProgramHeaderContext* PascalParser::programHeader() {
  ProgramHeaderContext *_localctx = _tracker.createInstance<ProgramHeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, PascalParser::RuleProgramHeader);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    _la = _input->LA(1);
    if (!(_la == PascalParser::PROGRAM

    || _la == PascalParser::PROGRAMS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(184);
    programIdentifier();
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::T__2) {
      setState(185);
      programParameters();
    }
    setState(188);
    match(PascalParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramParametersContext ------------------------------------------------------------------

PascalParser::ProgramParametersContext::ProgramParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PascalParser::ProgramParametersContext::IDENTIFIER() {
  return getTokens(PascalParser::IDENTIFIER);
}

tree::TerminalNode* PascalParser::ProgramParametersContext::IDENTIFIER(size_t i) {
  return getToken(PascalParser::IDENTIFIER, i);
}


size_t PascalParser::ProgramParametersContext::getRuleIndex() const {
  return PascalParser::RuleProgramParameters;
}


antlrcpp::Any PascalParser::ProgramParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProgramParameters(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ProgramParametersContext* PascalParser::programParameters() {
  ProgramParametersContext *_localctx = _tracker.createInstance<ProgramParametersContext>(_ctx, getState());
  enterRule(_localctx, 4, PascalParser::RuleProgramParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(PascalParser::T__2);
    setState(191);
    match(PascalParser::IDENTIFIER);
    setState(196);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::T__3) {
      setState(192);
      match(PascalParser::T__3);
      setState(193);
      match(PascalParser::IDENTIFIER);
      setState(198);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(199);
    match(PascalParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramIdentifierContext ------------------------------------------------------------------

PascalParser::ProgramIdentifierContext::ProgramIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::ProgramIdentifierContext::IDENTIFIER() {
  return getToken(PascalParser::IDENTIFIER, 0);
}


size_t PascalParser::ProgramIdentifierContext::getRuleIndex() const {
  return PascalParser::RuleProgramIdentifier;
}


antlrcpp::Any PascalParser::ProgramIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProgramIdentifier(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ProgramIdentifierContext* PascalParser::programIdentifier() {
  ProgramIdentifierContext *_localctx = _tracker.createInstance<ProgramIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 6, PascalParser::RuleProgramIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    match(PascalParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

PascalParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::DeclarationsContext* PascalParser::BlockContext::declarations() {
  return getRuleContext<PascalParser::DeclarationsContext>(0);
}

PascalParser::CompoundStatementContext* PascalParser::BlockContext::compoundStatement() {
  return getRuleContext<PascalParser::CompoundStatementContext>(0);
}


size_t PascalParser::BlockContext::getRuleIndex() const {
  return PascalParser::RuleBlock;
}


antlrcpp::Any PascalParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::BlockContext* PascalParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 8, PascalParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    declarations();
    setState(204);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationsContext ------------------------------------------------------------------

PascalParser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::ConstantsPartContext* PascalParser::DeclarationsContext::constantsPart() {
  return getRuleContext<PascalParser::ConstantsPartContext>(0);
}

PascalParser::TypesPartContext* PascalParser::DeclarationsContext::typesPart() {
  return getRuleContext<PascalParser::TypesPartContext>(0);
}

PascalParser::VariablesPartContext* PascalParser::DeclarationsContext::variablesPart() {
  return getRuleContext<PascalParser::VariablesPartContext>(0);
}

PascalParser::RoutinesPartContext* PascalParser::DeclarationsContext::routinesPart() {
  return getRuleContext<PascalParser::RoutinesPartContext>(0);
}


size_t PascalParser::DeclarationsContext::getRuleIndex() const {
  return PascalParser::RuleDeclarations;
}


antlrcpp::Any PascalParser::DeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitDeclarations(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::DeclarationsContext* PascalParser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 10, PascalParser::RuleDeclarations);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::CONST) {
      setState(206);
      constantsPart();
      setState(207);
      match(PascalParser::T__1);
    }
    setState(214);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::TYPE) {
      setState(211);
      typesPart();
      setState(212);
      match(PascalParser::T__1);
    }
    setState(219);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalParser::T__2)
      | (1ULL << PascalParser::T__6)
      | (1ULL << PascalParser::T__7)
      | (1ULL << PascalParser::ARRAY)
      | (1ULL << PascalParser::RECORD))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (PascalParser::IDENTIFIER - 79))
      | (1ULL << (PascalParser::INTEGER - 79))
      | (1ULL << (PascalParser::REAL - 79))
      | (1ULL << (PascalParser::CHARACTER - 79))
      | (1ULL << (PascalParser::STRING - 79)))) != 0)) {
      setState(216);
      variablesPart();
      setState(217);
      match(PascalParser::T__1);
    }
    setState(224);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 54) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 54)) & ((1ULL << (PascalParser::PUBLIC - 54))
      | (1ULL << (PascalParser::PRIVATE - 54))
      | (1ULL << (PascalParser::FUNCTION - 54))
      | (1ULL << (PascalParser::ALLOWGRAPHICS - 54)))) != 0)) {
      setState(221);
      routinesPart();
      setState(222);
      match(PascalParser::T__1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantsPartContext ------------------------------------------------------------------

PascalParser::ConstantsPartContext::ConstantsPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::ConstantsPartContext::CONST() {
  return getToken(PascalParser::CONST, 0);
}

PascalParser::ConstantDefinitionsListContext* PascalParser::ConstantsPartContext::constantDefinitionsList() {
  return getRuleContext<PascalParser::ConstantDefinitionsListContext>(0);
}


size_t PascalParser::ConstantsPartContext::getRuleIndex() const {
  return PascalParser::RuleConstantsPart;
}


antlrcpp::Any PascalParser::ConstantsPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConstantsPart(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ConstantsPartContext* PascalParser::constantsPart() {
  ConstantsPartContext *_localctx = _tracker.createInstance<ConstantsPartContext>(_ctx, getState());
  enterRule(_localctx, 12, PascalParser::RuleConstantsPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    match(PascalParser::CONST);
    setState(227);
    constantDefinitionsList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDefinitionsListContext ------------------------------------------------------------------

PascalParser::ConstantDefinitionsListContext::ConstantDefinitionsListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::ConstantDefinitionContext *> PascalParser::ConstantDefinitionsListContext::constantDefinition() {
  return getRuleContexts<PascalParser::ConstantDefinitionContext>();
}

PascalParser::ConstantDefinitionContext* PascalParser::ConstantDefinitionsListContext::constantDefinition(size_t i) {
  return getRuleContext<PascalParser::ConstantDefinitionContext>(i);
}


size_t PascalParser::ConstantDefinitionsListContext::getRuleIndex() const {
  return PascalParser::RuleConstantDefinitionsList;
}


antlrcpp::Any PascalParser::ConstantDefinitionsListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConstantDefinitionsList(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ConstantDefinitionsListContext* PascalParser::constantDefinitionsList() {
  ConstantDefinitionsListContext *_localctx = _tracker.createInstance<ConstantDefinitionsListContext>(_ctx, getState());
  enterRule(_localctx, 14, PascalParser::RuleConstantDefinitionsList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(229);
    constantDefinition();
    setState(234);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(230);
        match(PascalParser::T__1);
        setState(231);
        constantDefinition(); 
      }
      setState(236);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDefinitionContext ------------------------------------------------------------------

PascalParser::ConstantDefinitionContext::ConstantDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::ConstantIdentifierContext* PascalParser::ConstantDefinitionContext::constantIdentifier() {
  return getRuleContext<PascalParser::ConstantIdentifierContext>(0);
}

PascalParser::ConstantContext* PascalParser::ConstantDefinitionContext::constant() {
  return getRuleContext<PascalParser::ConstantContext>(0);
}


size_t PascalParser::ConstantDefinitionContext::getRuleIndex() const {
  return PascalParser::RuleConstantDefinition;
}


antlrcpp::Any PascalParser::ConstantDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConstantDefinition(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ConstantDefinitionContext* PascalParser::constantDefinition() {
  ConstantDefinitionContext *_localctx = _tracker.createInstance<ConstantDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 16, PascalParser::RuleConstantDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    constantIdentifier();
    setState(238);
    match(PascalParser::T__5);
    setState(239);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantIdentifierContext ------------------------------------------------------------------

PascalParser::ConstantIdentifierContext::ConstantIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::ConstantIdentifierContext::IDENTIFIER() {
  return getToken(PascalParser::IDENTIFIER, 0);
}


size_t PascalParser::ConstantIdentifierContext::getRuleIndex() const {
  return PascalParser::RuleConstantIdentifier;
}


antlrcpp::Any PascalParser::ConstantIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConstantIdentifier(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ConstantIdentifierContext* PascalParser::constantIdentifier() {
  ConstantIdentifierContext *_localctx = _tracker.createInstance<ConstantIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 18, PascalParser::RuleConstantIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    match(PascalParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

PascalParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::ConstantContext::IDENTIFIER() {
  return getToken(PascalParser::IDENTIFIER, 0);
}

PascalParser::UnsignedNumberContext* PascalParser::ConstantContext::unsignedNumber() {
  return getRuleContext<PascalParser::UnsignedNumberContext>(0);
}

PascalParser::SignContext* PascalParser::ConstantContext::sign() {
  return getRuleContext<PascalParser::SignContext>(0);
}

PascalParser::CharacterConstantContext* PascalParser::ConstantContext::characterConstant() {
  return getRuleContext<PascalParser::CharacterConstantContext>(0);
}

PascalParser::StringConstantContext* PascalParser::ConstantContext::stringConstant() {
  return getRuleContext<PascalParser::StringConstantContext>(0);
}


size_t PascalParser::ConstantContext::getRuleIndex() const {
  return PascalParser::RuleConstant;
}


antlrcpp::Any PascalParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ConstantContext* PascalParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 20, PascalParser::RuleConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(252);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::T__6:
      case PascalParser::T__7:
      case PascalParser::IDENTIFIER:
      case PascalParser::INTEGER:
      case PascalParser::REAL: {
        enterOuterAlt(_localctx, 1);
        setState(244);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == PascalParser::T__6

        || _la == PascalParser::T__7) {
          setState(243);
          sign();
        }
        setState(248);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case PascalParser::IDENTIFIER: {
            setState(246);
            match(PascalParser::IDENTIFIER);
            break;
          }

          case PascalParser::INTEGER:
          case PascalParser::REAL: {
            setState(247);
            unsignedNumber();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case PascalParser::CHARACTER: {
        enterOuterAlt(_localctx, 2);
        setState(250);
        characterConstant();
        break;
      }

      case PascalParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(251);
        stringConstant();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

PascalParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::SignContext::getRuleIndex() const {
  return PascalParser::RuleSign;
}


antlrcpp::Any PascalParser::SignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitSign(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::SignContext* PascalParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 22, PascalParser::RuleSign);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    _la = _input->LA(1);
    if (!(_la == PascalParser::T__6

    || _la == PascalParser::T__7)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypesPartContext ------------------------------------------------------------------

PascalParser::TypesPartContext::TypesPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::TypesPartContext::TYPE() {
  return getToken(PascalParser::TYPE, 0);
}

PascalParser::TypeDefinitionsListContext* PascalParser::TypesPartContext::typeDefinitionsList() {
  return getRuleContext<PascalParser::TypeDefinitionsListContext>(0);
}


size_t PascalParser::TypesPartContext::getRuleIndex() const {
  return PascalParser::RuleTypesPart;
}


antlrcpp::Any PascalParser::TypesPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitTypesPart(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::TypesPartContext* PascalParser::typesPart() {
  TypesPartContext *_localctx = _tracker.createInstance<TypesPartContext>(_ctx, getState());
  enterRule(_localctx, 24, PascalParser::RuleTypesPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    match(PascalParser::TYPE);
    setState(257);
    typeDefinitionsList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefinitionsListContext ------------------------------------------------------------------

PascalParser::TypeDefinitionsListContext::TypeDefinitionsListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::TypeDefinitionContext *> PascalParser::TypeDefinitionsListContext::typeDefinition() {
  return getRuleContexts<PascalParser::TypeDefinitionContext>();
}

PascalParser::TypeDefinitionContext* PascalParser::TypeDefinitionsListContext::typeDefinition(size_t i) {
  return getRuleContext<PascalParser::TypeDefinitionContext>(i);
}


size_t PascalParser::TypeDefinitionsListContext::getRuleIndex() const {
  return PascalParser::RuleTypeDefinitionsList;
}


antlrcpp::Any PascalParser::TypeDefinitionsListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitTypeDefinitionsList(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::TypeDefinitionsListContext* PascalParser::typeDefinitionsList() {
  TypeDefinitionsListContext *_localctx = _tracker.createInstance<TypeDefinitionsListContext>(_ctx, getState());
  enterRule(_localctx, 26, PascalParser::RuleTypeDefinitionsList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(259);
    typeDefinition();
    setState(264);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(260);
        match(PascalParser::T__1);
        setState(261);
        typeDefinition(); 
      }
      setState(266);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefinitionContext ------------------------------------------------------------------

PascalParser::TypeDefinitionContext::TypeDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::TypeIdentifierContext* PascalParser::TypeDefinitionContext::typeIdentifier() {
  return getRuleContext<PascalParser::TypeIdentifierContext>(0);
}

PascalParser::TypeSpecificationContext* PascalParser::TypeDefinitionContext::typeSpecification() {
  return getRuleContext<PascalParser::TypeSpecificationContext>(0);
}


size_t PascalParser::TypeDefinitionContext::getRuleIndex() const {
  return PascalParser::RuleTypeDefinition;
}


antlrcpp::Any PascalParser::TypeDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitTypeDefinition(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::TypeDefinitionContext* PascalParser::typeDefinition() {
  TypeDefinitionContext *_localctx = _tracker.createInstance<TypeDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 28, PascalParser::RuleTypeDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    typeIdentifier();
    setState(268);
    match(PascalParser::T__5);
    setState(269);
    typeSpecification();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdentifierContext ------------------------------------------------------------------

PascalParser::TypeIdentifierContext::TypeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::TypeIdentifierContext::IDENTIFIER() {
  return getToken(PascalParser::IDENTIFIER, 0);
}


size_t PascalParser::TypeIdentifierContext::getRuleIndex() const {
  return PascalParser::RuleTypeIdentifier;
}


antlrcpp::Any PascalParser::TypeIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitTypeIdentifier(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::TypeIdentifierContext* PascalParser::typeIdentifier() {
  TypeIdentifierContext *_localctx = _tracker.createInstance<TypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 30, PascalParser::RuleTypeIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    match(PascalParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecificationContext ------------------------------------------------------------------

PascalParser::TypeSpecificationContext::TypeSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::TypeSpecificationContext::getRuleIndex() const {
  return PascalParser::RuleTypeSpecification;
}

void PascalParser::TypeSpecificationContext::copyFrom(TypeSpecificationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- SimpleTypespecContext ------------------------------------------------------------------

PascalParser::SimpleTypeContext* PascalParser::SimpleTypespecContext::simpleType() {
  return getRuleContext<PascalParser::SimpleTypeContext>(0);
}

PascalParser::SimpleTypespecContext::SimpleTypespecContext(TypeSpecificationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::SimpleTypespecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitSimpleTypespec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayTypespecContext ------------------------------------------------------------------

PascalParser::ArrayTypeContext* PascalParser::ArrayTypespecContext::arrayType() {
  return getRuleContext<PascalParser::ArrayTypeContext>(0);
}

PascalParser::ArrayTypespecContext::ArrayTypespecContext(TypeSpecificationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ArrayTypespecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitArrayTypespec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RecordTypespecContext ------------------------------------------------------------------

PascalParser::RecordTypeContext* PascalParser::RecordTypespecContext::recordType() {
  return getRuleContext<PascalParser::RecordTypeContext>(0);
}

PascalParser::RecordTypespecContext::RecordTypespecContext(TypeSpecificationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::RecordTypespecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitRecordTypespec(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::TypeSpecificationContext* PascalParser::typeSpecification() {
  TypeSpecificationContext *_localctx = _tracker.createInstance<TypeSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 32, PascalParser::RuleTypeSpecification);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(276);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::T__2:
      case PascalParser::T__6:
      case PascalParser::T__7:
      case PascalParser::IDENTIFIER:
      case PascalParser::INTEGER:
      case PascalParser::REAL:
      case PascalParser::CHARACTER:
      case PascalParser::STRING: {
        _localctx = dynamic_cast<TypeSpecificationContext *>(_tracker.createInstance<PascalParser::SimpleTypespecContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(273);
        simpleType();
        break;
      }

      case PascalParser::ARRAY: {
        _localctx = dynamic_cast<TypeSpecificationContext *>(_tracker.createInstance<PascalParser::ArrayTypespecContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(274);
        arrayType();
        break;
      }

      case PascalParser::RECORD: {
        _localctx = dynamic_cast<TypeSpecificationContext *>(_tracker.createInstance<PascalParser::RecordTypespecContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(275);
        recordType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleTypeContext ------------------------------------------------------------------

PascalParser::SimpleTypeContext::SimpleTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::SimpleTypeContext::getRuleIndex() const {
  return PascalParser::RuleSimpleType;
}

void PascalParser::SimpleTypeContext::copyFrom(SimpleTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- SubrangeTypespecContext ------------------------------------------------------------------

PascalParser::SubrangeTypeContext* PascalParser::SubrangeTypespecContext::subrangeType() {
  return getRuleContext<PascalParser::SubrangeTypeContext>(0);
}

PascalParser::SubrangeTypespecContext::SubrangeTypespecContext(SimpleTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::SubrangeTypespecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitSubrangeTypespec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EnumerationTypespecContext ------------------------------------------------------------------

PascalParser::EnumerationTypeContext* PascalParser::EnumerationTypespecContext::enumerationType() {
  return getRuleContext<PascalParser::EnumerationTypeContext>(0);
}

PascalParser::EnumerationTypespecContext::EnumerationTypespecContext(SimpleTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::EnumerationTypespecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitEnumerationTypespec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeIdentifierTypespecContext ------------------------------------------------------------------

PascalParser::TypeIdentifierContext* PascalParser::TypeIdentifierTypespecContext::typeIdentifier() {
  return getRuleContext<PascalParser::TypeIdentifierContext>(0);
}

PascalParser::TypeIdentifierTypespecContext::TypeIdentifierTypespecContext(SimpleTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::TypeIdentifierTypespecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitTypeIdentifierTypespec(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::SimpleTypeContext* PascalParser::simpleType() {
  SimpleTypeContext *_localctx = _tracker.createInstance<SimpleTypeContext>(_ctx, getState());
  enterRule(_localctx, 34, PascalParser::RuleSimpleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(281);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<SimpleTypeContext *>(_tracker.createInstance<PascalParser::TypeIdentifierTypespecContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(278);
      typeIdentifier();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<SimpleTypeContext *>(_tracker.createInstance<PascalParser::EnumerationTypespecContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(279);
      enumerationType();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<SimpleTypeContext *>(_tracker.createInstance<PascalParser::SubrangeTypespecContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(280);
      subrangeType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumerationTypeContext ------------------------------------------------------------------

PascalParser::EnumerationTypeContext::EnumerationTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::EnumerationConstantContext *> PascalParser::EnumerationTypeContext::enumerationConstant() {
  return getRuleContexts<PascalParser::EnumerationConstantContext>();
}

PascalParser::EnumerationConstantContext* PascalParser::EnumerationTypeContext::enumerationConstant(size_t i) {
  return getRuleContext<PascalParser::EnumerationConstantContext>(i);
}


size_t PascalParser::EnumerationTypeContext::getRuleIndex() const {
  return PascalParser::RuleEnumerationType;
}


antlrcpp::Any PascalParser::EnumerationTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitEnumerationType(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::EnumerationTypeContext* PascalParser::enumerationType() {
  EnumerationTypeContext *_localctx = _tracker.createInstance<EnumerationTypeContext>(_ctx, getState());
  enterRule(_localctx, 36, PascalParser::RuleEnumerationType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(283);
    match(PascalParser::T__2);
    setState(284);
    enumerationConstant();
    setState(289);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::T__3) {
      setState(285);
      match(PascalParser::T__3);
      setState(286);
      enumerationConstant();
      setState(291);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(292);
    match(PascalParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumerationConstantContext ------------------------------------------------------------------

PascalParser::EnumerationConstantContext::EnumerationConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::ConstantIdentifierContext* PascalParser::EnumerationConstantContext::constantIdentifier() {
  return getRuleContext<PascalParser::ConstantIdentifierContext>(0);
}


size_t PascalParser::EnumerationConstantContext::getRuleIndex() const {
  return PascalParser::RuleEnumerationConstant;
}


antlrcpp::Any PascalParser::EnumerationConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitEnumerationConstant(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::EnumerationConstantContext* PascalParser::enumerationConstant() {
  EnumerationConstantContext *_localctx = _tracker.createInstance<EnumerationConstantContext>(_ctx, getState());
  enterRule(_localctx, 38, PascalParser::RuleEnumerationConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    constantIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubrangeTypeContext ------------------------------------------------------------------

PascalParser::SubrangeTypeContext::SubrangeTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::ConstantContext *> PascalParser::SubrangeTypeContext::constant() {
  return getRuleContexts<PascalParser::ConstantContext>();
}

PascalParser::ConstantContext* PascalParser::SubrangeTypeContext::constant(size_t i) {
  return getRuleContext<PascalParser::ConstantContext>(i);
}


size_t PascalParser::SubrangeTypeContext::getRuleIndex() const {
  return PascalParser::RuleSubrangeType;
}


antlrcpp::Any PascalParser::SubrangeTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitSubrangeType(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::SubrangeTypeContext* PascalParser::subrangeType() {
  SubrangeTypeContext *_localctx = _tracker.createInstance<SubrangeTypeContext>(_ctx, getState());
  enterRule(_localctx, 40, PascalParser::RuleSubrangeType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
    constant();
    setState(297);
    match(PascalParser::T__8);
    setState(298);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayTypeContext ------------------------------------------------------------------

PascalParser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::ArrayTypeContext::ARRAY() {
  return getToken(PascalParser::ARRAY, 0);
}

PascalParser::ArrayDimensionListContext* PascalParser::ArrayTypeContext::arrayDimensionList() {
  return getRuleContext<PascalParser::ArrayDimensionListContext>(0);
}

tree::TerminalNode* PascalParser::ArrayTypeContext::OF() {
  return getToken(PascalParser::OF, 0);
}

PascalParser::TypeSpecificationContext* PascalParser::ArrayTypeContext::typeSpecification() {
  return getRuleContext<PascalParser::TypeSpecificationContext>(0);
}


size_t PascalParser::ArrayTypeContext::getRuleIndex() const {
  return PascalParser::RuleArrayType;
}


antlrcpp::Any PascalParser::ArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitArrayType(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ArrayTypeContext* PascalParser::arrayType() {
  ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 42, PascalParser::RuleArrayType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(300);
    match(PascalParser::ARRAY);
    setState(301);
    match(PascalParser::T__9);
    setState(302);
    arrayDimensionList();
    setState(303);
    match(PascalParser::T__10);
    setState(304);
    match(PascalParser::OF);
    setState(305);
    typeSpecification();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayDimensionListContext ------------------------------------------------------------------

PascalParser::ArrayDimensionListContext::ArrayDimensionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::SimpleTypeContext *> PascalParser::ArrayDimensionListContext::simpleType() {
  return getRuleContexts<PascalParser::SimpleTypeContext>();
}

PascalParser::SimpleTypeContext* PascalParser::ArrayDimensionListContext::simpleType(size_t i) {
  return getRuleContext<PascalParser::SimpleTypeContext>(i);
}


size_t PascalParser::ArrayDimensionListContext::getRuleIndex() const {
  return PascalParser::RuleArrayDimensionList;
}


antlrcpp::Any PascalParser::ArrayDimensionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitArrayDimensionList(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ArrayDimensionListContext* PascalParser::arrayDimensionList() {
  ArrayDimensionListContext *_localctx = _tracker.createInstance<ArrayDimensionListContext>(_ctx, getState());
  enterRule(_localctx, 44, PascalParser::RuleArrayDimensionList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    simpleType();
    setState(312);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::T__3) {
      setState(308);
      match(PascalParser::T__3);
      setState(309);
      simpleType();
      setState(314);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecordTypeContext ------------------------------------------------------------------

PascalParser::RecordTypeContext::RecordTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::RecordTypeContext::RECORD() {
  return getToken(PascalParser::RECORD, 0);
}

PascalParser::RecordFieldsContext* PascalParser::RecordTypeContext::recordFields() {
  return getRuleContext<PascalParser::RecordFieldsContext>(0);
}

tree::TerminalNode* PascalParser::RecordTypeContext::END() {
  return getToken(PascalParser::END, 0);
}


size_t PascalParser::RecordTypeContext::getRuleIndex() const {
  return PascalParser::RuleRecordType;
}


antlrcpp::Any PascalParser::RecordTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitRecordType(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::RecordTypeContext* PascalParser::recordType() {
  RecordTypeContext *_localctx = _tracker.createInstance<RecordTypeContext>(_ctx, getState());
  enterRule(_localctx, 46, PascalParser::RuleRecordType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    match(PascalParser::RECORD);
    setState(316);
    recordFields();
    setState(318);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::T__1) {
      setState(317);
      match(PascalParser::T__1);
    }
    setState(320);
    match(PascalParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecordFieldsContext ------------------------------------------------------------------

PascalParser::RecordFieldsContext::RecordFieldsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::VariableDeclarationsListContext* PascalParser::RecordFieldsContext::variableDeclarationsList() {
  return getRuleContext<PascalParser::VariableDeclarationsListContext>(0);
}


size_t PascalParser::RecordFieldsContext::getRuleIndex() const {
  return PascalParser::RuleRecordFields;
}


antlrcpp::Any PascalParser::RecordFieldsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitRecordFields(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::RecordFieldsContext* PascalParser::recordFields() {
  RecordFieldsContext *_localctx = _tracker.createInstance<RecordFieldsContext>(_ctx, getState());
  enterRule(_localctx, 48, PascalParser::RuleRecordFields);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
    variableDeclarationsList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariablesPartContext ------------------------------------------------------------------

PascalParser::VariablesPartContext::VariablesPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::VariableDeclarationsListContext* PascalParser::VariablesPartContext::variableDeclarationsList() {
  return getRuleContext<PascalParser::VariableDeclarationsListContext>(0);
}


size_t PascalParser::VariablesPartContext::getRuleIndex() const {
  return PascalParser::RuleVariablesPart;
}


antlrcpp::Any PascalParser::VariablesPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitVariablesPart(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::VariablesPartContext* PascalParser::variablesPart() {
  VariablesPartContext *_localctx = _tracker.createInstance<VariablesPartContext>(_ctx, getState());
  enterRule(_localctx, 50, PascalParser::RuleVariablesPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(324);
    variableDeclarationsList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationsListContext ------------------------------------------------------------------

PascalParser::VariableDeclarationsListContext::VariableDeclarationsListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::VariableDeclarationsContext *> PascalParser::VariableDeclarationsListContext::variableDeclarations() {
  return getRuleContexts<PascalParser::VariableDeclarationsContext>();
}

PascalParser::VariableDeclarationsContext* PascalParser::VariableDeclarationsListContext::variableDeclarations(size_t i) {
  return getRuleContext<PascalParser::VariableDeclarationsContext>(i);
}


size_t PascalParser::VariableDeclarationsListContext::getRuleIndex() const {
  return PascalParser::RuleVariableDeclarationsList;
}


antlrcpp::Any PascalParser::VariableDeclarationsListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarationsList(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::VariableDeclarationsListContext* PascalParser::variableDeclarationsList() {
  VariableDeclarationsListContext *_localctx = _tracker.createInstance<VariableDeclarationsListContext>(_ctx, getState());
  enterRule(_localctx, 52, PascalParser::RuleVariableDeclarationsList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(326);
    variableDeclarations();
    setState(331);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(327);
        match(PascalParser::T__1);
        setState(328);
        variableDeclarations(); 
      }
      setState(333);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationsContext ------------------------------------------------------------------

PascalParser::VariableDeclarationsContext::VariableDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::TypeSpecificationContext* PascalParser::VariableDeclarationsContext::typeSpecification() {
  return getRuleContext<PascalParser::TypeSpecificationContext>(0);
}

PascalParser::VariableIdentifierListContext* PascalParser::VariableDeclarationsContext::variableIdentifierList() {
  return getRuleContext<PascalParser::VariableIdentifierListContext>(0);
}


size_t PascalParser::VariableDeclarationsContext::getRuleIndex() const {
  return PascalParser::RuleVariableDeclarations;
}


antlrcpp::Any PascalParser::VariableDeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarations(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::VariableDeclarationsContext* PascalParser::variableDeclarations() {
  VariableDeclarationsContext *_localctx = _tracker.createInstance<VariableDeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 54, PascalParser::RuleVariableDeclarations);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(334);
    typeSpecification();
    setState(335);
    variableIdentifierList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableIdentifierListContext ------------------------------------------------------------------

PascalParser::VariableIdentifierListContext::VariableIdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::VariableIdentifierContext *> PascalParser::VariableIdentifierListContext::variableIdentifier() {
  return getRuleContexts<PascalParser::VariableIdentifierContext>();
}

PascalParser::VariableIdentifierContext* PascalParser::VariableIdentifierListContext::variableIdentifier(size_t i) {
  return getRuleContext<PascalParser::VariableIdentifierContext>(i);
}


size_t PascalParser::VariableIdentifierListContext::getRuleIndex() const {
  return PascalParser::RuleVariableIdentifierList;
}


antlrcpp::Any PascalParser::VariableIdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitVariableIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::VariableIdentifierListContext* PascalParser::variableIdentifierList() {
  VariableIdentifierListContext *_localctx = _tracker.createInstance<VariableIdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 56, PascalParser::RuleVariableIdentifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
    variableIdentifier();
    setState(342);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::T__3) {
      setState(338);
      match(PascalParser::T__3);
      setState(339);
      variableIdentifier();
      setState(344);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableIdentifierContext ------------------------------------------------------------------

PascalParser::VariableIdentifierContext::VariableIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::VariableIdentifierContext::IDENTIFIER() {
  return getToken(PascalParser::IDENTIFIER, 0);
}


size_t PascalParser::VariableIdentifierContext::getRuleIndex() const {
  return PascalParser::RuleVariableIdentifier;
}


antlrcpp::Any PascalParser::VariableIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitVariableIdentifier(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::VariableIdentifierContext* PascalParser::variableIdentifier() {
  VariableIdentifierContext *_localctx = _tracker.createInstance<VariableIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 58, PascalParser::RuleVariableIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    match(PascalParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RoutinesPartContext ------------------------------------------------------------------

PascalParser::RoutinesPartContext::RoutinesPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::RoutineDefinitionContext *> PascalParser::RoutinesPartContext::routineDefinition() {
  return getRuleContexts<PascalParser::RoutineDefinitionContext>();
}

PascalParser::RoutineDefinitionContext* PascalParser::RoutinesPartContext::routineDefinition(size_t i) {
  return getRuleContext<PascalParser::RoutineDefinitionContext>(i);
}


size_t PascalParser::RoutinesPartContext::getRuleIndex() const {
  return PascalParser::RuleRoutinesPart;
}


antlrcpp::Any PascalParser::RoutinesPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitRoutinesPart(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::RoutinesPartContext* PascalParser::routinesPart() {
  RoutinesPartContext *_localctx = _tracker.createInstance<RoutinesPartContext>(_ctx, getState());
  enterRule(_localctx, 60, PascalParser::RuleRoutinesPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(347);
    routineDefinition();
    setState(352);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(348);
        match(PascalParser::T__1);
        setState(349);
        routineDefinition(); 
      }
      setState(354);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RoutineDefinitionContext ------------------------------------------------------------------

PascalParser::RoutineDefinitionContext::RoutineDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::BlockContext* PascalParser::RoutineDefinitionContext::block() {
  return getRuleContext<PascalParser::BlockContext>(0);
}

PascalParser::ProcedureHeadContext* PascalParser::RoutineDefinitionContext::procedureHead() {
  return getRuleContext<PascalParser::ProcedureHeadContext>(0);
}

PascalParser::FunctionHeadContext* PascalParser::RoutineDefinitionContext::functionHead() {
  return getRuleContext<PascalParser::FunctionHeadContext>(0);
}


size_t PascalParser::RoutineDefinitionContext::getRuleIndex() const {
  return PascalParser::RuleRoutineDefinition;
}


antlrcpp::Any PascalParser::RoutineDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitRoutineDefinition(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::RoutineDefinitionContext* PascalParser::routineDefinition() {
  RoutineDefinitionContext *_localctx = _tracker.createInstance<RoutineDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 62, PascalParser::RuleRoutineDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(357);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::PUBLIC:
      case PascalParser::PRIVATE:
      case PascalParser::ALLOWGRAPHICS: {
        setState(355);
        procedureHead();
        break;
      }

      case PascalParser::FUNCTION: {
        setState(356);
        functionHead();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(359);
    match(PascalParser::T__1);
    setState(360);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureHeadContext ------------------------------------------------------------------

PascalParser::ProcedureHeadContext::ProcedureHeadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::RoutineIdentifierContext* PascalParser::ProcedureHeadContext::routineIdentifier() {
  return getRuleContext<PascalParser::RoutineIdentifierContext>(0);
}

tree::TerminalNode* PascalParser::ProcedureHeadContext::PUBLIC() {
  return getToken(PascalParser::PUBLIC, 0);
}

tree::TerminalNode* PascalParser::ProcedureHeadContext::PRIVATE() {
  return getToken(PascalParser::PRIVATE, 0);
}

tree::TerminalNode* PascalParser::ProcedureHeadContext::ALLOWGRAPHICS() {
  return getToken(PascalParser::ALLOWGRAPHICS, 0);
}

PascalParser::ParametersContext* PascalParser::ProcedureHeadContext::parameters() {
  return getRuleContext<PascalParser::ParametersContext>(0);
}


size_t PascalParser::ProcedureHeadContext::getRuleIndex() const {
  return PascalParser::RuleProcedureHead;
}


antlrcpp::Any PascalParser::ProcedureHeadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProcedureHead(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ProcedureHeadContext* PascalParser::procedureHead() {
  ProcedureHeadContext *_localctx = _tracker.createInstance<ProcedureHeadContext>(_ctx, getState());
  enterRule(_localctx, 64, PascalParser::RuleProcedureHead);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(362);
    _la = _input->LA(1);
    if (!(((((_la - 54) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 54)) & ((1ULL << (PascalParser::PUBLIC - 54))
      | (1ULL << (PascalParser::PRIVATE - 54))
      | (1ULL << (PascalParser::ALLOWGRAPHICS - 54)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(363);
    routineIdentifier();
    setState(365);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::T__2) {
      setState(364);
      parameters();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionHeadContext ------------------------------------------------------------------

PascalParser::FunctionHeadContext::FunctionHeadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::FunctionHeadContext::FUNCTION() {
  return getToken(PascalParser::FUNCTION, 0);
}

PascalParser::RoutineIdentifierContext* PascalParser::FunctionHeadContext::routineIdentifier() {
  return getRuleContext<PascalParser::RoutineIdentifierContext>(0);
}

PascalParser::TypeIdentifierContext* PascalParser::FunctionHeadContext::typeIdentifier() {
  return getRuleContext<PascalParser::TypeIdentifierContext>(0);
}

PascalParser::ParametersContext* PascalParser::FunctionHeadContext::parameters() {
  return getRuleContext<PascalParser::ParametersContext>(0);
}


size_t PascalParser::FunctionHeadContext::getRuleIndex() const {
  return PascalParser::RuleFunctionHead;
}


antlrcpp::Any PascalParser::FunctionHeadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitFunctionHead(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::FunctionHeadContext* PascalParser::functionHead() {
  FunctionHeadContext *_localctx = _tracker.createInstance<FunctionHeadContext>(_ctx, getState());
  enterRule(_localctx, 66, PascalParser::RuleFunctionHead);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(367);
    match(PascalParser::FUNCTION);
    setState(368);
    routineIdentifier();
    setState(370);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::T__2) {
      setState(369);
      parameters();
    }
    setState(372);
    match(PascalParser::T__11);
    setState(373);
    typeIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RoutineIdentifierContext ------------------------------------------------------------------

PascalParser::RoutineIdentifierContext::RoutineIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::RoutineIdentifierContext::IDENTIFIER() {
  return getToken(PascalParser::IDENTIFIER, 0);
}


size_t PascalParser::RoutineIdentifierContext::getRuleIndex() const {
  return PascalParser::RuleRoutineIdentifier;
}


antlrcpp::Any PascalParser::RoutineIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitRoutineIdentifier(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::RoutineIdentifierContext* PascalParser::routineIdentifier() {
  RoutineIdentifierContext *_localctx = _tracker.createInstance<RoutineIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 68, PascalParser::RuleRoutineIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(375);
    match(PascalParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

PascalParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::ParameterDeclarationsListContext* PascalParser::ParametersContext::parameterDeclarationsList() {
  return getRuleContext<PascalParser::ParameterDeclarationsListContext>(0);
}


size_t PascalParser::ParametersContext::getRuleIndex() const {
  return PascalParser::RuleParameters;
}


antlrcpp::Any PascalParser::ParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitParameters(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ParametersContext* PascalParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 70, PascalParser::RuleParameters);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    match(PascalParser::T__2);
    setState(378);
    parameterDeclarationsList();
    setState(379);
    match(PascalParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclarationsListContext ------------------------------------------------------------------

PascalParser::ParameterDeclarationsListContext::ParameterDeclarationsListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::ParameterDeclarationsContext *> PascalParser::ParameterDeclarationsListContext::parameterDeclarations() {
  return getRuleContexts<PascalParser::ParameterDeclarationsContext>();
}

PascalParser::ParameterDeclarationsContext* PascalParser::ParameterDeclarationsListContext::parameterDeclarations(size_t i) {
  return getRuleContext<PascalParser::ParameterDeclarationsContext>(i);
}


size_t PascalParser::ParameterDeclarationsListContext::getRuleIndex() const {
  return PascalParser::RuleParameterDeclarationsList;
}


antlrcpp::Any PascalParser::ParameterDeclarationsListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitParameterDeclarationsList(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ParameterDeclarationsListContext* PascalParser::parameterDeclarationsList() {
  ParameterDeclarationsListContext *_localctx = _tracker.createInstance<ParameterDeclarationsListContext>(_ctx, getState());
  enterRule(_localctx, 72, PascalParser::RuleParameterDeclarationsList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(381);
    parameterDeclarations();
    setState(386);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::T__1) {
      setState(382);
      match(PascalParser::T__1);
      setState(383);
      parameterDeclarations();
      setState(388);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclarationsContext ------------------------------------------------------------------

PascalParser::ParameterDeclarationsContext::ParameterDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::ParameterIdentifierListContext* PascalParser::ParameterDeclarationsContext::parameterIdentifierList() {
  return getRuleContext<PascalParser::ParameterIdentifierListContext>(0);
}

PascalParser::TypeIdentifierContext* PascalParser::ParameterDeclarationsContext::typeIdentifier() {
  return getRuleContext<PascalParser::TypeIdentifierContext>(0);
}

tree::TerminalNode* PascalParser::ParameterDeclarationsContext::VAR() {
  return getToken(PascalParser::VAR, 0);
}


size_t PascalParser::ParameterDeclarationsContext::getRuleIndex() const {
  return PascalParser::RuleParameterDeclarations;
}


antlrcpp::Any PascalParser::ParameterDeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitParameterDeclarations(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ParameterDeclarationsContext* PascalParser::parameterDeclarations() {
  ParameterDeclarationsContext *_localctx = _tracker.createInstance<ParameterDeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 74, PascalParser::RuleParameterDeclarations);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(390);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::VAR) {
      setState(389);
      match(PascalParser::VAR);
    }
    setState(392);
    parameterIdentifierList();
    setState(393);
    match(PascalParser::T__11);
    setState(394);
    typeIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterIdentifierListContext ------------------------------------------------------------------

PascalParser::ParameterIdentifierListContext::ParameterIdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::ParameterIdentifierContext *> PascalParser::ParameterIdentifierListContext::parameterIdentifier() {
  return getRuleContexts<PascalParser::ParameterIdentifierContext>();
}

PascalParser::ParameterIdentifierContext* PascalParser::ParameterIdentifierListContext::parameterIdentifier(size_t i) {
  return getRuleContext<PascalParser::ParameterIdentifierContext>(i);
}


size_t PascalParser::ParameterIdentifierListContext::getRuleIndex() const {
  return PascalParser::RuleParameterIdentifierList;
}


antlrcpp::Any PascalParser::ParameterIdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitParameterIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ParameterIdentifierListContext* PascalParser::parameterIdentifierList() {
  ParameterIdentifierListContext *_localctx = _tracker.createInstance<ParameterIdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 76, PascalParser::RuleParameterIdentifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(396);
    parameterIdentifier();
    setState(401);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::T__3) {
      setState(397);
      match(PascalParser::T__3);
      setState(398);
      parameterIdentifier();
      setState(403);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterIdentifierContext ------------------------------------------------------------------

PascalParser::ParameterIdentifierContext::ParameterIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::ParameterIdentifierContext::IDENTIFIER() {
  return getToken(PascalParser::IDENTIFIER, 0);
}


size_t PascalParser::ParameterIdentifierContext::getRuleIndex() const {
  return PascalParser::RuleParameterIdentifier;
}


antlrcpp::Any PascalParser::ParameterIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitParameterIdentifier(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ParameterIdentifierContext* PascalParser::parameterIdentifier() {
  ParameterIdentifierContext *_localctx = _tracker.createInstance<ParameterIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 78, PascalParser::RuleParameterIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(404);
    match(PascalParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

PascalParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::CompoundStatementContext* PascalParser::StatementContext::compoundStatement() {
  return getRuleContext<PascalParser::CompoundStatementContext>(0);
}

PascalParser::AssignmentStatementContext* PascalParser::StatementContext::assignmentStatement() {
  return getRuleContext<PascalParser::AssignmentStatementContext>(0);
}

PascalParser::IfStatementContext* PascalParser::StatementContext::ifStatement() {
  return getRuleContext<PascalParser::IfStatementContext>(0);
}

PascalParser::ForStatementContext* PascalParser::StatementContext::forStatement() {
  return getRuleContext<PascalParser::ForStatementContext>(0);
}

PascalParser::WriteStatementContext* PascalParser::StatementContext::writeStatement() {
  return getRuleContext<PascalParser::WriteStatementContext>(0);
}

PascalParser::WritelnStatementContext* PascalParser::StatementContext::writelnStatement() {
  return getRuleContext<PascalParser::WritelnStatementContext>(0);
}

PascalParser::ReadStatementContext* PascalParser::StatementContext::readStatement() {
  return getRuleContext<PascalParser::ReadStatementContext>(0);
}

PascalParser::ReadlnStatementContext* PascalParser::StatementContext::readlnStatement() {
  return getRuleContext<PascalParser::ReadlnStatementContext>(0);
}

PascalParser::ProcedureCallStatementContext* PascalParser::StatementContext::procedureCallStatement() {
  return getRuleContext<PascalParser::ProcedureCallStatementContext>(0);
}

PascalParser::EmptyStatementContext* PascalParser::StatementContext::emptyStatement() {
  return getRuleContext<PascalParser::EmptyStatementContext>(0);
}

PascalParser::ScreenStatementContext* PascalParser::StatementContext::screenStatement() {
  return getRuleContext<PascalParser::ScreenStatementContext>(0);
}

PascalParser::GraphicsStatementContext* PascalParser::StatementContext::graphicsStatement() {
  return getRuleContext<PascalParser::GraphicsStatementContext>(0);
}

PascalParser::ShapesStatementContext* PascalParser::StatementContext::shapesStatement() {
  return getRuleContext<PascalParser::ShapesStatementContext>(0);
}

PascalParser::ColorStatementContext* PascalParser::StatementContext::colorStatement() {
  return getRuleContext<PascalParser::ColorStatementContext>(0);
}

PascalParser::FillStatementContext* PascalParser::StatementContext::fillStatement() {
  return getRuleContext<PascalParser::FillStatementContext>(0);
}


size_t PascalParser::StatementContext::getRuleIndex() const {
  return PascalParser::RuleStatement;
}


antlrcpp::Any PascalParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::StatementContext* PascalParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 80, PascalParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(421);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(406);
      compoundStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(407);
      assignmentStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(408);
      ifStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(409);
      forStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(410);
      writeStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(411);
      writelnStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(412);
      readStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(413);
      readlnStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(414);
      procedureCallStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(415);
      emptyStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(416);
      screenStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(417);
      graphicsStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(418);
      shapesStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(419);
      colorStatement();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(420);
      fillStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

PascalParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::StatementListContext* PascalParser::CompoundStatementContext::statementList() {
  return getRuleContext<PascalParser::StatementListContext>(0);
}


size_t PascalParser::CompoundStatementContext::getRuleIndex() const {
  return PascalParser::RuleCompoundStatement;
}


antlrcpp::Any PascalParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::CompoundStatementContext* PascalParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 82, PascalParser::RuleCompoundStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
    match(PascalParser::T__9);
    setState(424);
    statementList();
    setState(425);
    match(PascalParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

PascalParser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::EmptyStatementContext::getRuleIndex() const {
  return PascalParser::RuleEmptyStatement;
}


antlrcpp::Any PascalParser::EmptyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitEmptyStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::EmptyStatementContext* PascalParser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 84, PascalParser::RuleEmptyStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementListContext ------------------------------------------------------------------

PascalParser::StatementListContext::StatementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::StatementContext *> PascalParser::StatementListContext::statement() {
  return getRuleContexts<PascalParser::StatementContext>();
}

PascalParser::StatementContext* PascalParser::StatementListContext::statement(size_t i) {
  return getRuleContext<PascalParser::StatementContext>(i);
}


size_t PascalParser::StatementListContext::getRuleIndex() const {
  return PascalParser::RuleStatementList;
}


antlrcpp::Any PascalParser::StatementListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStatementList(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::StatementListContext* PascalParser::statementList() {
  StatementListContext *_localctx = _tracker.createInstance<StatementListContext>(_ctx, getState());
  enterRule(_localctx, 86, PascalParser::RuleStatementList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(429);
    statement();
    setState(434);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::T__1) {
      setState(430);
      match(PascalParser::T__1);
      setState(431);
      statement();
      setState(436);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStatementContext ------------------------------------------------------------------

PascalParser::AssignmentStatementContext::AssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::LhsContext* PascalParser::AssignmentStatementContext::lhs() {
  return getRuleContext<PascalParser::LhsContext>(0);
}

PascalParser::RhsContext* PascalParser::AssignmentStatementContext::rhs() {
  return getRuleContext<PascalParser::RhsContext>(0);
}


size_t PascalParser::AssignmentStatementContext::getRuleIndex() const {
  return PascalParser::RuleAssignmentStatement;
}


antlrcpp::Any PascalParser::AssignmentStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitAssignmentStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::AssignmentStatementContext* PascalParser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 88, PascalParser::RuleAssignmentStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(437);
    lhs();
    setState(438);
    match(PascalParser::T__5);
    setState(439);
    rhs();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LhsContext ------------------------------------------------------------------

PascalParser::LhsContext::LhsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::VariableContext* PascalParser::LhsContext::variable() {
  return getRuleContext<PascalParser::VariableContext>(0);
}


size_t PascalParser::LhsContext::getRuleIndex() const {
  return PascalParser::RuleLhs;
}


antlrcpp::Any PascalParser::LhsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitLhs(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::LhsContext* PascalParser::lhs() {
  LhsContext *_localctx = _tracker.createInstance<LhsContext>(_ctx, getState());
  enterRule(_localctx, 90, PascalParser::RuleLhs);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(441);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RhsContext ------------------------------------------------------------------

PascalParser::RhsContext::RhsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::ExpressionContext* PascalParser::RhsContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}


size_t PascalParser::RhsContext::getRuleIndex() const {
  return PascalParser::RuleRhs;
}


antlrcpp::Any PascalParser::RhsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitRhs(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::RhsContext* PascalParser::rhs() {
  RhsContext *_localctx = _tracker.createInstance<RhsContext>(_ctx, getState());
  enterRule(_localctx, 92, PascalParser::RuleRhs);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(443);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

PascalParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::IfStatementContext::IF() {
  return getToken(PascalParser::IF, 0);
}

PascalParser::ExpressionContext* PascalParser::IfStatementContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}

PascalParser::TrueStatementContext* PascalParser::IfStatementContext::trueStatement() {
  return getRuleContext<PascalParser::TrueStatementContext>(0);
}

tree::TerminalNode* PascalParser::IfStatementContext::ELSE() {
  return getToken(PascalParser::ELSE, 0);
}

PascalParser::FalseStatementContext* PascalParser::IfStatementContext::falseStatement() {
  return getRuleContext<PascalParser::FalseStatementContext>(0);
}


size_t PascalParser::IfStatementContext::getRuleIndex() const {
  return PascalParser::RuleIfStatement;
}


antlrcpp::Any PascalParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::IfStatementContext* PascalParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 94, PascalParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(445);
    match(PascalParser::IF);
    setState(446);
    expression();
    setState(447);
    match(PascalParser::T__2);
    setState(448);
    trueStatement();
    setState(451);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::ELSE) {
      setState(449);
      match(PascalParser::ELSE);
      setState(450);
      falseStatement();
    }
    setState(453);
    match(PascalParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrueStatementContext ------------------------------------------------------------------

PascalParser::TrueStatementContext::TrueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::StatementContext* PascalParser::TrueStatementContext::statement() {
  return getRuleContext<PascalParser::StatementContext>(0);
}


size_t PascalParser::TrueStatementContext::getRuleIndex() const {
  return PascalParser::RuleTrueStatement;
}


antlrcpp::Any PascalParser::TrueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitTrueStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::TrueStatementContext* PascalParser::trueStatement() {
  TrueStatementContext *_localctx = _tracker.createInstance<TrueStatementContext>(_ctx, getState());
  enterRule(_localctx, 96, PascalParser::RuleTrueStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FalseStatementContext ------------------------------------------------------------------

PascalParser::FalseStatementContext::FalseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::StatementContext* PascalParser::FalseStatementContext::statement() {
  return getRuleContext<PascalParser::StatementContext>(0);
}


size_t PascalParser::FalseStatementContext::getRuleIndex() const {
  return PascalParser::RuleFalseStatement;
}


antlrcpp::Any PascalParser::FalseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitFalseStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::FalseStatementContext* PascalParser::falseStatement() {
  FalseStatementContext *_localctx = _tracker.createInstance<FalseStatementContext>(_ctx, getState());
  enterRule(_localctx, 98, PascalParser::RuleFalseStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(457);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

PascalParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::ForStatementContext::FOR() {
  return getToken(PascalParser::FOR, 0);
}

PascalParser::VariableContext* PascalParser::ForStatementContext::variable() {
  return getRuleContext<PascalParser::VariableContext>(0);
}

std::vector<PascalParser::ExpressionContext *> PascalParser::ForStatementContext::expression() {
  return getRuleContexts<PascalParser::ExpressionContext>();
}

PascalParser::ExpressionContext* PascalParser::ForStatementContext::expression(size_t i) {
  return getRuleContext<PascalParser::ExpressionContext>(i);
}

PascalParser::StatementContext* PascalParser::ForStatementContext::statement() {
  return getRuleContext<PascalParser::StatementContext>(0);
}


size_t PascalParser::ForStatementContext::getRuleIndex() const {
  return PascalParser::RuleForStatement;
}


antlrcpp::Any PascalParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ForStatementContext* PascalParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 100, PascalParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(459);
    match(PascalParser::FOR);
    setState(460);
    variable();
    setState(461);
    match(PascalParser::T__5);
    setState(462);
    expression();
    setState(463);
    match(PascalParser::T__2);
    setState(464);
    expression();
    setState(465);
    match(PascalParser::T__4);
    setState(466);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScreenStatementContext ------------------------------------------------------------------

PascalParser::ScreenStatementContext::ScreenStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::ScreenStatementContext::SCREEN() {
  return getToken(PascalParser::SCREEN, 0);
}

PascalParser::VariableContext* PascalParser::ScreenStatementContext::variable() {
  return getRuleContext<PascalParser::VariableContext>(0);
}

tree::TerminalNode* PascalParser::ScreenStatementContext::SIZEX() {
  return getToken(PascalParser::SIZEX, 0);
}

std::vector<PascalParser::ExpressionContext *> PascalParser::ScreenStatementContext::expression() {
  return getRuleContexts<PascalParser::ExpressionContext>();
}

PascalParser::ExpressionContext* PascalParser::ScreenStatementContext::expression(size_t i) {
  return getRuleContext<PascalParser::ExpressionContext>(i);
}

tree::TerminalNode* PascalParser::ScreenStatementContext::SIZEY() {
  return getToken(PascalParser::SIZEY, 0);
}

tree::TerminalNode* PascalParser::ScreenStatementContext::CREATE() {
  return getToken(PascalParser::CREATE, 0);
}

tree::TerminalNode* PascalParser::ScreenStatementContext::ADDGRAPHICS() {
  return getToken(PascalParser::ADDGRAPHICS, 0);
}


size_t PascalParser::ScreenStatementContext::getRuleIndex() const {
  return PascalParser::RuleScreenStatement;
}


antlrcpp::Any PascalParser::ScreenStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitScreenStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ScreenStatementContext* PascalParser::screenStatement() {
  ScreenStatementContext *_localctx = _tracker.createInstance<ScreenStatementContext>(_ctx, getState());
  enterRule(_localctx, 102, PascalParser::RuleScreenStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(468);
    match(PascalParser::SCREEN);
    setState(469);
    variable();
    setState(470);
    match(PascalParser::SIZEX);
    setState(471);
    expression();
    setState(472);
    match(PascalParser::SIZEY);
    setState(473);
    expression();
    setState(474);
    _la = _input->LA(1);
    if (!(_la == PascalParser::CREATE

    || _la == PascalParser::ADDGRAPHICS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GraphicsStatementContext ------------------------------------------------------------------

PascalParser::GraphicsStatementContext::GraphicsStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::GraphicsStatementContext::GRAPHICS() {
  return getToken(PascalParser::GRAPHICS, 0);
}

PascalParser::VariableContext* PascalParser::GraphicsStatementContext::variable() {
  return getRuleContext<PascalParser::VariableContext>(0);
}

tree::TerminalNode* PascalParser::GraphicsStatementContext::PAINTING() {
  return getToken(PascalParser::PAINTING, 0);
}


size_t PascalParser::GraphicsStatementContext::getRuleIndex() const {
  return PascalParser::RuleGraphicsStatement;
}


antlrcpp::Any PascalParser::GraphicsStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitGraphicsStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::GraphicsStatementContext* PascalParser::graphicsStatement() {
  GraphicsStatementContext *_localctx = _tracker.createInstance<GraphicsStatementContext>(_ctx, getState());
  enterRule(_localctx, 104, PascalParser::RuleGraphicsStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(476);
    match(PascalParser::GRAPHICS);
    setState(477);
    variable();
    setState(478);
    match(PascalParser::PAINTING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShapesStatementContext ------------------------------------------------------------------

PascalParser::ShapesStatementContext::ShapesStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::ShapesStatementContext::SHAPE() {
  return getToken(PascalParser::SHAPE, 0);
}

PascalParser::VariableContext* PascalParser::ShapesStatementContext::variable() {
  return getRuleContext<PascalParser::VariableContext>(0);
}

tree::TerminalNode* PascalParser::ShapesStatementContext::POSITIONX() {
  return getToken(PascalParser::POSITIONX, 0);
}

PascalParser::FactorContext* PascalParser::ShapesStatementContext::factor() {
  return getRuleContext<PascalParser::FactorContext>(0);
}

tree::TerminalNode* PascalParser::ShapesStatementContext::POSITIONY() {
  return getToken(PascalParser::POSITIONY, 0);
}

std::vector<PascalParser::ExpressionContext *> PascalParser::ShapesStatementContext::expression() {
  return getRuleContexts<PascalParser::ExpressionContext>();
}

PascalParser::ExpressionContext* PascalParser::ShapesStatementContext::expression(size_t i) {
  return getRuleContext<PascalParser::ExpressionContext>(i);
}

tree::TerminalNode* PascalParser::ShapesStatementContext::WIDTH() {
  return getToken(PascalParser::WIDTH, 0);
}

tree::TerminalNode* PascalParser::ShapesStatementContext::HEIGHT() {
  return getToken(PascalParser::HEIGHT, 0);
}

tree::TerminalNode* PascalParser::ShapesStatementContext::RECTANGLE() {
  return getToken(PascalParser::RECTANGLE, 0);
}

tree::TerminalNode* PascalParser::ShapesStatementContext::CIRCLE() {
  return getToken(PascalParser::CIRCLE, 0);
}


size_t PascalParser::ShapesStatementContext::getRuleIndex() const {
  return PascalParser::RuleShapesStatement;
}


antlrcpp::Any PascalParser::ShapesStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitShapesStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ShapesStatementContext* PascalParser::shapesStatement() {
  ShapesStatementContext *_localctx = _tracker.createInstance<ShapesStatementContext>(_ctx, getState());
  enterRule(_localctx, 106, PascalParser::RuleShapesStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(480);
    match(PascalParser::SHAPE);
    setState(481);
    variable();
    setState(482);
    match(PascalParser::POSITIONX);
    setState(483);
    factor();
    setState(484);
    match(PascalParser::POSITIONY);
    setState(485);
    expression();
    setState(486);
    match(PascalParser::WIDTH);
    setState(487);
    expression();
    setState(488);
    match(PascalParser::HEIGHT);
    setState(489);
    expression();
    setState(490);
    _la = _input->LA(1);
    if (!(_la == PascalParser::RECTANGLE

    || _la == PascalParser::CIRCLE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ColorStatementContext ------------------------------------------------------------------

PascalParser::ColorStatementContext::ColorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::ColorStatementContext::COLOR() {
  return getToken(PascalParser::COLOR, 0);
}

PascalParser::VariableContext* PascalParser::ColorStatementContext::variable() {
  return getRuleContext<PascalParser::VariableContext>(0);
}

tree::TerminalNode* PascalParser::ColorStatementContext::SET() {
  return getToken(PascalParser::SET, 0);
}

PascalParser::ExpressionContext* PascalParser::ColorStatementContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}


size_t PascalParser::ColorStatementContext::getRuleIndex() const {
  return PascalParser::RuleColorStatement;
}


antlrcpp::Any PascalParser::ColorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitColorStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ColorStatementContext* PascalParser::colorStatement() {
  ColorStatementContext *_localctx = _tracker.createInstance<ColorStatementContext>(_ctx, getState());
  enterRule(_localctx, 108, PascalParser::RuleColorStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(492);
    match(PascalParser::COLOR);
    setState(493);
    variable();
    setState(494);
    match(PascalParser::SET);
    setState(495);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FillStatementContext ------------------------------------------------------------------

PascalParser::FillStatementContext::FillStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::FillStatementContext::FILL() {
  return getToken(PascalParser::FILL, 0);
}

PascalParser::VariableContext* PascalParser::FillStatementContext::variable() {
  return getRuleContext<PascalParser::VariableContext>(0);
}

tree::TerminalNode* PascalParser::FillStatementContext::WINDOW() {
  return getToken(PascalParser::WINDOW, 0);
}


size_t PascalParser::FillStatementContext::getRuleIndex() const {
  return PascalParser::RuleFillStatement;
}


antlrcpp::Any PascalParser::FillStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitFillStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::FillStatementContext* PascalParser::fillStatement() {
  FillStatementContext *_localctx = _tracker.createInstance<FillStatementContext>(_ctx, getState());
  enterRule(_localctx, 110, PascalParser::RuleFillStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(497);
    match(PascalParser::FILL);
    setState(498);
    variable();
    setState(499);
    match(PascalParser::WINDOW);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureCallStatementContext ------------------------------------------------------------------

PascalParser::ProcedureCallStatementContext::ProcedureCallStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::ProcedureNameContext* PascalParser::ProcedureCallStatementContext::procedureName() {
  return getRuleContext<PascalParser::ProcedureNameContext>(0);
}

PascalParser::ArgumentListContext* PascalParser::ProcedureCallStatementContext::argumentList() {
  return getRuleContext<PascalParser::ArgumentListContext>(0);
}


size_t PascalParser::ProcedureCallStatementContext::getRuleIndex() const {
  return PascalParser::RuleProcedureCallStatement;
}


antlrcpp::Any PascalParser::ProcedureCallStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProcedureCallStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ProcedureCallStatementContext* PascalParser::procedureCallStatement() {
  ProcedureCallStatementContext *_localctx = _tracker.createInstance<ProcedureCallStatementContext>(_ctx, getState());
  enterRule(_localctx, 112, PascalParser::RuleProcedureCallStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(501);
    procedureName();
    setState(502);
    match(PascalParser::T__2);
    setState(504);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalParser::T__2)
      | (1ULL << PascalParser::T__6)
      | (1ULL << PascalParser::T__7)
      | (1ULL << PascalParser::NOT))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (PascalParser::IDENTIFIER - 79))
      | (1ULL << (PascalParser::INTEGER - 79))
      | (1ULL << (PascalParser::REAL - 79))
      | (1ULL << (PascalParser::CHARACTER - 79))
      | (1ULL << (PascalParser::STRING - 79)))) != 0)) {
      setState(503);
      argumentList();
    }
    setState(506);
    match(PascalParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureNameContext ------------------------------------------------------------------

PascalParser::ProcedureNameContext::ProcedureNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::ProcedureNameContext::IDENTIFIER() {
  return getToken(PascalParser::IDENTIFIER, 0);
}


size_t PascalParser::ProcedureNameContext::getRuleIndex() const {
  return PascalParser::RuleProcedureName;
}


antlrcpp::Any PascalParser::ProcedureNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitProcedureName(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ProcedureNameContext* PascalParser::procedureName() {
  ProcedureNameContext *_localctx = _tracker.createInstance<ProcedureNameContext>(_ctx, getState());
  enterRule(_localctx, 114, PascalParser::RuleProcedureName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(508);
    match(PascalParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

PascalParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::ArgumentContext *> PascalParser::ArgumentListContext::argument() {
  return getRuleContexts<PascalParser::ArgumentContext>();
}

PascalParser::ArgumentContext* PascalParser::ArgumentListContext::argument(size_t i) {
  return getRuleContext<PascalParser::ArgumentContext>(i);
}


size_t PascalParser::ArgumentListContext::getRuleIndex() const {
  return PascalParser::RuleArgumentList;
}


antlrcpp::Any PascalParser::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ArgumentListContext* PascalParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 116, PascalParser::RuleArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(510);
    argument();
    setState(515);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::T__3) {
      setState(511);
      match(PascalParser::T__3);
      setState(512);
      argument();
      setState(517);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

PascalParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::ExpressionContext* PascalParser::ArgumentContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}


size_t PascalParser::ArgumentContext::getRuleIndex() const {
  return PascalParser::RuleArgument;
}


antlrcpp::Any PascalParser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ArgumentContext* PascalParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 118, PascalParser::RuleArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(518);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WriteStatementContext ------------------------------------------------------------------

PascalParser::WriteStatementContext::WriteStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::WriteStatementContext::WRITE() {
  return getToken(PascalParser::WRITE, 0);
}

PascalParser::WriteArgumentsContext* PascalParser::WriteStatementContext::writeArguments() {
  return getRuleContext<PascalParser::WriteArgumentsContext>(0);
}


size_t PascalParser::WriteStatementContext::getRuleIndex() const {
  return PascalParser::RuleWriteStatement;
}


antlrcpp::Any PascalParser::WriteStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitWriteStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::WriteStatementContext* PascalParser::writeStatement() {
  WriteStatementContext *_localctx = _tracker.createInstance<WriteStatementContext>(_ctx, getState());
  enterRule(_localctx, 120, PascalParser::RuleWriteStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(520);
    match(PascalParser::WRITE);
    setState(521);
    writeArguments();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WritelnStatementContext ------------------------------------------------------------------

PascalParser::WritelnStatementContext::WritelnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::WritelnStatementContext::WRITELN() {
  return getToken(PascalParser::WRITELN, 0);
}

PascalParser::WriteArgumentsContext* PascalParser::WritelnStatementContext::writeArguments() {
  return getRuleContext<PascalParser::WriteArgumentsContext>(0);
}


size_t PascalParser::WritelnStatementContext::getRuleIndex() const {
  return PascalParser::RuleWritelnStatement;
}


antlrcpp::Any PascalParser::WritelnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitWritelnStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::WritelnStatementContext* PascalParser::writelnStatement() {
  WritelnStatementContext *_localctx = _tracker.createInstance<WritelnStatementContext>(_ctx, getState());
  enterRule(_localctx, 122, PascalParser::RuleWritelnStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(523);
    match(PascalParser::WRITELN);
    setState(525);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::T__2) {
      setState(524);
      writeArguments();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WriteArgumentsContext ------------------------------------------------------------------

PascalParser::WriteArgumentsContext::WriteArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::WriteArgumentContext *> PascalParser::WriteArgumentsContext::writeArgument() {
  return getRuleContexts<PascalParser::WriteArgumentContext>();
}

PascalParser::WriteArgumentContext* PascalParser::WriteArgumentsContext::writeArgument(size_t i) {
  return getRuleContext<PascalParser::WriteArgumentContext>(i);
}


size_t PascalParser::WriteArgumentsContext::getRuleIndex() const {
  return PascalParser::RuleWriteArguments;
}


antlrcpp::Any PascalParser::WriteArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitWriteArguments(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::WriteArgumentsContext* PascalParser::writeArguments() {
  WriteArgumentsContext *_localctx = _tracker.createInstance<WriteArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 124, PascalParser::RuleWriteArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(527);
    match(PascalParser::T__2);
    setState(528);
    writeArgument();
    setState(533);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::T__3) {
      setState(529);
      match(PascalParser::T__3);
      setState(530);
      writeArgument();
      setState(535);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(536);
    match(PascalParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WriteArgumentContext ------------------------------------------------------------------

PascalParser::WriteArgumentContext::WriteArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::ExpressionContext* PascalParser::WriteArgumentContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}

PascalParser::FieldWidthContext* PascalParser::WriteArgumentContext::fieldWidth() {
  return getRuleContext<PascalParser::FieldWidthContext>(0);
}


size_t PascalParser::WriteArgumentContext::getRuleIndex() const {
  return PascalParser::RuleWriteArgument;
}


antlrcpp::Any PascalParser::WriteArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitWriteArgument(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::WriteArgumentContext* PascalParser::writeArgument() {
  WriteArgumentContext *_localctx = _tracker.createInstance<WriteArgumentContext>(_ctx, getState());
  enterRule(_localctx, 126, PascalParser::RuleWriteArgument);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(538);
    expression();
    setState(541);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::T__11) {
      setState(539);
      match(PascalParser::T__11);
      setState(540);
      fieldWidth();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldWidthContext ------------------------------------------------------------------

PascalParser::FieldWidthContext::FieldWidthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::IntegerConstantContext* PascalParser::FieldWidthContext::integerConstant() {
  return getRuleContext<PascalParser::IntegerConstantContext>(0);
}

PascalParser::SignContext* PascalParser::FieldWidthContext::sign() {
  return getRuleContext<PascalParser::SignContext>(0);
}

PascalParser::DecimalPlacesContext* PascalParser::FieldWidthContext::decimalPlaces() {
  return getRuleContext<PascalParser::DecimalPlacesContext>(0);
}


size_t PascalParser::FieldWidthContext::getRuleIndex() const {
  return PascalParser::RuleFieldWidth;
}


antlrcpp::Any PascalParser::FieldWidthContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitFieldWidth(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::FieldWidthContext* PascalParser::fieldWidth() {
  FieldWidthContext *_localctx = _tracker.createInstance<FieldWidthContext>(_ctx, getState());
  enterRule(_localctx, 128, PascalParser::RuleFieldWidth);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(544);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::T__6

    || _la == PascalParser::T__7) {
      setState(543);
      sign();
    }
    setState(546);
    integerConstant();
    setState(549);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::T__11) {
      setState(547);
      match(PascalParser::T__11);
      setState(548);
      decimalPlaces();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecimalPlacesContext ------------------------------------------------------------------

PascalParser::DecimalPlacesContext::DecimalPlacesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::IntegerConstantContext* PascalParser::DecimalPlacesContext::integerConstant() {
  return getRuleContext<PascalParser::IntegerConstantContext>(0);
}


size_t PascalParser::DecimalPlacesContext::getRuleIndex() const {
  return PascalParser::RuleDecimalPlaces;
}


antlrcpp::Any PascalParser::DecimalPlacesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitDecimalPlaces(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::DecimalPlacesContext* PascalParser::decimalPlaces() {
  DecimalPlacesContext *_localctx = _tracker.createInstance<DecimalPlacesContext>(_ctx, getState());
  enterRule(_localctx, 130, PascalParser::RuleDecimalPlaces);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(551);
    integerConstant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReadStatementContext ------------------------------------------------------------------

PascalParser::ReadStatementContext::ReadStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::ReadStatementContext::READ() {
  return getToken(PascalParser::READ, 0);
}

PascalParser::ReadArgumentsContext* PascalParser::ReadStatementContext::readArguments() {
  return getRuleContext<PascalParser::ReadArgumentsContext>(0);
}


size_t PascalParser::ReadStatementContext::getRuleIndex() const {
  return PascalParser::RuleReadStatement;
}


antlrcpp::Any PascalParser::ReadStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitReadStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ReadStatementContext* PascalParser::readStatement() {
  ReadStatementContext *_localctx = _tracker.createInstance<ReadStatementContext>(_ctx, getState());
  enterRule(_localctx, 132, PascalParser::RuleReadStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(553);
    match(PascalParser::READ);
    setState(554);
    readArguments();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReadlnStatementContext ------------------------------------------------------------------

PascalParser::ReadlnStatementContext::ReadlnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::ReadlnStatementContext::READLN() {
  return getToken(PascalParser::READLN, 0);
}

PascalParser::ReadArgumentsContext* PascalParser::ReadlnStatementContext::readArguments() {
  return getRuleContext<PascalParser::ReadArgumentsContext>(0);
}


size_t PascalParser::ReadlnStatementContext::getRuleIndex() const {
  return PascalParser::RuleReadlnStatement;
}


antlrcpp::Any PascalParser::ReadlnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitReadlnStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ReadlnStatementContext* PascalParser::readlnStatement() {
  ReadlnStatementContext *_localctx = _tracker.createInstance<ReadlnStatementContext>(_ctx, getState());
  enterRule(_localctx, 134, PascalParser::RuleReadlnStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(556);
    match(PascalParser::READLN);
    setState(557);
    readArguments();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReadArgumentsContext ------------------------------------------------------------------

PascalParser::ReadArgumentsContext::ReadArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::VariableContext *> PascalParser::ReadArgumentsContext::variable() {
  return getRuleContexts<PascalParser::VariableContext>();
}

PascalParser::VariableContext* PascalParser::ReadArgumentsContext::variable(size_t i) {
  return getRuleContext<PascalParser::VariableContext>(i);
}


size_t PascalParser::ReadArgumentsContext::getRuleIndex() const {
  return PascalParser::RuleReadArguments;
}


antlrcpp::Any PascalParser::ReadArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitReadArguments(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ReadArgumentsContext* PascalParser::readArguments() {
  ReadArgumentsContext *_localctx = _tracker.createInstance<ReadArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 136, PascalParser::RuleReadArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(559);
    match(PascalParser::T__2);
    setState(560);
    variable();
    setState(565);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::T__3) {
      setState(561);
      match(PascalParser::T__3);
      setState(562);
      variable();
      setState(567);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(568);
    match(PascalParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

PascalParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::SimpleExpressionContext *> PascalParser::ExpressionContext::simpleExpression() {
  return getRuleContexts<PascalParser::SimpleExpressionContext>();
}

PascalParser::SimpleExpressionContext* PascalParser::ExpressionContext::simpleExpression(size_t i) {
  return getRuleContext<PascalParser::SimpleExpressionContext>(i);
}

PascalParser::RelOpContext* PascalParser::ExpressionContext::relOp() {
  return getRuleContext<PascalParser::RelOpContext>(0);
}


size_t PascalParser::ExpressionContext::getRuleIndex() const {
  return PascalParser::RuleExpression;
}


antlrcpp::Any PascalParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ExpressionContext* PascalParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 138, PascalParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(570);
    simpleExpression();
    setState(574);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalParser::T__12)
      | (1ULL << PascalParser::T__13)
      | (1ULL << PascalParser::T__14)
      | (1ULL << PascalParser::T__15)
      | (1ULL << PascalParser::T__16)
      | (1ULL << PascalParser::T__17))) != 0)) {
      setState(571);
      relOp();
      setState(572);
      simpleExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleExpressionContext ------------------------------------------------------------------

PascalParser::SimpleExpressionContext::SimpleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::TermContext *> PascalParser::SimpleExpressionContext::term() {
  return getRuleContexts<PascalParser::TermContext>();
}

PascalParser::TermContext* PascalParser::SimpleExpressionContext::term(size_t i) {
  return getRuleContext<PascalParser::TermContext>(i);
}

PascalParser::SignContext* PascalParser::SimpleExpressionContext::sign() {
  return getRuleContext<PascalParser::SignContext>(0);
}

std::vector<PascalParser::AddOpContext *> PascalParser::SimpleExpressionContext::addOp() {
  return getRuleContexts<PascalParser::AddOpContext>();
}

PascalParser::AddOpContext* PascalParser::SimpleExpressionContext::addOp(size_t i) {
  return getRuleContext<PascalParser::AddOpContext>(i);
}


size_t PascalParser::SimpleExpressionContext::getRuleIndex() const {
  return PascalParser::RuleSimpleExpression;
}


antlrcpp::Any PascalParser::SimpleExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitSimpleExpression(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::SimpleExpressionContext* PascalParser::simpleExpression() {
  SimpleExpressionContext *_localctx = _tracker.createInstance<SimpleExpressionContext>(_ctx, getState());
  enterRule(_localctx, 140, PascalParser::RuleSimpleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(577);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(576);
      sign();
      break;
    }

    default:
      break;
    }
    setState(579);
    term();
    setState(585);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalParser::T__6)
      | (1ULL << PascalParser::T__7)
      | (1ULL << PascalParser::OR))) != 0)) {
      setState(580);
      addOp();
      setState(581);
      term();
      setState(587);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

PascalParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::FactorContext *> PascalParser::TermContext::factor() {
  return getRuleContexts<PascalParser::FactorContext>();
}

PascalParser::FactorContext* PascalParser::TermContext::factor(size_t i) {
  return getRuleContext<PascalParser::FactorContext>(i);
}

std::vector<PascalParser::MulOpContext *> PascalParser::TermContext::mulOp() {
  return getRuleContexts<PascalParser::MulOpContext>();
}

PascalParser::MulOpContext* PascalParser::TermContext::mulOp(size_t i) {
  return getRuleContext<PascalParser::MulOpContext>(i);
}


size_t PascalParser::TermContext::getRuleIndex() const {
  return PascalParser::RuleTerm;
}


antlrcpp::Any PascalParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::TermContext* PascalParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 142, PascalParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(588);
    factor();
    setState(594);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalParser::T__18)
      | (1ULL << PascalParser::T__19)
      | (1ULL << PascalParser::DIV)
      | (1ULL << PascalParser::MOD)
      | (1ULL << PascalParser::AND))) != 0)) {
      setState(589);
      mulOp();
      setState(590);
      factor();
      setState(596);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

PascalParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::FactorContext::getRuleIndex() const {
  return PascalParser::RuleFactor;
}

void PascalParser::FactorContext::copyFrom(FactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- NumberFactorContext ------------------------------------------------------------------

PascalParser::NumberContext* PascalParser::NumberFactorContext::number() {
  return getRuleContext<PascalParser::NumberContext>(0);
}

PascalParser::NumberFactorContext::NumberFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::NumberFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitNumberFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringFactorContext ------------------------------------------------------------------

PascalParser::StringConstantContext* PascalParser::StringFactorContext::stringConstant() {
  return getRuleContext<PascalParser::StringConstantContext>(0);
}

PascalParser::StringFactorContext::StringFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::StringFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStringFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharacterFactorContext ------------------------------------------------------------------

PascalParser::CharacterConstantContext* PascalParser::CharacterFactorContext::characterConstant() {
  return getRuleContext<PascalParser::CharacterConstantContext>(0);
}

PascalParser::CharacterFactorContext::CharacterFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::CharacterFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitCharacterFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableFactorContext ------------------------------------------------------------------

PascalParser::VariableContext* PascalParser::VariableFactorContext::variable() {
  return getRuleContext<PascalParser::VariableContext>(0);
}

PascalParser::VariableFactorContext::VariableFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::VariableFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitVariableFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallFactorContext ------------------------------------------------------------------

PascalParser::FunctionCallContext* PascalParser::FunctionCallFactorContext::functionCall() {
  return getRuleContext<PascalParser::FunctionCallContext>(0);
}

PascalParser::FunctionCallFactorContext::FunctionCallFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::FunctionCallFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitFunctionCallFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotFactorContext ------------------------------------------------------------------

tree::TerminalNode* PascalParser::NotFactorContext::NOT() {
  return getToken(PascalParser::NOT, 0);
}

PascalParser::FactorContext* PascalParser::NotFactorContext::factor() {
  return getRuleContext<PascalParser::FactorContext>(0);
}

PascalParser::NotFactorContext::NotFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::NotFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitNotFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesizedFactorContext ------------------------------------------------------------------

PascalParser::ExpressionContext* PascalParser::ParenthesizedFactorContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}

PascalParser::ParenthesizedFactorContext::ParenthesizedFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any PascalParser::ParenthesizedFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitParenthesizedFactor(this);
  else
    return visitor->visitChildren(this);
}
PascalParser::FactorContext* PascalParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 144, PascalParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(608);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<PascalParser::VariableFactorContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(597);
      variable();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<PascalParser::NumberFactorContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(598);
      number();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<PascalParser::CharacterFactorContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(599);
      characterConstant();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<PascalParser::StringFactorContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(600);
      stringConstant();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<PascalParser::FunctionCallFactorContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(601);
      functionCall();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<PascalParser::NotFactorContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(602);
      match(PascalParser::NOT);
      setState(603);
      factor();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<PascalParser::ParenthesizedFactorContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(604);
      match(PascalParser::T__2);
      setState(605);
      expression();
      setState(606);
      match(PascalParser::T__4);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

PascalParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::VariableIdentifierContext* PascalParser::VariableContext::variableIdentifier() {
  return getRuleContext<PascalParser::VariableIdentifierContext>(0);
}

std::vector<PascalParser::ModifierContext *> PascalParser::VariableContext::modifier() {
  return getRuleContexts<PascalParser::ModifierContext>();
}

PascalParser::ModifierContext* PascalParser::VariableContext::modifier(size_t i) {
  return getRuleContext<PascalParser::ModifierContext>(i);
}


size_t PascalParser::VariableContext::getRuleIndex() const {
  return PascalParser::RuleVariable;
}


antlrcpp::Any PascalParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::VariableContext* PascalParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 146, PascalParser::RuleVariable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(610);
    variableIdentifier();
    setState(614);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::T__0

    || _la == PascalParser::T__9) {
      setState(611);
      modifier();
      setState(616);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModifierContext ------------------------------------------------------------------

PascalParser::ModifierContext::ModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::IndexListContext* PascalParser::ModifierContext::indexList() {
  return getRuleContext<PascalParser::IndexListContext>(0);
}

PascalParser::FieldContext* PascalParser::ModifierContext::field() {
  return getRuleContext<PascalParser::FieldContext>(0);
}


size_t PascalParser::ModifierContext::getRuleIndex() const {
  return PascalParser::RuleModifier;
}


antlrcpp::Any PascalParser::ModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitModifier(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::ModifierContext* PascalParser::modifier() {
  ModifierContext *_localctx = _tracker.createInstance<ModifierContext>(_ctx, getState());
  enterRule(_localctx, 148, PascalParser::RuleModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(623);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::T__9: {
        enterOuterAlt(_localctx, 1);
        setState(617);
        match(PascalParser::T__9);
        setState(618);
        indexList();
        setState(619);
        match(PascalParser::T__10);
        break;
      }

      case PascalParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(621);
        match(PascalParser::T__0);
        setState(622);
        field();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexListContext ------------------------------------------------------------------

PascalParser::IndexListContext::IndexListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalParser::IndexContext *> PascalParser::IndexListContext::index() {
  return getRuleContexts<PascalParser::IndexContext>();
}

PascalParser::IndexContext* PascalParser::IndexListContext::index(size_t i) {
  return getRuleContext<PascalParser::IndexContext>(i);
}


size_t PascalParser::IndexListContext::getRuleIndex() const {
  return PascalParser::RuleIndexList;
}


antlrcpp::Any PascalParser::IndexListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitIndexList(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::IndexListContext* PascalParser::indexList() {
  IndexListContext *_localctx = _tracker.createInstance<IndexListContext>(_ctx, getState());
  enterRule(_localctx, 150, PascalParser::RuleIndexList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(625);
    index();
    setState(630);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PascalParser::T__3) {
      setState(626);
      match(PascalParser::T__3);
      setState(627);
      index();
      setState(632);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexContext ------------------------------------------------------------------

PascalParser::IndexContext::IndexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::ExpressionContext* PascalParser::IndexContext::expression() {
  return getRuleContext<PascalParser::ExpressionContext>(0);
}


size_t PascalParser::IndexContext::getRuleIndex() const {
  return PascalParser::RuleIndex;
}


antlrcpp::Any PascalParser::IndexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitIndex(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::IndexContext* PascalParser::index() {
  IndexContext *_localctx = _tracker.createInstance<IndexContext>(_ctx, getState());
  enterRule(_localctx, 152, PascalParser::RuleIndex);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(633);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

PascalParser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::FieldContext::IDENTIFIER() {
  return getToken(PascalParser::IDENTIFIER, 0);
}


size_t PascalParser::FieldContext::getRuleIndex() const {
  return PascalParser::RuleField;
}


antlrcpp::Any PascalParser::FieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitField(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::FieldContext* PascalParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 154, PascalParser::RuleField);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(635);
    match(PascalParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

PascalParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::FunctionNameContext* PascalParser::FunctionCallContext::functionName() {
  return getRuleContext<PascalParser::FunctionNameContext>(0);
}

PascalParser::ArgumentListContext* PascalParser::FunctionCallContext::argumentList() {
  return getRuleContext<PascalParser::ArgumentListContext>(0);
}


size_t PascalParser::FunctionCallContext::getRuleIndex() const {
  return PascalParser::RuleFunctionCall;
}


antlrcpp::Any PascalParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::FunctionCallContext* PascalParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 156, PascalParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(637);
    functionName();
    setState(638);
    match(PascalParser::T__2);
    setState(640);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalParser::T__2)
      | (1ULL << PascalParser::T__6)
      | (1ULL << PascalParser::T__7)
      | (1ULL << PascalParser::NOT))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (PascalParser::IDENTIFIER - 79))
      | (1ULL << (PascalParser::INTEGER - 79))
      | (1ULL << (PascalParser::REAL - 79))
      | (1ULL << (PascalParser::CHARACTER - 79))
      | (1ULL << (PascalParser::STRING - 79)))) != 0)) {
      setState(639);
      argumentList();
    }
    setState(642);
    match(PascalParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionNameContext ------------------------------------------------------------------

PascalParser::FunctionNameContext::FunctionNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::FunctionNameContext::IDENTIFIER() {
  return getToken(PascalParser::IDENTIFIER, 0);
}


size_t PascalParser::FunctionNameContext::getRuleIndex() const {
  return PascalParser::RuleFunctionName;
}


antlrcpp::Any PascalParser::FunctionNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitFunctionName(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::FunctionNameContext* PascalParser::functionName() {
  FunctionNameContext *_localctx = _tracker.createInstance<FunctionNameContext>(_ctx, getState());
  enterRule(_localctx, 158, PascalParser::RuleFunctionName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(644);
    match(PascalParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

PascalParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::UnsignedNumberContext* PascalParser::NumberContext::unsignedNumber() {
  return getRuleContext<PascalParser::UnsignedNumberContext>(0);
}

PascalParser::SignContext* PascalParser::NumberContext::sign() {
  return getRuleContext<PascalParser::SignContext>(0);
}


size_t PascalParser::NumberContext::getRuleIndex() const {
  return PascalParser::RuleNumber;
}


antlrcpp::Any PascalParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::NumberContext* PascalParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 160, PascalParser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(647);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PascalParser::T__6

    || _la == PascalParser::T__7) {
      setState(646);
      sign();
    }
    setState(649);
    unsignedNumber();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsignedNumberContext ------------------------------------------------------------------

PascalParser::UnsignedNumberContext::UnsignedNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalParser::IntegerConstantContext* PascalParser::UnsignedNumberContext::integerConstant() {
  return getRuleContext<PascalParser::IntegerConstantContext>(0);
}

PascalParser::RealConstantContext* PascalParser::UnsignedNumberContext::realConstant() {
  return getRuleContext<PascalParser::RealConstantContext>(0);
}


size_t PascalParser::UnsignedNumberContext::getRuleIndex() const {
  return PascalParser::RuleUnsignedNumber;
}


antlrcpp::Any PascalParser::UnsignedNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitUnsignedNumber(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::UnsignedNumberContext* PascalParser::unsignedNumber() {
  UnsignedNumberContext *_localctx = _tracker.createInstance<UnsignedNumberContext>(_ctx, getState());
  enterRule(_localctx, 162, PascalParser::RuleUnsignedNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(653);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalParser::INTEGER: {
        enterOuterAlt(_localctx, 1);
        setState(651);
        integerConstant();
        break;
      }

      case PascalParser::REAL: {
        enterOuterAlt(_localctx, 2);
        setState(652);
        realConstant();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerConstantContext ------------------------------------------------------------------

PascalParser::IntegerConstantContext::IntegerConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::IntegerConstantContext::INTEGER() {
  return getToken(PascalParser::INTEGER, 0);
}


size_t PascalParser::IntegerConstantContext::getRuleIndex() const {
  return PascalParser::RuleIntegerConstant;
}


antlrcpp::Any PascalParser::IntegerConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitIntegerConstant(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::IntegerConstantContext* PascalParser::integerConstant() {
  IntegerConstantContext *_localctx = _tracker.createInstance<IntegerConstantContext>(_ctx, getState());
  enterRule(_localctx, 164, PascalParser::RuleIntegerConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(655);
    match(PascalParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RealConstantContext ------------------------------------------------------------------

PascalParser::RealConstantContext::RealConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::RealConstantContext::REAL() {
  return getToken(PascalParser::REAL, 0);
}


size_t PascalParser::RealConstantContext::getRuleIndex() const {
  return PascalParser::RuleRealConstant;
}


antlrcpp::Any PascalParser::RealConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitRealConstant(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::RealConstantContext* PascalParser::realConstant() {
  RealConstantContext *_localctx = _tracker.createInstance<RealConstantContext>(_ctx, getState());
  enterRule(_localctx, 166, PascalParser::RuleRealConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(657);
    match(PascalParser::REAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterConstantContext ------------------------------------------------------------------

PascalParser::CharacterConstantContext::CharacterConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::CharacterConstantContext::CHARACTER() {
  return getToken(PascalParser::CHARACTER, 0);
}


size_t PascalParser::CharacterConstantContext::getRuleIndex() const {
  return PascalParser::RuleCharacterConstant;
}


antlrcpp::Any PascalParser::CharacterConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitCharacterConstant(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::CharacterConstantContext* PascalParser::characterConstant() {
  CharacterConstantContext *_localctx = _tracker.createInstance<CharacterConstantContext>(_ctx, getState());
  enterRule(_localctx, 168, PascalParser::RuleCharacterConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(659);
    match(PascalParser::CHARACTER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringConstantContext ------------------------------------------------------------------

PascalParser::StringConstantContext::StringConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::StringConstantContext::STRING() {
  return getToken(PascalParser::STRING, 0);
}


size_t PascalParser::StringConstantContext::getRuleIndex() const {
  return PascalParser::RuleStringConstant;
}


antlrcpp::Any PascalParser::StringConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitStringConstant(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::StringConstantContext* PascalParser::stringConstant() {
  StringConstantContext *_localctx = _tracker.createInstance<StringConstantContext>(_ctx, getState());
  enterRule(_localctx, 170, PascalParser::RuleStringConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(661);
    match(PascalParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelOpContext ------------------------------------------------------------------

PascalParser::RelOpContext::RelOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PascalParser::RelOpContext::getRuleIndex() const {
  return PascalParser::RuleRelOp;
}


antlrcpp::Any PascalParser::RelOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitRelOp(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::RelOpContext* PascalParser::relOp() {
  RelOpContext *_localctx = _tracker.createInstance<RelOpContext>(_ctx, getState());
  enterRule(_localctx, 172, PascalParser::RuleRelOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(663);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalParser::T__12)
      | (1ULL << PascalParser::T__13)
      | (1ULL << PascalParser::T__14)
      | (1ULL << PascalParser::T__15)
      | (1ULL << PascalParser::T__16)
      | (1ULL << PascalParser::T__17))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddOpContext ------------------------------------------------------------------

PascalParser::AddOpContext::AddOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::AddOpContext::OR() {
  return getToken(PascalParser::OR, 0);
}


size_t PascalParser::AddOpContext::getRuleIndex() const {
  return PascalParser::RuleAddOp;
}


antlrcpp::Any PascalParser::AddOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitAddOp(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::AddOpContext* PascalParser::addOp() {
  AddOpContext *_localctx = _tracker.createInstance<AddOpContext>(_ctx, getState());
  enterRule(_localctx, 174, PascalParser::RuleAddOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(665);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalParser::T__6)
      | (1ULL << PascalParser::T__7)
      | (1ULL << PascalParser::OR))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulOpContext ------------------------------------------------------------------

PascalParser::MulOpContext::MulOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalParser::MulOpContext::DIV() {
  return getToken(PascalParser::DIV, 0);
}

tree::TerminalNode* PascalParser::MulOpContext::MOD() {
  return getToken(PascalParser::MOD, 0);
}

tree::TerminalNode* PascalParser::MulOpContext::AND() {
  return getToken(PascalParser::AND, 0);
}


size_t PascalParser::MulOpContext::getRuleIndex() const {
  return PascalParser::RuleMulOp;
}


antlrcpp::Any PascalParser::MulOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalVisitor*>(visitor))
    return parserVisitor->visitMulOp(this);
  else
    return visitor->visitChildren(this);
}

PascalParser::MulOpContext* PascalParser::mulOp() {
  MulOpContext *_localctx = _tracker.createInstance<MulOpContext>(_ctx, getState());
  enterRule(_localctx, 176, PascalParser::RuleMulOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(667);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PascalParser::T__18)
      | (1ULL << PascalParser::T__19)
      | (1ULL << PascalParser::DIV)
      | (1ULL << PascalParser::MOD)
      | (1ULL << PascalParser::AND))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> PascalParser::_decisionToDFA;
atn::PredictionContextCache PascalParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PascalParser::_atn;
std::vector<uint16_t> PascalParser::_serializedATN;

std::vector<std::string> PascalParser::_ruleNames = {
  "program", "programHeader", "programParameters", "programIdentifier", 
  "block", "declarations", "constantsPart", "constantDefinitionsList", "constantDefinition", 
  "constantIdentifier", "constant", "sign", "typesPart", "typeDefinitionsList", 
  "typeDefinition", "typeIdentifier", "typeSpecification", "simpleType", 
  "enumerationType", "enumerationConstant", "subrangeType", "arrayType", 
  "arrayDimensionList", "recordType", "recordFields", "variablesPart", "variableDeclarationsList", 
  "variableDeclarations", "variableIdentifierList", "variableIdentifier", 
  "routinesPart", "routineDefinition", "procedureHead", "functionHead", 
  "routineIdentifier", "parameters", "parameterDeclarationsList", "parameterDeclarations", 
  "parameterIdentifierList", "parameterIdentifier", "statement", "compoundStatement", 
  "emptyStatement", "statementList", "assignmentStatement", "lhs", "rhs", 
  "ifStatement", "trueStatement", "falseStatement", "forStatement", "screenStatement", 
  "graphicsStatement", "shapesStatement", "colorStatement", "fillStatement", 
  "procedureCallStatement", "procedureName", "argumentList", "argument", 
  "writeStatement", "writelnStatement", "writeArguments", "writeArgument", 
  "fieldWidth", "decimalPlaces", "readStatement", "readlnStatement", "readArguments", 
  "expression", "simpleExpression", "term", "factor", "variable", "modifier", 
  "indexList", "index", "field", "functionCall", "functionName", "number", 
  "unsignedNumber", "integerConstant", "realConstant", "characterConstant", 
  "stringConstant", "relOp", "addOp", "mulOp"
};

std::vector<std::string> PascalParser::_literalNames = {
  "", "'.'", "';'", "'('", "','", "')'", "'='", "'-'", "'+'", "'..'", "'['", 
  "']'", "':'", "'=='", "'!='", "'<'", "'<='", "'>'", "'>='", "'*'", "'/'", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "'''"
};

std::vector<std::string> PascalParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "PROGRAM", "PROGRAMS", "PLAIN", "SWING", "CONST", "TYPE", 
  "ARRAY", "OF", "RECORD", "VAR", "BEGIN", "END", "DIV", "MOD", "AND", "OR", 
  "NOT", "IF", "THEN", "ELSE", "CASE", "REPEAT", "UNTIL", "WHILE", "DO", 
  "FOR", "TO", "DOWNTO", "WRITE", "WRITELN", "READ", "READLN", "PROCEDURE", 
  "PUBLIC", "PRIVATE", "FUNCTION", "SCREEN", "NEWSCREEN", "SIZE", "PIG", 
  "SIZEY", "SIZEX", "CREATE", "GRAPHICS", "ALLOWGRAPHICS", "PAINTING", "ADDGRAPHICS", 
  "SHAPE", "POSITIONX", "POSITIONY", "WIDTH", "HEIGHT", "RECTANGLE", "CIRCLE", 
  "COLOR", "SET", "FILL", "WINDOW", "IDENTIFIER", "INTEGER", "REAL", "NEWLINE", 
  "WS", "QUOTE", "CHARACTER", "STRING", "COMMENT"
};

dfa::Vocabulary PascalParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> PascalParser::_tokenNames;

PascalParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x59, 0x2a0, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0xbd, 0xa, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x7, 0x4, 0xc5, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xc8, 0xb, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xd4, 0xa, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xd9, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x5, 0x7, 0xde, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x5, 0x7, 0xe3, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0xeb, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 
       0xee, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xc, 0x5, 0xc, 0xf7, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x5, 0xc, 0xfb, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xff, 0xa, 
       0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 
       0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x109, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 
       0x10c, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x117, 
       0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x11c, 0xa, 
       0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x122, 
       0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x125, 0xb, 0x14, 0x3, 0x14, 0x3, 
       0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x139, 
       0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x13c, 0xb, 0x18, 0x3, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x5, 0x19, 0x141, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
       0x3, 0x1c, 0x7, 0x1c, 0x14c, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x14f, 
       0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x7, 0x1e, 0x157, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x15a, 
       0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x7, 0x20, 0x161, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x164, 0xb, 0x20, 
       0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x168, 0xa, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x170, 
       0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x175, 0xa, 
       0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 
       0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x7, 0x26, 0x183, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x186, 0xb, 
       0x26, 0x3, 0x27, 0x5, 0x27, 0x189, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 
       0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 
       0x192, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x195, 0xb, 0x28, 0x3, 0x29, 
       0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x1a8, 0xa, 
       0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 
       0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x7, 0x2d, 0x1b3, 0xa, 0x2d, 
       0xc, 0x2d, 0xe, 0x2d, 0x1b6, 0xb, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 
       0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 
       0x31, 0x1c6, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 
       0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
       0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
       0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 
       0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
       0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 
       0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 
       0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 
       0x1fb, 0xa, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 
       0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x7, 0x3c, 0x204, 0xa, 0x3c, 0xc, 0x3c, 
       0xe, 0x3c, 0x207, 0xb, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 
       0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x210, 0xa, 0x3f, 
       0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x7, 0x40, 0x216, 0xa, 
       0x40, 0xc, 0x40, 0xe, 0x40, 0x219, 0xb, 0x40, 0x3, 0x40, 0x3, 0x40, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x220, 0xa, 0x41, 0x3, 
       0x42, 0x5, 0x42, 0x223, 0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
       0x5, 0x42, 0x228, 0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 
       0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 
       0x46, 0x3, 0x46, 0x3, 0x46, 0x7, 0x46, 0x236, 0xa, 0x46, 0xc, 0x46, 
       0xe, 0x46, 0x239, 0xb, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 
       0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x241, 0xa, 0x47, 0x3, 0x48, 
       0x5, 0x48, 0x244, 0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
       0x48, 0x7, 0x48, 0x24a, 0xa, 0x48, 0xc, 0x48, 0xe, 0x48, 0x24d, 0xb, 
       0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x7, 0x49, 0x253, 
       0xa, 0x49, 0xc, 0x49, 0xe, 0x49, 0x256, 0xb, 0x49, 0x3, 0x4a, 0x3, 
       0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
       0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x263, 0xa, 0x4a, 
       0x3, 0x4b, 0x3, 0x4b, 0x7, 0x4b, 0x267, 0xa, 0x4b, 0xc, 0x4b, 0xe, 
       0x4b, 0x26a, 0xb, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
       0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x272, 0xa, 0x4c, 0x3, 0x4d, 0x3, 
       0x4d, 0x3, 0x4d, 0x7, 0x4d, 0x277, 0xa, 0x4d, 0xc, 0x4d, 0xe, 0x4d, 
       0x27a, 0xb, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
       0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x283, 0xa, 0x50, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x5, 0x52, 0x28a, 0xa, 
       0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x290, 
       0xa, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 0x55, 0x3, 0x56, 
       0x3, 0x56, 0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x59, 
       0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x2, 0x2, 0x5b, 0x2, 
       0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
       0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 
       0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 
       0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 
       0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 
       0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 
       0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 
       0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0x2, 
       0xb, 0x3, 0x2, 0x19, 0x1a, 0x3, 0x2, 0x17, 0x18, 0x3, 0x2, 0x9, 0xa, 
       0x4, 0x2, 0x38, 0x39, 0x43, 0x43, 0x4, 0x2, 0x41, 0x41, 0x45, 0x45, 
       0x3, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0xf, 0x14, 0x4, 0x2, 0x9, 0xa, 0x26, 
       0x26, 0x4, 0x2, 0x15, 0x16, 0x23, 0x25, 0x2, 0x28a, 0x2, 0xb4, 0x3, 
       0x2, 0x2, 0x2, 0x4, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x6, 0xc0, 0x3, 0x2, 
       0x2, 0x2, 0x8, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xa, 0xcd, 0x3, 0x2, 0x2, 
       0x2, 0xc, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xe, 0xe4, 0x3, 0x2, 0x2, 0x2, 
       0x10, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x12, 0xef, 0x3, 0x2, 0x2, 0x2, 0x14, 
       0xf3, 0x3, 0x2, 0x2, 0x2, 0x16, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x18, 0x100, 
       0x3, 0x2, 0x2, 0x2, 0x1a, 0x102, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x105, 
       0x3, 0x2, 0x2, 0x2, 0x1e, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x20, 0x111, 
       0x3, 0x2, 0x2, 0x2, 0x22, 0x116, 0x3, 0x2, 0x2, 0x2, 0x24, 0x11b, 
       0x3, 0x2, 0x2, 0x2, 0x26, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x28, 0x128, 
       0x3, 0x2, 0x2, 0x2, 0x2a, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x12e, 
       0x3, 0x2, 0x2, 0x2, 0x2e, 0x135, 0x3, 0x2, 0x2, 0x2, 0x30, 0x13d, 
       0x3, 0x2, 0x2, 0x2, 0x32, 0x144, 0x3, 0x2, 0x2, 0x2, 0x34, 0x146, 
       0x3, 0x2, 0x2, 0x2, 0x36, 0x148, 0x3, 0x2, 0x2, 0x2, 0x38, 0x150, 
       0x3, 0x2, 0x2, 0x2, 0x3a, 0x153, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x15b, 
       0x3, 0x2, 0x2, 0x2, 0x3e, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x167, 
       0x3, 0x2, 0x2, 0x2, 0x42, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x44, 0x171, 
       0x3, 0x2, 0x2, 0x2, 0x46, 0x179, 0x3, 0x2, 0x2, 0x2, 0x48, 0x17b, 
       0x3, 0x2, 0x2, 0x2, 0x4a, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x188, 
       0x3, 0x2, 0x2, 0x2, 0x4e, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x196, 
       0x3, 0x2, 0x2, 0x2, 0x52, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1a9, 
       0x3, 0x2, 0x2, 0x2, 0x56, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1af, 
       0x3, 0x2, 0x2, 0x2, 0x5a, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x1bb, 
       0x3, 0x2, 0x2, 0x2, 0x5e, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x60, 0x1bf, 
       0x3, 0x2, 0x2, 0x2, 0x62, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x64, 0x1cb, 
       0x3, 0x2, 0x2, 0x2, 0x66, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x68, 0x1d6, 
       0x3, 0x2, 0x2, 0x2, 0x6a, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x1e2, 
       0x3, 0x2, 0x2, 0x2, 0x6e, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x70, 0x1f3, 
       0x3, 0x2, 0x2, 0x2, 0x72, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x74, 0x1fe, 
       0x3, 0x2, 0x2, 0x2, 0x76, 0x200, 0x3, 0x2, 0x2, 0x2, 0x78, 0x208, 
       0x3, 0x2, 0x2, 0x2, 0x7a, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x20d, 
       0x3, 0x2, 0x2, 0x2, 0x7e, 0x211, 0x3, 0x2, 0x2, 0x2, 0x80, 0x21c, 
       0x3, 0x2, 0x2, 0x2, 0x82, 0x222, 0x3, 0x2, 0x2, 0x2, 0x84, 0x229, 
       0x3, 0x2, 0x2, 0x2, 0x86, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x88, 0x22e, 
       0x3, 0x2, 0x2, 0x2, 0x8a, 0x231, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x23c, 
       0x3, 0x2, 0x2, 0x2, 0x8e, 0x243, 0x3, 0x2, 0x2, 0x2, 0x90, 0x24e, 
       0x3, 0x2, 0x2, 0x2, 0x92, 0x262, 0x3, 0x2, 0x2, 0x2, 0x94, 0x264, 
       0x3, 0x2, 0x2, 0x2, 0x96, 0x271, 0x3, 0x2, 0x2, 0x2, 0x98, 0x273, 
       0x3, 0x2, 0x2, 0x2, 0x9a, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x27d, 
       0x3, 0x2, 0x2, 0x2, 0x9e, 0x27f, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x286, 
       0x3, 0x2, 0x2, 0x2, 0xa2, 0x289, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x28f, 
       0x3, 0x2, 0x2, 0x2, 0xa6, 0x291, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x293, 
       0x3, 0x2, 0x2, 0x2, 0xaa, 0x295, 0x3, 0x2, 0x2, 0x2, 0xac, 0x297, 
       0x3, 0x2, 0x2, 0x2, 0xae, 0x299, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x29b, 
       0x3, 0x2, 0x2, 0x2, 0xb2, 0x29d, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 
       0x9, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x5, 0x4, 0x3, 0x2, 0xb6, 0xb7, 0x5, 
       0xa, 0x6, 0x2, 0xb7, 0xb8, 0x7, 0x3, 0x2, 0x2, 0xb8, 0x3, 0x3, 0x2, 
       0x2, 0x2, 0xb9, 0xba, 0x9, 0x3, 0x2, 0x2, 0xba, 0xbc, 0x5, 0x8, 0x5, 
       0x2, 0xbb, 0xbd, 0x5, 0x6, 0x4, 0x2, 0xbc, 0xbb, 0x3, 0x2, 0x2, 0x2, 
       0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 
       0xbf, 0x7, 0x4, 0x2, 0x2, 0xbf, 0x5, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 
       0x7, 0x5, 0x2, 0x2, 0xc1, 0xc6, 0x7, 0x51, 0x2, 0x2, 0xc2, 0xc3, 
       0x7, 0x6, 0x2, 0x2, 0xc3, 0xc5, 0x7, 0x51, 0x2, 0x2, 0xc4, 0xc2, 
       0x3, 0x2, 0x2, 0x2, 0xc5, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc4, 0x3, 
       0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc9, 0x3, 0x2, 
       0x2, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x7, 0x2, 
       0x2, 0xca, 0x7, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x51, 0x2, 0x2, 
       0xcc, 0x9, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x5, 0xc, 0x7, 0x2, 0xce, 
       0xcf, 0x5, 0x54, 0x2b, 0x2, 0xcf, 0xb, 0x3, 0x2, 0x2, 0x2, 0xd0, 
       0xd1, 0x5, 0xe, 0x8, 0x2, 0xd1, 0xd2, 0x7, 0x4, 0x2, 0x2, 0xd2, 0xd4, 
       0x3, 0x2, 0x2, 0x2, 0xd3, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 
       0x2, 0x2, 0x2, 0xd4, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x5, 0x1a, 
       0xe, 0x2, 0xd6, 0xd7, 0x7, 0x4, 0x2, 0x2, 0xd7, 0xd9, 0x3, 0x2, 0x2, 
       0x2, 0xd8, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 
       0xd9, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x34, 0x1b, 0x2, 
       0xdb, 0xdc, 0x7, 0x4, 0x2, 0x2, 0xdc, 0xde, 0x3, 0x2, 0x2, 0x2, 0xdd, 
       0xda, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 0x2, 0x2, 0xde, 0xe2, 
       0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x5, 0x3e, 0x20, 0x2, 0xe0, 0xe1, 
       0x7, 0x4, 0x2, 0x2, 0xe1, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xdf, 0x3, 
       0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xd, 0x3, 0x2, 
       0x2, 0x2, 0xe4, 0xe5, 0x7, 0x1b, 0x2, 0x2, 0xe5, 0xe6, 0x5, 0x10, 
       0x9, 0x2, 0xe6, 0xf, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xec, 0x5, 0x12, 0xa, 
       0x2, 0xe8, 0xe9, 0x7, 0x4, 0x2, 0x2, 0xe9, 0xeb, 0x5, 0x12, 0xa, 
       0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xee, 0x3, 0x2, 0x2, 0x2, 
       0xec, 0xea, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 
       0x11, 0x3, 0x2, 0x2, 0x2, 0xee, 0xec, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 
       0x5, 0x14, 0xb, 0x2, 0xf0, 0xf1, 0x7, 0x8, 0x2, 0x2, 0xf1, 0xf2, 
       0x5, 0x16, 0xc, 0x2, 0xf2, 0x13, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 
       0x7, 0x51, 0x2, 0x2, 0xf4, 0x15, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf7, 
       0x5, 0x18, 0xd, 0x2, 0xf6, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 
       0x3, 0x2, 0x2, 0x2, 0xf7, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xfb, 0x7, 
       0x51, 0x2, 0x2, 0xf9, 0xfb, 0x5, 0xa4, 0x53, 0x2, 0xfa, 0xf8, 0x3, 
       0x2, 0x2, 0x2, 0xfa, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xff, 0x3, 0x2, 
       0x2, 0x2, 0xfc, 0xff, 0x5, 0xaa, 0x56, 0x2, 0xfd, 0xff, 0x5, 0xac, 
       0x57, 0x2, 0xfe, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 
       0x2, 0x2, 0xfe, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xff, 0x17, 0x3, 0x2, 0x2, 
       0x2, 0x100, 0x101, 0x9, 0x4, 0x2, 0x2, 0x101, 0x19, 0x3, 0x2, 0x2, 
       0x2, 0x102, 0x103, 0x7, 0x1c, 0x2, 0x2, 0x103, 0x104, 0x5, 0x1c, 
       0xf, 0x2, 0x104, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x105, 0x10a, 0x5, 0x1e, 
       0x10, 0x2, 0x106, 0x107, 0x7, 0x4, 0x2, 0x2, 0x107, 0x109, 0x5, 0x1e, 
       0x10, 0x2, 0x108, 0x106, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10c, 0x3, 0x2, 
       0x2, 0x2, 0x10a, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x3, 0x2, 
       0x2, 0x2, 0x10b, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10a, 0x3, 0x2, 
       0x2, 0x2, 0x10d, 0x10e, 0x5, 0x20, 0x11, 0x2, 0x10e, 0x10f, 0x7, 
       0x8, 0x2, 0x2, 0x10f, 0x110, 0x5, 0x22, 0x12, 0x2, 0x110, 0x1f, 0x3, 
       0x2, 0x2, 0x2, 0x111, 0x112, 0x7, 0x51, 0x2, 0x2, 0x112, 0x21, 0x3, 
       0x2, 0x2, 0x2, 0x113, 0x117, 0x5, 0x24, 0x13, 0x2, 0x114, 0x117, 
       0x5, 0x2c, 0x17, 0x2, 0x115, 0x117, 0x5, 0x30, 0x19, 0x2, 0x116, 
       0x113, 0x3, 0x2, 0x2, 0x2, 0x116, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 
       0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x23, 0x3, 0x2, 0x2, 0x2, 0x118, 
       0x11c, 0x5, 0x20, 0x11, 0x2, 0x119, 0x11c, 0x5, 0x26, 0x14, 0x2, 
       0x11a, 0x11c, 0x5, 0x2a, 0x16, 0x2, 0x11b, 0x118, 0x3, 0x2, 0x2, 
       0x2, 0x11b, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11a, 0x3, 0x2, 0x2, 
       0x2, 0x11c, 0x25, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x7, 0x5, 0x2, 
       0x2, 0x11e, 0x123, 0x5, 0x28, 0x15, 0x2, 0x11f, 0x120, 0x7, 0x6, 
       0x2, 0x2, 0x120, 0x122, 0x5, 0x28, 0x15, 0x2, 0x121, 0x11f, 0x3, 
       0x2, 0x2, 0x2, 0x122, 0x125, 0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 0x3, 
       0x2, 0x2, 0x2, 0x123, 0x124, 0x3, 0x2, 0x2, 0x2, 0x124, 0x126, 0x3, 
       0x2, 0x2, 0x2, 0x125, 0x123, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x7, 
       0x7, 0x2, 0x2, 0x127, 0x27, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x5, 
       0x14, 0xb, 0x2, 0x129, 0x29, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x5, 
       0x16, 0xc, 0x2, 0x12b, 0x12c, 0x7, 0xb, 0x2, 0x2, 0x12c, 0x12d, 0x5, 
       0x16, 0xc, 0x2, 0x12d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x7, 
       0x1d, 0x2, 0x2, 0x12f, 0x130, 0x7, 0xc, 0x2, 0x2, 0x130, 0x131, 0x5, 
       0x2e, 0x18, 0x2, 0x131, 0x132, 0x7, 0xd, 0x2, 0x2, 0x132, 0x133, 
       0x7, 0x1e, 0x2, 0x2, 0x133, 0x134, 0x5, 0x22, 0x12, 0x2, 0x134, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0x135, 0x13a, 0x5, 0x24, 0x13, 0x2, 0x136, 0x137, 
       0x7, 0x6, 0x2, 0x2, 0x137, 0x139, 0x5, 0x24, 0x13, 0x2, 0x138, 0x136, 
       0x3, 0x2, 0x2, 0x2, 0x139, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x138, 
       0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x2f, 
       0x3, 0x2, 0x2, 0x2, 0x13c, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 
       0x7, 0x1f, 0x2, 0x2, 0x13e, 0x140, 0x5, 0x32, 0x1a, 0x2, 0x13f, 0x141, 
       0x7, 0x4, 0x2, 0x2, 0x140, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 
       0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 
       0x7, 0x22, 0x2, 0x2, 0x143, 0x31, 0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 
       0x5, 0x36, 0x1c, 0x2, 0x145, 0x33, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 
       0x5, 0x36, 0x1c, 0x2, 0x147, 0x35, 0x3, 0x2, 0x2, 0x2, 0x148, 0x14d, 
       0x5, 0x38, 0x1d, 0x2, 0x149, 0x14a, 0x7, 0x4, 0x2, 0x2, 0x14a, 0x14c, 
       0x5, 0x38, 0x1d, 0x2, 0x14b, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14f, 
       0x3, 0x2, 0x2, 0x2, 0x14d, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 
       0x3, 0x2, 0x2, 0x2, 0x14e, 0x37, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x14d, 
       0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x5, 0x22, 0x12, 0x2, 0x151, 0x152, 
       0x5, 0x3a, 0x1e, 0x2, 0x152, 0x39, 0x3, 0x2, 0x2, 0x2, 0x153, 0x158, 
       0x5, 0x3c, 0x1f, 0x2, 0x154, 0x155, 0x7, 0x6, 0x2, 0x2, 0x155, 0x157, 
       0x5, 0x3c, 0x1f, 0x2, 0x156, 0x154, 0x3, 0x2, 0x2, 0x2, 0x157, 0x15a, 
       0x3, 0x2, 0x2, 0x2, 0x158, 0x156, 0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 
       0x3, 0x2, 0x2, 0x2, 0x159, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x158, 
       0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x7, 0x51, 0x2, 0x2, 0x15c, 0x3d, 
       0x3, 0x2, 0x2, 0x2, 0x15d, 0x162, 0x5, 0x40, 0x21, 0x2, 0x15e, 0x15f, 
       0x7, 0x4, 0x2, 0x2, 0x15f, 0x161, 0x5, 0x40, 0x21, 0x2, 0x160, 0x15e, 
       0x3, 0x2, 0x2, 0x2, 0x161, 0x164, 0x3, 0x2, 0x2, 0x2, 0x162, 0x160, 
       0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 0x3, 0x2, 0x2, 0x2, 0x163, 0x3f, 
       0x3, 0x2, 0x2, 0x2, 0x164, 0x162, 0x3, 0x2, 0x2, 0x2, 0x165, 0x168, 
       0x5, 0x42, 0x22, 0x2, 0x166, 0x168, 0x5, 0x44, 0x23, 0x2, 0x167, 
       0x165, 0x3, 0x2, 0x2, 0x2, 0x167, 0x166, 0x3, 0x2, 0x2, 0x2, 0x168, 
       0x169, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0x7, 0x4, 0x2, 0x2, 0x16a, 
       0x16b, 0x5, 0xa, 0x6, 0x2, 0x16b, 0x41, 0x3, 0x2, 0x2, 0x2, 0x16c, 
       0x16d, 0x9, 0x5, 0x2, 0x2, 0x16d, 0x16f, 0x5, 0x46, 0x24, 0x2, 0x16e, 
       0x170, 0x5, 0x48, 0x25, 0x2, 0x16f, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x16f, 
       0x170, 0x3, 0x2, 0x2, 0x2, 0x170, 0x43, 0x3, 0x2, 0x2, 0x2, 0x171, 
       0x172, 0x7, 0x3a, 0x2, 0x2, 0x172, 0x174, 0x5, 0x46, 0x24, 0x2, 0x173, 
       0x175, 0x5, 0x48, 0x25, 0x2, 0x174, 0x173, 0x3, 0x2, 0x2, 0x2, 0x174, 
       0x175, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x3, 0x2, 0x2, 0x2, 0x176, 
       0x177, 0x7, 0xe, 0x2, 0x2, 0x177, 0x178, 0x5, 0x20, 0x11, 0x2, 0x178, 
       0x45, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x7, 0x51, 0x2, 0x2, 0x17a, 
       0x47, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x7, 0x5, 0x2, 0x2, 0x17c, 
       0x17d, 0x5, 0x4a, 0x26, 0x2, 0x17d, 0x17e, 0x7, 0x7, 0x2, 0x2, 0x17e, 
       0x49, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x184, 0x5, 0x4c, 0x27, 0x2, 0x180, 
       0x181, 0x7, 0x4, 0x2, 0x2, 0x181, 0x183, 0x5, 0x4c, 0x27, 0x2, 0x182, 
       0x180, 0x3, 0x2, 0x2, 0x2, 0x183, 0x186, 0x3, 0x2, 0x2, 0x2, 0x184, 
       0x182, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x3, 0x2, 0x2, 0x2, 0x185, 
       0x4b, 0x3, 0x2, 0x2, 0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x187, 
       0x189, 0x7, 0x20, 0x2, 0x2, 0x188, 0x187, 0x3, 0x2, 0x2, 0x2, 0x188, 
       0x189, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18a, 
       0x18b, 0x5, 0x4e, 0x28, 0x2, 0x18b, 0x18c, 0x7, 0xe, 0x2, 0x2, 0x18c, 
       0x18d, 0x5, 0x20, 0x11, 0x2, 0x18d, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x18e, 
       0x193, 0x5, 0x50, 0x29, 0x2, 0x18f, 0x190, 0x7, 0x6, 0x2, 0x2, 0x190, 
       0x192, 0x5, 0x50, 0x29, 0x2, 0x191, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x192, 
       0x195, 0x3, 0x2, 0x2, 0x2, 0x193, 0x191, 0x3, 0x2, 0x2, 0x2, 0x193, 
       0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x195, 
       0x193, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x7, 0x51, 0x2, 0x2, 0x197, 
       0x51, 0x3, 0x2, 0x2, 0x2, 0x198, 0x1a8, 0x5, 0x54, 0x2b, 0x2, 0x199, 
       0x1a8, 0x5, 0x5a, 0x2e, 0x2, 0x19a, 0x1a8, 0x5, 0x60, 0x31, 0x2, 
       0x19b, 0x1a8, 0x5, 0x66, 0x34, 0x2, 0x19c, 0x1a8, 0x5, 0x7a, 0x3e, 
       0x2, 0x19d, 0x1a8, 0x5, 0x7c, 0x3f, 0x2, 0x19e, 0x1a8, 0x5, 0x86, 
       0x44, 0x2, 0x19f, 0x1a8, 0x5, 0x88, 0x45, 0x2, 0x1a0, 0x1a8, 0x5, 
       0x72, 0x3a, 0x2, 0x1a1, 0x1a8, 0x5, 0x56, 0x2c, 0x2, 0x1a2, 0x1a8, 
       0x5, 0x68, 0x35, 0x2, 0x1a3, 0x1a8, 0x5, 0x6a, 0x36, 0x2, 0x1a4, 
       0x1a8, 0x5, 0x6c, 0x37, 0x2, 0x1a5, 0x1a8, 0x5, 0x6e, 0x38, 0x2, 
       0x1a6, 0x1a8, 0x5, 0x70, 0x39, 0x2, 0x1a7, 0x198, 0x3, 0x2, 0x2, 
       0x2, 0x1a7, 0x199, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x19a, 0x3, 0x2, 0x2, 
       0x2, 0x1a7, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x19c, 0x3, 0x2, 0x2, 
       0x2, 0x1a7, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x19e, 0x3, 0x2, 0x2, 
       0x2, 0x1a7, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a0, 0x3, 0x2, 0x2, 
       0x2, 0x1a7, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a2, 0x3, 0x2, 0x2, 
       0x2, 0x1a7, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a4, 0x3, 0x2, 0x2, 
       0x2, 0x1a7, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a6, 0x3, 0x2, 0x2, 
       0x2, 0x1a8, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x7, 0xc, 0x2, 
       0x2, 0x1aa, 0x1ab, 0x5, 0x58, 0x2d, 0x2, 0x1ab, 0x1ac, 0x7, 0xd, 
       0x2, 0x2, 0x1ac, 0x55, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 0x3, 0x2, 
       0x2, 0x2, 0x1ae, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b4, 0x5, 0x52, 
       0x2a, 0x2, 0x1b0, 0x1b1, 0x7, 0x4, 0x2, 0x2, 0x1b1, 0x1b3, 0x5, 0x52, 
       0x2a, 0x2, 0x1b2, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b6, 0x3, 0x2, 
       0x2, 0x2, 0x1b4, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x3, 0x2, 
       0x2, 0x2, 0x1b5, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b4, 0x3, 0x2, 
       0x2, 0x2, 0x1b7, 0x1b8, 0x5, 0x5c, 0x2f, 0x2, 0x1b8, 0x1b9, 0x7, 
       0x8, 0x2, 0x2, 0x1b9, 0x1ba, 0x5, 0x5e, 0x30, 0x2, 0x1ba, 0x5b, 0x3, 
       0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x5, 0x94, 0x4b, 0x2, 0x1bc, 0x5d, 0x3, 
       0x2, 0x2, 0x2, 0x1bd, 0x1be, 0x5, 0x8c, 0x47, 0x2, 0x1be, 0x5f, 0x3, 
       0x2, 0x2, 0x2, 0x1bf, 0x1c0, 0x7, 0x28, 0x2, 0x2, 0x1c0, 0x1c1, 0x5, 
       0x8c, 0x47, 0x2, 0x1c1, 0x1c2, 0x7, 0x5, 0x2, 0x2, 0x1c2, 0x1c5, 
       0x5, 0x62, 0x32, 0x2, 0x1c3, 0x1c4, 0x7, 0x2a, 0x2, 0x2, 0x1c4, 0x1c6, 
       0x5, 0x64, 0x33, 0x2, 0x1c5, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 
       0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 
       0x7, 0x7, 0x2, 0x2, 0x1c8, 0x61, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 
       0x5, 0x52, 0x2a, 0x2, 0x1ca, 0x63, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 
       0x5, 0x52, 0x2a, 0x2, 0x1cc, 0x65, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 
       0x7, 0x30, 0x2, 0x2, 0x1ce, 0x1cf, 0x5, 0x94, 0x4b, 0x2, 0x1cf, 0x1d0, 
       0x7, 0x8, 0x2, 0x2, 0x1d0, 0x1d1, 0x5, 0x8c, 0x47, 0x2, 0x1d1, 0x1d2, 
       0x7, 0x5, 0x2, 0x2, 0x1d2, 0x1d3, 0x5, 0x8c, 0x47, 0x2, 0x1d3, 0x1d4, 
       0x7, 0x7, 0x2, 0x2, 0x1d4, 0x1d5, 0x5, 0x52, 0x2a, 0x2, 0x1d5, 0x67, 
       0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 0x7, 0x3b, 0x2, 0x2, 0x1d7, 0x1d8, 
       0x5, 0x94, 0x4b, 0x2, 0x1d8, 0x1d9, 0x7, 0x40, 0x2, 0x2, 0x1d9, 0x1da, 
       0x5, 0x8c, 0x47, 0x2, 0x1da, 0x1db, 0x7, 0x3f, 0x2, 0x2, 0x1db, 0x1dc, 
       0x5, 0x8c, 0x47, 0x2, 0x1dc, 0x1dd, 0x9, 0x6, 0x2, 0x2, 0x1dd, 0x69, 
       0x3, 0x2, 0x2, 0x2, 0x1de, 0x1df, 0x7, 0x42, 0x2, 0x2, 0x1df, 0x1e0, 
       0x5, 0x94, 0x4b, 0x2, 0x1e0, 0x1e1, 0x7, 0x44, 0x2, 0x2, 0x1e1, 0x6b, 
       0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e3, 0x7, 0x46, 0x2, 0x2, 0x1e3, 0x1e4, 
       0x5, 0x94, 0x4b, 0x2, 0x1e4, 0x1e5, 0x7, 0x47, 0x2, 0x2, 0x1e5, 0x1e6, 
       0x5, 0x92, 0x4a, 0x2, 0x1e6, 0x1e7, 0x7, 0x48, 0x2, 0x2, 0x1e7, 0x1e8, 
       0x5, 0x8c, 0x47, 0x2, 0x1e8, 0x1e9, 0x7, 0x49, 0x2, 0x2, 0x1e9, 0x1ea, 
       0x5, 0x8c, 0x47, 0x2, 0x1ea, 0x1eb, 0x7, 0x4a, 0x2, 0x2, 0x1eb, 0x1ec, 
       0x5, 0x8c, 0x47, 0x2, 0x1ec, 0x1ed, 0x9, 0x7, 0x2, 0x2, 0x1ed, 0x6d, 
       0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ef, 0x7, 0x4d, 0x2, 0x2, 0x1ef, 0x1f0, 
       0x5, 0x94, 0x4b, 0x2, 0x1f0, 0x1f1, 0x7, 0x4e, 0x2, 0x2, 0x1f1, 0x1f2, 
       0x5, 0x8c, 0x47, 0x2, 0x1f2, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 
       0x7, 0x4f, 0x2, 0x2, 0x1f4, 0x1f5, 0x5, 0x94, 0x4b, 0x2, 0x1f5, 0x1f6, 
       0x7, 0x50, 0x2, 0x2, 0x1f6, 0x71, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 
       0x5, 0x74, 0x3b, 0x2, 0x1f8, 0x1fa, 0x7, 0x5, 0x2, 0x2, 0x1f9, 0x1fb, 
       0x5, 0x76, 0x3c, 0x2, 0x1fa, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 
       0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 
       0x7, 0x7, 0x2, 0x2, 0x1fd, 0x73, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1ff, 
       0x7, 0x51, 0x2, 0x2, 0x1ff, 0x75, 0x3, 0x2, 0x2, 0x2, 0x200, 0x205, 
       0x5, 0x78, 0x3d, 0x2, 0x201, 0x202, 0x7, 0x6, 0x2, 0x2, 0x202, 0x204, 
       0x5, 0x78, 0x3d, 0x2, 0x203, 0x201, 0x3, 0x2, 0x2, 0x2, 0x204, 0x207, 
       0x3, 0x2, 0x2, 0x2, 0x205, 0x203, 0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 
       0x3, 0x2, 0x2, 0x2, 0x206, 0x77, 0x3, 0x2, 0x2, 0x2, 0x207, 0x205, 
       0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x5, 0x8c, 0x47, 0x2, 0x209, 0x79, 
       0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x7, 0x33, 0x2, 0x2, 0x20b, 0x20c, 
       0x5, 0x7e, 0x40, 0x2, 0x20c, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20f, 
       0x7, 0x34, 0x2, 0x2, 0x20e, 0x210, 0x5, 0x7e, 0x40, 0x2, 0x20f, 0x20e, 
       0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x3, 0x2, 0x2, 0x2, 0x210, 0x7d, 
       0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 0x7, 0x5, 0x2, 0x2, 0x212, 0x217, 
       0x5, 0x80, 0x41, 0x2, 0x213, 0x214, 0x7, 0x6, 0x2, 0x2, 0x214, 0x216, 
       0x5, 0x80, 0x41, 0x2, 0x215, 0x213, 0x3, 0x2, 0x2, 0x2, 0x216, 0x219, 
       0x3, 0x2, 0x2, 0x2, 0x217, 0x215, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 
       0x3, 0x2, 0x2, 0x2, 0x218, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x219, 0x217, 
       0x3, 0x2, 0x2, 0x2, 0x21a, 0x21b, 0x7, 0x7, 0x2, 0x2, 0x21b, 0x7f, 
       0x3, 0x2, 0x2, 0x2, 0x21c, 0x21f, 0x5, 0x8c, 0x47, 0x2, 0x21d, 0x21e, 
       0x7, 0xe, 0x2, 0x2, 0x21e, 0x220, 0x5, 0x82, 0x42, 0x2, 0x21f, 0x21d, 
       0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x3, 0x2, 0x2, 0x2, 0x220, 0x81, 
       0x3, 0x2, 0x2, 0x2, 0x221, 0x223, 0x5, 0x18, 0xd, 0x2, 0x222, 0x221, 
       0x3, 0x2, 0x2, 0x2, 0x222, 0x223, 0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 
       0x3, 0x2, 0x2, 0x2, 0x224, 0x227, 0x5, 0xa6, 0x54, 0x2, 0x225, 0x226, 
       0x7, 0xe, 0x2, 0x2, 0x226, 0x228, 0x5, 0x84, 0x43, 0x2, 0x227, 0x225, 
       0x3, 0x2, 0x2, 0x2, 0x227, 0x228, 0x3, 0x2, 0x2, 0x2, 0x228, 0x83, 
       0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 0x5, 0xa6, 0x54, 0x2, 0x22a, 0x85, 
       0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x7, 0x35, 0x2, 0x2, 0x22c, 0x22d, 
       0x5, 0x8a, 0x46, 0x2, 0x22d, 0x87, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 
       0x7, 0x36, 0x2, 0x2, 0x22f, 0x230, 0x5, 0x8a, 0x46, 0x2, 0x230, 0x89, 
       0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 0x7, 0x5, 0x2, 0x2, 0x232, 0x237, 
       0x5, 0x94, 0x4b, 0x2, 0x233, 0x234, 0x7, 0x6, 0x2, 0x2, 0x234, 0x236, 
       0x5, 0x94, 0x4b, 0x2, 0x235, 0x233, 0x3, 0x2, 0x2, 0x2, 0x236, 0x239, 
       0x3, 0x2, 0x2, 0x2, 0x237, 0x235, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 
       0x3, 0x2, 0x2, 0x2, 0x238, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x239, 0x237, 
       0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 0x7, 0x7, 0x2, 0x2, 0x23b, 0x8b, 
       0x3, 0x2, 0x2, 0x2, 0x23c, 0x240, 0x5, 0x8e, 0x48, 0x2, 0x23d, 0x23e, 
       0x5, 0xae, 0x58, 0x2, 0x23e, 0x23f, 0x5, 0x8e, 0x48, 0x2, 0x23f, 
       0x241, 0x3, 0x2, 0x2, 0x2, 0x240, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x240, 
       0x241, 0x3, 0x2, 0x2, 0x2, 0x241, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x242, 
       0x244, 0x5, 0x18, 0xd, 0x2, 0x243, 0x242, 0x3, 0x2, 0x2, 0x2, 0x243, 
       0x244, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x3, 0x2, 0x2, 0x2, 0x245, 
       0x24b, 0x5, 0x90, 0x49, 0x2, 0x246, 0x247, 0x5, 0xb0, 0x59, 0x2, 
       0x247, 0x248, 0x5, 0x90, 0x49, 0x2, 0x248, 0x24a, 0x3, 0x2, 0x2, 
       0x2, 0x249, 0x246, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24d, 0x3, 0x2, 0x2, 
       0x2, 0x24b, 0x249, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24c, 0x3, 0x2, 0x2, 
       0x2, 0x24c, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24b, 0x3, 0x2, 0x2, 
       0x2, 0x24e, 0x254, 0x5, 0x92, 0x4a, 0x2, 0x24f, 0x250, 0x5, 0xb2, 
       0x5a, 0x2, 0x250, 0x251, 0x5, 0x92, 0x4a, 0x2, 0x251, 0x253, 0x3, 
       0x2, 0x2, 0x2, 0x252, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x253, 0x256, 0x3, 
       0x2, 0x2, 0x2, 0x254, 0x252, 0x3, 0x2, 0x2, 0x2, 0x254, 0x255, 0x3, 
       0x2, 0x2, 0x2, 0x255, 0x91, 0x3, 0x2, 0x2, 0x2, 0x256, 0x254, 0x3, 
       0x2, 0x2, 0x2, 0x257, 0x263, 0x5, 0x94, 0x4b, 0x2, 0x258, 0x263, 
       0x5, 0xa2, 0x52, 0x2, 0x259, 0x263, 0x5, 0xaa, 0x56, 0x2, 0x25a, 
       0x263, 0x5, 0xac, 0x57, 0x2, 0x25b, 0x263, 0x5, 0x9e, 0x50, 0x2, 
       0x25c, 0x25d, 0x7, 0x27, 0x2, 0x2, 0x25d, 0x263, 0x5, 0x92, 0x4a, 
       0x2, 0x25e, 0x25f, 0x7, 0x5, 0x2, 0x2, 0x25f, 0x260, 0x5, 0x8c, 0x47, 
       0x2, 0x260, 0x261, 0x7, 0x7, 0x2, 0x2, 0x261, 0x263, 0x3, 0x2, 0x2, 
       0x2, 0x262, 0x257, 0x3, 0x2, 0x2, 0x2, 0x262, 0x258, 0x3, 0x2, 0x2, 
       0x2, 0x262, 0x259, 0x3, 0x2, 0x2, 0x2, 0x262, 0x25a, 0x3, 0x2, 0x2, 
       0x2, 0x262, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x262, 0x25c, 0x3, 0x2, 0x2, 
       0x2, 0x262, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x263, 0x93, 0x3, 0x2, 0x2, 
       0x2, 0x264, 0x268, 0x5, 0x3c, 0x1f, 0x2, 0x265, 0x267, 0x5, 0x96, 
       0x4c, 0x2, 0x266, 0x265, 0x3, 0x2, 0x2, 0x2, 0x267, 0x26a, 0x3, 0x2, 
       0x2, 0x2, 0x268, 0x266, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 0x3, 0x2, 
       0x2, 0x2, 0x269, 0x95, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x268, 0x3, 0x2, 
       0x2, 0x2, 0x26b, 0x26c, 0x7, 0xc, 0x2, 0x2, 0x26c, 0x26d, 0x5, 0x98, 
       0x4d, 0x2, 0x26d, 0x26e, 0x7, 0xd, 0x2, 0x2, 0x26e, 0x272, 0x3, 0x2, 
       0x2, 0x2, 0x26f, 0x270, 0x7, 0x3, 0x2, 0x2, 0x270, 0x272, 0x5, 0x9c, 
       0x4f, 0x2, 0x271, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x271, 0x26f, 0x3, 0x2, 
       0x2, 0x2, 0x272, 0x97, 0x3, 0x2, 0x2, 0x2, 0x273, 0x278, 0x5, 0x9a, 
       0x4e, 0x2, 0x274, 0x275, 0x7, 0x6, 0x2, 0x2, 0x275, 0x277, 0x5, 0x9a, 
       0x4e, 0x2, 0x276, 0x274, 0x3, 0x2, 0x2, 0x2, 0x277, 0x27a, 0x3, 0x2, 
       0x2, 0x2, 0x278, 0x276, 0x3, 0x2, 0x2, 0x2, 0x278, 0x279, 0x3, 0x2, 
       0x2, 0x2, 0x279, 0x99, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x278, 0x3, 0x2, 
       0x2, 0x2, 0x27b, 0x27c, 0x5, 0x8c, 0x47, 0x2, 0x27c, 0x9b, 0x3, 0x2, 
       0x2, 0x2, 0x27d, 0x27e, 0x7, 0x51, 0x2, 0x2, 0x27e, 0x9d, 0x3, 0x2, 
       0x2, 0x2, 0x27f, 0x280, 0x5, 0xa0, 0x51, 0x2, 0x280, 0x282, 0x7, 
       0x5, 0x2, 0x2, 0x281, 0x283, 0x5, 0x76, 0x3c, 0x2, 0x282, 0x281, 
       0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x3, 0x2, 0x2, 0x2, 0x283, 0x284, 
       0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 0x7, 0x7, 0x2, 0x2, 0x285, 0x9f, 
       0x3, 0x2, 0x2, 0x2, 0x286, 0x287, 0x7, 0x51, 0x2, 0x2, 0x287, 0xa1, 
       0x3, 0x2, 0x2, 0x2, 0x288, 0x28a, 0x5, 0x18, 0xd, 0x2, 0x289, 0x288, 
       0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28b, 
       0x3, 0x2, 0x2, 0x2, 0x28b, 0x28c, 0x5, 0xa4, 0x53, 0x2, 0x28c, 0xa3, 
       0x3, 0x2, 0x2, 0x2, 0x28d, 0x290, 0x5, 0xa6, 0x54, 0x2, 0x28e, 0x290, 
       0x5, 0xa8, 0x55, 0x2, 0x28f, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x28e, 
       0x3, 0x2, 0x2, 0x2, 0x290, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 
       0x7, 0x52, 0x2, 0x2, 0x292, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 
       0x7, 0x53, 0x2, 0x2, 0x294, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x295, 0x296, 
       0x7, 0x57, 0x2, 0x2, 0x296, 0xab, 0x3, 0x2, 0x2, 0x2, 0x297, 0x298, 
       0x7, 0x58, 0x2, 0x2, 0x298, 0xad, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29a, 
       0x9, 0x8, 0x2, 0x2, 0x29a, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 
       0x9, 0x9, 0x2, 0x2, 0x29c, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29e, 
       0x9, 0xa, 0x2, 0x2, 0x29e, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x31, 0xbc, 
       0xc6, 0xd3, 0xd8, 0xdd, 0xe2, 0xec, 0xf6, 0xfa, 0xfe, 0x10a, 0x116, 
       0x11b, 0x123, 0x13a, 0x140, 0x14d, 0x158, 0x162, 0x167, 0x16f, 0x174, 
       0x184, 0x188, 0x193, 0x1a7, 0x1b4, 0x1c5, 0x1fa, 0x205, 0x20f, 0x217, 
       0x21f, 0x222, 0x227, 0x237, 0x240, 0x243, 0x24b, 0x254, 0x262, 0x268, 
       0x271, 0x278, 0x282, 0x289, 0x28f, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

PascalParser::Initializer PascalParser::_init;
