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

int combina(char abertura, char fechamento) {
    return (abertura == '(' && fechamento == ')') ||
           (abertura == '{' && fechamento == '}') ||
           (abertura == '[' && fechamento == ']');
}

//Continuar a partir da linha 51 do desafio1//
int expressaoValida(char str[]) {
    Pilha p;
    inicializar(&p);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c == '(' || c == '{' || c == '[') {
            push(&p, c);
        } else if (c == ')' || c == '}' || c == ']') {
            char topo = pop(&p);

            if (topo == '\0' || !combina(topo, c)) {
                return 0;
            }
        }
    }

    return isEmpty(&p);
}

//Continuar a partir da linha 73 //