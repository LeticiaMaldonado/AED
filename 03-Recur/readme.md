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

#### Léxico: El resultado se genera a partir de la resta sucesiva entre en numerador y el denominador
#### Pruebas: a) division entera entre 16 y 2 tiene que dar 8 - b) division entera entre 10 y 3 tiene que dar 3
#### Prototipos: int divisionEntera (int, int);

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

#### Léxico: El resultado se genera a partir de divisiones sucesiva entre en numerador y el denominador utilizando en
####          las instancias siguientes a la primera, como numerador el denominador la division anterior y como denominador 
####          el resto de la division anterior           
#### Pruebas: el mcd entre 16 y 12 tiene que dar 4
#### Prototipos: int mcd (int, int);

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

#### Léxico: El resultado se genera a partir de Multiplicaciones sucesiva entre el numero y su anterior hasta llegar a 1
#### Pruebas: el factorial de 5 debe entregar como resultado 120
#### Prototipos: unsigned long int factorial (int);

## 4. Fibonacci
### Modelo IPO:
##### Entrada: un número entero
##### Salida: un número entero
##### Proceso: Calcula el valor, en la secuencia Fibonacci, de la posicion especificada en la entrada
### Pseudocódigo función MCD:
#### entra n (entero)
#### si n<2, devuelve n
#### si n>=2 devuelve fibonacci(n-1) + fibonacci(n-2) 

#### Léxico: La secuencia fibonacci se calcula a partir del 0 y 1 y cada numero siguiente es igual a la suma de los dos
####         anteriores. Esta funcion calcula el valor que tendra la secuencia en la posicion especificada en su argumento
#### Pruebas: Ingresando como argumento el numero 9 debe entregar como resultado 34
#### Prototipos: int fibonacci (int);
