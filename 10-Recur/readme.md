# Autores de la resolución:
## LeticiaMaldonado
## 163.708-3
## Maldonado
## Leticia
# 03-Funciones Recursivas con OperadorCondicional
## 1. División entera de naturales
## 2. Máximo Común Denominador
### Modelo IPO:
##### Entrada: dos números enteros
##### Salida: un número entero
##### Proceso: máximo común divisor de las entradas, a través del algoritmo de Euclides
### Pseudocódigo función MCD:
#### entran a y b
#### si a==0 o b==0, return 0
#### si b!=0 y a !=0, aux=b 
#### b=a%b
#### a=aux
#### si b!=0, MCD(a,b)
#### si b==0, return a
