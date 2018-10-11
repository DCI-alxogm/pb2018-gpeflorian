/*Este prorama calcula en numero maximo de un programa*/

#include<stdio.h>
#include<stdlib.h>

	int main () {

		FILE *archivo;
		int i,c,count=0,n;
		float *ptr,num_max=-1000;
		

 	archivo=fopen("num_maximo.txt","r");
  
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
    	printf("El archivo tiene %d líneas\n ",count); 

		archivo=fopen("num_maximo.txt","r");

		ptr=(float*)calloc(count,sizeof(float));

		for (i=0;i<count;i++){		

			/*Lee el dato ingresado, ya formateado del stdin, y se guarda la información en un arreglo*/
			fscanf(archivo,"%f\n",ptr+i);
			/*Se comparan los valores para enconrar el valor máximo*/
			}

			for (i=0;i<count;i++){

			if (*(ptr+i)>num_max)
				{
				printf("%f\n",*(ptr+i));
				num_max=*(ptr+i);
				
				}
				
					}

			

		printf("El numero maximo en el archivo es %f \n",*ptr);




		/*Se libera la memoria no usada por los apuntadores*/
		free(ptr);
		/*Se cierra el archivo*/
    		fclose(archivo); 
		

	return 0;

	}


