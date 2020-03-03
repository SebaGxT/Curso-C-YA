//Realizar un programa que pida cargar una fecha cualquiera, luego verificar si dicha fecha corresponde a Navidad.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	int dia,mes,anio;
	bool valid=true;

//Ingreso de datos
	printf("Ingrese un dia: ");
	fflush(stdin);
	scanf("%d",&dia);
		if(dia<1 || dia>31){
			valid=false;
				}else{
					printf("\nIngrese un mes: ");
					fflush(stdin);
					scanf("%d",&mes);
						if(mes<1 || mes>12){
							valid=false;
								}else{
									printf("\nIngrese un a%co: ",164);
									fflush(stdin);
									scanf("%d",&anio);
								}
				}
	
//Proceso
	if(valid){
	
		if(dia==25 && mes==12){
			printf("\n\nLa fecha ingresada es Navidad!");
		}else{
			printf("\n\nLa fecha ingresada no es Navidad");
		}
	}else{
		printf("\n\nLa fecha ingresada es invalida");
	}
	
//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
