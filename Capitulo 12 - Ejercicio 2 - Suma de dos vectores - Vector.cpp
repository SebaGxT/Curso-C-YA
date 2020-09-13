//Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño. Sumar componente a componente.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones
void cargarvec(int vec[], int tamanio){
	
	int i;
	
	for(i=0;i<tamanio;i++){
		
		printf("\nIngrese el valor %d: ",i+1);
		scanf("%d",&vec[i]);
		fflush(stdin);
		
	}
	
}

void sumadevaloresvec(int v1[],int v2[], int vres[], int tamanio){
	
	int i;
	
	for(i=0;i<tamanio;i++){
		
		vres[i]=v1[i]+v2[i];
		
	}
	
}
//Main
int main(){
	
//Variables
	
	const int N=4;
	int i, vec1[N],vec2[N],sum[N];

//Inicio de variables en cero	
	for(i=0;i<N;i++){
		
		sum[i]=0;
		
	}

//Ingreso de datos
	
	printf("Carga de vectores entero y suma\n\n");

//Proceso
	
	//Carga de vectores
	printf("Carga del primer vector.\n");
	cargarvec(vec1,N);
	printf("\n\nCarga del segundo vector.\n");
	cargarvec(vec2,N);
	
	//Suma de valores de cada vector y guardar resultados en tercer vector
	printf("\n\nSe sumaran los valores de los vectores uno a uno y se imprimiran los resultados de todas las sumas\n\n");
	sumadevaloresvec(vec1,vec2,sum,N);
	
//Salida de datos
	
	printf("Resultado: \n\n");
	
	for(i=0;i<N;i++){
		
		printf("%d\n",sum[i]);
		
	}

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
