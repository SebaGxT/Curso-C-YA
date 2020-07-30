/*Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno (definir los dos vectores con componentes de tipo float)
Imprimir los gastos en sueldos de cada turno.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones
float cargarsueldo(float vec[],int tamanio){
	
	int i;
	
	for(i=0;i<tamanio;i++){
		
	do{
		
		printf("\nIngrese el sueldo del empleado %d: ",i+1);
		scanf("%f",&vec[i]);
		fflush(stdin);	
		
		if(vec[i]<=0.0){
			
			printf("\n\nError el sueldo ingresado no puede ser cero o menor. Vuelva a ingresar por favor.\n\n");
			
		}
		
	}while(vec[i]<=0.0);
		
	}
		
}

void opciones(int x){
	
	if(x==1){
		
		printf("\n\n1)Turno ma%cana.",164);
		printf("\n2)Turno tarde.");
		printf("\n3)Salir.\n\n");
		
	}else if(x==2){
		
		printf("\n\n1)Total Turno ma%cana.",164);
		printf("\n2)Total Turno tarde.");
		printf("\n3)Total de sueldos.");
		printf("\n4)Salir.\n");
		
	}
	
}

//Main
int main(){
	
//Variables
	
	const int EMPLEADOS=4;
	int i,valid;
	float tmempleados[EMPLEADOS],ttempleados[EMPLEADOS],totalsueldosm,totalsueldost,gastototal;
	
	gastototal=0.0;
	totalsueldosm=0.0;
	totalsueldost=0.0;
	
	for(i=0;i<EMPLEADOS;i++){
		
		tmempleados[i]=0.0;
		ttempleados[i]=0.0;
		
	}
	
//Ingreso de datos
	
	printf("Calculo de sueldos por turno.\n\n");
	printf("Carga de sueldos de los empleados.\n\n");	
	printf("1)Turno ma%cana.\n",164);
	printf("2)Turno tarde.\n");
	printf("3)Salir.\n");
	
	do{
		
		printf("\nIngrese el n%cmero de opci%cn que desea: ",163,162);
		scanf("%d",&valid);
		fflush(stdin);

//Proceso
		
		if(valid==1){
			
			//Ingreso de sueldos turno mañana
			cargarsueldo(tmempleados,EMPLEADOS);
			
			for(i=0;i<EMPLEADOS;i++){
				
				//Suma del total mañana
				totalsueldosm+=tmempleados[i];
				
			}
			
			printf("\n\nIngrese 0 si desea consultar las opciones.\n\n");
			
		}else if(valid==2){
			
			//Ingreso de sueldos turno tarde
			cargarsueldo(ttempleados,EMPLEADOS);
			
			for(i=0;i<EMPLEADOS;i++){
				
				//Suma del total tarde
				totalsueldost+=ttempleados[i];
				
			}
			
			printf("\n\nIngrese 0 si desea consultar las opciones.\n\n");
			
		}else if(valid==3){
			
			//Mensaje de salida
			printf("\n\nSalio de la carga de sueldos.\n\n");
			
		}else if(valid==0){
			
			//Muestra opciones en pantalla
			opciones(1);
			
		}else{
			
			//Mensaje de error
			printf("\n\nLa opci%cn ingresada no existe. Vuelva a ingresar porfavor.\n");
			printf("Ingrese 0 si desea consultar las opciones.\n\n");
			
		}
		
	}while(valid!=3);
	
	//Suma del total
	gastototal=totalsueldost+totalsueldosm;
	
//Salida de datos
	
	//Reinicio de variable
	valid=0;
	
	//Muestra opciones en pantalla
	opciones(2);
	
	printf("\n\nSe mostrara por pantalla los resultados seg%cn la opci%cn que elija.\n\n",163,162);
	
	//Impresion de informe segun solicitud
	do{
	
		printf("\nIngrese el n%cmero de opci%cn que desea: ",163,162);
		scanf("%d",&valid);
		fflush(stdin);
		
		if(valid==1){
			
			if(totalsueldosm>0){
				
				printf("\n\nEl gasto total de sueldo del turno ma%cana es: %.2f\n\n",164,totalsueldosm);
				
			}else{
				
				printf("\n\nNo se obtuvo informaci%cn. Es posible que no se haya cargado la informaci%cn\n\n",162,162);
				
			}
			
		}else if(valid==2){
			
			if(totalsueldost>0){
				
				printf("\n\nEl gasto total de sueldo del turno tarde es: %.2f\n\n",totalsueldost);
				
			}else{
				
				printf("\n\nNo se obtuvo informaci%cn. Es posible que no se haya cargado la informaci%cn\n\n",162,162);
				
			}
			
		}else if(valid==3){
			
			if(totalsueldosm>0&&totalsueldost==0){
				
				printf("\n\nEl gasto total de sueldos es: %.2f\n",gastototal);
				printf("Solo se encontro informaci%cn del turno ma%cana.\n\n",162,164);
				
			}else if(totalsueldost>0&&totalsueldosm==0){
				
				printf("\n\nEl gasto total de sueldos es: %.2f\n",gastototal);
				printf("Solo se encontro informaci%cn del turno tarde.\n\n",162);
				
			}else if(totalsueldost==0&&totalsueldosm==0){
				
				printf("\n\nNo se obtuvo informaci%cn. Es posible que no se haya cargado la informaci%cn\n\n",162,162);
				
			}else{
				
				printf("\n\nEl gasto total de sueldos de ambos turnos es: %.2f\n",gastototal);
				
			}
			
		}else if(valid==0){
			
			//Muestra opciones en pantalla
			opciones(2);
			
		}else if(valid==4){
			
			printf("\n\n**********Finaliza el programa.**********\n\n");
			
		}else{
			
			//Mensaje de error
			printf("\n\nLa opci%cn ingresada no existe. Vuelva a ingresar porfavor.\n");
			printf("Ingrese 0 si desea consultar las opciones.\n\n");	
			
		}
		
	}while(valid!=4);
	
//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
