/*
	Trabajo Práctico 04 : Promedio
	Descripción: Cabecera PorAnio.h - Calcula Promedio de valores por año
	Autor: Leticia Maldonado
	Fecha Ultima Modificación: 08/09/2019
*/

struct TAnio {
	unsigned anio;
	double sum;
	int cant;
};

void clearArray (TAnio[]);
void IngresoValores (TAnio[], unsigned, double);
void InformarVectorAnio (TAnio[]);
