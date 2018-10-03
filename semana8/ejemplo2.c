/*Este programa asigna el valor de NULL al apuntador. Creado por Guadalupe Florian el 3 de Octubre del 2018*/

/*Se usará librería estándar*/
#include<stdio.h>

	/*Función maestra del programa*/
	int main () {
		
		/*Declaración de variable entera, NULL indica que el apuntador no tiene dirección aún*/
		int*ptr = NULL;

			/*Si el apuntador no es nulo, se imprime su valor*/
			if(ptr)
			printf("The value of ptr is: %x\n",ptr);

			/*Si el apuntador es nulo, se imprime el valor de cero*/			
			else if(!ptr)			
			/*Imprime el valor del apuntador*/
			printf("The value of ptr is : %x\n",ptr);

	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
}
