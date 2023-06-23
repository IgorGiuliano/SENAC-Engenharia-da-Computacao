//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex10.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 08/10/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"

//[]-------------------------------------------------------------[]
//   Função: eh_permutacao()
//   Entrada: vetor de inteiros v1[] e o seu tamanho n1,
//            vetor de inteiros v2[] e o seu tamanho n2.
//   Saída: devolve true se v1 é permutação de v2
//   Ex.:
//       {1,2,3,4,5} eh permutacao de {5,2,3,4,1}
//[]-------------------------------------------------------------[]
bool eh_permutacao(int v1[], int n1, int v2[], int n2){
    int contador=0;
		n2--;
    for(int i=0; i<n1;i++){
        if(v1[i]==v2[n2]){
            contador++;
        }
        n2--;
    }
    if(n1==contador){
        return true;
    }else if(n1!=contador){
        return false;
    }
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
   int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int v2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   return testar(eh_permutacao(v1, 10, v2, 10), false);
}

float caso_de_teste02(){
   int v1[10] = {32,28,21,37,29,25,22,29,17,24};
   int v2[10] = {32,28,21,37,29,25,22,29,17,24};
   return testar(eh_permutacao(v1, 10, v2, 10), false);
}

float caso_de_teste03(){
   int v1[10] = {1, 12, 15, 45, 57, 31, 22,  7, 3, 14};
   int v2[10] = {14, 3,  7, 22, 31, 57, 45, 15, 12, 1};
   return testar(eh_permutacao(v1, 10, v2, 10), true);
}

float caso_de_teste04(){
   int v1[10] = {41,28,47,27,29,35,26,39,46,32};
   int v2[10] = {41,18,47,27,29,35,26,39,46,32};
   return testar(eh_permutacao(v1, 10, v2, 10), false);
}

float caso_de_teste05(){
   int v1[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
   int v2[10] = { 1,  2,  3,  4,  5,  6,  7,  8,   9, 10};
   return testar(eh_permutacao(v1, 10, v2, 10), false);
}

float caso_de_teste06(){
   int v1[10] = {1,   8,  7,  3,  2,  5,  4,  9,  6, 0};
   int v2[10] = {30, 33, 36, 40, 33, 34, 35, 34, 37,39};
   return testar(eh_permutacao(v1, 10, v2, 10), false);
}

float caso_de_teste07(){
   int v1[10] = {0, 3, 6, 10, 13, 14, 15, 4, 7, 9};
   int v2[10] = {10, 13, 16, 20, 23, 24, 25, 14, 17,19};
  return  testar(eh_permutacao(v1, 10, v2, 10), false);
}

float caso_de_teste08(){
   int v1[10] = {32,28,47,13,26,12,4,29,16,14};
   int v2[10] = {10, 13, 16, 20, 23, 24, 25, 14, 17,19};
   return testar(eh_permutacao(v1, 10, v2, 10), false);
}

float caso_de_teste09(){
   int v1[10] = {2, 7, 6, 4, 5, 9, 8, 7, 10, 12};
   int v2[10] = {1, 3, 5, 4, 2, 6, 7, 8,  9, 10};
   return testar(eh_permutacao(v1, 10, v2, 10), false);
}

float caso_de_teste10(){
   int v1[10] = {0, 3, 6, 10, 13, 14, 15, 4, 7, 9};
   int v2[9]  = {3, 6, 10, 13, 14, 15, 4, 7, 9};
   return testar(eh_permutacao(v1, 10, v2, 9), false);
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

   printf("exercicio 10\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
