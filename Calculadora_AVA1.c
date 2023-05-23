#include <stdio.h>

int main() {
    int primeiro, segundo;
    int soma, sub, multi;
    float div;

    printf("-> Digite o primeiro numero: ");
    scanf("%d", &primeiro);

    printf("-> Digite o segundo numero: ");
    scanf("%d", &segundo);

    soma = primeiro + segundo;
    sub = primeiro - segundo;
    multi = primeiro * segundo;
    div = (float)primeiro / segundo;

    printf("\n===== Resultados ===== \n\n");
	
	printf("Primeiro Numero + Segundo Numero: %d\n", soma);
    
    printf("Primeiro Numero - Segundo Numero: %d\n", sub);
    
    printf("Primeiro Numero x Segundo Numero: %d\n", multi);
    
    printf("Primeiro Numero / Segundo Numero: %.2f\n \n", div);
    
    printf("===== Fim do Programa ===== \n\n");
    
    printf("Feito por Gustavo R.");

    return 0;
}
