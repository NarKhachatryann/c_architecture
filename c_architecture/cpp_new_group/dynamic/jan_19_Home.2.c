#include <stdio.h>
#include <stdlib.h>

void transposeMatrix(int rows, int cols, int **matrix, int ***result) {
    *result = (int **)malloc(cols * sizeof(int *));
    for (int i = 0; i < cols; ++i) {
        (*result)[i] = (int *)malloc(rows * sizeof(int));
    }

    for(int i = 0; i < cols; ++i) {
        for(int j = 0; j < rows; ++j) {
            (*result)[i][j] = matrix[j][i];
        }
    }
}

int main() {
    int rows = 0, cols = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; ++i) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int **result = NULL;
    transposeMatrix(rows, cols, matrix, &result);

    printf("The transpose of the matrix is:\n");
    for(int i = 0; i < cols; ++i) {
        for(int j = 0; j < rows; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    free(matrix);
    free(result);
    return 0;
}