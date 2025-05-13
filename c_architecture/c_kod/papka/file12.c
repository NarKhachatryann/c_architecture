#include <stdio.h>

int main(){

	int num1 = 0;
	int num2 = 0;
	char oper = 0;

	while(1){
		if(oper == 'q' || num1 == 'q' || num2 == 'q'){
		break;
		}

	printf("Enter num 1:");
	scanf("%d",&num1);

	printf("Enter num 2:");
	scanf("%d",&num2);

	printf("Enter the operation:");
	scanf(" %c",&oper);


	switch(oper){

		case '+':

			printf("Summa is: %d\n", num1 + num2);
			break;

		case '-':

			printf("Subtraction is: %d\n", num1 - num2);
			break;

		case '*':

			printf("Multiplication is: %d\n", num1 * num2);
			break;

		case '/':

			if(num2 != 0){

			printf("Separation is: %d\n", num1 / num2);
			
			} else {

				printf("Error");

			}

			break;

		case 'Q':
			
			break;

		default:

			printf("Unknown character");

		}

	}

	return 0;
}
