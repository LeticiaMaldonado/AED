//Triangulo.h

/*
	Trabajo Práctico Triángulo
	Descripción: Cabecera para Triangulo.cpp
	Autor: Leticia Maldonado
	Fecha Ultima Modificación: 28/07/2019
*/

#include "Punto.h"

enum
	TipoDeTriangulo {Isosceles, Equilatero, Escaleno};

struct triangulo {
	punto a;
	punto b;
	punto c;
};

TipoDeTriangulo getTipo (triangulo);
bool EsEquilatero (triangulo);
double getPerimetro (triangulo);
triangulo ExtraerTriangulo (punto, punto, punto);
