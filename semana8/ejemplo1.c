/*Este programa indicará la dirección de una variable y la dirección guardada en un apuntador y el alor de la variable. Creado por Guadalupe Florián el 3 de Octubre del 2018.*/

#include<stdio.h>

	int main() {

		/*Declaración de variable var*/
		int var=20;
		/*Declaración de la varible del apuntador*/
		int *ip;
		/*Asigna la direccion de la variable var al apuntador ip*/
		ip = &var;
		
		/*Imprime la dirección de la variable var a la pantalla*/
		printf("La dirección de la varaible var es: %x\n",(int) &var);
		/*Imprime la dirección guardada en el apuntador ip a la pantalla*/
		printf("Dirección guardada en el apuntador ip: %x\n",(int) ip);
		/*Imprime el valor de ip a la pantalla*/
		printf("El valor de *ip: %d\n",*ip);

	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;

	}
