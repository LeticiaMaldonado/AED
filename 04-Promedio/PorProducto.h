/*
	Trabajo Pr�ctico 04 : Promedio
	Descripci�n: Cabecera de PorProducto.cpp  
	             Calcula Promedio por Producto, por Region y Por A�o
	Autor: Leticia Maldonado
	Fecha Ultima Modificaci�n: 08/09/2019
*/

struct TProducto {
	TRegion arrayRegion[2];
};

void clearProducto (TProducto[]);
void IngresoProducto (TProducto[], unsigned, unsigned, unsigned, double);
void InformarPorProducto (TProducto[]);

