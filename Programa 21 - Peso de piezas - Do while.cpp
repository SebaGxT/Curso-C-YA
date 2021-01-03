/*Realizar un programa que permita ingresar el peso (en kilogramos) de piezas. El proceso termina cuando ingresamos el valor 0. Se debe informar:
a) ¿Cuántas piezas tienen un peso entre 9.8 Kg. y 10.2 Kg.?, ¿Cuántas con más de 10.2 Kg.? y ¿Cuántas con menos de 9.8 Kg.?
b) La cantidad total de piezas procesadas.
*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones
void pausar(){
	
	printf("\n\n\n\n");
	system("pause");
		
}

int determinarpeso(float pe,float min,float max){
	
	int p;
	
	if(pe>=min&&pe<=max){
		
		p=1;
		
	}else if(pe<min){
		
		p=2;
		
	}else{
		
		p=3;
		
	}
	
	return p;
	
}

void carga_float(float &m,char cade[30]){
	
	do{
		
		printf("\n%s",cade);
		scanf("%f",&m);
		fflush(stdin);
		
		if(m<0.0){
			
			printf("\n\nValor incorrecto. Por favor ingrese un valor positivo.\n\n");
			
		}
		
	}while(m<0.0);
	
}

//Main
int main(){
	
//Variables
	
	int contpmas,contpmen,contmed,peso,totalpiezas;
	float pieza,min,max;
	
	contpmas=0;
	contmed=0;
	contpmen=0;

//Ingreso de datos
	
	printf("Proceso de piezas\n\n");
	printf("Ingrese el peso con un decimal. El proceso finaliza con 0.\n\n");
	printf("Establecer el rango de comparaci%cn, Se calculara y mostrara el total de ingresados.\n",162);
	printf("Adem%cs se mostrara cuantos estan en el rango, cuantos lo superan y cuantos estan por debajo.\n\n",160);
	
	do{
		
		carga_float(max,"Ingrese el peso maximo del rango: ");
		carga_float(min,"Ingrese el peso minimo del rango: ");
		
		if(max<min){
			
			printf("\n\nEl valor de m%cximo no puede ser inferior a minimo. Vuelva a cargar valores por favor.\n\n",160);
			
		}
		
	}while(max<min);
	
	printf("\n");

//Proceso
	
	do{
		
		carga_float(pieza,"\nIngrese el peso de la pieza: ");		
		
		if(pieza!=0.0){
			
			peso=determinarpeso(pieza,min,max);
			
			if(peso==1){
				
				contmed++;
				
			}else if(peso==2){
				
				contpmen++;
				
			}else{
				
				contpmas++;
				
			}
			
		}
			
	}while(pieza!=0.0);
	
	totalpiezas=contpmas+contpmen+contmed;
	
//Salida de datos
	
	printf("\n\nEl total de piezas ingresadas es: %d",totalpiezas);
	printf("\nLa cantidad de piezas que estan dentro del rango es: %d",contmed);
	printf("\nLa cantidad por debajo del rango es: %d",contpmen);
	printf("\nLa cantidad por encima del rango es: %d",contpmas);

//Pausa y fin de programa
	
	pausar();
	return 0;	
	
}
