/*
	Trabajo Práctico 04 : Promedio
	Descripción: Test Unitario de PorProducto.Cpp
	Autor: Leticia Maldonado
	Fecha Ultima Modificación: 08/09/2019
*/

#include <iostream>
#include <assert.h>
#include "PorProducto.h"

int main() {
	
	TProducto producto;
	clearProducto(Producto);
	
	IngresoProducto(vect,0, 1, 2016, 12);
	IngresoProducto(vect,0, 1, 2016, 12);
	IngresoProducto(vect,1, 1, 2018, 12);
	IngresoProducto(vect,1, 1, 2018, 12);
	
	assert(producto.arrayRegion[0].arrayAnio[6].anio==2016);
	assert(producto.arrayRegion[0].arrayAnio[6].cant==2);
	assert(producto.arrayRegion[0].arrayAnio[6].sum==24);

	assert(producto.arrayRegion[1].arrayAnio[8].anio==2016);
	assert(producto.arrayRegion[1].arrayAnio[8].cant==2);
	assert(producto.arrayRegion[1].arrayAnio[8].sum==24);
	
	clearProducto(Producto);
	assert(producto.arrayRegion[0].arrayAnio[6].anio==0);
	assert(producto.arrayRegion[0].arrayAnio[6].cant==0);
	assert(producto.arrayRegion[0].arrayAnio[6].sum==0);

	assert(producto.arrayRegion[1].arrayAnio[8].anio==0);
	assert(producto.arrayRegion[1].arrayAnio[8].cant==0);
	assert(producto.arrayRegion[1].arrayAnio[8].sum==0);
	
	return 0;
}
