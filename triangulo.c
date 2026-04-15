#include <stdio.h>

int main() {
    int linhas, i, j;

    printf("Digite o número de linhas para o triângulo: ");
    scanf("%d", &linhas);

    for (i = 1; i <= linhas; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}