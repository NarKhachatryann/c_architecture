#include <stdio.h>

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

    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < (2*size); ++i) {
        if(i < size) {
            printf("%d ",arr1[count1]);
            ++count1;
        } else if(i >= size) {
            printf("%d ",arr2[count2]);
            ++count2;
        }
    }
    printf("\n");
    return 0;
}