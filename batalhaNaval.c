#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro[5][5] = {0}; // Inicializa o tabuleiro com 0

    // Posiciona navio horizontalmente
    tabuleiro[1][1] = 1;
    tabuleiro[1][2] = 1;
    tabuleiro[1][3] = 1;

    // Posiciona navio verticalmente
    tabuleiro[2][2] = 1;
    tabuleiro[3][2] = 1;
    tabuleiro[4][2] = 1;

    // Exibe as coordenadas dos navios
    printf("Coordenadas dos navios:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("Navio na posicao: [%d][%d]\n", i, j);
            }
        }
    }

    return 0;
}