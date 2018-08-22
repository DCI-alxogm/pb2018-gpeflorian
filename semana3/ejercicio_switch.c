/*Este programa me sirve para calcular temperaturas y coordenadas*/

#include <stdio.h>

	int main()

	{
	
	int opcion;

	printf("Teclea una opcion \n");
	printf("(1) para convertir tempertaturas \n"); 
	printf("(2) para convertir coordenadas\n");

	scanf("%i", &opcion);

	switch(opcion)
	{
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
	return 0;
	}
	

