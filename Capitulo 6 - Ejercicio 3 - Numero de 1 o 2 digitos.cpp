//Capitulo 6 - Ejercicio 3 - Se ingresa por teclado un número positivo de uno o dos dígitos (1..99) mostrar un mensaje indicando si el número tiene uno o dos dígitos. (Tener en cuenta que condición debe cumplirse para tener dos dígitos un número entero)
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
	if(num>=0 && num<10){
		printf("\nEl numero %d es de un digito",num);
	}else if(num>=10 && num<100){
		printf("\nEl numero %d es de dos digitos",num);
	}else {
		printf("\n Numero fuera de rango");
	}

//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;	
}
