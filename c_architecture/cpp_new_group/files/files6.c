/* 
6) Գրել ծրագիր, որը կտպի էկրանին ֆայլի մասին ինֆորմացիա.
    1) Ֆայլի չափը՝ բայթերով
    2) Ֆայլի մեջ տողերի քանակը
    3) Ֆայլի մեջ բառերի քանակը
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE* file = fopen("primes.txt", "a+");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    
    int bytes = 0, lines = 0, words = 0;
    char ch;
    int in_word = 0;

    while ((ch = fgetc(file)) != EOF) {
        bytes++;
        if (ch == '\n') {
            lines++;
        }
        if (isspace(ch)) {
            in_word = 0;
        } else if(!in_word) {
            in_word = 1;
            words++;
        }
    }

    printf("File size: %d bytes\n", bytes);
    printf("Number of lines: %d\n", lines);
    printf("Number of words: %d\n", words);
    fclose(file);
    return 0;
}