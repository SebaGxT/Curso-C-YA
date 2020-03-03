//Calculo de Supoerficie
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	float superficie, lado1, lado2;

//Ingreso de datos
	printf("Ingrese el primer lado: ");
	fflush(stdin);
	scanf("%f",&lado1);
	printf("\nIngrese el segundo lado: ");
	fflush(stdin);
	scanf("%f",&lado2);
	
//Proceso
	superficie=lado1*lado2;

//Salida por pantalla
	printf("\nLa superficie es: %.2f",superficie);
	printf("\n\n\n\n");
	
//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
