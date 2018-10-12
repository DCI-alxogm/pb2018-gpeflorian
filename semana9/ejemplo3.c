/*Se ingresa aun número al programa y éste te regresa su valor al cuadrado usando una función con argumentos de entrada pero sin argumentos de salida. Creado por Guadalupe Florián el 11 de octubre del 2018*/

#include<stdio.h>
void cuadrado(float h);

	/*Función maestra del programa*/
	int main(){

			/*Declaracion de variables de tipo punto flotante de 6 cifras*/
			float x;
			/*Pide al usuario introducir un número*/
			printf("Favor de introducir un número para calcular su cuadrado: \n");
			/*Lee el dato ingresado, ya formateado, del stdin*/
			scanf("%f", &x);
			/*Indica que el resultado de x2 será la acción que la función cuadrado realice con el valor de x*/
			cuadrado(x);
		/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/		
		return 0;
	}
		/*Definimos las acciones que rallizará la función cuadrado (float h)*/
		void cuadrado(float h){
			/*Dclaracion de variables de tipo punto flotante de 6 cifras*/
			float x, x2;
			/*El valor de la varialbe x se guardará en el valor de la variable h*/
			x=h;
			/*El valor de la variable x2 es el valor guardado en h por sí mismo*/	
			x2= h*h;
			/*Se imprime el valor de la variable x y el valor resultante de x2*/
			printf("El cuadrado de %f es %f \n", x, x2);	
	}
