/*Este programa calculará el promedio de datos de un archivo. Creado por Guadalupe Florian el 8 de octubre del 2018*/

#include<stdio.h>
#include<stdlib.h>

	int main () {

		FILE *archivo;
		int c,count=0;
		

 	archivo=fopen("promedio.txt","r");
  
    	/*Vemos si el archivo existe*/
   	 if (archivo == NULL) 
   	{ 
      		printf("Could not open file"); 
        	return 0; 
    	} 
  
	/*Calcula los caracteres del archivo*/
    	for (c = getc(archivo); c != EOF; c = getc(archivo)) 
	/*Incrementa el conteo si el caracter empieza en una nueva linea*/
        if (c == '\n')
            count = count + 1; 
  
    	/*Se cierra el archivo*/
    	fclose(archivo); 
	/*Se imprime a la pantalla el número de líneas*/
    	printf("The file has %d lines\n ",count); 
		

	return 0;

	}
