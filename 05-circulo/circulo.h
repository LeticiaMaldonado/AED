/*
	Trabajo Practico Circulos Cuadrante
	Descripcion: Cabecera de circulo.cpp
	Autor: Leticia Maldonado
	Fecha Ultima Modificacion: 08/11/2019
*/

struct TCirculo {
	float x;
	float y;
	int radio;
};
enum TCuadrante { PrimerCuadrante, SegundoCuadrante, TercerCuadrante, CuartoCuadrante, Origen };

TCirculo CrearCirculo (float, float, int);
TCuadrante ObtenerCuadrante (TCirculo);
char* CuadranteToString (TCuadrante);


