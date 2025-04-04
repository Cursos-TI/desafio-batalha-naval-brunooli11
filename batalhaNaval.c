#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    int tabuleiro[LINHAS][COLUNAS] = {0}; // Inicializa tudo com 0

    // Posicionando os navios (3 espaços cada)
    // Primeiro navio na horizontal (linha 3, colunas D a F)
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;

    // Segundo navio na vertical (coluna H, linhas 6 a 8)
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;

    // Exibir cabeçalho das colunas (A a J)
    printf("   A B C D E F G H I J\n");

    // Exibir tabuleiro
    for (int i = 0; i < LINHAS; i++) {
        printf("%2d ", i + 1); // Imprime o número da linha
        for (int j = 0; j < COLUNAS; j++) { 
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
