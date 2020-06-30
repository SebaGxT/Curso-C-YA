//Confeccionar un programa que lea por teclado tres números distintos y nos muestre el mayor.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables

	int n1,n2,n3;

//Ingreso de datos
	
	printf("Se motrara el mayor\n\n");
	printf("Ingrese el primer valor: ");
	scanf("%d",&n1);
	fflush(stdin);
	printf("\nIngrese el segundo valor: ");
	scanf("%d",&n2);
	fflush(stdin);
	printf("\nIngrese el tercer valor: ");
	scanf("%d",&n3);
	fflush(stdin);

//Salida de datos

	if(n1>n2&&n1>n3){
		
		printf("\nEl mayor es %d",n1);
		
	}else{
		
		if(n2>n3){
			
			printf("\nEl mayor es %d",n2);
			
		}else{
			
			printf("\nEl mayor es %d",n3);
			
		}
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
