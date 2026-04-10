#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float media;
};

int main() {
    struct Aluno alunos[10], aprovados[10], reprovados[10];
    int nA = 0, nR = 0;

    for(int i = 0; i < 10; i++) 
        scanf("%s %d %f", alunos[i].nome, &alunos[i].matricula, &alunos[i].media);

    for(int i = 0; i < 10; i++) {
        if(alunos[i].media >= 5.0) aprovados[nA++] = alunos[i];
        else reprovados[nR++] = alunos[i];
    }

    printf("\nAPROVADOS:\n");
    for(int i = 0; i < nA; i++) printf("%s (%.1f)\n", aprovados[i].nome, aprovados[i].media);
    printf("\nREPROVADOS:\n");
    for(int i = 0; i < nR; i++) printf("%s (%.1f)\n", reprovados[i].nome, reprovados[i].media);
    return 0;
}