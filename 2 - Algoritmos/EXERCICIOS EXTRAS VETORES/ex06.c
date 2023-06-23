//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex06.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 03/09/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>


bool eh_palindromo(int x){
   int y = 0;
   int aux = x;

   while (aux > 0){
      y = y * 10 + aux % 10;
      aux = aux / 10;
   }
   return y == x;
}

//[]-------------------------------------------------------------[]
//   Função: conta_numeros_palindromos()
//   Entrada: vetor de inteiros v[] e o seu tamanho n, e inteiro x 
//   Saída:   devolve a quantidade de numeros palindromos.
//       Palindromos são numeros que podem ser lidos da
//       esquerda para a direita ou da direita para a esquerda
//       da mesma maneira.
//
//       ex.:  121, 313, 4, 55 ...
//[]-------------------------------------------------------------[]
int conta_numeros_palindromos(int v[], int n){
   int contador = 0;
   for (int i = 0; i < n; i++)
	if (eh_palindromo(v[i])){
	     contador++;
	}	     
   return contador;
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
   testar(conta_numeros_palindromos(v, 6), 6);
}

void caso_de_teste02(){
   int v[10] = {2,7,6,4,5,9,8,7,10,2};
   testar(conta_numeros_palindromos(v, 10), 9);
}

void caso_de_teste03(){
   int v[10] = {12,15,65,45,57,91,82,7,13,12};
   testar(conta_numeros_palindromos(v, 10), 1);
}

void caso_de_teste04(){
   int v[7] = {21,20,49,28,57,20,22};
   testar(conta_numeros_palindromos(v, 7), 1);
}

void caso_de_teste05(){
   int v[6] = {17,2,15,4,14,18};
   testar(conta_numeros_palindromos(v, 6), 2);
}

void caso_de_teste06(){
   int v[10] = {1,8,7,3,2,5,4,9,6,3};
   testar(conta_numeros_palindromos(v, 10), 10);
}

void caso_de_teste07(){
   int v[10] = {2,18,27,33,2,15,24,19,26,36};
   testar(conta_numeros_palindromos(v, 10), 3);
}

void caso_de_teste08(){
   int v[10] = {313,28,47,13,26,12,44,29,16,24};
   testar(conta_numeros_palindromos(v, 10), 2);
}

void caso_de_teste09(){
   int v[10] = {33,28,21,37,29,25,22,29,17,24};
   testar(conta_numeros_palindromos(v, 10), 2);
}

void caso_de_teste10(){
   int v[10] = {41,28,47,27,29,35,42,39,46,32};
   testar(conta_numeros_palindromos(v, 10), 0);
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
