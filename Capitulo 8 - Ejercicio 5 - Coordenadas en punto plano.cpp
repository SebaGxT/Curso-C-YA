//Escribir un programa que pida ingresar la coordenada de un punto en el plano, es decir dos valores enteros x e y (distintos a cero).
//Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto. (1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.)
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	int x,y;

//Ingreso de datos

	printf("Ingrese las coordenas x y para indicar a que cuadrante pertenece");
	printf("\n\nIngrese coordenada X: ");
	fflush(stdin);
	scanf("%d",&x);
	printf("\nIngrese coordenada y: ");
	fflush(stdin);
	scanf("%d",&y);

//Proceso
	
	if(x<0 && y>0){
		
		printf("\nLas coordenadas pertenecen al 1%c cuadrante",167);
		printf("\n\nLas coodernadas son: \nX: %d \nY: %d",x,y);
		
	}else if(x>0 && y>0){
		
		printf("\nLas coordenadas pertenecen al 2%c cuadrante",167);
		printf("\n\nLas coodernadas son: \nX: %d \nY: %d",x,y);
		
	}else if(x<0 && y<0){
		
		printf("\nLas coordenadas pertenecen al 3%c cuadrante",167);
		printf("\n\nLas coodernadas son: \nX: %d \nY: %d",x,y);
		
	}else if(x>0 && y<0){
		
		printf("\nLas coordenadas pertenecen al 4%c cuadrante",167);
		printf("\n\nLas coodernadas son: \nX: %d \nY: %d",x,y);
		
	}else {
		
		printf("\nPosicion en punto 0");
	}
		
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
