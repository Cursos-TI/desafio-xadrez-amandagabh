#include <stdio.h>

// ================== TORRE ===================
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// ================== RAINHA ==================
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ================== BISPO ===================
// Parte recursiva
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Parte com loops aninhados
void moverBispoComLoops(int passos_verticais, int passos_horizontais) {
    printf("\nMovimento do Bispo com Loops Aninhados:\n");
    for (int i = 0; i < passos_verticais; i++) {
        for (int j = 0; j < passos_horizontais; j++) {
            if (i == j) {
                printf("Cima Direita\n");
            }
        }
    }
}

// ================== CAVALO ===================
void moverCavalo() {
    int movimentos_verticais = 2;
    int movimentos_horizontais = 1;

    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i <= movimentos_verticais; i++) {
        for (int j = 0; j <= movimentos_horizontais; j++) {

            // Condição para simular apenas o movimento "L" (2 cima, 1 direita)
            if (i == 2 && j == 1) {
                for (int k = 0; k < 2; k++) {
                    printf("Cima\n");
                }
                printf("Direita\n");
                break;
            } else {
                continue;
            }
        }
    }
}

// ================== MAIN ===================
int main() {
    // Quantidade de casas para cada peça
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // =================== TORRE ===================
    printf("Movimento da Torre:\n");
    moverTorre(casas_torre);

    // =================== BISPO (recursivo) ===================
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casas_bispo);

    // =================== BISPO (com loops) ===================
    moverBispoComLoops(5, 5);

    // =================== RAINHA ===================
    printf("\nMovimento da Rainha:\n");
    moverRainha(casas_rainha);

    // =================== CAVALO ===================
    moverCavalo();

    return 0;
}
