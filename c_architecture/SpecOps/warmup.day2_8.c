#include <stdio.h>

int main() {
    int num = 0;
    int reverse = 0;
    int cpynum = 0;

    printf("Enter number for checking:");
    scanf("%d",&num);

    cpynum = num;

    while (num != 0) {
        reverse += num % 10;
        num /= 10;
        reverse *= 10;
    }
    reverse /= 10;

    if (reverse == cpynum) {
        printf("The number is polindrom\n");
    } else {
        printf("The number isn't polindrom\n");
    }
}