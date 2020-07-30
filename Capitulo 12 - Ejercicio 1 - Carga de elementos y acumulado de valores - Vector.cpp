/*Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
El valor acumulado de todos los elementos del vector.
El valor acumulado de los elementos del vector que sean mayores a 36.
Cantidad de valores mayores a 50.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones
int mayora36(int vec[],int tamanio){
	
	int i, cont;
	cont=0;
	
	for(i=0;i<tamanio;i++){
		
		if(vec[i]>=36){
			
			cont++;
			
		}
		
	}
	
	return cont;
	
}

int mayora50(int vec[],int tamanio){
	
	int i, cont;
	cont=0;
	
	for(i=0;i<tamanio;i++){
		
		if(vec[i]>=50){
			
			cont++;
			
		}
		
	}
	
	return cont;
	
}
//Main
int main(){
	
//Variables
	
	const int TAM=8;
	int i, vec[TAM],may36,may50,sum;

//Inicio de variables en cero	
	sum=0;
	may36=0;
	may50=0;

//Ingreso de datos
	
	printf("Ingrese valores enteros\n\n");
	
	for(i=0;i<TAM;i++){
		
		//Ingreso de valores en vecto
		printf("\nIngrese un valor %d: ",i+1);
		scanf("%d",&vec[i]);
		fflush(stdin);
		
		//Suma del total
		sum+=vec[i];
		
	}

//Proceso
	
	//Acumulacion de cantidad en funciones
	may36=mayora36(vec,TAM);
	may50=mayora50(vec,TAM);

//Salida de datos
	
	printf("\n\nEl valor acumulado total: %d",sum);
	printf("\nLa cantidad de valores mayor a 36: %d",may36);
	printf("\nLa cantidad de valores mayor a 50: %d",may50);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
