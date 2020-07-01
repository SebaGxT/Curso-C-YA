//Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. (No se ingresan valores por teclado)
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int n,aux;
	
	n=0;
	aux=1;
	
//Ingreso de datos
	
	printf("Series de n%cmeros\n\n",163);

//Salida de datos
	
	while(aux<=25){
		
		n=aux*11;
		
		printf("%d\n",n);
		
		aux++;
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
