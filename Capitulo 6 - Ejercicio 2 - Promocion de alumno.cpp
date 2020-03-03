//Capitulo 6 - Ejercicio 2 - Se ingresan tres notas de un alumno, si el promedio es mayor o igual a siete mostrar un mensaje "Promocionado".
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	int num1,num2,num3,total;
	float promedio;	
	
//Ingreso de datos
	printf("Ingrese la primer nota: ");
	fflush(stdin);
	scanf("%d",&num1);
	printf("\nIngrese la segunda nota: ");
	fflush(stdin);
	scanf("%d",&num2);
	printf("\nIngrese la tercer nota: ");
	fflush(stdin);
	scanf("%d",&num3);
	
//Proceso
	promedio=(num1+num2+num3)/3.0;
	if(promedio>=7){
		printf("\nEl alumno promociono");
	}else if(promedio>=4){
		printf("\nEl alumno aprobo");
	}else{
		printf("\nEl alumno no aprobo");
	}
	
//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
