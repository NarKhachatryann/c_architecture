#include <stdio.h>

int deegre(int num,int n,int result) {
    if(n == 0) return result;
    result *= num;
    deegre(num,n - 1,result);
}

int main() {
    int num = 0, n = 0, result = 1;

    printf("Enter number: ");
    scanf("%d",&num);
    printf("Enter deegre: ");
    scanf("%d",&n);

    printf("%d\n",deegre(num,n,result));
}