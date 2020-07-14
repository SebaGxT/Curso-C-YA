/*Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el 9999 (no sumar dicho valor, indica que ha finalizado la carga).
 Imprimir el valor acumulado e informar si dicho valor es cero, mayor a cero o menor a cero.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones
int Entero_pos_neg_neu(int n){
	
	int tipo;
	
	if(n>0){
		
		tipo=1;
		
	}else if(n<0){
		
		tipo=2;
		
	}else{
		
		tipo=0;
		
	}
	
	return tipo;
	
}

//Main
int main(){
	
//Variables

	int n,suma,type;
	
	suma=0;

//Ingreso de datos

	printf("Ingreso y proceso de valores enteros. Finaliza el programa al ingresar 9999\n\n");
	
	do{
		
		printf("\nIngrese un valor: ");
		scanf("%d",&n);
		fflush(stdin);
		
		if(n!=9999){
			
			suma+=n;
						
		}else{
			
			printf("\n\nFinaliza la carga de valores.\n\n");
			
		}
		
	}while(n!=9999);

//Proceso
	
	type=Entero_pos_neg_neu(suma);

//Salida de datos
	
	printf("La suma de los valores es: %d",suma);
	
	if(type==1){
		
		printf("\nEl resultado es positivo.\n\n");
		
	}else if(type==2){
		
		printf("\nEl resultado es negativo.\n\n");
		
	}else{
		
		printf("\nEl resultado es neutro.");
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
