#include <stdio.h>

typedef struct tAluno {
    char nome[100];
    int matricula;
    float nota;
} Aluno;

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

void trocar(Aluno *alunos, int i, int j) {

    Aluno aux = alunos[i];
    alunos[i] = alunos[j];
    alunos[j] = aux;
}

int precisaTrocar(Aluno a, Aluno b) {

    if (a.nota < b.nota) {
        return 1;
    }

    if (a.nota == b.nota && compara(a.nome, b.nome) > 0) {
        return 1;
    }

    return 0;
}

void bubbleSort(Aluno *alunos, int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (precisaTrocar(alunos[j], alunos[j + 1]) == 1) {
                trocar(alunos, j, j + 1);
            }
        }
    }
}

int main() {

    int n = 0;

    scanf("%d", &n);

    Aluno alunos[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", alunos[i].nome);
        scanf("%d", &alunos[i].matricula);
        scanf("%f", &alunos[i].nota);
    }

    bubbleSort(alunos, n);

    for (int i = 0; i < n; i++) {
        printf("%s - %d - %.2f\n", alunos[i].nome, alunos[i].matricula, alunos[i].nota);
    }

    return 0;
}
