#include <stdio.h>
#include <stdlib.h>
#define size 3

int main() {
    int** matrix = (int**)malloc(size * sizeof(int*));
    for(int i = 0; i < size; i++) {
        matrix[i] = (int*)malloc(size * sizeof(int));
    }

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
}