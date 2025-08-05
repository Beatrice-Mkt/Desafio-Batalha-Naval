 #include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    int tabuleiro[LINHAS][COLUNAS] = {0};

    // Posição inicial dos navios (definida manualmente)
    int x_horizontal = 2, y_horizontal = 4;  // Navio horizontal começa em (2,4)
    int x_vertical = 6, y_vertical = 1;      // Navio vertical começa em (6,1)

    // Posiciona o navio horizontal de tamanho 3
    for (int i = 0; i < 3; i++) {
        tabuleiro[x_horizontal][y_horizontal + i] = 1;
    }

    // Posiciona o navio vertical de tamanho 4
    for (int i = 0; i < 4; i++) {
        tabuleiro[x_vertical + i][y_vertical] = 2;
    }

    // Exibe as coordenadas do navio horizontal
    printf("Coordenadas do Navio Horizontal (tamanho 3):\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", x_horizontal, y_horizontal + i);
    }

    // Exibe as coordenadas do navio vertical
    printf("\nCoordenadas do Navio Vertical (tamanho 4):\n");
    for (int i = 0; i < 4; i++) {
        printf("(%d, %d)\n", x_vertical + i, y_vertical);
    }

    return 0;
}
