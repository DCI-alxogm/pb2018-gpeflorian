/*Este programa permite */

/*Me indica las librerias que usare para el programa*/
#include <stdio.h>

/*Funcion maestra del programa*/
int main()
{
	/*Definimos 4 variables de tipo flotante*/
	float temp_C, temp_K,final,delta;
	/*Definimos 4 variables de tipo enteras, opcion es igual a 1 y count es igual a cero*/
	int n,i,opcion=1, count=0;
	
	/*Mientras la opcion sea igual a 1 sucedera lo siguiente*/
	while (opcion==1){
	/*A count se le sumara 1 por cada orden realizada*/
	count++;
	/*Imprimer en la patnalla las instrucciones para el ususario*/		
	printf("Ingrese la temperatura en centígrados, la temperatura final y el numero de pasos \n");
		/*Le perimite al usuario ingresar las 3 variables que se requieren para realizar las instrucciones del programa. Ingresa temperatura inicial, final y numero de veces que se ralizaran las instrucciones*/
		scanf("%f %f %i", &temp_C,&final,&n);
		
		/*Me indica la operacino que se hara con las temperaturas ingresadas*/
		delta=(final-temp_C)/n;
		/*Indica que i iniciara en cero, y que mientras sea menor que el numero de veces que el usuario ingreso se le sumara uno y se hara la operacion asignada al valor*/
		for(i=0;i<n;i++){
			/*Indica que temp_k sera igual a temp_c mas 273.15*/
			temp_K=temp_C+273.15;
			/*Se imprimiera a la pantalla el resultado de las temperaturas*/
			printf("%f %f\n", temp_C, temp_K);
			/*indica el valor de temp_C*/
			temp_C=temp_C+delta; // temp_C+=delta;
	
			}

		/*Indica que si las instrucciones se realizan mas de 5 veces se dejaran de realizar*/
		if (count>5){
			/*Imprime a la pantalla la razon por la que el programa dejo de correr*/
			printf("Error: numero de interaciones excedido \n");
			/*Indica que el prorama regresara error*/
			return 1;
			}
	}
	
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/	
	return 0;
}
