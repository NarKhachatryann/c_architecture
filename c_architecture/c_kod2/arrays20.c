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
            if(i > j){
                sum += arr[i][j];
            }
        }
    }

   /* for(int i = 0; i < size; ++i){
        printf("Zangvaci tivy: %d\n", arr1[i]);
}*/

printf("Sum is:%d\n",sum);
    return 0;
}

/*
   00 01 02
   10 11 12
   20 21 22
*/
