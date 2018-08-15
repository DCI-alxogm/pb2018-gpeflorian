/*Creado el 15 de Agosto del 2018 por Guadalupe Florian. Este programa pide introducir 4 numeros reales y el programa imprime las operaciones ya resueltas*/
#include <stdio.h> 
	int main()

{

	double a,b,c,d,e;
	printf("Introduzca a continuacion 4 numeros reales \n");
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

	e=(a+b)*c/d;
	printf("El valor de la operacion e=(a+b)*c/d es %lf \n", e);
	e=((a+b)*c)/d;
	printf ("El valor de la operacion e=((a+b)*c)/d es %lf \n", e);
	e=(a+b)*c/d;
	printf ("El valor de la operacion e=(a+b)*c/d es %lf \n", e);
	e=a+(b*c)/d;
	printf ("El valor de la operacion e=a+(b*c)/d es %lf \n", e);
	return 0;

}
