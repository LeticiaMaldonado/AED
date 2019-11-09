/*
	Trabajo Practico Circulos Cuadrante
	Descripcion: Desarrollo de funciones de circulo.h
	Autor: Leticia Maldonado
	Fecha Ultima Modificacion: 08/11/2019
*/

#include "circulo.h"

TCirculo CrearCirculo (float x, float y, int radio)
{
	TCirculo circulo;
	circulo.radio = radio;
	circulo.x = x;
	circulo.y = y;
	return circulo;	
}

TCuadrante ObtenerCuadrante (TCirculo circulo)
{
	if (circulo.x > 0) and (circulo.y > 0) { return PrimerCuadrante; }
	else if (circulo.x > 0) and (circulo.y < 0) { return CuartoCuadrante; }
	else if (circulo.x < 0) and (circulo.y > 0) { return SegundoCuadrante; }
	else if (circulo.x < 0) and (circulo.y < 0) { return TercerCuadrante; }
	else { return Origen; }
}

char* CuadranteToString (TCuadrante cuadrante)
{
	switch cuadrante {
	case PrimerCuadrante: return "Primer Cuadrante";
	case SegundoCuadrante: return "Segundo Cuadrante";
	case TercerCuadrante: return "Tercer Cuadrante";
	case CuartoCuadrante: return "Cuarto Cuadrante";
	case Origen: return "Origen de Coordenadas";
	}
}

