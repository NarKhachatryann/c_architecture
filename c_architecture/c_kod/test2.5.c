#include <stdio.h>
#define size 5

int main(){

	int num = 0;
	int arr[size] = {};
	int flag = 0;

	for(int i = 0; i < size; ++i){

		printf("Mutqagreq zangvaci %d_rd andamy:",i + 1);
		scanf("%d",&arr[i]);

	}

	printf("Mutqagreq tivy vory pntrvum e:");
	scanf("%d",&num);

	for(int i = 0; i < size; ++i){

		if(num == arr[i]){

			flag = 1;

		}

	}
	if(flag){

		printf("Yes\n");

	} else {

		printf("No\n");

	}

}
