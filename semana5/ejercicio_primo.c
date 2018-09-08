/*Este programa permitira determinar los numero primos que hay entre un rango dado de numeros por oel usuario. Creado por Guadalupe Florian*/


/*Me indica las librerias que usare para el programa*/
#include<stdio.h> 
#include<math.h> 


/*Funcion maestra del programa*/
int main(){


	/*Declaramos variables de tipo entero*/
	int num_final, num_inicial, resultado, i, j, primo, op=1, contador; 
	
		/*Permite realizar un loop mientras la opcion sea la primer escogida por el usuario*/
		while(op==1){ 


		/*Inicio mi contador en 0 para que se aumente una unidad por vez que se ejecute mi programa*/
		contador=0; 
		

			/*Le pide al usuario ingresar rango inicial y final*/
			printf("Introducir el numero con el que desee iniciar y terminar el rango \n"); 
			/*Permito al usuario ingresar un numero inicial y final*/
			scanf("%i %i",&num_final,&num_inicial);


				/*Indica que el rango solo puede contener 100  numeros*/
				while((num_final-num_inicial)>100){ 
				printf("\n Tu intervalo es demasiado grande, escribe otro más chico:\n"); 
			printf("\n Dime un número con el que quieras iniciar: \n");
				scanf("%i", &num_inicial);

				printf("Dime un número con el que quieras terminar: \n");
				scanf("%i", &num_final);
				}

			for(i=num_inicial; i<=num_final; i++){ //Este FOR sirve para que i vaya agarrando el valor de todos los números que se encuentran entre el intervalo dado por el usuario.
				resultado=sqrt(i); //El resultado es la raíz de cada valor que toma i
				primo=1; //Primo vale 1

				for(j=2; j<=resultado; j++){ //Si queremos determinar los números primos se tiene que dividir el resultado de la raíz del número y dividirla entre todos los números del 2 al resultado que salió

					if((i%j)==0){ //Si sale 0, entonces no es primo
					primo=0;
					}
					}

						if(primo==1){ //Si sale que el residuo es 1, entonces es un número primo y se imprime
						printf(" %i",i);
						contador=contador+1; //El contador indica cuántos números primos has impreso	
		
			
							if(contador%20==0 ){
							printf("\n"); //ESta condición indica que cuando el contador llegue a 20, entonces hay un salto de línea
									}

					}	
					}

		
				printf("\n Introduce 1 si quieres volver a realizar el programa, 2 si quieres salir: \n"); //Da la opción al usuario de volver a correr el programa
				scanf("%i", &op);
				}

	return 0; //Cierra el programa
}
 
	
