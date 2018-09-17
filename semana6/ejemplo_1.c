<<<<<<< HEAD
/*Este programa es un ejemplo para la funcion array vista en clase. Creado en Septiempre 10 del 2018. Creado por Guadalupe Florian*/
=======
/*Este programa es un ejemplo para la funcion array vista en clase. Creado en Septiempre 10 del 2018 por Guadalupe Florian.*/
>>>>>>> 0ca4ae201d21c7cb106b58735843a8ca60ca73aa


/*Me indica las librerias que usare para el programa*/
#include<stdio.h>


/*Funcion maestra del programa*/
int main (){

		/*Declaro mis variables de tipo flotante y enteras*/
		int N=10,i;
		float numeros [N];

			for(i=0;i<N;i++){
			numeros[i]=0;
					}
				
				/*Asigna el valor a partir de lo que proporciona el usuario linea por linea*/
				for(i=0;i<N;i++){
				scanf("%f \n",&numeros[i]);
					}

					/*Imprimer a la pantalla el valor del elemento i-esimo del arreglo.*/
					for(i=0;i<N;i++){
					printf("%f \n",numeros[i]);
						}


	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/				
	return 0;
}
