//   Sesión - 21 - 04/10/2021


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
	printf("Nombre: %s\n",Juanito.nombre);

	// Operador Flecha ( -> )
	ptrJuanito = &Juanito;
	ptrJuanito -> edad = 40;
	strcpy(ptrJuanito->nombre, "Juanito López");
	printf("Nombre: %s\n",ptrJuanito->nombre);
}

void unarios()
{
	// Jerarquía nivel 2 - Operadores Unarios
	// Operador negación lógica ( ! )
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

	//  Operador Dirección ( & ) - Unarios
	a = 50;
	ptr = &a;
	printf("La dirección de memoria de la variable a es %p y guarda %d\n", &a, a);
	printf("La dirección de memoria de la variable ptr es %p y guarda %p \n", &ptr, ptr);

	//  Operador Indirección ( * ) - Unarios
	printf("El valor guardado en la dirección guardada en la variable ptr es: %d \n", *ptr);
	*ptr = 60;
	printf("El valor guardado en la dirección guardada en la variable ptr es: %d \n", *ptr);
	printf("La dirección de memoria de la variable a es %p y guarda %d\n", &a, a);

	//  Operador Tamaño de...  ( sizeof )
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
	f = h;			//	pérdida de información
	// Conversión explicita
	a = (int) car;	
	f = (float) a;			// int => float;
	h = (double) f;			//  float  => double
	f = (float) h;			//	pérdida de información

	h = (double) car;		//  char => float
}

void multiplicativos()
{
	//  Jearquía nivel 3: Operadores multiplicativos
	//  Multiplicación ( * )  - Binaria
	PRINT1(d, 500 * 350);

	//  División  ( / )
	PRINT1(d, 5 / 2);		//   División entera: entero / entero = entero
	PRINT1(f, 5.0 / 2);
	PRINT1(f, 5 / 2.0);
	PRINT1(7.3f, 5.0 / 2.0);

	PRINT1(f, 5 / 9 * (80 - 32));		//  ERROR!   División entera
	PRINT1(f, 5.0 / 9.0 * (80 - 32));

	//  Módulo o Residuo de la división ( % )
	printf("5 %% 2 = %d \n", 5 % 2);
}
void aditivos() 
{
	//  Jerarquía nivel 4 - Operadores Aditivos
	// Suma  ( + )  - Binaria
	PRINT1(d, 5 + 2);
	
	// Resta  ( - )  - Binaria
	PRINT1(d, 5 - 2);
}
void desplazamiento() 
{
	//  Jerarquía Nivle 5: Operadores de Desplazamiento (Numeros Binarios)
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
}
void relacionales()
{
	//  Jerarquía nivel 6 - Operadores relacionales
	PRINT1(d, 5 > 2);			//  Operador Mayor que ( > )
	PRINT1(d, 5 >= 2);			//  Operador Mayor o igual que ( >= )
	PRINT1(d, 5 < 2);			//  Operador Menor que ( < )
	PRINT1(d, 5 <= 2);			//  Operador Menor o igual que ( <= )

	a = 0;
	PRINT1(d, !5 > a++);
	a = 0;
	PRINT1(d, !!5 > a++);
	a = 0;
	PRINT1(d, !!5 > ++a);
}

void igualdad()
{
	//  Jerarquía Nivel 7 - Operadores de Igualdad

	//  Operador igual que ( == )
	PRINT1(d, 5 == 2);

	//  Operador NO igual que ( != )
	PRINT1(d, 5 != 2);
}
void deBits()
{
	//   Operadores de Bits

	//  Jerarquía Nivel 8 - Operadores de Bits
	//  Operado AND de bits ( & ) -  Binario
	a = 13;
	b = 26;
	PRINT1(d, a & b);

	//  Jerarquía Nivel 9 - Operadores de Bits
	//  Operado OR de bits ( | ) -  Binario
	a = 13;
	b = 26;
	PRINT1(d, a | b);

	//  Jerarquía Nivel 10 - Operadores de Bits
	//  Operado XOR de bits ( ^ ) -  Binario
	a = 13;
	b = 26;
	PRINT1(d, a ^ b);
}
void logicos()
{
	//  Jerarquía Nivel 11 - Operadores lógicos

	//  Operado AND logico ( && ) 
	a = 0;
	b = 26;
	PRINT1(d, a && b);
	PRINT1(d, 0 && 26);
	//  Jerarquía Nivel 12 - Operadores lógicos

	//  Operado OR logico ( || ) 
	a = 0;
	b = 26;
	PRINT1(d, a || b);
	PRINT1(d, 0 || 26);

}
void condicional()
{
//  Jerarquía Nivel 13 - Operador Condicional
	//  Operador condicional ( ? : )
	a = 20;
	b = 10;
	PRINT2(d, a, b);
	(a < b) ? PRINT1(d, a) : PRINT1(d, b);

	a = 10;
	b = 20;
	PRINT2(d, a, b);
	(a < b) ? PRINT1(d, a) : PRINT1(d, b);
}
void asignacion()
{
//  Jerarquía Nivel 14 - Operadores de asignación
	// Operador ASignación Simple ( = )


	PRINT1(d, a = 20);

	//  Asignación múltiple ( = )
	a = b = c = d = 0;
	PRINT4(d, a, b, c, d);

	//  Asignación compuesta
	a = 10;
	PRINT1(d, a += 5);
	PRINT1(d, a);

	a = 10;
	PRINT1(d, a -= 5);
	PRINT1(d, a);

	a = 10;
	PRINT1(d, a *= 5);
	PRINT1(d, a);

	a = 10;
	PRINT1(d, a /= 5);
	PRINT1(d, a);

	a = 10;
	PRINT1(d, a %= 5);
	PRINT1(d, a);

	a = 10;
	PRINT1(d, a <<= 5);
	PRINT1(d, a);

	a = 10;
	PRINT1(d, a >>= 5);
	PRINT1(d, a);

	a = 10;
	PRINT1(d, a |= 5);
	PRINT1(d, a);

	a = 10;
	PRINT1(d, a &= 5);
	PRINT1(d, a);

	a = 10;
	PRINT1(d, a ^= 5);
	PRINT1(d, a);
}
void coma()
{
	// Jerarquía nivel  15 -  Operador coma
	// Operador coma ( , )
	PRINT4(d, a, b, c, d);
}

int main()
{
	//  Ejercicios operadores
	a = 3; b = 3; c = 0; d = -1; e = 3; f = 2;
	PRINT1(d, a+=2*a*++b);
	PRINT4(d, a, b, c, d); PRINT2(f, e,f); NL;

	a = 3; b = 3; c = 0; d = -1; e = 3; f = 2;
	PRINT1(d, b+=b+b++);
	PRINT4(d, a, b, c, d); PRINT2(f, e,f); NL;

	a = 3; b = 3; c = 0; d = -1; e = 3; f = 2;
	PRINT1(f, e/=d+d*a);
	PRINT4(d, a, b, c, d); PRINT2(f, e,f); NL;

	a = 3; b = 3; c = 0; d = -1; e = 3; f = 2;
	PRINT1(d, !a+!b+(c&&d));
	PRINT4(d, a, b, c, d); PRINT2(f, e,f); NL;

	a = 3; b = 3; c = 0; d = -1; e = 3; f = 2;
	PRINT1(d, d=(a||b)&&(c||(d&&!f)));
	PRINT4(d, a, b, c, d); PRINT2(f, e,f); NL;

	a = 3; b = 3; c = 0; d = -1; e = 3; f = 2;
	PRINT1(d, a%b*c-d++);
	PRINT4(d, a, b, c, d); PRINT2(f, e,f); NL;
	
	system("pause");			//  pausa en la consola
	return 0;
}