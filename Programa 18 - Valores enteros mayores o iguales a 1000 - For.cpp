//Escribir un programa que lea n números enteros y calcule la cantidad de valores mayores o iguales a 1000.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables

	int i,aux,n1,cont;
	
	cont=0;

//Ingreso de datos
	
	printf("Contabilizar n%cmeros mayor o igual a 1000\n\n",163);
	printf("Ingresar cantidad de n%cmeros a cargar: ",163);
	scanf("%d",&aux);
	fflush(stdin);
	
	for(i=0;i<aux;i++){
		
		printf("\nIngrese un valor: ");
		scanf("%d",&n1);
		fflush(stdin);

//Proceso
		
		if(n1>=1000){
			
			cont++;
			
		}
		
	}
	
//Salida de datos
	
	printf("\nLa cantidad de n%cmeros mayor o igual a 1000: %d",163,cont);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
