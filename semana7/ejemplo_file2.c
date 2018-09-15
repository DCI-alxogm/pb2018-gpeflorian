/*Esta serie de instrucciones me ayudan a abrir un archivo. Creado por Guadalupe Florian el 12 de Septiembre del 2018.*/

/*Me indica las librerias que usare para el programa*/
#include<stdio.h>

/*Funcion maestra del programa*/
int main (){

		/*Declaramos la variable del archivo*/
		FILE *archivo;
		/*Declaramos variable de punto flotante y caracteres*/
		float var1,var2;
		char var[255];

			/*Le indicamos al archivo que lea un archivo de texto llamato text.txt*/
			archivo=fopen("text.txt","r");
			/*Lee una cadena de caracteres*/
			fgets(var,255,(FILE*)archivo);
			/*Imprime a la pantalla el valor de var*/
			printf("%s",var);
			/*Toma la informacion de var del documento archivo*/
			fscanf(archivo,"%s",var);
			/*Imprime el caracter var leido en la pantalla*/
			printf("%s \n",var);
			/*Toma la informacion de var 1 y var 2 del documento archivo*/
			fscanf(archivo,"%f %f",&var1,&var2);
			/*Imprime la informacion var 1 y var 2 a la pantalla*/
			printf("%f %f \n",var1,var2);
			/*Cierra el archivo*/
			fclose(archivo);


	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
 	return 0;
	}
