# -*- coding: utf-8 -*-
"""Filtro utilizando convolução.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1pemHX5IWK0bBrRtK5kFwo2cRQbwvo7ZE
"""

import cv2
import numpy as np
from google.colab.patches import cv2_imshow
# Carregar a imagem de entrada e o kernel
img = cv2.imread('imagem.jpg', cv2.IMREAD_GRAYSCALE)
kernel = np.array([[0, -1, 0],
                   [-1, 5, -1],
                   [0, -1, 0]])
kernel2 = np.array([[0.11, 0.11, 0.11],
                   [0.11, 1, 0.11],
                   [0.11, 0.11, 0.11]])

# Aplicar a convolução usando a função filter2D do OpenCV
output = cv2.filter2D(img, -1, kernel)
#output = cv2.filter2D(output, -1, kernel2)
#output = cv2.filter2D(output, -1, kernel)
#output = cv2.filter2D(output, -1, kernel2)

# Exibir a imagem de saída
cv2_imshow(img)
print("\n\nImagem com filtro:\n")
cv2_imshow(output)
cv2.waitKey(0)
cv2.destroyAllWindows()

import numpy as np
import matplotlib.pyplot as plt
from tensorflow.keras import datasets, layers, models

# Carregar e normalizar o conjunto de dados CIFAR-10
(train_images, train_labels), (test_images, test_labels) = datasets.cifar100.load_data()
train_images, test_images = train_images / 255.0, test_images / 255.0

# Construir a arquitetura da CNN
model = models.Sequential([
    layers.Conv2D(32, (3, 3), activation='relu', input_shape=(32, 32, 3)),
    layers.MaxPooling2D((2, 2)),
    layers.Conv2D(64, (3, 3), activation='relu'),
    layers.MaxPooling2D((2, 2)),
    layers.Conv2D(64, (3, 3), activation='relu'),
    layers.Flatten(),
    layers.Dense(64, activation='relu'),
    layers.Dense(10, activation='softmax')
])

# Compilar a CNN
model.compile(optimizer='adam',
              loss=tf.keras.losses.SparseCategoricalCrossentropy(from_logits=True),
              metrics=['accuracy'])

# Treinar a CNN
model.fit(train_images, train_labels, epochs=15, validation_data=(test_images, test_labels))

# Avaliar a CNN
test_loss, test_acc = model.evaluate(test_images, test_labels, verbose=2)
print("\nAcurácia no conjunto de teste:", test_acc)

import numpy as np
import matplotlib.pyplot as plt
from tensorflow.keras import datasets, layers, models

# Carregar e normalizar o conjunto de dados CIFAR-10
(train_images, train_labels), (test_images, test_labels) = datasets.cifar10.load_data()
train_images, test_images = train_images / 255.0, test_images / 255.0

# Construir a arquitetura da CNN
model = models.Sequential([
    layers.Conv2D(32, (3, 3), activation='relu', input_shape=(32, 32, 3)),
    layers.MaxPooling2D((2, 2)),
    layers.Conv2D(64, (3, 3), activation='relu'),
    layers.MaxPooling2D((2, 2)),
    layers.Conv2D(64, (3, 3), activation='relu'),
    layers.Flatten(),
    layers.Dense(64, activation='relu'),
    layers.Dense(10, activation='softmax')
])

# Compilar a CNN
model.compile(optimizer='adam',
              loss=tf.keras.losses.SparseCategoricalCrossentropy(from_logits=True),
              metrics=['accuracy'])

# Treinar a CNN
model.fit(train_images, train_labels, epochs=15, validation_data=(test_images, test_labels))

# Avaliar a CNN
test_loss, test_acc = model.evaluate(test_images, test_labels, verbose=2)
print("\nAcurácia no conjunto de teste:", test_acc)

# Prever as classes para o conjunto de teste
predictions = model.predict(test_images)
predicted_classes = np.argmax(predictions, axis=1)

# Exibir algumas imagens do conjunto de teste e suas previsões
class_names = ['airplane', 'automobile', 'bird', 'cat', 'deer', 'dog', 'frog', 'horse', 'ship', 'truck']

num_images_to_show = 12
plt.figure(figsize=(15, 15))
for i in range(num_images_to_show):
    plt.subplot(1, num_images_to_show, i + 1)
    plt.xticks([])
    plt.yticks([])
    plt.grid(False)
    plt.imshow(test_images[i], cmap=plt.cm.binary)
    true_label = test_labels[i, 0]
    predicted_label = predicted_classes[i]
    plt.xlabel(f"V:{class_names[true_label]}\nP:{class_names[predicted_label]}")
plt.show()