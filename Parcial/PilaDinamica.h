#include "Nodos.h"

struct TPila {
	Nodo* pila;
	unsigned cardinal;
};

void InicializarPila (TPila&);
void Push(TPila&, int);
int Pop(TPila&);
int Get(TPila, unsigned);
bool EsPilaVacia(TPila);
void EnviarPilaaCout(TPila);
