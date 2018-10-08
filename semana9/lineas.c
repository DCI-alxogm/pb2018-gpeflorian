/*Este programa calculará el promedio de datos de un archivo. Creado por Guadalupe Florian el 8 de octubre del 2018*/

#include<stdio.h>
#include<stdlib.h>

	int main () {

		FILE *archivo;
		int i,nmin=500;
		float sum=0,*ptr;
		char nlines

		archivo=fopen("promedio.txt","r");


		
		while (fgets(nmin,500,(FILE*)archivo) !=NULL)
		{
		nmin++;
		}
		printf("%i \n");
		

	return 0;

	}
