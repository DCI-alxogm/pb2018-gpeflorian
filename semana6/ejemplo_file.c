/*Esta serie de instrucciones me ayudan a crear un archivo. Creado por Guadalupe Florian el 12 de Septiembre del 2018.*/

/*Me indica las librerias que usare para el programa*/
#include<stdio.h>

/*Funcion maestra del programa*/
int main (){

		FILE *archivo;

		/*Declaro mis variables de tipo flotante y caracter*/
		float var1,var2;

			
			/*Indico que quiero crear un archivo .txt llamado text*/
			archivo=fopen("text.txt","w");
			
			/*Indico lo que quiero escribir en la pantalla*/
			fputs("Esta es una prueba de fputs \n",archivo);
			/*Indico que quiero escribir fprintf en el programa*/
			fprintf(archivo,"fprintf \n");

				
				var1=0.15;
				var2=100.8;
				fprintf(archivo, "%f %f \n",var1,var2);
				fclose(archivo);



	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
 	return 0;
	}
