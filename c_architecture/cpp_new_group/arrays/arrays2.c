#include <stdio.h>
#define size 5

int main() {
    int arr[size] = {};

    printf("Enter array elements:\n");

    for(int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size - i - 1; ++j) {
            if(arr[j] >= arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    printf("The smallest element in the array: %d\n", arr[0]);

    return 0;
}