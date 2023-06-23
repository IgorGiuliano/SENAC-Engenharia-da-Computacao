//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex06.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 08/10/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>


//[]-------------------------------------------------------------[]
//   Função: conta_notas_acima_da_media()
//   Entrada: vetor float de notas[] e o seu tamanho n
//   Saída:   devolve a quantidade de notas que são
//            maiores ou iguais a media.
//[]-------------------------------------------------------------[]
int conta_notas_acima_da_media(float notas[], int n){
    int cont=0;
    float total=0, media;
    for(int i=0; i<n;i++){
        total = total + notas[i];
    }
    media = total/n;
    for(int i=0; i<n;i++){
        if(notas[i]>=media)
            cont++;
    }
    return cont;
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
   float notas[6] = {7.3, 8.2, 3.1, 4.3, 5.55, 6.8};
   return testar(conta_notas_acima_da_media(notas, 6), 3);
}

float caso_de_teste02(){
   float notas[10] = {2.3, 7.6, 6.5, 4.1, 5.6, 9.2, 8.1, 7.0, 10.1, 2.2};
   return testar(conta_notas_acima_da_media(notas, 10), 6);
}

float caso_de_teste03(){
   float notas[10] = {10.1, 15.0, 65.0, 45.1, 57.1, 91.2, 82.2, 7.2, 13.2, 12.2};
   return testar(conta_notas_acima_da_media(notas, 10), 5);
}

float caso_de_teste04(){
   float notas[7] = {21.1, 20.1, 49.2, 28.3, 57.3, 20.2, 22.9};
   return testar(conta_notas_acima_da_media(notas, 7), 2);
}

float caso_de_teste05(){
   float notas[6] = {17.001, 2.1, 15.3, 4.3, 14.0, 18.0};
   return testar(conta_notas_acima_da_media(notas, 6), 4);
}

float caso_de_teste06(){
   float notas[10] = {1.9, 8.8, 7.7, 3.6, 2.5, 5.4, 4.3, 9.2, 6.1, 0.01};
   return testar(conta_notas_acima_da_media(notas, 10), 5);
}

float caso_de_teste07(){
   float notas[10] = {2.1,18.1,27.,3.3,2.,1.5,2.4,1.9,2.6,3.0};
   return testar(conta_notas_acima_da_media(notas, 10), 2);
}

float caso_de_teste08(){
   float notas[10] = {3.2,2.8,4.7,1.3,2.6,1.2,4.,2.9,1.6,1.4};
   return testar(conta_notas_acima_da_media(notas, 10), 6);
}

float caso_de_teste09(){
   float notas[10] = {3.2,2.8,0.21,3.7,2.9,2.5,2.2,2.9,1.7,2.4};
   return testar(conta_notas_acima_da_media(notas, 10), 6);
}

float caso_de_teste10(){
   float notas[10] = {4.1,2.8,4.7,2.7,2.9,3.5,2.6,3.9,4.6,3.2};
   return testar(conta_notas_acima_da_media(notas, 10), 5);
}



//[]-------------------------------------------------------------[]
//    programa principal
//[]-------------------------------------------------------------[]
int main(){
   float r = 0;
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

   printf("exercicio 06\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
