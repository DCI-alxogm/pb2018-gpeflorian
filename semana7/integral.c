
/*Se escribo un programa que lee de un archivo la potencia de la funcion x^p y p>=1, así como el intervalo en el que se evaluará la funcion un N número de veces. También calculará una integral f(x) desde el valor m{inimo del intervalo hasta el valor x. Creado por Guadalupe Florian en Septiempre 19 del 2018.*/


/*Me indica las librerias que usare para el programa*/
#include<stdio.h>
/*Se usa la libreria de Math por el uso de potencial */
#include<math.h>


/*Funcion maestra del programa*/
int main (){

	/*Declaro variables FILE*/
	FILE *integral;
	FILE *resultados;
	/*Declaro variables tipo enteras y de punto flotante*/
	int P,a,b,N,i,k;
	float x,h,e,fx,x1,f;

	/*Se lee el archivo Integral.txt, donde se encuentran valores de P,a,b,N,k*/
	integral=fopen("Integral.txt","r");
	

			/*Mi programa lee en orden los valores P,a,b,N,k*/
			fscanf(integral,"%i",&P);
		
				/*Si P es menor que uno, se mostrara este mensaje*/
				if(P<1){
					printf("El valor de P debe ser mayor a 1");
					}

			/*Leo los valores de a,b,N,k en archivo Integral.txt en el orden que se establecio en dicho archivo*/
			fscanf(integral,"%i",&a);

			fscanf(integral,"%i",&b);

			fscanf(integral,"%i",&N);
			
			fscanf(integral,"%i",&k);
		
		/*Se cierra el archivo Integral.txt*/
		fclose(integral);
	
				/*Calculo el valo de mi espaciado, igual al minimo a menos el maximo b entre el numero de veces que se evalua N*/
				e=(b-a)/N;
	
				/*Se escribe un archivo que contenga los resultados de mi programa*/
				resultados=fopen("Resultados.txt","w");				
					
					/*Se imprime en la pantalla el indicador de valores*/
					fprintf(resultados,"   x           F(x)           I(x)\n");
	
						/*Ciclo for me indica que x empieza con valor minimo 'a', finaliza con valor mayor o igual a 'b' y tiene un espaciado de 'e'*/
						for(x=a;x<=b;x+=e){
		
						/*Calculo valor de h, es igual a x menos a entre k*/
						h=(x-a)/k;

						/*Calculo valor de x1 que eleva el valor de x a la potencia del valor de P*/
						x1=pow(x,P);
				
						/*Calculo valor de fx que es igual a 'a' elevado ala potencia P, le sumo x1 y se divide entre dos*/
						fx=(pow(a,P)+x1)/2;
				
							/*Ciclo for me indica que i empieza en 1, finaliza con valor menor a 'k' y se le suma una unidad cada vez que se repite el ciclo*/
							for(i=1;i<k;i++){

							/*Calculo valor de funcion que indica que */
							f+=pow(a+(i*h),P);
			
									}
					

								/*Indico que al último resutltado de f lo multiplico por el resultado de h*/
								f*=h;

			
			/*Imprimo a mi documento Resultados.txt los resultados de las variables x, x1 y f*/
			fprintf(resultados,"%f    %f    %f \n",x,x1,f);

						}
			/*Cierro el documento Resultados.txt*/
			fclose(resultados);
				
		

			
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
	}
