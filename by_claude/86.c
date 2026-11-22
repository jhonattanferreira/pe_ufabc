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

int main() {

    int n = 0;
    Aluno aux;

    scanf("%d", &n);

    Aluno alunos[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", alunos[i].nome);
        scanf("%d", &alunos[i].matricula);
        scanf("%f", &alunos[i].nota);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {

            int trocar = 0;

            if (alunos[j].nota < alunos[j + 1].nota) {
                trocar = 1;
            } else if (alunos[j].nota == alunos[j + 1].nota) {
                if (compara(alunos[j].nome, alunos[j + 1].nome) > 0) {
                    trocar = 1;
                }
            }

            if (trocar == 1) {
                aux = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = aux;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s - %d - %.2f\n", alunos[i].nome, alunos[i].matricula, alunos[i].nota);
    }

    return 0;
}
