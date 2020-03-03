//Programa 6 - Primer, segundo, tercer o cuarto trimestre. Se carga una fecha (día, mes y año) por teclado. Mostrar un mensaje si corresponde al primer trimestre del año (enero, febrero o marzo) Cargar por teclado el valor numérico del día, mes y año.
//Ejemplo: dia:10 mes:2 año:2017.  //mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12 dias=31 // mes==4 || mes==6 || mes==9 || mes==11 dias=30
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	int dia, mes, anio;
	bool valid=true, biciesto=false;

//Ingreso de datos
	printf("Ingrese la fecha en orden y con valores numericos \n\n");
	printf("\nIngrese el dia: ");
	fflush(stdin);
	scanf("%d",&dia);
	
	if(dia>=1 && dia<=31){
		printf("\nIngrese el mes: ");
		fflush(stdin);
		scanf("%d",&mes);
		}else{
			valid=false;
		}

//Validación de dias existentes en los meses
	if(valid){
		if(dia==31 && mes==4 || dia==31 && mes==6 || dia==31 && mes==9 || dia==31 && mes==11){
			valid=false;
			}
	}
	if(valid){
		if(mes>=1 && mes<=12){
			printf("\nIngrese el anio: ");
			fflush(stdin);
			scanf("%d",&anio);
		}else{
				valid=false;
			}
	}
	
//Proceso

//Validación de biciesto
	if(valid){
		if(mes==2){
			if(dia<1 || dia>29){
				valid=false;
				} else if (anio % 4 == 0 && anio % 100 !=0 || anio % 400 == 0){
					biciesto=true;
				} else if (dia==29 && biciesto == false) {
					valid=false;
				}					
		}
	}
	
//Validación de trismestre
	if(valid){
		if(mes==1 || mes==2 || mes==3){
			printf("\nEl mes ingresado corresponde al primer trimestre");
		}else if(mes==4 || mes==5 || mes==6){
			printf("\nEl mes ingresado corresponde al segundo trimestre");
		}else if(mes==7 || mes==8 || mes==9){
			printf("\nEl mes ingresado corresponde al tercer trimestre");
		}else{
			printf("\nEl mes ingresado corresponde al cuarto trimestre ");
		}
		if(biciesto){
			printf("\n\nEl a%co %d es biciesto",164,anio);
		} else {
			printf("\n\nEl a%co %d no es biciesto",164,anio);
		}
	}else{
		printf("\nLa fecha ingresada es invalida");
		printf("\n\nFin de programa");
	}
		

//Pausa y fin de programa
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
