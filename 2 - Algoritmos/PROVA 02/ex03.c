//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex03.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 10/12/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>

//[]-------------------------------------------------------------[]
//   Função: conta11
//   Entrada: vetor de tamanho n que armazena números inteiros.
//            variável i que controla o índice o vetor na recursão
//
//   Saída:   Escreva um algoritmo recursivo que devolva quantas vezes
//            o número 11 aparece no vetor
//
//
//   Ex.:
//       entrada: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
//       saída: 0
//
//       entrada: {11, 21, 41, 41, 31, 11, 15, 17, 26, 18}
//       saída: 2
//[]-------------------------------------------------------------[]
int conta11(int v[], int n, int i){
int contador = 0;
   for (int i = 0; i< n; i++){
      if (v[i] == 11)
      contador += 1;
   }
   return contador;
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
   int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   return testar(conta11(v, 10, 0), 0);
}

float caso_de_teste02(){
   int v[10] = {11, 21, 41, 41, 31, 11, 15, 17, 26, 18};
   return testar(conta11(v, 10, 0), 2);
}

float caso_de_teste03(){
   int v[10] = {11, 11, 41, 41, 31, 11, 11, 17, 26, 18};
   return testar(conta11(v, 10, 0), 4);
}

float caso_de_teste04(){
   int v[10] = {11, 21, 41, 41, 31, 11, 15, 11, 26, 18};
   return testar(conta11(v, 10, 0), 3);
}

float caso_de_teste05(){
   int v[10] = {11, 21, 41, 41, 31, 10, 15, 17, 26, 18};
   return testar(conta11(v, 10, 0), 1);
}

float caso_de_teste06(){
   int v[10] = {11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
   return testar(conta11(v, 10, 0), 10);
}

float caso_de_teste07(){
   int v[10] = {11, 21, 41, 41, 31, 11, 11, 17, 11, 18};
   return testar(conta11(v, 10, 0), 4);
}

float caso_de_teste08(){
   int v[10] = {11, 11, 11, 11, 11, 12, 12, 12, 12, 12};
   return testar(conta11(v, 10, 0), 5);
}

float caso_de_teste09(){
   int v[10] = {11, 21, 11, 111, 1111, 11, 15, 17, 26, 18};
   return testar(conta11(v, 10, 0), 3);
}

float caso_de_teste10(){
   int v[10] = {11, 21, 41, 41, 31, 11, 10, 12, 11, 18};
   return testar(conta11(v, 10, 0), 3);
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
