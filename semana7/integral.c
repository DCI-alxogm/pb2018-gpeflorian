
/*Este programa es un ejemplo para la funcion array vista en clase. Creado por Guadalupe Florian en Septiempre 10 del 2018.*/


/*Me indica las librerias que usare para el programa*/
#include<stdio.h>
#include<math.h>


/*Funcion maestra del programa*/
int main (){

	FILE *integral;
	FILE *resultados;
	integral=fopen("Integral.txt","r");
	int P,a,b,N,i;
	float x,h,I;

		integral=fopen("Integral.txt","r");

		
		for(i=0;i<N;i++){

			fscanf(integral,"%i",&P);

				if(P<1)
				printf("El valor de la potencia debe ser igual o mayor a 1 \n");
				else if(P>30)
				printf("El valor de P no puede ser mayor a 30");
					
		
			fscanf(integral,"%i",&a);

			fscanf(integral,"%i",&b);

			fscanf(integral,"%i",&N);
		
				}

		fclose(integral);

			
	resultados=fopen("Resultados_integral.txt","w");
		

		x=exp(P);
		fprintf(resultados,"%f",x);
		
		h=




	fclose(resultados);

		
			

			
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
	}
