/*Este programa declara y contiene las instruccioens con las cuáles se calcularán las temperaturas de una placa en estado estacionario. Creado por Guadalupe Florian el 30 de octubre del 2018*/

/*Se inican librerías usadas por el programa*/
#include<stdio.h>

/*Función maestra del programa*/
void temperaturas(){

	/*Declaro mis variables para los archvos que contienen las tempraturas y el tamaño de mi placa, así como el de los resutlados*/
	FILE *info;
	FILE *results;
	/*Declaro mis variables de coordenadas en x,y, tamaño de la placa y mis contadores, las cuáles son de tipo entero*/
	int cx,cy,size,i=0,a=0;
	/*Declaro las variables de las temperaturas de mi placa, las cuáles sonde tipo punto flotante*/
	float T1, T2, T3, T4;

		/*Se abre el archivo promedio.txt para su lectura*/
		info = fopen("info.txt","r");
		/*Se leen los datos ingresados, ya formateados del stdin*/
		fscanf(info,"%f %f %f %f %i", &T1,&T2,&T3,&T4,&size);
		/*Cierro el archivo info.txt*/
		fclose(info);
		/*Se imprime la información leída en el archivo info.txt a la pantalla*/
		printf("Las temperaturas iniciales de la placa son las siguientes: \n %f %f %f %f %i \n", T1,T2,T3,T4,size);
		
		/*Declaro una variable de tipo flotante, la cuál guardará las coordenadas xy de las temperaturas de la placa*/
		float placa [size][size];
		/*Creo un ciclo donde inicializo mis coordenadas "y" en cero, dicha acción se repiten las instrucciones dentro del ciclo for hasta que haya un número de "size" coordenadas "y" en la placa*/
		for (cy=0;cy<size;cy++){
			/*Creo un ciclo donde inicializo mis coordenadas "x" en cero, y se repiten las instruccioens dentro del ciclo for hasta que haya un número de "size" coordenadas "x" en la placa*/
			for(cx=0;cx<size;cx++){

				/*Los valores de mis coordenadas x,y se guardarán en los arregloos cx,cy respectivamente*/
				placa [cx][cy]=0;

			}
		}
			/*Éste ciclo for inicializa las coordenadas "y" en cero, cada vez que se realize dicho ciclo se le sumará una unidad al contador y terminará cuando el conteo llegue al valor de size*/
			for(cy=0;cy<size;cy++){
				/*El valor de las temperaturas 1 y 2 se guardarán en las coordenadas (0,cy) , que es la primera columna, y (size-1,cy), que delimita las temperaturas que estarán cambiando en la placa en la coordenada y, respectivamente*/
				placa[0][cy]=T1;
				placa[size-1][cy]=T2;

			}
			/*Inicializo mis coordenadas "x" en cero, y se repiten las instrucciones dentro del ciclo for hasta que haya un número de "size" coordenadas "x" en la placa*/
			for (cx=0;cx<size;cx++){
				/*El valor de las temperaturas 1 y 2 se guardarán en las coordenadas (cx,0), que es la primera fila, y (cx,size-1), que delimita las temperaturas que estarán cambiand en la placa en la coordenada x, respectivamente*/
				placa[cx][0]=T3;
				placa[cx][size-1]=T4;

			}

				/*Ciclo en donde mientras el contador sea menor o igual a 12 las instrucciones dentro de éste se realizarán*/
				while (i<=12){
				/*Ciclo indica que en el momento que el valor de las coordenadas xy (arreglos) sea igual a 7, se verificará que dichos valores sean menores a la temperatura 3 menos uno*/
				while (placa [7][7]<T3-1){
				
				/*Se guardará un arreglo con una cadena de hasta 32 caracteres*/
				char buffer [32];

				/*Ciclo indica que mientras las instruccioes dentro de éste se realizen un número que tenga una unidad menor a 40, dicho ciclo se seguirá realizando*/
				while (a<101) {

					/*Inicializo mis coordenadas x,y en uno, y la operacion dentro de dicho ciclo se realizará un número de size-1 veces (largo y ancho de la placa)*/
					for (cy=1;cy<size-1;cy++){
					for (cx=1;cx<size-1;cx++){
						/*Los valores de las coordenadas cx,cy (ya con los valores de las temperaturas guardados en ellas) tomarán el valor de la suma de las temperaturas de arriba, abajo, izquierda y dereha, tomando como referencia la una posición específica cx,cy, y temperaturas se sumarán y se dividirán entre cuatro; haciendo uso del método Gauss-Seidel. */
						placa[cx][cy]=(placa[cx+1][cy]+placa[cx-1][cy]+placa[cx][cy+1]+placa[cx][cy-1])/4;

					}
					}
				
					
					/*Se formatean y guardan un numero máximo de caracteres al buffer. Se usará para nombrar a cada documento creado por el programa para guardar las coordenadas calculadas, diferenciándolas con el número que incrementará una unidad en cada repetición del ciclo, es decir, cada vez se se crea un documento*/
					snprintf(buffer, sizeof(char)*32, "Placa_temp%i.ods",a);
					a++;

					/*Se indica que se abrimorerá y se escribirá en un archivo con el nombre de la cadena de caracteres indicada por snprintf, donde se imprimirán las temperaturas calculadas*/
					results=fopen(buffer,"w");
						for (cy=0; cy<size; cy++){
							for (cx=0; cx<size; cx++){
						
								/*Se imprimen las temperaturas al archivo de resutlados*/
								fprintf(results,"%f  ",placa[cx][cy]);
						}	
						/*Se salta un a línea cuando un número de size coordenadas se calculen en la primera fila, y así sucesivamente para las demás*/
						fprintf(results, "\n");
						
						}	
					}
					/*Se cierra cada archivo con las temperaturas del periodo calculadas*/
					fclose(results);
						
						/*Se iguala a a cero para que la condición del ciclo while (a<40) se ejecute un número de 40 veces y no imprima archivos de más*/
						a=0;
					}
				/*Se le suma al contador del ciclo for una unidad*/	
				i++;
					a=0;

					}	

			
/*Indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara signo de error*/
return 0;

}

