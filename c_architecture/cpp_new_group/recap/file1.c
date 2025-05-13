#include <stdio.h>
#include <stdlib.h>

char* decimalToBinary(int num,int* size) {
    int i = 0;
    int minus = 0;
    char* binary = (char*)malloc(33);
    if(num < 0) {
        num *= -1;
        minus++;
    }
    while (num > 0) {
        binary[i] = num % 2 + '0';
        num /= 2;
        i++;
    }
    *size = i;
    if(minus) {
        for(int j = *size - 1; j >= 0; --j) {
            binary[j] ^= 1;
        }
        //binary[0] ^= 1;
    }
    return binary;
}

int main() {
    int size = 33;
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    char* binary = decimalToBinary(num, &size);
    
    for (int i = size - 1; i >= 0; i--) {
        printf("%c", binary[i]);
    }
    printf("\n");

    free(binary);
    return 0;
}