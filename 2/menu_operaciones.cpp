#include <stdio.h>
#include <stdlib.h>
#include "operaciones_matematicas.h"

int main(){

    int seleccion, a, b, resultado;
    do{
    	    
	    printf("\n\tMENU DE OPERACIONES MATEMATICAS");
	    printf("\n**********************************");
	    printf("\n\t\t1- Suma entre dos numeros"); 
	    printf("\n\t\t2- Resta entre dos numeros"); 
	    printf("\n\t\t3- Producto entre dos numeros"); 
	    printf("\n\t\t4- Cociente entre dos numeros"); 
	    printf("\n\t\t5-Salir del programa"); 
	    printf("\nIngrese el numero correspondiente a la operacion que desea probar: ");
	    scanf("%d", &seleccion);
	
	    switch(seleccion)
	    {
	        case 1:
	            printf("\nPor favor, ingrese dos numeros que desea sumar: ");
	            printf("\nPrimero: ");
	            scanf("%d", &a);
	            printf("\nSegundo: ");
	            scanf("%d", &b);
	            resultado = suma(a,b);
	            printf("\nResultado: %d", resultado);
	            break;
	    
	        case 2:
	            printf("\nPor favor, ingrese dos numeros que desea restar: ");
	            printf("\nPrimero: ");
	            scanf("%d", &a);
	            printf("\nSegundo: ");
	            scanf("%d", &b);
	            resultado = resta(a,b);
	            printf("\nResultado: %d", resultado);
	            break;
	
	        case 3:
	            printf("\nPor favor, ingrese dos numeros que desea multiplicar: ");
	            printf("\nPrimero: ");
	            scanf("%d", &a);
	            printf("\nSegundo: ");
	            scanf("%d", &b);
	            resultado = multiplicacion(a,b);
	            printf("\nResultado: %d", resultado);
	            break;
	            
	        case 4:
	            printf("\nPor favor, ingrese dos numeros que desea dividir: ");
	            printf("\nPrimero: ");
	            scanf("%d", &a);
	            printf("\nSegundo: ");
	            scanf("%d", &b);
	            if(b==0){
	                printf("\nNo esta definida la division por cero");
	            }
	            else{
	                float resultado_division =  division(a,b);
	                printf("\nResultado: %.2f", resultado_division);
	                break;
	            } 
	        case 5:
	        		printf("\nGracias por utilizar el programa.\n");
	        		system("pause");
	            return 0;
	            break;
	          
					default:
						printf("\n\tIngrese un numero valido");
				}
    }
    while(seleccion !=6);
  }
	
			
