#include <stdio.h>
#define size 5

int main() {
    int arr[size] = {};
    int max = 0;

    printf("Enter array elements:\n");

    for(int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];

    for(int i = 0; i < size; ++i) {
        if(arr[i] >= max) {
            max = arr[i];
        }
        if(arr[i] <= min) {
            min = arr[i];
        }
    }

    printf("The smallest and biggest elements sum is: %d\n", (min + max));

    return 0;
}