/*En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500, realizar un programa que lea los sueldos que cobra cada empleado e informe cuántos empleados cobran entre $100 y $300 y cuántos cobran más de $300.
 Además el programa deberá informar el importe que gasta la empresa en sueldos al personal.*/
 //Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int n,aux,sueldo,totalsueldo,contmas300,contmen300,contmas500;
	
	aux=0;
	contmas500=0;
	contmas300=0;
	contmen300=0;
	totalsueldo=0;

//Ingreso de datos
	
	printf("Sueldo del personal\n\n");
	
	printf("Ingrese cantidad de empleados: ");
	scanf("%d",&n);
	fflush(stdin);

//Proceso
	
	while(aux<n){
		
		printf("\nIngrese sueldo del empleado %d: ",aux+1);
		scanf("%d",&sueldo);
		fflush(stdin);
		
		if(sueldo>=300&&sueldo<=500){
			
			contmas300++;
			
		}else if(sueldo>=100&&sueldo<300){
			
			contmen300++;
			
		}else if(sueldo>500){
			
			contmas500++;
			
		}
		
		totalsueldo+=sueldo;
		
		aux++;
		
	}

//Salida de datos

	printf("\nCantidad de empleados que cobran entre 100 y 300: %d",contmen300);
	printf("\nCantidad de empleados que cobran entre 300 y 500: %d",contmas300);
	printf("\nCantidad de empleados que cobran m%cs de 500: %d",160,contmas500);
	printf("\nTotal de gasto en sueldos de la empresa: %d",totalsueldo);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
