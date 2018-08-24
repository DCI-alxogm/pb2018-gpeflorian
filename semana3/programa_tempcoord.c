/*Este programa convierte temperaturas y coordendas*/

#include <stdio.h>
#include<math.h>

	int main()
	{
	
	
	int opcion;
	float temperatura, k, f, c;
	double x,y,z,aux,r,l,a,X,Y,Z;

	
	printf("Teclea una opcion \n");
	printf("(1) Para convertir tempertaturas de Celcius a Farenheit y Kelvin\n"); 
	printf("(2) Para convertir de coordenadas cartesianas a esfericas \n");
	scanf("%i", &opcion);

	
	switch(opcion)
	{

	case 1: 
		printf("Introduzca los grados C que desee convertir a K y F \n");
		scanf ("%f", &temperatura);

		f=(temperatura*1.8)+32;
		printf("Los grados en  Centigrados que introdujo a Farenhheit son %f \n", f);
		
		k=temperatura+273.15;
		printf("Los grados en Centigrados que introdujo a Kelvin son %f \n", k);

		c=(f-32)/1.8;
		printf("Finalmente aqui se muestran los grados Centigrados del inicio %f \n", c);
		break;

	case 2:
		printf("Introduzca los valores de sus coordenadas x y z\n");
		scanf("%lf %lf %lf", &x,&y,&z);

		printf("Valor de coordenadas esfericas: \n");

		r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
		printf("Radio= %lf \n", r);

		a=(atan(y/x))*57.29557795131;
		printf("Coaltitud= %lf \n", a);
		
		aux=(sqrt(pow(x,2)+pow(y,2)))/z;
		l=atan(aux)*57.29557795131;
		printf("Azimut= %lf \n", l); 
		
		if (x==0 && y==0)
		printf(" La coordenada (%lf, %lf) se encuentra en el origen \n", x,y);
	
		else if (x>0 && y>0)
		printf ("La coordenada (%lf,%lf) se encuentra en el primer cuadrante \n", x,y);

		else if (x<0 && y>0)
		printf ("La coordenada (%lf,%lf) se encuentra en el segundo cuadrante \n", x,y);

		else if (x<0 && y<0)
		printf ("La coordenada (%lf,%lf) se encuentra en el tercer cuadrante \n", x,y);

		else if (x>0 && y<0)
		printf ("La coordenada (%lf,%lf) se encuentra en el cuarto cuadrante \n", x,y);
	
	
		printf("Valor de las coordenadas cartecianas: \n");

		X=r*sin(l/57.29557795131)*cos(a/57.29557795131);
		printf("x= %lf \n", X);
	
		Y=r*sin(l/57.29557795131)*sin(a/57.29557795131);
		printf("y= %lf \n", Y);

		Z=r*cos(l/57.29557795131);
		printf("z= %lf \n", Z);
		break;
	default:
		printf("Opcion invalida\n");
		break;
	}

	return 0;
	}
