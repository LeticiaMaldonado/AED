/*
	Trabajo Practico Listas
	Descripcion: Unidad de Testeo para Contigua.cpp
	Autor: Leticia Maldonado
	Fecha Ultima Modificacion: 11/11/2019
*/

#include "Contigua.h"
#include <assert.h>

int main (){
	TListaEnteros listaContigua;
	InitLista(listaContigua);
	assert (listaContigua.cardinal==0);
	
	Put(listaContigua, 548);
	assert(listaContigua.lista[0]==548);
	
	assert(Length(listaContigua)==1);		
}
