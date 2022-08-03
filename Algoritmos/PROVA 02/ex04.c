//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex01.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 10/12/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>


//[]-------------------------------------------------------------[]
//   Função: particao (subalgoritmo do quicksort)
//   Entrada: vetor de números inteiros.
//            variáveis inicio, fim, onde o inicio é o índice do início do
//            subvetor, e fim é o índice do fim do subvetor
//   Saída:   Devolva a posição do pivo após a execução do partição
//
//
//   Ex.:
//       entrada: {5, 10, 6, 9, 4, 3, 7, 1, 2, 8}
//       saída: 0
//
//[]-------------------------------------------------------------[]
void troca(int v[],int i, int j){
    int aux = v[i];
    v[i]=v[j];
    v[j]=aux;
}

int particao(int v[], int inicio, int fim){
    int pivo = v[inicio];
    int i = inicio + 1;
    int j = fim;
    while(i<=j){
        if(v[i]<=pivo) i++;
        else if(v[j]>=pivo) j--;
        else if(i<=j){
            troca(v,i,j);
            i++; j--;
        }
    }
    troca(v, inicio, j);
    return j;
}

//[]-------------------------------------------------------------[]
//   Função: quicksort (algoritmo de ordenação)
//
//[]-------------------------------------------------------------[]

void quicksort(int v[], int inicio, int fim){
   if (inicio < fim){
      int j = particao(v, inicio, fim);
      quicksort(v, inicio, j-1);
      quicksort(v, j+1, fim);
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
   int v[10] = {5, 10, 6, 9, 4, 3, 7, 1, 2, 8};
   return testar(particao(v, 0, 9), 4);
}

float caso_de_teste02(){
   int v[10] = {5, 10, 6, 9, 4, 3, 7, 1, 2, 8};
   int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   float resultado = 0;
   quicksort(v, 0, 9);
   for (int i = 0; i < 10; i++)
      resultado += testar(v[i], v1[i]);

   return resultado/10.0;
}

float caso_de_teste03(){
   int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   return testar(particao(v, 0, 9), 0);
}

float caso_de_teste04(){
   int v[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
   return testar(particao(v, 0, 9), 9);
}

float caso_de_teste05(){
   int v[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
   int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   float resultado = 0;
   quicksort(v, 0, 9);
   for (int i = 0; i < 10; i++)
      resultado += testar(v[i], v1[i]);

   return resultado/10.0;
}

float caso_de_teste06(){
   int v[10] = {2, 10, 6, 9, 4, 3, 7, 1, 5, 8};
   return testar(particao(v, 0, 9), 1);
}

float caso_de_teste07(){
   int v[10] = {8, 1, 6, 9, 5, 3, 7, 10, 2, 4};
   return testar(particao(v, 0, 9), 7);
}

float caso_de_teste08(){
   int v[10] = {6, 10, 3, 9, 4, 5, 7, 1, 2, 8};
   return testar(particao(v, 0, 9), 5);
}

float caso_de_teste09(){
   int v[10] = {6, 10, 3, 9, 4, 5, 7, 1, 2, 8};
   int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   float resultado = 0;
   quicksort(v, 0, 9);
   for (int i = 0; i < 10; i++)
      resultado += testar(v[i], v1[i]);

   return resultado/10.0;
}

float caso_de_teste10(){
   int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   float resultado = 0;
   quicksort(v, 0, 9);
   for (int i = 0; i < 10; i++)
      resultado += testar(v[i], v1[i]);

   return resultado/10.0;
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

   printf("exercicio 04\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
