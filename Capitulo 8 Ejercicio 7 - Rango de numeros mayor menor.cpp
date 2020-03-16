/*Escribir un programa en el cual: dada una lista de tres valores numéricos distintos 
se calcule e informe su rango de variación (debe mostrar el mayor y el menor de ellos)*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main 
int main(void)
{

//Variables

int num1,num2,num3,nummay,nummen;

//Ingreso de datos

    printf("Ingrese el primer numero: ");
    fflush(stdin);
    scanf("%d",&num1);
    printf("\nIngrese el segundo numero: ");
    fflush(stdin);
    scanf("%d",&num2);
    printf("\nIngrese el tercer numero: ");
    fflush(stdin);
    scanf("%d",&num3);

//Proceso

    if(num1>num2 && num1>num3){
        
        nummay=num1;
        if(num2>num3){
            nummen=num3;
        }else {
            nummen=num2;
        }
        
    }else if(num2>num1 && num2>num3){
        
        nummay=num2;
        if(num1>num3){
            nummen=num3;
        }else{
            nummen=num1;
        }
    }else{
        
        nummay=num3;
        if(num1>num2){
            nummen=num2;
        }else{
            nummen=num1;
        }
    }

//Salida de datos

    printf("\nEl rango de numeros va de: %d a %d\n",nummay,nummen);
    printf("El mayor numero es: %d\n",nummay);
    printf("El menor numero es: %d\n",nummen);
    
//Pausa y fin de programa

    printf("\n\n\n\n");
    //system("pause");
    return 0;
}
