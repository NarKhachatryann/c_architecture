#include <stdio.h>
#define size 3

int main(){
    int sum = 0;
    int arr[size][size] = {};
    int arr1[size] = {};
    printf("Mutqagreq zangvaci tarrery:\n");
    
        for(int i = 0; i < size; ++i){
            for(int j = 0; j < size; ++j){
                scanf("%d",&arr[i][j]);
            }
        }

    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            if(i == j){
                arr1[sum] = arr[i][j];
                sum ++;
            }
        }
    }

    for(int i = 0; i < size; ++i){
        printf("Zangvaci tivy: %d\n", arr1[i]);
}
    return 0;
}
