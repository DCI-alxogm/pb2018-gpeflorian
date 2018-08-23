/*Este programa nos ayuda a sumar uno a un numero entero si el mismo es par*/

/*Nos indica la libreria que usamos*/
#include <stdio.h>

	/*Funcion maestra del programa*/
	int main (){
		/*Int nos permitira definir variables de tipo entero*/
		int a;
		/*Le indicamos al usuario que introduzca un numero*/
		printf("introduce un numero entero, si es par se le sumara 1 \n");
		/*Le permite al usuario interactuar con el progrrama e introducir un numero*/
		scanf("%i", &a);
		/*Le indicamos al programa que si la variable intoducita es par se le sume la cantidad de uno*/
		if(a%2==0) a=a+1;
		/*Indica la secuencia de instrucciones en caso que se anumero par*/
		//if(a%2==0) {;
		// instrucciones
		//}
		/*Da el resultado de n+1 en caso que n sea numero par*/
		printf("El resultado es %i\n",a);
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
	}
