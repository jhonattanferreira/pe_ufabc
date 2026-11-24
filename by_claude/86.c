#include <stdio.h>
#include <string.h>
typedef struct tAluno {
    char nome[100];
    int matricula;
    float nota;
} Aluno;
void troca(Aluno *v, int i, int j) {
    Aluno aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}
int vemDepois(Aluno a, Aluno b) {
    if (a.nota < b.nota) { return 1; }
    if (a.nota == b.nota && strcmp(a.nome, b.nome) > 0) { return 1; }
    return 0;
}
void bubbleSort(Aluno *v, int n) {
    int i, j;
    for (i=0; i<n-1; i++) {
        for (j=0; j<n-1-i; j++) {
            if (vemDepois(v[j], v[j+1])) { troca(v, j, j+1); }
        }
    }
}
int main()
{
    int i, n;
    Aluno alunos[1000];
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%s", alunos[i].nome);
        scanf("%d", &alunos[i].matricula);
        scanf("%f", &alunos[i].nota);
    }
    bubbleSort(alunos, n);
    for (i=0; i<n; i++) {
        printf("%s - %d - %.2f\n", alunos[i].nome, alunos[i].matricula, alunos[i].nota);
    }
    return 0;
}
