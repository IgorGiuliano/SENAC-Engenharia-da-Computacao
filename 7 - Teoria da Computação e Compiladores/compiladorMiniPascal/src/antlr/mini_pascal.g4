grammar mini_pascal;
/*
    TOKENS
*/
// PALAVRAS RESERVADAS
RSV_INT:        [Ii] [Nn] [Tt];
RSV_BOOLEAN:    [Bb] [Oo] [Oo] [Ll] [Ee] [Aa] [Nn];
RSV_PROGRAM:    [Pp] [Rr] [Oo] [Gg] [Rr] [Aa] [Mm];
RSV_VAR:        [Vv] [Aa] [Rr];
RSV_BEGIN:      [Bb] [Ee] [Gg] [Ii] [Nn];
RSV_END:        [Ee] [Nn] [Dd];
RSV_PROCEDURE:  [Pp] [Rr] [Oo] [Cc] [Ee] [Dd] [Uu] [Rr] [Ee];
RSV_IF:         [Ii] [Ff];
RSV_THEN:       [Tt] [Hh] [Ee] [Nn];
RSV_ELSE:       [Ee] [Ll] [Ss] [Ee];
RSV_WHILE:      [Ww] [Hh] [Ii] [Ll] [Ee];
RSV_DO:         [Dd] [Oo];
RSV_NOT:        [Nn] [Oo] [Tt];
RSV_OR:         [Oo] [Rr];
RSV_DIV:        [Dd] [Ii] [Vv];
RSV_AND:        [Aa] [Nn] [Dd];
RSV_READ:       [Rr][Ee][Aa][Dd];
RSV_WRITE:      [Ww][Rr][Ii][Tt][Ee];
// OPERADORES
OPERADORES_DE_RELACAO:  IGUAL | '<>' | '<' | '<=' | '>=' | '>';
OPERADORES_MAIS_MENOS:  '+' | '-';
OPERADORES_VEZES_DIV:   '*' | RSV_DIV;
// DEMAIS SIMBOLOS
VAZIO:              [ \t\n\r]* -> skip ;
IGUAL:              '=';
PONTO:              '.';
VIRGULA:            ',';
DOIS_PONTOS:        ':';
PONTO_E_VIRGULA:    ';';
COMENTARIO:         '{' ~[\r\n]* '}' -> skip;
STRING:             '\'' .*? '\'';
DOIS_PONTOS_IGUAL:  ':=';
PARENTESES_DIREITO: ')';
PARENTESES_ESQUERDO:'(';

/*
    REGRAS SINTÁTICAS
*/
// item 1
programa: RSV_PROGRAM IDENTIFICADOR PONTO_E_VIRGULA bloco PONTO EOF;
// item 2
bloco: (parteDeDeclaracaoDeVariavel)? (parteDeDeclaracoesDeSubRotinas)? comandoComposto;
// item 3
parteDeDeclaracaoDeVariavel: (declaracaoDeVariaveis PONTO_E_VIRGULA)+;
// item 4
tipo: RSV_BOOLEAN | RSV_INT;
constante: 'true' | 'false';
declaracaoDeVariaveis: tipo listaDeIdentificadores;
// item 5
listaDeIdentificadores: IDENTIFICADOR (VIRGULA IDENTIFICADOR)*;
// item 6
parteDeDeclaracoesDeSubRotinas: (declaracaoDeProcedimento PONTO_E_VIRGULA);
// item 7
declaracaoDeProcedimento: RSV_PROCEDURE IDENTIFICADOR (parametrosFormais)? PONTO_E_VIRGULA bloco;
// item 8
parametrosFormais: secaoDeParametrosFormais (',' secaoDeParametrosFormais)*;
// item 9
secaoDeParametrosFormais: (RSV_VAR)? listaDeIdentificadores DOIS_PONTOS IDENTIFICADOR;
// item 10
comandoComposto: RSV_BEGIN (comando PONTO_E_VIRGULA)* RSV_END;
// item 11
comando: atribuicao | chamadaDeProcedimento | comandoComposto | comandoCondicional | comandoRepetitivo;
// item 12
atribuicao: variavel DOIS_PONTOS_IGUAL expressao | variavel DOIS_PONTOS tipo (DOIS_PONTOS_IGUAL expressao)?;
// item 13
chamadaDeProcedimento: ('READ' | 'WRITE') '(' (listaDeExpressoes)? ')';
// item 14
comandoCondicional: RSV_IF expressao RSV_THEN comando (RSV_ELSE comando)?;
// item 15
comandoRepetitivo: RSV_WHILE expressao RSV_DO comando;
// item 16
expressao: expressaoSimples (relacao expressaoSimples)?;
// item 17
relacao: OPERADORES_DE_RELACAO;
// item 18
expressaoSimples: (OPERADORES_MAIS_MENOS)? termo ((OPERADORES_MAIS_MENOS | RSV_OR termo))*;
// item 19
termo: fator ( ( OPERADORES_VEZES_DIV | RSV_AND ) fator )*;
// item 20
fator: variavel | NUMERO | '('expressao')' | RSV_NOT fator | constante | STRING;
// item 21
variavel: IDENTIFICADOR | IDENTIFICADOR (expressao);
// item 22
listaDeExpressoes: expressao (VIRGULA expressao)?;
// item 23
NUMERO: (DIGITO)+ ; // LIMITAR
// item 24
DIGITO: [0-9];
// item 25
IDENTIFICADOR: LETRA (LETRA | DIGITO)*; // LIMITAR
// item 26
LETRA: [a-zA-Z_];