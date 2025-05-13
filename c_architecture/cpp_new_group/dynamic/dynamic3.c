#include <stdio.h>
#include <stdlib.h>

float* fl_numbers(int size) {
    float* arr = (float*) calloc(sizeof(float), size);
    return arr;
}

int main() {
    int size = 0;
    printf("Enter size of array:\n");
    scanf("%d",&size);

    float* arr = fl_numbers(size);

    printf("Enter float number:\n");
    for(int i = 0; i < size; ++i) {
        scanf("%f",&arr[i]);
    }

    for(int i = 0; i < size; ++i) {
        printf("%.2f ",arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}