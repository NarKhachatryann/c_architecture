#include <stdio.h>
#include <stdlib.h>

char* clearString(char** str, int size) {
    for(int i = 0; i < size; ++i) {
        if((*str)[i] == 'a' || (*str)[i] == 'e' || (*str)[i] == 'i' || (*str)[i] == 'o' || (*str)[i] == 'u') {
            (*str)[i] = '*';
        }
    }
    for(int i = 0; i < size; ++i) {
        if((*str)[i] == '*') {
            for(int j = i; j < size; ++j) {
                (*str)[j] = (*str)[j + 1];
            }
        }
    }
    return *str;
}

int main() {
    int size = 100;
    char* str = (char*)malloc(size * sizeof(char));
    printf("Enter a string: ");
    for(int i = 0; i < size; i++) {
        scanf("%c", &str[i]);
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    char* clearedStr = clearString(&str, size);
    for(int i = 0; i < size; i++) {
        printf("%c", clearedStr[i]);
    }
    printf("\n");

    free(clearedStr);
    return 0;
}