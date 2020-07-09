//Escribir un programa que lea 10 números enteros y luego muestre cuántos valores ingresados fueron múltiplos de 3 y cuántos de 5. Debemos tener en cuenta que hay números que son múltiplos de 3 y de 5 a la vez.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int i,mul3,mul5,n1;
	
	mul3=0;
	mul5=0;

//Ingreso de datos
	
	printf("Ingrese valores enteros y se indicara cuantos son m%cltiplo de 3 y m%cltiplo de 5\n\n",163,163);
	
	for(i=0;i<10;i++){
		
		printf("\nIngrese un valor entero: ");
		scanf("%d",&n1);
		fflush(stdin);

//Proceso
		
		if(n1%3==0){
			
			mul3++;
			
		}
		
		if(n1%5==0){
			
			mul5++;
			
		}		
		
	}

//Salida de datos
	
	printf("\nLa cantidad de n%cmeros m%cltiplo de 3: %d",163,163,mul3);
	printf("\nLa cantidad de n%cmeros m%cltiplo de 5: %d",163,163,mul5);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
