Creado el 14 de Septiembre del 2018 por Guadalupe Florian.

Aqui se especifican los comandos que use para cada uno de los programas.

En cada programa uso #incluse <stdio.h> para indicar las librerias que usare el en programa e int main () para la funcion maestra.Asi como declaracion de variable int para variables enteras y float para variables de punto flotante. Y return 0 que me indica si la secuencia de instrucciones sucedio correctamente, de lo contrario enviara un signo de error.

Ejemplo_1.c Usa ciclos for(i=0;i<N;i++) para usar en la variable N que es igual a 10 y se permitio entrar el valor que entrara el usuario para ejecutar las instrucciones del programa. Se uso scanf("%f",&numeros[i]); para ingresar el valor y crear un array. Se multiplicara por dos numeros [i]*=2; y se imprimira el resultado con printf a la pantalla. 

Ejemplo_2.c Aqui se hizo un ciclo for que permite una serie de instrucciones de forma repetida por un determinado numero de veces. Incluye un contador i=0, una variable para las veces que se realizara el ciclo i<n y vaeriable que aumenta 1 unidad cafa vez que se completa la seria de instrucciones i++. Luego usamos scanf para que el usuario ingrese ciertos valores y [i] para crear un array que almacena una coleccion de elementos de forma secuencia, en vez de declarar variables separadas. Luego se multiplicaron esos numeros array por dos numeros[i]*=2 y finalmente se imprimieron a la pantalla con printf con su respectivo array printf("%f \n",numeros[i]).

Ejemplo_3.c Aqui se declaran variables enteras int y luego se usa printf para imprimir a la pantalla instrucciones para el usuario y scanf para permitir al usuario ingresar valores. Declaramos varialbes float como numeros [n] para crear un array con dichos valores, es decir, almacenarlos y usarlos de forma concecutiva para ciertas instruccioens, que en este caso sera para un ciclo for, que servira para ihdicar que empieza en cero i=0, que debe reperitse menos de n veces j<n y debe sumar una unidad por cada vez que se repita la instruccioni j++. Ingresara otro numero para multiplicarlo por dos con numeros[n]*2 y lo imprimira a la pantalla con printf.

Ejemplo_file En este ejemplo se declaro la varialbe de un archivo con FILE *archivo, luego se declararon variables con float, despues se abrio un archvo con archivo=fopen("text.txt","w"). Se imprimio al archivo de texto con fputs y fprintf, se dieron valor a variables con v=1 y se imprimieron al archivo de texto, finalmente se cerro el archivo con fclose(archivo).

Ejemplo_file2.c Aqui se declaro la variable de un archivo con FILE*archivo, se abrio un archivo para leerlo con  archivo=fopen("text.txt","w"), luego se leyo una cadena de caracteres del archivo con fscanf, despues se imprimio el caracter leido en el archivo con printf, desues con fscanf se tomo la informacion de dos variables del archivo que luego se imprimieron a la pantalla en la consola con printf. Finalmente se cerro el archivo con fclose.

Ejemplo_infoest.c Aqui se declaro la variable de un archivo con FILE*, luego se abrio un archvo con archivo=fopen("Informacion_estudiantes.txt","w" y finalmente se cerro el archivo con fclose(archivo).

Ejercicio_est.c En este programa se decllararon variables de tipo entera y flotante con int y float con arrays para al final hacer un reporte de la informacion ingresada y almacenada en array []. Luego se imprimieron a la pantalla instrucciones con printf y se inicio un ciclo con repeticiones determinadas con for (ya mencionamos sus funciones anteriormente en ejercicio_2). Luego pedimos al usuario ingresar informacion del estudiante con printf e ingresar la infor con scanf. En semestre y sexo creamos condiciones con if, else if para indicar ciertas instrucciones en caso que el usuario seleccione cierta opcion dada por el sistema. Finalmente se imprimio el reporte de cada informacion contando los alumnos por semestre, alumnos de sexo masculino y femenino y el promedio total con printf  %v,variable.

Ejercicio_est2.c En este archivo se uso el prograja Ejercicio_est con la exepcion que se leyeron los resultados de un archivo de texto usando *FILE para declarar las variables de dichos archivos, Informacion_estudiantes=fopen("Informacion_estudiantes.txt","r");
 para abrir el archivo donde esta la informacion, fclose(Informacion_estudiantes); para cerrar el archivo donde estaba lai nformacion, Resultados_estudiantes=fopen("Resultados_estudiantes.txt","w"); para crear el archivo de text con los resultados y fclose(Resultados_estudiantes); para cerrar el archivo con los resultados.
 
 factorial.c comienzo declarando las librerias que usare las cuales son math.h y stdio.h. Luego delcaro mi funcion maestra con int main (). Despues declaro mis variables enteras y flotantes con int y float. Procedo a pedirle al usuario que ingrese los valoers del intervalo con el que quiere trabajar con printf y para que increse los valores uso scanf y las variables ya declaradas. Luego indicoq que si la variable final es menor a la inicial no se realizaran las instruciones if(xf<xi). Indico el valor de el maximo del rango con n=(xf-xi)/espaciado;. Lueo indico el rango de mis operaciones y que incrementen con uno for(i=0;i<n;i++){. Finalmente indico operaciones que realizar con la variable x que seria exponente exp, logaritmo log, seno sin, coseno cos, raiz cuadrada con squrt. Aqui tambien uso un ciclo for (descrito anteriormente) para repetir las operaciones en un ciclo con n veces con un espaciado determinado. Aqui use el FILE* para decarar mi variable archivo, factorial=fopen("factorial.txt","w"); par abrir un archivo donde toda la informacion de las operaciones de vacien con fprintf(factorial,"%f",log) y finalmente fclose(factorial); para cerrar el archivo.


 
 
 




