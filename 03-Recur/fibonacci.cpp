/* 
TP 10: Funciones Recursivas con Operador Condicional
Descripcion: Consta de una funcion que devuelve el valor, en la secuencia Fibonacci,
             de la posicion ingresada en el argumento
Autora: Leticia Maldonado
Fecha de ultima modificacion: 22/06/2019
*/

#include <stdlib.h>
#include <iostream>
#include <assert.h>

using namespace std;

int fibonacci (int n)
{
	if (n<2)
	{
		return n;
	} else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}

int main () 
{
	// 1	1	2	3	5	8	13	21	34
	assert (34==fibonacci(9));
}
