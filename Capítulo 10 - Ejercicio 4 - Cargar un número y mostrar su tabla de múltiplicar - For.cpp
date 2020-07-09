/*Confeccionar un programa que permita ingresar un valor del 1 al 10 y nos muestre la tabla de multiplicar del mismo (los primeros 12 términos)
Ejemplo: Si ingreso 3 deberá aparecer en pantalla los valores 3, 6, 9, hasta el 36.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int i,mul,pro;

//Ingreso de datos
	
	printf("Tabla de m%cltiplicar\n\n",163);
	printf("\nIngrese el n%cmero a m%cltiplicar: ",163,163);
	scanf("%d",&mul);
	fflush(stdin);
	
	printf("\n\n");
	
//Proceso
	
	for(i=1;i<11;i++){
		
		pro=mul*i;
		
		printf("%d X %d: %d\n",mul,i,pro);
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
