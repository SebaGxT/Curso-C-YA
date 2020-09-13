/*Confeccionar un programa que permita la carga de valores enteros por teclado. Luego de ingresar el valor mostrar un mensaje por pantalla que pida confirmar al usuario si desea cargar otro valor ingresando los caracteres 's' o 'n'.
 Mostrar al final la suma de los valores ingresados.*/
//Liberias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Funciones
int confirmacion(){
	
	char conf;
	bool valid=true;
		
	do{
			
			printf("\n\n%cDesea continuar%c S/N: ",168,63);
			scanf(" %c",&conf);
			fflush(stdin);
			
			if(conf=='S'||conf=='s'||conf=='N'||conf=='n'){
				
				valid=false;
				
			}else{
				
				printf("\n\nDebe ingresar S para continuar o N para cancelar.\n\n");
				
			}	
			
		}while(valid);	
	
	return conf;
		
}

//Main
int main(){
	
//Variables
	
	int n1,n2;
	char conf;
	
	n1=0;
	n2=0;

//Ingreso de datos
	
	printf("Suma de valores.\n\n");
	printf("Ingrese dos valores y se mostrara la suma\n\n");

//Proceso
	
	do{
		
		printf("\nIngrese el primer valor: ");
		scanf("%d",&n1);
		fflush(stdin);
		printf("\nIngrese el segundo valor: ");
		scanf("%d",&n2);
		fflush(stdin);
		
		printf("\n\nLa suma es: %d ",n1+n2);
		
		conf=confirmacion();
		
		if(conf=='N'||conf=='n'){
			
			printf("\n\n**********Se finaliza el programa**********");
			
		}	
		
	}while((conf=='S')||(conf=='s'));

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
