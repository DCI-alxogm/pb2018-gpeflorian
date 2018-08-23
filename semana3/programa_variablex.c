/*Programa creado para resolver ecuaciones pidiendo una variable x. Creado por Guadalupe Florian el 20 de Agosto del 2018*/

#include <stdio.h>
#include <math.h>

	int main ()

{

	double x,grados,y;
	printf("Introduzca a continuacion un valor para calcular las ecuaciones\n");
	scanf("%lf", &x);
	
	grados=x*57.29557795131;

	y=exp(-x);
	printf("El valor para la operacion y=exp(-x) es %lf \n", y);

	y=cos(grados)+2*tan(grados/2);
	printf("El valor para la operacion y=cos(x)+2*tan(x/2) es %lf \n", y);

	y=log(x)+3*pow(x,2);
	printf("El valor para la operacion y=log(x)+3*(x)^2 es %lf \n", y);
	return 0;

	

 

	

}

