/* 
TP 10: Funciones Recursivas con Operador Condicional
Descripcion: Consta de una funcion que calcula el Máximo Común Divisor (mcd)
			 entre dos numeros aplicando el Algoritmo de Euclides.
Autora: Leticia Maldonado
Fecha de ultima modificacion: 22/06/2019
*/

#include <stdlib.h>
#include <iostream>
#include <assert.h>

using namespace std;

int mcd (int a, int b)
{
	if (a==0 || b==0) return 0;
	else {
		int aux = b;
		b = a % b;
		a = aux;
		if (b!=0)
			mcd(a,b);
		else
			return a;	
	}
}

int main () 
{
	assert (4==mcd(16,12));
}
