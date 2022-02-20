#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool esPrimo(int numero);
void listarPrimos(int cantidadPrimos);

int main(){
    int cantidadPrimos;
    printf("\nIngrese hasta que numero primo distinto de 1 quiere conocer: ");
    scanf("%d", &cantidadPrimos);
    listarPrimos(cantidadPrimos);
    printf("\n");
    system("pause");
}

bool esPrimo(int numero){
    int flag = 1;
    for (int i=2; i<= sqrt(numero);i++){
        if(numero%i == 0){
            flag=0;
            break;
        }
    }
    if (numero<=1){
        flag = 0;
    }
    if (flag==1){
        return true;
    }
}

void listarPrimos(int cantidadPrimos){
    
    printf("\nLos %d primos son: ", cantidadPrimos);

    int contador = 0;
    int numero = 0;

    while(contador < cantidadPrimos){
       bool x = esPrimo(numero);
       if(x==true){
           contador++;
           printf("%d ", numero);
       }
       numero++;
    }
}

