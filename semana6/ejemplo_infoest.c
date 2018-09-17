/*Esta serie de instrucciones me ayudan a crear un archivo. Creado por Guadalupe Florian el 12 de Septiembre del 2018.*/

/*Me indica las librerias que usare para el programa*/
#include<stdio.h>

/*Funcion maestra del programa*/
int main (){

		/*Declaramos la variable de archivo*/
		FILE *archivo;
			
			/*Indico que quiero crear un archivo .txt llamado text*/
			archivo=fopen("Informacion_estudiantes.txt","w");
			
				/*Cerramos el archivo*/	
				fclose(archivo);



	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
 	return 0;
	}
