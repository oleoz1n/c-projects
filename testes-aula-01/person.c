#include <stdio.h>

int main() {
    char nome[30], cpf[20];
    int idade;
    float salario;
    printf("Informe o nome: ");
    scanf("%s", nome);
    printf("Informe o CPF: ");
    scanf("%s", cpf);
    printf("Informe a idade: ");
    scanf("%d", &idade);
    printf("Informe o salário: ");
    scanf("%f", &salario);
    printf("\nNome: %s", nome);
    printf("\nIdade: %d", idade);
    printf("\nCPF: %s", cpf);
    printf("\nSalário: %.2f", salario);
}
