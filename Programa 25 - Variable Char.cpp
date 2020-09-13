//Definir tres variables de tipo char y cargar dos por asignación y la tercera por teclado. Imprimir los valores de las mismas.
//Liberias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Funciones

char asignacion(){
	
	char x;
	
	printf("\nIngrese una letra: ");
	scanf(" %c",&x);
	fflush(stdin);
	
	return x;
	
}

int asignacionascii(){
	
	int x;
	char y;
	
	printf("\nIngrese un n%cmero del c%cdigo ASCII: ",163,162);
	scanf("%d",&x);
	fflush(stdin);
	
	y=x;
	
	return y;
	
}

//Main
int main(){
	
//Variables
	
	char let1='A',let2=65,let3,let4;

//Ingreso de datos
	
	printf("Variables tipo char, dos asignados y un ingreso por teclado.\n\n");
	
//Proceso
	
	let3=asignacion();
	let4=asignacionascii();

//Salida de datos
	
	printf("\n\nAsignaci%cn de letra: %c\n",162,let1);
	printf("Asignaci%cn c%cdigo ASCII: %c\n",162,162,let2);
	printf("Asignaci%cn por teclado letra: %c\n",162,let3);
	printf("Asignaci%cn por teclado c%cdigo ASCII: %c\n",162,162,let4);
	

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
