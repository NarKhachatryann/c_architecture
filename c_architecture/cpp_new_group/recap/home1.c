#include <stdio.h>
#include <stdlib.h>

void Sort(int *array, int size) {
    int j = size - 1;
    for(int i = 0; i < size / 2; ++i) {
        if(array[i] < array[j]) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
        j--;
    }
}


int main() {
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *array = (int *)malloc(size * sizeof(int));
    if(array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }

    Sort(array, size);
    printf("The sorted array is: ");
    for(int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;
}