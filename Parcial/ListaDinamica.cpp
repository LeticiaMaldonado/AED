#include "Lista.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

void Insertar(TLista& l, int valor) {
	Nodo* nuevo = new Nodo();
	nuevo->dato = valor;
	nuevo->next = l.lista;
	l.lista = nuevo;
	l.cardinal++;
}

void Eliminar(TLista l, unsigned index) {
	TLista aux = l;
	Nodo* Eliminar;
	for (unsigned i = 1; i < index; i++) {
		aux.lista = aux.lista->next;
	}
	Eliminar = aux.lista->next;
	aux.lista->next = Eliminar->next;
	delete Eliminar;
}

void EnviarACout(TLista l) {
	for (unsigned i = 1; i <= l.cardinal; i++) {
		cout << "\n" << i << ":" << Get(l, i);
	}
}

unsigned Buscar(TLista l, int key) {
	for (unsigned i = 1; i <= l.cardinal; i++) {
		if (key == Get(l, i)) {
			return i;
		}
	}
	return 0;
}

int Get(TLista l, unsigned index) {
	TLista aux = l;
	if ((l.cardinal >= index) and (index > 0)) {
		for (unsigned i = 1; i < index; i++) {
			aux.lista = aux.lista->next;
		}
		return aux.lista->dato;
	}
}

bool EsListaVacia(TLista l) {
	return (l.cardinal == 0);
}
