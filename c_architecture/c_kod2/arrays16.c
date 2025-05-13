#include <stdio.h>
#define size 3

int main(){
    int sum = 0;
    int arr[size][size] = {};
    printf("Mutqagreq zangvaci tarrery:\n");
    
        for(int i = 0; i < size; ++i){
            for(int j = 0; j < size; ++j){
                scanf("%d",&arr[i][j]);
            }
        }

    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            if(i == j){
                sum += arr[i][j];
            }
        }
    }

    printf("Sum = %d\n",sum);

    return 0;
}
