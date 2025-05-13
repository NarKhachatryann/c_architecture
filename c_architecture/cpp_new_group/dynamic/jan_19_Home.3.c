#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int r1, int c1, int **matrix1, int r2, int c2, int **matrix2, int ***result) {
    *result = (int **)malloc(r1 * sizeof(int *));
    for(int i = 0; i < r1; ++i) {
        (*result)[i] = (int *) malloc(c2 * sizeof(int));
    }

    for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c2; ++j) {
            (*result)[i][j] = 0;
        }
    }

    for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c2; ++j) {
            for(int k = 0; k < c1; ++k) {
                (*result)[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    printf("Enter rows and columns for first matrix: ");
    int r1 = 0, c1 = 0;
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    int r2 = 0, c2 = 0;
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Error! column of first matrix not equal to row of second.\n");
        exit(0);
    }

    int **matrix1 = (int **)malloc(r1 * sizeof(int *));
    for (int i = 0; i < r1; i++) {
        matrix1[i] = (int *)malloc(c1 * sizeof(int));
    }

    int **matrix2 = (int **)malloc(r2 * sizeof(int *));
    for (int i = 0; i < r2; i++) {
        matrix2[i] = (int *)malloc(c2 * sizeof(int));
    }

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for(int i = 0; i < r2; ++i) {
        for(int j = 0; j < c2; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    int **result = NULL;
    multiplyMatrices(r1, c1, matrix1, r2, c2, matrix2, &result);

    for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c2; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    free(matrix1);
    free(matrix2);
    free(result);
    return 0;
}