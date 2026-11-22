#include <stdbool.h>
#include <stdio.h>

typedef struct tProduto {
    char nome[100];
    char categoria[100];
    float preco;
    int quantidade;
} Produto;

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

    int n = 0;
    bool tem_duplicado = false;

    scanf("%d", &n);

    Produto produtos[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", produtos[i].nome);
        scanf("%s", produtos[i].categoria);
        scanf("%f", &produtos[i].preco);
        scanf("%d", &produtos[i].quantidade);
    }

    for (int i = 0; i < n; i++) {

        tem_duplicado = false;

        for (int j = i - 1; j >= 0; j--) {
            if (compara(produtos[j].categoria, produtos[i].categoria) == 0) {
                tem_duplicado = true;
            }
        }

        if (tem_duplicado == false) {

            float total = 0;

            for (int j = 0; j < n; j++) {
                if (compara(produtos[j].categoria, produtos[i].categoria) == 0) {
                    total += produtos[j].preco * produtos[j].quantidade;
                }
            }

            printf("%s - %.2f\n", produtos[i].categoria, total);
        }
    }

    return 0;
}
