/*En un banco se procesan datos de las cuentas corrientes de sus clientes. De cada cuenta corriente se conoce: número de cuenta y saldo actual. El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.

Se pide confeccionar un programa que lea los datos de las cuentas corrientes e informe:
a)De cada cuenta: número de cuenta y estado de la cuenta según su saldo, sabiendo que:

Estado de la cuenta	'Acreedor' si el saldo es >0.
			'Deudor' si el saldo es <0.
			'Nulo' si el saldo es =0.

b) La suma total de los saldos acreedores.
*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones
float saldocta(int cta,float sald){
	
	int sal;
	
	if(sald>0){
		
		sal=1;
		
		printf("\nLa cuenta %d tiene saldo: Acreedor.\n\n",cta);
		
	}else if(sald<0){
		
		sal=2;
		
		printf("\nLa cuenta %d tiene saldo: Deudor.\n\n",cta);
		
	}else{
		
		sal=0;
		
		printf("\nLa cuenta %d tiene saldo: Nulo.\n\n",cta);	
	
	}
	
	return sal;
	
}

//Main
int main(){
	
//Variables
	
	int nrocta,sal;
	float saldo,totalacreedores,totaldeudores;

//Ingreso de datos
	
	printf("Procesos de cuentas corrientes\n\n");
	printf("Programa finaliza al ingresar nro Cuenta negativa\n\n");
	
	do{
		
		do{
			
			printf("\nIngrese n%cmero de cuenta: ",163);
			scanf("%d",&nrocta);
			fflush(stdin);
			
			if(nrocta>=0&&nrocta<10000000||nrocta>99999999){
				
				printf("\n\nError de cuenta. El n%cmero de cuenta debe contener 8 d%cgitos.\n\n",163,161);
				
			}
			
		}while(nrocta>=0&&nrocta<10000000||nrocta>99999999);
		
		if(nrocta>0){
			
			printf("\nIngrese el saldo actual: ");
			scanf("%f",&saldo);
			fflush(stdin);
		
			sal=saldocta(nrocta,saldo);
		
			if(sal==1){
			
				totalacreedores+=saldo;
			
			}else if(sal==2){
				
				totaldeudores+=saldo;
				
			}
			
		}
		
	}while(nrocta>0);

//Salida de datos
	
	printf("\n\nEl total de los saldos acreedores: %.2f",totalacreedores);
	printf("\n\nEl total de los saldos deudores: %.2f",totaldeudores);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
