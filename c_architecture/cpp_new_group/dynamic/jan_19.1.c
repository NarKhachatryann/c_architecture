#include <stdio.h>
#include <stdlib.h>

void removeNegativeRows(int ***matrix, int *rows, int cols) {
    int** new_ptr = (int**) malloc(sizeof(int*) * *rows);
    int newRows = 0;
    for (int i = 0; i < *rows; ++i) {
        int hasNegative = 0;
        for (int j = 0; j < cols; ++j) {
            if ((*matrix)[i][j] < 0) {
                hasNegative = 1;
                break;
            }
        }

        if (!hasNegative) {
            new_ptr[newRows] = (*matrix)[i];
            newRows++;
        } else {
            free((*matrix)[i]);
        }
    }
    free(*matrix);
    *matrix = new_ptr;
    *rows = newRows;
}

int main() {
    int rows = 0, cols = 0;
    printf("Enter the size of the matrix RowsxCols: ");
    scanf("%d %d", &rows, &cols);

    int** matrix = (int**)malloc(rows * sizeof(int*));
    for(int i = 0; i < rows; ++i) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    printf("Enter the elements of the matrix: \n");
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    removeNegativeRows(&matrix, &rows, cols);

    printf("The matrix after removing rows with negative elements: \n");
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < rows; ++i) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}