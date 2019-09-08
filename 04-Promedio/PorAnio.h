/*
	Trabajo Pr�ctico 04 : Promedio
	Descripci�n: Cabecera PorAnio.h - Calcula Promedio de valores por a�o
	Autor: Leticia Maldonado
	Fecha Ultima Modificaci�n: 08/09/2019
*/

struct TAnio {
	unsigned anio;
	double sum;
	int cant;
};

void clearArray (TAnio[]);
void IngresoValores (TAnio[], unsigned, double);
void InformarVectorAnio (TAnio[]);
