/*Este programa encuentra la suma de 6 números guardados en un arreglo (declarando un arreglo y manipulándolo como apuntador). Creado por Guadalupe Florián el 5 de Octubre del 2018*/

/*Se incian las librerías incluídas en el programa*/
#include<stdio.h>

	int main() {
	
		/*Se declaran variables de tipo entero, num siendo un arreglo*/
		int i,num[6],sum=0;

		/*Se imprime a la pantalla la instrucción de introducir un numero de elementos */
		printf("Introduce 6 números enteros:\n");

			/*Iniciamos un ciclo donde el contador inicia en cero, la condición de seguir realizando el ciclo es que se repita un un numero menor a 6 veces y que a la variable i se le aumente una unidad cada vez que se completa la serie de instrucciones*/
			for(i=0;i<6;i++){

				/*Lee los datos ingresados, que se guardaron en el array de num, ya formateados del stdin. (num+1) es equivalente a &num[i])*/
				scanf("%d", (num + i));
				/*Indica sumar valores guardados en el array num. (num+1) es equivalente a &num[i])*/
				sum += *(num +i );

			}

			/*Imprime a la pantalla la suma*/		
			printf("Suma = %d \n",sum);
	
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;

	}	
