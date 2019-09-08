/*
	Trabajo Práctico 04 : Promedio
	Descripción: Cabecera de PorProducto.cpp  
	             Calcula Promedio por Producto, por Region y Por Año
	Autor: Leticia Maldonado
	Fecha Ultima Modificación: 08/09/2019
*/

struct TProducto {
	TRegion arrayRegion[2];
};

void clearProducto (TProducto[]);
void IngresoProducto (TProducto[], unsigned, unsigned, unsigned, double);
void InformarPorProducto (TProducto[]);

