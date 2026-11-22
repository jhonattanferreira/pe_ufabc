#include <stdio.h>

typedef struct tAluno {
    char nome[100];
    int matricula;
    float nota;
} Aluno;

void imprimirNome(char *nome) {

    int i = 0;

    while (nome[i] != '\0') {

        if (i > 0 && nome[i] >= 'A' && nome[i] <= 'Z') {
            printf(" ");
        }

        printf("%c", nome[i]);
        i++;
    }
}

int main() {

    int n = 0;
    float media = 0;

    scanf("%d", &n);

    Aluno alunos[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", alunos[i].nome);
        scanf("%d", &alunos[i].matricula);
        scanf("%f", &alunos[i].nota);
    }

    for (int i = 0; i < n; i++) {
        imprimirNome(alunos[i].nome);
        printf(" - %d - %.2f\n", alunos[i].matricula, alunos[i].nota);
    }

    for (int i = 0; i < n; i++) {
        media += alunos[i].nota;
    }

    media = media / n;

    printf("Media: %.2f\n", media);

    int melhor = 0;

    for (int i = 1; i < n; i++) {
        if (alunos[i].nota > alunos[melhor].nota) {
            melhor = i;
        }
    }

    printf("Melhor aluno: ");
    imprimirNome(alunos[melhor].nome);
    printf(" - %.2f\n", alunos[melhor].nota);

    return 0;
}
