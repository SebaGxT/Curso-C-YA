/*Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas.
Obtener el promedio de las mismas. Contar cuántas personas son más altas que el promedio y cuántas más bajas.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Funciones

void cargadepersonas(int &perso){
	
	do{
		
		printf("\n\nIngrese la cantidad de personas encuestadas: ");
		scanf("%d",&perso);
		fflush(stdin);	
		
		if(perso<=0){
			
			printf("\n\nValor incorrecto. Debe ingresar un valor positivo.\n\n");
			
		}
		
	}while(perso<=0);
		
}

float promedio(float total, int cantidad){
	
	float prome;
	
	prome=total/cantidad;
	
	return prome;
	
}

//Main
int main(){
	
//Variables
	
	int i,personas,conpromay,conpromen;
	float alturap[personas],totalaltura,prom;
	char ini[2];

//Inicio de variables en cero	
	conpromay=0;
	conpromen=0;
	totalaltura=0.0;

//Ingreso de datos
	
	printf("Calculo de promedio de altura.\n\n");
	
	//Iniciador
	
	printf("%cDesea cargar informaci%cn%c - Ingrese si o no: ",168,162,63);
	gets(ini);
	fflush(stdin);
	
	//Confirmar inicio
	strupr(ini);
	
	if(strcmp(ini,"SI")==0){
			
			//Cantidad de personas a procesar
			cargadepersonas(personas);
		
//Proceso
		
			printf("\n\nCargue la medida de altura con dos decimales porfavor.\n\n");
			
			//Ingreso de altura
			for(i=0;i<personas;i++){
	
				do{
					
					printf("\nIngrese la medida de la persona %d: ",i+1);
					scanf("%f",&alturap[i]);
					fflush(stdin);	
					
					if(alturap[i]<=0.0){
			
						printf("\n\nError la medida ingresada no puede ser cero o menor. Vuelva a ingresar la medida por favor.\n\n");
			
					}
		
				}while(alturap[i]<=0.0);
				
			}
		
			//Calculo del total de altura
			for(i=0;i<personas;i++){
			
				totalaltura+=alturap[i];
			
			}
			
			//Calculo de promedio
			prom=promedio(totalaltura,personas);
			
			//Contabilizar cuantos superan y cuantos no superan promedio
			for(i=0;i<personas;i++){
			
				if(alturap[i]>=prom){
				
					conpromay++;
				
				}else{
				
					conpromen++;
				
				}
			
			}
			
//Salida de datos	
	
	printf("\n\nEl promedio es: %.2f",prom);
	printf("\nCantidad de personas que superan el promedio: %d",conpromay);
	printf("\nCantidad de personas que estan debajo del promedio: %d\n\n",conpromen);
		
	}else {
		
		printf("\n\nFinaliza el programa.\n\n");
		
	}

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
