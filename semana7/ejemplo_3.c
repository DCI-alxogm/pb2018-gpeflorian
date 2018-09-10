/*Este programa es un ejemplo para la funcion array vista en clase. Creado en Septiempre 10 del 2018.*/


/*Me indica las librerias que usare para el programa*/
#include<stdio.h>


/*Funcion maestra del programa*/
int main (){

	/*Declaro mis variables de tipo flotante y enteras*/
	int j,n;
	printf("Dime el numero de elementos para trabajar \n");
	scanf("%i",&n);
	float numeros[n];
	
		/*Asigna el valor a partir de lo que proporciona el usuario linea por linea*/
		for(j=0;j<n;j++){
		scanf("%f",&numeros[j]);
		numeros[j]*=2;
		printf("%f\n",numeros[j]);
				}

	return 0;
	}
