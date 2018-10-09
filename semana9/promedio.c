/*Este programa calculará el promedio de datos de un archivo. Creado por Guadalupe Florian el 8 de octubre del 2018*/

#include<stdio.h>
#include<stdlib.h>

	int main () {

		FILE *archivo;
		int i;
		float sum=0,*ptr;

		archivo=fopen("promedio.txt","r");

		ptr=(float*) calloc(267,sizeof(float));
		
		
			for (i=0;i<267;i++){		

			fscanf(archivo,"%f \n",ptr + i);
		
			sum += *(ptr + i);
		
			}

		sum /= 267;

		printf("El promedio de los datos de su archivo es: %f\n",sum);

		free(ptr);
		fclose(archivo);

	return 0;

	}
