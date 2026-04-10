#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No {
    char dado;
    struct No *prox;
} No;

typedef struct {
    No *topo;
} Pilha;

void inicializar(Pilha *p) {
    p->topo = NULL;
}

int isEmpty(Pilha *p) {
    return p->topo == NULL;
}

void push(Pilha *p, char c) {
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro de alocacao de memoria.\n");
        exit(1);
    }

    novo->dado = c;
    novo->prox = p->topo;
    p->topo = novo;
}
//continuar a partir da linha 32 do desafio2//
char pop(Pilha *p) {
    if (isEmpty(p)) {
        return '\0';
    }

    No *temp = p->topo;
    char valor = temp->dado;
    p->topo = temp->prox;
    free(temp);

    return valor;
}
//continuar a partir da linha 45 do desafio2//

int main() {
    char texto[200];
    Pilha p;

    inicializar(&p);

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = '\0';

    for (int i = 0; texto[i] != '\0'; i++) {
        push(&p, texto[i]);
    }

    printf("String invertida: ");
    while (!isEmpty(&p)) {
        printf("%c", pop(&p));
    }
    printf("\n");

    return 0;
}
// Finalizado //