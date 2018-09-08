/*Este programa permitira determinar los numero primos que hay entre un rango dado de numeros por oel usuario. Creado por Guadalupe Florian*/


/*Me indica las librerias que usare para el programa*/
#include<stdio.h> 
#include<math.h> 


/*Funcion maestra del programa*/
int main(){


	/*Declaramos variables de tipo entero*/
	int i,j,p1,p2,primo,res,option=1,count; 
	
		/*Permite realizar un loop mientras la opcion sea la primer escogida por el usuario*/
		while(option==1){ 


		/*Inicio mi contador en 0 para que se aumente una unidad por vez que se ejecute mi programa*/
		count=0; 
		

			/*Le pide al usuario ingresar rango inicial y final*/
			printf("Introducir el numero con el que desee iniciar y terminar el rango \n"); 
			/*Permito al usuario ingresar un numero inicial y final*/
			scanf("%i %i",&p2,&p1);


				/*Indica que el rango solo puede contener 100  numeros*/
				while((p2-p1)>100){ 
				
				/*Imprime a la pantalla un aviso para el usuario que el intervalo puede incluir solo un máximo de 100 digitos*/
				printf("Favor de colocar un intervalo menor a 100"); 
					
			printf("Escribe el intervalo de dos numeros dentro del cual deseas saber los numeros primos que existen \n");
				scanf("%i %i",&p1,p2);
					
				}

			/*El primer i me indica onde inicia el intervalo, el segundo i me indica donde termina y el i++ me indica que se añade una unidad a la cual se ejecutaran las condiciones dadas para le calculo del resultado*/
			for(i=p1; i<=p2; i++){ 
				
				/*res es igual a la raiz cuadrada del valo de i*/
				res=sqrt(i); 
				
				/*El valor inicial del numero primo es igual a uno*/
				primo=1; 

				/*Para determinar si un numero es primo, hay que dividir el resultado de la raíz del número. Luego dividirla entre todos los numeros empezando por el 2*/
				for(j=2; j<=res; j++){ 

					/*Nos indica la condicion que si el resultado es igual a cero entonces el numero no es primo*/
					if((i%j)==0){ 
					
					/*Nos ayuda a determinar un valor de primo inicial en cero*/
					primo=0;
					}
					}

						/*Indica la condicion de que si el residuo de la divicion es un, entonces es numero primo*/
						if(primo==1){ 
						/*Imprime a la pantalla los numeros primos dentro del rango dado por el usuario*/
						printf(" %i",i);
						/*No ayuda a ver la cantidad de numeros primos impresos*/
						count=count+1; 
		
							/*Esta condicion if le indica al programa que al llevar al veinteavo termino se saltará a la siguiente línea*/
							if(count%20==0 ){
							printf("\n"); 
									}

					}	
					}

				/*Pregunta al usuario si desea ejecutar de nuevo el programa o si desea salir de el */
				printf("\n Introduce 1 si quieres volver a realizar el programa, 2 si quieres salir: \n"); 
				/*Usuario puede ingresar la opcion que desee*/
				scanf("%i", &op);
				}
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
}
 
	
