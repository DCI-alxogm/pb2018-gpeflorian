/*Este programa convierte temperaturas y coordendas*/

/*Se indica la libreria que usamos*/
#include <stdio.h>
#include<math.h>

	/*Funcion maestra del programa*/
	int main()
	{
	
	/*Declaramos variables de tipo entero*/
	int opcion;
	/*Declaramos variables de tipo real con punto flotante*/
	float temperatura, k, f, c;
	/*Declaramos variables de tipo real con punto flotante*/
	double x,y,z,aux,r,l,a,X,Y,Z;

	/*Le indicamos al usuario escoger una opcion dada por el sistema*/
	printf("Teclea una opcion \n");
	printf("(1) Para convertir tempertaturas de Celcius a Farenheit y Kelvin\n"); 
	printf("(2) Para convertir de coordenadas cartesianas a esfericas \n");
	/*El usuario puede introdcir un numero que indica la opcion deseada*/
	scanf("%i", &opcion);

	/*Permite usar el valor de la variable opcion, que es de tipo entero, para elegir la secuencia de acciones a realizar */
	switch(opcion)
	{

	/*Se le indica al programa que hacer en caso que el usuario eliga la opcion 1*/
	case 1: 
		/*Se le indica al programa que hacer en caso que el usuario eliga la opcion 1*/
		printf("Introduzca los grados C que desee convertir a K y F \n");
		scanf ("%f", &temperatura);

		/*Calculamos el valor de los grados Fahrenheit f multiplicando la temperatura por 1.8 y le sumamos 32*/
		f=(temperatura*1.8)+32;
		printf("Los grados en  Centigrados que introdujo a Farenhheit son %f \n", f);
		
		/*Calculamos el valor de los grados Kelvin k  sumando 275.15 a la temperatura*/
		k=temperatura+273.15;
		printf("Los grados en Centigrados que introdujo a Kelvin son %f \n", k);

		/*Calculamos el valor de los grados centigrados original c restando 32 a f y luego dividiendo entre 1.8*/
		c=(f-32)/1.8;

		/*Se indica en la patnalla que el valor mostrado es de los grados centigrados c dados originalmente*/
		printf("Finalmente aqui se muestran los grados Centigrados del inicio %f \n", c);
		break;

	/*Se le indica al programa que hacer en caso que el usuario eliga la opcion 2*/
	case 2:
		/*Se le pide al usuario introducir valor de coordenadas cartesianas x,y,z*/
		printf("Introduzca los valores de sus coordenadas x y z\n");
		/*Le damos al usiario la opcion de entrar variables al sistema*/
		scanf("%lf %lf %lf", &x,&y,&z);

		/*Le comunicamos los resultados al usuario que tansformamos coordenadas cartesianas a polares*/
		printf("Valor de coordenadas esfericas: \n");

		/*Operacion indica que elevamos al cuadrado x,y,z y luego le sacamos raíz para el radio*/
		r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
		/*Indicamos valor de r*/
		printf("Radio= %lf \n", r);

		/*Operacion indica que elevamos al cuadrado x,y,z y luego le sacamos raíz para el radio*/
		a=(atan(y/x))*57.29557795131;
		/*Indicamos valor de a*/
		printf("Coaltitud= %lf \n", a);
		
		/*Calculamos el vaor de aux elevando al cuadrado x,y, luego sacamos raiz y finalmente dividimos entre z */
		aux=(sqrt(pow(x,2)+pow(y,2)))/z;
		/*Calculamos l sacando la inversa de tangente de aux y multiplicando por 57.3*/
		l=atan(aux)*57.29557795131;
		a=(atan(y/x))*57.29557795131;
		/*Indicamos valor de l*/
		printf("Azimut= %lf \n", l); 
		
		/*Indicamos la condicion si x,y son 0 la coordenada se encuentra en el origen*/
		if (x==0 && y==0)
		printf(" La coordenada (%lf, %lf) se encuentra en el origen \n", x,y);
	
		/*Indicamos la condicion que si x es mayor a cero y y menor a cero la coordenada se encuednta en el primer cuadrante*/
		else if (x>0 && y>0)
		printf ("La coordenada (%lf,%lf) se encuentra en el primer cuadrante \n", x,y);

		/*Indicamos si x es menor a cero y y es mayor a cero la coordenada se encuentra en la segunda parte del cuadrante*/
		else if (x<0 && y>0)
		printf ("La coordenada (%lf,%lf) se encuentra en el segundo cuadrante \n", x,y);

		/*Indicamos si x es menor a cero y  es menor a cero la coordenada se encuentra en el tercer cuadrante*/
		else if (x<0 && y<0)
		printf ("La coordenada (%lf,%lf) se encuentra en el tercer cuadrante \n", x,y);

		/*Indicamos si x es mayora cero y y es menor a cero la coordenada se encuentra en el cuarto cuadrante*/
		else if (x>0 && y<0)
		printf ("La coordenada (%lf,%lf) se encuentra en el cuarto cuadrante \n", x,y);
	
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
		break;

	/*Si no se obedece ninguna de las opciones anteriores en cuanto a los casos entonces e marca como error*/
	default:
		printf("Opcion invalida\n");
		break;
	}
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
	}
