# -*- coding: utf-8 -*-
"""Sistemas e Sinais - ADO 03.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1OIuja1f5PTiWY-N1vAz4eWVXH8DtN0dN
"""

import matplotlib.pyplot as plt

def f(t, y, z):
    return z

def g(t, y, z):
    R = 100
    L = 4500
    C = 300*10**-6
    return (-y/(L*C) - R/L*z)

def rkf45_system(f, g, a, b, y0, z0, tol):
    result = [(a, y0, z0)]
    h = 0.1 * (b - a)
    s = 0.9

    while result[-1][0] < b:
        t, y, z = result[-1]

        k1 = h * f(t, y, z)
        l1 = h * g(t, y, z)

        k2 = h * f(t + h/4, y + k1/4, z + l1/4)
        l2 = h * g(t + h/4, y + k1/4, z + l1/4)

        k3 = h * f(t + 3*h/8, y + 3*k1/32 + 9*k2/32, z + 3*l1/32 + 9*l2/32)
        l3 = h * g(t + 3*h/8, y + 3*k1/32 + 9*k2/32, z + 3*l1/32 + 9*l2/32)

        k4 = h * f(t + 12*h/13, y + 1932*k1/2197 - 7200*k2/2197 + 7296*k3/2197, z + 1932*l1/2197 - 7200*l2/2197 + 7296*l3/2197)
        l4 = h * g(t + 12*h/13, y + 1932*k1/2197 - 7200*k2/2197 + 7296*k3/2197, z + 1932*l1/2197 - 7200*l2/2197 + 7296*l3/2197)

        k5 = h * f(t + h, y + 439*k1/216 - 8*k2 + 3680*k3/513 - 845*k4/4104, z + 439*l1/216 - 8*l2 + 3680*l3/513 - 845*l4/4104)
        l5 = h * g(t + h, y + 439*k1/216 - 8*k2 + 3680*k3/513 - 845*k4/4104, z + 439*l1/216 - 8*l2 + 3680*l3/513 - 845*l4/4104)

        k6 = h * f(t + h/2, y - 8*k1/27 + 2*k2 - 3544*k3/2565 + 1859*k4/4104 - 11*k5/40, z - 8*l1/27 + 2*l2 - 3544*l3/2565 + 1859 * k4/4104 - 11 * k5/40)
        l6 = h * g(t + h/2, y - 8*k1/27 + 2*k2 - 3544*k3/2565 + 1859*k4/4104 - 11*k5/40, z - 8*l1/27 + 2*l2 - 3544*l3/2565 + 1859*l4/4104 - 11*l5/40)

        y_next = y + 25*k1/216 + 1408*k3/2565 + 2197*k4/4104 - k5/5
        z_next = z + 25*l1/216 + 1408*l3/2565 + 2197*l4/4104 - l5/5
        err = abs(1/360 * k1 - 128/4275 * k3 - 2197/75240 * k4 + 1/50 * k5 + 2/55 * k6)
        scale = tol * (abs(z_next) + abs(y_next))/2

        if err < scale:
            t_next = t + h
            result.append((t_next, y_next, z_next))

        if err != 0:
            h = s * h * (scale/err)**0.25

    return result

def plot_rkf45_system(f, g, a, b, y0, z0, tol):
    result = rkf45_system(f, g, a, b, y0, z0, tol)
    t_values = [t for t, _, _ in result]
    y_values = [y for _, y, _ in result]
    z_values = [z for _, _, z in result]
    fig, (ax1, ax2) = plt.subplots(2, 1, sharex=True)
    ax1.plot(t_values, y_values)
    ax1.set_ylabel("y")
    ax2.plot(t_values, z_values)
    ax2.set_ylabel("z")
    ax2.set_xlabel("t")
    plt.show()

a = 0
b = 10
y0 = 0
z0 = 1
tol = 0.001
plot_rkf45_system(f, g, a, b, y0, z0, tol)