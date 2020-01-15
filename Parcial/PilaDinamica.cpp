#include "PilaDinamica.h"
#include <iostream>

void InicializarPila (TPila& pila){
	pila.pila=NULL;
	pila.cardinal=0;
}

void Push(TPila &pila, int dato) {
	Nodo* nuevo = new Nodo();
	nuevo->dato = dato;
	nuevo->next = pila.pila;
	pila.pila = nuevo;
	pila.cardinal++;
}

int Pop(TPila &pila) {
	if (!EsPilaVacia(pila)) {
		int dato = pila.pila->dato;
		Nodo* borrado = pila.pila;
		pila.pila = pila.pila->next;
		delete borrado;
		pila.cardinal--;
		return dato;
	}
}

bool EsPilaVacia(TPila pila) {
	return pila.cardinal == 0;
}

int Get(TPila pila, unsigned index) {
	if (EsPilaVacia(pila) || index > pila.cardinal || index == 0) {
		return 0;
	}
	for (unsigned i = 1; i <= pila.cardinal; i++) {
		pila.pila = pila.pila->next;
	}
	return pila.pila->dato;
}

void EnviarPilaaCout(TPila pila){
	for (unsigned i = 1; i <= pila.cardinal; i++){
		std::cout << "\n" << i << ":" << pila.pila->dato;
		pila.pila=pila.pila->next;
	}
}








