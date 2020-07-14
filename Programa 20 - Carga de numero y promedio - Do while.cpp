/*Escribir un programa que solicite la carga de números por teclado, obtener su promedio. Finalizar la carga de valores cuando se ingrese el valor 0.
Cuando la finalización depende de algún valor ingresado por el operador conviene el empleo de la estructura do while, por lo menos se cargará un valor (en el caso más extremo se carga 0, que indica la finalización de la carga de valores)
*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones
float promedio(float n,int cant){
	
	float p;
	
	p=n/cant;
	
	return p;	
	
}

//Main
int main(){
	
//Variables
	
	int cont;
	float n,sum,prom;
	
	sum=0.0;
	cont=0;

//Ingreso de datos
	
	printf("Ingreso de valores, finaliza con 0. Al finalizar se mostrara el promedio.\n\n");

//Proceso
	
	do{
		
		printf("\nIngrese un n%cmero: ",163);
		scanf("%f",&n);
		fflush(stdin);
		
		if(n!=0){
			
			sum+=n;
			cont++;
			
		}else if(sum!=0){
			
			prom=promedio(sum,cont);
			
			printf("\n\nEl promedio es: %.2f",prom);
			
		}else{
			
			printf("\n\nSe finalizo el programa sin cargar datos.\n\n");
			
		}
			
	}while(n!=0);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
