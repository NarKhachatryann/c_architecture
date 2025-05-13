#include <stdio.h>

int main(){

	int astichan(int, int);

int a,b;

	printf("Enter Number 1: ");
	scanf("%d",&a);

	printf("Enter Number 2: ");
	scanf("%d",&b);

	printf("Astichann e:%d\n",astichan(a,b));

}

int astichan(int a,int b){

	int z = 1;

	for(int i = 0; i < b; i++){

		z = z * a;

	}
	return z;


}
