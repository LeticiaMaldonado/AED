/*
	Trabajo Pr�ctico 04 : Promedio
	Descripci�n: Cabecera de AnioRegion.cpp - Calcula Promedio por Region y Por A�o
	Autor: Leticia Maldonado
	Fecha Ultima Modificaci�n: 08/09/2019
*/
#include "PorAnio.h"

struct TRegion {
	TAnio arrayAnio[10];
};

void clearRegion (TRegion vect[]);
void IngresoValoresRegion (TRegion[], unsigned, unsigned, double);
void InformarRegiones (TRegion[])
