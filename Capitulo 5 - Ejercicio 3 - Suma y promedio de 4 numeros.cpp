//Capitulo 5 - Ejercicio 3 - Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	int num1,num2,num3,num4,suma;
	float promedio;
	
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
	suma=num1+num2+num3+num4;
	promedio=suma/4.0;
	
//Salida de datos
	printf("\n\n\n****************************************\n\n\n");
	printf("La suma de los numeros es: %d",suma);
	printf("\n\nEl promedio es: %.2f",promedio);
	
//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;	
}
