//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex08.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 13/08/2020
//[]--------------------------------------------------------------[]

#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"
//[]-------------------------------------------------------------[]
//   Função: ultimo_digito()
//   Entrada: inteiros a e b, não negativos
//   Saída: devolve true se ele tem os mesmos ultimos digitos
//          ex: 57 e 27, tem o ultimo digito igual a 7
//[]-------------------------------------------------------------[]
bool ultimo_digito(int a, int b){
    if(a%10==b%10)
        return true;
    else
        return false;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
void testar(bool obtido, bool esperado){
   if (obtido == esperado)
	   printf("Parabéns !!!");
   else
	   printf("Ainda não !!!");
   printf(" obtido: %s  esperado: %s\n", btoa(obtido), btoa(esperado));
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
   testar(ultimo_digito(7,17), true);
}

void caso_de_teste02(){
   testar(ultimo_digito(6,17), false);
}

void caso_de_teste03(){
   testar(ultimo_digito(3,113), true);
}

void caso_de_teste04(){
   testar(ultimo_digito(114, 113), false);
}

void caso_de_teste05(){
   testar(ultimo_digito(114,4), true);
}

void caso_de_teste06(){
   testar(ultimo_digito(10,0), true);
}

void caso_de_teste07(){
   testar(ultimo_digito(11,0), false);
}

void caso_de_teste08(){
   testar(ultimo_digito(27,48), false);
}

void caso_de_teste09(){
   testar(ultimo_digito(50, 40), true);
}

void caso_de_teste10(){
   testar(ultimo_digito(57, 27), true);
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
