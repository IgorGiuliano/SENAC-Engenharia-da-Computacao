package antlr;// Generated from mini_pascal.g4 by ANTLR 4.13.0
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class mini_pascalParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.0", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, RSV_INT=5, RSV_BOOLEAN=6, RSV_PROGRAM=7, 
		RSV_VAR=8, RSV_BEGIN=9, RSV_END=10, RSV_PROCEDURE=11, RSV_IF=12, RSV_THEN=13, 
		RSV_ELSE=14, RSV_WHILE=15, RSV_DO=16, RSV_NOT=17, RSV_OR=18, RSV_DIV=19, 
		RSV_AND=20, RSV_READ=21, RSV_WRITE=22, OPERADORES_DE_RELACAO=23, OPERADORES_MAIS_MENOS=24, 
		OPERADORES_VEZES_DIV=25, VAZIO=26, IGUAL=27, PONTO=28, VIRGULA=29, DOIS_PONTOS=30, 
		PONTO_E_VIRGULA=31, COMENTARIO=32, STRING=33, DOIS_PONTOS_IGUAL=34, PARENTESES_DIREITO=35, 
		PARENTESES_ESQUERDO=36, NUMERO=37, DIGITO=38, IDENTIFICADOR=39, LETRA=40;
	public static final int
		RULE_programa = 0, RULE_bloco = 1, RULE_parteDeDeclaracaoDeVariavel = 2, 
		RULE_tipo = 3, RULE_constante = 4, RULE_declaracaoDeVariaveis = 5, RULE_listaDeIdentificadores = 6, 
		RULE_parteDeDeclaracoesDeSubRotinas = 7, RULE_declaracaoDeProcedimento = 8, 
		RULE_parametrosFormais = 9, RULE_secaoDeParametrosFormais = 10, RULE_comandoComposto = 11, 
		RULE_comando = 12, RULE_atribuicao = 13, RULE_chamadaDeProcedimento = 14, 
		RULE_comandoCondicional = 15, RULE_comandoRepetitivo = 16, RULE_expressao = 17, 
		RULE_relacao = 18, RULE_expressaoSimples = 19, RULE_termo = 20, RULE_fator = 21, 
		RULE_variavel = 22, RULE_listaDeExpressoes = 23;
	private static String[] makeRuleNames() {
		return new String[] {
			"programa", "bloco", "parteDeDeclaracaoDeVariavel", "tipo", "constante", 
			"declaracaoDeVariaveis", "listaDeIdentificadores", "parteDeDeclaracoesDeSubRotinas", 
			"declaracaoDeProcedimento", "parametrosFormais", "secaoDeParametrosFormais", 
			"comandoComposto", "comando", "atribuicao", "chamadaDeProcedimento", 
			"comandoCondicional", "comandoRepetitivo", "expressao", "relacao", "expressaoSimples", 
			"termo", "fator", "variavel", "listaDeExpressoes"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'true'", "'false'", "'READ'", "'WRITE'", null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, "'='", "'.'", "','", "':'", "';'", 
			null, null, "':='", "')'", "'('"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, "RSV_INT", "RSV_BOOLEAN", "RSV_PROGRAM", 
			"RSV_VAR", "RSV_BEGIN", "RSV_END", "RSV_PROCEDURE", "RSV_IF", "RSV_THEN", 
			"RSV_ELSE", "RSV_WHILE", "RSV_DO", "RSV_NOT", "RSV_OR", "RSV_DIV", "RSV_AND", 
			"RSV_READ", "RSV_WRITE", "OPERADORES_DE_RELACAO", "OPERADORES_MAIS_MENOS", 
			"OPERADORES_VEZES_DIV", "VAZIO", "IGUAL", "PONTO", "VIRGULA", "DOIS_PONTOS", 
			"PONTO_E_VIRGULA", "COMENTARIO", "STRING", "DOIS_PONTOS_IGUAL", "PARENTESES_DIREITO", 
			"PARENTESES_ESQUERDO", "NUMERO", "DIGITO", "IDENTIFICADOR", "LETRA"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "mini_pascal.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public mini_pascalParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramaContext extends ParserRuleContext {
		public TerminalNode RSV_PROGRAM() { return getToken(mini_pascalParser.RSV_PROGRAM, 0); }
		public TerminalNode IDENTIFICADOR() { return getToken(mini_pascalParser.IDENTIFICADOR, 0); }
		public TerminalNode PONTO_E_VIRGULA() { return getToken(mini_pascalParser.PONTO_E_VIRGULA, 0); }
		public BlocoContext bloco() {
			return getRuleContext(BlocoContext.class,0);
		}
		public TerminalNode PONTO() { return getToken(mini_pascalParser.PONTO, 0); }
		public TerminalNode EOF() { return getToken(mini_pascalParser.EOF, 0); }
		public ProgramaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_programa; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterPrograma(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitPrograma(this);
		}
	}

	public final ProgramaContext programa() throws RecognitionException {
		ProgramaContext _localctx = new ProgramaContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_programa);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(48);
			match(RSV_PROGRAM);
			setState(49);
			match(IDENTIFICADOR);
			setState(50);
			match(PONTO_E_VIRGULA);
			setState(51);
			bloco();
			setState(52);
			match(PONTO);
			setState(53);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BlocoContext extends ParserRuleContext {
		public ComandoCompostoContext comandoComposto() {
			return getRuleContext(ComandoCompostoContext.class,0);
		}
		public ParteDeDeclaracaoDeVariavelContext parteDeDeclaracaoDeVariavel() {
			return getRuleContext(ParteDeDeclaracaoDeVariavelContext.class,0);
		}
		public ParteDeDeclaracoesDeSubRotinasContext parteDeDeclaracoesDeSubRotinas() {
			return getRuleContext(ParteDeDeclaracoesDeSubRotinasContext.class,0);
		}
		public BlocoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bloco; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterBloco(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitBloco(this);
		}
	}

	public final BlocoContext bloco() throws RecognitionException {
		BlocoContext _localctx = new BlocoContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_bloco);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(56);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RSV_INT || _la==RSV_BOOLEAN) {
				{
				setState(55);
				parteDeDeclaracaoDeVariavel();
				}
			}

			setState(59);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RSV_PROCEDURE) {
				{
				setState(58);
				parteDeDeclaracoesDeSubRotinas();
				}
			}

			setState(61);
			comandoComposto();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParteDeDeclaracaoDeVariavelContext extends ParserRuleContext {
		public List<DeclaracaoDeVariaveisContext> declaracaoDeVariaveis() {
			return getRuleContexts(DeclaracaoDeVariaveisContext.class);
		}
		public DeclaracaoDeVariaveisContext declaracaoDeVariaveis(int i) {
			return getRuleContext(DeclaracaoDeVariaveisContext.class,i);
		}
		public List<TerminalNode> PONTO_E_VIRGULA() { return getTokens(mini_pascalParser.PONTO_E_VIRGULA); }
		public TerminalNode PONTO_E_VIRGULA(int i) {
			return getToken(mini_pascalParser.PONTO_E_VIRGULA, i);
		}
		public ParteDeDeclaracaoDeVariavelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parteDeDeclaracaoDeVariavel; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterParteDeDeclaracaoDeVariavel(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitParteDeDeclaracaoDeVariavel(this);
		}
	}

	public final ParteDeDeclaracaoDeVariavelContext parteDeDeclaracaoDeVariavel() throws RecognitionException {
		ParteDeDeclaracaoDeVariavelContext _localctx = new ParteDeDeclaracaoDeVariavelContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_parteDeDeclaracaoDeVariavel);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(66); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(63);
				declaracaoDeVariaveis();
				setState(64);
				match(PONTO_E_VIRGULA);
				}
				}
				setState(68); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==RSV_INT || _la==RSV_BOOLEAN );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TipoContext extends ParserRuleContext {
		public TerminalNode RSV_BOOLEAN() { return getToken(mini_pascalParser.RSV_BOOLEAN, 0); }
		public TerminalNode RSV_INT() { return getToken(mini_pascalParser.RSV_INT, 0); }
		public TipoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tipo; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterTipo(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitTipo(this);
		}
	}

	public final TipoContext tipo() throws RecognitionException {
		TipoContext _localctx = new TipoContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_tipo);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(70);
			_la = _input.LA(1);
			if ( !(_la==RSV_INT || _la==RSV_BOOLEAN) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConstanteContext extends ParserRuleContext {
		public ConstanteContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constante; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterConstante(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitConstante(this);
		}
	}

	public final ConstanteContext constante() throws RecognitionException {
		ConstanteContext _localctx = new ConstanteContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_constante);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(72);
			_la = _input.LA(1);
			if ( !(_la==T__0 || _la==T__1) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DeclaracaoDeVariaveisContext extends ParserRuleContext {
		public TipoContext tipo() {
			return getRuleContext(TipoContext.class,0);
		}
		public ListaDeIdentificadoresContext listaDeIdentificadores() {
			return getRuleContext(ListaDeIdentificadoresContext.class,0);
		}
		public DeclaracaoDeVariaveisContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaracaoDeVariaveis; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterDeclaracaoDeVariaveis(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitDeclaracaoDeVariaveis(this);
		}
	}

	public final DeclaracaoDeVariaveisContext declaracaoDeVariaveis() throws RecognitionException {
		DeclaracaoDeVariaveisContext _localctx = new DeclaracaoDeVariaveisContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_declaracaoDeVariaveis);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(74);
			tipo();
			setState(75);
			listaDeIdentificadores();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ListaDeIdentificadoresContext extends ParserRuleContext {
		public List<TerminalNode> IDENTIFICADOR() { return getTokens(mini_pascalParser.IDENTIFICADOR); }
		public TerminalNode IDENTIFICADOR(int i) {
			return getToken(mini_pascalParser.IDENTIFICADOR, i);
		}
		public List<TerminalNode> VIRGULA() { return getTokens(mini_pascalParser.VIRGULA); }
		public TerminalNode VIRGULA(int i) {
			return getToken(mini_pascalParser.VIRGULA, i);
		}
		public ListaDeIdentificadoresContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_listaDeIdentificadores; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterListaDeIdentificadores(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitListaDeIdentificadores(this);
		}
	}

	public final ListaDeIdentificadoresContext listaDeIdentificadores() throws RecognitionException {
		ListaDeIdentificadoresContext _localctx = new ListaDeIdentificadoresContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_listaDeIdentificadores);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(77);
			match(IDENTIFICADOR);
			setState(82);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==VIRGULA) {
				{
				{
				setState(78);
				match(VIRGULA);
				setState(79);
				match(IDENTIFICADOR);
				}
				}
				setState(84);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParteDeDeclaracoesDeSubRotinasContext extends ParserRuleContext {
		public DeclaracaoDeProcedimentoContext declaracaoDeProcedimento() {
			return getRuleContext(DeclaracaoDeProcedimentoContext.class,0);
		}
		public TerminalNode PONTO_E_VIRGULA() { return getToken(mini_pascalParser.PONTO_E_VIRGULA, 0); }
		public ParteDeDeclaracoesDeSubRotinasContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parteDeDeclaracoesDeSubRotinas; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterParteDeDeclaracoesDeSubRotinas(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitParteDeDeclaracoesDeSubRotinas(this);
		}
	}

	public final ParteDeDeclaracoesDeSubRotinasContext parteDeDeclaracoesDeSubRotinas() throws RecognitionException {
		ParteDeDeclaracoesDeSubRotinasContext _localctx = new ParteDeDeclaracoesDeSubRotinasContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_parteDeDeclaracoesDeSubRotinas);
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(85);
			declaracaoDeProcedimento();
			setState(86);
			match(PONTO_E_VIRGULA);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DeclaracaoDeProcedimentoContext extends ParserRuleContext {
		public TerminalNode RSV_PROCEDURE() { return getToken(mini_pascalParser.RSV_PROCEDURE, 0); }
		public TerminalNode IDENTIFICADOR() { return getToken(mini_pascalParser.IDENTIFICADOR, 0); }
		public TerminalNode PONTO_E_VIRGULA() { return getToken(mini_pascalParser.PONTO_E_VIRGULA, 0); }
		public BlocoContext bloco() {
			return getRuleContext(BlocoContext.class,0);
		}
		public ParametrosFormaisContext parametrosFormais() {
			return getRuleContext(ParametrosFormaisContext.class,0);
		}
		public DeclaracaoDeProcedimentoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaracaoDeProcedimento; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterDeclaracaoDeProcedimento(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitDeclaracaoDeProcedimento(this);
		}
	}

	public final DeclaracaoDeProcedimentoContext declaracaoDeProcedimento() throws RecognitionException {
		DeclaracaoDeProcedimentoContext _localctx = new DeclaracaoDeProcedimentoContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_declaracaoDeProcedimento);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(88);
			match(RSV_PROCEDURE);
			setState(89);
			match(IDENTIFICADOR);
			setState(91);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RSV_VAR || _la==IDENTIFICADOR) {
				{
				setState(90);
				parametrosFormais();
				}
			}

			setState(93);
			match(PONTO_E_VIRGULA);
			setState(94);
			bloco();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParametrosFormaisContext extends ParserRuleContext {
		public List<SecaoDeParametrosFormaisContext> secaoDeParametrosFormais() {
			return getRuleContexts(SecaoDeParametrosFormaisContext.class);
		}
		public SecaoDeParametrosFormaisContext secaoDeParametrosFormais(int i) {
			return getRuleContext(SecaoDeParametrosFormaisContext.class,i);
		}
		public List<TerminalNode> VIRGULA() { return getTokens(mini_pascalParser.VIRGULA); }
		public TerminalNode VIRGULA(int i) {
			return getToken(mini_pascalParser.VIRGULA, i);
		}
		public ParametrosFormaisContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parametrosFormais; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterParametrosFormais(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitParametrosFormais(this);
		}
	}

	public final ParametrosFormaisContext parametrosFormais() throws RecognitionException {
		ParametrosFormaisContext _localctx = new ParametrosFormaisContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_parametrosFormais);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(96);
			secaoDeParametrosFormais();
			setState(101);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==VIRGULA) {
				{
				{
				setState(97);
				match(VIRGULA);
				setState(98);
				secaoDeParametrosFormais();
				}
				}
				setState(103);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SecaoDeParametrosFormaisContext extends ParserRuleContext {
		public ListaDeIdentificadoresContext listaDeIdentificadores() {
			return getRuleContext(ListaDeIdentificadoresContext.class,0);
		}
		public TerminalNode DOIS_PONTOS() { return getToken(mini_pascalParser.DOIS_PONTOS, 0); }
		public TerminalNode IDENTIFICADOR() { return getToken(mini_pascalParser.IDENTIFICADOR, 0); }
		public TerminalNode RSV_VAR() { return getToken(mini_pascalParser.RSV_VAR, 0); }
		public SecaoDeParametrosFormaisContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_secaoDeParametrosFormais; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterSecaoDeParametrosFormais(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitSecaoDeParametrosFormais(this);
		}
	}

	public final SecaoDeParametrosFormaisContext secaoDeParametrosFormais() throws RecognitionException {
		SecaoDeParametrosFormaisContext _localctx = new SecaoDeParametrosFormaisContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_secaoDeParametrosFormais);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(105);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RSV_VAR) {
				{
				setState(104);
				match(RSV_VAR);
				}
			}

			setState(107);
			listaDeIdentificadores();
			setState(108);
			match(DOIS_PONTOS);
			setState(109);
			match(IDENTIFICADOR);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComandoCompostoContext extends ParserRuleContext {
		public TerminalNode RSV_BEGIN() { return getToken(mini_pascalParser.RSV_BEGIN, 0); }
		public TerminalNode RSV_END() { return getToken(mini_pascalParser.RSV_END, 0); }
		public List<ComandoContext> comando() {
			return getRuleContexts(ComandoContext.class);
		}
		public ComandoContext comando(int i) {
			return getRuleContext(ComandoContext.class,i);
		}
		public List<TerminalNode> PONTO_E_VIRGULA() { return getTokens(mini_pascalParser.PONTO_E_VIRGULA); }
		public TerminalNode PONTO_E_VIRGULA(int i) {
			return getToken(mini_pascalParser.PONTO_E_VIRGULA, i);
		}
		public ComandoCompostoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comandoComposto; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterComandoComposto(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitComandoComposto(this);
		}
	}

	public final ComandoCompostoContext comandoComposto() throws RecognitionException {
		ComandoCompostoContext _localctx = new ComandoCompostoContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_comandoComposto);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(111);
			match(RSV_BEGIN);
			setState(117);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 549755851288L) != 0)) {
				{
				{
				setState(112);
				comando();
				setState(113);
				match(PONTO_E_VIRGULA);
				}
				}
				setState(119);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(120);
			match(RSV_END);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComandoContext extends ParserRuleContext {
		public AtribuicaoContext atribuicao() {
			return getRuleContext(AtribuicaoContext.class,0);
		}
		public ChamadaDeProcedimentoContext chamadaDeProcedimento() {
			return getRuleContext(ChamadaDeProcedimentoContext.class,0);
		}
		public ComandoCompostoContext comandoComposto() {
			return getRuleContext(ComandoCompostoContext.class,0);
		}
		public ComandoCondicionalContext comandoCondicional() {
			return getRuleContext(ComandoCondicionalContext.class,0);
		}
		public ComandoRepetitivoContext comandoRepetitivo() {
			return getRuleContext(ComandoRepetitivoContext.class,0);
		}
		public ComandoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comando; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterComando(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitComando(this);
		}
	}

	public final ComandoContext comando() throws RecognitionException {
		ComandoContext _localctx = new ComandoContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_comando);
		try {
			setState(127);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IDENTIFICADOR:
				enterOuterAlt(_localctx, 1);
				{
				setState(122);
				atribuicao();
				}
				break;
			case T__2:
			case T__3:
				enterOuterAlt(_localctx, 2);
				{
				setState(123);
				chamadaDeProcedimento();
				}
				break;
			case RSV_BEGIN:
				enterOuterAlt(_localctx, 3);
				{
				setState(124);
				comandoComposto();
				}
				break;
			case RSV_IF:
				enterOuterAlt(_localctx, 4);
				{
				setState(125);
				comandoCondicional();
				}
				break;
			case RSV_WHILE:
				enterOuterAlt(_localctx, 5);
				{
				setState(126);
				comandoRepetitivo();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AtribuicaoContext extends ParserRuleContext {
		public VariavelContext variavel() {
			return getRuleContext(VariavelContext.class,0);
		}
		public TerminalNode DOIS_PONTOS_IGUAL() { return getToken(mini_pascalParser.DOIS_PONTOS_IGUAL, 0); }
		public ExpressaoContext expressao() {
			return getRuleContext(ExpressaoContext.class,0);
		}
		public TerminalNode DOIS_PONTOS() { return getToken(mini_pascalParser.DOIS_PONTOS, 0); }
		public TipoContext tipo() {
			return getRuleContext(TipoContext.class,0);
		}
		public AtribuicaoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_atribuicao; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterAtribuicao(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitAtribuicao(this);
		}
	}

	public final AtribuicaoContext atribuicao() throws RecognitionException {
		AtribuicaoContext _localctx = new AtribuicaoContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_atribuicao);
		int _la;
		try {
			setState(140);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(129);
				variavel();
				setState(130);
				match(DOIS_PONTOS_IGUAL);
				setState(131);
				expressao();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(133);
				variavel();
				setState(134);
				match(DOIS_PONTOS);
				setState(135);
				tipo();
				setState(138);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DOIS_PONTOS_IGUAL) {
					{
					setState(136);
					match(DOIS_PONTOS_IGUAL);
					setState(137);
					expressao();
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ChamadaDeProcedimentoContext extends ParserRuleContext {
		public TerminalNode PARENTESES_ESQUERDO() { return getToken(mini_pascalParser.PARENTESES_ESQUERDO, 0); }
		public TerminalNode PARENTESES_DIREITO() { return getToken(mini_pascalParser.PARENTESES_DIREITO, 0); }
		public ListaDeExpressoesContext listaDeExpressoes() {
			return getRuleContext(ListaDeExpressoesContext.class,0);
		}
		public ChamadaDeProcedimentoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_chamadaDeProcedimento; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterChamadaDeProcedimento(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitChamadaDeProcedimento(this);
		}
	}

	public final ChamadaDeProcedimentoContext chamadaDeProcedimento() throws RecognitionException {
		ChamadaDeProcedimentoContext _localctx = new ChamadaDeProcedimentoContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_chamadaDeProcedimento);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(142);
			_la = _input.LA(1);
			if ( !(_la==T__2 || _la==T__3) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(143);
			match(PARENTESES_ESQUERDO);
			setState(145);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 764521086982L) != 0)) {
				{
				setState(144);
				listaDeExpressoes();
				}
			}

			setState(147);
			match(PARENTESES_DIREITO);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComandoCondicionalContext extends ParserRuleContext {
		public TerminalNode RSV_IF() { return getToken(mini_pascalParser.RSV_IF, 0); }
		public ExpressaoContext expressao() {
			return getRuleContext(ExpressaoContext.class,0);
		}
		public TerminalNode RSV_THEN() { return getToken(mini_pascalParser.RSV_THEN, 0); }
		public List<ComandoContext> comando() {
			return getRuleContexts(ComandoContext.class);
		}
		public ComandoContext comando(int i) {
			return getRuleContext(ComandoContext.class,i);
		}
		public TerminalNode RSV_ELSE() { return getToken(mini_pascalParser.RSV_ELSE, 0); }
		public ComandoCondicionalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comandoCondicional; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterComandoCondicional(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitComandoCondicional(this);
		}
	}

	public final ComandoCondicionalContext comandoCondicional() throws RecognitionException {
		ComandoCondicionalContext _localctx = new ComandoCondicionalContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_comandoCondicional);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(149);
			match(RSV_IF);
			setState(150);
			expressao();
			setState(151);
			match(RSV_THEN);
			setState(152);
			comando();
			setState(155);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				{
				setState(153);
				match(RSV_ELSE);
				setState(154);
				comando();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComandoRepetitivoContext extends ParserRuleContext {
		public TerminalNode RSV_WHILE() { return getToken(mini_pascalParser.RSV_WHILE, 0); }
		public ExpressaoContext expressao() {
			return getRuleContext(ExpressaoContext.class,0);
		}
		public TerminalNode RSV_DO() { return getToken(mini_pascalParser.RSV_DO, 0); }
		public ComandoContext comando() {
			return getRuleContext(ComandoContext.class,0);
		}
		public ComandoRepetitivoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comandoRepetitivo; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterComandoRepetitivo(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitComandoRepetitivo(this);
		}
	}

	public final ComandoRepetitivoContext comandoRepetitivo() throws RecognitionException {
		ComandoRepetitivoContext _localctx = new ComandoRepetitivoContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_comandoRepetitivo);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(157);
			match(RSV_WHILE);
			setState(158);
			expressao();
			setState(159);
			match(RSV_DO);
			setState(160);
			comando();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressaoContext extends ParserRuleContext {
		public List<ExpressaoSimplesContext> expressaoSimples() {
			return getRuleContexts(ExpressaoSimplesContext.class);
		}
		public ExpressaoSimplesContext expressaoSimples(int i) {
			return getRuleContext(ExpressaoSimplesContext.class,i);
		}
		public RelacaoContext relacao() {
			return getRuleContext(RelacaoContext.class,0);
		}
		public ExpressaoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressao; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterExpressao(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitExpressao(this);
		}
	}

	public final ExpressaoContext expressao() throws RecognitionException {
		ExpressaoContext _localctx = new ExpressaoContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_expressao);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(162);
			expressaoSimples();
			setState(166);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				{
				setState(163);
				relacao();
				setState(164);
				expressaoSimples();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class RelacaoContext extends ParserRuleContext {
		public TerminalNode OPERADORES_DE_RELACAO() { return getToken(mini_pascalParser.OPERADORES_DE_RELACAO, 0); }
		public RelacaoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_relacao; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterRelacao(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitRelacao(this);
		}
	}

	public final RelacaoContext relacao() throws RecognitionException {
		RelacaoContext _localctx = new RelacaoContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_relacao);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(168);
			match(OPERADORES_DE_RELACAO);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressaoSimplesContext extends ParserRuleContext {
		public List<TermoContext> termo() {
			return getRuleContexts(TermoContext.class);
		}
		public TermoContext termo(int i) {
			return getRuleContext(TermoContext.class,i);
		}
		public List<TerminalNode> OPERADORES_MAIS_MENOS() { return getTokens(mini_pascalParser.OPERADORES_MAIS_MENOS); }
		public TerminalNode OPERADORES_MAIS_MENOS(int i) {
			return getToken(mini_pascalParser.OPERADORES_MAIS_MENOS, i);
		}
		public List<TerminalNode> RSV_OR() { return getTokens(mini_pascalParser.RSV_OR); }
		public TerminalNode RSV_OR(int i) {
			return getToken(mini_pascalParser.RSV_OR, i);
		}
		public ExpressaoSimplesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressaoSimples; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterExpressaoSimples(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitExpressaoSimples(this);
		}
	}

	public final ExpressaoSimplesContext expressaoSimples() throws RecognitionException {
		ExpressaoSimplesContext _localctx = new ExpressaoSimplesContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_expressaoSimples);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(171);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OPERADORES_MAIS_MENOS) {
				{
				setState(170);
				match(OPERADORES_MAIS_MENOS);
				}
			}

			setState(173);
			termo();
			setState(181);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(177);
					_errHandler.sync(this);
					switch (_input.LA(1)) {
					case OPERADORES_MAIS_MENOS:
						{
						setState(174);
						match(OPERADORES_MAIS_MENOS);
						}
						break;
					case RSV_OR:
						{
						setState(175);
						match(RSV_OR);
						setState(176);
						termo();
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					}
					} 
				}
				setState(183);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TermoContext extends ParserRuleContext {
		public List<FatorContext> fator() {
			return getRuleContexts(FatorContext.class);
		}
		public FatorContext fator(int i) {
			return getRuleContext(FatorContext.class,i);
		}
		public List<TerminalNode> OPERADORES_VEZES_DIV() { return getTokens(mini_pascalParser.OPERADORES_VEZES_DIV); }
		public TerminalNode OPERADORES_VEZES_DIV(int i) {
			return getToken(mini_pascalParser.OPERADORES_VEZES_DIV, i);
		}
		public List<TerminalNode> RSV_AND() { return getTokens(mini_pascalParser.RSV_AND); }
		public TerminalNode RSV_AND(int i) {
			return getToken(mini_pascalParser.RSV_AND, i);
		}
		public TermoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_termo; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterTermo(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitTermo(this);
		}
	}

	public final TermoContext termo() throws RecognitionException {
		TermoContext _localctx = new TermoContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_termo);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(184);
			fator();
			setState(189);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(185);
					_la = _input.LA(1);
					if ( !(_la==RSV_AND || _la==OPERADORES_VEZES_DIV) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					setState(186);
					fator();
					}
					} 
				}
				setState(191);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FatorContext extends ParserRuleContext {
		public VariavelContext variavel() {
			return getRuleContext(VariavelContext.class,0);
		}
		public TerminalNode NUMERO() { return getToken(mini_pascalParser.NUMERO, 0); }
		public TerminalNode PARENTESES_ESQUERDO() { return getToken(mini_pascalParser.PARENTESES_ESQUERDO, 0); }
		public ExpressaoContext expressao() {
			return getRuleContext(ExpressaoContext.class,0);
		}
		public TerminalNode PARENTESES_DIREITO() { return getToken(mini_pascalParser.PARENTESES_DIREITO, 0); }
		public TerminalNode RSV_NOT() { return getToken(mini_pascalParser.RSV_NOT, 0); }
		public FatorContext fator() {
			return getRuleContext(FatorContext.class,0);
		}
		public ConstanteContext constante() {
			return getRuleContext(ConstanteContext.class,0);
		}
		public TerminalNode STRING() { return getToken(mini_pascalParser.STRING, 0); }
		public FatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fator; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterFator(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitFator(this);
		}
	}

	public final FatorContext fator() throws RecognitionException {
		FatorContext _localctx = new FatorContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_fator);
		try {
			setState(202);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IDENTIFICADOR:
				enterOuterAlt(_localctx, 1);
				{
				setState(192);
				variavel();
				}
				break;
			case NUMERO:
				enterOuterAlt(_localctx, 2);
				{
				setState(193);
				match(NUMERO);
				}
				break;
			case PARENTESES_ESQUERDO:
				enterOuterAlt(_localctx, 3);
				{
				setState(194);
				match(PARENTESES_ESQUERDO);
				setState(195);
				expressao();
				setState(196);
				match(PARENTESES_DIREITO);
				}
				break;
			case RSV_NOT:
				enterOuterAlt(_localctx, 4);
				{
				setState(198);
				match(RSV_NOT);
				setState(199);
				fator();
				}
				break;
			case T__0:
			case T__1:
				enterOuterAlt(_localctx, 5);
				{
				setState(200);
				constante();
				}
				break;
			case STRING:
				enterOuterAlt(_localctx, 6);
				{
				setState(201);
				match(STRING);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VariavelContext extends ParserRuleContext {
		public TerminalNode IDENTIFICADOR() { return getToken(mini_pascalParser.IDENTIFICADOR, 0); }
		public ExpressaoContext expressao() {
			return getRuleContext(ExpressaoContext.class,0);
		}
		public VariavelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variavel; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterVariavel(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitVariavel(this);
		}
	}

	public final VariavelContext variavel() throws RecognitionException {
		VariavelContext _localctx = new VariavelContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_variavel);
		try {
			setState(207);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(204);
				match(IDENTIFICADOR);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(205);
				match(IDENTIFICADOR);
				{
				setState(206);
				expressao();
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ListaDeExpressoesContext extends ParserRuleContext {
		public List<ExpressaoContext> expressao() {
			return getRuleContexts(ExpressaoContext.class);
		}
		public ExpressaoContext expressao(int i) {
			return getRuleContext(ExpressaoContext.class,i);
		}
		public TerminalNode VIRGULA() { return getToken(mini_pascalParser.VIRGULA, 0); }
		public ListaDeExpressoesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_listaDeExpressoes; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).enterListaDeExpressoes(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof mini_pascalListener ) ((mini_pascalListener)listener).exitListaDeExpressoes(this);
		}
	}

	public final ListaDeExpressoesContext listaDeExpressoes() throws RecognitionException {
		ListaDeExpressoesContext _localctx = new ListaDeExpressoesContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_listaDeExpressoes);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(209);
			expressao();
			setState(212);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==VIRGULA) {
				{
				setState(210);
				match(VIRGULA);
				setState(211);
				expressao();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u0001(\u00d7\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0001"+
		"\u0003\u00019\b\u0001\u0001\u0001\u0003\u0001<\b\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0004\u0002C\b\u0002\u000b"+
		"\u0002\f\u0002D\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0005"+
		"\u0006Q\b\u0006\n\u0006\f\u0006T\t\u0006\u0001\u0007\u0001\u0007\u0001"+
		"\u0007\u0001\b\u0001\b\u0001\b\u0003\b\\\b\b\u0001\b\u0001\b\u0001\b\u0001"+
		"\t\u0001\t\u0001\t\u0005\td\b\t\n\t\f\tg\t\t\u0001\n\u0003\nj\b\n\u0001"+
		"\n\u0001\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0005\u000bt\b\u000b\n\u000b\f\u000bw\t\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0003\f\u0080\b\f\u0001\r\u0001"+
		"\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0003\r\u008b"+
		"\b\r\u0003\r\u008d\b\r\u0001\u000e\u0001\u000e\u0001\u000e\u0003\u000e"+
		"\u0092\b\u000e\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001\u000f"+
		"\u0001\u000f\u0001\u000f\u0001\u000f\u0003\u000f\u009c\b\u000f\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0001\u0011\u0003\u0011\u00a7\b\u0011\u0001\u0012\u0001\u0012"+
		"\u0001\u0013\u0003\u0013\u00ac\b\u0013\u0001\u0013\u0001\u0013\u0001\u0013"+
		"\u0001\u0013\u0003\u0013\u00b2\b\u0013\u0005\u0013\u00b4\b\u0013\n\u0013"+
		"\f\u0013\u00b7\t\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0005\u0014"+
		"\u00bc\b\u0014\n\u0014\f\u0014\u00bf\t\u0014\u0001\u0015\u0001\u0015\u0001"+
		"\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001"+
		"\u0015\u0001\u0015\u0003\u0015\u00cb\b\u0015\u0001\u0016\u0001\u0016\u0001"+
		"\u0016\u0003\u0016\u00d0\b\u0016\u0001\u0017\u0001\u0017\u0001\u0017\u0003"+
		"\u0017\u00d5\b\u0017\u0001\u0017\u0000\u0000\u0018\u0000\u0002\u0004\u0006"+
		"\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c\u001e \"$&(*,."+
		"\u0000\u0004\u0001\u0000\u0005\u0006\u0001\u0000\u0001\u0002\u0001\u0000"+
		"\u0003\u0004\u0002\u0000\u0014\u0014\u0019\u0019\u00da\u00000\u0001\u0000"+
		"\u0000\u0000\u00028\u0001\u0000\u0000\u0000\u0004B\u0001\u0000\u0000\u0000"+
		"\u0006F\u0001\u0000\u0000\u0000\bH\u0001\u0000\u0000\u0000\nJ\u0001\u0000"+
		"\u0000\u0000\fM\u0001\u0000\u0000\u0000\u000eU\u0001\u0000\u0000\u0000"+
		"\u0010X\u0001\u0000\u0000\u0000\u0012`\u0001\u0000\u0000\u0000\u0014i"+
		"\u0001\u0000\u0000\u0000\u0016o\u0001\u0000\u0000\u0000\u0018\u007f\u0001"+
		"\u0000\u0000\u0000\u001a\u008c\u0001\u0000\u0000\u0000\u001c\u008e\u0001"+
		"\u0000\u0000\u0000\u001e\u0095\u0001\u0000\u0000\u0000 \u009d\u0001\u0000"+
		"\u0000\u0000\"\u00a2\u0001\u0000\u0000\u0000$\u00a8\u0001\u0000\u0000"+
		"\u0000&\u00ab\u0001\u0000\u0000\u0000(\u00b8\u0001\u0000\u0000\u0000*"+
		"\u00ca\u0001\u0000\u0000\u0000,\u00cf\u0001\u0000\u0000\u0000.\u00d1\u0001"+
		"\u0000\u0000\u000001\u0005\u0007\u0000\u000012\u0005\'\u0000\u000023\u0005"+
		"\u001f\u0000\u000034\u0003\u0002\u0001\u000045\u0005\u001c\u0000\u0000"+
		"56\u0005\u0000\u0000\u00016\u0001\u0001\u0000\u0000\u000079\u0003\u0004"+
		"\u0002\u000087\u0001\u0000\u0000\u000089\u0001\u0000\u0000\u00009;\u0001"+
		"\u0000\u0000\u0000:<\u0003\u000e\u0007\u0000;:\u0001\u0000\u0000\u0000"+
		";<\u0001\u0000\u0000\u0000<=\u0001\u0000\u0000\u0000=>\u0003\u0016\u000b"+
		"\u0000>\u0003\u0001\u0000\u0000\u0000?@\u0003\n\u0005\u0000@A\u0005\u001f"+
		"\u0000\u0000AC\u0001\u0000\u0000\u0000B?\u0001\u0000\u0000\u0000CD\u0001"+
		"\u0000\u0000\u0000DB\u0001\u0000\u0000\u0000DE\u0001\u0000\u0000\u0000"+
		"E\u0005\u0001\u0000\u0000\u0000FG\u0007\u0000\u0000\u0000G\u0007\u0001"+
		"\u0000\u0000\u0000HI\u0007\u0001\u0000\u0000I\t\u0001\u0000\u0000\u0000"+
		"JK\u0003\u0006\u0003\u0000KL\u0003\f\u0006\u0000L\u000b\u0001\u0000\u0000"+
		"\u0000MR\u0005\'\u0000\u0000NO\u0005\u001d\u0000\u0000OQ\u0005\'\u0000"+
		"\u0000PN\u0001\u0000\u0000\u0000QT\u0001\u0000\u0000\u0000RP\u0001\u0000"+
		"\u0000\u0000RS\u0001\u0000\u0000\u0000S\r\u0001\u0000\u0000\u0000TR\u0001"+
		"\u0000\u0000\u0000UV\u0003\u0010\b\u0000VW\u0005\u001f\u0000\u0000W\u000f"+
		"\u0001\u0000\u0000\u0000XY\u0005\u000b\u0000\u0000Y[\u0005\'\u0000\u0000"+
		"Z\\\u0003\u0012\t\u0000[Z\u0001\u0000\u0000\u0000[\\\u0001\u0000\u0000"+
		"\u0000\\]\u0001\u0000\u0000\u0000]^\u0005\u001f\u0000\u0000^_\u0003\u0002"+
		"\u0001\u0000_\u0011\u0001\u0000\u0000\u0000`e\u0003\u0014\n\u0000ab\u0005"+
		"\u001d\u0000\u0000bd\u0003\u0014\n\u0000ca\u0001\u0000\u0000\u0000dg\u0001"+
		"\u0000\u0000\u0000ec\u0001\u0000\u0000\u0000ef\u0001\u0000\u0000\u0000"+
		"f\u0013\u0001\u0000\u0000\u0000ge\u0001\u0000\u0000\u0000hj\u0005\b\u0000"+
		"\u0000ih\u0001\u0000\u0000\u0000ij\u0001\u0000\u0000\u0000jk\u0001\u0000"+
		"\u0000\u0000kl\u0003\f\u0006\u0000lm\u0005\u001e\u0000\u0000mn\u0005\'"+
		"\u0000\u0000n\u0015\u0001\u0000\u0000\u0000ou\u0005\t\u0000\u0000pq\u0003"+
		"\u0018\f\u0000qr\u0005\u001f\u0000\u0000rt\u0001\u0000\u0000\u0000sp\u0001"+
		"\u0000\u0000\u0000tw\u0001\u0000\u0000\u0000us\u0001\u0000\u0000\u0000"+
		"uv\u0001\u0000\u0000\u0000vx\u0001\u0000\u0000\u0000wu\u0001\u0000\u0000"+
		"\u0000xy\u0005\n\u0000\u0000y\u0017\u0001\u0000\u0000\u0000z\u0080\u0003"+
		"\u001a\r\u0000{\u0080\u0003\u001c\u000e\u0000|\u0080\u0003\u0016\u000b"+
		"\u0000}\u0080\u0003\u001e\u000f\u0000~\u0080\u0003 \u0010\u0000\u007f"+
		"z\u0001\u0000\u0000\u0000\u007f{\u0001\u0000\u0000\u0000\u007f|\u0001"+
		"\u0000\u0000\u0000\u007f}\u0001\u0000\u0000\u0000\u007f~\u0001\u0000\u0000"+
		"\u0000\u0080\u0019\u0001\u0000\u0000\u0000\u0081\u0082\u0003,\u0016\u0000"+
		"\u0082\u0083\u0005\"\u0000\u0000\u0083\u0084\u0003\"\u0011\u0000\u0084"+
		"\u008d\u0001\u0000\u0000\u0000\u0085\u0086\u0003,\u0016\u0000\u0086\u0087"+
		"\u0005\u001e\u0000\u0000\u0087\u008a\u0003\u0006\u0003\u0000\u0088\u0089"+
		"\u0005\"\u0000\u0000\u0089\u008b\u0003\"\u0011\u0000\u008a\u0088\u0001"+
		"\u0000\u0000\u0000\u008a\u008b\u0001\u0000\u0000\u0000\u008b\u008d\u0001"+
		"\u0000\u0000\u0000\u008c\u0081\u0001\u0000\u0000\u0000\u008c\u0085\u0001"+
		"\u0000\u0000\u0000\u008d\u001b\u0001\u0000\u0000\u0000\u008e\u008f\u0007"+
		"\u0002\u0000\u0000\u008f\u0091\u0005$\u0000\u0000\u0090\u0092\u0003.\u0017"+
		"\u0000\u0091\u0090\u0001\u0000\u0000\u0000\u0091\u0092\u0001\u0000\u0000"+
		"\u0000\u0092\u0093\u0001\u0000\u0000\u0000\u0093\u0094\u0005#\u0000\u0000"+
		"\u0094\u001d\u0001\u0000\u0000\u0000\u0095\u0096\u0005\f\u0000\u0000\u0096"+
		"\u0097\u0003\"\u0011\u0000\u0097\u0098\u0005\r\u0000\u0000\u0098\u009b"+
		"\u0003\u0018\f\u0000\u0099\u009a\u0005\u000e\u0000\u0000\u009a\u009c\u0003"+
		"\u0018\f\u0000\u009b\u0099\u0001\u0000\u0000\u0000\u009b\u009c\u0001\u0000"+
		"\u0000\u0000\u009c\u001f\u0001\u0000\u0000\u0000\u009d\u009e\u0005\u000f"+
		"\u0000\u0000\u009e\u009f\u0003\"\u0011\u0000\u009f\u00a0\u0005\u0010\u0000"+
		"\u0000\u00a0\u00a1\u0003\u0018\f\u0000\u00a1!\u0001\u0000\u0000\u0000"+
		"\u00a2\u00a6\u0003&\u0013\u0000\u00a3\u00a4\u0003$\u0012\u0000\u00a4\u00a5"+
		"\u0003&\u0013\u0000\u00a5\u00a7\u0001\u0000\u0000\u0000\u00a6\u00a3\u0001"+
		"\u0000\u0000\u0000\u00a6\u00a7\u0001\u0000\u0000\u0000\u00a7#\u0001\u0000"+
		"\u0000\u0000\u00a8\u00a9\u0005\u0017\u0000\u0000\u00a9%\u0001\u0000\u0000"+
		"\u0000\u00aa\u00ac\u0005\u0018\u0000\u0000\u00ab\u00aa\u0001\u0000\u0000"+
		"\u0000\u00ab\u00ac\u0001\u0000\u0000\u0000\u00ac\u00ad\u0001\u0000\u0000"+
		"\u0000\u00ad\u00b5\u0003(\u0014\u0000\u00ae\u00b2\u0005\u0018\u0000\u0000"+
		"\u00af\u00b0\u0005\u0012\u0000\u0000\u00b0\u00b2\u0003(\u0014\u0000\u00b1"+
		"\u00ae\u0001\u0000\u0000\u0000\u00b1\u00af\u0001\u0000\u0000\u0000\u00b2"+
		"\u00b4\u0001\u0000\u0000\u0000\u00b3\u00b1\u0001\u0000\u0000\u0000\u00b4"+
		"\u00b7\u0001\u0000\u0000\u0000\u00b5\u00b3\u0001\u0000\u0000\u0000\u00b5"+
		"\u00b6\u0001\u0000\u0000\u0000\u00b6\'\u0001\u0000\u0000\u0000\u00b7\u00b5"+
		"\u0001\u0000\u0000\u0000\u00b8\u00bd\u0003*\u0015\u0000\u00b9\u00ba\u0007"+
		"\u0003\u0000\u0000\u00ba\u00bc\u0003*\u0015\u0000\u00bb\u00b9\u0001\u0000"+
		"\u0000\u0000\u00bc\u00bf\u0001\u0000\u0000\u0000\u00bd\u00bb\u0001\u0000"+
		"\u0000\u0000\u00bd\u00be\u0001\u0000\u0000\u0000\u00be)\u0001\u0000\u0000"+
		"\u0000\u00bf\u00bd\u0001\u0000\u0000\u0000\u00c0\u00cb\u0003,\u0016\u0000"+
		"\u00c1\u00cb\u0005%\u0000\u0000\u00c2\u00c3\u0005$\u0000\u0000\u00c3\u00c4"+
		"\u0003\"\u0011\u0000\u00c4\u00c5\u0005#\u0000\u0000\u00c5\u00cb\u0001"+
		"\u0000\u0000\u0000\u00c6\u00c7\u0005\u0011\u0000\u0000\u00c7\u00cb\u0003"+
		"*\u0015\u0000\u00c8\u00cb\u0003\b\u0004\u0000\u00c9\u00cb\u0005!\u0000"+
		"\u0000\u00ca\u00c0\u0001\u0000\u0000\u0000\u00ca\u00c1\u0001\u0000\u0000"+
		"\u0000\u00ca\u00c2\u0001\u0000\u0000\u0000\u00ca\u00c6\u0001\u0000\u0000"+
		"\u0000\u00ca\u00c8\u0001\u0000\u0000\u0000\u00ca\u00c9\u0001\u0000\u0000"+
		"\u0000\u00cb+\u0001\u0000\u0000\u0000\u00cc\u00d0\u0005\'\u0000\u0000"+
		"\u00cd\u00ce\u0005\'\u0000\u0000\u00ce\u00d0\u0003\"\u0011\u0000\u00cf"+
		"\u00cc\u0001\u0000\u0000\u0000\u00cf\u00cd\u0001\u0000\u0000\u0000\u00d0"+
		"-\u0001\u0000\u0000\u0000\u00d1\u00d4\u0003\"\u0011\u0000\u00d2\u00d3"+
		"\u0005\u001d\u0000\u0000\u00d3\u00d5\u0003\"\u0011\u0000\u00d4\u00d2\u0001"+
		"\u0000\u0000\u0000\u00d4\u00d5\u0001\u0000\u0000\u0000\u00d5/\u0001\u0000"+
		"\u0000\u0000\u00158;DR[eiu\u007f\u008a\u008c\u0091\u009b\u00a6\u00ab\u00b1"+
		"\u00b5\u00bd\u00ca\u00cf\u00d4";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}