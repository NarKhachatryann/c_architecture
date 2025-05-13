#include <stdio.h>

void pacc(int *arr, const int size) {
    int size1 = size;
    if (size1 < 0)
    {
        return;
    }
    printf("%d\n",arr[size1]);
    size1--;
    pacc(arr,size1);
}

int main() {
    int size = 2;
    int arr[] = {2,3,27};

    pacc(arr,size);
    return 0;
}