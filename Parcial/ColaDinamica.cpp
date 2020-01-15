#include "ColaDinamica.h"
#include <iostream>

void InicializarCola (TCola& cola){
	cola.principio=NULL;
	cola.fin=NULL;
	cola.cardinal=0;
}

void Queue(TCola &cola, int dato) {
	Nodo* nuevo = new Nodo();
	nuevo->dato = dato;
	nuevo->next = NULL;

	if (cola.cardinal == 0) {
		cola.principio = nuevo;
	}
	cola.fin->next = nuevo;
	cola.fin = nuevo;
	cola.cardinal++;
}

int Dequeue(TCola &cola) {
	if (cola.cardinal == 0) {
		return 0;
	}
	int dato = cola.principio->dato;
	Nodo* eliminado = cola.principio;
	cola.principio = cola.principio->next;
	delete eliminado;
	cola.cardinal--;
	return dato;
}

int Get(TCola cola, unsigned index) {
	if (cola.cardinal == 0 || index > cola.cardinal || index == 0) {
		return 0;
	}
	for (unsigned i = 1; i <= index; i++) {
		cola.principio = cola.principio->next;
	}
	return cola.principio->dato;
}

void EnviarColaaCout(TCola cola){
	
	for(unsigned i=1; i<cola.cardinal;i++){
		std::cout<< "\n" << i << ":" << cola.principio->dato;
	}
}


