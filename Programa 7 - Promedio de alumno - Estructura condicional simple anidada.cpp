/*Confeccionar un programa que pida por teclado tres notas de un alumno, calcule el promedio e imprima alguno de estos mensajes:
Si el promedio es >=7 mostrar "Promocionado".
Si el promedio es >=4 y <7 mostrar "Regular".
Si el promedio es <4 mostrar "Reprobado".*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables

	int nota;

//Ingreso de datos
	
	printf("Nota final del alumno.\n\n");
	printf("Ingrese la nota: ");
	scanf("%d",&nota);
	fflush(stdin);

//Salida de datos
	
	if(nota>=7){
		
		printf("\nEl alumno promociono.\n");
		
	}else{
		
		if(nota>=4){
			
			printf("\nEl alumno aprobo.\n");
			
		}else{
			
			printf("\nEl alumno desaprobo.\n");
			
		}
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
