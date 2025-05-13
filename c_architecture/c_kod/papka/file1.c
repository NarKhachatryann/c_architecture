#include <stdio.h>

int main(){
	int gum(int);

	int num = 0;
	printf("Enter your number:");
	scanf("%d",&num);
	int sum = gum(num);
	printf("Sum = %d\n",sum);

}

int gum(int num){

	int sum = 0;
	int num1 = num;

	for(int i = 0; i < num1; i++){

		sum += num % 10;
		num /= 10;

		if(num == 0){

			break;

		}
	}
		return sum;
}
