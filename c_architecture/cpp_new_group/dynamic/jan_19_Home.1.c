#include <stdio.h>
#include <stdlib.h>

void removeEvens(int **arr, int *size) {
    int *temp = (int*)malloc(*size * sizeof(int));
    int j = 0;
    for (int i = 0; i < *size; i++) {
        if ((*arr)[i] % 2 != 0) {
            temp[j] = (*arr)[i];
            j++;
        }
    }
    *size = j;
    *arr = (int*)realloc(*arr, j * sizeof(int));
    for (int i = 0; i < j; i++) {
        (*arr)[i] = temp[i];
    }
    free(temp);
}

int main() {
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int*)malloc(size * sizeof(int));
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    removeEvens(&arr, &size);

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}