#include <stdio.h>

int main() {
    int num = 0;

    printf("Enter number which should be reverse:");
    scanf("%d", &num);
    int reverse = 0;

    while (num != 0)
    {
        reverse += num % 10;
        num /= 10;
        reverse *= 10;

    }
    reverse /= 10; 

    printf("%d\n", reverse);
    
    
}