/*Este programa evaluara una variable x en exponencial, logaritmo, seno, coseno y raiz cuadrada en un intervalo y con un espaciado definido por el usuario.*/

/*Se indica la libreria que usamos*/
#include <stdio.h>
#include<math.h>

/*Funcion maestra del programa*/
int main()
{
	/*Me define una varaible de tipo punto flotante res y x*/
	double x,res;
	/*Me define una variable de tipo entera n y e que son el intervalo y expaciado*/
	int n,e;

		/*Me indica las instrucciones para el usuario y lo que el programa hara con los valoresi ingresados*/
		printf("Ingrese aqui un numero x para obtener su exponencial, logaritmo, seno, coseno y raíz cuadrada. Así como un intervalo y un expaciado para los resultados. \n");
		scanf("%lf %i %i", &x,&n,&e);
		
			/*Me indica que x empieza en 0 y mientras sea menor a n se le sumara e*/
			for(x=0;x<n;x+=e){
				/*Realizara las operaciones corresopndientes a el valor x agregado por el usuario*/			
				res=exp(x);
				printf("El exponencial es %lf %lf \n",x,res);
				res=log(x);
				printf("El logaritmo es %lf %lf \n",x,res);
				res=sin(x)*57.29557795131;
				printf("El seno es %lf %lf \n",x,res);
				res=cos(x)*57.29557795131;
				printf("El coseno es %lf %lf \n",x,res);
				res=sqrt(x);
				printf("La raiz cuadrada es %lf %lf \n",x,res);
				
			}
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
}
