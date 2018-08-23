/*Este programa le dira si la letra que introdujo es vocal o mayuscula*/

/*Nos indica la libreria que usamos*/
#include <stdio.h>

/*Funcion maestra del programa*/
int main(){

	/*Nos permite usar variables de tipo letra*/
	char c;
	/*Nos permite definir nuestras variables*/
	int es_vocalminuscula, es_vocalmayuscula;
	
		/*Le esta indicando al usuario lo que hace el programa y una instruccion*/
		printf("Este programa le dira si la letra que introdujo es vocal o mayuscula. Introduzca una letra \n");
		/*Le permite al usuario introducir una variable de tipo letra*/
		scanf("%c",&c);

	/*Se estan definiendo las variables vocales mayusculas y minusculas*/
	es_vocalminuscula=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	
	es_vocalmayuscula=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

	/*Si el usuario introduce las variables definidas como vocales mayusculas o minusculas se lo indicara*/
	if (es_vocalmayuscula||es_vocalminuscula){
		printf("%c es una vocal \n",c);
	/*Si el usuario entra letras que no sean vocales le indicara que son mayusculas*/
	} else{
		printf("%c es consonante\n", c);
	}
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
}
		
		
