
/*Este programa srve para crear un ciclo cuando se cumplen ciertas condiciones de temperatura*/

/*Se indica la libreria que usamos*/
#include <stdio.h>

/*Funcion maestra del programa*/
int main () {

	/*Declaramos variables de tipo real con punto flotante*/
	float temp_C, temp_K;
	float inicial=100, final=200, delta;
	/*Declaramos variables de tipo entero*/
	int n=10;

	/*Calculamos delta renstando la temperatura final con la inicial*/
	delta=(final-inicial)/n;
	/*Indicamos que temp_C es igual a la inicial*/
	temp_C=inicial;
	/*Indicamos que mientras la temp_C sea menor o igual a la final lo siguiente se cumplira*/
	while(temp_C<=final){
		/*La temp_K sera la suma de temp_C+273.15*/
		temp_K=temp_C+273.15;
		/*Imprimimos a la pantalla los resultados de la temperatura en centigrados y kelvin*/
		printf("%f %f \n", temp_C, temp_K);
		/*Indicamos que temp_c es la temperatura en centigrados mas delta*/
		temp_C=temp_C+delta;    //  temp_C+=delta;

		}

	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;



}
