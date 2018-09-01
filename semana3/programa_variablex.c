/*Programa creado para resolver ecuaciones pidiendo una variable x. Creado por Guadalupe Florian el 20 de Agosto del 2018*/

/*Indicamos las librerias que usaremos*/
#include <stdio.h>
#include <math.h>

	/*Funcion maestra del programa*/
	int main ()

{
	/*Definimos varialbes de tipo real con punto flotante*/
	double x,grados,y;

	/*Indicamos al usuario que introduzca un valor al sistema para calcuarlo*/
	printf("Introduzca a continuacion un valor para calcular las ecuaciones\n");

	/*El usuario puede intdoducir una variable ral de tipo entero con punto flotante al sistema*/
	scanf("%lf", &x);
	
	/*Para calcular el valor de grados multiplicamos x por 57.3*/
	grados=x*57.29557795131;

	/*Para calcular el valor de y le sacamos el exp*/
	y=exp(-x);
	/*Indicamos el usuario la operacion realizada y el resultado*/
	printf("El valor para la operacion y=exp(-x) es %lf \n", y);

	/*Para calcular y sacamos coseno de grados y muliplicamos la tangente de grados entre dos*/
	y=cos(grados)+2*tan(grados/2);
	/*Indicamos el usuario la operacion realizada y el resultado*/
	printf("El valor para la operacion y=cos(x)+2*tan(x/2) es %lf \n", y);

	/*Para calcular y sacamos logaritmo de x y elevamos x al cuadrado y multiplicamos p or 3*/
	y=log(x)+3*pow(x,2);
	/*Indicamos el usuario la operacion realizada y el resultado*/
	printf("El valor para la operacion y=log(x)+3*(x)^2 es %lf \n", y);
	return 0;

	

 

	

}

