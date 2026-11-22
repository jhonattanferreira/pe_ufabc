#include <stdio.h>

typedef struct tProduto {
    char nome[100];
    int codigo;
    float preco;
    int quantidade;
} Produto;

int main() {

    int n = 0;
    int busca = 0;
    int encontrado = -1;
    float total = 0;

    scanf("%d", &n);

    Produto produtos[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f %d", produtos[i].nome, &produtos[i].codigo, &produtos[i].preco, &produtos[i].quantidade);
    }

    scanf("%d", &busca);

    for (int i = 0; i < n; i++) {
        total += produtos[i].preco * produtos[i].quantidade;
    }

    printf("Total: %.2f\n", total);

    int maior = 0;

    for (int i = 1; i < n; i++) {
        if (produtos[i].preco > produtos[maior].preco) {
            maior = i;
        }
    }

    printf("Mais caro: %s - %.2f\n", produtos[maior].nome, produtos[maior].preco);

    for (int i = 0; i < n; i++) {
        if (produtos[i].codigo == busca) {
            encontrado = i;
            break;
        }
    }

    if (encontrado != -1) {
        printf("Encontrado: %s - %d - %.2f - %d\n", produtos[encontrado].nome, produtos[encontrado].codigo, produtos[encontrado].preco, produtos[encontrado].quantidade);
    } else {
        printf("Produto nao encontrado\n");
    }

    return 0;
}
