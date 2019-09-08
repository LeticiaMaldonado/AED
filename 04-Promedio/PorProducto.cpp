/*
	Trabajo Práctico 04 : Promedio
	Descripción: Implementación de PorProducto.h  
	Autor: Leticia Maldonado
	Fecha Ultima Modificación: 08/09/2019
*/

#include "PorProducto.h"
#include <AnioRegion.h>
#include <stdlib.h>

using namespace std;

void clearProducto (TProducto vector[]){
	for (int i=0; i<2; i++){
		clearRegion(vector[i].arrayRegion);
	}
}

void IngresoProducto (TProducto vector[], unsigned producto, unsigned region, unsigned anio, double valor){
	IngresoValoresRegion(vector[producto].arrayRegion, region, anio, valor);	
}

void InformarPorProducto (TProducto vector[]){
	for (int i=0; i<2; i++){
		cout << "\nPromedio por Region por Anio del Producto " << (i+1);
		InformarRegiones(vector[i].arrayRegion);
	}
}



