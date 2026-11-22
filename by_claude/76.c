#include <stdio.h>

void copia(char *destino, char *origem) {

    int i = 0;

    while (origem[i] != '\0') {
        destino[i] = origem[i];
        i++;
    }

    destino[i] = '\0';
}

int main() {

    char origem[1001];
    char destino[1001];

    scanf("%s", origem);

    copia(destino, origem);

    printf("%s", destino);

    return 0;
}
