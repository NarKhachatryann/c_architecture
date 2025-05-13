#include <stdio.h>

int main()
{
	int num1;
	int num2;
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);
	int total = num1 + num2;
	printf("Your summa is:%d \n", total);
	return 0;
}
