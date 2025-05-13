#include <stdio.h>
#include <stdlib.h>

int* foo(int* arr, int* size){

    for(int i = 0; i < *size - 1; ++i){
        for(int j = i + 1; j < *size; ++j){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for(int i = 0; i < *size; ++i){
        printf("%d ", arr[i]);
    }
        printf("\n");
        int j = 0;
    int * arr1 = (int*)malloc(sizeof(int) * (*size));
    for(int i = 0; i < *size - 1; ++i){
            if(arr[i] == arr[i + 1]){
                arr1[j++] = arr[i];
            }
    }

    for(int i = 0; i < j; ++i){
        printf("%d ", arr1[i]);
    }
        printf("\n");

    free(arr);
    free(arr1);
}


int main()
{
    int size = 0;

    printf("Enter size:");
    scanf("%d", &size);
    int* arr = (int*)malloc(sizeof(int) * size);

    printf("Enter array digits:");

    for(int i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
    }

    foo(arr, &size);
}
