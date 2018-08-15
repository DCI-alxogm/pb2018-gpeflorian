/*Creado el 15 de Agosto del 2018 por Guadalupe Florian*/
#include <stdio.h> 
	int main()

{

	int a,b,c,d,e;
	printf("Introduzca a continuacion 4 numeros enteros \n");
	scanf("%i %i %i %i", &a, &b, &c, &d);

	e=(a+b)*c/d;
	printf("El valor de la operacion e=(a+b)*c/d es %i \n", e);
	e=((a+b)*c)/d;
	printf ("El valor de la operacion e=((a+b)*c)/d es %i \n", e);
	e=(a+b)*c/d;
	printf ("El valor de la operacion e=(a+b)*c/d es %i \n", e);
	e=a+(b*c)/d;
	printf ("El valor de la operacion e=a+(b*c)/d es %i \n", e);
	return 0;

}
