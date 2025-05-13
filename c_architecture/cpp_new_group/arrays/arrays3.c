#include <stdio.h>
#define size 5

int main() {
    int arr[size] = {};
    int count = 0;

    printf("Enter the array elements:\n");
    for(int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size - 1; ++i) {
        if(arr[i] >= arr[i + 1]) {
            count = i;
        }
    }

    printf("The biggest element index in the array: %d\n", count + 1);

    return 0;
}