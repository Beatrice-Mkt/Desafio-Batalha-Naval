 #include <stdio.h>

#define TAMANHO 10
#define OCUPADO 3
#define LIVRE 0

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // 1. Navio Horizontal (tamanho 3) começando na linha 1, coluna 2
    int xH = 1, yH = 2;
    for (int i = 0; i < 3; i++) {
        tabuleiro[xH][yH + i] = OCUPADO;
    }

    // 2. Navio Vertical (tamanho 4) começando na linha 5, coluna 5
    int xV = 5, yV = 5;
    for (int i = 0; i < 4; i++) {
        tabuleiro[xV + i][yV] = OCUPADO;
    }

    // 3. Navio Diagonal principal (↘) tamanho 3, começando em (0,0)
    int xD1 = 0, yD1 = 0;
    for (int i = 0; i < 3; i++) {
        tabuleiro[xD1 + i][yD1 + i] = OCUPADO;
    }

    // 4. Navio Diagonal secundária (↙) tamanho 2, começando em (2,7)
    int xD2 = 2, yD2 = 7;
    for (int i = 0; i < 2; i++) {
        tabuleiro[xD2 + i][yD2 - i] = OCUPADO;
    }

    // 5. Exibir o tabuleiro completo
    printf("Tabuleiro 10x10:\n\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
