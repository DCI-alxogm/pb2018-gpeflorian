/*Este programa describe las instruccioes que llevará a cabo la función void cuadrado. Creado por Gaudalupe Florian el 17 de octubre del 2018.*/

/*Librerias que se usan en el programa*/
#include<stdio.h>

void cuadrado (){

	/*Declaración de variables de tipo flotante*/
	float x,x2;

	/*Definición de las acciones que realiza la función*/
	printf("Introduce un numero\n");
	scanf("%f",&x);
	x2=x*x;
	printf("El cuadrado de %f es %f \n",x,x2);
}
