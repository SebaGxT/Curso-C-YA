/*Realizar un programa que permita cargar dos listas de 15 valores cada una. Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor (mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")
Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int lista1,lista2,n,aux;
	
	lista1=0;
	lista2=0;
	aux=1;

//Ingreso de datos
	
	printf("Cargar 2 listas de 15 elementos con valores enteros se indicara si son iguales o cual es mayor\n\n");
	
	while(aux<=15){
		
		printf("\nIngrese el valor %d para lista 1: ",aux);
		scanf("%d",&n);
		fflush(stdin);
		
		lista1+=n;
		
		aux++;
		
	}
	
	aux=1;
	
	while(aux<=15){
		
		printf("\nIngrese el valor %d para lista 2: ",aux);
		scanf("%d",&n);
		fflush(stdin);
		
		lista2+=n;
		
		aux++;
		
	}
	
//Proceso
	
	if(lista1>lista2){
		
		printf("\n\nLa lista 1 es mayor");
		
	}else if(lista2>lista1){
		
		printf("\n\nLa lista 2 es mayor");
		
	}else{
		
		printf("\n\nAmbas listas son iguales.");
		
	}
	
//Salida de datos


//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
