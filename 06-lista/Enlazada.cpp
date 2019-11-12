 /*
	Trabajo Practico Listas
	Descripcion: Implementacion de las funciones de Enlazada.h
	Autor: Leticia Maldonado
	Fecha Ultima Modificacion: 11/11/2019
*/

#include "Enlazada.h"
#include <iostream>

void InitLista (Nodo* &lista)
{
	lista = NULL;	
}

void Put (Nodo* &lista, int value)
{	
	Nodo* nuevo = new Nodo();
	nuevo->dato = value;
	nuevo->next = NULL;
	
	if (lista==NULL){
		lista = nuevo;
	} else {
		Nodo* aux = lista;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = nuevo;
	}
}

unsigned Length (Nodo* &lista)
{
	unsigned contador=1;
	Nodo* aux=lista;
	while (aux->next != NULL)
	{
		aux = aux->next;
		contador++;
	}
	
	return contador;
}

// En el caso de listas enlazadas, la complejidad algoritmica es n, ya que es necesario recorrer toda la lista 
