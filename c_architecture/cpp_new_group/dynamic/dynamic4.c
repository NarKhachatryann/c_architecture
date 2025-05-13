#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 5;
    int num = -1;
    int count = size - 1;
    int* ptr = (int*)calloc(sizeof(int), size);
    if(ptr == NULL) {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter elements 5: ");
    for(int i = 0; i < size; ++i) {
        scanf("%d",&ptr[i]);
    }

    do
    {
        printf("Enter 0 to exit\nEnter 1 to change size\nEnter 2 to add element\nEnter 3 to remove last element\nEnter 4 to display elements\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("Enter new size: ");
            scanf("%d", &size);
            ptr = (int*)realloc(ptr, size * sizeof(int));
            break;
        
        case 2:
            if(ptr[size - 1] != 0) {
                size++;
                ptr = (int*)realloc(ptr, size * sizeof(int));
            }
            printf("Enter element: ");
            scanf("%d", &ptr[count]);
            count++;
            break;
        
        case 3:
            size--;
            count = size - 1;
            ptr = (int*)realloc(ptr, size * sizeof(int));
            break;
        
        case 4:
            for(int i = 0; i < count + 1; ++i) {
                printf("%d ", ptr[i]);
            }
            printf("\n");
            break;
        default:
            break;
        }
    } while (num != 0);
    

    free(ptr);
    return 0;
}