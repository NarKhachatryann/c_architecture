#include <stdio.h>
#include <stdlib.h>

int* fibon(int* n){
    int first = 0;
    int second = 1;
    int res = 1;

    if (*n == 0){
        printf("0");
    } else if(*n == 1){
        printf("1");
    }

    int* arr = (int*)malloc(sizeof(int) * (*n));

    arr[0] = 0;
    for(int i = 1; i < *n; ++i){
        arr[i] = res;
        res = first + second;
        first = second;
        second = res;
    }

    for(int i = 0; i < *n; ++i){
        printf(" %d",arr[i]);
    }
    printf("\n");
}

int main(){
    int n = 0;

    printf("Enter the N number:");
    scanf("%d",&n);

    fibon(&n);
}