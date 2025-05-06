#include <stdio.h>

int main() {

    int i;
    int casas_torre = 5;

    printf("Movimento da Torre:\n");
    for (i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    int casas_bispo = 5;
    int contador_bispo = 1;

    printf("\nMovimento do Bispo:\n");
    while (contador_bispo <= casas_bispo) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    int casas_rainha = 8;
    int contador_rainha = 1;

    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);

    int passos_para_baixo = 2;
    int passos_para_esquerda = 1;

    printf("\nMovimento do Cavalo:\n");

    for (int j = 0; j < passos_para_baixo; j++) {
        printf("Baixo\n");
        
    
        if (j == passos_para_baixo - 1) {
            int k = 0;
            do {
                printf("Esquerda\n");
                k++;
            } while (k < passos_para_esquerda);
        }
    }

    return 0;
}
