/*Programa para calcular coordenadas cartesianas a esfericas. Creado por Guadalupe Florian el 20 de Agosto del 2018*/

/*Se especifican las librerias que se usaran*/
#include <stdio.h>
#include <math.h>

	/*Funcion maestra del programa*/
	int main ()

{	/*Declaramos varialbes de tipo real con punto flotante*/
	double x,y,z,r,c,a,x2,y2,z2;
	printf("Introduzca los valores de sus coordenadas x y z\n");
	/*Le damos al usiario la opcion de entrar variables al sistema*/
	scanf("%lf %lf %lf", &x,&y,&z);
	
	/*Le comunicamos los resultados al usuario que tansformamos coordenadas cartesianas a 		polares con sus respectivas operaciones*/
	printf("Valor de coordenadas esfericas: \n");
	
	/*Operacion indica que elevamos al cuadrado x,y,z y luego le sacamos raíz para el radio*/
	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	printf("Radio= %lf \n", r);

	/*Sacamos tanjente de x entre y y lo multiplicamos por 57.3 para calcular valor de a*/
	a=atan(y/x)*57.29557795131;
	printf("Coaltitud= %lf \n", a);
	
	/*Sacamos arco coseno de z entre radio, y lo multiplicamos por 57.3 para calcular valor de c*/
	c=acos(z/r)*57.29557795131;
	printf("Azimut= %lf \n", c); 
	
	/*Indicamos el valor de coordenadas polares a cartecianas de nuevo*/
	printf("Valor de las coordenadas cartecianas: \n");

	/*Multiplicamos radio por seno de c y coseno de a para calcular valor de x original*/
	x2=r*sin(c)*cos(a);
	printf("x= %lf \n", x2);
	
	/*Multiplicamos radio por seno de c y seno de a para calcular el valor de y original*/
	y2=r*sin(c)*sin(a);
	printf("y= %lf \n", y2);

	/*Multiplicamos radio por coseno de c para calcular el valor de z original*/
	z2=r*cos(c);
	printf("z= %lf \n", z2);
	
	return 0;
}
	


	

	


