//Desarrollar un programa que muestre la tabla de multiplicar del 5 (del 5 al 50)
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int i,pro;

//Ingreso de datos
	
	printf("Tabla de m%cltiplicar del 5\n\n",163);
	
//Proceso
	
	for(i=1;i<11;i++){
		
		pro=5*i;
		
		printf("5 X %d: %d\n",i,pro);
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
