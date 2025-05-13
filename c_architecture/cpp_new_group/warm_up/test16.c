#include <stdio.h>

int main() {
    int num = 0;
    int exp = 0;
    int res = 1;

    printf("Enter your number and exp: ");
    scanf("%d %d",&num, &exp);

    for(int i = 0; i < exp; ++i) {
        res *= num;
    }

    printf("result is: %d\n",res);
    return 0;
}