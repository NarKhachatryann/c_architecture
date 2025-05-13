#include <stdio.h>

void comparison(int* arr1, int* arr2,const int size) {
     for(int i = 0; i < size; ++i) {
        if(arr1[i] == arr2[i]) {
            continue;
        } else {
            printf("No\n");
            return;
        }
    }
    printf("Yes\n");
}

int main() {
    const int size = 5;
    int arr1[size] = {};
    int arr2[size] = {};

    printf("Enter array 1 Elements:\n");
    for(int i = 0; i < size; ++i) {
        scanf("%d",&arr1[i]);
    }

    printf("Enter array 2 Elements:\n");
    for(int i = 0; i < size; ++i) {
        scanf("%d",&arr2[i]);
    }

    comparison(arr1,arr2,size);
    return 0;
}