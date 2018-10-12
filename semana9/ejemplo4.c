/*Se ingresa aun número al programa y éste te regresa su valor al cuadrado usando una función sin argumentos de entrada pero con argumentos de salida. Creado por Guadalupe Florián el 11 de octubre del 2018*/

#include<stdio.h>
float cuadrado();

	/*Función maestra del programa*/
	int main(){

			/*Declaracion de variables de tipo punto flotante de 6 cifras*/
			float x1;
			/*El valor que tome la función cuadrado() será guardada en x1*/
			x1=cuadrado();
			/*Imprime el valor de x1*/
			printf("%f \n", x1);	
			return 0;
	}

	/*Definimos la acción que realizará la función*/
	float cuadrado(){
		/*Declaracion de variables de tipo punto flotante de 6 cifras*/
		float x, x2;
		/*Imprime a la pantalla las instrucciones  para el usuario*/
		printf("Favor de introducir un número para calcular su cuadrado: \n");
		scanf("%f", &x);
		/*El valor de x multiplicado por sí mismo será guardado en la variable x2*/
		x2= x*x;
		/*Imprime a la pantalla las instrucciones  para el usuario*/	
		printf("El cuadrado de %f es \n", x);	
		/*La función return regresa e valor de x2 al programa fuente */
		return x2;	
	}
