//Escribir un programa que lea 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables

	int i,notas,mas7,men7;
	
	mas7=0;
	men7=0;

//Ingreso de datos
	
	printf("Cantidad de alumnos con notas mayor y menor a 7\n\n");
	
	for(i=0;i<10;i++){
		
		printf("\nIngrese la nota del alumno %d: ",i+1);
		scanf("%d",&notas);
		fflush(stdin);

//Proceso
		
		if(notas>=7){
			
			mas7++;
			
		}else{
			
			men7++;
			
		}
		
	}

//Salida de datos

	printf("\nLa cantidad de alumnos con 7 o m%cs: %d",160,mas7);
	printf("\nLa cantidad de alumnos con menos de 7: %d",men7);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
