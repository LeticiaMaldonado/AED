#include <stdlib.h>
#include <iostream>

#include "ColaContigua.h";
#include "PilaContigua.h";

#include "ColaDinamica.h";
#include "PilaDinamica.h";

//Este programa no compila, hay que incluir solo un header para cada tipo de estructura

using namespace std;

int main() {
	TCola cola;
	TPila pila;
	int dato;
	InicializarPila(pila);
	InicializarCola(cola);
		
	cout << "Ingrese números enteros. Sale con cero\n";
	cin >> dato;
	while (dato != 0) {
		Push(pila, dato);
    	cin >> dato;
	}
	
	cout << "\nlos números en orden inverso son:\n";
	EnviarPilaaCout(pila);
	while (pila.cardinal!=0){
		Queue(cola,Pop(pila));
	}
	
	cout << "\nlos números en orden original son:\n";
	EnviarColaaCout(cola);	
}




