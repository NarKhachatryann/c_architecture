#include <stdio.h>
#include <stdlib.h>

int prime(int** matrix, int size) {
    int count = 0;
    for(int i = 0; i < size; ++i) {
        int count2 = 0;
        for(int j = 0; j < size; ++j) {
            if(matrix[i][j] % 2 != 0) {
                count2++;
            }
            if(count2 == 2) {
                count++;
                break;
            }
        }
    }
    return count;
}

void foo(int** matrix,)

int main() {
    int size = 0;
    printf("Enter size of Matrix: ");
    scanf("%d",&size);

    int** matrix = (int**) malloc(sizeof(int) * size);
    for(int i = 0; i < size; ++i) {
        matrix[i] = (int*) malloc(sizeof(int) * size);
    }

    printf("Enter Matrix elements:\n");
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Prime numbers is in %d rows\n", prime(matrix,size));

    free(matrix);
    return 0;
}