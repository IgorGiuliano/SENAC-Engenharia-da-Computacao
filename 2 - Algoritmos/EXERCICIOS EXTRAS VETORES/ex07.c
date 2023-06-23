//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex07.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 03/09/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>



//[]-------------------------------------------------------------[]
//   Função: conta_numeros_perfeitos()
//   Entrada: vetor de inteiros v[] e o seu tamanho n, e inteiro x 
//   Saída:   devolve a quantidade de numeros perfeitos.
//       Numero perfeito eh todo numero natural que 
//       eh igual a soma de todos os seus divisores.
//
//       ex.: 
//          6 = 1 + 2 + 3
//          28 = 1 + 2 + 4 + 7
//          496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248 
//[]-------------------------------------------------------------[]
int conta_numeros_perfeitos(int v[], int n){
   // escreva o seu codigo aqui...	
   return 0;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
void testar(int obtido, int esperado){
   if (obtido == esperado)
	   printf("Parabéns !!!");
   else
	   printf("Ainda não !!!");
   printf(" obtido: %d  esperado: %d\n", obtido, esperado);
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
   int v[6] = {1,2,3,4,5,6};
   testar(conta_numeros_perfeitos(v, 6), 1);
}

void caso_de_teste02(){
   int v[10] = {2,7,6,4,5,9,28,7,10,2};
   testar(conta_numeros_perfeitos(v, 10), 2);
}

void caso_de_teste03(){
   int v[10] = {12,15,65,45,57,91,82,7,13,12};
   testar(conta_numeros_perfeitos(v, 10), 0);
}

void caso_de_teste04(){
   int v[7] = {21,20,49,28,57,20,22};
   testar(conta_numeros_perfeitos(v, 7), 1);
}

void caso_de_teste05(){
   int v[6] = {17,2,15,496,14,28};
   testar(conta_numeros_perfeitos(v, 6), 2);
}

void caso_de_teste06(){
   int v[10] = {1,8,7,3,2,5,4,9,6,3};
   testar(conta_numeros_perfeitos(v, 10), 1);
}

void caso_de_teste07(){
   int v[10] = {2,18,27,33,2,15,24,19,26,36};
   testar(conta_numeros_perfeitos(v, 10), 0);
}

void caso_de_teste08(){
   int v[10] = {6,28,496,8128,26,12,44,29,16,24};
   testar(conta_numeros_perfeitos(v, 10), 4);
}

void caso_de_teste09(){
   int v[10] = {33,28,21,37,29,25,22,29,6,24};
   testar(conta_numeros_perfeitos(v, 10), 2);
}

void caso_de_teste10(){
   int v[10] = {41,29,47,27,29,35,42,39,46,32};
   testar(conta_numeros_perfeitos(v, 10), 0);
}



//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
int main(){
   caso_de_teste01(); 
   caso_de_teste02(); 
   caso_de_teste03(); 
   caso_de_teste04(); 
   caso_de_teste05(); 
   caso_de_teste06(); 
   caso_de_teste07(); 
   caso_de_teste08(); 
   caso_de_teste09(); 
   caso_de_teste10(); 
   return 0;
}
