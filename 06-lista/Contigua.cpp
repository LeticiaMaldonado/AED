/*
	Trabajo Practico Listas
	Descripcion: Desarrollo de funciones definidas en Contigua.h
	Autor: Leticia Maldonado
	Fecha Ultima Modificacion: 11/11/2019
*/

#include "Contigua.h"

void InitLista (TListaEnteros &lista)
{
	lista.cardinal = 0;
}

unsigned Put (TListaEnteros &list, int value)
{
	list.lista[list.cardinal] = value;
	list.cardinal+=1;
}

unsigned Length (TListaEnteros lista)
{
	return lista.cardinal;
}

// en el caso de listas contiguas, la complejidad algoritmica es 1, ya que se corresponde con el indice n 
