# -*- coding: utf-8 -*-
"""SINAL ECG.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1pS7lu5lpop5xZ6fmQZY3ThNdt4bL8yMr
"""

!pip install wfdb wget
!wget -r -N -c -np https://physionet.org/files/sddb/1.0.0/

import wfdb
import tensorflow as tf

# load a record using the 'rdrecord' function
record = wfdb.rdrecord('physionet.org/files/sddb/1.0.0/30')

# plot the record to screen
wfdb.plot_wfdb(record=record, title='Example signals')

# Importando bibliotecas
import numpy as np
import matplotlib.pyplot as plt
import wfdb
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import MinMaxScaler
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import LSTM, Dense

record = wfdb.rdrecord('physionet.org/files/sddb/1.0.0/30')

def create_dataset(iteracoes, data, look_back=1):
    X, Y = [], []
    for i in range(iteracoes-look_back-1):
        a = data[i:(i+look_back)]
        X.append(a)
        Y.append(data[i + look_back])
    return np.array(X), np.array(Y)

def treinamento(iteracoes):
  print("================================================================================================================")
  print(iteracoes)
  look_back = 20
  ecg_data = record.p_signal[:iteracoes+look_back, 0]
  ecg_data = ecg_data.reshape(-1, 1)
  scaler = MinMaxScaler(feature_range=(0, 1))
  ecg_data = scaler.fit_transform(ecg_data)
  X, Y = create_dataset(iteracoes, ecg_data, look_back)

  X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.2, random_state=42)

  model = Sequential()
  model.add(LSTM(50, input_shape=(look_back, 1)))
  model.add(Dense(1))
  model.compile(loss='mean_squared_error', optimizer='adam')
  model.fit(X_train, Y_train, epochs=5, batch_size=64, verbose=0)

  train_predict = model.predict(X_train)
  test_predict = model.predict(X_test)

  train_predict = scaler.inverse_transform(train_predict)
  Y_train = scaler.inverse_transform(Y_train)
  test_predict = scaler.inverse_transform(test_predict)
  Y_test = scaler.inverse_transform(Y_test)

  plt.plot(ecg_data)
  plt.xlabel("Tempo")
  plt.ylabel("Sinal")
  plt.title("Sinal x Tempo")
  plt.show()

  plt.figure()
  plt.plot(Y_test, label='Sinal Real')
  plt.plot(test_predict, label='Previsão')
  plt.xlabel('Tempo')
  plt.ylabel('Sinal')
  plt.title('Previsão x Sinal Real')
  plt.legend()
  plt.show()

  train_rmse = np.sqrt(np.mean(np.square(train_predict - Y_train)))
  perdaTreino.append(train_rmse)
  test_rmse = np.sqrt(np.mean(np.square(test_predict - Y_test)))
  perdaTeste.append(test_rmse)

  train_loss = model.evaluate(X_train, Y_train, verbose=0)
  rmseTreino.append(train_rmse)
  test_loss = model.evaluate(X_test, Y_test, verbose=0)
  rmseTeste.append(test_rmse)


iteracoes = 0
perdaTreino, perdaTeste, rmseTreino, rmseTeste = [], [], [], []
for i in range(30):
  iteracoes += 100
  treinamento(iteracoes)


print("================================================================================================================")
print(perdaTreino)
print(rmseTreino)
print(perdaTeste)
print(rmseTeste)