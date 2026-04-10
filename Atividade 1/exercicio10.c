#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

Aluno* maiorNota(Aluno *ptr, int n) {
    Aluno *melhor = ptr;
    for(int i = 1; i < n; i++) {
        if((ptr + i)->nota > melhor->nota) melhor = (ptr + i);
    }
    return melhor;
}

int main() {
    int n;
    scanf("%d", &n);
    Aluno *alunos = (Aluno*) malloc(n * sizeof(Aluno));

    for(int i = 0; i < n; i++) 
        scanf("%s %f", (alunos + i)->nome, &(alunos + i)->nota);

    Aluno *res = maiorNota(alunos, n);
    printf("Maior Nota: %s - %.1f\n", res->nome, res->nota);

    free(alunos);
    return 0;
}
