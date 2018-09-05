/*Este programa evaluara una variable x en exponencial, logaritmo, seno, coseno y raiz cuadrada en un intervalo y con un espaciado definido por el usuario.*/

/*Se indica la libreria que usamos*/
#include <stdio.h>
#include<math.h>

/*Funcion maestra del programa*/
int main()
{
	/*Me define una varaible de tipo punto flotante res y x*/
	float xi,xf,espaciado,res;
	/*Me define una variable de tipo entera n y e que son el intervalo y expaciado*/
	int i,n;

		/*Indica al usuario que entre dos valores para calcular x asi como su intervalo*/
		printf("Ingrese dos valores para el intervalo en el que el valor de x se calculara, asi como el espaciado que habra entre cada calculo de intervalo  \n");
		/*Permite al usuario entrar los valores*/
		scanf(" %f %f %f",&xi,&xf,&espaciado);

		/*Indica que si xf es menor a xi entonces el calculo no se puede realizar y pide al usuario ingresar otros valores*/		
		if(xf<xi){
		printf("El valor de xf no puede ser menor que xi, favor de re-iniciar el programa e ingresar otros valores \n");
			}
			 

		n=(xf-xi)/espaciado;
		
			/*Me indica que las operaciones inician en cero, deben ser menor que n y se le sumara 1*/
			for(i=0;i<n;i++){
				/*Realizara las operaciones corresopndientes a el valor x agregado por el usuario*/			
				res=exp(xi);
				printf("El exponencial de %f es %f \n",xi,res);
				res=log(xi);
				printf("El logaritmo de %f es %f \n",xi,res);
				res=sin(xi)*57.29557795131;
				printf("El seno es de %f es %f \n",xi,res);
				res=cos(xi)*57.29557795131;
				printf("El coseno de %f es %f \n",xi,res);
				res=sqrt(xi);
				printf("La raiz cuadrada de %f es %f \n",xi,res);
				xi=xi+espaciado;	
		}		
			
	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
}
