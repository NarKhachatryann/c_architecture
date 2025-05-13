#include <stdio.h>

int main(){

	int kent = 0;
	int size;
	printf("Enter size: ");
	scanf("%d", &size);

	int arr[size];

	for(int i = 0; i < size; ++i){

	printf("Enter Number %d:", i + 1);
	scanf("%d",&arr[i]);

	}

	for(int i = 0; i < size; ++i)
	{

		if(arr[i] % 2 == 1){
		
			++kent;
		}
	}
		if(kent == 0){
		
			printf("Kent tiv chka\n");

		}else{

	printf("Kent tveri qanaky:%d\n", kent);
		}

return 0;
}
