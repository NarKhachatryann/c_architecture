#include <stdio.h>
#include <stdlib.h>

int binarySearch(int* arr, int size, int num) {
    for(int i = 0; i < size; ++i) {
        if(arr[i] == num) {
            return i;
        }
    }
}

int main() {
    int num = 0;
    int size = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int* arr = (int*)malloc(size * sizeof(int));
    printf("Enter elements of array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);

    int index = binarySearch(arr, size, num);
    printf("Index of %d is %d\n", num, index + 1);

    free(arr);
}