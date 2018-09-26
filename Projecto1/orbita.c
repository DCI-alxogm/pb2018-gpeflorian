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
	int i,M,T,to=0,ti;
	double x,y,z,X,Y,Z,,G=39.4784176,m,h;


	/*Se lee el archivo venus.txt, donde se encuentran valores de x,y,z,X,Y,Z*/
	archivo=fopen("venus.txt","r");
	

			fscanf(archivo,"%lf %lf %lf %lf",&m,&M,&T,&h);

			/*Mi programa lee en orden los valores de poisicion y tiempo de venus*/
			fscanf(archivo,"%lf %lf %lf",&x,&y,&z);

			fscanf(archivo,"%lf %lf %lf",&X,&Y,&Z);

		
		
		/*Se cierra el archivo venus.txt*/
		fclose(archivo);

		ti[365]=to+h

			for(t=to,t<T,i++){
				
		
				x[i]=0
					 }	

			
			printf()
  






	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
	}
