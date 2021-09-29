//  Sesi�n 17 - 23/09/2021

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


void primarios()
{
	// Jerarqu�a nivel 1 - Operadores Primarios
	// Operador llamada a funci�n
	bases();

	PRINT1(f, 5.0 / 9.0 * (80 - 32));
	PRINT1(d, 2 + 3 * ((4 - 5) + 6));
	PRINT1(d, 2 + 3 * 4 - 5 + 6);

	// Operador �ndice de Arreglo ( [] )
	Arreglo[5] = 300;		// Guardo el numero 300 en la variable num 5 del arreglo

	//  Operador punto ( . )
	Juanito.edad = 30;
	strcpy(Juanito.nombre, "Juanito Perez");
	printf("Nombre: %s\n",Juanito.nombre);

	// Operador Flecha ( -> )
	ptrJuanito = &Juanito;
	ptrJuanito -> edad = 40;
	strcpy(ptrJuanito->nombre, "Juanito L�pez");
	printf("Nombre: %s\n",ptrJuanito->nombre);
}

void unarios()
{
	// Jerarqu�a nivel 2 - Operadores Unarios
	// Operador negaci�n l�gica ( ! )
	a = 0;			// guardamos un FALSO
	if(a)
		printf("Esto es verdadero\n");
	else
		printf("Esto NO es verdadero (falso)\n");
	if(!a)
		printf("Esto es verdadero\n");
	else
		printf("Esto NO es verdadero (falso)\n");
	PRINT1(d, a);
	PRINT1(d, !a);
	PRINT1(d, !!!!!!!!!!!!!!a);
	PRINT1(d, (a > 0));
	PRINT1(d, !(a > 0));

	// Operadores mas unario ( + ) y menos Unario ( - )
	a = +3;				// Mas unario
	b = -3;				// Menos Unario

	PRINT2(d, a, b);
	PRINT2(+d, a, b);

	// Operador complento a 1 ( ~ )
	a = 21;
	PRINT2(d, a, ~a);

	// Operadores Incremento ( ++ ) y decremento ( -- )
	a = 10;
	a++;
	PRINT1(d, a);

	a = 10;
	++a;
	PRINT1(d, a);

	a = 10;
	a--;
	PRINT1(d, a);

	a = 10;
	--a;
	PRINT1(d, a);

	a = 10;
	PRINT1(d, a++);
	PRINT1(d, a);

	a = 10;
	PRINT1(d, ++a);
	PRINT1(d, a);

	a = 5; b = 5;
	PRINT1(d, a++ + b);
	PRINT2(d, a, b);

	a = 5; b = 5;
	PRINT1(d, a++ + ++b);
	PRINT2(d, a, b);

	a = 5; b = 8; c = 0;
	PRINT1(d, a++ + b-- + !c--);
	PRINT3(d, a, b, c);

	//  Operador Direcci�n ( & ) - Unarios
	a = 50;
	ptr = &a;
	printf("La direcci�n de memoria de la variable a es %p y guarda %d\n", &a, a);
	printf("La direcci�n de memoria de la variable ptr es %p y guarda %p \n", &ptr, ptr);

	//  Operador Indirecci�n ( * ) - Unarios
	printf("El valor guardado en la direcci�n guardada en la variable ptr es: %d \n", *ptr);
	*ptr = 60;
	printf("El valor guardado en la direcci�n guardada en la variable ptr es: %d \n", *ptr);
	printf("La direcci�n de memoria de la variable a es %p y guarda %d\n", &a, a);

	//  Operador Tama�o de...  ( sizeof )
	printf("El tipo de dato char ocupa %d bytes.\n", sizeof(char) );
	printf("El tipo de dato int ocupa %d bytes.\n", sizeof(int) );
	printf("El tipo de dato float ocupa %d bytes.\n", sizeof(float) );
	printf("El tipo de dato double ocupa %d bytes.\n", sizeof(double) );
	printf("El tipo de dato struct Persona ocupa %d bytes.\n", sizeof(struct Persona) );
	printf("La variable Juanito ocupa %d bytes.\n", sizeof(Juanito) );
	printf("La variable Arreglo double ocupa %d bytes.\n", sizeof(Arreglo) );

	//  Operador Cast ( (tipo de dato) ) 

	e = 3;
	car = 50.0;
	PRINT1(f, e);
	PRINT1(c, car);
	// Promocion de tipos:

	a = car;		//  char = int
	f = a;			//  int => float
	h = f;			//  float  => double
	f = h;			//	p�rdida de informaci�n
	// Conversi�n explicita
	a = (int) car;	
	f = (float) a;			// int => float;
	h = (double) f;			//  float  => double
	f = (float) h;			//	p�rdida de informaci�n

	h = (double) car;		//  char => float
}

void multiplicativos()
{
	//  Jearqu�a nivel 3: Operadores multiplicativos
	//  Multiplicaci�n ( * )  - Binaria
	PRINT1(d, 500 * 350);

	//  Divisi�n  ( / )
	PRINT1(d, 5 / 2);		//   Divisi�n entera: entero / entero = entero
	PRINT1(f, 5.0 / 2);
	PRINT1(f, 5 / 2.0);
	PRINT1(7.3f, 5.0 / 2.0);

	PRINT1(f, 5 / 9 * (80 - 32));		//  ERROR!   Divisi�n entera
	PRINT1(f, 5.0 / 9.0 * (80 - 32));

	//  M�dulo o Residuo de la divisi�n ( % )
	printf("5 %% 2 = %d \n", 5 % 2);
}
void aditivos() 
{
	//  Jerarqu�a nivel 4 - Operadores Aditivos
	// Suma  ( + )  - Binaria
	PRINT1(d, 5 + 2);
	
	// Resta  ( - )  - Binaria
	PRINT1(d, 5 - 2);
}
int main()
{
	//  Jerarqu�a Nivle 5: Operadores de Desplazamiento (Numeros Binarios)
	//  Oerador desplazamiento a la izquierda ( << )
	a = 53;
	PRINT1(d, a);
	PRINT1(d, a << 1);
	PRINT1(d, a << 2);
	PRINT1(d, a << 3);

		//  Oerador desplazamiento a la izquierda ( << )
	a = 424;
	PRINT1(d, a);
	PRINT1(d, a >> 1);
	PRINT1(d, a >> 2);
	PRINT1(d, a >> 3);
	PRINT1(d, a >> 4);
	
	system("pause");			//  pausa en la consola
	return 0;
}