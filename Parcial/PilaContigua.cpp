#include "PilaContigua.h"

void InicializarPila (TPila& pila){
	pila.cardinal=0;
}

void Push(TPila& pila, int dato) {
	if (pila.cardinal < LENGTH) {
		pila.cardinal++;
		pila.pila[pila.cardinal] = dato;
	}
}

int Pop(TPila& pila) {
	int dato = 0;
	if (!EsPilaVacia(pila)) {
		dato = pila.pila[pila.cardinal];
		pila.cardinal--;
	}
	return dato;
}

int Get(TPila pila, unsigned index) {
	if (index >= pila.cardinal || index == 0) {
		return 0;
	}
	return pila.pila[index];
}

bool EsPilaVacia(TPila pila) {
	return pila.cardinal == 0;
}

void EnviarPilaaCout(TPila pila){
	for (unsigned i=1; i<=pila.cardinal; i++){
		std::cout << "\n" << i << ":" << pila.pila[i];
	}
}
