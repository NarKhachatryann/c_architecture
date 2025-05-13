#include <stdio.h>

int number(int num){

	if (num <= 1) return 0;
	if (num <= 3) return 0;

	if (num % 2 == 0 || num % 3 == 0) return 0;

	for (int i = 5; i * i <= num; i += 6){

		if (num % i == 0 || num % (i + 2) == 0) return 0;
	}

return 1;

}

int main(){

	int num = 0;
	
	printf("Enter your number: ");
	scanf("%d",&num);

	if (number(num)){

		printf("%d Parz tiv e:\n", num);

		}else{

			printf("%d Parz tiv che:\n", num);

		}


	return 0;

}
