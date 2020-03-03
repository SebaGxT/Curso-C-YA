//Capitulo 6 - Ejercicio 1 - Realizar un programa que solicite la carga por teclado de dos números, si el primero es mayor al segundo informar su suma y diferencia, en caso contrario informar el producto y la división del primero respecto al segundo.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){

//Variables
	int num1, num2, suma, resta; 
	int multiplicacion, division;
	
//Ingreso de datos
	printf("Ingrese el primer numero: ");
	fflush(stdin);
	scanf("%d",&num1);
	printf("\nIngrese el segundo numero: ");
	fflush(stdin);
	scanf("%d",&num2);
	
//Proceso
	if(num1>num2){
		suma=num1+num2;
		resta=num1-num2;
		printf("\nEl primer numero es mayor");
		printf("\n\nLa suma de los numeros es: %d",suma);
		printf("\nLa resta de los numeros es: %d",resta);
	}
		else{
			multiplicacion=num1*num2;
			division=num1/num2;
			printf("\n El segundo numero es mayor");
			printf("\n\nLa multiplicacion es: %d",multiplicacion);
			printf("\nLa division es: %d",division);
		}
		
//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;	
}
