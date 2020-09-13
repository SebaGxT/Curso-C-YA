//Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones
void cargarvec(int v[], int tamanio){
	
	int i;

	for(i=0;i<tamanio;i++){
		
		printf("\nIngrese el valor %d: ",i+1);
		scanf("%d",&v[i]);
		fflush(stdin);
		
	}
	
}

void ordenvec(int v[],int tamanio){
	
	int i,cant1,cant2;
	bool order1=false,order2=false;
	
	cant1=0;
	cant2=0;
	
	for(i=0;i<tamanio;i++){
		
		if(v[i]<v[i+1]){
			
			cant1++;
			
		}
		
		if(v[i]>v[i+1]){
			
			cant2++;
			
		}
		
	}
	
	if(cant1+1==tamanio){
		
		order1=true;
		
	}else if(cant2+1==tamanio){
		
		order2=true;
		
	}
	
	if(order1){
		
		printf("\n\nEl vector esta ordenado de menor a mayor.\n\n");	
		
	}else if(order2){
		
		printf("\n\nEl vector esta ordenado de mayor a menor.\n\n");
		
	}else{
		
		printf("\n\nEl vector no esta ordenado.\n\n");
		
	}
	
}

//Main
int main(){
	
//Variables
	
	const int TAM=10;
	int i,vec[TAM];

//Ingreso de datos
	
	printf("Carga de vector y verificaci%cn de orden del vector\n\n",162);
	cargarvec(vec,TAM);

//Salida de datos
	
	//Verificación de orden de vector
	ordenvec(vec,TAM);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
