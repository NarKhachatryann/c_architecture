#include <stdio.h>
#include <stdlib.h>

int* parz(int *arr, int* size){

    int* parzarr = (int*)malloc(sizeof(int) * (*size));
    int count = 0;

    for(int i = 0; i < *size; ++i){
        if(arr[i] <= 1){
            continue;
        }else if(arr[i] == 2 || arr[i] == 3 || arr[i] == 5){
            parzarr[count] = arr[i];
            count++;
            continue;
        }
        if(arr[i] % 2 == 0 || arr[i] % 3 == 0 || arr[i] % 5 == 0){
            continue;
        }
        parzarr[count] = arr[i];
        count++;
    }

    parzarr = (int*)realloc(parzarr, sizeof(int) * count);

    printf("ParzArray:");

    for(int i = 0; i < count; ++i){
        printf(" %d", parzarr[i]);
    }
    printf("\n");
}

int main(){

    int size = 0;
    printf("Enter array size:");
    scanf("%d",&size);

    int* arr = (int*)malloc(sizeof(int) * size);

    printf("Enter array elements: ");
    for(int i = 0; i < size; ++i){
        scanf("%d", &arr[i]);
    }

    parz(arr, &size);
}