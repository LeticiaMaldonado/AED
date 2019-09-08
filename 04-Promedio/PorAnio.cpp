/*
	Trabajo Práctico 04 : Promedio
	Descripción: Implementación de PorAnio.h
	Autor: Leticia Maldonado
	Fecha Ultima Modificación: 08/09/2019
*/

#include <stdlib.h>
#include <iostream>
#include "PorAnio.h"

using namespace std;


void clearArray (TAnio vect[]){
	for (int i=0; i<10; i++){
		vect[i].anio = 0;
		vect[i].sum = 0;
		vect[i].cant = 0;
	}
}

void IngresoValores (TAnio arrayAnio[], unsigned anio, double valor) {
		if ((anio>=2010) and (anio <= 2020)) {
			arrayAnio[anio-2010].anio = anio;
			arrayAnio[anio-2010].cant++;
			arrayAnio[anio-2010].sum += valor;
		}
}

void InformarVectorAnio (TAnio arrayAnio[]){
	for (int i=0; i<10; i++){
		if (arrayAnio[i].cant == 0)
			cout << "\nEl promedio del año " << 2010+i << " es: 0";
		else
			cout << "\nEl promedio del año " << 2010+i << " es: " << (arrayAnio[i].sum / arrayAnio[i].cant);
	}
}




