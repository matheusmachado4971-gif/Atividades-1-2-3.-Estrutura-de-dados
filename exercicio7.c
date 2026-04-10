#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[30];
    char autor[15];
    int ano;
};

int main() {
    struct Livro livros[5];
    char busca[30];

    for(int i = 0; i < 5; i++) {
        printf("Livro %d:\n", i+1);
        printf("Titulo: ");
        scanf("%s", livros[i].titulo);
        printf("Autor: ");
        scanf("%s", livros[i].autor);
        printf("Ano: ");
        scanf("%d", &livros[i].ano);
    }
    printf("\nDigite o titulo para buscar: ");
    scanf("%s", busca);

    for(int i = 0; i < 5; i++) {
        if(strcmp(livros[i].titulo, busca) == 0) {
            printf("\nEncontrado:\n");
            printf("Titulo: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n", livros[i].ano);
        }
    }

    return 0;
}
