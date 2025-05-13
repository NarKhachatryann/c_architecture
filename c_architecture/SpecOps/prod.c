#include <stdio.h>

int main(){

    int arr[] = {1,2,3,4};
    int prod[4];

    int res = 1;
    for(int i = 0; i < 4; ++i){

        res *= arr[i];
    }

    for(int i = 0; i < 4; ++i){

        prod[i] = res/arr[i];
        printf("%d", prod[i]);
    }
    return 0;
}
