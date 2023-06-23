//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex06.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 10/12/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>

//[]-------------------------------------------------------------[]
//   Função: soma_digitos
//   Entrada: inteiro n
//   Saída:   Devolva o soma dos digitos de n (recursivamente)
//
//
//   Ex.:
//       entrada: n = 126
//       saída: 1+2+6 = 9
//
//       entrada: n = 345
//       saída: 3+4+5 = 12
//
//       entrada: n = 456
//       saida: 4+5+6 = 15
//[]-------------------------------------------------------------[]
int soma_digitos(int n){
    if (n % 10 == n)
        return n;
    return ((n % 10) + soma_digitos(n / 10));
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
   return testar(soma_digitos(126), 9);
}

float caso_de_teste02(){
   return testar(soma_digitos(345), 12);
}

float caso_de_teste03(){
   return testar(soma_digitos(456), 15);
}

float caso_de_teste04(){
   return testar(soma_digitos(333), 9);
}

float caso_de_teste05(){
   return testar(soma_digitos(444), 12);
}

float caso_de_teste06(){
   return testar(soma_digitos(551), 11);
}

float caso_de_teste07(){
   return testar(soma_digitos(616), 13);
}

float caso_de_teste08(){
   return testar(soma_digitos(786), 21);
}

float caso_de_teste09(){
   return testar(soma_digitos(81), 9);
}

float caso_de_teste10(){
   return testar(soma_digitos(90), 9);
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

   printf("exercicio 06\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
