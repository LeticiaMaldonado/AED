/* 
TP 10: Funciones Recursivas con Operador Condicional
Descripcion: Consta de una funcion que devuelve el valor entero de la division 
			 entre dos numeros naturales
Autora: Leticia Maldonado
Fecha de ultima modificacion: 22/06/2019
*/

#include <stdlib.h>
#include <iostream>
#include <assert.h>

using namespace std;

int divisionEntera (int num, int den)
{
	if (num>=den)
	{
		return 1+divisionEntera(num-den, den);
	} else
	{
		return 0;
	}
}

int main () 
{
	assert (8==divisionEntera(16,2));
	assert (3==divisionEntera(10,3));
}
