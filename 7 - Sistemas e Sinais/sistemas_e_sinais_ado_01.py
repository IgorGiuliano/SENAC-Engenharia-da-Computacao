# -*- coding: utf-8 -*-
"""Sistemas e Sinais -  ADO 01.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1zDhCjr1Sv5aNIguARQWCkPh97ptunbc8

## 1) Dê exemplos de fenômenos físicos que poderiam ser modelados pela equação:
###$$x(t) = A e^{-\alpha t} \cos(\omega t + \theta)$$

Resposta:
A equação modela uma oscilação amortecida genérica.
Exemplos de oscilações amortecidas:
- vibração de um sistema massa-mola com amortecimento;
- circuitos RLC;
- vibração de pontes;
- ondas sonoras em meios em que haja dissipação.

## 2) Utilize o python, construa os gráficos dos sinusoides abaixo de 0 a 2 segundos com passos de 0,1 segundos e compartilhe com o grupo.

### a) $$x(t) = 3 e^{-t} \cos(9 t - 30º)$$
### b) $$x(t) = 3 e^{-t} \cos(9 t + 30º)$$
### c) $$x(t) = e^{-0,1t} \cos(4 t - 45º)$$
### d) $$x(t) = 10 e^{-6 t} \cos(4 t - 45º)$$
### e) $$x(t) = 5 e^{-t} \cos(t - 0º)$$
"""

import numpy as np
import matplotlib.pyplot as plt

def plotarGraficoSinusoide(tempo, A, alpha, omega, theta):

  x = A * np.exp(-alpha * tempo) * np.cos(omega * tempo + np.deg2rad(theta))

  funcaoEmTexto = f"{A}e^(-{alpha}t)cos({omega}t+{theta}°)"

  plt.plot(tempo, x, label='x(t)')
  plt.xlabel('Tempo (s)')
  plt.ylabel('Amplitude')
  plt.title(f'Gráfico de x(t) = {funcaoEmTexto}')
  plt.grid()
  plt.legend()
  plt.show()


def plotarGraficoSinais(tempo, A, alpha, omega, theta):
    # define a função x(t) em função dos parâmetros
    x = A * np.exp(-alpha * tempo) * np.cos(omega * tempo + np.deg2rad(theta))

    # define a função e(t) = e^(-alpha*t)
    e = np.exp(-alpha * tempo)

    # define a função y(t) = A * cos(omega*t)
    y = A * np.cos(omega * tempo)

    # define a string com a expressão da função x(t)
    funcaoEmTexto = f"{A}e^(-{alpha}t)cos({omega}t+{theta}°)"

    # plota os gráficos
    plt.xlim(left=0, right=2.5)
    intervalo = 0.5
    marcadores = np.arange(0, 2.5, intervalo)
    rotulos = [str(x) for x in marcadores]
    plt.xticks(marcadores, rotulos)
    plt.plot(tempo, x, label='x(t)')
    plt.plot(tempo, e, label='e(t)')
    plt.plot(tempo, y, label='cos()')
    plt.xlabel('Tempo (s)')
    plt.ylabel('Amplitude')
    plt.title(f'Gráfico de x(t) = {funcaoEmTexto}')
    plt.grid()
    plt.legend()
    plt.show()

print("####################################################")
print("EXERCICIO 2")

tempo = np.arange(0, 2, 0.01)
print("Gráfico do exercicio 2 - a)")
plotarGraficoSinusoide(tempo, 3, 1, 9, -30)

print("\nGráfico do exercicio 2 - b)")
plotarGraficoSinusoide(tempo, 3, 1, 9, 30)

print("\nGráfico do exercicio 2 - c)")
plotarGraficoSinusoide(tempo, 1, 0.1, 4, -45)

print("\nGráfico do exercicio 2 - d)")
plotarGraficoSinusoide(tempo, 10, 6, 4, -45)

print("\nGráfico do exercicio 2 - e)")
plotarGraficoSinusoide(tempo, 5, 1, 1, 0)

"""### 3) Explique o que acontece de um caso para outro conforme os parâmetros A, α, $ω_0$ e θ."""

print("####################################################")
print("EXERCICIO 3")

tempo = np.arange(0, 2, 0.01)

print("\n---------------------------------------------------")
print("Gráfico do exercicio 2 - a)")
plotarGraficoSinais(tempo, 3, 1, 9, -30)

print("\n---------------------------------------------------")
print("Gráfico do exercicio 2 - b)")
plotarGraficoSinais(tempo, 3, 1, 9, 30)

print("\n---------------------------------------------------")
print("Gráfico do exercicio 2 - c)")
plotarGraficoSinais(tempo, 1, 0.1, 4, -45)

print("\n---------------------------------------------------")
print("Gráfico do exercicio 2 - d)")
plotarGraficoSinais(tempo, 10, 6, 4, -45)

print("\n---------------------------------------------------")
print("Gráfico do exercicio 2 - e)")
plotarGraficoSinais(tempo, 5, 1, 1, 0)