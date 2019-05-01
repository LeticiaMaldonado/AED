/* 
TP 3: Tipos de Datos
Descripcion: Demostrar la aplicación de tipos de datos. 
Autor: Leticia Maldonado
Fecha de ultima modificacion: 01/05/2019
*/

#include <iostream>
#include <stdlib.h>

using namespace std;
	
	main() {
	
	// el tipo de dato int puede ser utilizado para contabilizar valores necesariamente enteros, mediante distintas operaciones aritmeticas simples. En este ejemplo se contabilizan tanto las personas que entran a un recinto como las que salen, siendo su diferencia las personas aun dentro o, en el caso que de negativo, salta un error en la contabilizacion. 
		
		int entradas; int salidas;
		entradas=9; salidas=7;
		
		cout<< "personas que siguen adentro: " << entradas-salidas;
	
	
		
	// el tipo de dato bool permite alojar solo dos estados, siendo muy util para comparaciones o para ahorrar espacio en algunos lenguajes en los que este tipo de dato ocupa solo un bit.
	
	bool verdadero;
	if (verdadero) { cout<< "\nel hotel seleccionado tiene servicio AC";} 
	
	
	
	// el tipo de dato char puede ser utilizado para llenar y comparar strings o vectores, y puede formar parte de simples operaciones matematicas con numeros enteros en tanto ocupa siempre solo un byte y a este valor le corresponde un numero en el codigo ascii, por lo que son muy importantes para la introduccion de datos por teclado
	
	char letra; 
	letra='a';
	cout<< "\nel char es la letra: " << letra;
	
	
	// El tipo de dato string es un vector de chars que permite alojar una palabra. Segun el lenguaje se pueden realizar distintas operaciones, en especial en lenguajes orientados a objetos. Es muy importante en la comunicacion del programa con el usuario. 	
	
	char nombre[8]="Leticia";
	cout << "\nel nombre este alumno que cumplio con la tarea es: " << nombre;	

	
	// El tpo de dato unsigned permite representar valores enteros y positivos, por lo que permite un rango de representacion mayor al del int, pero se restringe los valores mayores a cero. En el ejemplo se contabilizan valores que nunca decrecen.
	
	unsigned clases;
	clases=4;
	cout<< "\nesta clase es la numero: " << clases;
	
	//El tipo de dato double ocupa mas espacio para permitir el maximo rango y precision en representacion de numeros (no llega a representar al conjunto de los irracionales por ser infinitos no periodicos), por lo que es el que permite trabajar con operaciones complejas.
	
	double dividendo; double divisor; double resultado;
	dividendo= 68765168,5876546546;
	divisor= 83665,576546865687368368;
	
	resultado= dividendo/divisor;
	cout<<"\nel resultado es : " << resultado;
	
	}
