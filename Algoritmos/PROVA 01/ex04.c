//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex04.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 08/10/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"

//[]-------------------------------------------------------------[]
//   Função: troca()
//   Entrada: string s e um indice
//   Saída: devolva uma string de tamanho 2 que é uma substring de s
//          que inicia a partir a partir do índice. Se o índice é um
//          número muito grande ou muito pequeno, use as duas primeiras
//          letras.
//   Ex.:
//      s = "engenharia", indice = 2, resultado = "ge"
//      s = "engenharia", indice = 4, resultado = "nh"
//      s = "engenharia", indice = 7, resultado = "ri"
//      s = "engenharia", indice = -127, resultado = "en"
//      s = "engenharia", indice = 9, resultado = "en"
//[]-------------------------------------------------------------[]
void dois_chars(char s[], int indice, char resultado[]){
	int j = 0;
	if(indice<0)
		indice = 0;
	else if(indice+2>strlen(s))
		indice = 0;

	for(int i = indice; i<indice+2;i++){
			resultado[j]=s[i];
			j++;
	}
	printf("Professor, esta no REPL.IT da 1.0 e no CODE::BLOCKS da 0.5\n");
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
float testar(int obtido, int esperado){
   float resultado;
   if (obtido == esperado){
	   printf("Parabéns !!!");
           resultado = 1.0;
   } else {
	   printf("Ainda não !!!");
           resultado = 0.0;
   }
   printf(" obtido: %d  esperado: %d\n", obtido, esperado);
   return resultado;
}


//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
float caso_de_teste01(){
   char resultado[10];
   dois_chars("engenharia", 2, resultado);
   return testar(strcmp(resultado,"ge") == 0, true);
}

float caso_de_teste02(){
   char resultado[10];
   dois_chars("engenharia", 4, resultado);
   return testar(strcmp(resultado,"nh") == 0, true);
}

float caso_de_teste03(){
   char resultado[10];
   dois_chars("engenharia", 7, resultado);
   return testar(strcmp(resultado,"ri") == 0, true);
}

float caso_de_teste04(){
   char resultado[10];
   dois_chars("engenharia", -127, resultado);
   return testar(strcmp(resultado,"en") == 0, true);
}

float caso_de_teste05(){
   char resultado[10];
   dois_chars("engenharia", 9, resultado);
   return testar(strcmp(resultado,"en") == 0, true);
}

float caso_de_teste06(){
   char resultado[10] = "";
   dois_chars("banana", 9, resultado);
   return testar(strcmp(resultado,"ba") == 0, true);
}

float caso_de_teste07(){
   char resultado[10] = "";
   dois_chars("pera", 2, resultado);
   return testar(strcmp(resultado,"ra") == 0, true);
}

float caso_de_teste08(){
   char resultado[10] = "";
   dois_chars("morango", 3, resultado);
   return testar(strcmp(resultado,"an") == 0, true);
}

float caso_de_teste09(){
   char resultado[10] = "";
   dois_chars("morango", -3, resultado);
   return testar(strcmp(resultado,"mo") == 0, true);
}

float caso_de_teste10(){
   char resultado[10] = "";
   dois_chars("jaca", 3, resultado);
   return testar(strcmp(resultado,"ja") == 0, true);
}



//[]-------------------------------------------------------------[]
//    programa principal
//[]-------------------------------------------------------------[]
int main(){
   float r = 0.0;
   r += caso_de_teste01();
   r += caso_de_teste02();
   r += caso_de_teste03();
   r += caso_de_teste04();
   r += caso_de_teste05();
   r += caso_de_teste06();
   r += caso_de_teste07();
   r += caso_de_teste08();
   r += caso_de_teste09();
   r += caso_de_teste10();

   printf("exercicio 03\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
