#include <stdio.h>

int checarImparPar(int num) {
    if (num % 2 == 0) {
        return 1;  // Número Par (divisível por 2)
    } else {
        return 0;  // Número Ímpar (divisível por ele mesmo e 0)
    }
}

int main() {
    int numeroInicial, numeroFinal;
    int contadordePares = 0;
    
    printf("-> Digite o seu numero inicial: ");
    scanf("%d", &numeroInicial);
    
    printf("-> Digite o numero final: ");
    scanf("%d", &numeroFinal);
    
    printf("\n===== Resultados ===== \n\n");
    
    for (int i = numeroInicial; i <= numeroFinal; i++) {
        int resultado = checarImparPar(i);
        printf("%d ", i);
        
        if (resultado == 1) {
            printf("- Par\n");
            contadordePares++;
        } else {
            printf("- Impar\n");
        }
    }
    
    printf("\nQuantidade de numeros pares encontrados foi de: %d\n \n", contadordePares);
    
    printf("===== Fim do Programa ===== \n\n");
    
    printf("Feito por Gustavo R.");
    
    return 0;
}
