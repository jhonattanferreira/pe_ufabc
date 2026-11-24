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
int buscaProduto(Produto *v, int n, int cod) {
    int i;
    for (i=0; i<n; i++) {
        if (v[i].codigo == cod) { return i; }
    }
    return -1;
}
int buscaItem(ItemCarrinho *c, int k, int cod) {
    int i;
    for (i=0; i<k; i++) {
        if (c[i].codigo == cod) { return i; }
    }
    return -1;
}
int adicionaItem(ItemCarrinho *c, int k, int cod, int qtd) {
    int i = buscaItem(c, k, cod);
    if (i >= 0) {
        c[i].quantidade += qtd;
        return k;
    }
    c[k].codigo = cod; c[k].quantidade = qtd;
    return k + 1;
}
int main()
{
    int i, n, m, cod, qtd, k=0;
    float total = 0;
    Produto produtos[1000];
    ItemCarrinho carrinho[1000];
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%s", produtos[i].nome);
        scanf("%d", &produtos[i].codigo);
        scanf("%f", &produtos[i].preco);
    }
    scanf("%d", &m);
    for (i=0; i<m; i++) {
        scanf("%d", &cod);
        scanf("%d", &qtd);
        if (buscaProduto(produtos, n, cod) >= 0) {
            k = adicionaItem(carrinho, k, cod, qtd);
        }
    }
    for (i=0; i<k; i++) {
        int p = buscaProduto(produtos, n, carrinho[i].codigo);
        float subtotal = produtos[p].preco * carrinho[i].quantidade;
        total += subtotal;
        printf("%s - %d - %.2f\n", produtos[p].nome, carrinho[i].quantidade, subtotal);
    }
    printf("Total: %.2f\n", total);
    return 0;
}
