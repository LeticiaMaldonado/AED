/*
	Trabajo Pr�ctico 04 : Promedio
	Descripci�n: C�lculo de Promedios
	Autor: Leticia Maldonado
	Fecha Ultima Modificaci�n: 08/09/2019
*/

#include <stdlib.h>
#include <iostream>

using namespace std;

int main (){
	int count=0;
	double sum=0;
	double aux;
	cin >> aux;
	while (aux != 0){
		sum += aux;
		count ++;
		cin >> aux;
	}
	cout << "\nEl promedio es: " << (sum / count);
} 
