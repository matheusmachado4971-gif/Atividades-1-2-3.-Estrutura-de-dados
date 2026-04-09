#include <stdio.h>

int main()
{
    int v[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &v[i]);
    }
    printf("Vetor na ordem inversa: ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}