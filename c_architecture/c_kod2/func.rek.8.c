#include <stdio.h>
#define size 5

int factorial(int num){

    if(num == 0){
        return 1;
    }

    return factorial (num - 1)*num;

}

int main(){

    int arr[size] = {};

    printf("Mutqagreq zangvaci tarery:");

    for(int i = 0; i < size; ++i){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < size; ++i){
        arr[i] = factorial(arr[i]);
    }

    for(int i = 0; i < size; ++i){
        printf("%d\n",arr[i]);
    }

}
