#include <stdio.h>

int main()
{

	int size;
	char arr[size];
	printf("Enter size: ");
	scanf("%d", &size);


	for(int i = 0; i < size; ++i){
	
		printf("Enter Your Number %d: ", i);
		scanf("%c", &arr[i]);

	}
	for(int i = 0; i < size; ++i){

		printf("Your number in %d index is %c\n", i, arr[i]);

	}

}
