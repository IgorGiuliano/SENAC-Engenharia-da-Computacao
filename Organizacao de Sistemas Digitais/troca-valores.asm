;----------------------------------------------------------------------------- 
; Programa:  Troca valores de A e B
; Autor:     Igor Giuliano Augusto de Andrade Justino
; Data:      14/05/2022
;-----------------------------------------------------------------------------

ORG 128   ; Define a origem do programa no endereço de memória 128
A: DB 85  ; Atribui o valor (55)h em A, que está no endereço 128


ORG 136   ; Define a origem do programa no endereço de memória 136
B: DB 51  ; Atribui o valor (33)h em B, que está no endereço 128


ORG 00    ; Define a origem do programa no endereço de memória 0

LDA A     ; Carrega o valor de A no ACC
STA 129   ; Armazena o valor do ACC no endereco de memória 129

LDA B     ; Carrega o valor de B no ACC
STA A     ; Armazena o valor do ACC e armazena do endereço de memória de A

LDA 129   ; Carrega o valor contido no endereço de memória 129
STA B     ; Armazena o valor do ACC e armazena no endereço de memória de B


HLT       ; Para a execução do programa

;   Portanto, posso concluir que este programa atribui dois valores distintos
; a dois espaços de memórias distintos, e utiliza um terceiro espaço de memória
; para realizar a troca de valores entre os espaços de memória A e B.