#include <stdio.h>

int reverse(int arr[],int size,int count) {
    if(count == size) return arr[size - 1];

    printf("%d\n", reverse(arr,size,count + 1));
    return arr[count - 1];
}

int main() {
    const int size = 5;
    int arr[size] = {};

    printf("Enter array elements:\n");
    for(int i = 0; i < size; ++i) {
        scanf("%d",&arr[i]);
    }

    reverse(arr,size,0);
    return 0;
}