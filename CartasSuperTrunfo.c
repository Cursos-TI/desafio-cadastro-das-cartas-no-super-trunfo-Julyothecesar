#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int code, pturistc;
    char name;
    int population;
    float area;
    double pib;

    printf ("Digite o codigo da cidade:\n");
    scanf ("%s", &code);

    printf ("Nome: \n");
    scanf ("%s", &name);

    printf ("Qual a população: \n");
    scanf ("%c", &population);

    printf ("Isira a extenção do territorio: \n");
    scanf ("%s", &area);

    printf ("Qual o PIB: \n");
    scanf ("%c", &pib);
    
    printf ("Numero de Pontos Turisticos: \n");
    scanf ("%s", &pturistc);

    printf ("Codigo da cidade: %s- Nome do pais: %s", code, name);
    


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Começarei apartira da 19:00.
    return 0;
}
