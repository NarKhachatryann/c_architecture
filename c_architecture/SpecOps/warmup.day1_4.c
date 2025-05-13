/*for (int i = 0; i < size; ++i) {
        if (max > arr[i]) {
            max = arr[i];
        }
    }
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 0;
    
    printf("Enter size:");
    scanf("%d",&size);

    int* arr = (int*) malloc(sizeof(int) * size);
    
    printf("Enter array:");
    for(int i = 0; i < size; ++i){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];

    for(int i = 0; i < size; ++i){
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    free(arr);
    printf("%d\n", max);
    return 0;
}