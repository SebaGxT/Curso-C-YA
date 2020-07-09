/*Se cuenta con la siguiente información:
Las edades de 5 estudiantes del turno mañana.
Las edades de 6 estudiantes del turno tarde.
Las edades de 11 estudiantes del turno noche.
Las edades de cada estudiante deben ingresarse por teclado.
a) Obtener el promedio de las edades de cada turno (tres promedios)
b) Imprimir dichos promedios (promedio de cada turno)
c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades menor.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Funciones

int promedio(int n,int cant){
	
	int prom;
	
	prom=n/cant;
	
	return prom;
	
}

int edad(){
	
	int ed;
	
	do{
			
			printf("\nIngrese la edad del estudiante: ");
			scanf("%d",&ed);
			fflush(stdin);
			
			if(ed<=0){
				
				printf("\nValor incorrecto. Vuelva a ingresar porfavor.");
				
			}
			
		}while(ed<=0);
		
	return ed;
	
}

//Main
int main(){
	
//Variables
	
	int i,cant,ed,turndia,turntarde,turnnoche,cantd,cantt,cantn,promdia,promtarde,promnoche;
	char turn[1];
	bool valid=true;
	
	turndia=0;
	turntarde=0;
	turnnoche=0;
	cantd=0;
	cantt=0;
	cantn=0;
	cant=0;
	
//Ingreso de datos
	
	printf("Ingreso de estudiantes en los turnos por edad\n\n");
	printf("Ingrese cantidad de estudiantes a procesar: ");
	scanf("%d",&cant);
	fflush(stdin);

//Proceso
	
	for(i=0;i<cant;i++){
		
		do{
			
			printf("\nIngrese el turno (M,T,N): ");
			gets(turn);
			fflush(stdin);
		
			toupper(turn[0]);
		
			if(strcmp(turn,"M")==0){
			
				ed=edad();
				turndia+=ed;
				cantd++;
				valid=false;
				
			}else if(strcmp(turn,"T")==0){
			
				ed=edad();
				turntarde+=ed;
				cantt++;
				valid=false;
			
			}else if(strcmp(turn,"N")==0){
			
				ed=edad();
				turnnoche+=ed;
				cantn++;
				valid=false;
			
			}else{
			
				printf("\nTurno ingresado inv%clido.",160);
			
			}
				
		}while(valid);
				
	}
	
	promdia=promedio(turndia,cantd);
	promtarde=promedio(turntarde,cantt);
	promnoche=promedio(turnnoche,cantn);
	
//Salida de datos
	
	printf("\n\nEl promedio de edad del turno mañana: %d",promdia);
	printf("\nEl promedio de edad del turno tarde: %d",promtarde);
	printf("\nEl promedio de edad del turno noche: %d",promnoche);
	
	if(promdia!=promtarde&&promdia!=promnoche&&promtarde!=promnoche){
		
		if(promdia<promtarde&&promdia<promnoche){
		
			printf("\nEl turno con menor promedio es: Mañana\n\n");
		
		}else if(promtarde<promdia&&promtarde<promnoche){
	
			printf("\nEl turno con menor promedio es: Tarde\n\n");
	
		}else{
		
			printf("\nEl turno con menor promedio es: Noche\n\n");
		
		}
		
	}else if(promdia==promtarde&&promdia==promnoche){
		
		printf("\nTodos los promedios son iguales.\n\n");
		
	}else if(promdia==promtarde){
		
		if(promdia<promnoche){
			
			printf("\nLos promedios del turno dia y tarde son iguales siendo el menor.\n\n");
			
		}else{
			
			printf("\nEl turno con menor promedio es: Noche\n\n");
			
		}
		
	}else if(promdia==promnoche){
		
		if(promdia<promtarde){
			
			printf("\nLos promedios del turno dia y noche son iguales siendo el menor.\n\n");
			
		}else{
			
			printf("\nEl turno con menor promedio es: Tarde\n\n");	
			
		}
		
	}else if(promtarde==promnoche){
		
		if(promtarde<promdia){
			
			printf("\nLos promedios del turno tarde y noche son iguales siendo el menor.\n\n");
			
		}else{
			
			printf("\nEl turno con menor promedio es: Mañana\n\n");
			
		}
		
	}
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
