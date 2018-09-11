/*Este programa solicita informacion a cerca de un numero predeterminado de estudiantes y a un resumen de la inforamcion al final del programa. Creado por Guadalupe Florian el 10 de Septiemre del 2018*/


/*Me indica las librerias que usare para el programa*/
#include<stdio.h>


/*Funcion maestra del programa*/
int main (){
		
		
		int n=10,i,sem[n],edad[n],fem=1,masc=2,res,sex[n];
		float prom[n];
				
		
		for(i=0;i<n;i++){

		printf("Favor de intresar la informacion del estudiante %i\n",i+1);

		printf("Semestre\n");
		scanf("%i \n",&sem[i]);

		printf("Edad\n");
		scanf("%i \n",&edad[i]);
 
		printf("Para sexo Femenino presione 1 o Masculino presione 2:\n");
		scanf("%i \n",&sex[i]);

		printf("Promedio\n");
		scanf("%i \n",&prom[i]);

		printf("%i",prom[i]);

		}
		
		



	return 0;
	}

