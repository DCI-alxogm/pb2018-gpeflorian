

/*Se indica la libreria que usamos*/
#include <stdio.h>
#include<math.h>

/*Declaración de la función cuadrado, dicho nombre debe ser único para dicha función*/
void exponencial();
/*Declaración de la función cuadrado, dicho nombre debe ser único para dicha función*/
float logaritmo(float h);

/*Funcion maestra del programa*/
int main()
{

		/*Se hace uso de la función*/
		exponencial();

		/*Indica si la secuencia de instrucciones sucedio
 		correctamente, de lo contrario enviara signo de error*/
		return 0;
		}

		void exponencial(){
		/*Me define una varaible de tipo punto flotante res y x*/
		float xi,rese,resl;
		/*Indica al usuario que entre dos valores para calcular x asi como su intervalo*/
		printf("Favor de ingresar un número para realizar una serie de cálculos con él \n");
		/*Permite al usuario entrar los valores*/
		scanf("%f",&xi);
		rese=exp(xi);
		printf("El exponencial de %f es %f \n",xi,rese);
		resl=logaritmo(xi);
		printf("El logaritmo de %f es %f \n",xi,resl);

			
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
		
	}
		float logaritmo(float h){
		return log(h);
	}	
