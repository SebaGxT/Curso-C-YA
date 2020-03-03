//Se ingresan por teclado tres números, si todos los valores ingresados son menores a 10, imprimir en pantalla la leyenda "Todos los números son menores a diez".
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	int num1,num2,num3;

//Ingreso de datos

	printf("Ingrese tres numeros. Si todos son menores a diez se indicara con un mensaje\n\n");
	printf("Ingrese el primer numero: ");
	fflush(stdin);
	scanf("%d",&num1);
	printf("\nIngrese el segundo numero: ");
	fflush(stdin);
	scanf("%d",&num2);
	printf("\nIngrese el tercer numero: ");
	fflush(stdin);
	scanf("%d",&num3);
	
//Proceso
	
	if(num1<10 && num2<10 && num3<10){
		printf("\n\nTodos los numeros son menores a diez\n");
		printf("\nLos numeros son: \n\nNumero1: %d\n\nNumero2: %d\n\nNumero3: %d\n",num1,num2,num3);
	}else{
		printf("\n\nAl menos uno de los numeros no es menor a diez\n");
		printf("\nLos numeros son: \nNumero1: %d\nNumero2: %d\nNumero3: %d\n",num1,num2,num3);
	}
	
//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
