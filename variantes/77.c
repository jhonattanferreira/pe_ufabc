#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatena(char *s1, char *s2) {

    int tamanho1 = strlen(s1);
    int tamanho2 = strlen(s2);

    char *result = malloc(sizeof(char) * (tamanho1 + tamanho2 + 1));

    memcpy(result, s1, tamanho1);
    memcpy(result + tamanho1, s2, tamanho2 + 1);

    return result;
}

int main() {

    char s1[1001];
    char s2[1001];

    scanf("%s", s1);
    scanf("%s", s2);

    char *result = concatena(s1, s2);

    printf("%s", result);

    free(result);

    return 0;
}
