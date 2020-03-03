//Capitulo 7 - Ejercicio 4 Un postulante a un empleo, realiza un test de capacitación, se obtuvo la siguiente información: cantidad total de preguntas que se le realizaron y la cantidad de preguntas que contestó correctamente.
// Se pide confeccionar un programa que ingrese los dos datos por teclado e informe el nivel del mismo según el porcentaje de respuestas correctas que ha obtenido, y sabiendo que:
//	Nivel Alto:	Porcentaje>=90%.
//	Nivel medio:	Porcentaje>=75% y <90%.
//	Nivel regular:	Porcentaje>=50% y <75%.
//	Fuera de nivel:	Porcentaje<50%.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	int canttotal,cantcorrec,porcentaje;


//Ingreso de datos
	printf("Ingrese cantidad total de preguntas: ");
	fflush(stdin);
	scanf("%d",&canttotal);
	printf("\nIngrese cantidad de respuestas correctas: ");
	fflush(stdin);
	scanf("%d",&cantcorrec);
	
//Proceso
porcentaje= (cantcorrec*100)/canttotal;

if(porcentaje==100){
	printf("\nEl porcentaje que obtuvo es el m%cximo: %d",160,porcentaje);
} else if(porcentaje>=90 && porcentaje<100){
	printf("\nEl porcentaje que obtuvo es alto: %d",porcentaje);
} else if(porcentaje>=75 && porcentaje<90){
	printf("\nEl porcentaje que obtuvo es medio: %d",porcentaje);
} else if(porcentaje>=50 && porcentaje<75){
	printf("\nEl porcentaje que obtuvo es regular: %d",porcentaje);
} else if(porcentaje<50 && porcentaje>=0){
	printf("\nEl porcentaje que obtuvo esta fuera de nivel: %d",porcentaje);
} else {
	printf("\nError de calculo, verifique los valores ingresados");
}

//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
