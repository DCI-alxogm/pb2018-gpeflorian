/*Se ingresa aun número al programa y éste te regresa su valor al cuadrado usando una función sin argumentos de entrada, pero con argumentos de salida. Creado por Guadalupe Florián el 11 de octubre del 2018*/

/*Incluyo las librerías que se usarán en el programa*/
#include<stdio.h>
/*Declaración de la función cuadrado, dicho nombre debe ser único para dicha función*/
void cuadrado();

	/*Función maestra del programa*/
	int main(){
			
		/*Se hace uso de la función*/
		cuadrado();
		/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
		return 0;
		}
			/*Definimos la acción que realizará la función*/
			void cuadrado(){
			/*Declaración de variables de tipo punto flotante de 6 cifras*/
			float x, x2;
				/*Le pedimos al usuario ingresar un número al sistema*/
				printf("Favor de introducir un número para calcular su cuadrado: \n");
				/*Lee el dato ingresado, ya formateado, del stdin*/
				scanf("%f", &x);
				/*Realizo la operación para calcular el valor de x2*/
				x2=x*x;
				/*Imprimo a la pantalla el valor de x y el resultado de x2*/
				printf("El cuadrado de %f es %f \n", x, x2);

	}
