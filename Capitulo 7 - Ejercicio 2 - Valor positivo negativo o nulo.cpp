//Capitulo 7 - Ejercicio 1 - Se ingresa por teclado un valor entero, mostrar una leyenda que indique si el número es positivo, negativo o nulo (es decir cero)
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	long int num;
	
//Ingreso de datos
	printf("Ingrese un numero: ");
	fflush(stdin);
	scanf("%d",&num);
	
//Proceso
	if(num==0){
		printf("\nEl numero ingresado es nulo");
	} else if(num>0){
		printf("\nEl numero es positivo");
	} else{
		printf("\nEl numero es negativo");
	}

//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
