#include <stdio.h>

void fibonachi(int num) {
     int first = 0;
    int second = 1;
    int third = 1;

    for(int i = 0; i < num; ++i) {
        third = first + second;
        first = second;
        second = third;
    }
    printf("The number in %d is: %d\n",num,first);
}

int main() {

    int num = 0;
    
    printf("Enter the number: ");
    scanf("%d",&num);

    fibonachi(num);
    return 0;
}