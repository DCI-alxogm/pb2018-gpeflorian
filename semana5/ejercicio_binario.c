

#include<stdio.h> //Incluyo la librería que voy a usar

int main() //Pongo la función maestra
{

	int n, i, factorial, op=1; //Mis variables son enteras por lo que uso INT, además las variables dentro de FOR siempre son enteras. ES necesario que op sea igual a 1 para que while se pueda correr.

while(op==1){ //Este while hace que todo el programa corra de nuevo siempre y cuando el usuario escoja que sí.
	factorial=1;
	printf("Dame un número entero para calcular su factorial: \n "); //Pide el número que se va a usar al usuario
	scanf("%i", &n); //El programa lo agarra

for(i=1;i<= n;i++){ //El FOR inicia en 1 porque el primer factorial es 1 y termina en el número, ya que así se debe yterminal un factborial. Además va de 1 en 1.

	factorial= factorial*i; //El primer factorial va a ser una nueva variable que almacene las operaciones que realiza el factorial2 con el valor de i cambiante que va desde 1 hasta el número indicado.
	}
		
	printf("Tu factorial es: %i \n", factorial); //Se imprime el resultado
	printf("¿Quieres hacer otra operación? (Opción 1: sí, Opción 2: no)"); //ESta opción está relacionado con el while, el cual da la posibilidad de que el usuario pueda correr de nuevo el programa
	scanf("%i", &op);
}

return 0; //Se cierra el programa
}

