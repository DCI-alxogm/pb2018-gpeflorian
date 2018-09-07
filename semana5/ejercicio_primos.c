/*Este ejercicio imprime a la pantalla todos los numeros primos en un intervalo definido por el usuario. Tiene un intervalo maximo de 100. Creado por Guadalupe Florian Sept 5 2018.*/

/*Me indica las librerias que usare para el programa*/
#include <stdio.h>

/*Funcion maestra del programa*/
int main()
{

	int p1,p2,res,i,j;
		
		printf("Este programa calculara los numeros primos en un intervalo definido. Favor de introducir el intevalo dentro del que desea saber cuantos numeros primos hay. Aviso: el programa no calcuara mas de 100 numeros primos.\n");

		scanf("%i %i",&p1,&p2);


		printf("La list de numeros primos son: %d and %d son \n",p1,p2);
			
			for (i=p1+1;i<p2;++i)
				{
			
				
				for(j=2;j<=i/2;++j){
			
					if(i %j==0)
					{
						res=1;
						break;
					}
						    }
					if(res==0)
					printf("%d",i);
}

	return 0;


}
