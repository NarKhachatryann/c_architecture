#include <stdio.h>
#include <stdlib.h>

int* foo(int* arr,int* num){
    int count = 0;
    int size = *num;
    for(int i = 1; i <= *num; ++i){
        if(i % 2 == 0){
            arr[count] = i;
            count++;
        }   
    }

    for(int i = 0; i < count; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){

    int num = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    int* arr = (int*)malloc(sizeof(int) * num);

    foo(arr,&num);
}