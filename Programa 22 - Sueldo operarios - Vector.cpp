/*Se desea guardar los sueldos de 5 operarios.
Según lo conocido deberíamos definir 5 variables si queremos tener en un cierto momento los 5 sueldos almacenados en memoria.
Empleando un vector solo se requiere definir un único nombre y accedemos a cada elemento por medio del subíndice.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones
void cargarsueldo(float sue[],int x){
	
	do{
		
		printf("\nIngrese el sueldo del empleado: ");
		scanf("%f",&sue[x]);
		fflush(stdin);	
		
		if(sue[x]<=0.0){
			
			printf("\n\nError el importe ingresado no puede ser cero o menor. Vuelva a ingresar importe por favor.\n\n");
			
		}
		
	}while(sue[x]<=0.0);		
	
}

//Main
int main(){
	
//Variables
	
	int i,empleados;
	float sueldos[empleados];

//Ingreso de datos
	
	printf("Carga de sueldos de empleados.\n\n");
	
	do{
		
		printf("Ingrese cantidad de empleados: ");
		scanf("%d",&empleados);
		fflush(stdin);
		
		if(empleados<0){
			
			printf("\n\nError el valor ingresado debe ser positivo. Vuelva a ingresar un valor por favor\n\n");
			
		}	
		
	}while(empleados<0);
		
	printf("\nCargue los sueldos con 2 decimales.\n\n");
	
//Proceso
	
	for(i=0;i<empleados;i++){
		
		cargarsueldo(sueldos,i);
		
	}
	
	printf("\n");
	
//Salida de datos
	
	for(i=0;i<empleados;i++){
		
		printf("\nEl sueldo del empleado %d: %.2f",i+1,sueldos[i]);
		
	}

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
