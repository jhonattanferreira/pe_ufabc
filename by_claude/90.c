#include <stdio.h>
#include <string.h>
typedef struct tProduto {
    char nome[100];
    char categoria[100];
    float preco;
    int quantidade;
} Produto;
int categoriaRepetiu(Produto *v, int i) {
    int j;
    for (j=0; j<i; j++) {
        if (strcmp(v[j].categoria, v[i].categoria) == 0) { return 1; }
    }
    return 0;
}
float totalCategoria(Produto *v, int n, char *categoria) {
    int j;
    float total = 0;
    for (j=0; j<n; j++) {
        if (strcmp(v[j].categoria, categoria) == 0) { total += v[j].preco * v[j].quantidade; }
    }
    return total;
}
int main()
{
    int i, n;
    Produto produtos[1000];
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%s", produtos[i].nome);
        scanf("%s", produtos[i].categoria);
        scanf("%f", &produtos[i].preco);
        scanf("%d", &produtos[i].quantidade);
    }
    for (i=0; i<n; i++) {
        if (!categoriaRepetiu(produtos, i)) {
            printf("%s - %.2f\n", produtos[i].categoria, totalCategoria(produtos, n, produtos[i].categoria));
        }
    }
    return 0;
}
