/*Realizar un programa que imprima en pantalla los números del 1 al 100.

Probemos algunas modificaciones de este programa y veamos que cambios se deberían hacer para:

1 - Imprimir los números del 1 al 500.
2 - Imprimir los números del 50 al 100.
3 - Imprimir los números del -50 al 0.
4 - Imprimir los números del 2 al 100 pero de 2 en 2 (2,4,6,8 ....100).

*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int n;
	
	n=1;

//Ingreso de datos
	
	printf("N%cmeros del 1 al 100.\n\n",163);

//Salida de datos

	while(n<=100){
		
		printf("%d  ",n);
		
		n++;
		
	}
	
	printf("\n\nN%cmeros del 1 al 500.\n\n",163);
	
	n=1;
	
	while(n<=500){
		
		printf("%d  ",n);
		
		n++;
		
	}
	
	printf("\n\nN%cmeros del 50 al 100.\n\n",163);
	
	n=50;
	
	while(n<=100){
		
		printf("%d  ",n);
		
		n++;
		
	}
	
	printf("\n\nN%cmeros del -50 al 0.\n\n",163);
	
	n=-50;
	
	while(n<=0){
		
		printf("%d  ",n);
		
		n++;
		
	}
	
	printf("\n\nN%cmeros del 0 al 100 sumando de a 2.\n\n",163);
	
	n=0;
	
	while(n<=100){
		
		printf("%d  ",n);
		
		n=n+2;
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
