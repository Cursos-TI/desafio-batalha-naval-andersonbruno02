#include <stdio.h>

void aplicarHabilidade(int tabuleiro[10][10], int habilidade[3][5], int x, int y) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (habilidade[i][j] == 1) {
                tabuleiro[x + i][y + j] = 1;
            }
        }
    }
}

int main() {
    // Nível Mestre - Habilidades Especiais com Matrizes
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro 10x10 com 0

    // Matrizes de habilidades
    int cone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };

    int cruz[3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };

    int octaedro[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Aplica as habilidades no tabuleiro
    aplicarHabilidade(tabuleiro, cone, 1, 2);
    aplicarHabilidade(tabuleiro, cruz, 4, 3);
    aplicarHabilidade(tabuleiro, octaedro, 7, 1);

    // Exibe o tabuleiro com as áreas afetadas
    printf("Tabuleiro com habilidades especiais:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}