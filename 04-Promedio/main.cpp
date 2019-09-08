

#include <iostream>
#include <stdlib.h>
#include <PorProducto.h>

using namespace std;

int main() {
	TProducto arrayProducto[2];
	unsigned auxProducto = 0;
	unsigned auxRegion = 0;
	unsigned auxAnio = 0;
	double auxValor = 0;

	cout << "\nProducto: "; cin >> auxProducto;
	while (auxProducto != 0){
		cout << "\nRegion ";  cin >> auxRegion;
		cout << "\nAño ";     cin >> auxAnio;
		cout << "\nValor ";   cin >> auxValor;
		IngresoProducto (arrayProducto[auxProducto], auxRegion, auxAnio, auxValor);
		cout << "\nProducto: "; cin >> auxProducto;
	}
	
	InformarPorProducto (arrayProducto); 
	
	return 0;
}
