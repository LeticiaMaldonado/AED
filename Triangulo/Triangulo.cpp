//Triangulo.cpp

/*
	Trabajo Práctico Triángulo
	Descripción: Desarrollo de funciones definidas en Triangulo.h
	Autor: Leticia Maldonado
	Fecha Ultima Modificación: 28/07/2019
*/

#include "Triangulo.h"

TipoDeTriangulo getTipo (triangulo T){
	if (SonDistanciasIguales(T.a, T.b, T.c))
		return Equilatero;
	if (SonDistanciasDistintas(T.a, T.b, T.c))
		return Escaleno;
	else
		return Isosceles;
}

bool EsEquilatero (triangulo T){
	if (getTipo(T) == Equilatero)
		return true;
	else
		return false;	
}

double getPerimetro (triangulo T){
	return Distancia(T.a, T.b) + Distancia(T.b, T.c) + Distancia(T.c, T.a);
}

triangulo ExtraerTriangulo (punto a, punto b, punto c){
	triangulo T;
	T.a = a;
	T.b = b;
	T.c = c;
	return T;	
}

