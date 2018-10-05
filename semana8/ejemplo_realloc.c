/*Este programa imprime a la pantalla la dirección de la memoria reservada. Creado por Guadalupe Florián el 5 de Octubre del 2018*/

/*Se incian las librerías incluídas en el programa*/
#include<stdio.h>
#include<stdlib.h>

	/*Función maestra del programa*/
	int main () 
	{

		/*Se delcaran variables enteras*/
		int *ptr,i,n1,n2;

		/*Se imprime a la pantalla la instrucción de introducir un numero de elementos */
		printf("Introduce el numero de elementos\n");
		/*Lee el dato ingresado, ya formateado, del stdin*/
		scanf("%d", &n1);

		/*Se imprime a la pantalla la instrucción de introducir un numero de elementos */
		printf("\nIntroduce el nuevo número de elementos n2:\n");
		/*Lee el dato ingresado, ya formateado, del stdin*/
		scanf("%d",&n2);

		/*Se usa arreglo donde si la memoria previamente reservada es insuficiente o es demaciada, será posible ajustarla*/
		ptr = (int*) malloc (n1*sizeof(int));

		/*Se imprime a la pantalla que información se muestra*/
		printf("Dirección de la memoria reservada\n");

		/*Iniciamos un ciclo donde el contador inicia en cero, la condición de seguir realizando el ciclo es que se repita un un numero menor a n1 veces y que a la variable i se le aumente una unidad cada vez que se completa la serie de instrucciones*/
		for(i=0; i<n1; i++) {
			/*Se imprimen a la pantalla los bloques de memoria reservados */
			printf("%x\t \n", ptr + 1);
			}
		/*Se cambia el valor de la reserva de memoria en ptr de n1 a n2*/
		ptr=realloc(ptr,n2);

		/*Iniciamos un ciclo donde el contador inicia en cero, la condición de seguir realizando el ciclo es que se repita un un numero menor a n2 veces y que a la variable i se le aumente una unidad cada vez que se completa la serie de instrucciones*/
		for(i=0; i<n2; i++) {
			/*Se imprimen a la pantalla los bloques de memoria reservados*/
			printf("%u\t \n", ptr + 1);
			}

			/*Se libera la memoria no usada por los apuntadores*/
			free(ptr);
		
		/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
		return 0;

	}
