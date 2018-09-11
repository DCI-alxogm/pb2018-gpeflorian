/*Este programa solicita informacion a cerca de un numero predeterminado de estudiantes y a un resumen de la inforamcion al final del programa. Creado por Guadalupe Florian el 10 de Septiemre del 2018*/


/*Me indica las librerias que usare para el programa*/
#include<stdio.h>


/*Funcion maestra del programa*/
int main (){
		

		int N=10,i,sem[N],sem1=0,sem2=0,sem3=0;
		float prom[N],promedios=0;

		
			printf ("Introducir la informacion solicitada de 10 estudiantes\n");

			for(i=0;i<N;i++){

			printf("Semestre \n");
			scanf("%i",&sem[i]);
			if(sem[i]==1){sem1=sem1++;}
			else(sem[i]==2);{sem2=sem2++;}
			if (sem[i]==3);{sem3=sem3++;}

			printf("Promedio \n");
			scanf("%f",&prom[i]);

			promedios=promedios+prom[i];



					}

			printf("El numero de estudiates en semestre uno es %i, en semestre 2 es %i y en semestre 3 es %i",sem1,sem2,sem3);

			promedios=promedios/10;
			printf("El promedio total es %f",promedios);

			





	return 0;
	}

