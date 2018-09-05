/*Este programa evaluara una variable x en exponencial, logaritmo, seno, coseno y raiz cuadrada en un intervalo y con un espaciado definido por el usuario.*/

/*Se indica la libreria que usamos*/
#include <stdio.h>
#include<math.h>

/*Funcion maestra del programa*/
int main()
{
	/*Me define una varaible de tipo punto flotante res*/
	float x,res1,res2,res3,res4,res5;
	/*Me define una variable de tipo n igual a 3, una k y una j*/
	int n,e;

		printf("Ingrese aqui un numero x para obtener su exponencial, logaritno, seno, coseno y raíz cuadrada. Así como un intervalo y un expaciado para los resultados.");
		scanf("%f %i %i", &x,&n,&e);
		
			/*Me indica que j empieza en 0 y mientras sea menor a 3 se le sumara 1*/
			for(x=0;x<n;x+e){
				/*Me indica que obtenemos res al multiplicar j por k por 1.0*/			
				res1=exp(x);
				res2=log(x);
				res3=sin(x)*57.29557795131;
				res4=cos(x)*57.29557795131;
				res5=sqrt(x);
				/*imprimirmos a la pantalla j, k y res*/
				printf("El exponensial es %f %f \n",x,res1);
				printf("El logaritmo es %f %f \n",x,res2);
				printf("El seno es %f %f \n",x,res3);
				printf("El coseno es %f %f \n",x,res4);
				printf("La raiz cuadrada es %f %f \n",x,res5);
			}
		}
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
