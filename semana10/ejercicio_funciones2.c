/*Se indica la libreria que usamos*/
#include <stdio.h>
/*Librería se usará por el uso de seno, coseno, log y exponencial*/
#include<math.h>

/*Declaración de la función exponencial, dicho nombre debe ser único para dicha función*/
void exponencial();
/*Declaración de la función logaritmo, dicho nombre debe ser único para dicha función*/
float logaritmo(float h);
void seno(float j);
float coseno();

/*Definimos la acción que realizará la función, en este caso es calcular el exponencial de un número*/
void exponencial(){
		/*Me define una varaible de tipo punto flotante res y x*/
		float xi,res_exp,res_log;
		/*Indica al usuario que entre dos valores para calcular x asi como su intervalo*/
		printf("Favor de ingresar un número para calcular su seno, logaritmo y exponencial: \n");
		/*Lee el dato ingresado, ya formateado, del stdin*/
		scanf("%f",&xi);
		seno(xi);
		/*Se calcula el logaritmo, exponencial, seno y coseno del dato ingresado*/
		res_exp=exp(xi);
		printf("El exponencial de %f es %f \n",xi,res_exp);
		/*Calculamos el logaritmo de xi*/
		res_log=logaritmo(xi);
		printf("El logaritmo de %f es %f \n",xi,res_log);
		
			
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
}

/*Definimos las acciones que rallizará la función seno (float j), en este caso es calcular el seno de un número*/
void seno(float j){
	
			/*Dclaracion de variables de tipo punto flotante de 6 cifras*/
			float xi,res_sen;
			/*El valor de la varialbe xi se guardará en el valor de la variable j*/
			xi=j;
			/*Se calcula el seno de xi y se multiplica por 180*pi*/
			res_sen=sin(xi)*57.29557795131;
			printf("El seno en grados sexagesimales de %f es %f \n",xi,res_sen);
}
	
		
/*Definimos la acción que realizará la función, en este caso es calcular el logaritmo de un número*/
float logaritmo(float h){
		return log(h);
}	
