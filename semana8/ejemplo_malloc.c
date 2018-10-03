/*En este programa se suman el número de elementos en el apuntador. Creado por Guadalupe Florián el 3 de Octubre del 2018*/

/*Se incian las librerías incluídas en el programa*/
#include<stdio.h>
#include<stdlib.h>

	/*Función maestra del programa*/
	int main() {

		/*Se delcaran variables enteras*/
		int num,i,*ptr,sum=0;
		/*Se reserva el espacio en la mamoria usando malloc, se le indica que el total de bytes son el valor num por el tamaño de una variable entera*/
		ptr=(int*)malloc(num*sizeof(int));

		/*Se pide al usuario ingresar el número de elementos que desea sumar*/
		printf("Introduce el numero de elementos: \n");
		scanf("%d",&num);

		/*Si el número del elementos es cero, se indica que no hay memoria reservada*/
		if(ptr==NULL)
		{	
		printf("Error! mamoria no reservada."),
		exit(0);
		}

		/*Se pide al usuario introducir los valores del arreglo*/
		printf("Introduce los elementos del arreglo:\n");
		/*Se inicia ciclo en cero, se detenrá quando haya llegado al iésimo ciclo con un valor menor a num y se le sumará una unidad por ciclo*/
		for(i=0;i<num;++i)
		{
			/*El programa lee los valores ingresados al arreglo*/
			scanf("%d",ptr + 1);
			/*El programa suma los valores del arreglo*/
			sum += *(ptr + 1);
		}

		/*El programa imprime el resultado de la suma realizada*/
		printf("Sum = %d\n",sum);
		/*Se libera la memoria no usada por los apuntadores*/
		free(ptr);

	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
}
	
