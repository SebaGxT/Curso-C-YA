/*Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:
a) La cantidad de valores ingresados negativos.
b) La cantidad de valores ingresados positivos.
c) La cantidad de múltiplos de 15.
d) El valor acumulado de los números ingresados que son pares.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones

int Entero_pos_neg_neu(int n){
	
	int tipo;
	
	if(n>0){
		
		tipo=1;
		
	}else if(n<0){
		
		tipo=2;
		
	}else{
		
		tipo=0;
		
	}
	
	return tipo;
	
}

int Entero_par_impar(int n){
	
	int npar;
	
	if(n%2==0){
		
		npar=1;
		
	}else{
		
		npar=0;
		
	}
	
	return npar;
	
}

int multiplo(int n,int m){
	
	int res;
	
	if(n%m==0){
		
		res=1;
		
	}else{
		
		res=0;
		
	}
	
	return res;
	
}

//Main
int main(){
	
//Variables
	
	int i,cantent,n,tipo,npar,mul,mult,contpos,contneg,contneu,contmul,sumpar;
	
	cantent=0;
	contpos=0;
	contneg=0;
	contneu=0;
	contmul=0;
	sumpar=0;

//Ingreso de datos
	
	printf("Proceso de valores enteros\n\n");
	printf("Ingrese cantidad de valores a procesar: ");
	scanf("%d",&cantent);
	fflush(stdin);
	printf("\nIngrese m%cltiplo a calcular: ",163);
	scanf("%d",&mult);
	fflush(stdin);
//Proceso
	
	for(i=0;i<cantent;i++){
		
		printf("\nIngrese un valor: ");
		scanf("%d",&n);
		fflush(stdin);
		
		tipo=Entero_pos_neg_neu(n);
		npar=Entero_par_impar(n);
		mul=multiplo(n,mult);
		
		if(tipo==1){
			
			contpos++;
			
		}else if(tipo==2){
			
			contneg++;
			
		}else{
			
			contneu++;
			
		}
		
		if(npar==1){
			
			sumpar+=n;
			
		}
		
		if(mul==1){
			
			contmul++;
			
		}
		
	}

//Salida de datos
	
	printf("\nLa cantidad de n%cmeros positivos: %d",163,contpos);
	printf("\nLa cantidad de n%cmeros negativos: %d",163,contneg);
	printf("\nLa cantidad de n%cmeros m%cltiplo de %d: %d",163,163,mult,contmul);
	printf("\nLa suma de los pares: %d",sumpar);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
