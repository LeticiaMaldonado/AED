# Autores de la resolución:
## LeticiaMaldonado
## 163.708-3
## Maldonado
## Leticia
# 03-Funciones Recursivas con OperadorCondicional

## 1. División entera de naturales
### Modelo IPO:
##### Entrada: dos números enteros
##### Salida: un número entero
##### Proceso: Calcula el valor entero de la division de los numeros de entrada
### Pseudocódigo función MCD:
#### entran num y den  (enteros)
#### si num >= den, devuelve 1+divisionEntera (num-den, den)
#### si num < devuelve 0

## 2. Máximo Común Denominador
### Modelo IPO:
##### Entrada: dos números enteros
##### Salida: un número entero
##### Proceso: máximo común divisor de las entradas, a través del algoritmo de Euclides
### Pseudocódigo función MCD:
#### entran a y b (enteros)
#### si a==0 o b==0, return 0
#### si b!=0 y a !=0, aux=b 
#### b=a%b
#### a=aux
#### si b!=0, MCD(a,b)
#### si b==0, return a

## 3. Factorial
### Modelo IPO:
##### Entrada: un número entero
##### Salida: un número entero largo positivo
##### Proceso: Calcula factorial mediante multiplicaciones sucesivas
### Pseudocódigo función MCD:
#### entran n (entero)
#### si n=0, devuelve 0
#### si n!=0, comparar si n=1
#### si n=1, devuelve n
#### si n!=1, devuelve n*factorrial(n-1)

## 4. Fibonacci
### Modelo IPO:
##### Entrada: un número entero
##### Salida: un número entero
##### Proceso: Calcula el valor, en la secuencia Fibonacci, de la posicion especificada en la entrada
### Pseudocódigo función MCD:
#### entra n (entero)
#### si n<2, devuelve n
#### si n>=2 devuelve fibonacci(n-1) + fibonacci(n-2) 
