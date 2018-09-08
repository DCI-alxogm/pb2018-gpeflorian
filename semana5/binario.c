/*Programa creado para transformar cifras binarias a numeros y cifras en numero a binarios. Creado Por Guadalupe Florian*/

/*Me indica las librerias que usare para el programa*/
#include<stdio.h>
#include<math.h> 


/*Funcion maestra del programa*/
int main(){

	/*Declaramos variables de tipo entero*/
	int bin=0,dec=0,res=0,count=0,i,op; 

	/*Necesitamos una cadena de caracteres para separar los digitos del sistema binario*/
	char binary[100]; 

		/*Le pide al usuario indicar si quiere convertir un numero de binario a decirma o decimal a binario*/
		printf("Por favor indica la opcion que deseas hacer \n 1)Convertir de binario a decimal \n 2)Convertir de decimal a binario\n");

		/*Permite al usuario escoger la conversion que desee hacer */
		scanf("%i", &op); 
	
				/*Ejecuta accion de elegir la opcion deseada para conversion en cuanto a lo que eliga el usuario*/
				switch(op){ 

				/*Indica el caso 1*/
				case 1:
			/*Le pregunta al usuario que numero desea convertir a decimal*/
			printf("Introducir el numero binario que desee convertir a decimal \n");

				/*Le permite al usuario entrar un binario*/ 
				scanf("%i", &bin);

			/*Indica que mientras el numero sea mayor a cero se realizara el siguietnte loop*/
			while(bin>0){ 
				
				/*res sera igual al residuo de vidivir el numero binario entre 10*/
				res=bin%10; 

					/*Si el residuo anterior es diferente de cero la orden siguiente se ejecutara*/
					if(res!=0){	
			
						/*El decimal es igual a la potencia de la base dos la cual inicia en cero, y acaba en un numero que es menor al numero de digitos que tiene el binario por count, al final del proceso se suman*/
						dec= dec+(pow(2,count));

							}
						/*bin es igual a si mismo dividido entre 10 hasta que su resultado alzance el cero*/
						bin= bin/ 10; 

						/*Asi progresara el contador al numero siguiente y se elevara la potencia correcta en base 2*/
						count=count+1;

							}
				/*Se indica al usuario el resultado de su numero decimal*/
				printf("\n El numero decimal correspondiente es %i \n", dec); 

				/*Indica la terminacion de este calculo o instruccion*/
				break; 
	
				/*Indica el caso 2*/
				case 2:
				printf("Introducir el numero entero que desee convertir a decimal \n"); 

				/*El usuario puede entrar un numero entero de su eleccion*/
				scanf("%i", &dec);

				/*Se requiere colocar el mensaje a priori de las operacones debido al string que se usara para expresar el numero binario*/
				printf("\n Su equivalente en binario es:\n");


				/*Me indica que mientras el numero que el usuario entro al sistema sea igual a cero la orden siguiente se ejecutara */
				while(dec>0){ 

					/*Si el numero cuando se divide entre dos da como resultado uno, entonces el siguiente tambien sera uno*/
					if(dec%2==1){ 

						/*El string indicado se relacionara con el contador */

						/*El string se relacionara con el contador, ya que el orden sera de suma importancia para expresar con el numero binario. */
						binary[count++]='1'; 
				
					/*Si el numero es divisible entre dos y n o tiene residuo, el siguiente en el string sera 0*/							}
					else{ 

					/*Relacionamos los caracteres del string conel contador ya que su posición es importante para determinar el valor decimal de los numeros binarios*/
					binary[count++]='0';
							}
					/*La operacion me ayudara para que el decimal cambie conforme avancen los while loops*/
					dec= dec/2; 

				}
				/*Nos ordenara los digitos que salieron atras. Iniciara el contador (0) y sera mayora cero. Se ordenara conforme a los numero binarios, es decir de adelante hacia atras*/
				for(i=count; i>0; i--){ 
		
				/*Imprimira a la pantalla el numero binario*/
				printf(" %c \n", binary[i-1]); 
							}
	
			/*Indica la terminacion de este calculo o instruccion*/
			break; 
				}
return 0;


}

