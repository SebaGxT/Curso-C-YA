//Escribir un programa que solicite la carga de un número entre 0 y 999, y nos muestre un mensaje de cuantos dígitos tiene el mismo. Finalizar el programa cuando se cargue el valor 0.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones
void digitos(int x){
	
	if(x<10||x>-10&&x<0){
		
		printf("\nEl valor ingresado es de 1 d%cgito.\n\n",161);
		
	}else if(x<100||x>-100&&x<0){
		
		printf("\nEl valor ingresado es de 2 d%cgito.\n\n",161);
		
	}else if(x<1000||x>-1000&&x<0){
		
		printf("\nEl valor ingresado es de 3 d%cgito.\n\n",161);
		
	}
	
}

//Main
int main(){
	
//Variables
	
	int n;

//Ingreso de datos
	
	printf("Ingrese un valor entero entre 0 y 999, se indicara cuantos d%cgitos tiene.\n",161);
	printf("El ingreso de valores finaliza con 0\n\n");

//Proceso

	do{
		
		printf("\nIngrese un valor: ");
		scanf("%d",&n);
		fflush(stdin);
		printf("\n");
		
		if(n>=0&&n<1000){
			
			digitos(n);
			
		}else if(n>999||n<0){
			
			printf("\nValor fuera de rango.\n\n");
			
		}
		
		if(n==0){
			
			printf("\nFin de programa.\n\n");	
			
		}	
		
	}while(n!=0);
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
