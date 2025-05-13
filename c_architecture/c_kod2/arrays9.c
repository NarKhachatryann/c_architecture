#include <stdio.h>
#define size 5

int main(){

    int arr[size] = {};
    int imin = 0;
    int imax = 0;

    for(int i = 0; i < size; ++i){

        printf("Mutqagreq zangvaci tarreric N%d:",i+1);
        scanf("%d",&arr[i]);

    }

    for(int i = 0; i < size; ++i){

        if(arr[i] > arr[imax]){

            imax = i;

        }

        if(arr[i] < arr[imin]){

            imin = i;

        }

    }

    printf("Sub is:%d\n",imax - imin);

    return 0;
}
