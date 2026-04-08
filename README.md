# Atividades-1-2-3.-Estrutura-de-dados

Atividade Avaliativa 1 (valor 1,0)

Faça um programa que lê três palavras do teclado e imprime as três palavras na ordem inversa.
#include <stdio.h>

int main() {
char p1[20], p2[20], p3[20];

printf("Digite 3 palavras: ");
scanf("%19s %19s %19s", p1, p2, p3);

printf("Ordem inversa: %s %s %s\n", p3, p2, p1);

return 0;
}
