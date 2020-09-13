//Mostrar el abecedario de la 'A' a la 'Z' primero en mayúsculas y luego en minúsculas. Utilizar una variable de tipo char dentro de un for.
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

void abcdario(char ini, char fin){

//Salida de datos
	
	int i;

	if(ini<fin){
		
		for(i=ini;i<=fin;i++){
		
			printf("%c\n",i);
		
		}
		
		printf("\n\n");
		
	}else{
		
		for(i=ini;i>=fin;i--){
		
			printf("%c\n",i);
		
		}
		
		printf("\n\n");
		
	}
	
}

//Main
int main(){
	
//Variables
	
	char inicial,final,conf;

//Ingreso de datos
	
	printf("Impresion del abecedario por pantalla\n\n");
	
	//Mensaje
	printf("Usted puede especificar el desde donde iniciar donde finalizar la impresion.\n\n");

	do{
		
		//Carga de valores
		printf("\nIngrese la letra inicial: ");
		scanf(" %c",&inicial);
		fflush(stdin);
		printf("\nIngrese la letra final: ");
		scanf(" %c",&final);
		fflush(stdin);

//Proceso
		
		printf("\n\n");
			
		abcdario(inicial,final);
			
		conf=confirmacion();
		
		if(conf=='N'||conf=='n'){
			
			printf("\n\n**********Se finaliza el programa**********");
			
		}
		
	}while(conf=='S'||conf=='s');
	
//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
