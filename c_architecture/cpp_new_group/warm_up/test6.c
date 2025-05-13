#include <stdio.h>

int main() {
    const int size = 5;
    char arr[size] = {};

    printf("Enter array Elements:\n");
    for(int i = 0; i < size; ++i) {
        scanf("%c",&arr[i]);
    }

    for(int i = 0; i < size; ++i) {
        arr[i] ^= 32;
        printf("%c",arr[i]);
    }
    printf("\n");
    return 0;
}