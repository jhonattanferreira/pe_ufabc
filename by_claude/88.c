#include <stdio.h>
typedef struct tProduto {
    char nome[100];
    int codigo;
    float preco;
    int quantidade;
} Produto;
float calculaTotal(Produto *v, int n) {
    int i;
    float total = 0;
    for (i=0; i<n; i++) { total += v[i].preco * v[i].quantidade; }
    return total;
}
int buscaMaisCaro(Produto *v, int n) {
    int i, maisCaro=0;
    for (i=1; i<n; i++) {
        if (v[i].preco > v[maisCaro].preco) { maisCaro = i; }
    }
    return maisCaro;
}
int buscaCodigo(Produto *v, int n, int cod) {
    int i;
    for (i=0; i<n; i++) {
        if (v[i].codigo == cod) { return i; }
    }
    return -1;
}
int main()
{
    int i, n, busca;
    Produto produtos[1000];
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%s", produtos[i].nome);
        scanf("%d", &produtos[i].codigo);
        scanf("%f", &produtos[i].preco);
        scanf("%d", &produtos[i].quantidade);
    }
    scanf("%d", &busca);
    printf("Total: %.2f\n", calculaTotal(produtos, n));
    i = buscaMaisCaro(produtos, n);
    printf("Mais caro: %s - %.2f\n", produtos[i].nome, produtos[i].preco);
    i = buscaCodigo(produtos, n, busca);
    if (i >= 0) {
        printf("Encontrado: %s - %d - %.2f - %d\n", produtos[i].nome, produtos[i].codigo, produtos[i].preco, produtos[i].quantidade);
    } else { printf("Produto nao encontrado\n"); }
    return 0;
}
