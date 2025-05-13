#include <stdio.h>
#define size 5

int main() {

    int tmp = 0;
    int arr[size] = {};

    for(int i = 0; i < size; ++i) {
        printf("Mutqagreq zangvaci tarreric %dy:",i);
        scanf("%d",&arr[i]);
    }

    int i = 0;
    int j = size - 1;

    while(i < j) {
        if(arr[i] % 2 != 0 && arr[j] % 2 == 0) {
            arr[i] = arr[i] ^ arr[j];
            arr[j] = arr[i] ^ arr[j];
            arr[i] = arr[i] ^ arr[j];
        }
        if(arr[i] % 2 == 0) {
            ++i;
        }
        if(arr[j] % 2 != 0) { 
            --j;
        }
    }

    for(int i = 0; i < size; ++i) {
        printf(" %d", arr[i]);
    }
}
