;----------------------------------------------------------------------------- 
; Programa:  Realiza a soma consecutiva de 5 posições de memória e armazena em
;            uma quarta posição.
; Autor:     Igor Giuliano Augusto de Andrade Justino
; Data:      14/05/2022
;-----------------------------------------------------------------------------

A EQU 160 ; Endereço da variável A definido como 160
B EQU 161 ; Endereço da variável B definido como 161
C EQU 162 ; Endereço da variável C definido como 162
D EQU 163 ; Endereço da variável D definido como 163
E EQU 164 ; Endereço da variável E definido como 164
F EQU 165 ; Endereço da variável F definido como 165


ORG 0     ; Define a origem do programa no endereço 0
IN  0     ; Faz a leitura do teclado, e armazena no ACC
STA A     ; Armazena em A, o valor contido em ACC
IN  0     ; Faz a leitura do teclado, e armazena no ACC
STA B     ; Armazena em B, o valor contido em ACC
IN  0     ; Faz a leitura do teclado, e armazena no ACC
STA C     ; Armazena em C, o valor contido em ACC
IN  0     ; Faz a leitura do teclado, e armazena no ACC
STA D     ; Armazena em D, o valor contido em ACC
IN  0     ; Faz a leitura do teclado, e armazena no ACC
STA E     ; Armazena em E, o valor contido em ACC


LDA A     ; Carrega no ACC o valor contido em X
ADD B     ; Soma o ACC com B e armazena o valor em ACC
ADD C     ; Soma o ACC com C e armazena o valor em ACC
ADD D     ; Soma o ACC com D e armazena o valor em ACC
ADD E     ; Soma o ACC com E e armazena o valor em ACC
STA F     ; Armazena o resultado em F
OUT 0     ; Exibe o resultado no visor

HLT       ; Para a execução do problema