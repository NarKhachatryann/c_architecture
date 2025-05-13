#include <stdio.h>

int main() {
    const int size = 5;
    char arr[size] = {};

    printf("Enter array Elements:\n");
    for(int i = 0; i < size; ++i) {
        scanf("%c",&arr[i]);
    }

    for(int i = 0; i < size; ++i) {
        if('A' <= arr[i] && arr[i] <= 'z') {
            continue;
        } else if('0' <= arr[i] && arr[i] <= '9') {
            printf("Number is : %c\n",arr[i]);
        }
    }
    return 0;
}