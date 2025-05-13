#include <stdio.h>

int main() {
    int num1 = 0;
    int num2 = 1;

    printf("Enter number: ");
    scanf("%d",&num1);

    while(num1 != 0) {
        num2 *= num1;
        --num1;
    }
    printf("%d\n",num2);
    return 0;
}