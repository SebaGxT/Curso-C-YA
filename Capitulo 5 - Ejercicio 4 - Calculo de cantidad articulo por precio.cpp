//Capitulo 5 - Ejercicio 4 - Se debe desarrollar un programa que pida el ingreso del precio de un artículo y la cantidad que lleva el cliente. Mostrar lo que debe abonar el comprador. Definir una variable float para el precio del artículo.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	int cantidadprod;
	float precioart, total;
	
//Ingreso de datos
	printf("Ingrese el valor del producto: ");
	fflush(stdin);
	scanf("%f",&precioart);
	printf("\nIngrese la cantidad de productos que lleva el cliente: ");
	fflush(stdin);
	scanf("%d",&cantidadprod);
	
//Proceso
	total=cantidadprod*precioart;
	
//Salida de datos
	printf("\n\n\n****************************************\n\n\n");
	printf("El precio que debe pagar es: %.2f",total);
	
//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;	
}
