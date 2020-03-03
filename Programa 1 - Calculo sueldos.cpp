//Calculo de Sueldo
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){

//Variables
	int horastrabajadas;
	float valorhora, sueldo;

//Ingreso de datos
	printf("Ingrese cantidad de horas trabajadas: ");
	fflush(stdin);
	scanf("%d",&horastrabajadas);
	printf("\nIngrese el valor de la hora trabajo: ");
	fflush(stdin);
	scanf("%f",&valorhora);
	
//Proceso
	sueldo=horastrabajadas*valorhora;

//Salida por pantalla 
	printf("\nEl sueldo del empleado: %c %.2f",36,sueldo);
	printf("\n\n\n\n");
	
//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;
}


