/*Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano.
Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante. Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funcion

void coordenadas(int &coor){

	printf("\nIngrese la coordenada: ");
	scanf("%d",&coor);
	fflush(stdin);

}

int detectarcuadrante(int x,int y){
	
	int cuad;
	
	if(x==0&&y==0){
		
		cuad=0;
		
	}else if(x<0&&y>0){
		
		cuad=1;
		
	}else if(x>0&&y>0){
		
		cuad=2;
		
	}else if(x<0&&y<0){
		
		cuad=3;
		
	}else{
		
		cuad=4;
		
	}
	
	return cuad;
	
}

//Main
int main(){
	
//Variables
	
	int i,x,y,cantpro,cuadrante,puntozero,primero,segundo,tercero,cuarto;
	
	puntozero=0;
	primero=0;
	segundo=0;
	tercero=0;
	cuarto=0;

//Ingreso de datos
	
	printf("Coordenadas X Y\n\n");
	printf("Ingrese cantidad de puntos a procesar: ");
	scanf("%d",&cantpro);
	fflush(stdin);

//Proceso
	
	for(i=0;i<cantpro;i++){
		
		coordenadas(x);
		coordenadas(y);
		cuadrante=detectarcuadrante(x,y);
		
		if(cuadrante==0){
			
			puntozero++;
			
		}else if(cuadrante==1){
			
			primero++;
			
		}else if(cuadrante==2){
			
			segundo++;
			
		}else if(cuadrante==3){
			
			tercero++;
			
		}else{
			
			cuarto++;
			
		}
		
	}

//Salida de datos
	
	printf("\nLa cantidad de puntos en primero cuadrante: %d",primero);
	printf("\nLa cantidad de puntos en segundo cuadrante: %d",segundo);
	printf("\nLa cantidad de puntos en tercero cuadrante: %d",tercero);
	printf("\nLa cantidad de puntos en cuarto cuadrante: %d",cuarto);
	printf("\nLa cantidad en punto cero: %d",puntozero);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
