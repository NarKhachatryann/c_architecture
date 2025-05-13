#include <stdio.h>

void reverse(char* arr,const int size) {
    int end = size - 1;
    for(int i = 0; i < size / 2; ++i) {
        int tmp = arr[i];
        arr[i] = arr[end];
        arr[end] = tmp;
        --end;
    }
    for(int i = 0; i < size; ++i) {
        printf("%c",arr[i]);
    }
    printf("\n");
}
int main() {

    const int size = 6;
    char arr[size] = {};

    printf("Enter your string(only 6 symbols): ");

    for(int i = 0; i < size; ++i) {
        scanf("%c",&arr[i]);
    }

    reverse(arr,size);
}