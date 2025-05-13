#include <stdio.h>

int main() {
	int num;

	printf("Enter your number: ");
	scanf("%d", &num);
	if (num % 2 == 0) {
	printf("%d an even number\n", num);
	} else {
	printf("%d an odd number \n", num);

	}
}
