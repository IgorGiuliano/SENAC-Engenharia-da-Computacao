//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex01.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 10/12/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>

//[]-------------------------------------------------------------[]
//   Função: potencia
//   Entrada: inteiros base e n.
//   Saída:   Calcule recursivamente (sem loops) o valor da
//            base elevada a potência de n, então potencia(3,2) é 9
//            (3 ao quadrado)
//
//   Ex.:
//       potencia(3, 1) = 3
//       potencia(3, 2) = 9
//       potencia(3, 3) = 27
//
//  obs: nao usar a função pow() da biblioteca math.h
//[]-------------------------------------------------------------[]
int potencia(int base, int n){
    if(n==0)
        return 1;
    else
        return (base*potencia(base,n-1));
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
   return testar(potencia(3,1), 3);
}

float caso_de_teste02(){
   return testar(potencia(3,2), 9);
}

float caso_de_teste03(){
   return testar(potencia(3,3), 27);
}

float caso_de_teste04(){
   return testar(potencia(3,0), 1);
}

float caso_de_teste05(){
   return testar(potencia(2,5), 32);
}

float caso_de_teste06(){
   return testar(potencia(2, 10), 1024);
}

float caso_de_teste07(){
   return testar(potencia(10, 2), 100);
}

float caso_de_teste08(){
   return testar(potencia(5,2), 25);
}

float caso_de_teste09(){
   return testar(potencia(2,7), 128);
}

float caso_de_teste10(){
   return testar(potencia(1000000,0), 1);
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

   printf("exercicio 08\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
