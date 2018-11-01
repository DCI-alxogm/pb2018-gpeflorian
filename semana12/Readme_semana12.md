Una librería estándar en el lenguaje C es un grupo de funciones y declaraciones, los cuales se encuntran en un fichero con extensión ".h" (archivo de cabecera); aunque la implementación de las funciones están separadas en un archivo en lenguaje c. 

En semanas anteriores aprendimos a definir y ejecutar funciones. Ésta semana aprendimos a crear una librería y como hacer una función definida parte de dicha librería. Tomando el ejemplo de Proyecto2_remasterizado, los  pasos a realizar fueron los siguientes: 

1.- Primero se creó una carpeta llamada libs, dentro de la misma se creó un documento llamado placa.h con extensión ".h", el cuál es un archivo de cabecera que contiene la declaración de la función void temperatras () en lenguaje C, la cuál seá compartida por varios archivos de origen; que definiremos en la siguiente sección. 

2.- Fuera de la carpeta libs, se crearon dos archivos.:

2.1 El primero fué placa1.c, el cuál llama a la libería placa.h con #include "placa.h" (que ya contiene la función void temperaturas), y en el documento se definen las acciones que realiza dicha función dentro de los corchetes de la misma (para mayor información en las acciones de dicha función favor de consultar los comentarios y el Readme de el Proyecto2).

2.2 El segundo fué placa2.c, el cuál llama a la librería placa.h con #include "placa.h", luego se procede a llamar la función con temperaturas (), cuyas acciones ya están definidas en el archivo Placa1.c, dentro de la función maestra int main(). Finalmente se usa return 0 para ver si la serie de instrucciones sucedió correctamente. 

3.- El tercer documento que se realizó fué el Makefile, el cuál sirve para compilar un programa desde el origen del código. Dentro de éste documento colocamos el sistema compilador "gcc", luego procedemos a colocar "-o" la cuál nos ayudará a asignar /cambiar el nombre de nuestro programa, después colocamos los nombres de los documentos que deseamos compilar simultaneamente placa: placa1.c placa2.c, y "-I ./libs" que nos ayudará a ejecutar el programa cuando se haya compilado, así obtenemos:  gcc -o placa.o placa1.c placa2.c -I ./libs . Luego escribimos clean: rm placa.o para escribir el makefile y que se pueda compilar el programa "limpiando" los documentos creados en el proceso.

Ya que todo esto se ha realizado, solo se coloca la palabra "make" en la terminal (se necesita estar en la carpeta donde está la librería y los archivos para que se ejecute el programa deseado), y se procede a darle click a enter; de ésta forma la librería, con su función creada, se llamará, compilará el programa y éste ejecutará.







