//TrianguloTest.cpp

/*
	Trabajo Práctico Triángulo
	Descripción: Test Unitario para Triangulo
	Autor: Leticia Maldonado
	Fecha Ultima Modificación: 28/07/2019
*/


#include "Triangulo.h"
#include <assert.h>
#include <math.h>

int main() {
	triangulo tEquil = ExtraerTriangulo (ExtraerPunto(0,0), ExtraerPunto(6,0), ExtraerPunto(3,3*sqrt(3)));
	triangulo tIso   = ExtraerTriangulo (ExtraerPunto(0,0), ExtraerPunto(4,0), ExtraerPunto(0,4));
	triangulo tEsc   = ExtraerTriangulo (ExtraerPunto(0,0), ExtraerPunto(2,0), ExtraerPunto(0,3));
    
	//test extraer triangulo
	assert(tEquil.a.x==0);
	assert(tEquil.a.y==0);
	assert(tEquil.b.x==6);
	assert(tEquil.b.y==0);
	assert(tEquil.c.x==3);
	assert(tEquil.c.y==(3*sqrt(3)));
     
	//test EsEquilatero
	assert (EsEquilatero(tEquil));
	assert (EsEquilatero(tIso)==false);
	assert (EsEquilatero(tEsc)==false);

	//test getTipo
	assert (getTipo(tEquil)==Equilatero);
	assert (getTipo(tIso)==Isosceles);
	assert (getTipo(tEsc)==Escaleno);
	
    //test getPerimetro
	assert (getPerimetro(tIso)==(8+sqrt(32)));
	assert (getPerimetro(tEquil)==18);
	assert (getPerimetro(tEsc)==(5+sqrt(13)));	
}
