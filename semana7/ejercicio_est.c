/*Este programa solicita informacion a cerca de un numero predeterminado de estudiantes y a un resumen de la inforamcion al final del programa. Creado por Guadalupe Florian el 10 de Septiemre del 2018*/


/*Me indica las librerias que usare para el programa*/
#include<stdio.h>
/*Este programa solicita lainforacion de edad, sexo, semestre y promedio de 10 alumnos y hace un resumen al final para el usuari. Creado el 12 de Septiembre por Guadalupe Florian*/

/*Funcion maestra del programa*/
int main (){
		

		int N=10,i,sem[N],edad[N],sem1=0,sem2=0,sem3=0,sem4=0,sem5=0,sem6=0,sem7=0,sem8=0,sem9=0,sem10=0,sex[N],h=0,f=0;
		float prom[N],promedios=0;

		
			printf ("Introducir la informacion solicitada de 10 estudiantes:\n");

			for(i=0;i<N;i++){
		
			printf("Favor de intresar la informacion del estudiante %i:\n",i+1);

			printf("Semestre \n");
			scanf("%i",&sem[i]);

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

			printf("Promedio \n");
			scanf("%f",&prom[i]);

			promedios=promedios+prom[i];


			printf("Edad \n");
			scanf("%i",&edad[i]);

			printf("Para sexo masculino presione 0, para sexo femenino persione 1\n");
			scanf("%i",&sex[i]);
			if (sex[i]==0)++h;
			else if (sex[i]==1)++f;



					}

			printf("El numero de estudiates por Semestre son en el 1: %i, en el 2: %i, en el 3: %i, en el 4: %i, en el 5: %i, en el 6: %i, en el 7: %i, en el 8: %i, en el 9: %i y en el 10: %i  \n",sem1,sem2,sem3,sem4,sem5,sem6,sem7,sem8,sem9,sem10);

			promedios=promedios/10;
			printf("El promedio total es %f \n",promedios);

			printf("De los estudiantes %i son de sexo femenino y %i son de sexo mascuino\n",f,h);

		


	return 0;
	}


