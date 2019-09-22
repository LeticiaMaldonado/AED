/*
	Trabajo Práctico 04 : Promedio
	Descripción: Test Unitario de PorAnio.Cpp
	Autor: Leticia Maldonado
	Fecha Ultima Modificación: 08/09/2019
*/

#include <assert.h>
#include <iostream>
#include "PorAnio.h"

int main() {
	
	TAnio vect[10];
	clearArray(vect);
	
	IngresoValores(vect, 2016, 12);
	IngresoValores(vect, 2016, 12);
	IngresoValores(vect, 2016, 12);
	IngresoValores(vect, 2016, 12);
	
	assert(vect[6].anio==2016);
	assert(vect[6].cant==4);
	assert(vect[6].sum==48);
	
	clearArray(vect);
	assert(vect[0].anio==0);
	assert(vect[0].cant==0);
	assert(vect[0].sum==0);
	
	return 0;
}
