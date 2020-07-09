/*Realizar un programa que lea los lados de n triángulos, e informar:
a) De cada uno de ellos, qué tipo de triángulo es: equilátero (tres lados iguales), isósceles (dos lados iguales), o escaleno (ningún lado igual)
b) Cantidad de triángulos de cada tipo.
c) Tipo de triángulo que posee menor cantidad.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funcion
int cargalado(int l){
	
	int la;
	printf("\nIngrese el valor del lado %d: ",l);
	scanf("%d",&la);
	fflush(stdin);	
		
	return la;
	
}

int tipotriang(int la1, int la2, int la3){
	
	if(la1==la2&&la1==la3){
		
		return 1;
		
	}else if(la1!=la2&&la1!=la3&&la2!=la3){
		
		return 2;
		
	}else{
		
		return 3;
		
	}
	
}

int calcularmenoroigual(int equi,int esca,int isos){
	
	if(equi!=esca&&equi!=isos&&esca!=isos){
		
		if(equi<esca&equi<isos){
		
			printf("\nEl tipo de tri%cngulo que posee menor cantidad es: equilatero",160);
		
		}else if(esca<isos){
		
			printf("\nEl tipo de tri%cngulo que posee menor cantidad es: escaleno",160);
		
		}else if(isos<esca){
		
			printf("\nEl tipo de tri%cngulo que posee menor cantidad es: is%csceles",160,162);
		
		}
		
	}
	
	
}

//Main
int main(){
	
//Variables

	int i,lado1,lado2,lado3,triang,equilatero,escaleno,isosceles,cant,resultado;
	
	cant=0;
	equilatero=0;
	escaleno=0;
	isosceles=0;

//Ingreso de datos
	
	printf("Se informara tipo de tri%cngulo y cantidad de cada tipo ingresado\n\n",160);
	printf("Ingrese cantidad de tri%cngulos a procesar: ",160);
	scanf("%d",&cant);
	fflush(stdin);
	
	for(i=0;i<cant;i++){
		
		lado1=cargalado(1);
		lado2=cargalado(2);
		lado3=cargalado(3);
		
		triang=tipotriang(lado1,lado2,lado3);
		
		if(triang==1){
			
			equilatero++;
			
		}else if(triang==2){
			
			escaleno++;
			
		}else{
			
			isosceles++;
			
		}
		
	}

//Salida de datos
	
	printf("\n\nLa cantidad de tri%cngulos equilatero: %d",160,equilatero);
	printf("\nLa cantidad de tri%cngulos escaleno: %d",160,escaleno);
	printf("\nLa cantidad de tri%cngulos is%csceles: %d\n\n",160,162,isosceles);
	
	

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
