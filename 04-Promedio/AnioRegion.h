/*
	Trabajo Práctico 04 : Promedio
	Descripción: Cabecera de AnioRegion.cpp - Calcula Promedio por Region y Por Año
	Autor: Leticia Maldonado
	Fecha Ultima Modificación: 08/09/2019
*/
#include "PorAnio.h"

struct TRegion {
	TAnio arrayAnio[10];
};

void clearRegion (TRegion vect[]);
void IngresoValoresRegion (TRegion[], unsigned, unsigned, double);
void InformarRegiones (TRegion[])
