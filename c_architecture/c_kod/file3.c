#include <stdio.h>

int main() {
	float age=0;
	printf("Enter your Age: ");
	scanf("%f", &age);
	float day=0;
	day= age*365;
	printf("Days: %.1f \n", day);
	return 0;
}
