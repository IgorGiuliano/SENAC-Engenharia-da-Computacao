#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>

//    Programador: Igor Giuliano
//    Data: 28/10/2020

//[]-------------------------------------------------------------[]
//   Função: multiplicar()
//   Entrada: matriz a e b e suas dimensoes (linhas e colunas)
//   Saída:   a matriz resultante contendo a multiplicação entre a e b.
//[]-------------------------------------------------------------[]
void multiplicar(int matriz_resultante[10][10], int matriz_a[10][10], int matriz_b[10][10], int n){
    int somaprod = 0;
    for(int linha = 0; linha < 10; linha++){
        for(int coluna = 0; coluna < 10; coluna++){
            somaprod = 0;
            for(int i = 0; i < 10; i++){
                somaprod+=matriz_a[linha][i]*matriz_b[i][coluna];
                matriz_resultante[linha][coluna]=somaprod;
            }
        }
    }
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
float testar(int obtido, int esperado){
   float resultado = 0.0;
   if (obtido == esperado){
       printf("Parabéns !!!");
           resultado = 1.0;
   } else {
       printf("Ainda não !!!");
           resultado = 0.0;
   }
   printf(" obtido: %d  esperado: %d\n", obtido, esperado);
   assert(obtido == esperado);
   return resultado;
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]

float caso_de_teste01() {
	printf(" caso de teste 1 \n");
	int m0[10][10] = {{1,   5,   2,   4,   4,   4,   5,   3,   4,   4},
	                {2,   1,   2,   4,   2,   4,   5,   3,   5,   4},
	                {1,   4,   5,   4,   2,   1,   3,   4,   3,   5},
	                {5,   3,   2,   4,   4,   2,   4,   3,   4,   3},
	                {1,   5,   3,   5,   5,   1,   5,   4,   4,   4},
	                {2,   1,   4,   3,   2,   1,   3,   4,   1,   2},
	                {5,   3,   5,   3,   3,   5,   4,   1,   2,   4},
	                {5,   4,   5,   5,   3,   4,   5,   4,   2,   3},
	                {4,   5,   1,   3,   5,   2,   5,   2,   2,   2},
	                {4,   1,   1,   5,   1,   3,   4,   4,   4,   2}};

	int m1[10][10] = {{5,   4,   1,   1,   5,   3,   4,   1,   5,   5},
	                {2,   3,   1,   3,   4,   3,   1,   3,   2,   3},
	                {4,   5,   5,   3,   3,   3,   5,   2,   4,   2},
	                {1,   3,   3,   1,   1,   2,   3,   1,   2,   4},
	                {5,   5,   1,   2,   2,   1,   5,   2,   4,   3},
	                {4,   4,   4,   1,   4,   1,   3,   5,   5,   3},
	                {3,   5,   3,   5,   2,   3,   3,   1,   3,   1},
	                {4,   4,   1,   1,   5,   2,   1,   1,   4,   1},
	                {3,   4,   2,   2,   1,   5,   4,   1,   1,   3},
	                {3,   3,   4,   5,   5,   5,   4,   2,   5,   1}};

    int resultado[10][10];
	float r = 0.0;

	multiplicar(resultado, m0, m1, 10);
	r += testar(resultado[0][0], 114);
	r += testar(resultado[0][1], 142);
	r += testar(resultado[0][2], 90);
	r += testar(resultado[0][3], 94);
	r += testar(resultado[0][4], 108);
	r += testar(resultado[0][5], 101);
	r += testar(resultado[0][6], 113);
	r += testar(resultado[0][7], 72);
	r += testar(resultado[0][8], 118);
	r += testar(resultado[0][9], 88);
	r += testar(resultado[1][0], 104);
	r += testar(resultado[1][1], 128);
	r += testar(resultado[1][2], 87);
	r += testar(resultado[1][3], 81);
	r += testar(resultado[1][4], 94);
	r += testar(resultado[1][5], 95);
	r += testar(resultado[1][6], 107);
	r += testar(resultado[1][7], 58);
	r += testar(resultado[1][8], 108);
	r += testar(resultado[1][9], 78);
	r += testar(resultado[2][0], 100);
	r += testar(resultado[2][1], 125);
	r += testar(resultado[2][2], 87);
	r += testar(resultado[2][3], 87);
	r += testar(resultado[2][4], 102);
	r += testar(resultado[2][5], 98);
	r += testar(resultado[2][6], 103);
	r += testar(resultado[2][7], 56);
	r += testar(resultado[2][8], 107);
	r += testar(resultado[2][9], 73);
	r += testar(resultado[3][0], 116);
	r += testar(resultado[3][1], 136);
	r += testar(resultado[3][2], 77);
	r += testar(resultado[3][3], 80);
	r += testar(resultado[3][4], 105);
	r += testar(resultado[3][5], 97);
	r += testar(resultado[3][6], 114);
	r += testar(resultado[3][7], 57);
	r += testar(resultado[3][8], 116);
	r += testar(resultado[3][9], 94);
	r += testar(resultado[4][0], 116);
	r += testar(resultado[4][1], 147);
	r += testar(resultado[4][2], 88);
	r += testar(resultado[4][3], 98);
	r += testar(resultado[4][4], 107);
	r += testar(resultado[4][5], 106);
	r += testar(resultado[4][6], 118);
	r += testar(resultado[4][7], 63);
	r += testar(resultado[4][8], 117);
	r += testar(resultado[4][9], 89);
	r += testar(resultado[5][0], 79);
	r += testar(resultado[5][1], 95);
	r += testar(resultado[5][2], 61);
	r += testar(resultado[5][3], 56);
	r += testar(resultado[5][4], 74);
	r += testar(resultado[5][5], 62);
	r += testar(resultado[5][6], 76);
	r += testar(resultado[5][7], 37);
	r += testar(resultado[5][8], 83);
	r += testar(resultado[5][9], 54);
	r += testar(resultado[6][0], 123);
	r += testar(resultado[6][1], 142);
	r += testar(resultado[6][2], 98);
	r += testar(resultado[6][3], 88);
	r += testar(resultado[6][4], 116);
	r += testar(resultado[6][5], 97);
	r += testar(resultado[6][6], 124);
	r += testar(resultado[6][7], 73);
	r += testar(resultado[6][8], 132);
	r += testar(resultado[6][9], 95);
	r += testar(resultado[7][0], 135);
	r += testar(resultado[7][1], 161);
	r += testar(resultado[7][2], 103);
	r += testar(resultado[7][3], 95);
	r += testar(resultado[7][4], 130);
	r += testar(resultado[7][5], 107);
	r += testar(resultado[7][6], 130);
	r += testar(resultado[7][7], 75);
	r += testar(resultado[7][8], 143);
	r += testar(resultado[7][9], 106);
	r += testar(resultado[8][0], 105);
	r += testar(resultado[8][1], 125);
	r += testar(resultado[8][2], 65);
	r += testar(resultado[8][3], 78);
	r += testar(resultado[8][4], 96);
	r += testar(resultado[8][5], 82);
	r += testar(resultado[8][6], 99);
	r += testar(resultado[8][7], 57);
	r += testar(resultado[8][8], 105);
	r += testar(resultado[8][9], 85);
	r += testar(resultado[9][0], 94);
	r += testar(resultado[9][1], 114);
	r += testar(resultado[9][2], 70);
	r += testar(resultado[9][3], 62);
	r += testar(resultado[9][4], 88);
	r += testar(resultado[9][5], 82);
	r += testar(resultado[9][6], 91);
	r += testar(resultado[9][7], 47);
	r += testar(resultado[9][8], 97);
	r += testar(resultado[9][9], 79);

    return r/100.0;
}

float caso_de_teste02() {
	printf(" caso de teste 2 \n");
	int m0[10][10] = {{1,   3,   4,   5,   2,   4,   4,   5,   2,   2},
	                {5,   3,   3,   5,   4,   2,   3,   5,   5,   5},
	                {2,   3,   3,   2,   1,   5,   1,   1,   1,   4},
	                {1,   3,   3,   4,   2,   4,   5,   2,   5,   1},
	                {4,   4,   3,   3,   3,   3,   4,   2,   4,   4},
	                {2,   5,   3,   4,   3,   5,   5,   4,   1,   5},
	                {4,   3,   2,   1,   4,   5,   4,   3,   2,   3},
	                {3,   2,   4,   2,   4,   3,   5,   4,   5,   3},
	                {4,   1,   5,   3,   1,   2,   3,   1,   5,   5},
	                {2,   3,   2,   1,   5,   5,   5,   5,   2,   3}};

	int m1[10][10] = {{2,   3,   5,   4,   2,   1,   4,   1,   1,   5},
	                {3,   2,   3,   5,   1,   2,   1,   2,   3,   5},
	                {3,   4,   5,   1,   5,   1,   4,   1,   2,   4},
	                {4,   4,   3,   3,   4,   2,   3,   4,   2,   5},
	                {3,   4,   1,   2,   5,   3,   1,   2,   1,   3},
	                {2,   4,   1,   1,   1,   5,   2,   4,   2,   5},
	                {4,   5,   3,   2,   2,   3,   5,   1,   2,   3},
	                {2,   1,   1,   4,   3,   3,   1,   3,   1,   2},
	                {2,   2,   2,   2,   3,   2,   3,   1,   5,   4},
	                {5,   1,   4,   3,   2,   2,   2,   3,   5,   5}};

    int resultado[10][10];
	float r = 0.0;

	multiplicar(resultado, m0, m1, 10);
	r += testar(resultado[0][0], 97);
	r += testar(resultado[0][1], 100);
	r += testar(resultado[0][2], 84);
	r += testar(resultado[0][3], 84);
	r += testar(resultado[0][4], 92);
	r += testar(resultado[0][5], 82);
	r += testar(resultado[0][6], 83);
	r += testar(resultado[0][7], 78);
	r += testar(resultado[0][8], 71);
	r += testar(resultado[0][9], 127);
	r += testar(resultado[1][0], 121);
	r += testar(resultado[1][1], 112);
	r += testar(resultado[1][2], 114);
	r += testar(resultado[1][3], 114);
	r += testar(resultado[1][4], 116);
	r += testar(resultado[1][5], 90);
	r += testar(resultado[1][6], 103);
	r += testar(resultado[1][7], 88);
	r += testar(resultado[1][8], 99);
	r += testar(resultado[1][9], 163);
	r += testar(resultado[2][0], 71);
	r += testar(resultado[2][1], 68);
	r += testar(resultado[2][2], 68);
	r += testar(resultado[2][3], 59);
	r += testar(resultado[2][4], 56);
	r += testar(resultado[2][5], 59);
	r += testar(resultado[2][6], 57);
	r += testar(resultado[2][7], 58);
	r += testar(resultado[2][8], 60);
	r += testar(resultado[2][9], 104);
	r += testar(resultado[3][0], 89);
	r += testar(resultado[3][1], 99);
	r += testar(resultado[3][2], 78);
	r += testar(resultado[3][3], 73);
	r += testar(resultado[3][4], 83);
	r += testar(resultado[3][5], 77);
	r += testar(resultado[3][6], 85);
	r += testar(resultado[3][7], 65);
	r += testar(resultado[3][8], 76);
	r += testar(resultado[3][9], 122);
	r += testar(resultado[4][0], 104);
	r += testar(resultado[4][1], 102);
	r += testar(resultado[4][2], 100);
	r += testar(resultado[4][3], 93);
	r += testar(resultado[4][4], 91);
	r += testar(resultado[4][5], 79);
	r += testar(resultado[4][6], 92);
	r += testar(resultado[4][7], 71);
	r += testar(resultado[4][8], 87);
	r += testar(resultado[4][9], 143);
	r += testar(resultado[5][0], 118);
	r += testar(resultado[5][1], 112);
	r += testar(resultado[5][2], 101);
	r += testar(resultado[5][3], 102);
	r += testar(resultado[5][4], 95);
	r += testar(resultado[5][5], 96);
	r += testar(resultado[5][6], 92);
	r += testar(resultado[5][7], 90);
	r += testar(resultado[5][8], 88);
	r += testar(resultado[5][9], 153);
	r += testar(resultado[6][0], 90);
	r += testar(resultado[6][1], 96);
	r += testar(resultado[6][2], 82);
	r += testar(resultado[6][3], 82);
	r += testar(resultado[6][4], 79);
	r += testar(resultado[6][5], 82);
	r += testar(resultado[6][6], 79);
	r += testar(resultado[6][7], 68);
	r += testar(resultado[6][8], 69);
	r += testar(resultado[6][9], 126);
	r += testar(resultado[7][0], 103);
	r += testar(resultado[7][1], 107);
	r += testar(resultado[7][2], 95);
	r += testar(resultado[7][3], 88);
	r += testar(resultado[7][4], 102);
	r += testar(resultado[7][5], 85);
	r += testar(resultado[7][6], 96);
	r += testar(resultado[7][7], 70);
	r += testar(resultado[7][8], 85);
	r += testar(resultado[7][9], 136);
	r += testar(resultado[8][0], 94);
	r += testar(resultado[8][1], 89);
	r += testar(resultado[8][2], 100);
	r += testar(resultado[8][3], 74);
	r += testar(resultado[8][4], 87);
	r += testar(resultado[8][5], 62);
	r += testar(resultado[8][6], 92);
	r += testar(resultado[8][7], 59);
	r += testar(resultado[8][8], 85);
	r += testar(resultado[8][9], 129);
	r += testar(resultado[9][0], 97);
	r += testar(resultado[9][1], 101);
	r += testar(resultado[9][2], 78);
	r += testar(resultado[9][3], 86);
	r += testar(resultado[9][4], 88);
	r += testar(resultado[9][5], 92);
	r += testar(resultado[9][6], 79);
	r += testar(resultado[9][7], 75);
	r += testar(resultado[9][8], 72);
	r += testar(resultado[9][9], 126);

    return r/100.0;
}

float caso_de_teste03() {
	printf(" caso de teste 3 \n");
	int m0[10][10] = {{5,   5,   2,   4,   4,   1,   2,   4,   3,   1},
	                {5,   3,   3,   2,   3,   2,   2,   1,   2,   1},
	                {2,   3,   5,   1,   3,   4,   1,   2,   4,   1},
	                {2,   3,   2,   1,   3,   2,   1,   4,   5,   4},
	                {4,   1,   3,   3,   3,   2,   2,   1,   2,   3},
	                {3,   3,   2,   2,   5,   1,   2,   1,   2,   5},
	                {3,   4,   4,   5,   1,   1,   3,   1,   1,   3},
	                {1,   4,   3,   3,   2,   5,   5,   5,   2,   3},
	                {4,   1,   3,   5,   4,   2,   3,   5,   4,   4},
	                {1,   4,   4,   4,   5,   4,   1,   2,   2,   1}};

	int m1[10][10] = {{1,   1,   5,   2,   3,   3,   3,   4,   4,   4},
	                {4,   4,   1,   2,   3,   4,   4,   3,   1,   2},
	                {5,   2,   3,   2,   1,   4,   3,   3,   3,   5},
	                {1,   5,   2,   5,   1,   5,   4,   5,   5,   4},
	                {5,   3,   3,   1,   5,   5,   1,   3,   2,   3},
	                {1,   2,   4,   3,   5,   1,   4,   2,   4,   3},
	                {3,   1,   2,   2,   2,   4,   3,   1,   1,   2},
	                {4,   5,   5,   3,   2,   1,   2,   3,   3,   1},
	                {5,   1,   4,   1,   3,   3,   1,   3,   1,   1},
	                {5,   3,   1,   3,   1,   3,   4,   3,   3,   4}};

    int resultado[10][10];
	float r = 0.0;

	multiplicar(resultado, m0, m1, 10);
	r += testar(resultado[0][0], 102);
	r += testar(resultado[0][1], 91);
	r += testar(resultado[0][2], 97);
	r += testar(resultado[0][3], 73);
	r += testar(resultado[0][4], 83);
	r += testar(resultado[0][5], 108);
	r += testar(resultado[0][6], 86);
	r += testar(resultado[0][7], 101);
	r += testar(resultado[0][8], 83);
	r += testar(resultado[0][9], 86);
	r += testar(resultado[1][0], 76);
	r += testar(resultado[1][1], 58);
	r += testar(resultado[1][2], 76);
	r += testar(resultado[1][3], 53);
	r += testar(resultado[1][4], 67);
	r += testar(resultado[1][5], 84);
	r += testar(resultado[1][6], 69);
	r += testar(resultado[1][7], 75);
	r += testar(resultado[1][8], 66);
	r += testar(resultado[1][9], 75);
	r += testar(resultado[2][0], 95);
	r += testar(resultado[2][1], 64);
	r += testar(resultado[2][2], 84);
	r += testar(resultado[2][3], 55);
	r += testar(resultado[2][4], 75);
	r += testar(resultado[2][5], 83);
	r += testar(resultado[2][6], 71);
	r += testar(resultado[2][7], 76);
	r += testar(resultado[2][8], 67);
	r += testar(resultado[2][9], 76);
	r += testar(resultado[3][0], 106);
	r += testar(resultado[3][1], 74);
	r += testar(resultado[3][2], 84);
	r += testar(resultado[3][3], 59);
	r += testar(resultado[3][4], 72);
	r += testar(resultado[3][5], 83);
	r += testar(resultado[3][6], 71);
	r += testar(resultado[3][7], 81);
	r += testar(resultado[3][8], 66);
	r += testar(resultado[3][9], 70);
	r += testar(resultado[4][0], 78);
	r += testar(resultado[4][1], 60);
	r += testar(resultado[4][2], 73);
	r += testar(resultado[4][3], 58);
	r += testar(resultado[4][4], 61);
	r += testar(resultado[4][5], 84);
	r += testar(resultado[4][6], 70);
	r += testar(resultado[4][7], 76);
	r += testar(resultado[4][8], 71);
	r += testar(resultado[4][9], 79);
	r += testar(resultado[5][0], 98);
	r += testar(resultado[5][1], 70);
	r += testar(resultado[5][2], 69);
	r += testar(resultado[5][3], 58);
	r += testar(resultado[5][4], 69);
	r += testar(resultado[5][5], 95);
	r += testar(resultado[5][6], 74);
	r += testar(resultado[5][7], 80);
	r += testar(resultado[5][8], 67);
	r += testar(resultado[5][9], 81);
	r += testar(resultado[6][0], 83);
	r += testar(resultado[6][1], 75);
	r += testar(resultado[6][2], 66);
	r += testar(resultado[6][3], 70);
	r += testar(resultado[6][4], 54);
	r += testar(resultado[6][5], 97);
	r += testar(resultado[6][6], 86);
	r += testar(resultado[6][7], 84);
	r += testar(resultado[6][8], 75);
	r += testar(resultado[6][9], 86);
	r += testar(resultado[7][0], 110);
	r += testar(resultado[7][1], 95);
	r += testar(resultado[7][2], 96);
	r += testar(resultado[7][3], 84);
	r += testar(resultado[7][4], 85);
	r += testar(resultado[7][5], 101);
	r += testar(resultado[7][6], 101);
	r += testar(resultado[7][7], 91);
	r += testar(resultado[7][8], 87);
	r += testar(resultado[7][9], 89);
	r += testar(resultado[8][0], 119);
	r += testar(resultado[8][1], 99);
	r += testar(resultado[8][2], 111);
	r += testar(resultado[8][3], 88);
	r += testar(resultado[8][4], 85);
	r += testar(resultado[8][5], 116);
	r += testar(resultado[8][6], 96);
	r += testar(resultado[8][7], 111);
	r += testar(resultado[8][8], 101);
	r += testar(resultado[8][9], 102);
	r += testar(resultado[9][0], 96);
	r += testar(resultado[9][1], 84);
	r += testar(resultado[9][2], 81);
	r += testar(resultado[9][3], 68);
	r += testar(resultado[9][4], 81);
	r += testar(resultado[9][5], 99);
	r += testar(resultado[9][6], 81);
	r += testar(resultado[9][7], 87);
	r += testar(resultado[9][8], 78);
	r += testar(resultado[9][9], 85);

    return r/100.0;
}

float caso_de_teste04() {
	printf(" caso de teste 4 \n");
	int m0[10][10] = {{3,   4,   5,   1,   3,   1,   5,   5,   4,   1},
	                {1,   3,   1,   4,   4,   2,   3,   3,   3,   3},
	                {2,   3,   2,   1,   4,   2,   4,   5,   3,   1},
	                {5,   2,   1,   4,   5,   3,   2,   4,   4,   2},
	                {4,   2,   2,   1,   5,   2,   4,   5,   4,   3},
	                {4,   3,   1,   5,   5,   1,   1,   3,   2,   1},
	                {3,   2,   2,   3,   2,   1,   1,   5,   1,   1},
	                {2,   1,   2,   3,   1,   4,   4,   2,   5,   4},
	                {1,   3,   1,   1,   3,   1,   3,   5,   3,   5},
	                {5,   3,   3,   4,   5,   4,   4,   2,   4,   2}};

	int m1[10][10] = {{5,   4,   3,   5,   3,   3,   4,   4,   5,   5},
	                {2,   2,   1,   1,   5,   2,   5,   1,   1,   5},
	                {2,   3,   5,   4,   5,   2,   5,   4,   5,   1},
	                {1,   2,   1,   1,   3,   5,   5,   3,   4,   4},
	                {2,   5,   1,   4,   1,   2,   5,   2,   4,   1},
	                {3,   3,   5,   2,   1,   2,   5,   1,   5,   2},
	                {3,   2,   5,   3,   2,   2,   2,   1,   4,   5},
	                {2,   3,   2,   2,   1,   4,   5,   3,   5,   4},
	                {5,   5,   1,   4,   3,   1,   5,   3,   3,   1},
	                {1,   5,   3,   5,   4,   1,   3,   1,   4,   1}};

    int resultado[10][10];
	float r = 0.0;

	multiplicar(resultado, m0, m1, 10);
	r += testar(resultado[0][0], 89);
	r += testar(resultado[0][1], 105);
	r += testar(resultado[0][2], 89);
	r += testar(resultado[0][3], 100);
	r += testar(resultado[0][4], 92);
	r += testar(resultado[0][5], 75);
	r += testar(resultado[0][6], 140);
	r += testar(resultado[0][7], 79);
	r += testar(resultado[0][8], 126);
	r += testar(resultado[0][9], 99);
	r += testar(resultado[1][0], 64);
	r += testar(resultado[1][1], 92);
	r += testar(resultado[1][2], 62);
	r += testar(resultado[1][3], 78);
	r += testar(resultado[1][4], 71);
	r += testar(resultado[1][5], 67);
	r += testar(resultado[1][6], 119);
	r += testar(resultado[1][7], 57);
	r += testar(resultado[1][8], 103);
	r += testar(resultado[1][9], 78);
	r += testar(resultado[2][0], 73);
	r += testar(resultado[2][1], 91);
	r += testar(resultado[2][2], 70);
	r += testar(resultado[2][3], 81);
	r += testar(resultado[2][4], 66);
	r += testar(resultado[2][5], 65);
	r += testar(resultado[2][6], 119);
	r += testar(resultado[2][7], 61);
	r += testar(resultado[2][8], 107);
	r += testar(resultado[2][9], 83);
	r += testar(resultado[3][0], 90);
	r += testar(resultado[3][1], 115);
	r += testar(resultado[3][2], 74);
	r += testar(resultado[3][3], 101);
	r += testar(resultado[3][4], 78);
	r += testar(resultado[3][5], 83);
	r += testar(resultado[3][6], 145);
	r += testar(resultado[3][7], 79);
	r += testar(resultado[3][8], 131);
	r += testar(resultado[3][9], 95);
	r += testar(resultado[4][0], 90);
	r += testar(resultado[4][1], 117);
	r += testar(resultado[4][2], 83);
	r += testar(resultado[4][3], 108);
	r += testar(resultado[4][4], 79);
	r += testar(resultado[4][5], 74);
	r += testar(resultado[4][6], 138);
	r += testar(resultado[4][7], 75);
	r += testar(resultado[4][8], 131);
	r += testar(resultado[4][9], 92);
	r += testar(resultado[5][0], 66);
	r += testar(resultado[5][1], 89);
	r += testar(resultado[5][2], 51);
	r += testar(resultado[5][3], 76);
	r += testar(resultado[5][4], 68);
	r += testar(resultado[5][5], 74);
	r += testar(resultado[5][6], 121);
	r += testar(resultado[5][7], 66);
	r += testar(resultado[5][8], 102);
	r += testar(resultado[5][9], 83);
	r += testar(resultado[6][0], 52);
	r += testar(resultado[6][1], 68);
	r += testar(resultado[6][2], 50);
	r += testar(resultado[6][3], 60);
	r += testar(resultado[6][4], 55);
	r += testar(resultado[6][5], 62);
	r += testar(resultado[6][6], 97);
	r += testar(resultado[6][7], 56);
	r += testar(resultado[6][8], 88);
	r += testar(resultado[6][9], 70);
	r += testar(resultado[7][0], 78);
	r += testar(resultado[7][1], 98);
	r += testar(resultado[7][2], 82);
	r += testar(resultado[7][3], 90);
	r += testar(resultado[7][4], 76);
	r += testar(resultado[7][5], 62);
	r += testar(resultado[7][6], 118);
	r += testar(resultado[7][7], 61);
	r += testar(resultado[7][8], 114);
	r += testar(resultado[7][9], 75);
	r += testar(resultado[8][0], 62);
	r += testar(resultado[8][1], 94);
	r += testar(resultado[8][2], 63);
	r += testar(resultado[8][3], 83);
	r += testar(resultado[8][4], 70);
	r += testar(resultado[8][5], 58);
	r += testar(resultado[8][6], 110);
	r += testar(resultado[8][7], 53);
	r += testar(resultado[8][8], 100);
	r += testar(resultado[8][9], 73);
	r += testar(resultado[9][0], 101);
	r += testar(resultado[9][1], 124);
	r += testar(resultado[9][2], 96);
	r += testar(resultado[9][3], 114);
	r += testar(resultado[9][4], 96);
	r += testar(resultado[9][5], 87);
	r += testar(resultado[9][6], 159);
	r += testar(resultado[9][7], 85);
	r += testar(resultado[9][8], 145);
	r += testar(resultado[9][9], 106);

    return r/100.0;
}

float caso_de_teste05() {
	printf(" caso de teste 5 \n");
	int m0[10][10] = {{1,   4,   4,   1,   3,   3,   5,   5,   3,   4},
	                {4,   5,   1,   4,   4,   5,   4,   2,   4,   3},
	                {5,   1,   5,   3,   2,   2,   5,   5,   5,   2},
	                {1,   1,   2,   1,   1,   5,   3,   2,   1,   2},
	                {3,   1,   2,   3,   4,   2,   4,   2,   5,   2},
	                {1,   4,   2,   2,   3,   4,   3,   3,   3,   5},
	                {1,   5,   5,   3,   5,   2,   4,   5,   4,   4},
	                {1,   1,   1,   4,   5,   5,   5,   3,   3,   4},
	                {1,   4,   5,   2,   5,   2,   2,   5,   1,   2},
	                {4,   2,   3,   5,   4,   3,   1,   2,   4,   1}};

	int m1[10][10] = {{3,   3,   2,   3,   4,   1,   5,   3,   2,   5},
	                {3,   5,   5,   3,   2,   4,   2,   2,   1,   1},
	                {5,   3,   1,   4,   2,   5,   2,   2,   2,   5},
	                {1,   1,   4,   5,   1,   4,   2,   5,   1,   3},
	                {4,   4,   4,   5,   1,   1,   4,   4,   2,   1},
	                {4,   4,   3,   1,   2,   2,   2,   5,   5,   5},
	                {1,   1,   3,   4,   2,   3,   3,   3,   2,   5},
	                {2,   3,   3,   1,   2,   5,   1,   2,   3,   4},
	                {5,   1,   2,   4,   3,   3,   2,   4,   5,   2},
	                {1,   5,   4,   3,   1,   5,   5,   5,   4,   1}};

    int resultado[10][10];
	float r = 0.0;

	multiplicar(resultado, m0, m1, 10);
	r += testar(resultado[0][0], 94);
	r += testar(resultado[0][1], 103);
	r += testar(resultado[0][2], 103);
	r += testar(resultado[0][3], 103);
	r += testar(resultado[0][4], 63);
	r += testar(resultado[0][5], 119);
	r += testar(resultado[0][6], 87);
	r += testar(resultado[0][7], 108);
	r += testar(resultado[0][8], 92);
	r += testar(resultado[0][9], 105);
	r += testar(resultado[1][0], 103);
	r += testar(resultado[1][1], 109);
	r += testar(resultado[1][2], 119);
	r += testar(resultado[1][3], 119);
	r += testar(resultado[1][4], 73);
	r += testar(resultado[1][5], 108);
	r += testar(resultado[1][6], 103);
	r += testar(resultado[1][7], 132);
	r += testar(resultado[1][8], 98);
	r += testar(resultado[1][9], 110);
	r += testar(resultado[2][0], 104);
	r += testar(resultado[2][1], 89);
	r += testar(resultado[2][2], 94);
	r += testar(resultado[2][3], 116);
	r += testar(resultado[2][4], 78);
	r += testar(resultado[2][5], 117);
	r += testar(resultado[2][6], 95);
	r += testar(resultado[2][7], 115);
	r += testar(resultado[2][8], 96);
	r += testar(resultado[2][9], 129);
	r += testar(resultado[3][0], 55);
	r += testar(resultado[3][1], 59);
	r += testar(resultado[3][2], 57);
	r += testar(resultado[3][3], 53);
	r += testar(resultado[3][4], 37);
	r += testar(resultado[3][5], 62);
	r += testar(resultado[3][6], 50);
	r += testar(resultado[3][7], 70);
	r += testar(resultado[3][8], 60);
	r += testar(resultado[3][9], 72);
	r += testar(resultado[4][0], 84);
	r += testar(resultado[4][1], 72);
	r += testar(resultado[4][2], 83);
	r += testar(resultado[4][3], 101);
	r += testar(resultado[4][4], 58);
	r += testar(resultado[4][5], 84);
	r += testar(resultado[4][6], 81);
	r += testar(resultado[4][7], 102);
	r += testar(resultado[4][8], 79);
	r += testar(resultado[4][9], 89);
	r += testar(resultado[5][0], 84);
	r += testar(resultado[5][1], 99);
	r += testar(resultado[5][2], 100);
	r += testar(resultado[5][3], 94);
	r += testar(resultado[5][4], 55);
	r += testar(resultado[5][5], 104);
	r += testar(resultado[5][6], 84);
	r += testar(resultado[5][7], 109);
	r += testar(resultado[5][8], 88);
	r += testar(resultado[5][9], 86);
	r += testar(resultado[6][0], 112);
	r += testar(resultado[6][1], 117);
	r += testar(resultado[6][2], 121);
	r += testar(resultado[6][3], 129);
	r += testar(resultado[6][4], 70);
	r += testar(resultado[6][5], 136);
	r += testar(resultado[6][6], 100);
	r += testar(resultado[6][7], 126);
	r += testar(resultado[6][8], 99);
	r += testar(resultado[6][9], 111);
	r += testar(resultado[7][0], 85);
	r += testar(resultado[7][1], 92);
	r += testar(resultado[7][2], 105);
	r += testar(resultado[7][3], 107);
	r += testar(resultado[7][4], 56);
	r += testar(resultado[7][5], 100);
	r += testar(resultado[7][6], 91);
	r += testar(resultado[7][7], 125);
	r += testar(resultado[7][8], 94);
	r += testar(resultado[7][9], 100);
	r += testar(resultado[8][0], 89);
	r += testar(resultado[8][1], 96);
	r += testar(resultado[8][2], 92);
	r += testar(resultado[8][3], 95);
	r += testar(resultado[8][4], 52);
	r += testar(resultado[8][5], 103);
	r += testar(resultado[8][6], 74);
	r += testar(resultado[8][7], 91);
	r += testar(resultado[8][8], 70);
	r += testar(resultado[8][9], 89);
	r += testar(resultado[9][0], 92);
	r += testar(resultado[9][1], 80);
	r += testar(resultado[9][2], 87);
	r += testar(resultado[9][3], 103);
	r += testar(resultado[9][4], 60);
	r += testar(resultado[9][5], 87);
	r += testar(resultado[9][6], 80);
	r += testar(resultado[9][7], 106);
	r += testar(resultado[9][8], 76);
	r += testar(resultado[9][9], 93);

    return r/100.0;
}

float caso_de_teste06() {
	printf(" caso de teste 6 \n");
	int m0[10][10] = {{1,   2,   2,   2,   1,   4,   2,   2,   4,   2},
	                {1,   4,   1,   2,   5,   4,   4,   3,   2,   1},
	                {4,   1,   3,   2,   4,   1,   2,   4,   3,   5},
	                {4,   3,   2,   5,   1,   2,   1,   2,   3,   1},
	                {5,   5,   1,   5,   2,   1,   5,   5,   5,   3},
	                {5,   4,   1,   4,   2,   4,   4,   3,   4,   3},
	                {3,   3,   5,   1,   4,   2,   4,   1,   3,   1},
	                {2,   4,   1,   2,   3,   4,   4,   3,   3,   1},
	                {2,   4,   1,   2,   2,   2,   2,   3,   4,   1},
	                {2,   3,   3,   4,   3,   3,   5,   1,   4,   5}};

	int m1[10][10] = {{5,   1,   1,   2,   3,   3,   4,   3,   1,   3},
	                {5,   4,   4,   5,   1,   2,   1,   4,   1,   2},
	                {3,   1,   4,   2,   1,   5,   1,   5,   4,   3},
	                {2,   3,   3,   4,   5,   2,   1,   3,   5,   2},
	                {2,   1,   2,   5,   3,   4,   4,   3,   2,   4},
	                {1,   1,   1,   1,   2,   4,   3,   2,   5,   1},
	                {2,   4,   5,   1,   2,   4,   5,   5,   3,   1},
	                {3,   4,   1,   4,   1,   3,   2,   4,   3,   5},
	                {4,   5,   5,   1,   1,   3,   1,   3,   4,   1},
	                {5,   2,   4,   4,   3,   5,   5,   4,   1,   4}};

    int resultado[10][10];
	float r = 0.0;

	multiplicar(resultado, m0, m1, 10);
	r += testar(resultado[0][0], 67);
	r += testar(resultado[0][1], 62);
	r += testar(resultado[0][2], 69);
	r += testar(resultado[0][3], 55);
	r += testar(resultado[0][4], 44);
	r += testar(resultado[0][5], 77);
	r += testar(resultado[0][6], 54);
	r += testar(resultado[0][7], 76);
	r += testar(resultado[0][8], 73);
	r += testar(resultado[0][9], 49);
	r += testar(resultado[1][0], 76);
	r += testar(resultado[1][1], 73);
	r += testar(resultado[1][2], 78);
	r += testar(resultado[1][3], 83);
	r += testar(resultado[1][4], 57);
	r += testar(resultado[1][5], 92);
	r += testar(resultado[1][6], 76);
	r += testar(resultado[1][7], 95);
	r += testar(resultado[1][8], 79);
	r += testar(resultado[1][9], 67);
	r += testar(resultado[2][0], 100);
	r += testar(resultado[2][1], 71);
	r += testar(resultado[2][2], 84);
	r += testar(resultado[2][3], 89);
	r += testar(resultado[2][4], 66);
	r += testar(resultado[2][5], 107);
	r += testar(resultado[2][6], 87);
	r += testar(resultado[2][7], 106);
	r += testar(resultado[2][8], 75);
	r += testar(resultado[2][9], 89);
	r += testar(resultado[3][0], 80);
	r += testar(resultado[3][1], 65);
	r += testar(resultado[3][2], 69);
	r += testar(resultado[3][3], 70);
	r += testar(resultado[3][4], 59);
	r += testar(resultado[3][5], 74);
	r += testar(resultado[3][6], 53);
	r += testar(resultado[3][7], 82);
	r += testar(resultado[3][8], 74);
	r += testar(resultado[3][9], 58);
	r += testar(resultado[4][0], 128);
	r += testar(resultado[4][1], 115);
	r += testar(resultado[4][2], 116);
	r += testar(resultado[4][3], 110);
	r += testar(resultado[4][4], 83);
	r += testar(resultado[4][5], 117);
	r += testar(resultado[4][6], 97);
	r += testar(resultado[4][7], 135);
	r += testar(resultado[4][8], 101);
	r += testar(resultado[4][9], 94);
	r += testar(resultado[5][0], 112);
	r += testar(resultado[5][1], 94);
	r += testar(resultado[5][2], 100);
	r += testar(resultado[5][3], 94);
	r += testar(resultado[5][4], 78);
	r += testar(resultado[5][5], 112);
	r += testar(resultado[5][6], 94);
	r += testar(resultado[5][7], 118);
	r += testar(resultado[5][8], 97);
	r += testar(resultado[5][9], 81);
	r += testar(resultado[6][0], 85);
	r += testar(resultado[6][1], 66);
	r += testar(resultado[6][2], 88);
	r += testar(resultado[6][3], 72);
	r += testar(resultado[6][4], 53);
	r += testar(resultado[6][5], 99);
	r += testar(resultado[6][6], 73);
	r += testar(resultado[6][7], 102);
	r += testar(resultado[6][8], 77);
	r += testar(resultado[6][9], 66);
	r += testar(resultado[7][0], 81);
	r += testar(resultado[7][1], 77);
	r += testar(resultado[7][2], 80);
	r += testar(resultado[7][3], 76);
	r += testar(resultado[7][4], 55);
	r += testar(resultado[7][5], 90);
	r += testar(resultado[7][6], 73);
	r += testar(resultado[7][7], 95);
	r += testar(resultado[7][8], 80);
	r += testar(resultado[7][9], 63);
	r += testar(resultado[8][0], 77);
	r += testar(resultado[8][1], 71);
	r += testar(resultado[8][2], 71);
	r += testar(resultado[8][3], 68);
	r += testar(resultado[8][4], 45);
	r += testar(resultado[8][5], 73);
	r += testar(resultado[8][6], 54);
	r += testar(resultado[8][7], 81);
	r += testar(resultado[8][8], 66);
	r += testar(resultado[8][9], 56);
	r += testar(resultado[9][0], 105);
	r += testar(resultado[9][1], 89);
	r += testar(resultado[9][2], 113);
	r += testar(resultado[9][3], 92);
	r += testar(resultado[9][4], 77);
	r += testar(resultado[9][5], 119);
	r += testar(resultado[9][6], 95);
	r += testar(resultado[9][7], 121);
	r += testar(resultado[9][8], 97);
	r += testar(resultado[9][9], 78);

    return r/100.0;
}

float caso_de_teste07() {
	printf(" caso de teste 7 \n");
	int m0[10][10] = {{5,   5,   5,   4,   5,   5,   5,   5,   5,   5},
	                {2,   5,   4,   4,   5,   2,   2,   5,   4,   2},
	                {5,   1,   5,   2,   2,   2,   5,   3,   4,   2},
	                {3,   5,   4,   4,   1,   5,   1,   2,   4,   5},
	                {1,   5,   4,   4,   5,   1,   5,   2,   5,   1},
	                {5,   1,   1,   4,   2,   4,   5,   3,   1,   5},
	                {4,   5,   2,   4,   4,   4,   3,   4,   5,   3},
	                {5,   1,   2,   4,   1,   4,   4,   1,   5,   5},
	                {1,   1,   5,   3,   5,   1,   2,   1,   5,   4},
	                {3,   3,   4,   1,   4,   4,   4,   1,   2,   5}};

	int m1[10][10] = {{2,   2,   2,   5,   3,   1,   3,   1,   2,   3},
	                {3,   3,   5,   4,   1,   4,   1,   3,   1,   5},
	                {2,   1,   5,   2,   5,   5,   4,   5,   1,   1},
	                {4,   4,   2,   1,   3,   2,   1,   3,   2,   4},
	                {2,   1,   1,   2,   2,   1,   2,   2,   5,   4},
	                {3,   2,   1,   2,   3,   5,   3,   1,   1,   4},
	                {4,   5,   4,   5,   5,   4,   1,   2,   1,   4},
	                {2,   4,   5,   2,   5,   1,   4,   4,   4,   4},
	                {2,   1,   2,   3,   4,   4,   4,   2,   1,   5},
	                {2,   4,   4,   5,   1,   5,   3,   3,   3,   5}};

    int resultado[10][10];
	float r = 0.0;

	multiplicar(resultado, m0, m1, 10);
	r += testar(resultado[0][0], 126);
	r += testar(resultado[0][1], 131);
	r += testar(resultado[0][2], 153);
	r += testar(resultado[0][3], 154);
	r += testar(resultado[0][4], 157);
	r += testar(resultado[0][5], 158);
	r += testar(resultado[0][6], 129);
	r += testar(resultado[0][7], 127);
	r += testar(resultado[0][8], 103);
	r += testar(resultado[0][9], 191);
	r += testar(resultado[1][0], 89);
	r += testar(resultado[1][1], 90);
	r += testar(resultado[1][2], 113);
	r += testar(resultado[1][3], 98);
	r += testar(resultado[1][4], 112);
	r += testar(resultado[1][5], 104);
	r += testar(resultado[1][6], 91);
	r += testar(resultado[1][7], 99);
	r += testar(resultado[1][8], 80);
	r += testar(resultado[1][9], 137);
	r += testar(resultado[2][0], 79);
	r += testar(resultado[2][1], 81);
	r += testar(resultado[2][2], 99);
	r += testar(resultado[2][3], 102);
	r += testar(resultado[2][4], 115);
	r += testar(resultado[2][5], 99);
	r += testar(resultado[2][6], 87);
	r += testar(resultado[2][7], 81);
	r += testar(resultado[2][8], 59);
	r += testar(resultado[2][9], 111);
	r += testar(resultado[3][0], 88);
	r += testar(resultado[3][1], 89);
	r += testar(resultado[3][2], 107);
	r += testar(resultado[3][3], 105);
	r += testar(resultado[3][4], 99);
	r += testar(resultado[3][5], 124);
	r += testar(resultado[3][6], 91);
	r += testar(resultado[3][7], 90);
	r += testar(resultado[3][8], 61);
	r += testar(resultado[3][9], 135);
	r += testar(resultado[4][0], 90);
	r += testar(resultado[4][1], 86);
	r += testar(resultado[4][2], 105);
	r += testar(resultado[4][3], 98);
	r += testar(resultado[4][4], 109);
	r += testar(resultado[4][5], 106);
	r += testar(resultado[4][6], 77);
	r += testar(resultado[4][7], 90);
	r += testar(resultado[4][8], 66);
	r += testar(resultado[4][9], 130);
	r += testar(resultado[5][0], 85);
	r += testar(resultado[5][1], 98);
	r += testar(resultado[5][2], 91);
	r += testar(resultado[5][3], 106);
	r += testar(resultado[5][4], 98);
	r += testar(resultado[5][5], 96);
	r += testar(resultado[5][6], 76);
	r += testar(resultado[5][7], 72);
	r += testar(resultado[5][8], 67);
	r += testar(resultado[5][9], 123);
	r += testar(resultado[6][0], 99);
	r += testar(resultado[6][1], 101);
	r += testar(resultado[6][2], 113);
	r += testar(resultado[6][3], 117);
	r += testar(resultado[6][4], 117);
	r += testar(resultado[6][5], 117);
	r += testar(resultado[6][6], 97);
	r += testar(resultado[6][7], 94);
	r += testar(resultado[6][8], 80);
	r += testar(resultado[6][9], 155);
	r += testar(resultado[7][0], 85);
	r += testar(resultado[7][1], 89);
	r += testar(resultado[7][2], 89);
	r += testar(resultado[7][3], 109);
	r += testar(resultado[7][4], 102);
	r += testar(resultado[7][5], 110);
	r += testar(resultado[7][6], 85);
	r += testar(resultado[7][7], 73);
	r += testar(resultado[7][8], 58);
	r += testar(resultado[7][9], 128);
	r += testar(resultado[8][0], 68);
	r += testar(resultado[8][1], 64);
	r += testar(resultado[8][2], 83);
	r += testar(resultado[8][3], 81);
	r += testar(resultado[8][4], 90);
	r += testar(resultado[8][5], 95);
	r += testar(resultado[8][6], 78);
	r += testar(resultado[8][7], 79);
	r += testar(resultado[8][8], 63);
	r += testar(resultado[8][9], 106);
	r += testar(resultado[9][0], 79);
	r += testar(resultado[9][1], 81);
	r += testar(resultado[9][2], 96);
	r += testar(resultado[9][3], 105);
	r += testar(resultado[9][4], 93);
	r += testar(resultado[9][5], 111);
	r += testar(resultado[9][6], 80);
	r += testar(resultado[9][7], 78);
	r += testar(resultado[9][8], 64);
	r += testar(resultado[9][9], 119);

    return r/100.0;
}

float caso_de_teste08() {
	printf(" caso de teste 8 \n");
	int m0[10][10] = {{1,   3,   1,   5,   1,   2,   1,   4,   1,   4},
	                {5,   5,   1,   3,   2,   2,   4,   2,   2,   2},
	                {5,   3,   3,   4,   2,   2,   2,   1,   2,   4},
	                {1,   5,   1,   2,   1,   4,   5,   1,   4,   1},
	                {5,   3,   2,   2,   3,   5,   3,   1,   2,   2},
	                {2,   3,   1,   1,   1,   2,   2,   3,   4,   1},
	                {3,   5,   5,   4,   1,   5,   4,   2,   2,   2},
	                {4,   3,   1,   3,   5,   3,   2,   4,   3,   3},
	                {5,   2,   3,   2,   4,   3,   3,   3,   2,   4},
	                {3,   5,   5,   4,   5,   2,   5,   3,   3,   1}};

	int m1[10][10] = {{4,   5,   3,   5,   4,   5,   1,   5,   4,   3},
	                {5,   5,   4,   2,   3,   1,   1,   2,   5,   5},
	                {3,   2,   1,   2,   2,   4,   1,   5,   1,   5},
	                {5,   4,   4,   5,   5,   4,   1,   2,   5,   1},
	                {5,   1,   5,   3,   5,   3,   4,   5,   1,   3},
	                {1,   3,   1,   1,   1,   4,   5,   1,   4,   5},
	                {1,   5,   5,   1,   1,   4,   2,   1,   2,   1},
	                {4,   1,   4,   3,   1,   3,   2,   4,   2,   2},
	                {3,   2,   1,   4,   5,   3,   2,   1,   1,   2},
	                {2,   3,   4,   1,   3,   4,   1,   1,   2,   2}};

    int resultado[10][10];
	float r = 0.0;

	multiplicar(resultado, m0, m1, 10);
	r += testar(resultado[0][0], 82);
	r += testar(resultado[0][1], 72);
	r += testar(resultado[0][2], 81);
	r += testar(resultado[0][3], 64);
	r += testar(resultado[0][4], 69);
	r += testar(resultado[0][5], 78);
	r += testar(resultado[0][6], 40);
	r += testar(resultado[0][7], 55);
	r += testar(resultado[0][8], 73);
	r += testar(resultado[0][9], 60);
	r += testar(resultado[1][0], 97);
	r += testar(resultado[1][1], 104);
	r += testar(resultado[1][2], 98);
	r += testar(resultado[1][3], 80);
	r += testar(resultado[1][4], 86);
	r += testar(resultado[1][5], 96);
	r += testar(resultado[1][6], 50);
	r += testar(resultado[1][7], 74);
	r += testar(resultado[1][8], 89);
	r += testar(resultado[1][9], 80);
	r += testar(resultado[2][0], 96);
	r += testar(resultado[2][1], 97);
	r += testar(resultado[2][2], 90);
	r += testar(resultado[2][3], 82);
	r += testar(resultado[2][4], 92);
	r += testar(resultado[2][5], 103);
	r += testar(resultado[2][6], 47);
	r += testar(resultado[2][7], 78);
	r += testar(resultado[2][8], 84);
	r += testar(resultado[2][9], 81);
	r += testar(resultado[3][0], 74);
	r += testar(resultado[3][1], 90);
	r += testar(resultado[3][2], 78);
	r += testar(resultado[3][3], 59);
	r += testar(resultado[3][4], 69);
	r += testar(resultado[3][5], 80);
	r += testar(resultado[3][6], 54);
	r += testar(resultado[3][7], 47);
	r += testar(resultado[3][8], 75);
	r += testar(resultado[3][9], 75);
	r += testar(resultado[4][0], 88);
	r += testar(resultado[4][1], 96);
	r += testar(resultado[4][2], 86);
	r += testar(resultado[4][3], 75);
	r += testar(resultado[4][4], 83);
	r += testar(resultado[4][5], 102);
	r += testar(resultado[4][6], 63);
	r += testar(resultado[4][7], 76);
	r += testar(resultado[4][8], 84);
	r += testar(resultado[4][9], 89);
	r += testar(resultado[5][0], 66);
	r += testar(resultado[5][1], 62);
	r += testar(resultado[5][2], 60);
	r += testar(resultado[5][3], 56);
	r += testar(resultado[5][4], 59);
	r += testar(resultado[5][5], 65);
	r += testar(resultado[5][6], 40);
	r += testar(resultado[5][7], 49);
	r += testar(resultado[5][8], 54);
	r += testar(resultado[5][9], 58);
	r += testar(resultado[6][0], 104);
	r += testar(resultado[6][1], 114);
	r += testar(resultado[6][2], 98);
	r += testar(resultado[6][3], 83);
	r += testar(resultado[6][4], 89);
	r += testar(resultado[6][5], 115);
	r += testar(resultado[6][6], 64);
	r += testar(resultado[6][7], 84);
	r += testar(resultado[6][8], 101);
	r += testar(resultado[6][9], 107);
	r += testar(resultado[7][0], 110);
	r += testar(resultado[7][1], 92);
	r += testar(resultado[7][2], 106);
	r += testar(resultado[7][3], 90);
	r += testar(resultado[7][4], 100);
	r += testar(resultado[7][5], 107);
	r += testar(resultado[7][6], 67);
	r += testar(resultado[7][7], 89);
	r += testar(resultado[7][8], 85);
	r += testar(resultado[7][9], 87);
	r += testar(resultado[8][0], 101);
	r += testar(resultado[8][1], 96);
	r += testar(resultado[8][2], 102);
	r += testar(resultado[8][3], 84);
	r += testar(resultado[8][4], 93);
	r += testar(resultado[8][5], 114);
	r += testar(resultado[8][6], 63);
	r += testar(resultado[8][7], 92);
	r += testar(resultado[8][8], 81);
	r += testar(resultado[8][9], 90);
	r += testar(resultado[9][0], 127);
	r += testar(resultado[9][1], 114);
	r += testar(resultado[9][2], 121);
	r += testar(resultado[9][3], 99);
	r += testar(resultado[9][4], 110);
	r += testar(resultado[9][5], 121);
	r += testar(resultado[9][6], 70);
	r += testar(resultado[9][7], 106);
	r += testar(resultado[9][8], 96);
	r += testar(resultado[9][9], 107);

    return r/100.0;
}

float caso_de_teste09() {
	printf(" caso de teste 9 \n");
	int m0[10][10] = {{4,   1,   2,   1,   3,   5,   1,   5,   5,   3},
	                {4,   1,   4,   4,   2,   2,   2,   2,   4,   1},
	                {4,   3,   3,   2,   4,   4,   4,   5,   5,   1},
	                {3,   1,   4,   4,   3,   1,   4,   3,   2,   5},
	                {2,   1,   2,   5,   1,   3,   1,   2,   5,   1},
	                {3,   5,   3,   2,   3,   1,   5,   1,   5,   5},
	                {2,   4,   5,   5,   3,   2,   2,   3,   2,   1},
	                {2,   3,   3,   4,   3,   3,   3,   5,   4,   4},
	                {1,   3,   3,   3,   5,   1,   1,   4,   1,   2},
	                {3,   4,   1,   4,   5,   3,   3,   4,   2,   4}};

	int m1[10][10] = {{3,   1,   1,   3,   2,   1,   3,   2,   5,   1},
	                {4,   4,   1,   2,   3,   1,   2,   1,   4,   5},
	                {4,   3,   3,   4,   2,   2,   5,   3,   1,   5},
	                {5,   3,   2,   2,   2,   3,   3,   2,   4,   4},
	                {2,   4,   2,   4,   2,   1,   1,   5,   1,   5},
	                {1,   4,   4,   4,   4,   5,   5,   3,   2,   2},
	                {2,   3,   2,   3,   2,   3,   3,   1,   4,   3},
	                {1,   3,   4,   4,   3,   2,   4,   4,   2,   1},
	                {3,   2,   1,   3,   2,   4,   5,   3,   1,   3},
	                {5,   4,   1,   1,   3,   4,   5,   5,   4,   4}};

    int resultado[10][10];
	float r = 0.0;

	multiplicar(resultado, m0, m1, 10);
	r += testar(resultado[0][0], 77);
	r += testar(resultado[0][1], 89);
	r += testar(resultado[0][2], 69);
	r += testar(resultado[0][3], 97);
	r += testar(resultado[0][4], 79);
	r += testar(resultado[0][5], 85);
	r += testar(resultado[0][6], 118);
	r += testar(resultado[0][7], 98);
	r += testar(resultado[0][8], 74);
	r += testar(resultado[0][9], 83);
	r += testar(resultado[1][0], 81);
	r += testar(resultado[1][1], 72);
	r += testar(resultado[1][2], 54);
	r += testar(resultado[1][3], 81);
	r += testar(resultado[1][4], 60);
	r += testar(resultado[1][5], 67);
	r += testar(resultado[1][6], 97);
	r += testar(resultado[1][7], 72);
	r += testar(resultado[1][8], 70);
	r += testar(resultado[1][9], 83);
	r += testar(resultado[2][0], 91);
	r += testar(resultado[2][1], 104);
	r += testar(resultado[2][2], 78);
	r += testar(resultado[2][3], 114);
	r += testar(resultado[2][4], 87);
	r += testar(resultado[2][5], 89);
	r += testar(resultado[2][6], 125);
	r += testar(resultado[2][7], 100);
	r += testar(resultado[2][8], 90);
	r += testar(resultado[2][9], 106);
	r += testar(resultado[3][0], 98);
	r += testar(resultado[3][1], 92);
	r += testar(resultado[3][2], 61);
	r += testar(resultado[3][3], 86);
	r += testar(resultado[3][4], 71);
	r += testar(resultado[3][5], 78);
	r += testar(resultado[3][6], 110);
	r += testar(resultado[3][7], 92);
	r += testar(resultado[3][8], 88);
	r += testar(resultado[3][9], 102);
	r += testar(resultado[4][0], 72);
	r += testar(resultado[4][1], 66);
	r += testar(resultado[4][2], 49);
	r += testar(resultado[4][3], 69);
	r += testar(resultado[4][4], 56);
	r += testar(resultado[4][5], 69);
	r += testar(resultado[4][6], 90);
	r += testar(resultado[4][7], 64);
	r += testar(resultado[4][8], 60);
	r += testar(resultado[4][9], 72);
	r += testar(resultado[5][0], 109);
	r += testar(resultado[5][1], 102);
	r += testar(resultado[5][2], 55);
	r += testar(resultado[5][3], 90);
	r += testar(resultado[5][4], 79);
	r += testar(resultado[5][5], 85);
	r += testar(resultado[5][6], 117);
	r += testar(resultado[5][7], 91);
	r += testar(resultado[5][8], 98);
	r += testar(resultado[5][9], 119);
	r += testar(resultado[6][0], 93);
	r += testar(resultado[6][1], 91);
	r += testar(resultado[6][2], 64);
	r += testar(resultado[6][3], 89);
	r += testar(resultado[6][4], 70);
	r += testar(resultado[6][5], 68);
	r += testar(resultado[6][6], 100);
	r += testar(resultado[6][7], 79);
	r += testar(resultado[6][8], 78);
	r += testar(resultado[6][9], 105);
	r += testar(resultado[7][0], 102);
	r += testar(resultado[7][1], 107);
	r += testar(resultado[7][2], 74);
	r += testar(resultado[7][3], 101);
	r += testar(resultado[7][4], 86);
	r += testar(resultado[7][5], 92);
	r += testar(resultado[7][6], 126);
	r += testar(resultado[7][7], 103);
	r += testar(resultado[7][8], 92);
	r += testar(resultado[7][9], 111);
	r += testar(resultado[8][0], 72);
	r += testar(resultado[8][1], 80);
	r += testar(resultado[8][2], 54);
	r += testar(resultado[8][3], 75);
	r += testar(resultado[8][4], 59);
	r += testar(resultado[8][5], 52);
	r += testar(resultado[8][6], 77);
	r += testar(resultado[8][7], 78);
	r += testar(resultado[8][8], 60);
	r += testar(resultado[8][9], 88);
	r += testar(resultado[9][0], 98);
	r += testar(resultado[9][1], 107);
	r += testar(resultado[9][2], 68);
	r += testar(resultado[9][3], 96);
	r += testar(resultado[9][4], 84);
	r += testar(resultado[9][5], 82);
	r += testar(resultado[9][6], 109);
	r += testar(resultado[9][7], 100);
	r += testar(resultado[9][8], 97);
	r += testar(resultado[9][9], 110);

    return r/100.0;
}

float caso_de_teste10() {
	printf(" caso de teste 10 \n");
	int m0[10][10] = {{1,   4,   4,   1,   4,   3,   5,   2,   4,   1},
	                {3,   3,   2,   3,   1,   2,   2,   5,   4,   4},
	                {3,   2,   5,   4,   3,   2,   2,   2,   2,   4},
	                {5,   4,   4,   5,   4,   5,   3,   5,   1,   3},
	                {5,   3,   5,   1,   2,   2,   4,   3,   4,   4},
	                {3,   1,   3,   3,   1,   2,   1,   2,   3,   4},
	                {2,   5,   2,   1,   4,   2,   2,   3,   1,   2},
	                {1,   5,   2,   2,   2,   5,   1,   2,   5,   1},
	                {3,   2,   1,   5,   1,   3,   3,   3,   2,   1},
	                {1,   3,   2,   2,   5,   5,   5,   1,   5,   5}};

	int m1[10][10] = {{5,   1,   3,   3,   2,   2,   3,   2,   2,   4},
	                {2,   2,   1,   2,   1,   3,   4,   3,   5,   3},
	                {1,   2,   5,   4,   4,   2,   5,   4,   4,   5},
	                {4,   3,   1,   4,   2,   4,   5,   5,   5,   4},
	                {5,   4,   5,   5,   2,   5,   2,   3,   2,   4},
	                {5,   5,   5,   4,   5,   3,   2,   5,   1,   5},
	                {1,   2,   4,   3,   5,   1,   1,   1,   2,   3},
	                {4,   1,   3,   3,   1,   4,   5,   4,   3,   3},
	                {2,   2,   4,   1,   2,   4,   5,   3,   3,   3},
	                {4,   3,   4,   3,   3,   5,   3,   3,   2,   4}};

    int resultado[10][10];
	float r = 0.0;

	multiplicar(resultado, m0, m1, 10);
	r += testar(resultado[0][0], 81);
	r += testar(resultado[0][1], 74);
	r += testar(resultado[0][2], 109);
	r += testar(resultado[0][3], 91);
	r += testar(resultado[0][4], 85);
	r += testar(resultado[0][5], 89);
	r += testar(resultado[0][6], 96);
	r += testar(resultado[0][7], 90);
	r += testar(resultado[0][8], 84);
	r += testar(resultado[0][9], 108);
	r += testar(resultado[1][0], 96);
	r += testar(resultado[1][1], 65);
	r += testar(resultado[1][2], 95);
	r += testar(resultado[1][3], 85);
	r += testar(resultado[1][4], 70);
	r += testar(resultado[1][5], 100);
	r += testar(resultado[1][6], 111);
	r += testar(resultado[1][7], 97);
	r += testar(resultado[1][8], 87);
	r += testar(resultado[1][9], 106);
	r += testar(resultado[2][0], 95);
	r += testar(resultado[2][1], 73);
	r += testar(resultado[2][2], 103);
	r += testar(resultado[2][3], 98);
	r += testar(resultado[2][4], 80);
	r += testar(resultado[2][5], 97);
	r += testar(resultado[2][6], 106);
	r += testar(resultado[2][7], 99);
	r += testar(resultado[2][8], 88);
	r += testar(resultado[2][9], 115);
	r += testar(resultado[3][0], 139);
	r += testar(resultado[3][1], 99);
	r += testar(resultado[3][2], 132);
	r += testar(resultado[3][3], 133);
	r += testar(resultado[3][4], 104);
	r += testar(resultado[3][5], 127);
	r += testar(resultado[3][6], 136);
	r += testar(resultado[3][7], 135);
	r += testar(resultado[3][8], 114);
	r += testar(resultado[3][9], 152);
	r += testar(resultado[4][0], 100);
	r += testar(resultado[4][1], 73);
	r += testar(resultado[4][2], 121);
	r += testar(resultado[4][3], 100);
	r += testar(resultado[4][4], 92);
	r += testar(resultado[4][5], 101);
	r += testar(resultado[4][6], 116);
	r += testar(resultado[4][7], 100);
	r += testar(resultado[4][8], 93);
	r += testar(resultado[4][9], 125);
	r += testar(resultado[5][0], 78);
	r += testar(resultado[5][1], 56);
	r += testar(resultado[5][2], 81);
	r += testar(resultado[5][3], 72);
	r += testar(resultado[5][4], 62);
	r += testar(resultado[5][5], 79);
	r += testar(resultado[5][6], 87);
	r += testar(resultado[5][7], 79);
	r += testar(resultado[5][8], 67);
	r += testar(resultado[5][9], 90);
	r += testar(resultado[6][0], 80);
	r += testar(resultado[6][1], 60);
	r += testar(resultado[6][2], 81);
	r += testar(resultado[6][3], 78);
	r += testar(resultado[6][4], 58);
	r += testar(resultado[6][5], 81);
	r += testar(resultado[6][6], 81);
	r += testar(resultado[6][7], 77);
	r += testar(resultado[6][8], 72);
	r += testar(resultado[6][9], 89);
	r += testar(resultado[7][0], 83);
	r += testar(resultado[7][1], 71);
	r += testar(resultado[7][2], 89);
	r += testar(resultado[7][3], 76);
	r += testar(resultado[7][4], 68);
	r += testar(resultado[7][5], 88);
	r += testar(resultado[7][6], 96);
	r += testar(resultado[7][7], 93);
	r += testar(resultado[7][8], 79);
	r += testar(resultado[7][9], 98);
	r += testar(resultado[8][0], 83);
	r += testar(resultado[8][1], 59);
	r += testar(resultado[8][2], 74);
	r += testar(resultado[8][3], 77);
	r += testar(resultado[8][4], 64);
	r += testar(resultado[8][5], 76);
	r += testar(resultado[8][6], 86);
	r += testar(resultado[8][7], 83);
	r += testar(resultado[8][8], 73);
	r += testar(resultado[8][9], 90);
	r += testar(resultado[9][0], 110);
	r += testar(resultado[9][1], 98);
	r += testar(resultado[9][2], 131);
	r += testar(resultado[9][3], 108);
	r += testar(resultado[9][4], 103);
	r += testar(resultado[9][5], 117);
	r += testar(resultado[9][6], 105);
	r += testar(resultado[9][7], 108);
	r += testar(resultado[9][8], 88);
	r += testar(resultado[9][9], 129);

    return r/100.0;
}

//[]-------------------------------------------------------------[]
//    função principal
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
