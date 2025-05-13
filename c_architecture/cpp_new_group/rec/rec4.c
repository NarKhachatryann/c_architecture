#include <stdio.h>

int summa(int arr[], int size,int sum) {
    if(size == -1) return sum;
    return arr[size] + summa(arr,size - 1,sum);
}

int main() {

    const int size = 5;
    int arr[size] = {};

    printf("Enter array numbers:\n");
    for(int i = 0; i < size; ++i) {
        scanf("%d",&arr[i]);
    }

    printf("Summa is: %d\n",summa(arr,size - 1,0));
}