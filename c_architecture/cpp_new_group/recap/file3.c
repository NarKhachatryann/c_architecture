#include <stdio.h>
#include <stdlib.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int armstrong(int num) {
    int result = 0;
    int count = 0;
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        count++;
    }
    for(int i = 0; i < count; ++i) {
        temp = num % 10;
        result += power(temp, count);
        num /= 10;
    }
    return result;
}

int main() {
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == armstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}