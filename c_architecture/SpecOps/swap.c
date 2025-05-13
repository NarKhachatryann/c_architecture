#include <stdio.h>

void swap(int** ptr1, int** ptr2) {
    int* tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}

int main() {
    int a = 10;
    int b = 20;
    int* ptr1 = &a;
    int* ptr2 = &b;

    swap(&ptr1,&ptr2);

    printf("ptr1 = %d \nptr2 = %d\n",*ptr1,*ptr2);
}