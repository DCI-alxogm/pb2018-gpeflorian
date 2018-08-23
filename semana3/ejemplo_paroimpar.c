/*Este programa define si un numero entero es par o impar*/

/*Nos indica la libreria que usamos*/
#include <stdio.h>

	/*Funcion maestra del programa*/
	int main()
	{

		/*El int nos ayuda a definir variables de tipo entero*/
		int a;
		/*Aqui le pedimos al usuario que introduzca un numero entero*/
		printf("Introduce un numero entero \n");
		/*Aqui le damos la opcion al usuario de introducir la variable de tipo entero*/
		scanf("%i", &a);
		/*If nos permitira decirle au usuario si el numero que introdujo es par*/
		if (a%2==0){
		printf("a=%i es par\n", a);
		/*Else nos permite decirle al usuario si el numeor que introdujo es impar*/
		}else{
		printf("a=%i es impar \n",a);
	}
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
	}
