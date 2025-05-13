#include <stdio.h>
#include <stdlib.h>

int* push(int* arr, int size, int elm) {
    int* push_arr = (int*) malloc (sizeof(int) * (size + 1));

    for (int i = 0; i < size; ++i) {
        push_arr[i] = arr[i];
    }

    push_arr[size] = elm;

    free(arr);
    return push_arr;
}

int main() {
    int size = 0;
    printf("Enter arr size:");
    scanf("%d", &size);

    int *arr = (int*) malloc (sizeof(int) * size);

    printf("Enter arr elems:");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    int elm = 0;
    printf("Enter element which need to push:");
    scanf("%d",&elm);

    int* push_arr = push(arr,size,elm);
    for (int i = 0; i < size + 1; ++i) {
        printf("%d ",push_arr[i]);
    }
    printf("\n");
    free(push_arr);

    return 0;
}