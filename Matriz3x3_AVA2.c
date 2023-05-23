#include <stdio.h>

int main() {
    int matriz[3][3];
    int x, y;

    printf("-> Informe os elementos da Matriz:\n");
    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            printf("Informe o elemento [%d][%d]: ", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }

    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            matriz[x][y] *= 5;
        }
    }

    printf("\n===== Matriz multiplicada por cinco ===== \n\n");
    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            printf("%d ", matriz[x][y]);
        }
        printf("\n");
    }
    
    printf("\n===== Fim do Programa ==== \n\n");

    printf("Feito por Gustavo R.");

    return 0;
}
