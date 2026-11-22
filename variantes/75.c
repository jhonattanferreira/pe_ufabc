#include <stdio.h>
#include <string.h>

int comprimento(char *s) {

    return strlen(s);
}

int main() {

    char s[1001];
    int result = 0;

    scanf("%s", s);

    result = comprimento(s);

    printf("%d", result);

    return 0;
}
