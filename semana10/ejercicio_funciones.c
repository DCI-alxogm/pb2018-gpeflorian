
/*Este programa calcula el cuadrado de un número. Creado por Gaudalupe Florian el 17 de octubre del 2018.*/

/*Librerías usadas en el programa*/
#include<stdio.h>
#include<stdlib.h>

/*Declaración de la función*/
void cuadrado(float x);

	int main(float argc, char *argv[]){

	float x;
		

		/*Si se dan 2 argumentos se imprimen a la pantalla*/
		if(argc==2){
			x=atof(argv[1]);
			cuadrado(x);
		}

		/*Si se ingresan más de 2 argumentos, se pide que se ingresenmenos*/
		else if(argc>2){
			printf("Favor de ingresar un numero menor de argumentos\n");
		}

		/*Si no se ingresa ningún argumento, se pide ingresar al menos uno*/
		else{
			printf("Se requiere de al menos 1 argumento \n");
		}

	return 0;

	}
