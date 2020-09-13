/*Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
Realizar un programa que muestre el curso que obtuvo el mayor promedio general.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones
void cargarnotas(float vec[],int tamanio){
	
	int i;
	
	for(i=0;i<tamanio;i++){
		
		do{
			
			printf("\nIngrese la nota del alumno %d: ",i+1);
			scanf("%f",&vec[i]);
			fflush(stdin);	
			
			if(vec[i]<=0||vec[i]>10){
				
				printf("\n\nLa nota ingresada es inv%clida vuelva a ingresar por favor.\n\n",160);
				
			}
			
		}while(vec[i]<=0||vec[i]>10);
		
	}
	
}

float promenota(float vec[],int tamanio){
	
	int i;
	float sum,prom;
	prom=0;
	sum=0;
	
	for(i=0;i<tamanio;i++){
		
		sum+=vec[i];
		
	}
	
	prom=sum/tamanio;
	
	return prom;
	
}

//Main
int main(){
	
//Variables
	
	const int ALU=5;
	int i;
	float cusa[ALU],cusb[ALU],proma,promb;

//Variables en cero	
	
	for(i=0;i<ALU;i++){
		
		cusa[i]=0.0;
		cusb[i]=0.0;
		
	}

//Ingreso de datos
	
	printf("\nCalulo de promedio general para cursos A y B\n\n");
	
	printf("Ingreso de notas para curso A\n\n");
	cargarnotas(cusa,ALU);
	printf("\n\nIngreso de notas para curso B\n\n");
	cargarnotas(cusb,ALU);
	
//Proceso
	
	//Promedio de cada curso
	proma=promenota(cusa,ALU);
	promb=promenota(cusb,ALU);
	
//Salida de datos

	if(proma>0||promb>0){
		
		if(proma>promb){
			
			printf("\n\nPromedio del curso A: %.2f",proma);
			printf("\nPromedio del curso B: %.2f",promb);
			printf("\n\nEl promedio del curso A es el mayor: %.2f",proma);

		}else if(proma<promb){
			
			printf("\n\nPromedio del curso A: %.2f",proma);
			printf("\nPromedio del curso B: %.2f",promb);
			printf("\n\nEl promedio del curso B es el mayor: %.2f",promb);
		
		}else{
			
			printf("\n\nLos promedios de los cursos son iguales: %.2f",proma);
			
		}
		
	}else{
		
		printf("\n\nHubo un error y no se encontro informaci%cn.\n\n",162);
		
	}	

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
