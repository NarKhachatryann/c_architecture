#include <stdio.h>

int main() {

    const int size = 5;

    int arr1[size] = {};
    int arr2[size] = {};

    printf("Enter array 1 elements:\n");
    for(int i = 0; i < size; ++i) {
        scanf("%d",&arr1[i]);
    }

    printf("Enter array2 elements:\n");
    for(int i = 0; i < size; ++i) {
        scanf("%d",&arr2[i]);
    }

    for (int i = 0; i < size; ++i)
    {
        printf("Elem index %d: %d\n",(i + 1),(arr1[i] * arr2[i]));
    }
    
    return 0;
}