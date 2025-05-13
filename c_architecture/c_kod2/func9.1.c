#include <stdio.h>

void swap(int arr[], int size) {
    int size1 = size - 1;

    for(int i = 0; i < size / 2; ++i) {
        int tmp = arr[i];
        arr[i] = arr[size1];
        arr[size1] = tmp;
        size1--;
    }
}

int main() {
    int size = 5;
    int arr[size];

    printf("Mutqagreq zangvaci tarerry: ");

    for(int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    swap(arr, size);

    printf("Shurjvac zangvacy: ");
    for(int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}

