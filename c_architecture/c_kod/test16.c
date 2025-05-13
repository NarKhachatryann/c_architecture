#include <stdio.h>

int main(){

	int n = 0;
	char sym = 0;

	printf("Enter n:");
	scanf("%d",&n);
	
	while((getchar()) != '\n');

		printf("Enter symbol:");
		scanf("%c",&sym);

		for(int i = 0; i < n; ++i){
			if(i == 0 || i == n - 1){
				if(i <= n/2){


					printf(" ");
					//printf("%c",sym);

				} if(i > n/2){

					printf(" %c",sym);

				}

				printf("%c\n",sym);
			}

		}


	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(i == 0 || i == n - 1 || j == 0 || j == n - 1){

			printf(" %c",sym);

		} else {

			printf("  ");

		}

		}
		printf("\n");
	}

}
