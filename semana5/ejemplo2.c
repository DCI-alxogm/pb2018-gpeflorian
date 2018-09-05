/*Este programa nos ayuda a sacar el exponencial de un numero, mientras a este se le suma uno, no revasando la decima vez. Creado por Guadalupe Florian el 4 de Sept del 2018.*/

/*Aqui expecifico las librerias que voy a usar*/
#include<stdio.h>
#include<math.h>
		
/*Funcion maestra del programa*/
int main ()
{
	/*Defino una variable de tipo flotante exp_*/
	float exp_;
	/*Defino una variable de tipo entero n con valor de 10 y j*/
	int n=10, j;

	/*Nos indica que j empezara en cero y mientras sea menor que 10, se le sumara uno por cada vez que se repita la operacion*/
	for(j=0;j<n;j++){
		/*Aqui nos indica que se sacara el exponencial de j*/
		exp_=exp(j);
		/*Nos ayudara a imprimir a la pantalla el numero de j y su respectivo exponensial*/
		printf("%i \t %f \n",j,exp_);
		}
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;

}
