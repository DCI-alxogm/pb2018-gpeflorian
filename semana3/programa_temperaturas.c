/* Este programa convierte temperaturas de grados C a F y K, y finalmente de F a C. Creado por Guadalupe Florian el 20 de Agosto del 2018*/

/*Se indica la libreria que usamos*/
#include <stdio.h>
	
	/*Funcion maestra del programa*/
	int main (){

	/*Declara variables de tipo real con punto flotante*/
	float temperatura, k, f, c;
	
	/*Le indicamos al usuario introducir valores al programa*/
	printf("Introduzca los grados C que desee convertir a K y F \n");

	/*El usuario puede entrar una cantidad de temperatura a trasnformar a K y F*/
	scanf ("%f", &temperatura);

	/*Calculamos el valor de los grados Fahrenheit f multiplicando la temperatura por 1.8 y le sumamos 32*/
	f=(temperatura*1.8)+32;
	printf("Los grados en  Centigrados que introdujo a Farenhheit son %f \n", f);
	
	/*Calculamos el valor de los grados Kelvin k  sumando 275.15 a la temperatura*/
	k=temperatura+273.15;
	printf("Los grados en Centigrados que introdujo a Kelvin son %f \n", k);

	/*Calculamos el valor de los grados centigrados original c restando 32 a f y luego dividiendo entre 1.8*/
	c=(f-32)/1.8;
	/*Se indica en la patnalla que el valor mostrado es de los grados centigrados c dados originalmente*/
	printf("Finalmente aqui se muestran los grados Centigrados del inicio %f \n", c);
	

	/*Indica si la secuencia de instruciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;

	

	


}
