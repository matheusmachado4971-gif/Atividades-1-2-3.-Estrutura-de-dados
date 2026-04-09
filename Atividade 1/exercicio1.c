#include <stdio.h>

int main() {
    char p1[20], p2[20], p3[20];
    printf("Digite 3 palavras: ");
    scanf("%s %s %s", p1, p2, p3);
    printf("Palavras na ordem inversa: %s %s %s\n", p3, p2, p1);

    return 0;  
}