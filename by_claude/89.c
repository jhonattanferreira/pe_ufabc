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

int buscarProduto(Produto *produtos, int n, int codigo) {

    for (int i = 0; i < n; i++) {
        if (produtos[i].codigo == codigo) {
            return i;
        }
    }

    return -1;
}

int buscarItem(ItemCarrinho *carrinho, int quantidade, int codigo) {

    for (int i = 0; i < quantidade; i++) {
        if (carrinho[i].codigo == codigo) {
            return i;
        }
    }

    return -1;
}

int adicionarItem(ItemCarrinho *carrinho, int quantidade, int codigo, int qtd) {

    int ja_tem = buscarItem(carrinho, quantidade, codigo);

    if (ja_tem != -1) {
        carrinho[ja_tem].quantidade += qtd;
        return quantidade;
    }

    carrinho[quantidade].codigo = codigo;
    carrinho[quantidade].quantidade = qtd;

    return quantidade + 1;
}

int main() {

    int n = 0;
    int m = 0;
    int quantidade = 0;
    float total = 0;

    scanf("%d", &n);

    Produto produtos[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", produtos[i].nome);
        scanf("%d", &produtos[i].codigo);
        scanf("%f", &produtos[i].preco);
    }

    scanf("%d", &m);

    ItemCarrinho carrinho[m];

    for (int i = 0; i < m; i++) {

        int codigo = 0;
        int qtd = 0;

        scanf("%d", &codigo);
        scanf("%d", &qtd);

        if (buscarProduto(produtos, n, codigo) != -1) {
            quantidade = adicionarItem(carrinho, quantidade, codigo, qtd);
        }
    }

    for (int i = 0; i < quantidade; i++) {

        int j = buscarProduto(produtos, n, carrinho[i].codigo);
        float subtotal = produtos[j].preco * carrinho[i].quantidade;

        total += subtotal;

        printf("%s - %d - %.2f\n", produtos[j].nome, carrinho[i].quantidade, subtotal);
    }

    printf("Total: %.2f\n", total);

    return 0;
}
