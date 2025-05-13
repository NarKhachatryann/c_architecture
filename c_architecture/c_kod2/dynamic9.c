#include <stdio.h>
#include <stdlib.h>

int* foo(int* arr, int* size, int* element){
    if(arr[*size] == 0){
        arr[*size] = *element;
    } else {
        arr = (int*)realloc(arr, (*size + 1));
        arr[*size] = *element;
    }

    for(int i = 0; i < *size + 1; ++i){
        printf(" %d", arr[i]);
    }
    printf("\n");
}

int main(){
    int size = 0;
    printf("Enter the arrary size:");
    scanf("%d", &size);

    int element = 0;
    printf("Enter the element that needs to changed:");
    scanf("%d", &element);

    int* arr = (int*)calloc(sizeof(int), size);

    printf("Enter tha array elements:");
    for(int i = 0; i < size; ++i){
        scanf("%d", &arr[i]);
    }

    foo(arr, &size, &element);
}