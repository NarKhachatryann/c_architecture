#include <stdio.h>

int recursia(int n) {
    static int sum = 1;
    if (n == 0) {
        return sum;
    }
    sum *= n % 10;
    n /= 10;
    return recursia(n);
}

int main() {
    int num = 0;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("%d\n",recursia(num));

    return 0;
}