//Programa 4 - Sueldo mayor a 3000 paga impuestos
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	float sueldo;
	
//Ingreso de datos
	printf("Ingrese el sueldo del empleado: ");
	fflush(stdin);
	scanf("%f",&sueldo);
	
//proceso
	if(sueldo>=3000)
		printf("\nEl empleado debe pagar impuestos.");
		else
			printf("\nEl empleado no debe pagar impuestos");
		
//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;	
}
