#include <stdio.h>

typedef struct tAluno {
    char nome[100];
    int matricula;
    float nota;
} Aluno;

int main() {

    int n = 0;
    int busca = 0;
    int encontrado = -1;

    scanf("%d", &n);

    Aluno alunos[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", alunos[i].nome, &alunos[i].matricula, &alunos[i].nota);
    }

    scanf("%d", &busca);

    for (int i = 0; i < n; i++) {
        if (alunos[i].matricula == busca) {
            encontrado = i;
            break;
        }
    }

    if (encontrado != -1) {
        printf("%s - %d - %.2f\n", alunos[encontrado].nome, alunos[encontrado].matricula, alunos[encontrado].nota);
    } else {
        printf("Aluno nao encontrado\n");
    }

    return 0;
}
