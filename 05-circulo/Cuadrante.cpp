/*
	Trabajo Practico Circulos Cuadrante
	Descripcion: Programa que, al ingresar cordenadas y radio, informa en que cuadrante se encuentra el circulo
	Autor: Leticia Maldonado
	Fecha Ultima Modificacion: 08/11/2019
*/

#include "circulo.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

main()
{
	float x, y;
	int radio;
	TCirculo circulo;
	
	cout << "Ingrese Cordenada X: "; cin >> x;
	cout << "\nIngrese Cordenada Y: "; cin >> y;
	cout << "\nIngrese Radio: "; cin >> radio;
	
	circulo = CrearCirculo(x,y,radio);
	
	cout << "/nEl Circulo se encuentra en el " << CuadranteToString(ObtenerCuadrante(circulo));
}
