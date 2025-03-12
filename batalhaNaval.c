#include <stdio.h>

int main() {
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro 10x10 com 0

    // Posiciona navios horizontais
    for (int j = 1; j <= 3; j++) {
        tabuleiro[2][j] = 3;
        tabuleiro[5][j + 4] = 3;
    }

    // Posiciona navio vertical
    for (int i = 3; i <= 6; i++) {
        tabuleiro[i][7] = 3;
    }

    // Posiciona navio na diagonal
    for (int i = 0; i < 4; i++) {
        tabuleiro[i + 6][i + 1] = 3;
    }

    // Exibe o tabuleiro completo
    printf("Tabuleiro 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}