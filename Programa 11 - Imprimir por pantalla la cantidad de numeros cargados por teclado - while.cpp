/*Escribir un programa que solicite la carga de un valor positivo y nos muestre desde 1 hasta el valor ingresado de uno en uno.
Ejemplo: Si ingresamos 30 se debe mostrar en pantalla los números del 1 al 30.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int n,aux;
	
	aux=1;

//Ingreso de datos
	
	printf("Ingrese la cantidad que quiere imprimir en pantalla: ");
	scanf("%d",&n);
	fflush(stdin);

//Salida de datos
	
	while(aux<=n){
		
		printf("%d  ",aux);
		
		aux++;
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
