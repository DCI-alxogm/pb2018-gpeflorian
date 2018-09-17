/*Este programa solicita informacion a cerca de un numero predeterminado de estudiantes y a un resumen de la inforamcion al final del programa que pasa a un archivo .txt. Creado por Guadalupe Florian el 10 de Septiemre del 2018*/


/*Me indica las librerias que usare para el programa*/
#include<stdio.h>
/*Este programa solicita lainforacion de edad, sexo, semestre y promedio de 10 alumnos y hace un resumen al final para el usuari. Creado el 12 de Septiembre por Guadalupe Florian*/

/*Funcion maestra del programa*/
int main (){
		
		/*Declaro mis variables tipo FILE que me ayudaran a crear/tener acceso a un archivo tipo .txt*/
		FILE *Informacion_estudiantes;
		FILE *Resultados_estudiantes;
		/*Declaro mis variables enteras y que sem 1-10 comenzara en 0*/
		int N=10,i,sem[N],edad[N],sem1=0,sem2=0,sem3=0,sem4=0,sem5=0,sem6=0,sem7=0,sem8=0,sem9=0,sem10=0,sex[N],h=0,f=0;
		/*Declaro las variables de tipo punto florante de mi programa, indicando que promedios epmieza en 0*/
		float prom[N],promedios=0;

		/*Indico al programa leer el documento txt llamado Informaicon_estudiantes*/
		Informacion_estudiantes=fopen("Informacion_estudiantes.txt","r");

		
			/*Indica un ciclo, que empieza en cero, termina en N y se suma una unidad al repetirse*/
			for(i=0;i<N;i++){
		
			/*Voy a leer la informacion del programa Informacion_estudiantes y usarlo para llenar mi informacion del semestre*/
			fscanf(Informacion_estudiantes,"%i",&sem[i]);

			/*Serie de condiciones que suma los estudiantes dentro de un mismo semestre*/
			if (sem[i]==1)++sem1;   
			else if (sem[i]==2)++sem2;
			else if(sem[i]==3)++sem3;
			else if(sem[i]==4)++sem4;
			else if(sem[i]==5)++sem5;
			else if(sem[i]==6)++sem6;
			else if(sem[i]==7)++sem7;
			else if(sem[i]==8)++sem8;
			else if(sem[i]==9)++sem9;
			else if(sem[i]==10)++sem10;

			/*Voy a leer la informacion del programa Informacion_estudiantes y usarlo para llenar mi informacion del promedio*/
			fscanf(Informacion_estudiantes,"%f",&prom[i]);

			promedios=promedios+prom[i];

			/*Voy a leer la informacion del programa Informacion_estudiantes y usarlo para llenar mi informacion de la edad*/
			fscanf(Informacion_estudiantes,"%i",&edad[i]);

			/*Voy a leer la informacion del programa Informacion_estudiantes y usarlo para llenar mi informacion del sexo*/
			fscanf(Informacion_estudiantes,"%i",&sex[i]);
			/*Indica concicion de si marcan 0 suman uno a h y 1 a f*/
			if (sex[i]==0)++h;
			else if (sex[i]==1)++f;


					}
			/*Indico que debo cerrar mi programa Informacion_estudiantes*/
			fclose(Informacion_estudiantes);

	/*Indico a mi programa abrir un documento llamado Resultados_estudiantes.txt*/
	Resultados_estudiantes=fopen("Resultados_estudiantes.txt","w");

			/*Indico al documento imprimir los resultados de la informacion en el documento Resultados_estudiantes.txt */
			fprintf(Informacion_estudiantes,"El numero de estudiates por Semestre son en el 1: %i, en el 2: %i, en el 3: %i, en el 4: %i, en el 5: %i, en el 6: %i, en el 7: %i, en el 8: %i, en el 9: %i y en el 10: %i  \n",sem1,sem2,sem3,sem4,sem5,sem6,sem7,sem8,sem9,sem10);

			promedios=promedios/10;
			fprintf(Informacion_estudiantes,"El promedio total es %f \n",promedios);

			fprintf(Informacion_estudiantes,"De los estudiantes %i son de sexo femenino y %i son de sexo mascuino\n",f,h);

	/*Indico que se debe cerrar el programa Resultados_estudiantes.txt*/
	fclose(Resultados_estudiantes);

		/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
	}
