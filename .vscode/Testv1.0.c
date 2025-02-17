#include <stdio.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);  // Limpa o buffer completamente
}

int main() {
    int code, pturistc;
    char name[40];
    int population;
    float area;
    double pib;

    printf("Digite o código da cidade:\n");
    scanf("%d", &code);
    limpar_buffer();  // 🔴 Limpa o buffer antes de fgets()

    printf("Nome da cidade:\n");
    fgets(name, sizeof(name), stdin);

    printf("Qual a população:\n");
    scanf("%d", &population);

    printf("Insira a extensão do território:\n");
    scanf("%f", &area);

    printf("Qual o PIB:\n");
    scanf("%lf", &pib);
    
    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pturistc);

    printf("\n--- Dados da Cidade ---\n");
    printf("Código da cidade: %d - Nome da cidade: %s", code, name);
    printf("População: %d - Área: %.2f km²\n", population, area);
    printf("PIB: %.2lf - Pontos turísticos: %d\n", pib, pturistc);

    return 0;
}

