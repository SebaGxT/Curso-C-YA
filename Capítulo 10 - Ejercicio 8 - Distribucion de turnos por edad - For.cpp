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

//Funciones

int promedio(int n,int cant){
	
	int prom;
	
	prom=n/cant;
	
	return prom;
	
}

void edad(int &ed){

	do{
			
			printf("\nIngrese la edad del estudiante: ");
			scanf("%d",&ed);
			fflush(stdin);
			
			if(ed<1){
				
				printf("\nValor incorrecto. Vuelva a ingresar porfavor.");
				
			}
			
		}while(ed<1);

}

//Main
int main(){
	
//Variables
	
	int i,cant,eda,turndia,turntarde,turnnoche,cantd,cantt,cantn,promdia,promtarde,promnoche;
	char turn;
	bool valid=false;
	
	turndia=0;
	turntarde=0;
	turnnoche=0;
	cantd=0;
	cantt=0;
	cantn=0;
	cant=0;
	promdia=0;
	promtarde=0;
	promnoche=0;
	
//Ingreso de datos
	
	do{
		
		printf("Ingreso de estudiantes en los turnos por edad\n\n");
		printf("Ingrese cantidad de estudiantes a procesar: ");
		scanf("%d",&cant);
		fflush(stdin);
		
		if(cant<3){
			
			printf("\n\nDebe ingresar al menos tres estudiantes.\n\n");
			
		}
		
	}while(cant<3);
	
//Proceso
	
	for(i=0;i<cant;i++){
		
		do{
			
			printf("\nIngrese el turno (M,T,N): ");
			turn=getchar();
			fflush(stdin);
			
			switch(turn){
				
				case 'M':
				case 'm':{
					
					edad(eda);
					turndia+=eda;
					cantd++;
					valid=true;
					break;
					
				}
				
				case 'T':
				case 't':{
					
					edad(eda);
					turntarde+=eda;
					cantt++;
					valid=true;
					break;
					
				}
				
				case 'N':
				case 'n':{
					
					edad(eda);
					turnnoche+=eda;
					cantn++;
					valid=true;
					break;
					
				}
				
				default:		
					
					printf("\nTurno ingresado inv%clido.",160);
					
			}
				
		}while(valid==false);
		
		valid=false;
				
	}
	
	promdia=promedio(turndia,cantd);
	promtarde=promedio(turntarde,cantt);
	promnoche=promedio(turnnoche,cantn);
	
//Salida de datos
	
	printf("\n\nEl promedio de edad del turno ma%cana: %d",164,promdia);
	printf("\nEl promedio de edad del turno tarde: %d",promtarde);
	printf("\nEl promedio de edad del turno noche: %d",promnoche);
	
	if(promdia!=promtarde&&promdia!=promnoche&&promtarde!=promnoche){
		
		if(promdia<promtarde&&promdia<promnoche){
		
			printf("\nEl turno con menor promedio es: Ma%cana\n\n",164);
		
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
			
			printf("\nEl turno con menor promedio es: Ma%cana\n\n",164);
			
		}
		
	}
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
