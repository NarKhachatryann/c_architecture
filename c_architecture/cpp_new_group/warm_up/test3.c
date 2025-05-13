#include <stdio.h>

int main () {
    const int size = 5;
    int arr[size] = {};

    printf("Enter array Elements:\n");
    for(int i = 0; i < size; ++i) {
        scanf("%d",&arr[i]);
    }

    int res = 0;
    for(int i = 0; i < size; ++i) {
        res += arr[i];
    }

    res /= size;
    printf("Arithmetic mean is: %d\n",res);
    
    return 0;
}