/*Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente la suma de los valores ingresados y su promedio.
 Este problema ya lo desarrollamos empleando el while, lo resolveremos empleando la estructura for.*/
 //Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int i,n1,suma,promedio;
	
	suma=0;
	promedio=0;

//Ingreso de datos
	
	printf("Cargar 10 valores enteros\n\n");
	
	for(i=0;i<10;i++){
		
		printf("\nIngrese el valor %d: ",i+1);
		scanf("%d",&n1);
		fflush(stdin);
		
		suma+=n1;
		
	}

//Proceso

	promedio=suma/10;

//Salida de datos
	
	printf("\nLa suma de valores es: %d",suma);
	printf("\nEl promedio de valores es: %d",promedio);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
