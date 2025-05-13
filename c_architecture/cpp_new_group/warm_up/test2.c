#include <stdio.h>

int main() {
    const int size = 5;
    int arr[size] = {};

    printf("Enter array Elements:\n");
    for(int i = 0; i < size; ++i) {
        scanf("%d",&arr[i]);
    }

    for (int i = size - 1; i >= 0; --i)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}