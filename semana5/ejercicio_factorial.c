/*Este programa me sirve para determinar el factorial de un numero dado. Creado por Guadalupe Florian*/

/*se indica la libreria que voy a usar*/
#include<stdio.h>


	/*Funcion maestra del programa*/
	int main()
	{

		/*Declaro variales de tipo entero*/
		int n,i,f,opcion=1; 

			/*Indico que mientras usuario eliga la opcion 1, se hara el factorial de este numero */
			while(opcion==1){ 

				/*Indica que el primer factorial es 1*/
				f=1;
				/*Pide ingresar al usuario el numero que se usara en el programa para calcular el factorial*/
				printf("Favor de ingresar un numero para determinar su factorial \n "); 
				/*El usuario puede entrar un numero para sacar su factorial*/
				scanf("%i", &n);
				 
					/*Indica que la secuencia de operaciones iniciara en 1, sera menor o igual que n para seguir realizando la secuencia, es una condicion y aumentara una unidad cada vez que se completa la seria de instrucciones */	
					for(i=1;i<= n;i++){ 

						/*De el factorial inicial se hara el siguiente factorial, mientras el valor de i aumente una unidad, asi seguira el factorial hasta el numero indicado n*/
						f= f*i; 
							}
						
					/*Imprime a la pantalla el resultado del factorial*/
					printf("Tu factorial es: %i \n", f); 

					/*Indica al usuario si desea hacer otra operacion, en caso que si presionara 1 y seguira el loop, en caso que no se detendra y saldra del programa*/
					printf("¿Quieres hacer otra operación? (Opción 1: sí, Opción 2: no)"); 
					/*Se imprime el factorial*/
					scanf("%i", &opcion);

	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/						}

	return 0; 
}

