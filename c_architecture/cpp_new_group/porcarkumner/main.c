#include <stdio.h>
#include "math.h"

int main() {
    int num = 0;
    printf("Enter:");
    scanf("%d",&num);
    printf("qarakusi %d\n",square(num));
    printf("xoranard %d\n",cube(num));
}