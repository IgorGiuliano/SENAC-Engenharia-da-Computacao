//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex01.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 10/12/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>



//[]-------------------------------------------------------------[]
//   Função: fatorial
//   Entrada: inteiro n
//   Saída:   Devolva o fatorial de n (recursivamente)
//
//
//   Ex.:
//       entrada: n = 1
//       saída: 1
//
//       entrada: n = 3
//       saída: 6
//
//       entrada: n = 4
//       saida: 24
//[]-------------------------------------------------------------[]
int fatorial(int n){
    int resp;
    if(n==0)
        resp=1;
    else
        resp=n*fatorial(n-1);
   return resp;
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
   return testar(fatorial(0), 1);
}

float caso_de_teste02(){
   return testar(fatorial(1), 1);
}

float caso_de_teste03(){
   return testar(fatorial(2), 2);
}

float caso_de_teste04(){
   return testar(fatorial(3), 6);
}

float caso_de_teste05(){
   return testar(fatorial(4), 24);
}

float caso_de_teste06(){
   return testar(fatorial(5), 120);
}

float caso_de_teste07(){
   return testar(fatorial(6), 720);
}

float caso_de_teste08(){
   return testar(fatorial(7), 5040);
}

float caso_de_teste09(){
   return testar(fatorial(8), 40320);
}

float caso_de_teste10(){
   return testar(fatorial(9), 362880);
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

   printf("exercicio 05\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
