//De un operario se conoce su sueldo y los años de antigüedad. Se pide confeccionar un programa que lea los datos de entrada e informe:
//a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento del 20 %, mostrar el sueldo a pagar.
//b)Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.
//c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	float sueldo,antiguedad,aumento,Nsueldo;

//Ingreso de datos

	printf("Se va a otorgar aumentos de sueldo de acuerdo a sueldo y antiguedad");
	printf("\nIngrese el sueldo del empleado: ");
	fflush(stdin);
	scanf("%f",&sueldo);
	printf("\nIngrese la antiguedad del empleado: ");
	fflush(stdin);
	scanf("%f",&antiguedad);

//Proceso	
	
	if(sueldo<500 && antiguedad>=10){
		
		aumento=1.20;
		Nsueldo=sueldo*aumento;
		
		printf("\n\nSe le otorga un 20%c de aumento",37);
		printf("\nSu sueldo es: %.2f",sueldo);
		printf("\nCantidad de aumento es: %.2f",Nsueldo-sueldo);
		printf("\n\nEl sueldo actualizado es el siguiente: %.2f",Nsueldo);
		
	}else if(sueldo<500 && antiguedad<10){
		
		aumento=1.05;
		Nsueldo=sueldo*aumento;
		
		printf("\n\nSe le otorga un 5%c de aumento",37);
		printf("\nSu sueldo es: %.2f",sueldo);
		printf("\nCantidad de aumento es: %.2f",Nsueldo-sueldo);
		printf("\n\nEl sueldo actualizado es el siguiente: %.2f",Nsueldo);
		
	}else {
		
		printf("\nSu sueldo es: %.2f",sueldo);
		printf("\n No se otorga aumento.");
	}


//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
