#include <stdio.h>

int main() {

    int ano = 0;

    scanf("%d", &ano);

    int bissexto = (ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0));

    printf("%s\n", bissexto ? "ANO BISSEXTO" : "ANO NAO BISSEXTO");

    return 0;
}
