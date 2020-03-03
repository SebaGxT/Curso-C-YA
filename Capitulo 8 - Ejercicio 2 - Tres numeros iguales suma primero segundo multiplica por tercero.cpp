//Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del primero con el segundo y a este resultado se lo multiplica por el tercero.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	int num1,num2,num3,suma,multip;
	
//Ingreso de datos
	printf("Si ingresa los 3 numeros iguales se sumaran dos y se multiplica por el tercero.\n");
	printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n");
	printf("Ingrese el primer numero: ");
	fflush(stdin);
	scanf("%d",&num1);
	printf("Ingrese el segundo numero: ");
	fflush(stdin);
	scanf("%d",&num2);
	printf("Ingrese el tercer numero: ");
	fflush(stdin);
	scanf("%d",&num3);
	
//Proceso

	if(num1==num2 && num2==num3){
		suma=num1+num2;
		multip=suma*num3;
		printf("\n\nTodos los numeros son iguales: %d",num1);
		printf("\nEl resultado es: %d",multip);	
	}else{
		printf("\n\nLos numeros son distintos.");
		printf("\nNumero 1: %d",num1);
		printf("\nNumero 2: %d",num2);
		printf("\nNumero 3: %d",num3);
	}
		
	
	
//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;	
}
