/*
	Trabajo Pr�ctico 04 : Promedio
	Descripci�n: Implementaci�n de AnioRegion.cpp
	Autor: Leticia Maldonado
	Fecha Ultima Modificaci�n: 08/09/2019
*/


#include <stdlib.h>
#include <iostream>
#include <PorAnio.h>
#include "AnioRegion.h"

using namespace std;

void clearRegion (TRegion vect[]){
	for (int i=0; i<3; i++){
		clearArray(vect[i].arrayAnio);
	}
}

void IngresoValoresRegion (TRegion vect[]; unsigned region; unsigned anio; double valor){
	IngresoValores(vect[region].arrayAnio, anio, valor);
}

void InformarRegiones (TRegion vect[])
{
	for (int i=0; i < 3; i++){
		cout << "\n\nPromedio por A�o para la Region: " << i;
		InformarVectorAnio (vect[i].arrayAnio);
	}
	
}

