//Programa 5 - Realizar un programa que solicite al operador ingresar dos números y muestre por pantalla el mayor de ellos.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){

//Variables
	int num1,num2;
	
//Ingreso de datos
	printf("Ingrese el primer numero: ");
	fflush(stdin);
	scanf("%d",&num1);
	printf("\nIngrese el segundo numero: ");
	fflush(stdin);
	scanf("%d",&num2);
	
//Proceso
	if(num1>num2)
		printf("\n El primer numero es mayor , el numero es: %d",num1);
		else
			printf("\n El segundo numero es mayor, el numero es: %d",num2);
			
//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;	
}
