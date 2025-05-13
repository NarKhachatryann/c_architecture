#include <stdio.h>

int sum(int num) {
    int res = 0;

    while(num != 0) {
        res += num % 10;
        num /= 10;
    }
    return res;
}
int main() {

    int num = 0;
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Sum is: %d\n",sum(num));
    return 0;
}