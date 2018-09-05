/*Este programa permite multiplicar dos numero que van incrementando -mientras no sean mayor a 3- y se multiplican ambos por 1. Creado por Guadalupe Florian Landa el 4 de Sept del 2018*/


/*Me indica las librerias que usare para el programa*/
#include<stdio.h>
#include<math.h>

/*Funcion maestra del programa*/
int main()
{
	/*Me define una varaible de tipo punto flotante res*/
	float res;
	/*Me define una variable de tipo n igual a 3, una k y una j*/
	int n=3,k,j;
		/*Me indica que j empieza en 0 y mientras sea menor a 3 se le sumara 1*/
		for(j=0;j<n;j++){
		/*me indica que k empieza en 0 y mientras sea menor a 3 se le sumara 1*/
		for(k=0;k<n;k++){
			/*Me indica que obtenemos res al multiplicar j por k por 1.0*/
			res=j*k*1.0;
			/*imprimirmos a la pantalla j, k y res*/
			printf("%i %i %f \n",j,k,res);
			}
			}
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
}
