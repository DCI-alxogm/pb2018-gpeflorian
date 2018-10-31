/*Librería que se usará en el programa*/
#include <stdio.h>
#include<math.h>
/*Se usa la librería creada factorial.h*/
#include "factorial.h"

/*Se crea la función void factorial que se incluirá en la librería factorial.h*/

/*Se declara la función*/
void factorial() {

/*Dentro de los corchetes de la función se definen las acciones que realiza dicha función*/

	/*Me define una varaible de tipo punto flotante res y xi*/
	float xi=5,res;

				/*Realizara las operaciones corresopndientes a el valor x agregado por el usuario*/			
				res=exp(xi);
				/*printf imprime a la pantalla los resultados de los cálculos realizados*/
				printf("El exponencial de %f es %f \n",xi,res);
				res=log(xi);
				printf("El logaritmo de %f es %f \n",xi,res);
				res=sin(xi)*57.29557795131;
				printf("El seno es de %f es %f \n",xi,res);
				res=cos(xi)*57.29557795131;
				printf("El coseno de %f es %f \n",xi,res);
				res=sqrt(xi);
				printf("La raiz cuadrada de %f es %f \n",xi,res);
	


return;

}
