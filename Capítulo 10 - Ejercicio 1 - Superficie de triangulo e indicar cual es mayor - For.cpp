/*Confeccionar un programa que lea n pares de datos, cada par de datos corresponde a la medida de la base y la altura de un triángulo. El programa deberá informar:
a) De cada triángulo la medida de su base, su altura y su superficie.
b) La cantidad de triángulos cuya superficie es mayor a 12.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int i,cant,tria12;
	float base,altura,superficie;

	tria12=0;
	
//Ingreso de datos
	
	printf("Calculo de superficie. Se mostrara los mayores a 12\n\n");
	printf("Ingrese la cantidad de tri%cngulos a procesar: ",160);
	scanf("%d",&cant);
	fflush(stdin);
	
	for(i=0;i<cant;i++){
		
		printf("\n\nIngrese la base: ");
		scanf("%f",&base);
		fflush(stdin);
		
		printf("\nIngrese la altura: ");
		scanf("%f",&altura);
		fflush(stdin);

//Proceso
		
		superficie=base*altura;

//Salida de datos
		
		printf("\n\nLa base del tri%cngulo es: %.2f",160,base);
		printf("\nLa altura del tri%cngulo es: %.2f",160,altura);
		printf("\nLa superficie es: %.2f",superficie);
		
		if(superficie>11){
			
			tria12++;
			
		}
		
	}
	
	printf("\n\nLa cantidad de tri%cngulos con 12 o m%cs de superficie: %d",160,160,tria12);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
