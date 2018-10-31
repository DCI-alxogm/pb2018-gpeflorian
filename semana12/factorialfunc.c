#include <stdio.h>
#include<math.h>
#include "factorial.h"


void factorial() {

	/*Me define una varaible de tipo punto flotante res y x*/
	float xi=5,res;

				/*Realizara las operaciones corresopndientes a el valor x agregado por el usuario*/			
				res=exp(xi);
				/*Los fprintf imprimiran a mi archivo factorial.txt los resultados de las operaciones indicadas a continuacion con rango y el espaciado dado por el usuario*/
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
