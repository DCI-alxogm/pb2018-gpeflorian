/*Este programa calcula las velocidades y posiciones de un planeta a la vez a lo largo de un lapso de 365 días o un año. Al final usamos esta información para crear una gráfica en 3D que mostrará la órbita elíptica del planeta. Creado el 30 de Septiembre del 2018 por Guadalupe Sinaí Florián Landa.*/


/*Me indica las librerias que usare para el programa*/
#include<stdio.h>
/*Se usa la libreria de Math por el uso de potencial */
#include<math.h>


/*Funcion maestra del programa*/
int main (){

	/*Declaro variables FILE para el archivo de que leeré la información y al que guardaré la información*/
	FILE *archivo;
	FILE *resultados;
	/*Declaro variables tipo enteras y de punto flotante para dar valores de un archivo y ralizar los cálculos para la órbita del planeta*/
	int M,T;
	double x0,y0,z0,vx0,vy0,vz0,X,Y,Z,VX,VY,VZ,r,G,m,h,i;


	/*Se lee el archivo venus.txt, donde se encuentran valores de x,y,z,X,Y,Z*/
	archivo=fopen("venus.txt","r");
	
			/*Se lee la informacion de la masa del planeta, la masa de la estrella, el tiempo y el espaciado en unidades astronómicas*/
			fscanf(archivo,"%lf %i %i %lf",&m,&M,&T,&h);

			/*Mi programa lee en orden los valores de poisicion y tiempo del planeta*/
			fscanf(archivo,"%lf %lf %lf",&x0,&y0,&z0);

			fscanf(archivo,"%lf %lf %lf",&vx0,&vy0,&vz0);

			

			/*Se escribe un archivo llamado resultados_orbita.txt para guardar los resultados de los cálculos realizados*/
			resultados=fopen("resultados_orbita.txt","w");

				/*Se imprime al documento .txt la clasificación de la información calculada por columna*/
				fprintf(resultados,"  Día         X          Y          Z         VX         VY         VZ \n");

			/*Calculo la constante de gravitación en años que es 4*pi cuadrada*/
			G=4.0*pow(3.141592653589,2);			


			/*Convierto las velocidades iniciales a años multiplicando por 365*/
			vx0*=365.242;
			vy0*=365.242;
			vz0*=365.242;

				/*Se inicia un ciclo for en cero, que será menor o igual al tiempo T y tendrá un espaciado (se le sumará) de h en cada cálculo*/
				for(i=0.0;i<=T;i+=h){
						
					/*Se hacen los cálculos para la posición siguiente usando el espaciado h, que es igual a la posición inicial mas la velocidad inicial (en x, y o z) por h*/
					X=x0+vx0*h;
				
					Y=y0+vy0*h;

					Z=z0+vz0*h;

					/*Se calcula el radio que es la raíz de la suma de las posiciones iniciales al cuadrado*/
					r=sqrt(pow(x0,2.0)+pow(y0,2.0)+pow(z0,2.0));


					/*Se hacen los cálculos de la veolcidad que sigue usando el espaciado h, que es igual al producto de G, M y H dividido entre el radio al cubo, todo esto multiplicado por h y finalmente se resta de la velocidad inicial ya sea en x, y o z.*/
					VX=vx0-h*((G*M*x0)/pow(r,3.0));

					VY=vy0-h*((G*M*y0)/pow(r,3.0));
					
					VZ=vz0-h*((G*M*z0)/pow(r,3.0));
					
					/*Se indica al programa que en cada repetición del ciclo for la x, y o z finales se convertiran en las nuevas x, y o z iniciales, y así sucesivamente*/
					x0=X;
					
					y0=Y;
						
					z0=Z;

					vx0=VX;

					vy0=VY;

					vz0=VZ;

					
						/*Se imprime el día al archivo de texto FILE resultados por repeticíón del ciclo*/
						fprintf(resultados,"%lf ",i*365);
					
						/*Se imprimen las velocidades y posiciones calculadas al archivo de texto FILE resultados por repetición del ciclo*/
						fprintf(resultados," %lf  %lf  %lf  %lf  %lf  %lf \n",X,Y,Z,VX,VY,VZ);

				}	
			/*Se cerra el archivo de texto FILE resultados*/
			fclose(resultados);


		/*Se cierra el archivo venus.txt*/
		fclose(archivo);
			



	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
	return 0;
	}
