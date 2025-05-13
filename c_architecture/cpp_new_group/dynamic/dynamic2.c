#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const int size = 200;
    char* str = (char*) calloc(sizeof(char),size);
    if(str == NULL) {
        printf("Memory allocation is failed!\n");
        return 0;
    }

    printf("Enter your str:\n");
    fgets(str,size,stdin);
    int length = strlen(str);
    printf("Your str length is: %d\n",length);
    printf("%s\n",str);

    free(str);
    return 0;
}