#include <stdio.h>

int main(){
    float n1;
    float n2;
    float sub;

    printf("Qual o primeiro numero: ");
    scanf("%f", &n1);
    printf("Qual o segundo numero: ");
    scanf("%f", &n2);
    sub = n1 - n2;
    printf("N1 - N2 = %.2f", sub);
    printf("\n");
    sub = n2 - n1;
    printf("N2 - N1 = %.2f", sub);
    printf("\n");
}