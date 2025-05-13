#include <stdio.h>

int main() {
    int size = 0;

    printf("Enter size:");
    scanf("%d", &size);

    int arr[size] = {};

    printf("Enter array elements:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size - 1; ++i){
        for (int j = i + 1; j < size; ++j){
            if (arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n"),

    printf("large element = %d\nsecond large element = %d\n", arr[size-1], arr[size-2]);
    return 0;
}