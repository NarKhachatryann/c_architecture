#include <stdio.h>

int search(char arr[],int count) {
    if(count == -1) return 0 ;
    switch (arr[count])
    {
    case 'a':
        return 1 + search(arr,count - 1);
        break;

    case 'e':
        return 1 + search(arr,count - 1);
        break;

    case 'i':
        return 1 + search(arr,count - 1);
        break;

    case 'o':
        return 1 + search(arr,count - 1);
        break;

    case 'u':
        return 1 + search(arr,count - 1);
        break;

    case '\n':
        return search(arr,count - 1);

    default:
        return search(arr,count - 1);
        break;
    }
}

int main() {
    const int size = 50;
    char arr[size] = {};
    int count = 0;

    printf("Enter your word:\n");
    for(int i = 0; i < size; ++i) {
        scanf("%c",&arr[i]);
        ++count;
        if(arr[i] == '\n') {
            break;
        }   
    }
    //printf("%d",count);
    printf("%d\n",search(arr,count - 1));
    return 0;
}