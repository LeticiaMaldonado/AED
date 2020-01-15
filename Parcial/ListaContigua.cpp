#include "ListaContigua.h"
#include <iostream>

void InicializarLista(TLista& lista){
	lista.cardinal=0;
}

void Insertar(TLista& lista, int dato){
	lista.lista[++lista.cardinal]=dato;
}

void Eliminar(TLista lista, unsigned index){
	for (unsigned i=index; i<=lista.cardinal; i++){
		lista.lista[i]=lista.lista[i+1];
	}
	lista,cardinal--;
}

void EnviarACout(TLista lista){
	for (unsigned i= 1; i<=lista.cardinal;i++){
		std::cout << "\n" << i << ":" << lista.lista[i];
	}
}

unsigned Buscar(TLista lista, int key){
	for (unsigned i = 1; i<=lista.cardinal;i++){
		if (lista.lista[i]==key){
			return i;
		}
	}
	return 0;
}

bool EsListaVacia(TLista lista){
	return lista.cardinal==0;
}

int Get(TLista lista, unsigned index){
	return lista.lista[index];
}
