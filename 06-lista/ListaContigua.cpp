/*
	Trabajo Practico Listas
	Descripcion: Programa principal de listas estaticas
	Autor: Leticia Maldonado
	Fecha Ultima Modificacion: 11/11/2019
*/

#include "Contigua.h"
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	TListaEnteros lista;
	InitLista(lista);
	int value;
	cout << "Ingrese valores para la lista (sale con 0)\n";
	cin >> value;
	while (value != 0){
		Put(lista, value);
		cin >> value;
	}
	cout << "\ncantidad de elementos: " << Length(lista);	
}
