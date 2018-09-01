/*Programa para calcular coordenadas cartesianas a esfericas. Creado por Guadalupe Florian el 20 de Agosto del 2018*/

/*Se especifican las librerias que se usaran*/
#include <stdio.h>
#include <math.h>

	/*Funcion maestra del programa*/
	int main ()

{	/*Declaramos variables de tipo real con punto flotante*/
	double x,y,z,aux,r,l,a,X,Y,Z;
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
	
	/*Calculamos el vaor de aux elevando al cuadrado x,y, luego sacamos raiz y finalmente dividimos entre z */
		aux=(sqrt(pow(x,2)+pow(y,2)))/z;
		/*Calculamos l sacando la inversa de tangente de aux y multiplicando por 57.3*/
		l=atan(aux)*57.29557795131;
		a=(atan(y/x))*57.29557795131;
		/*Indicamos valor de l*/
		printf("Azimut= %lf \n", l); 
	
	/*Indicamos el valor de coordenadas polares a cartecianas de nuevo*/
	printf("Valor de las coordenadas cartecianas: \n");

	/*Multiplicamos radio por seno de c entre 57.3 y coseno de a entre 57.3 para calcular valor de x original*/
		X=r*sin(l/57.29557795131)*cos(a/57.29557795131);
		printf("x= %lf \n", X);
	
		/*Multiplicamos radio por seno de c entre 57.3 y seno de a entre 57.3 para calcular el valor de y original*/
		Y=r*sin(l/57.29557795131)*sin(a/57.29557795131);
		printf("y= %lf \n", Y);

		/*Multiplicamos radio por coseno de c entre 57.3 para calcular el valor de z original*/
		Z=r*cos(l/57.29557795131);
		printf("z= %lf \n", Z);

/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
}
	


	

	


