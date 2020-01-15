#include <iostream>
#include "ColaContigua.h"

void InicializarCola (TCola& cola){
	cola.cardinal=0;
}

void Queue(TCola& cola, int dato) {
	if (cola.cardinal + 1 < LENGTH) {
		cola.cola[++cola.cardinal] = dato;
	}
}

int Dequeue(TCola& cola) {
	if (EsColaVacia(cola)) {
		return 0;
	}
	int dato = cola.cola[1];
	for (unsigned i = 1; i < cola.cardinal-1; i++) {
		cola.cola[i] = cola.cola[i + 1];
	}
	return dato;
}

int Get(TCola cola, unsigned index) {
	return cola.cola[index];
}

bool EsColaVacia(TCola cola) {
	return cola.cardinal == 0;
}

void EnviarColaaCout(TCola cola){
	for(unsigned i=1; i<=cola.cardinal;i++){
		std::cout<< "\n" << i << ":" << cola.cola[i];
	}
}
