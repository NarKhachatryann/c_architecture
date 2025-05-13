#include <stdio.h>
#include <stdlib.h>

int* push(int* arr, int length, int elm) {

    int* tmp = (int*) malloc (sizeof(int) * (length + 1));

    for (int i = 0; i < length; ++i) {
        tmp[i] = arr[i];
    }

    tmp[length] = elm;

    free(arr);

    return tmp;

}

int main() {

    int size = 0;
    int elm = 0;
    printf("Enter size:");
    scanf("%d",&size);

    int *arr = (int*) malloc (sizeof(int) * size);
    printf("Enter arr elm:");

    for (int i = 0; i < size; ++i) {
        scanf("%d",&arr[i]);
    }

    printf("Enter push elm:");
    scanf("%d",&elm);

    int* tmp = push(arr,size,elm);

    for (int i = 0; i < size + 1; ++i) {
        printf("%d ",tmp[i]);
    }

    printf("\n");

    free(tmp);

}
