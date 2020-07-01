//Escribir un programa que solicite ingresar 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int nota,aux,summay,summen;
	
	summay=0;
	summen=0;
	aux=0;

//Ingreso de datos
	
	printf("Contar cuantos alumnos promocionaron con 7 o m%cs y cuantos tienen menos.\n\n",160);
	
	while(aux<10){
		
		printf("\nIngrese la nota: ");
		scanf("%d",&nota);
		fflush(stdin);

//Proceso
		
		if(nota>=7){
			
			summay++;
			
		}else{
			
			summen++;
			
		}
		
		aux++;
		
	}

//Salida de datos
	
	printf("\n\nLa cantidad de alumnos con 7 o m%cs: %d",160,summay);
	printf("\nLa cantidad de alumnos con menos de 7: %d",summen);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
