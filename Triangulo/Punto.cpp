//Punto.cpp

/*
	Trabajo Práctico Triángulo
	Descripción: Desarrollo de funciones definidas en Punto.h
	Autor: Leticia Maldonado
	Fecha Ultima Modificación: 28/07/2019
*/


#include "Punto.h"
#include <math.h>

double Distancia (punto a, punto b){
	return sqrt(pow(a.x-b.x, 2)+pow(a.y-b.y, 2));
}

bool  SonDistanciasIguales (punto a, punto b, punto c){
	return ((Distancia(a,b) == Distancia(b,c)) and (Distancia(b,c) == Distancia(c,a)));
}

bool  SonDistanciasDistintas (punto a, punto b, punto c){
	return ((Distancia(a,b) != Distancia(b,c)) and (Distancia(b,c) != Distancia(c,a)) and
	        (Distancia(a,b) != Distancia(c,a)));
}

punto ExtraerPunto (double x, double y)	{
	punto res;
	res.x = x;
	res.y = y;
	return res;
}
