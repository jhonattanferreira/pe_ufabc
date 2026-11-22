#include <stdio.h>
#include <stdlib.h>

char *concatena(char *s1, char *s2) {

    int tamanho1 = 0;
    int tamanho2 = 0;

    while (s1[tamanho1] != '\0') {
        tamanho1++;
    }

    while (s2[tamanho2] != '\0') {
        tamanho2++;
    }

    char *result = malloc(sizeof(char) * (tamanho1 + tamanho2 + 1));

    for (int i = 0; i < tamanho1; i++) {
        result[i] = s1[i];
    }

    for (int i = 0; i < tamanho2; i++) {
        result[tamanho1 + i] = s2[i];
    }

    result[tamanho1 + tamanho2] = '\0';

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
