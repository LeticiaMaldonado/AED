/*
	Trabajo Practico Listas Estaticas
	Descripcion: Desarrollo de funciones definidas en Listas.h
	Autor: Leticia Maldonado
	Fecha Ultima Modificacion: 08/11/2019
*/



#include "Listas.h"

void InitLista (TListaEnteros lista)
{
	lista.cardinal = 0;
}

unsigned Put (TListaEnteros lista, int value)
{
	lista.cardinal++;
	lista.lista[lista.cardinal] = value;
}

unsigned Length (TListaEnteros lista)
{
	return lista.cardinal;
}

// en el caso de listas contiguas, la complejidad algoritmica es 1, ya que se corresponde con el indice n 
