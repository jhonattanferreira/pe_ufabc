#include <stdio.h>

int compara(char *s1, char *s2) {

    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
        i++;
    }

    return s1[i] - s2[i];
}

int main() {

    char s1[1001];
    char s2[1001];
    int result = 0;

    scanf("%s", s1);
    scanf("%s", s2);

    result = compara(s1, s2);

    if (result == 0) {
        printf("IGUAL");
    } else if (result < 0) {
        printf("MENOR");
    } else {
        printf("MAIOR");
    }

    return 0;
}
