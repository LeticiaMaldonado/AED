//Punto.h

/*
	Trabajo Práctico Triángulo
	Descripción: Cabecera para Punto.cpp
	Autor: Leticia Maldonado
	Fecha Ultima Modificación: 28/07/2019
*/

#include <stdlib.h>

struct punto {
	double x;
	double y;
};

double Distancia (punto, punto);
bool SonDistanciasIguales (punto, punto, punto);
bool SonDistanciasDistintas (punto, punto, punto);
punto ExtraerPunto (double, double);

