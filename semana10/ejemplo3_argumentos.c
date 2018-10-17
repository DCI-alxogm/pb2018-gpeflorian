/*Creado por Guadalupe Florián el 15 de octubre del 2018.*/

/*Se incluyen las librerías que se usarán en el programa*/
#include<stdio.h>
#include<stdlib.h>

/*Permite introucir argumentos al momento de ejecutar el programa*/
int main( int argc, char *argv[]){

	/*Se imprime a la pantalla el nombre del programa que se está ejecutando*/
   	 printf("El programa que estas ejecutando es: %s\n", argv[0]);

   	 /*Declaramos una variable de tipo caracter*/
   	 char *nombre_archivo;
    	/*Declaramos una variable de tipo flotante*/
   	 float Tin, Tfin;
   	 /*Declaramos una variable de tipo entera*/
    	int num;
    	/*Declaramos una variable de tipo archivo*/
   	 FILE *fp;

	/*Si se entran 5 agrumentos se realizarán las acciones dentro del condicional if*/
    	if(argc == 5){
		/*Permite entrar argumentos Tin, Tfin, num y nombre de archivo al ejecutar el programa*/
       		Tin=atof(argv[1]);
      		Tfin=atof(argv[2]);
     		num=atoi(argv[3]);
       		nombre_archivo= argv[4];
       		printf("El nombre del archivo a abrir es %s\n", nombre_archivo);	

	  /*Abre un archivo para su actualización (leer o escribir)*/
      	  fp= fopen(nombre_archivo, "w+");
	  /*Imprime los argumentos entrados al documento*/
      	  fprintf(fp, "Tin: %f, \t Tfin: %f, \t N: %i", Tin, Tfin, num);
	  /*Colocar lo que se quiere hacer o escribir en el archivo*/
       	  fclose(fp);
      	}
	
	/*Si se ingresan más de 5 argumentos, se pide que se ingresen menos*/
   	 else if( argc > 5){
           	printf("Favor de ingresar un numero menor de argumentos \n");
    	 }

	/*Si no se ingresa ningún argumento, se pide ingresar al menos uno*/
    	else{
        	 printf("Se requieren 4 argumentos: Tin, Tfin, num, nombre_archivo \n");
    	}

/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;

}
