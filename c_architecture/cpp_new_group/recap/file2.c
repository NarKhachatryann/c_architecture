#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int result = arr[0];
    for(int i = 1; i < size; ++i) {
        result = gcd(result, arr[i]);
    }

    printf("GCD of the array elements is: %d\n", result);
    
    free(arr);
    return 0;
}