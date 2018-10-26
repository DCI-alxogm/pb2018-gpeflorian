/*Este programa calcula la temperatura de una placa en estado estacionario. Creado por Guadalupe Florian el 24 de octubre del 2018*/

/*Se inican librerías usadas por el programa*/
#include<stdio.h>

/*Función maestra del programa*/
int main (){

	/*Declaro mis variables para los archvos que contienen las tempraturas y el tamaño de mi placa, así como el de los resutlados*/
	FILE *info;
	FILE *results;
	/*Declaro mis variables de coordenadas en x,y, tamaño de la placa y mis contadores, las cuáles son de tipo entero*/
	int cx,cy,size,i=0,a=0;
	/*Declaro las variables de las temperaturas de mi placa, las cuáles sonde tipo punto flotante*/
	float T1, T2, T3, T4;

		
		info = fopen("info.txt","r");
		fscanf(info,"%f %f %f %f %i", &T1,&T2,&T3,&T4,&size);
		fclose(info);
		printf("Las temperaturas iniciales de la placa son las siguientes: \n %f %f %f %f %i \n", T1,T2,T3,T4,size);
		
		float placa [size][size];
		for (cy=0;cy<size;cy++){
			for(cx=0;cx<size;cx++){

				placa [cx][cy]=0;

			}
		}
		
			for(cy=0;cy<size;cy++){
				placa[0][cy]=T1;
				placa[size-1][cy]=T2;

			}

			for (cx=0;cx<size;cx++){
				placa[cx][0]=T3;
				placa[cx][size-1]=T4;

			}

			
				while (i<=12){
				while (placa [7][7]<T3-1){
					for (cy=1;cy<size-1;cy++){
					for (cx=1;cx<size-1;cx++){
				
						placa[cx][cy]=(placa[cx+1][cy]+placa[cx-1][cy]+placa[cx][cy+1]+placa[cx][cy-1])/4;

					}
					}
				
				while (a<40) {
					char buffer [32];
	
					snprintf(buffer, sizeof(char)*32, "Placa_temp%i",a);
					a++;

					results=fopen(buffer,"w");
						for (cy=0; cy<size; cy++){
							for (cx=0; cx<size; cx++){
						
								fprintf(results," %f ",placa[cx][cy]);
							}

						fprintf(results, "\n");

						}	
					}

					fclose(results);

						a=0;
					}
					
				i++;
					a=0;

					}	

			

return 0;

}

