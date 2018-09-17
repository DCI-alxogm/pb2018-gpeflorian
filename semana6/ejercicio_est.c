/*Este programa solicita informacion a cerca de un numero predeterminado de estudiantes y a un resumen de la inforamcion al final del programa. Creado por Guadalupe Florian el 10 de Septiemre del 2018*/


/*Me indica las librerias que usare para el programa*/
#include<stdio.h>
/*Este programa solicita lainforacion de edad, sexo, semestre y promedio de 10 alumnos y hace un resumen al final para el usuari. Creado el 12 de Septiembre por Guadalupe Florian*/

/*Funcion maestra del programa*/
int main (){
		
		/*Declaro las variables de tipo enteras de mi programa, indicando que sem 1-10 empieza en 0. Ademas indica que quiere guardar informacion para usarla al final del programa []*/
		int N=10,i,sem[N],edad[N],sem1=0,sem2=0,sem3=0,sem4=0,sem5=0,sem6=0,sem7=0,sem8=0,sem9=0,sem10=0,sex[N],h=0,f=0;
		/*Declaro las variables de tipo punto florante de mi programa, indicando que promedios epmieza en 0*/		
		float prom[N],promedios=0;

			/*Imprime a la pantalla que ocupa informacion de 10 estudiantes*/
			printf ("Introducir la informacion solicitada de 10 estudiantes:\n");

			/*Indica un ciclo, que empieza en cero, termina en N y se suma una unidad al repetirse*/
			for(i=0;i<N;i++){
		
			/*Imprime a la pantalla que se ocupa informacion del estudiante y suma uno cuando progresa*/
			printf("Favor de intresar la informacion del estudiante %i:\n",i+1);

			/*Imprime a la pantalla semestre*/
			printf("Semestre \n");
			/*Permite al usuario entrar informacion del semestre del estudiante*/
			scanf("%i",&sem[i]);


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

			/*Imprime a la pantalla promedio*/
			printf("Promedio \n");
			/*Permite al usuario entrar informacion del promedio del estudiante*/
			scanf("%f",&prom[i]);

			/*Operacion de promedios es igual a promedios mas el promedio dado*/
			promedios=promedios+prom[i];

			/*Imprime a la pantalla edad*/
			printf("Edad \n");
			/*Permite al usuario entrar informacion de la edad del estudiante*/
			scanf("%i",&edad[i]);

			/*Imprime a la pantalla la instruccion para indicar el sexo*/
			printf("Para sexo masculino presione 0, para sexo femenino persione 1\n");
			/*Permite al usuario entrar informacion del sexo del estudiante*/
			scanf("%i",&sex[i]);
			/*Indica concicion de si marcan 0 suman uno a h y 1 a f*/
			if (sex[i]==0)++h;
			else if (sex[i]==1)++f;



					}
			/*Imprime a la pantalla la suma de estudiantes por semestre con la informacion ingresada por el usuario guardada por array*/
			printf("El numero de estudiates por Semestre son en el 1: %i, en el 2: %i, en el 3: %i, en el 4: %i, en el 5: %i, en el 6: %i, en el 7: %i, en el 8: %i, en el 9: %i y en el 10: %i  \n",sem1,sem2,sem3,sem4,sem5,sem6,sem7,sem8,sem9,sem10);


			/*Indica que el promedio es la suma de promedios entre 10*/
			promedios=promedios/10;
			/*Imprime a la pantalla el promedio de los estudiantes con la informacion de promedios entrada y guardeada por array*/
			printf("El promedio total es %f \n",promedios);

			/*Imprime a la pantalla la suma de estudiantes que son mujeres u hombres con la informacion ingresada por el usuario guardada por array*/
			printf("De los estudiantes %i son de sexo femenino y %i son de sexo mascuino\n",f,h);

		
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/

	return 0;
	}


