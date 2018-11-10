En la semana 13 se introdujo el lenguaje de programación en Python. 

El ejercicio de ésta semana tuvo el objetivo de  imprimir 10 puntos de forma aleatoria en la pantalla y reacomodarlos en forma de círculo. Creado por Guadalupe Florián el 9 de noviembre del 2018.

ejemplo_círculo.ipynb

Se declararon las liberías usadas en el programa: import matplotlib.pyplot as plt es la librería que contiene las funciones necesarias para graficar un set de coordenadas y import numpy as np %matplotlib inline es la librería que contiene comandos de arreglos y funciones matemáticas necesarias para realizar el programa. 

Se grafican círculos aleatorios de un set de coordenadas: i=np.random.rand(10) y j=np.random.rand(10) crea un arreglo de una forma determinada que tiene valores dados al alzar, que en este caso serían las coordenadas de 10 puntos, plt.scatter(i,j,color="purple") imprime dichos puntos dadas por las coordenadas al azar de color morado, usando color="purple", z=np.array([i,j]) guarda los valores en el arreglo de las coordenadas (i,j) en la variable "z", np.savetxt("coordenadas_puntos_scatter.txt",z) imprime dichos valores en un archivo de texto llamado "coordenadas_puntos_scatter.txt", z[0][0] imprime el primero elemento del arreglo a la pantalla y z.T transpone dicho arreglo. 

Ciclo calcula los valores de los ángulos requeridos para formar un círculo con los 10 puntos dados al azar: for i in range(0,361,36) inicia un ciclo for en 0 y éste se corre 361 veces con un espaciado de 36, "y=(0.1*np.sin(i))" y "x=(0.1*np.cos(i))" calculan los valores de las coordenadas polares para en (x,y) respectivamente, plt.scatter(x,y,color="purple") imprime la figura que grafican las coordenadas polares de los 10 puntos reacomodados, el color="purple" los imprimirá de color morado y np.savetxt("coordenadas.txt",[x,y]) guarda las nuevas coordenadas en un archivo de texto llamado "coordenadas.txt".

