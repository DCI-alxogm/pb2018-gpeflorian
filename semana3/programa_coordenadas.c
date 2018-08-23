/*Programa para calcular coordenadas cartesianas a esfericas. Creado por Guadalupe Florian el 20 de Agosto del 2018*/

#include <stdio.h>
#include <math.h>

	int main ()

{
	double x,y,z,r,c,a,x2,y2,z2;
	printf("Introduzca los valores de sus coordenadas x y z\n");
	scanf("%lf %lf %lf", &x,&y,&z);

	printf("Valor de coordenadas esfericas: \n");

	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	printf("Radio= %lf \n", r);

	a=atan(y/x)*57.29557795131;
	printf("Coaltitud= %lf \n", a);
	
	c=acos(z/r)*57.29557795131;
	printf("Azimut= %lf \n", c); 
	
	printf("Valor de las coordenadas cartecianas: \n");

	x2=r*sin(c)*cos(a);
	printf("x= %lf \n", x2);

	y2=r*sin(c)*sin(a);
	printf("y= %lf \n", y2);

	z2=r*cos(c);
	printf("z= %lf \n", z2);
	
	return 0;
}
	


	

	


