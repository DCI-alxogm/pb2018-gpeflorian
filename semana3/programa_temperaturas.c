/* Este programa convierte temperaturas de grados C a F y K, y finalmente de F a C. Creado por Guadalupe Florian el 20 de Agosto del 2018*/

#include <stdio.h>

	int main (){

	float temperatura, k, f, c;
	printf("Introduzca los grados C que desee convertir a K y F \n");
	scanf ("%f", &temperatura);

	f=(temperatura*1.8)+32;
	printf("Los grados en  Centigrados que introdujo a Farenhheit son %f \n", f);
	
	k=temperatura+273.15;
	printf("Los grados en Centigrados que introdujo a Kelvin son %f \n", k);

	c=(f-32)/1.8;
	printf("Finalmente aqui se muestran los grados Centigrados del inicio %f \n", c);
	return 0;

	

	


}
