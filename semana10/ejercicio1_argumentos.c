/*Creado por Guadalupe Florián el 15 de octubre del 2018.*/

/*Se incluyen las librerías que se usarán en el programa*/
#include<stdio.h>
#include<stdlib.h>

/*Permite introucir argumentos al momento de ejecutar el programa*/
int main(int argc, char *argv[]){
	printf("El nombre del programa que estas ejecutando es: %s\n", argv[0]);

	/*Declaramos una variable de tipo flotante*/
	float xo, yo, zo, esp;
	/*Declaramos una variable de tipo entera*/
	int no;
	/*Declaramos una variable de tipo caracter*/
	char *nombre_archivo;
	/*Declaramos una variable de tipo archivo*/
	FILE *fp;

		if (argc==7){
			/*Se convierte la cadena de caracteres a flotante*/
			xo = atof(argv[1]);
			yo = atof(argv[2]);
			zo = atof(argv[3]);
			esp = atof(argv[4]);
			no = atoi(argv[5]);
			nombre_archivo = argv[6];
	
		/*Se imprime a la pantalla el nombre del archivo que se abrirá*/
		printf("Nombre del archivo que se abrirá: %s\n", nombre_archivo);

		/*Se abre un archivo de texto para su actualizacion (leer o escribir)*/
		fp=fopen(nombre_archivo, "w+");	
			for (int i=0; i<no; i++){
			fprintf(fp, "%f \t %f \t %f\n", xo, yo, zo);
			xo = xo + esp;	
			yo = yo + esp;	
			zo = zo + esp;		
			}
	
		fclose(fp);
		}

		/*Si se ingresan más de 7 argumentos, se pide que se ingresen menos*/
		else if(argc<7){
			printf("Se requieren más argumentos para el programa\n");
		}

		else {
		printf("Favor de introducir los argumentos de x,y,z iniciaes, el espaciado, repeticioens deseadas y el nombre\n");
		}
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
}


