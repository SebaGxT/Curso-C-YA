//Capitulo 6 - Ejercicio 3 - Se ingresa por teclado un n�mero positivo de uno o dos d�gitos (1..99) mostrar un mensaje indicando si el n�mero tiene uno o dos d�gitos. (Tener en cuenta que condici�n debe cumplirse para tener dos d�gitos un n�mero entero)
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
