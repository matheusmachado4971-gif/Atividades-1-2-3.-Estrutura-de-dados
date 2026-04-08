# Atividades-1-2-3.-Estrutura-de-dados

Atividade Avaliativa 1 (valor 1,0)

1. Faça um programa que lê três palavras do teclado e imprime as três palavras na ordem inversa.

#include <stdio.h>

int main() {
char p1[20], p2[20], p3[20];

printf("Digite 3 palavras: ");
scanf("%19s %19s %19s", p1, p2, p3);

printf("Ordem inversa: %s %s %s\n", p3, p2, p1);

return 0;
}

2. Faça um programa que cria um vetor com 5 elementos inteiros, lê 5 números do teclado, armazena os números no vetor e imprime o vetor na ordem inversa.

   #include <stdio.h>

int main() {
    int v[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Vetor na ordem inversa: ");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
