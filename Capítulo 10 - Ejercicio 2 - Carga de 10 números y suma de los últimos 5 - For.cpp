//Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 valores ingresados.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int i,n1,sum;
	
	sum=0;

//Ingreso de datos
	
	printf("Cargar 10 valores, se sumaran los %cltimos 5\n\n",163);
	
	for(i=0;i<10;i++){
	
		printf("\nIngrese el valor %d: ",i+1);
		scanf("%d",&n1);
		fflush(stdin);
		
		if(i>4){
			
			sum+=n1;
			
		}
	
	}

//Salida de datos
	
	printf("\n\nEl total de la suma es: %d",sum);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
