#include <stdio.h>
#define size 10

int main(){

	char arr[size] = {};
	
		printf("Mutqagreq zangvaci texty:");
	for(int i = 0; i < size; ++i){

		scanf(" %c",&arr[i]);

		if(arr[i] == '\n'){
		arr[i] = '\0';
		}
		}

	for(int i = 0; i < size; ++i){

		if(arr[i] >= 'a' || arr[i] <= 'z'){
	
			arr[i] = arr[i] - 32;
		}
		printf("%c",arr[i]);
		}
	}


