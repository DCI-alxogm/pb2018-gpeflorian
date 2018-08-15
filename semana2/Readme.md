
Guadalupe Florian
Agosto 15 del 2018

Programacion Basica con Gonzalez Morales Alma Xochitl

	A continuacion voy a expliar el funcionamiento de los codicos de cada ejercicio hecho en la Semana 2 del curso de Programacion Basica.


Los codigos en el ejercicio 1:

1.- Se empieza con un comentario, generalmente corto. Este no se imprime en la pantalla ya que solo aparece en la terminal o consola. Se especifica usando/**/
2.- Seguimos con #include<stdio.h> que lee e incluye el contenido de la libreria que se especifique, en este caso <stdio.h>, que es una de las librerias estandar del lenguaje C.
3.- Luego se usa int main() que es la funcion maestra seguido de {} donde dentro de los mismos se especifican todas las instrucciones del programa. 
4.- Se uso tambien printf() que improme el texto que se mostrara en pantalla.
5.- Seguido tenemos el uso de int y char que declaran las variables que se van a usar, esto debe ser antes de incluirlas. Se debe coloar el nombre y tipo de variable, en este programa se uso int edad; que nos decia la varialbe edad, y char [20] que nos indicaba que se pide al usuario introducir hasta 20 caracteres consecutivos; el tipo de estos caracteres depende de las instrucciones colocadas por el programador. 
6.- scanf() nos indica el tipo de variables, en este caso colocamos "%s" que le dice al programa que se introduciran caracteres en secuencia. 
7.- Luego casi al terminar usaremos return 0, que nos indica si la secuencia de instrucciones que dimos esta escrita de forma correcta, de lo contrario nos mandara una señal de error y en la terminal aparecen los errores que se necesitan corregir para que el programa corra. 
8.- En todo el programa se uso de punto y coma (;) al final de cada instruccion, es importante que que sin el no es posible que corra la instruccion en el programa, mas si son varios comandos y se desea que se ejecuten en secuencia. Y el uso del Ampersand (&) que se usa para que un comando se ejecute en el background.  

Codigos en Ejercicio 2:
1.- Se empieza con un comentario, generalmente corto. Este no se imprime en la pantalla ya que solo aparece en la terminal o consola. Se especifica usando/**/
2.- Seguimos con #include<stdio.h> que lee e incluye el contenido de la libreria que se especifique, en este caso <stdio.h>, que es una de las librerias estandar del lenguaje C.
3.- Luego se usa int main() que es la funcion maestra seguido de {} donde dentro de los mismos se especifican todas las instrucciones del programa. 
4.- Se uso tambien printf() que improme el texto que se mostrara en pantalla.
5.- Seguido tenemos el uso de int que se usa para declarar las variables que se van a usar, esto debe ser antes de incluirlas. Se debe coloar el nombre y tipo de variable, en este programa se uso int a,b,c,d,e ; que nos indica que usaremos variables de tipo entera, y se especifica, indica y designa con %i. 
6.- Tambien usamos las operaciones de suma (+), resta (-), multipliacion (x), division (/) y calcular el residuo de la division (%). El orden es primero *,/,% y luego + y . El parentesis se usa para especificar el orden de la ecuacion ya mas personalizado. 
7.- Luego casi al terminar usaremos return 0, que nos indica si la secuencia de instrucciones que dimos esta escrita de forma correcta, de lo contrario nos mandara una señal de error y en la terminal aparecen los errores que se necesitan corregir para que el programa corra. 


Codigos en Ejercicio 3:
Los codigos del Ejercicio 3 son en su mayoria iguales a los del ejercicio dos, a excepcion del tipo de variable en el punto 5, ya que en este programa se uso double que especifica con %lf, que indica una variable de tipo punto flotante de doble presicion, es decir, numeros reales. 


Diferencias de Ejercicio 2 y 3:

Las diferencias entre los ejercicios 2 y 3 tienen que ver con el tipo de variables usadas para las operaciones aritmeticas en cada uno. El ejercicio dos usa solo numeros enteros con int y el ejercicio tres usa numero reales usando double. 


Codigos en Ejercicio 4:

En el ejercicio 4 se usaron algunos comandos ya mencionados anteriormente tales como <stdio.h>, printf(), int main(){}, signo de Ampersand (&) y punto y coma (;).

Ademas se pueden observar nuevos tipos de librerias, como:

1.- <float.h> es una libreria del lenguaje C que contiene varias constantes dependientes de la plataforma relacionadas con valores de punto flotante. Estas constantes son propuestas por ANSI C. Nos permiten usar programas mas portables. Usan los 4 elementos siguientes: signo +,- (s), base (b), exponente (e) y presicion (p).

2.- <limits.h> es una libreria que determina varias propiedades de varios tipos de variables. Los macros definidos en esta libreria, imites de valores de varios tipos de variables de char, int y long. Estos limites especifican que una variable no puede guardar ningun valor mas alla de esos limites, por ejemplo un caracter no designado puede guardar un valor maximo de 255, el cual seria en este ejemplo UCHAR_MAX. Otro ejemplo seria UNIT_MAX que define el valor masimo para una int sin asignar y tiene un valor de hasta 4294967295.





