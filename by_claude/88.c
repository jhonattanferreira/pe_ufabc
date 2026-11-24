#include <stdio.h>

typedef struct tProduto {
    char nome[100];
    int codigo;
    float preco;
    int quantidade;
} Produto;

float calcularTotal(Produto *produtos, int n) {

    float total = 0;

    for (int i = 0; i < n; i++) {
        total += produtos[i].preco * produtos[i].quantidade;
    }

    return total;
}

int buscarMaior(Produto *produtos, int n) {

    int maior = 0;

    for (int i = 1; i < n; i++) {
        if (produtos[i].preco > produtos[maior].preco) {
            maior = i;
        }
    }

    return maior;
}

int buscarCodigo(Produto *produtos, int n, int busca) {

    for (int i = 0; i < n; i++) {
        if (produtos[i].codigo == busca) {
            return i;
        }
    }

    return -1;
}

int main() {

    int n = 0;
    int busca = 0;
    int encontrado = -1;
    int maior = 0;
    float total = 0;

    scanf("%d", &n);

    Produto produtos[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", produtos[i].nome);
        scanf("%d", &produtos[i].codigo);
        scanf("%f", &produtos[i].preco);
        scanf("%d", &produtos[i].quantidade);
    }

    scanf("%d", &busca);

    total = calcularTotal(produtos, n);

    printf("Total: %.2f\n", total);

    maior = buscarMaior(produtos, n);

    printf("Mais caro: %s - %.2f\n", produtos[maior].nome, produtos[maior].preco);

    encontrado = buscarCodigo(produtos, n, busca);

    if (encontrado != -1) {
        printf("Encontrado: %s - %d - %.2f - %d\n", produtos[encontrado].nome, produtos[encontrado].codigo, produtos[encontrado].preco, produtos[encontrado].quantidade);
    } else {
        printf("Produto nao encontrado\n");
    }

    return 0;
}
