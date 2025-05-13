#include <stdio.h>

#define size 6

int main(){

	int arr[size] = {};
	int flag = 0;

	for(int i = 0; i < size; ++i){

		printf("Mutqagreq %d andamy:", i + 1);
		scanf("%d",&arr[i]);

	}

	for(int i = 0; i < size; ++i){

		if(arr[i] % 2 == 1){

			flag++;

		}
	}
printf("Kent tveri qanaky %d\n",flag);
}
