//Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente la suma de los valores ingresados y su promedio.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int n,aux,sum;
	float promedio;
	
	sum=0;
	promedio=0.0;
	
//Ingreso de datos
	
	printf("Carga de 10 valores positivos. Se mostrara suma y promedio.\n\n");
	
	while(aux<10){
		
		printf("\nIngrese un valor: ");
		scanf("%d",&n);
		fflush(stdin);
		
		sum+=n;
		
		aux++;
		
	}

//Proceso
	
	promedio=sum/10.00;

//Salida de datos

	printf("\n\nEl promedio es: %.2f",promedio);
	printf("\nLa suma es: %d",sum);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
