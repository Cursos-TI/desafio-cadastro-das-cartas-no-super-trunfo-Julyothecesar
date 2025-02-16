#include <stdio.h>

int main() {
    int num1, num2, soma;

    // Solicita ao usuário para inserir dois números inteiros
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf (" quer uma nova operação ? \n");

    // Calcula a soma dos dois números
    soma = num1 + num2;

    // Exibe o resultado
    printf("A soma de %d e %d é: %d\n", num1, num2, soma);

    return 0;
}