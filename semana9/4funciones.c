/*En este programa se calcularán el logaritmo, exponencial, coseno y seno de un número dado por el usuario usando funciones. Creado por Guadalupe Florian el 12 de octubre del 2018.*/

/*Se indica la libreria que usamos*/
#include <stdio.h>
#include<math.h>

/*Declaración de la función exponencial, dicho nombre debe ser único para dicha función*/
void exponencial();
/*Declaración de la función logaritmo, dicho nombre debe ser único para dicha función*/
float logaritmo(float h);
void seno(float j);

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
		float xi,res_exp,res_log;
		/*Indica al usuario que entre dos valores para calcular x asi como su intervalo*/
		printf("Favor de ingresar un número para realizar una serie de cálculos con él \n");
		/*Lee el dato ingresado, ya formateado, del stdin*/
		scanf("%f",&xi);
		seno(xi);
		/*Se calcula el logaritmo, exponencial, seno y coseno del dato ingresado*/
		res_exp=exp(xi);
		printf("El exponencial de %f es %f \n",xi,res_exp);
		res_log=logaritmo(xi);
		printf("El logaritmo de %f es %f \n",xi,res_log);
		
			
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
	}
	

		void seno(float j){
	
			float xi,res_sen;
			xi=j;
			res_sen=sin(xi)*57.29557795131;
			printf("El seno en grado sexagesimal de %f es %f \n",xi,res_sen);
	}
	
		
	
		float logaritmo(float h){
		return log(h);
	}	
