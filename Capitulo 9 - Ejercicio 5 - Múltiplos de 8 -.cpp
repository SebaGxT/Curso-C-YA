//Mostrar todos los múltiplos de 8 que hay hasta el valor 500. Debe aparecer en pantalla 8 - 16 - 24, etc.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int mul8,n;
	
	n=1;

//Ingreso de datos
	
	printf("M%cltiplos de 8\n\n",163);

//Salida de datos
	
	while(n<=500){
		
		mul8=n*8;
		
		printf("%d\n",mul8);
		
		n++;
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
