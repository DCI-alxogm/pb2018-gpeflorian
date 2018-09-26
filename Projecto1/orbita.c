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
	int M,T;
	double x0,y0,z0,vx0,vy0,vz0,X,Y,Z,VX,VY,VZ,r,G=39.4784176,m,h,i,count=0;


	/*Se lee el archivo venus.txt, donde se encuentran valores de x,y,z,X,Y,Z*/
	archivo=fopen("venus.txt","r");
	

			fscanf(archivo,"%lf %i %i %lf",&m,&M,&T,&h);

			/*Mi programa lee en orden los valores de poisicion y tiempo de venus*/
			fscanf(archivo,"%lf %lf %lf",&x0,&y0,&z0);

			fscanf(archivo,"%lf %lf %lf",&vx0,&vy0,&vz0);

		
		
		/*Se cierra el archivo venus.txt*/
		fclose(archivo);

		
			resultados=fopen("resultados_orbita.txt","w");

				fprintf(resultados,"  Día         X          Y          Z         VX         VY         VZ \n");


				for(i=0.0;i<=T+h;i+=h){
					
					r=sqrt(pow(x0,2.0)+pow(y0,2.0)+pow(z0,2.0));
						
					X=x0+vx0*h;
				
					Y=y0+vy0*h;

					Z=z0+vz0*h;

					VX=vx0-h*((G*M*x0)/pow(r,3.0));

					VY=vy0-h*((G*M*y0)/pow(r,3.0));
					
					VZ=vz0-h*((G*M*z0)/pow(r,3.0));
					
			
						fprintf(resultados,"%lf ",i*365);
					
						fprintf(resultados," %lf  %lf  %lf  %lf  %lf  %lf \n",X,Y,Z,VX,VY,VZ);

				}	

			fclose(resultados);
			



	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
	}
