/*Este programa me sirve para calcular temperaturas y coordenadas*/

/*Nos indica la libreria que usamos*/
#include <stdio.h>

	/*Funcion maestra del programa*/
	int main()

	{
	
	/*Aqui especificamos que usaremos variables de tipo entero*/
	int opcion;

	/*Aqui le pide al usuario escoger una opcion dada por el programa*/
	printf("Teclea una opcion \n");
	/*Aqui le da las opciones a elegir*/
	printf("(1) para convertir tempertaturas \n"); 
	printf("(2) para convertir coordenadas\n");

	/*Aqui estamos dejando que el usuario entre al sistema una opcion*/
	scanf("%i", &opcion);

	/*Switch permite usar el valor de una variable entera para elegir secuencia de acciones de acuerdo al caso que corresponda*/
	switch(opcion)
	{
	/*Cada liea de case te da una opcion con el que el programa hara una accion, dependendo de la informacion que entre el usuario*/
	case 1: 
		printf("Entre la opcion 1");
		break;
	case 2:
		printf("Entre la opcion 2");
		break;
	default:
		printf("Opcion invalida");
		break;
	}
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
	}
	

