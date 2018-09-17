/*Este programa es un ejemplo para la funcion array vista en clase. Creado por Guadalupe Florian en Septiempre 10 del 2018*/


/*Me indica las librerias que usare para el programa*/
#include<stdio.h>


/*Funcion maestra del programa*/
int main (){

		/*Declaro mis variables de tipo flotante y enteras*/
		int N=10,i;
		float numeros [N];

			/*Asigna el valor a partir de lo que proporciona el usuario linea por linea*/
			for(i=0;i<N;i++){
			scanf("%f",&numeros[i]);

			/*Multiplica el numero dado por 2*/
			numeros [i]*=2;

			/*Imprime el valor del arreglo modificado*/
			printf("%f \n",numeros[i]);
				
					}

	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/					
	return 0;
	}
