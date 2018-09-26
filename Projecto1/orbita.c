/**/


/*Me indica las librerias que usare para el programa*/
#include<stdio.h>
/*Se usa la libreria de Math por el uso de potencial */
#include<math.h>


/*Funcion maestra del programa*/
int main (){

	/*Declaro variables FILE*/
	FILE *archivo;
	FILE *resultados;
	/*Declaro variables tipo enteras y de punto flotante*/
	int i,M=1,N=365;
	double x,y,z,X,Y,Z,xo,yo,zo,xf,yf,zf,G=39.4784176;


	/*Se lee el archivo venus.txt, donde se encuentran valores de x,y,z,X,Y,Z*/
	archivo=fopen("venus.txt","r");
	

			/*Mi programa lee en orden los valores de poisicion y tiempo de venus*/
			fscanf(archivo,"%lf %lf %lf",&x,&y,&z);

			fscanf(archivo,"%lf %lf %lf",&X,&Y,&Z);

		
		
		/*Se cierra el archivo venus.txt*/
		fclose(archivo);

		

			for(t=0,t<N,i++){
				
		
				h=ti-to
					}		







	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
	}
