//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex01.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 08/10/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"

//[]-------------------------------------------------------------[]
//   Função: soma_maluca
//   Entrada: tres inteiros a, b e c
//   Saída: Se algum numero aparecer repetido ele nao conta na soma
//
//   Ex.:
//       soma_maluca(1, 2, 3) == 6
//       soma_maluca(3, 2, 3) == 2
//       soma_maluca(3, 3, 3) == 0
//[]-------------------------------------------------------------[]
int soma_maluca(int a, int b, int c){
    if(a==b&&b==c)
        return 0;
    else if(a==b)
        return c;
    else if(a==c)
        return b;
    else if(b==c)
        return a;
    else
        return a+b+c;
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
   return testar(soma_maluca(1, 2, 3), 6);
}

float caso_de_teste02(){
   return testar(soma_maluca(1, 2, 3), 6);
}

float caso_de_teste03(){
   return testar(soma_maluca(3, 2, 3), 2);
}

float caso_de_teste04(){
   return testar(soma_maluca(3, 3, 3), 0);
}

float caso_de_teste05(){
   return testar(soma_maluca(9, 2, 2), 9);
}

float caso_de_teste06(){
   return testar(soma_maluca(2, 2, 9), 9);
}

float caso_de_teste07(){
   return testar(soma_maluca(2, 9, 2), 9);
}

float caso_de_teste08(){
   return testar(soma_maluca(2, 9, 3), 14);
}

float caso_de_teste09(){
   return testar(soma_maluca(4, 2, 3), 9);
}

float caso_de_teste10(){
   return testar(soma_maluca(1, 3, 1), 3);
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

   printf("exercicio 01\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
