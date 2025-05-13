#include <stdio.h>

int main(){
	
	int size;
	int min,max;
	int imin = 0;
	int imax = 0;
	int arr[size];
	printf("Enter Array size: ");
	scanf("%d", &size);

	for(int i = 0; i < size; ++i){

	printf("Enter array number %d:",i);
	scanf("%d",&arr[i]);

	}

	min = arr[0];
	max = arr[0];

	for(int i = 0; i < size; ++i){
	
		if(min > arr[i]){

			min = arr[i];
			imin = i;

		} else if (max < arr[i]) {

			max = arr[i];
			imax = i;

		}
	}
	printf("Tarberutyuny:%d\n", imax-imin);
	printf("min:%d\nmax:%d\n",imin,imax);

	return 0;
}
