#include <stdio.h>

int main() {
    int m[3][3], id[3][3], res[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) scanf("%d", &m[i][j]);

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) id[i][j] = (i == j) ? 1 : 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            res[i][j] = 0;
            for(int k = 0; k < 3; k++) res[i][j] += m[i][k] * id[k][j];
        }
    }

    printf("Matriz Identidade:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) printf("%d ", id[i][j]);
        printf("\n");
    }
    printf("Resultado da Multiplicacao (Prova):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) printf("%d ", res[i][j]);
        printf("\n");
    }
    return 0;
}