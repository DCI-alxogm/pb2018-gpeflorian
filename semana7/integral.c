
/*Este programa es un ejemplo para la funcion array vista en clase. Creado por Guadalupe Florian en Septiempre 10 del 2018.*/


/*Me indica las librerias que usare para el programa*/
#include<stdio.h>
#include<math.h>


/*Funcion maestra del programa*/
int main (){

	/*Declaro variables FILE*/
	FILE *integral;
	FILE *resultados;
	/**/
	int P,a,b,N,i,k;
	float x,h,e,fx,x1,f;


	integral=fopen("Integral.txt","r");
	

		integral=fopen("Integral.txt","r");


			fscanf(integral,"%i",&P);
		
			fscanf(integral,"%i",&a);

			fscanf(integral,"%i",&b);

			fscanf(integral,"%i",&N);
			
			fscanf(integral,"%i",&k);
		

		fclose(integral);
	
			e=(b-a)/N;
	
			resultados=fopen("Resultados.txt","w");				
					
				fprintf(resultados,"   x           F(x)           I(x)\n");

				for(x=a;x<=b;x+=e){
		
				h=(x-a)/k;

				x1=pow(x,P);
				
				fx=(pow(a,P)+x1)/2;
				

					for(i=1;i<k;i++){

					f+=pow(a+(i*h),P);
			
							}
					

		
				f*=h;

			

			fprintf(resultados,"%f    %f    %f \n",x,x1,f);

						}

			fclose(resultados);
				
		

			
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
	}
