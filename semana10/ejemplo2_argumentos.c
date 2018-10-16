/*Creado por Guadalupe Florián el 15 de octubre del 2018.*/

/*Se incluyen las librerías que se usarán en el programa*/
#include<stdio.h>

/*main debe regresar un integral e int especifica el tipo de variable que la función regresará*/
int main (int argc, char *argv[]){

	/*Se imprime a la pantalla el nombre del programa que se está ejecutando*/
	printf("El programa que se esta ejecuntando es: %s \n",argv[0]);

		/*Declaramos una variable de tipo caracter*/
		char *nombre_archivo;
		/*Declaramos una variable de tipo archivo*/
		FILE *fp;

		/**/
		if(argc==2){

			nombre_archivo=argv[1];

			printf("El nombre del archivo a abrir es: %s \n",nombre_archivo);

			/*Se abre un archivo de texto para su actualizacion (leer o escribir)*/
			fp=fopen(nombre_archivo,"w+");
			/*Colocamos la acción que se desea realizar*/
			fclose(fp);
			}

		/*Si se ingresan más de 2 argumentos, se pide que se ingresen menos*/
		else if(argc>2){
			printf("Favor de ingresar un numero menor de argumentos: \n");
		}
		/*Si no se ingresa ningún argumento, se pide ingresar al menos uno*/
		else{
			printf("Se requiere al menos 1 argumento: \n");
		}

	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
}
