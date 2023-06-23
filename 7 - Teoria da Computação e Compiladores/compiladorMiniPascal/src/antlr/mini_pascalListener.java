package antlr;// Generated from mini_pascal.g4 by ANTLR 4.13.0
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link mini_pascalParser}.
 */
public interface mini_pascalListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#programa}.
	 * @param ctx the parse tree
	 */
	void enterPrograma(mini_pascalParser.ProgramaContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#programa}.
	 * @param ctx the parse tree
	 */
	void exitPrograma(mini_pascalParser.ProgramaContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#bloco}.
	 * @param ctx the parse tree
	 */
	void enterBloco(mini_pascalParser.BlocoContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#bloco}.
	 * @param ctx the parse tree
	 */
	void exitBloco(mini_pascalParser.BlocoContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#parteDeDeclaracaoDeVariavel}.
	 * @param ctx the parse tree
	 */
	void enterParteDeDeclaracaoDeVariavel(mini_pascalParser.ParteDeDeclaracaoDeVariavelContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#parteDeDeclaracaoDeVariavel}.
	 * @param ctx the parse tree
	 */
	void exitParteDeDeclaracaoDeVariavel(mini_pascalParser.ParteDeDeclaracaoDeVariavelContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#tipo}.
	 * @param ctx the parse tree
	 */
	void enterTipo(mini_pascalParser.TipoContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#tipo}.
	 * @param ctx the parse tree
	 */
	void exitTipo(mini_pascalParser.TipoContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#constante}.
	 * @param ctx the parse tree
	 */
	void enterConstante(mini_pascalParser.ConstanteContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#constante}.
	 * @param ctx the parse tree
	 */
	void exitConstante(mini_pascalParser.ConstanteContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#declaracaoDeVariaveis}.
	 * @param ctx the parse tree
	 */
	void enterDeclaracaoDeVariaveis(mini_pascalParser.DeclaracaoDeVariaveisContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#declaracaoDeVariaveis}.
	 * @param ctx the parse tree
	 */
	void exitDeclaracaoDeVariaveis(mini_pascalParser.DeclaracaoDeVariaveisContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#listaDeIdentificadores}.
	 * @param ctx the parse tree
	 */
	void enterListaDeIdentificadores(mini_pascalParser.ListaDeIdentificadoresContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#listaDeIdentificadores}.
	 * @param ctx the parse tree
	 */
	void exitListaDeIdentificadores(mini_pascalParser.ListaDeIdentificadoresContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#parteDeDeclaracoesDeSubRotinas}.
	 * @param ctx the parse tree
	 */
	void enterParteDeDeclaracoesDeSubRotinas(mini_pascalParser.ParteDeDeclaracoesDeSubRotinasContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#parteDeDeclaracoesDeSubRotinas}.
	 * @param ctx the parse tree
	 */
	void exitParteDeDeclaracoesDeSubRotinas(mini_pascalParser.ParteDeDeclaracoesDeSubRotinasContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#declaracaoDeProcedimento}.
	 * @param ctx the parse tree
	 */
	void enterDeclaracaoDeProcedimento(mini_pascalParser.DeclaracaoDeProcedimentoContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#declaracaoDeProcedimento}.
	 * @param ctx the parse tree
	 */
	void exitDeclaracaoDeProcedimento(mini_pascalParser.DeclaracaoDeProcedimentoContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#parametrosFormais}.
	 * @param ctx the parse tree
	 */
	void enterParametrosFormais(mini_pascalParser.ParametrosFormaisContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#parametrosFormais}.
	 * @param ctx the parse tree
	 */
	void exitParametrosFormais(mini_pascalParser.ParametrosFormaisContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#secaoDeParametrosFormais}.
	 * @param ctx the parse tree
	 */
	void enterSecaoDeParametrosFormais(mini_pascalParser.SecaoDeParametrosFormaisContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#secaoDeParametrosFormais}.
	 * @param ctx the parse tree
	 */
	void exitSecaoDeParametrosFormais(mini_pascalParser.SecaoDeParametrosFormaisContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#comandoComposto}.
	 * @param ctx the parse tree
	 */
	void enterComandoComposto(mini_pascalParser.ComandoCompostoContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#comandoComposto}.
	 * @param ctx the parse tree
	 */
	void exitComandoComposto(mini_pascalParser.ComandoCompostoContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#comando}.
	 * @param ctx the parse tree
	 */
	void enterComando(mini_pascalParser.ComandoContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#comando}.
	 * @param ctx the parse tree
	 */
	void exitComando(mini_pascalParser.ComandoContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#atribuicao}.
	 * @param ctx the parse tree
	 */
	void enterAtribuicao(mini_pascalParser.AtribuicaoContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#atribuicao}.
	 * @param ctx the parse tree
	 */
	void exitAtribuicao(mini_pascalParser.AtribuicaoContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#chamadaDeProcedimento}.
	 * @param ctx the parse tree
	 */
	void enterChamadaDeProcedimento(mini_pascalParser.ChamadaDeProcedimentoContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#chamadaDeProcedimento}.
	 * @param ctx the parse tree
	 */
	void exitChamadaDeProcedimento(mini_pascalParser.ChamadaDeProcedimentoContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#comandoCondicional}.
	 * @param ctx the parse tree
	 */
	void enterComandoCondicional(mini_pascalParser.ComandoCondicionalContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#comandoCondicional}.
	 * @param ctx the parse tree
	 */
	void exitComandoCondicional(mini_pascalParser.ComandoCondicionalContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#comandoRepetitivo}.
	 * @param ctx the parse tree
	 */
	void enterComandoRepetitivo(mini_pascalParser.ComandoRepetitivoContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#comandoRepetitivo}.
	 * @param ctx the parse tree
	 */
	void exitComandoRepetitivo(mini_pascalParser.ComandoRepetitivoContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#expressao}.
	 * @param ctx the parse tree
	 */
	void enterExpressao(mini_pascalParser.ExpressaoContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#expressao}.
	 * @param ctx the parse tree
	 */
	void exitExpressao(mini_pascalParser.ExpressaoContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#relacao}.
	 * @param ctx the parse tree
	 */
	void enterRelacao(mini_pascalParser.RelacaoContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#relacao}.
	 * @param ctx the parse tree
	 */
	void exitRelacao(mini_pascalParser.RelacaoContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#expressaoSimples}.
	 * @param ctx the parse tree
	 */
	void enterExpressaoSimples(mini_pascalParser.ExpressaoSimplesContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#expressaoSimples}.
	 * @param ctx the parse tree
	 */
	void exitExpressaoSimples(mini_pascalParser.ExpressaoSimplesContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#termo}.
	 * @param ctx the parse tree
	 */
	void enterTermo(mini_pascalParser.TermoContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#termo}.
	 * @param ctx the parse tree
	 */
	void exitTermo(mini_pascalParser.TermoContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#fator}.
	 * @param ctx the parse tree
	 */
	void enterFator(mini_pascalParser.FatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#fator}.
	 * @param ctx the parse tree
	 */
	void exitFator(mini_pascalParser.FatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#variavel}.
	 * @param ctx the parse tree
	 */
	void enterVariavel(mini_pascalParser.VariavelContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#variavel}.
	 * @param ctx the parse tree
	 */
	void exitVariavel(mini_pascalParser.VariavelContext ctx);
	/**
	 * Enter a parse tree produced by {@link mini_pascalParser#listaDeExpressoes}.
	 * @param ctx the parse tree
	 */
	void enterListaDeExpressoes(mini_pascalParser.ListaDeExpressoesContext ctx);
	/**
	 * Exit a parse tree produced by {@link mini_pascalParser#listaDeExpressoes}.
	 * @param ctx the parse tree
	 */
	void exitListaDeExpressoes(mini_pascalParser.ListaDeExpressoesContext ctx);
}