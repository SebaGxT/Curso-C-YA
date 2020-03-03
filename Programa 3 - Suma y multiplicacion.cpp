//Suma y Multiplicación de dos números
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){

//Variables
	int num1,num2, suma, multiplicacion;

//Ingreso de datos
	printf("Ingrese el primer numero: ");
	fflush(stdin);
	scanf("%d",&num1);
	printf("\nIngrese el segundo numero: ");
	fflush(stdin);
	scanf("%d",&num2);
	
//Proceso
	suma=num1+num2;
	multiplicacion=num1*num2;
	
//Salida de datos
	printf("\n\n\n****************************************\n\n\n");
	printf("\nEl resultado de la suma es: %d",suma);
	printf("\n\nEl resultado de la multiplicacion es: %d",multiplicacion);
	
//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;	
}
