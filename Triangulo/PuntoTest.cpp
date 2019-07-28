//PuntoTest.cpp

/*
	Trabajo Práctico Triángulo
	Descripción: Test Unitario para Punto
	Autor: Leticia Maldonado
	Fecha Ultima Modificación: 28/07/2019
*/

#include <assert.h>
#include "Punto.h"
#include <iostream>
#include <math.h>

int maina () {

	//Comprobamos ExtraerPunto
	punto nuevo;
	nuevo = ExtraerPunto(1.0,3.0);
	assert (nuevo.x == 1.0);
	assert (nuevo.y == 3);

	//Comprobamos Distancia = 0
	int dis = 0;
	dis = Distancia(ExtraerPunto(3,3), ExtraerPunto(3,3));
	assert(dis==0);
	
	//Comprobamos Distancia != 0
	dis = 0;
	dis = Distancia(ExtraerPunto(0,0), ExtraerPunto(0,4));
	assert(dis==4);
	
	dis = Distancia(ExtraerPunto(0,0), ExtraerPunto(5,0));
	assert(dis==5);

	dis = Distancia(ExtraerPunto(0,0), ExtraerPunto(3,4));
	assert(dis==5);
	
	//Comrobamos SonDistanciasIguales
 	assert (SonDistanciasIguales(ExtraerPunto(0,0), ExtraerPunto(6,0), ExtraerPunto(3,(3*sqrt(3))))==true);

	//Comrobamos SonDistanciasDistintas
	assert (SonDistanciasDistintas(ExtraerPunto(0,0), ExtraerPunto(6,0), ExtraerPunto(4,3))==true);
}

