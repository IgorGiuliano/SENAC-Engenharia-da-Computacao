//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex01.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 10/12/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>

//[]-------------------------------------------------------------[]
//   Função: conta7
//   Entrada: inteiro n
//   Saída:   Devolva a contagem de ocorrências do dígito 7 em n
//            (recursivamente)
//
//
//   Ex.:
//       entrada: n = 176
//       saída: 1
//
//       entrada: n = 1776
//       saída: 2
//
//       entrada: n = 3737137
//       saida: 3
//[]-------------------------------------------------------------[]
int conta7(int n){
    int resp;
    if (n == 0)
        return 0;

    if (n%10 == 7)
        resp = 1;
    else
        resp = 0;
    return resp + conta7(n/10);
   return 0;
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
   return testar(conta7(176), 1);
}

float caso_de_teste02(){
   return testar(conta7(1776), 2);
}

float caso_de_teste03(){
   return testar(conta7(3737137), 3);
}

float caso_de_teste04(){
   return testar(conta7(333), 0);
}

float caso_de_teste05(){
   return testar(conta7(7), 1);
}

float caso_de_teste06(){
   return testar(conta7(171), 1);
}

float caso_de_teste07(){
   return testar(conta7(717), 2);
}

float caso_de_teste08(){
   return testar(conta7(786), 1);
}

float caso_de_teste09(){
   return testar(conta7(817732), 2);
}

float caso_de_teste10(){
   return testar(conta7(0), 0);
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

   printf("exercicio 07\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
