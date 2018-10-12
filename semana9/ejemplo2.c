/*Se ingresa aun número al programa y éste te regresa su valor al cuadrado usando una funcióncon argumentos de entrada y de salida. Creado por Guadalupe Florián el 11 de octubre del 2018*/

/*Incluyo las librerías que se usarán en el programa*/
#include<stdio.h>
/*Declaración de la función cuadrado, dicho nombre debe ser único para dicha función*/
float cuadrado(float h);

	/*Función maestra del programa*/
	int main(){
	
			/*Declaracion de variables de tipo punto flotante de 6 cifras*/
			float x, x2;

			/*Imprime a la pantalla las instrucciones  para el usuario*/
			printf("Favor de introducir un número para calcular su cuadrado: \n");
			/*Lee el dato ingresado, ya formateado, del stdin*/
			scanf("%f", &x);
			/*Indica que el resultado de x2 será la acción que la función cuadrado realice con el valor de x*/
			x2=cuadrado(x);
			/*Imprime a la pantalla el valor de x y el resultado de x2*/
			printf("El cuadrado de %f es %f \n", x, x2);

		/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
		return 0;

	}
	
	/*Definimos la acción que realizará la función*/
	float cuadrado(float h){

		/*La acción de la función cuadrado es multiplicar por sí mimso un número h*/
		return h*h;

		}
