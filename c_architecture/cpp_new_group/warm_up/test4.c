#include <stdio.h>

int main() {
    const int size = 5;
    int arr[size] = {};
    int num = 0;

    printf("Enter array Elements:\n");
    for(int i = 0; i < size; ++i) {
        scanf("%d",&arr[i]);
    }

    printf("Enter number: ");
    scanf("%d",&num);

    for(int i = 0; i < size; ++i) {
        if(arr[i] == num) {
            printf("Yes\n");
            return 0;;
        }
    }
    printf("No\n");
    return 0;
}