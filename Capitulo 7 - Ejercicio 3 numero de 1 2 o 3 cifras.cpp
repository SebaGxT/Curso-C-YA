//Capitulo 7 - Ejercicio 3 - Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras y muestre un mensaje indicando si tiene 1, 2, o 3 cifras. Mostrar un mensaje de error si el número de cifras es mayor.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	int num;

//Ingreso de datos
	printf("Ingrese un numero: ");
	fflush(stdin);
	scanf("%d",&num);

//Proceso
	if(num>99 && num<1000){
		printf("\nEl numero es de tres cifras.");
	} else if(num>9 && num<100){
		printf("\nEl numero es de dos cifras.");
	} else if(num>=0 && num<10){
		printf("\El numero es de una cifra.");
	} else{
		printf("\n El numero es invalido");}
	}

//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
