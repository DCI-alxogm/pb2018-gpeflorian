/*Creado por Guadalupe Florián el 15 de octubre del 2018.*/

/*Se incluyen las librerías que se usarán en el programa*/
#include <stdio.h>

/*Permite introucir argumentos al momento de ejecutar el programa*/
int main(int argc, char *argv[]){

	/*Se imprime a la pantalla el nombre del programa que se está ejecutando*/
	printf("El programa que estas ejecutando es: %s\n", argv[0]);

		/*Si se dan 2 argumentos se imprimen a la pantalla*/
		if(argc==2){
			printf("El argumento que se dio es: %s \n", argv[1]);
		}

		/*Si se ingresan más de 2 argumentos, se pide que se ingresenmenos*/
		else if(argc>2){
			printf("Favor de ingresar un numero menor de argumentos\n");
		}

		/*Si no se ingresa ningún argumento, se pide ingresar al menos uno*/
		else{
			printf("Se requiere de al menos 1 argumento \n");
		}

	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
}
