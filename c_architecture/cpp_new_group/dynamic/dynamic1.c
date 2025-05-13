#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 0;
    printf("Enter size:");
    scanf("%d",&size);

    int* arr = (int*) calloc(sizeof(int),size);

    printf("Enter array elements %d:\n",size);
    for(int i = 0; i < size; ++i) {
        /* printf("%d: ", i + 1); */
        scanf("%d",&arr[i]);
    }

    printf("Your elements:\n");
    for(int i = 0; i < size; ++i) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}