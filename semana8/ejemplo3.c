/*Este programa indica la dirección de la variable var ye l valor de la variable var al moverse a diferentes posiciones de la memoria. Creado por Guadalulpe Florian el 3 de Octubre del 2018*/

/*Se usará la librerá estándar*/
#include<stdio.h>

	/*Función maestra del programa*/
	int main () {

		/*Declaración de variables tipo enteras, y array*/
		int MAX = 3;
		int var[]={10,100,200};
		int i,*ptr;
		/*Asignamos la dirección del arreglo al apuntador*/
		ptr=&var;
	
			/*Se inicia un ciclo que empieza en 0, se repetirá un valor de MAX veces y se sumará una unidad por repetición*/
			for(i=0;i<MAX;i++){

				
				/*Se imprimen los caracteres los valores indicados*/
				printf("La dirección de la variable var [%d]=&x\n",i,ptr);
				printf("El valor de la variable var [%d] = %d\n",i,*ptr);
				/*Nos movemos a la siguiente posición de la mamoria*/
				ptr++;

					  }
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
}
