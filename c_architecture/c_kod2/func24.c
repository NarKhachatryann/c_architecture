#include <stdio.h>

int main(){

    int size = 5;
    int arr[size][size];
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
        scanf("%d", &arr[i][j]);
        }
    }

    return 0;

}

int isPrime(int n)
{
    if(n <= 1){
        return 0;
    }

    for(int i = 2; i <= n/2; ++i){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
