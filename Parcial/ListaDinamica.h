#include "Nodos.h"

struct TLista {
	Nodo* lista;
	unsigned cardinal = 0;
};

void Insertar(TLista&, int);
void Eliminar(TLista, unsigned);
void EnviarACout(TLista);
unsigned Buscar(TLista, int);
bool EsListaVacia(TLista);
int Get(TLista, unsigned);
