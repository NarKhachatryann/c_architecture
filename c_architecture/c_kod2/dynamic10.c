#include <stdio.h>
#include <stdlib.h>

int astichan(int* arr, int* size){

    int j = *size - 1;
    int count = 0;

    for(int i = 0; i <= j; ++i){
        int cpy = arr[i];
        if(cpy % 4 == 0){
            while(arr[i] % 4 == 0 && arr[i] > 1){
                arr[i] = arr[i] / 4;
            }

            if(arr[i] == 1){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
                count++;
                j--;
                i--;
                break;
            }
        
        }
    }
   // *size = count;

    for(int i = 0; i < *size; ++i){
        printf(" %d", arr[i]);
    }
    printf("\n");
    return 0;
}
 
int main(){
    int size = 0;
    printf("Enter the size:");
    scanf("%d", &size);

    int* arr = (int*)malloc(sizeof(int) * size);

    printf("Enter array Elements:");
    for(int i = 0; i < size; ++i){
        scanf("%d",&arr[i]);
    }

    astichan(arr, &size);

    free(arr);
    return 0;
}