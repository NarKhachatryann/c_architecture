#include <stdio.h>
#include <stdlib.h>

const char *my_strstr(const char *haystack, const char *needle) {
    char* result = NULL;
    for(int i = 0; haystack[i] != '\0'; ++i) {
        if(haystack[i] == needle[0] && haystack[i + 1] == needle[1]) {
            result = (char*) haystack + i;
            return result;
        }
    }
    return NULL;
}

int main() {
    int size = 100;
    char* string1 = (char*) malloc(size * sizeof(char));
    char* string2 = (char*) malloc(size * sizeof(char));

    printf("Enter the string: ");
    for(int i = 0; i < size; i++) {
        scanf("%c", &string1[i]);
        if(string1[i] == '\n') {
            string1[i] = '\0';
            break;
        }
    }

    printf("Enter the substring: ");
    for(int i = 0; i < size; i++) {
        scanf("%c", &string2[i]);
        if(string2[i] == '\n') {
            string2[i] = '\0';
            break;
        }
    }

    const char* result = my_strstr(string1, string2);
    if(result) {
        printf("Substring found at index %ld\n", result - string1);
        for(int i = 0; i < size; ++i) {
            if(result[i] == '\0') {
                break;
            }
            printf("%c", result[i]);
        }
        printf("\n");
    } else {
        printf("Substring not found\n");
    }

    free(string1);
    free(string2);
    return 0;
}