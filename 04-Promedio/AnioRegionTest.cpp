/*
	Trabajo Práctico 04 : Promedio
	Descripción: Test Unitario de AnioRegion.Cpp
	Autor: Leticia Maldonado
	Fecha Ultima Modificación: 08/09/2019
*/

#include <iostream>
#include <assert.h>
#include "AnioRegion.h"

int main() {
	
	TRegion vect[3];
	clearRegion(vect);
	
	IngresoValoresRegion(vect, 1, 2016, 12);
	IngresoValoresRegion(vect, 1, 2016, 12);
	IngresoValoresRegion(vect, 1, 2016, 12);
	IngresoValoresRegion(vect, 1, 2016, 12);
	
	assert(vect[0].arrayAnio[6].anio==2016);
	assert(vect[0].arrayAnio[6].cant==4);
	assert(vect[0].arrayAnio[6].sum==48);
	
	clearRegion(vect);
	assert(vect[0].arrayAnio[6].anio==0);
	assert(vect[0].arrayAnio[6].cant==0);
	assert(vect[0].arrayAnio[6].sum==0);
	
	return 0;
}
