/*Este programa nos dira si el primer numero es igual, mayor o menor respecto al segundo*/

/*Nos indica la libreria que usamos*/
#include <stdio.h>

/*Funcion maestra del programa*/
int main ()
{
	/*Esta linea me permite definir una variable de tipo entero*/
	int numero1, numero2;
	/*Imprimos a la pantalla instrucciones para el usuario*/
	printf("Este programa le dira si el primero numero es igual, mayor o menor respecto al segundo. Introduzca dos numeros enteros \n");
	/*Le permitimos al usuario interactuar con el programa e introducir una varialbe de tipo entero*/
	scanf("%i %i", &numero1, &numero2);

	/*Esta dando la condicion si los numeros son iguales lo indique*/
	if(numero1==numero2)
	{
		printf("Los numeros son iguales: %d = %d \n", numero1, numero2);
	}
	
	/*Esta dando la condicion si numero1 es mayor que numero2 lo indique*/
	else if (numero1>numero2)
	{
		printf("El primer numero es mayor que el segundo %d > %d \n", numero1, numero2);
	}
	/*Esta dando la condicion si numero1 es menor que numero2 lo indique*/
	else
	{
		printf("El primer numero es menor que el segundo: %d < %d \n", numero1, numero2);
	}
	
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
}
