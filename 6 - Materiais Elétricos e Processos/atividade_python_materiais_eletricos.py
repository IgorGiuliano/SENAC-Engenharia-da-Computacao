# -*- coding: utf-8 -*-
"""ATIVIDADE PYTHON MATERIAIS ELETRICOS.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1VgGYgC1dwpayDgNc1tro1N7m87cJ7sxM

## 1. Encontre os estados quânticos de energia $E_n$ para uma particula de massa $m$ num potencial de Lénnard-Jones.


## Resolva a Equação de Schrödinger: $-\frac{\hbar^2}{2m}∇Ψ(r)+V(r)Ψ(r)=EΨ(r)$
## Onde, $r = \sqrt{(x-x_0)^2}$

Tentativa de resolver utilizando Runge Kutta 4ª ordem
"""

import cmath
import numpy as np
import matplotlib.pyplot as plt

def v(x): #Equação do potencial
    return np.sqrt((x-x0)**2)

def k(x): #Resolver eq. schrodinger para K
    return cmath.sqrt((2*mass/(hbar**2))*(E - v(x)))

def psi_um(x): #PSI, equação da funçao de onda
    return np.exp(i*k(x)*x)

def psi_dois(x): # Derivada da função de onda
    return i*k(x)*np.exp(i*k(x)*x)

def deriv(r,x):
    return np.array([r[1],-(2.0*mass/(hbar**2) * (E - v(x))*r[0])], complex)

def Reflexao(x, y):
    aa = (psi1 + psi2/(i*k(y)))/(2*np.exp(i*k(y)*y))
    bb = (psi1 - psi2/(i*k(y)))/(2*np.exp(-i*k(y)*y))
    return (np.abs(bb)/np.abs(aa))**2

def Transmissao(x,y):
    aa = (psi1 + psi2/(i*k(y)))/(2.0*np.exp(i*k(y)*y))
    return k(x)/k(y) * 1.0/(np.abs(aa))**2

mass = 1.0 # Massa simplificada
hbar = 1.0 # H Barra simplificado
v0 = 2.0 # Valor do potencial inicial
E = 3.0 # Energia
i = 1.0j # Numero imaginário
x = x0 = 10.0 # X inicial
xf = -10.0 # X final
h = -.001 # Valor do passo

xaxis = np.array([], float)
psi = np.array([], complex)
psi_inicial = np.array([], complex)

r = np.array([psi_um(x), psi_dois(x)]) # Array com função de ondas

#Runge Kutta 4ª ordem
while (x >= xf ):
        xaxis = np.append(xaxis, x)
        psi = np.append(psi, r[0])
        psi_inicial = np.append(psi_inicial, r[1])
        k1 = h*deriv(r,x)
        k2 = h*deriv(r+k1/2,x+h/2)
        k3 = h*deriv(r+k2/2,x+h/2)
        k4 = h*deriv(r+k3,x+h)
        r += (k1+2*k2+2*k3+k4)/6
        x += h

psi1 = psi[20000]
psi2 = psi_inicial[20000]
x = -10
xf = 10

print('reflexão = ', Reflexao(x,xf))
print('transmissão = ', Transmissao(x,xf))
print('r + t = ', Reflexao(x,xf) + Transmissao(x,xf))

fig, ax = plt.subplots(1,2, figsize = (15,5))
ax[0].plot(xaxis, psi.real, xaxis, psi.imag, xaxis, v(xaxis))
ax[1].plot(xaxis, psi_inicial.real, xaxis, psi_inicial.imag, xaxis, v(xaxis))
plt.show()

"""Tentativa de achar os autovalores de energia"""

import numpy as np
import matplotlib.pyplot as plt
from scipy import sparse
from scipy.sparse import linalg as sla

def schrodinger1D(xmin, xmax, Nx, Vfun, params, neigs=10, findpsi=False):
    x = np.linspace(xmin, xmax, Nx)
    dx = x[1] - x[0]  # tamanho do passo no eixo x
    # Valor do potencial:
    V = Vfun(x, params)
    # Criar a matriz do operador Hamiltoniano:
    H = sparse.eye(Nx, Nx, format='lil') * 2
    for i in range(Nx - 1):
        H[i, i + 1] = -1
        H[i + 1, i] = -1
    H = H / (dx ** 2)
    for i in range(Nx):
        H[i, i] = H[i, i] + V[i]

    H = H.tocsc()
    [evl, evt] = sla.eigs(H, k=neigs, which='SM')
    for i in range(neigs):
        evt[:, i] = evt[:, i] / np.sqrt(np.trapz(np.conj(evt[:,i])*evt[:,i],x))
        evl = np.real(evl)
    if findpsi == False:
        return evl
    else:
        return evl, evt, x

def calcular_funcao_de_onda(xmin, xmax, Nx, Vfun, params, neigs, findpsi = True):
    H = schrodinger1D(xmin, xmax, Nx, Vfun, params, neigs, findpsi)
    evl = H[0]
    indices = np.argsort(evl)
    print("Autovalores de energia:")
    for i,j in enumerate(evl[indices]):
        print("{}: {:.2f}".format(i+1,j))
    evt = H[1] # autovetores
    x = H[2] # plano x
    i = 0
    plt.figure(figsize=(8,8))
    while i < neigs:
        n = indices[i]
        # calcular densidade de probabilidade da função de onda
        y = np.real(np.conj(evt[:, n]) * evt[:, n])
        plt.subplot(neigs, 1, i+1)
        plt.plot(x, y)
        plt.axis('off')
        i = i + 1
    plt.show()


def mostrar_funcao_de_onda(xmin = -10, xmax = 10, Nx = 500, neigs = 25, params = [1]):
    def Vfun(x, params):
        V = params[0] * np.sqrt((x-x0)**2)
        return V

    calcular_funcao_de_onda(xmin, xmax, Nx, Vfun, params, neigs, True)

x0 = -10.0
mostrar_funcao_de_onda()

"""tentativa de achar os valores de energia para os autovalores"""

import numpy as np
from scipy import constants as const
from scipy import sparse as sparse
from scipy.sparse.linalg import eigs
from matplotlib import pyplot as plt

hbar = const.hbar
e = const.e
m_e = const.m_e
pi = const.pi
epsilon_0 = const.epsilon_0
joul_to_eV = e
x0 = 0

def calcular_termo_potencial(r):
    potential = e**2 / (4.0 * pi * epsilon_0) / r
    potential_term = sparse.diags((potential))
    return potential_term

def calcular_termo_angular(r):
    angular = l * (l + 1) / r**2
    angular_term = sparse.diags((angular))
    return angular_term

def calcular_laplaciano(r):
    h = r[1] - r[0]

    main_diag = -2.0 / h**2 * np.ones(N)
    off_diag  =  1.0 / h**2 * np.ones(N - 1)
    laplace_term = sparse.diags([main_diag, off_diag, off_diag], (0, -1, 1))
    return laplace_term

def construir_hamiltoniano(r):
    laplace_term =   calcular_laplaciano(r)
    angular_term =   calcular_termo_angular(r)
    potential_term = calcular_termo_potencial(r)

    hamiltoniano = -hbar**2 / (2.0 * m_e) * (laplace_term - angular_term) - potential_term

    return hamiltoniano

def plot(r, densidade, autovalores):
    plt.xlabel('x ($\\mathrm{\AA}$)')
    plt.ylabel('Densidade de probabilidade ($\\mathrm{\AA}^{-1}$)')

    energia = ['E = {: >5.2f} eV'.format(autovalores[i].real / e) for i in range(3)]
    plt.plot(r * 1e+10, densidade[0], color='blue',  label=energia[0])
    plt.plot(r * 1e+10, densidade[1], color='green', label=energia[1])
    plt.plot(r * 1e+10, densidade[2], color='red',   label=energia[2])

    plt.legend()
    plt.show()
    return

N = 2000
l = 0
r = np.linspace(2e-9, 0.0, N, endpoint=False)
hamiltoniano = construir_hamiltoniano(r)

numero_autovalores = 25
autovalores, autovetores = eigs(hamiltoniano, k=numero_autovalores, which='SM')

# organizar autovalores e autovetores
autovetores = np.array([x for _, x in sorted(zip(autovalores, autovetores.T), key=lambda pair: pair[0])])
autovalores = np.sort(autovalores)

# calcular densidade de probabilidade para cada autovetor
densidade = [np.absolute(autovetores[i, :])**2 for i in range(len(autovalores))]

plot(r, densidade, autovalores)