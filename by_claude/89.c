#include <stdio.h>

typedef struct tProduto {
    char nome[100];
    int codigo;
    float preco;
} Produto;

typedef struct tItemCarrinho {
    int codigo;
    int quantidade;
} ItemCarrinho;

int main() {

    int n = 0;
    int m = 0;
    int quantidade = 0;
    float total = 0;

    scanf("%d", &n);

    Produto produtos[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", produtos[i].nome, &produtos[i].codigo, &produtos[i].preco);
    }

    scanf("%d", &m);

    ItemCarrinho carrinho[m];

    for (int i = 0; i < m; i++) {

        int codigo = 0;
        int qtd = 0;
        int existe = 0;
        int ja_tem = 0;

        scanf("%d %d", &codigo, &qtd);

        for (int j = 0; j < n; j++) {
            if (produtos[j].codigo == codigo) {
                existe = 1;
            }
        }

        if (existe == 0) {
            continue;
        }

        for (int j = 0; j < quantidade; j++) {
            if (carrinho[j].codigo == codigo) {
                carrinho[j].quantidade += qtd;
                ja_tem = 1;
            }
        }

        if (ja_tem == 0) {
            carrinho[quantidade].codigo = codigo;
            carrinho[quantidade].quantidade = qtd;
            quantidade++;
        }
    }

    for (int i = 0; i < quantidade; i++) {
        for (int j = 0; j < n; j++) {
            if (produtos[j].codigo == carrinho[i].codigo) {

                float subtotal = produtos[j].preco * carrinho[i].quantidade;
                total += subtotal;

                printf("%s - %d - %.2f\n", produtos[j].nome, carrinho[i].quantidade, subtotal);
                break;
            }
        }
    }

    printf("Total: %.2f\n", total);

    return 0;
}
