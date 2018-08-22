/*Programa para calcular coordenadas cartesianas a esfericas. Creado por Guadalupe Florian el 20 de Agosto del 2018*/

#include <stdio.h>
#include <math.h>

	int main ()

{
	double x,y,z,r,c,a,gradosc,gradosa,x2,y2,z2;
	printf("Introduzca a continuacion los 3 valores de sus coordenadas cartesians\n");
	scanf("%lf %lf %lf", &x,&y,&z);


	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	printf("El valor del radio es %lf \n", r);

	c=acos(z/r);
	gradosc=c*57.29557795131;
	printf("El valor de la colatitud es %lf \n", gradosc);
	
	a=atan(y/x);
	gradosa=a*57.29557795131;
	printf("El valor del azimut es %lf \n", gradosa); 
	
	x2=r*(sin(gradosc)*57.29557795131)*(cos(gradosa)*57.29557795131);
	printf("Su coordenada cartesiana x es %lf \n", x2);

	y2=r*(sin(gradosc)*57.29557795131)*(sin(gradosa)*57.29557795131);
	printf("Su coordenada cartesiana y es %lf \n", y2);

	z2=r*(cos(gradosc)*57.29557795131);
	printf("Su coordenada cartesiana z es %lf \n", z2);
	
	return 0;
}
	


	

	


