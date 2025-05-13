/* Գրեք ֆունկցիա, որը հեռացնում է կրկնօրինակ տարրերը 
դինամիկորեն հատկացված, սորտավորված զանգվածից, 
թարմացնում զանգվածի ցուցիչը և դրա չափը: */
#include <stdio.h>
#include <stdlib.h>

int* my_rename(int** arr, int* size) {
    int *new_arr = (int*)malloc((*size) * sizeof(int));
    new_arr[0] = (*arr)[0];
    int j = 1;
    for (int i = 1; i < *size; i++) {
        if((*arr)[i] != (*arr)[i - 1]) {
            new_arr[j] = (*arr)[i];
            ++j;
        }
    }
    *size = j;
    free(*arr);
    return new_arr;
}

int main() {
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int *arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    arr = my_rename(&arr,&size);
    for(int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    return 0;
}