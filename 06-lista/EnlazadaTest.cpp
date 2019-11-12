/*
	Trabajo Practico Listas
	Descripcion: Unidad de testeo de Enlazada.cpp
	Autor: Leticia Maldonado
	Fecha Ultima Modificacion: 11/11/2019
*/

#include "Contigua.h"
#include <assert.h>

int main (){
	TListaEnteros lista;
	InitLista(lista);
	assert (lista.cardinal==0);
	
	Put(lista, 548);
	assert(lista[0]==548);
	
	assert(Length(lista)==1);		
}
