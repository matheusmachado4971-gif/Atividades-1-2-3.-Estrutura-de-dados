#include <stdio.h>

int main() {
    int v[3], m[3][3], res[3] = {0, 0, 0};
    for(int i = 0; i < 3; i++) scanf("%d", &v[i]);
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) scanf("%d", &m[i][j]);

    for(int j = 0; j < 3; j++)
        for(int i = 0; i < 3; i++) res[j] += v[i] * m[i][j];

    for(int i = 0; i < 3; i++) printf("%d ", res[i]);
    return 0;
}