#include <stdio.h>
#define size 6

int main(){

	int arr[size] = {};
	int index1 = 0;
	int index2 = 0;

	for(int i = 0; i < size; ++i){

		printf("Mutqagreq zangvaci tiv %d:",i + 1);
		scanf("%d",&arr[i]);

	}

	for(int i = 0; i < size - 1; ++i){

		if(arr[i] > arr[i + 1]){

			index1 = i;

		} else {

			index2 = i;

		}

	}
	if(index1 > index2){

		printf("sub is %d\n",index1 - index2);

	}else if(index1 < index2){

		printf("sub is %d\n", index2 - index1);

	}else{

		printf("0");

	}


}
