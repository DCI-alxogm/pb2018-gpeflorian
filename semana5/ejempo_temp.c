/*Este programa permite */

#include <stdio.h>

int main()
{
	float temp_C, temp_K,final,delta;
	int n,i,opcion=1, count=0;

	while (opcion==1){
	count++;		
	printf("Ingrese la temperatura en centígrados, la temperatura final y el numero de pasos \n");
		scanf("%f %f %i", &temp_C,&final,&n);


		delta=(final-temp_C)/n;
		for(i=0;i<n;i++){
			temp_K=temp_C+273.15;
			printf("%f %f\n", temp_C, temp_K);
			temp_C=temp_C+delta; // temp_C+=delta;
	
			}

		if (count>5){
			printf("Error: numero de interaciones excedido \n");
			return 1;
			}
	}

	
	return 0;
}
