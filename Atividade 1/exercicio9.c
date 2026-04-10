#include <stdio.h>

int ordenar(int *a, int *b, int *c) {
    int temp, iguais = (*a == *b && *b == *c) ? 1 : 0;
    if(*a > *b) { temp = *a; *a = *b; *b = temp; }
    if(*a > *c) { temp = *a; *a = *c; *c = temp; }
    if(*b > *c) { temp = *b; *b = *c; *c = temp; }
    return iguais;
}

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int res = ordenar(&x, &y, &z);
    printf("Valores: %d, %d, %d | Iguais: %d\n", x, y, z, res);
    return 0;
}