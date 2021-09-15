#include "defs.h"
#include <stdlib.h>				//  Para usar system()
#include <string.h>

void bases()
{
	//  %d - signed int 
	//  %u - unsigned int
	//  %o - Base octal (8)
	//  %x, %X - Base Hexadecimal (16)
	a = 179;		// Base 10 
	printf("179 Base 10 es %o Base 8\n", a);
	printf("179 Base 10 es %X Base 16\n", a);

	a = 0263;		// Base 8 
	printf("263 Base 8 es %d Base 10\n", a);
	printf("263 Base 8 es %X Base 16\n", a);

	a = 0xb3;		// Base 16 
	printf("B3 Base 16 es %d Base 10\n", a);
	printf("B3 Base16 es %o Base 8\n", a);
}


int main()
{
	// Jerarquía nivel 1 - Operadores Primarios
	// Operador llamada a función
	bases();

	PRINT1(f, 5.0 / 9.0 * (80 - 32));
	PRINT1(d, 2 + 3 * ((4 - 5) + 6));
	PRINT1(d, 2 + 3 * 4 - 5 + 6);

	// Operador Índice de Arreglo ( [] )
	Arreglo[5] = 300;		// Guardo el numero 300 en la variable num 5 del arreglo

	//  Operador punto ( . )
	Juanito.edad = 30;
	strcpy(Juanito.nombre, "Juanito Perez");

	// Operador Flecha ( -> )
	ptrJuanito = &Juanito;
	ptrJuanito ->edad = 40;
	
	system("pause");			//  pausa en la consola
	return 0;
}