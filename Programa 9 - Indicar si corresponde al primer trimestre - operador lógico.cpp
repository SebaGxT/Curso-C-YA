/*Se carga una fecha (d�a, mes y a�o) por teclado. Mostrar un mensaje si corresponde al primer trimestre del a�o (enero, febrero o marzo) Cargar por teclado el valor num�rico del d�a, mes y a�o.
Ejemplo: dia:10 mes:2 a�o:2020.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	int dia,mes,anio;

//Ingreso de datos
	
	printf("Validar fecha, si pertenece al primer trimestre se mostrara un mensaje\n\n");
	printf("Ingrese el d%ca: ",161);
	scanf("%d",&dia);
	fflush(stdin);
	printf("\nIngrese el mes: ");
	scanf("%d",&mes);
	fflush(stdin);
	printf("\nIngrese el a%co: ",164);
	scanf("%d",&anio);
	fflush(stdin);

//Salida de datos
	
	if(mes==1||mes==2||mes==3){
		
		printf("\nLa fecha %d/%d/%d pertenece al primer trimestre.",dia,mes,anio);
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
