#include "Nodos.h"

struct TCola {
	Nodo* principio;
	Nodo* fin;
	unsigned cardinal;
};

void InicializarCola (TCola&);
void Queue(TCola&, int);
int Dequeue(TCola&);
int Get(TCola, unsigned);
void EnviarColaaCout();
