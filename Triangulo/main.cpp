//main.cpp

/*
	Trabajo Práctico Triángulo
	Descripción: Unidad Principal. Se Ingresan las coordenadas de los puntos de un triángulo
				  y se informan las caracteristicas del mismo (Tipo de triángulo y Perímetro)
	Autor: Leticia Maldonado
	Fecha Ultima Modificación: 28/07/2019
*/

#include <iostream>
#include <stdlib.h>
#include "Triangulo.h"
#include <string.h>

using namespace std;

string informarTriangulo (triangulo t) {
	TipoDeTriangulo tipo = getTipo(t);
	if (tipo==Equilatero) return "Equilatero"; 
	if (tipo==Isosceles)  return "Isosceles"; 
	if (tipo==Escaleno)   return "Escaleno"; 
}

int main () {
	//se pasan las coordenadas de los puntos del triangulo y se informan las caracteristicas
	double x, y;
	punto pa, pb, pc;
	triangulo miAux;
	 
	cout << "                    TRIANGULO C++     \n";
	cout << "                   ===============    \n\n";
	//punto A
	cout << "Punto A - Coord. X: ";
	cin  >> x;
	cout << "          Coord. Y: ";
	cin  >> y;
	pa = ExtraerPunto(x,y);
	//punto B
	cout << "\nPunto B - Coord. X: ";
	cin  >> x;
	cout << "          Coord. Y: ";
	cin  >> y;
	pb = ExtraerPunto(x,y);
	//punto C
	cout << "\nPunto C - Coord. X: ";
	cin  >> x;
	cout << "          Coord. Y: ";
	cin  >> y;
	pc = ExtraerPunto(x,y);

    miAux = ExtraerTriangulo(pa, pb, pc);
    if (not EsEquilatero(miAux)) {
		cout << "\nEl Triangulo NO es Equilatero\n";
		cout << "El Triangulo es " << informarTriangulo(miAux);
	}
	else
		cout << "El Triangulo es Equilatero \n";
	
	cout << "\nEl Perimetro de este Triangulo es " << getPerimetro(miAux); 
}
