#include <stdio.h>
#include <stdlib.h>

int* foo (char* arr, int* size){
    
    printf("Arr1:");
    for(int i = 0; i < *size; ++i)
    {
        printf(" %hhd", arr[i]);
    }
    printf("\n");

    char* arr1 = (char*)malloc(sizeof(char) * (*size));
    for(int i = 0; i < *size; ++i){
        arr1[i] = arr[i];
    }

    printf("Arr2:");
    for(int i = 0; i < *size; ++i){
        printf(" %hhd", arr1[i]);
    }
    printf("\n");
    
    free(arr);
    free(arr1);
}

int main(){

    int size = 0;
    printf("Enter array size:");
    scanf("%d",&size);

    char* arr = (char*)malloc(sizeof(char) * size);

    printf("Enter array digits:");

    for(int i = 0; i < size; ++i){
        scanf("%hhd", &arr[i]);
    }

    foo(arr, &size);

}