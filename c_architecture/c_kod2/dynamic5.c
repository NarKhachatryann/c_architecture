#include <stdio.h>
#include <stdlib.h>

int* miacum(int* arr1, int* arr2, int* size){
    int* arrmax = (int*)malloc(sizeof(int) * (2 * (*size)));

    for(int i = 0; i < *size; ++i){
        arrmax[i] = arr1[i];
    }

    for(int i = 0; i < (2 * (*size)); i++){
        arrmax[i + *size] = arr2[i];
    }
    printf("ArrayMax:");

    for(int i = 0; i < (2 * (*size)); ++i){
        printf(" %d", arrmax[i]);
    }

    printf("\n");

    free(arr1);
    free(arr2);

    return arrmax;
}

int main(){

    int size = 0;
    printf("Enter size of arrays:");
    scanf("%d", &size);

    int* arr1 = (int*)malloc(sizeof(int) * size);
    int* arr2 = (int*)malloc(sizeof(int) * size);

    printf("Enter array1 digits:");
    for(int i = 0; i < size; ++i){
        scanf("%d",&arr1[i]);
    }

    printf("Enter array2 digits:");
    for(int i = 0; i < size; ++i){
        scanf("%d",&arr2[i]);
    }

    miacum(arr1, arr2, &size);
}