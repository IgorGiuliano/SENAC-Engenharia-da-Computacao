/*
    SENAC - ENGENHARIA DA COMPUTAÇÃO - 7º SEMESTRE
    DISCIPLINA: TEORIA DA COMPUTAÇÃO E COMPILADORES
 */

import antlr.mini_pascalLexer;
import antlr.mini_pascalParser;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CommonTokenStream;

public class Main {
    public static void main(String[] args) {
        try {
            mini_pascalLexer lexer = new mini_pascalLexer(CharStreams.fromFileName("programa.pas"));
            CommonTokenStream tokenStream = new CommonTokenStream(lexer);
            mini_pascalParser parser = new mini_pascalParser(tokenStream);
            parser.programa();
        } catch (Exception err) {
            err.printStackTrace();
            System.err.println("ERROR " + err.getMessage());
        }
    }
}