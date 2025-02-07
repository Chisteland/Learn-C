//*programa C para multiplicar duas matrizes*/
#include <stdio.h>

#define MAX 10

void lerMatriz(int matriz[MAX][MAX], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            scanf("%d", &matriz[i][j]);
}

void multiplicarMatrizes(int a[MAX][MAX], int b[MAX][MAX], int resultado[MAX][MAX], int m, int n, int q) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < n; k++) {
                resultado[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void imprimirMatriz(int matriz[MAX][MAX], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++)
            printf("%d\t", matriz[i][j]);
        printf("\n");
    }
}

int main() {
    int m, n, p, q;
    int um[MAX][MAX], b[MAX][MAX], mul[MAX][MAX];

    printf("Digite o número de linhas e colunas da primeira matriz\n");
    scanf("%d%d", &m, &n);
    printf("Digite os elementos da primeira matriz\n");
    lerMatriz(um, m, n);

    printf("Digite o número de linhas e colunas da segunda matriz\n");
    scanf("%d%d", &p, &q);
    if (n != p) {
        printf("Matrizes com entrada não podem ser multiplicadas por multiplicação.\n");
        return 1;
    }

    printf("Digite os elementos da segunda matriz\n");
    lerMatriz(b, p, q);

    multiplicarMatrizes(um, b, mul, m, n, q);

    printf("Produto das matrizes:\n");
    imprimirMatriz(mul, m, q);

    return 0;
}
