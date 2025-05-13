#include <stdio.h>

char reverse(char arr[],const int size,int count) {
    if(count == size) return arr[count];

    printf("%c",reverse(arr,size,count + 1));
    return arr[count - 1];
}

int main() {
    const int size = 11;
    char arr[size] = {};

    printf("Enter your string(10 Elem):\n");
    for(int i = 0; i < size; ++i) {
        scanf("%c",&arr[i]);
    }

    reverse(arr,size,0);
    printf("\n");
    return 0;
}