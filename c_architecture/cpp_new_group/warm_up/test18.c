#include <stdio.h>

int reverse(int num) {
    int rev = 0;
    while(num != 0) {
        rev *= 10;
        rev += num % 10;
        num /= 10;
    }
    return rev;
}

int check(int num) {
    int rev = reverse(num);

    if(rev == num) {
        return 1;
    } else {
        return 0;
    }
}

int polindrom(int num) {
    while(!(check(num))) {
        num += reverse(num);
    }
    return num;
}

int main() {

    int num = 0;
    printf("Enter number: ");
    scanf("%d",&num);

    printf("%d\n",polindrom(num));
}