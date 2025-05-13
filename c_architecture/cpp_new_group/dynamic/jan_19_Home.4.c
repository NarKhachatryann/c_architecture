#include <stdio.h>
#include <stdlib.h>

int diagonalSum(int n, int **matrix) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (i == j) {
                sum += matrix[i][j];
            }
            if(i + j == n - 1) {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int main() {
    printf("Enter the size of the matrix: ");
    int size = 0;
    scanf("%d", &size);

    int **matrix = (int **)malloc(size * sizeof(int *));
    for (int i = 0; i < size; ++i) {
        matrix[i] = (int *)malloc(size * sizeof(int));
    }

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The sum of the diagonal elements is: %d\n", diagonalSum(size, matrix));

    free(matrix);
    return 0;
}