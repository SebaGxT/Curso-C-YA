//Capitulo 5 - Ejercicio 1 - Realizar la carga del lado de un cuadrado, mostrar por pantalla el per�metro del mismo (El per�metro de un cuadrado se calcula multiplicando el valor del lado por cuatro).
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	int lado1, perimetro;
	
//Ingreso de datos
	printf("Ingrese el valor del lado del cuadrado: ");
	fflush(stdin);
	scanf("%d",&lado1);
	
//Proceso
	perimetro=lado1*4;
	
//Salida de datos
	printf("\n El perimetro del cuadrado es: %d",perimetro);
	
//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;	
}
