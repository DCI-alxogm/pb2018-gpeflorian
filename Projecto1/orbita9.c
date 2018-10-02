/*Este programa calcula las velocidades y posiciones de un planeta a la vez a lo largo de un lapso de tiempo en unidad años. Usaremos esta información para crear una gráfica en 3D que mostrará la órbita elíptica de cada planeta. Creado el 30 de Septiembre del 2018 por Guadalupe Sinaí Florián Landa.*/


/*Me indica la librería estándar que se usará para el programa*/
#include<stdio.h>
/*Se usará la librería de Math por el uso de potencial */
#include<math.h>
/*Librerias que se usarán para la función snprintf*/
#include<stdlib.h>
#include<string.h>


/*Función maestra del programa*/
int main (){

	/*Declaro variables FILE para el archivo de donde se leerán los datos de cada planeta, y el archivo donde se guardará la información*/
	FILE *archivo;
	FILE *resultados;
	/*Declaro variables de tipo enteras y de punto flotante para asignarles valores de un archivo y también ralizar los cálculos; ambos para obtener las coordenadas.*/
	int M,T,a,k;
	double x0,y0,z0,vx0,vy0,vz0,X,Y,Z,VX,VY,VZ,r,G,m,h,i;
	char cadena [32];


		/*Se abre el archivo coordenadas_archivo9.txt para su lectura, donde se encuentran valores de posición iniciales (x0,y0,z0) y velocidad iniciales (vx0,vy0,vz0)*/
		archivo=fopen("coordenadas_archivo9.txt","r");
	
			/*Se inicia un ciclo donde se ejecutará la instrucción snprintf un número de 9 veces*/
			for (a=0;a<=8;a++){

				/*Se formatean y guardan un numero máximo de  caracteres al buffer. Se usará para nombrar a cada documento creado por el programa para guardar las coordenadas calculadas, diferenciándolas con el número k que incrementará una unidad en cada repetición del ciclo*/
				 snprintf(cadena,sizeof(char)*32,"Planeta%i.txt",k);
				/*Se indica que el archivo que se escribirá con el nombre de la cadena de caracteres indicada por snprintf será el de *resultados */
				resultados=fopen(cadena,"wb");

				/*Se lee la información de la masa del planeta, la masa de la estrella, el tiempo y el espaciado en unidades astronómicas y años*/
				fscanf(archivo,"%lf %i %i %lf",&m,&M,&T,&h);

				/*Se leen en orden los valores de poisición y tiempo iniciales de un planeta a la vez*/
				fscanf(archivo,"%lf %lf %lf",&x0,&y0,&z0);

				fscanf(archivo,"%lf %lf %lf",&vx0,&vy0,&vz0);

				/*Se calcula la constante de gravitación en unidades astronómicas y años, que es igual a 4 por* pi cuadrada pow */
				G=4.0*pow(3.141592653589,2);			


				/*Se convierten las velocidades iniciales de días a años multiplicando por 365*/
				vx0*=365.242;
				vy0*=365.242;
				vz0*=365.242;




						/*Se imprime al documento de texto, conteniendo los resultados de cada planeta,  la clasificación de la información calculada por columna*/
						fprintf(resultados,"  Día         X          Y          Z         VX         VY         VZ \n");


				/*Se inicia un ciclo for iniciando en cero, que se detendrá al llegar a un valor menor o igual al tiempo T y tendrá un espaciado (se le sumará) de h en cada cálculo*/
				for(i=0.0;i<=T;i+=h){
						
					/*Se hacen los cálculos para la posición siguiente usando el espaciado h, que es igual a la posición inicial mas la velocidad inicial en (x,y,z) por h*/
					X=x0+vx0*h;
				
					Y=y0+vy0*h;

					Z=z0+vz0*h;

					/*Se calcula el radio que es la raíz de la suma de las posiciones iniciales al cuadrado*/
					r=sqrt(pow(x0,2.0)+pow(y0,2.0)+pow(z0,2.0));


					/*Se hacen los cálculos de la veolcidad final, que es igual al producto de G, M y (x0,y0,z0) dividido entre el radio al cubo, todo esto multiplicado por h y finalmente se resta de la velocidad inicial (vx0,vy0,vz0)*/
					VX=vx0-h*((G*M*x0)/pow(r,3.0));

					VY=vy0-h*((G*M*y0)/pow(r,3.0));
					
					VZ=vz0-h*((G*M*z0)/pow(r,3.0));
					
					/*Se indica al programa que en cada repetición del ciclo for la (X,Y,Z) y (VX,VY,VZ) finales se convertiran en las nuevas (x0,y0,z0) y (vx0,vy0,vz0) iniciales, y así sucesivamente en cada repetición del ciclo*/
					x0=X;
					
					y0=Y;
						
					z0=Z;

					vx0=VX;

					vy0=VY;

					vz0=VZ;

					
						/*Se imprime el día al archivo de texto FILE *resultados, por repetición del ciclo. Esto ayuará a ubicar las coordenadas en el lapso de timepo T*/
						fprintf(resultados,"%lf ",i*365);
					
						/*Se imprimen las velocidades y posiciones finales al archivo de texto FILE *resultados*/
						fprintf(resultados," %lf  %lf  %lf  %lf  %lf  %lf \n",X,Y,Z,VX,VY,VZ);

				}	
			/*Se cierra el archivo de texto FILE *resultados */
			fclose(resultados);
			/*Incrementa k en una unidad en el nombre del documento *resultados, cada vez que uno nuevo se escribe y finaliza*/
			k++;

		}

		/*Se cierra el archivo de texto FILE *archivo */
		fclose(archivo);
	
			



	/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviará signo de error*/
	return 0;
	}
