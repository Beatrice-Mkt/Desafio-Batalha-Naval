 #include <stdio.h>
#include <stdlib.h>
#define TAM 10

// Função para imprimir a matriz
void imprimirMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // Matrizes das habilidades
    int cone[TAM][TAM] = {0};
    int cruz[TAM][TAM] = {0};
    int octaedro[TAM][TAM] = {0};

    // ----------------------------
    // 1. Cone (base em (2,4))
    int baseX = 2, baseY = 4;
    for (int i = 0; i <= baseX; i++) {
        int largura = baseX - i;  // controla o espalhamento lateral
        for (int j = baseY - largura; j <= baseY + largura; j++) {
            if (i < TAM && j >= 0 && j < TAM) {
                cone[i][j] = 1;
            }
        }
    }

    // ----------------------------
    // 2. Cruz (centro em (5,5))
    int centroX = 5, centroY = 5;
    for (int i = 0; i < TAM; i++) {
        cruz[centroX][i] = 1;  // linha horizontal
        cruz[i][centroY] = 1;  // linha vertical
    }

    // ----------------------------
    // 3. Octaedro (centro em (4,4), alcance 2)
    int cx = 4, cy = 4, alcance = 2;
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (abs(i - cx) + abs(j - cy) <= alcance) {
                octaedro[i][j] = 1;
            }
        }
    }

    // ----------------------------
    // Imprimir os resultados
    printf("Habilidade: Cone\n");
    imprimirMatriz(cone);

    printf("Habilidade: Cruz\n");
    imprimirMatriz(cruz);

    printf("Habilidade: Octaedro\n");
    imprimirMatriz(octaedro);

    return 0;
}
