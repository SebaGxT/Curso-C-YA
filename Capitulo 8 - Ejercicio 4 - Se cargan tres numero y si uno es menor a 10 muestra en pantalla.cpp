//Se ingresan por teclado tres números, si al menos uno de los valores ingresados es menor a 10, imprimir en pantalla la leyenda "Alguno de los números es menor a diez".
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	int num1,num2,num3;

//Ingreso de datos

	printf("Ingrese los numeros y se le indicara con un mensaje si uno de ellos es menor a 10");
	printf("\nIngrese el primer numero: ");
	fflush(stdin);
	scanf("%d",&num1);
	printf("\nIngrese el segundo numero: ");
	fflush(stdin);
	scanf("%d",&num2);
	printf("\nIngrese el tercer numero: ");
	fflush(stdin);
	scanf("%d",&num3);

//Proceso	
	
	if(num1<10 || num2<10 || num3<10){
		
		printf("\nAl menos uno de los numeros ingresados es menor a 10");
		printf("\nLos numero ingresados son: \n%d \n%d \n%d",num1,num2,num3);
		
	}else{
		
		printf("\nTodos los numeros ingresados son mayor a 10");
		printf("\nLos numero ingresados son: \n%d \n%d \n%d",num1,num2,num3);
		
	}
	
//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
