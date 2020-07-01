//Se ingresan un conjunto de n alturas de personas por teclado. Mostrar la altura promedio de las personas.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int n,aux;
	float promedio,altura,sum;
	
	aux=0;
	sum=0.0;
	
//Ingreso de datos
	
	printf("Promedio de altura\n\n");
	
	printf("\nIngrese cantidad de personas: ");
	scanf("%d",&n);
	fflush(stdin);
	
	while(aux<n){
		
		printf("\nIngrese la altura de la persona %d: ",aux+1);
		scanf("%f",&altura);
		fflush(stdin);
		
		sum+=altura;
		
		aux++;
		
	}
	
//Proceso
	
	promedio=sum/n;

//Salida de datos

	printf("\nLa altura promedio es: %.2f",promedio);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
