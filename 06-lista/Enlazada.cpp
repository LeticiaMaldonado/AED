 /*
	Trabajo Practico Listas Dinamicas
	Descripcion: Implementacion de las funciones de Enlazada.h
	Autor: Leticia Maldonado
	Fecha Ultima Modificacion: 08/11/2019
*/

#include "Enlazada.h"

void InitLista (Nodo* lista)
{
	*lista.next = null;	
}

void Put (Nodo* lista, int value)
{
	Nodo* aux;
	aux = lista;
	
	Nodo* nuevo;
	new nuevo;
	*nuevo.dato = value;
	*nuevo.next = null;
	
	while (*aux.next != null)
	{
		aux = *aux.next;
	}
	
	*aux.next = nuevo;
}

unsigned Length (Nodo* lista)
{
	unsigned contador=0;
	Nodo* aux=lista;
	while (*aux.next != null)
	{
		aux = *aux.next;
		contador++;
	}
	
	return contador;
}

// En el caso de listas enlazadas, la complejidad algoritmica es n, ya que es necesario recorrer toda la lista 
