#include <stdio.h>


int main() {

    // Declarei as variaveis*

    int pturistc;
    char code, name[40];
    int population;
    float area;
    double pib;

    // Inseri as entradas com seus respequitivos especificadores (%d, %s, %f, %lf) na saida:)

    printf ("Digite o codigo da cidade:\n");
    scanf ("%d", &code);

    printf ("Nome: \n");
    scanf ( "%s", name);

    printf ("Qual a população: \n");
    scanf ("%d", &population);

    printf ("Isira a extensão do territorio: \n");
    scanf ("%f", &area);

    printf ("Qual o PIB: \n");
    scanf ("%lf", &pib);
    
    printf ("Numero de Pontos Turisticos: \n");
    scanf ("%d", &pturistc);

    // Dei saida as informações obitidas nas linas acima:)

    printf ("Codigo da cidade: %d - Nome do pais: %s \n", code, name);
    printf ("População: %d - Area: %f \n", population, area);
    printf ("Pid: %lf - Pontos turisticos: %d", pib, pturistc);
    


    // Por fim, o codigo funciona, mas temos o probleno com o buffer do enter, assim não
    // conseguimos inserir palavras com espaço como "São Paulo" o problema pode ser resolvido 
    // com uma insersão com a fução "void" ou "getchar":)
   
   
    return 0;

}