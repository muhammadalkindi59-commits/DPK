
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A[4][4];
    int B[4][1];
    int C[4][1] = {0};

    // Mengatur angka random
    srand(time(NULL));

    // Mengisi matriks A (4x4) dengan angka random
    printf("Matriks A (4x4):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            A[i][j] = rand() % 10 + 1;
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    // Mengisi matriks B (4x1) dengan angka random
    printf("\nMatriks B (4x1):\n");
    for (int i = 0; i < 4; i++) {
        B[i][0] = rand() % 10 + 1;
        printf("%4d\n", B[i][0]);
    }

    // Proses perkalian matriks A x B
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 1; j++) {
            for (int k = 0; k < 4; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Menampilkan hasil perkalian
    printf("\nHasil Perkalian Matriks A x B (4x1):\n");
    for (int i = 0; i < 4; i++) {
        printf("%4d\n", C[i][0]);
    }

    return 0;
}
