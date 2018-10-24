/*Este programa . Creado por Guadalupe Florian el 24 de octubre del 2018*/

#include<stdio.h>

int main (){

	int cx,cy,size,i=0,e=0;
	float T1, T2, T3, T4;
	FILE *info;
	FILE *res;

		info = fopen("info.txt","r");
		fscanf(info,"%f %f %f %f %i", &T1,&T2,&T3,&T4,&size);
		fclose(info);
		printf("%f %f %f %f %i \n", T1,T2,T3,T4,size);
		
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

			
				while (i<=10){
				while (placa [5][5]<T3-1){
					for (cy=1;cy<size-1;cy++){
					for (cx=1;cx<size-1;cx++){
				
						placa[cx][cy]=(placa[cx+1][cy]+placa[cx-1][cy]+placa[cx][cy+1]+placa[cx][cy-1])/4;

					}
					}
				

		
			

			

return 0;

}
