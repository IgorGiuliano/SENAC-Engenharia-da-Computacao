;----------------------------------------------------------------------------- 
; Programa:  Realiza a soma consecutiva de 3 posições de memória e armazena em
;            uma quarta posição.
; Autor:     Igor Giuliano Augusto de Andrade Justino
; Data:      14/05/2022
;-----------------------------------------------------------------------------

X EQU 160 ; Endereço da variável X definido como 160
Y EQU 161 ; Endereço da variável Y definido como 161
W EQU 162 ; Endereço da variável W definido como 162
Z EQU 163 ; Endereço da variável Z definido como 163


ORG 0     ; Define a origem do programa no endereço 0
IN  0     ; Faz a leitura do teclado, e armazena no ACC
STA X     ; Armazena em X, o valor contido em ACC
IN  0     ; Faz a leitura do teclado, e armazena no ACC
STA Y     ; Armazena em Y, o valor contido em ACC
IN  0     ; Faz a leitura do teclado, e armazena no ACC
STA W     ; Armazena em W, o valor contido em ACC


LDA X     ; Carrega no ACC o valor contido em X
ADD Y     ; Soma o ACC com Y e armazena o valor em ACC
ADD W     ; Soma o ACC com W e armazena o valor em ACC
STA Z     ; Armazena o resultado em Z
OUT 0     ; Exibe o resultado no visor

HLT       ; Para a execução do problema