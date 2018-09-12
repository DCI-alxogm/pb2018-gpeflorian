/*Esta serie de instrucciones me ayudan a abrir un archivo. Creado por Guadalupe Florian el 12 de Septiembre del 2018.*/

/*Me indica las librerias que usare para el programa*/
#include<stdio.h>

/*Funcion maestra del programa*/
int main (){

		FILE *archivo;
		float var1,var2;
		char var[255];

			
			archivo=fopen("text.txt","r");
			fgets(var,255,(FILE*)archivo);
			printf("%s",var);
			fscanf(archivo,"%s",var);
			printf("%s \n",var);
			fscanf(archivo,"%f %f",&var1,&var2);
			printf("%f %f \n",var1,var2);
			fclose(archivo);


	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
 	return 0;
	}
