/* 
TP 10: Funciones Recursivas con Operador Condicional
Descripcion: Consta de una funcion que calcula Factorial de un Numero
Autora: Leticia Maldonado
Fecha de ultima modificacion: 23/06/2019
*/

#include <stdlib.h>
#include <iostream>
#include <assert.h>

using namespace std;

unsigned long int factorial (int n)
{
	if (n==0)
		return 0;
	else {
		if (n==1)
		{
			return n;
		}
		else
		{
			return n*factorial(n-1);
		}
	}
}

int main () 
{
	assert (120==factorial (5));
}
