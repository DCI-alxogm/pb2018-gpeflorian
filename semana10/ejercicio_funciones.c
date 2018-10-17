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




/*Funcion maestra del programa*/
int main()
{

		/*Declaracion de variables de tipo punto flotante de 6 cifras*/
		float x1;
		/*El valor que tome la función cuadrado() será guardada en x1*/
		x1=coseno();
		/*Imprime el valor calculado con float coseno()*/
		printf("%f \n",x1);

		/*Se hace uso de la función*/
		exponencial();



		return 0;
}	
/*Definimos la acción que realizará la función, en este caso es calcular el coseno de un número*/
float coseno()
{
		/*Declaracion de variables de tipo punto flotante de 6 cifras*/
		float xo,res_cos;
		/*Imprime a la pantalla las instrucciones  para el usuario*/
		printf("Favor de ingresar el número para calcular su coseno en grados sexagecimales:\n");
		/*Lee el dato ingresado, ya formateado, del stdin*/
		scanf("%f",&xo);
		/*El valor de res_cos es el coseno del valor ingresado por 180*pi*/
		res_cos=cos(xo)*57.29557795131;
		printf("El coseno de %f es ",xo);
		/*La función return regresa e valor de x2 al programa fuente*/
		return res_cos;
}
