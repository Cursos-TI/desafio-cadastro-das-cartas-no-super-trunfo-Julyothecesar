#include <stdio.h>

int main () {

    int idade;
    float altura;
    char opcao;


   // sintaxe scanf
   // (scanfformato1 formato2 &variavel1 &variavel,...)

printf ("Entre com sua idade:\n");
scanf ("%d", &idade );
printf ("idade, %d/n", idade);
printf ("Entre com sua altura:\n");
scanf (" %f", &altura );
printf ("Entre com a opção:\n");
scanf (" %c", opcao);
printf ("%c", opcao);


}