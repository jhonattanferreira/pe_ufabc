#include <stdio.h>

int comprimento(char *s) {

    int tamanho = 0;

    while (s[tamanho] != '\0') {
        tamanho++;
    }

    return tamanho;
}

int main() {

    char s[1001];
    int result = 0;

    scanf("%s", s);

    result = comprimento(s);

    printf("%d", result);

    return 0;
}
