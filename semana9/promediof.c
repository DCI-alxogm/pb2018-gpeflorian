/*Este programa calculará el promedio de datos de un archivo. Creado por Guadalupe Florian el 8 de octubre del 2018*/

/*Librerías usadas para el programa, usaremos stdlib por el uso de calloc*/
#include<stdio.h>
#include<stdlib.h>

	/*Función mestra del programa*/
	int main () {

		FILE *archivo;
		int i,c,count=0;
		float sum,*ptr;

		/*Se abre el archivo promedio.txt para su lectura*/
		archivo=fopen("promedio.txt","r");

			/*Vemos si el archivo existe*/
   			 if (archivo == NULL) 
   			{ 
      				printf("No se pudo abrir el archivo"); 
        			return 0; 
    			} 	
  
		/*Calcula los caracteres del archivo*/
    		for (c = getc(archivo); c != EOF; c = getc(archivo)) 
		/*Incrementa el conteo si el caracter empieza en una nueva linea*/
        	if (c == '\n'){
            	count = count + 1; 
		}
  
		/*Se imprime a la pantalla el número de líneas*/
    		printf("The file has %d lines\n ",count); 
		/*Se cierra el archivo*/
		fclose(archivo);

		archivo=fopen("promedio.txt","r");
		ptr=(float*)calloc(count,sizeof(float));
		
					/*Iniciamos un ciclo donde el contador inicia en cero, la condición de seguir realizando el ciclo es que se repita un un numero menor al valor de la variable contador y que a la variable i se le aumente una unidad cada vez que se completa la serie de instrucciones*/
			for (i=0;i<count;i++){		

			/*Lee el dato ingresado, ya formateado del stdin, y se guarda la información en un arreglo*/
			fscanf(archivo,"%f\n",ptr+i);
			/*Se van sumando los valores guardados en el arreglo*/
			sum += *(ptr+i);
			}

		/*Se divide el valor todal de los valore sumados entre el valor de count*/
		sum/=count;

		/*Se imprime a la pantalla el promedio de los valores del archivo*/
		printf("El promedio de los datos de su archivo es: %f\n",sum);
		
		/*Se libera la memoria no usada por los apuntadores*/
		free(ptr);
		/*Se cierra el archivo*/
		fclose(archivo);

	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;

	}
