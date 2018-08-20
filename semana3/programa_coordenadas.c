/*Programa para calcular coordenadas cartesianas a esfericas. Creado por Guadalupe Florian el 20 de Agosto del 2018*/

#include <stdio.h>
#include <math.h>

	int main ()

{

	double x,y,z,r,c,a,grados;
	printf("Introduzca a continuacion los 3 valores de sus coordenadas cartesians\n");
	scanf("%lf %lf %lf", &x,&y,&z);


	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	printf("El valor del radio es %lf \n", r);

	c=acos(z/r);
	grados=c*57.29557795131;
	printf("El valor de la colatitud es %lf \n", grados);
	
	a=atan(y/x);
	grados=a*57.29557795131;
	printf("El valor del azimut es %lf \n", grados); 
	return 0;

}
	


	

	


