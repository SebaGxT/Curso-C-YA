//Desarrollar un programa que permita cargar n números enteros y luego nos informe cuántos valores fueron pares y cuántos impares.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int n,n1,aux,par,impar;
	
	aux=0;
	par=0;
	impar=0;

//Ingreso de datos
	
	printf("Ingreso de valores enteros, se contaran los par y los impar\n\n");
	
	printf("Ingrese cantidad de valores a cargar: ");
	scanf("%d",&n);
	fflush(stdin);

//Proceso
	
	while(aux<n){
		
		printf("\nIngrese el valor %d: ",aux+1);
		scanf("%d",&n1);
		fflush(stdin);
		
		if(n1%2==0){
			
			par++;
			
		}else{
			
			impar++;
			
		}
		
		aux++;
		
	}

//Salida de datos
	
	printf("\nLa cantidad de valores par es: %d",par);
	printf("\nLa cantidad de valores impar es: %d",impar);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
