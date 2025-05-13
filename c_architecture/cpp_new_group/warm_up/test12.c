#include <stdio.h>

void table(int num) {
    for(int i = 1; i < 11; ++i) {
        printf("%d * %d = %d\n",num,i,(num * i));
    }
}

int main() {
    int num = 0;

    printf("Enter number: ");
    scanf("%d",&num);

    table(num);

    return 0;
}