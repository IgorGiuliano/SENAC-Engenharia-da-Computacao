//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex05.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 08/10/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>


//[]-------------------------------------------------------------[]
//   Função: max2()
//   Entrada: dois ints, a e b
//   Saída: devolva o maior deles
//[]-------------------------------------------------------------[]
int max2(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

//[]-------------------------------------------------------------[]
//   Função: max3()
//   Entrada: tres ints, a, b e c
//   Saída: devolva o maior deles
//[]-------------------------------------------------------------[]
int max3(int a, int b, int c){
    if(a>b&&a>c)
        return a;
    else if(b>a&&b>c)
        return b;
    else if(c>b&&c>a)
        return c;
}


//[]-------------------------------------------------------------[]
//   Função: max4()
//   Entrada: quatro ints, a, b, c e d
//   Saída: devolva o maior deles
//[]-------------------------------------------------------------[]
int max4(int a, int b, int c, int d){
    if(a>b&&a>c&&a>d)
        return a;
    else if(b>a&&b>c&&b>d)
        return b;
    else if(c>b&&c>a&&c>d)
        return c;
    else if(d>b&&d>a&&d>c)
        return d;

}

//[]-------------------------------------------------------------[]
//   Função: max5()
//   Entrada: cinco ints, a, b, c, d, e
//   Saída: devolva o maior deles
//[]-------------------------------------------------------------[]
int max5(int a, int b, int c, int d, int e){
    if(a>=b&&a>=c&&a>=d&&a>=e)
        return a;
    else if(b>a&&b>c&&b>d&&b>e)
        return b;
    else if(c>b&&c>a&&c>d&&c>e)
        return c;
    else if(d>b&&d>a&&d>c&&d>e)
        return d;
    else if(e>b&&e>a&&e>c&&e>d)
        return e;
}

//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
int testar(int obtido, int esperado){
   int resultado;
   if (obtido == esperado){
	   printf("Parabéns !!!");
           resultado = 1;
   } else {
	   printf("Ainda não !!!");
           resultado = 0;
   }
   printf(" obtido: %d  esperado: %d\n", obtido, esperado);
   return resultado;
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
float caso_de_teste01(){
   float r = 0;
   r += testar(max2(1,2),2);
   r += testar(max2(3,2),3);
   r += testar(max2(5,-2),5);
   return r / 3.0;
}

float caso_de_teste02(){
   float r = 0;
   r += testar(max2(-1,-2),-1);
   r += testar(max2(-3,-2),-2);
   r += testar(max2(-5,-2),-2);
   return r / 3.0;
}

float caso_de_teste03(){
   float r = 0;
   r += testar(max3(10,3,2),10);
   r += testar(max3(1,30,2),30);
   r += testar(max3(10,3,20),20);
   return r / 3.0;
}

float caso_de_teste04(){
   float r = 0;
   r += testar(max3(10,3,max2(1,2)),10);
   r += testar(max3(1,max2(15,5),2),15);
   r += testar(max3(10,3,max2(15, 20)),20);
   return r / 3.0;
}

float caso_de_teste05(){
   float r = 0;
   r += testar(max3(-1,-2,-3),-1);
   r += testar(max3(-3,-2,0), 0);
   r += testar(max3(max2(1,2),max2(3,4), max2(5,6)),6);
   return r / 3.0;
}

float caso_de_teste06(){
   float r = 0;
   r += testar(max4(1,2,3,4), 4);
   r += testar(max4(2,3,4,1), 4);
   r += testar(max4(1,4,3,2), 4);
   return r / 3.0;
}

float caso_de_teste07(){
   float r = 0;
   r += testar(max4(max3(1,2,3),max3(4,5,6),max3(7,8,9),max3(10,11,12)), 12);
   r += testar(max4(-2,-3,-4,-1), -1);
   r += testar(max4(max4(1,2,3,5),4,max4(3,2,1,6),2), 6);
   return r / 3.0;
}

float caso_de_teste08(){
   float r = 0;
   r += testar(max5(1,2,3,4,5),5);
   r += testar(max5(5,2,3,1,2),5);
   r += testar(max5(3,4,2,5,1),5);
   return r / 3.0;
}

float caso_de_teste09(){
   float r = 0;
   r += testar(max5(-1,-2,-3,-4,-5),-1);
   r += testar(max5(5,5,5,5,5),5);
   r += testar(max5(3,3,2,2,1),3);
   return r / 3.0;
}

float caso_de_teste10(){
   float r = 0;
   r += testar(max5(-1,-2,-3,-4,-5),-1);
   r += testar(max5(5,5,5,5,5),5);
   r += testar(max5(max5(1,2,3,4,5),
                    max5(6,7,8,9,10),
                    max5(11,12,13,14,15),
                    max5(16,17,18,19,20),
                    max5(21,22,23,24,25)),25);
   return r / 3.0;
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

   printf("exercicio 05\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
