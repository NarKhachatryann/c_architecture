#include <stdio.h>
#define size 5

int main(){

    int arr[size] = {};

    for(int i = 0; i < size; ++i) {
        printf("Mutqagreq zangvaci %d arjeqy:",i + 1);
        scanf("%d",arr[i]);
    }

    for(int i = 0; i < size; ++i) {
        int flag = 0;
        for(int j = i + 1; j < size; ++j){
        if(arr[i] > arr [j]){
            arr[i] = arr[i] ^ arr[j];
            arr[j] = arr[i] ^ arr[j];
            arr[i] = arr[i] ^ arr[j];
            flag = 1;
        }

        }
    }
    for(int i = 0; i < size; ++i)

}
