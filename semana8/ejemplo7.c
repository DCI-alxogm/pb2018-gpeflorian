/*Este programa encuentra la suma de 6 números guardados en un arreglo (declanrando un apuntador y manipulándolo como arreglo). Creado por Guadalupe Florián el 5 de Octubre del 2018*/

/*Se incian las librerías incluídas en el programa*/
#include<stdio.h>
#include<stdlib.h>


	/*Función maestra del programa*/
	int main () 
	{

		/*Se delcaran variables enteras*/
		int i, sum=0;
		int *num;

		/*Se imprime a la pantalla la instrucción de introducir un numero de elementos */
		printf("Introduce 6 números enteros: \n");

		/*Se reserva el espacio en la mamoria usando malloc, que asigna un número de bytes indicados y devuelve un apuntador al primer byte del espacio asignado (un solo bloque), y se le indica que el total de bytes son el valor num por el tamaño de una variable entera*/
		num=(int*)malloc(6*sizeof(int));

		/*Iniciamos un ciclo donde el contador inicia en cero, la condición de seguir realizando el ciclo es que se repita un un numero menor a 6 veces y que a la variable i se le aumente una unidad cada vez que se completa la serie de instrucciones*/
		for(i = 0; i < 6; i++) {
			
			/*Lee los datos ingresados, que se guardaron en el array de num, ya formateados del stdin. (num+1) es equivalente a &num[i])*/
			scanf("%i",&num[i]);
			/*Indica sumar valores guardados en el array num. (num+1) es equivalente a &num[i])*/
			sum += num [i];

		}

		/*Imprime a la pantalla la suma*/
		printf("Suma = %d \n",sum);

		/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
		return 0;	

	}
