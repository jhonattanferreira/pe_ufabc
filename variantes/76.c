#include <stdio.h>

void copia(char *destino, char *origem) {

    while (*origem != '\0') {
        *destino++ = *origem++;
    }

    *destino = '\0';
}

int main() {

    char origem[1001];
    char destino[1001];

    scanf("%s", origem);

    copia(destino, origem);

    printf("%s", destino);

    return 0;
}
