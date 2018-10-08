/*Este programa calculará el promedio de datos de un archivo. Creado por Guadalupe Florian el 8 de octubre del 2018*/

#include<stdio.h>
#include<stdlib.h>

	int main () {

		FILE *archivo;
		int i,nmin=500,nlines;
		float sum=0,*ptr;

		archivo=fopen("promedio.txt","r");

		*ptr=(float*) calloc(nmin,sizeof(float));

		
		while (fgets(nmin,500,(FILE*)archivo) !=NULL)
		{
		nlines++;
		}
		printf("%i \n");
		
		

		
			for (i=0;i<nlines;i++){		

			fscanf(archivo,"%f \n",ptr + i);
		
			sum += *(ptr + i);
		
			}

		sum /= nlines;

		printf("El promedio de los datos de su archivo es: %f\n",sum);

		free(ptr);

	return 0;

	}
