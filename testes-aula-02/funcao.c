#include <stdio.h>

int soma (int x, int y){
    return (x+y);
}

int main (){
    int n1;
    int n2;
    
    printf("Valor 1: ");
    scanf("%d", &n1);
    printf("Valor 2: ");
    scanf("%d", &n2);
    int resultado = soma(n1,n2);
    printf("A soma de %d e %d eh: %d \n", n1,n2,resultado);
}