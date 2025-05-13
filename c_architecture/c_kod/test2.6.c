#include <stdio.h>
#define size 5

int main(){

	char arr[size] = {};

	for(int i = 0; i < size; ++i){
		printf("Mutqagreq zangvaci %d _rd tivy:",i);
		scanf("%c",&arr[i]);
		
		while((getchar()) != '\n');

	}

	for(int i = 0; i < size; ++i){

		printf("%c\n",arr[i]);

	}

}
