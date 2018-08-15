/*Creado el 15 de Agosto de 2018 por Guadalupe Florian*/

#include <stdio.h>

int main ()
{

	int edad,edad2;
	char nombre [20];

	printf("¡Hola! Dime tu nombre \n");
	scanf("%s", &nombre);
	printf("Este programa te dirá cual sera tu edad en el 2028 \n");
	printf("Dime tu edad \n");
	scanf("%i",&edad);
	edad2=edad+10;
	printf("%s tu edad en el 2028 sera: %i \n", nombre,edad2);
	return 0;

}


