/*Una planta que fabrica perfiles de hierro posee un lote de n piezas. Confeccionar un programa que pida ingresar por teclado la cantidad de piezas a procesar y luego ingrese la longitud de cada perfil;
 sabiendo que la pieza cuya longitud esté comprendida en el rango de 1.20 y 1.30 son aptas. Imprimir por pantalla la cantidad de piezas aptas que hay en el lote.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int aux,n,cont;
	float piezas;
	
	aux=0;
	cont=0;

//Ingreso de datos
	
	printf("Lote de piezas de hierro se contabiliza las que cumplen el requisito.\n\n");
	printf("Ingrese la cantidad materiales: ");
	scanf("%d",&n);
	fflush(stdin);

//Proceso
	
	while(aux<n){
		
		printf("\nIngrese la medida del material %d: ",aux+1);
		scanf("%f",&piezas);
		fflush(stdin);
		
		if(piezas>=1.20&&piezas<=1.30){
			
			cont++;
			
		}
		
		aux++;
		
	}

//Salida de datos
	
	printf("\nCatidad de piezas utilizables del lote: %d",cont);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
