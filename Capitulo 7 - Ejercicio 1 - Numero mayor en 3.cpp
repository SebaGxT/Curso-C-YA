//Capitulo 7 - Ejercicio 1 - Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	int num1,num2,num3;
	
//Ingreso de datos
	printf("Ingrese el primer numero: ");
	fflush(stdin);
	scanf("%d",&num1);
	printf("Ingrese el segundo numero: ");
	fflush(stdin);
	scanf("%d",&num2);
	printf("Ingrese el tercer numero: ");
	fflush(stdin);
	scanf("%d",&num3);
	
//Proceso
	if(num1>num2 && num1>num3){
		printf("\nEl primer numero es el mayor: %d",num1);
	} else if(num2>num3){
		printf("\nEl segundo numero es el mayor: %d",num2);
	} else {
		printf("\nEl tercer numero es el mayor: %d",num3);
	}
	
//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
