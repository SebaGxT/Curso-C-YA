//Capitulo 5 - Ejercicio 2 - Escribir un programa en el cual se ingresen cuatro números, calcular e informar la suma de los dos primeros y el producto del tercero y el cuarto.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	int num1,num2,num3,num4,suma,multiplicacion;
	
//Ingreso de datos
	printf("Ingrese el primer numero: ");
	fflush(stdin);
	scanf("%d",&num1);
	printf("\nIngrese el segundo numero: ");
	fflush(stdin);
	scanf("%d",&num2);
	printf("\nIngrese el tercer numero: ");
	fflush(stdin);
	scanf("%d",&num3);
	printf("\nIngrese el cuarto numero: ");
	fflush(stdin);	
	scanf("%d",&num4);
	
//Proceso
	suma=num1+num2;
	multiplicacion=num3*num4;
	
//Salida de datos
	printf("\n\n\n****************************************\n\n\n");
	printf("\nEl resultado de la suma del primer y segundo numero es: %d",suma);
	printf("\n\nEl resultado de la multiplicacion del tercer y cuarto numero es: %d",multiplicacion);
	
//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;	
}
