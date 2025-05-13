/* 
Իրականացնել ծրագիր, որը բացում է text.txt ֆայլ, 
և հաշվում ֆայլում յուրաքանչյուր բառի առկայության քանակը, 
այնուհետև ստացված արդյունքը տեղադրում է statistics.txt ֆայլում։ 
Օրինակ՝

Text.txt 
This is a test. This is only a test.

Statistics.txt
this: 2 
is: 2 
a: 2 
test: 2 
only: 1

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE* file = fopen("primes.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    FILE* statistics = fopen("statistics.txt", "w");
    if (statistics == NULL) {
        printf("Error opening statistics file.\n");
        fclose(file);
        return 1;
    }

    int words = 0;
    char ch = 0;
    int in_word = 0;
    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch)) {
            in_word = 0;
        } else if(!in_word) {
            in_word = 1;
            words++;
        }
    }
    
    fprintf(statistics,"Number of words: %d\n", words);
    fclose(statistics);
    fclose(file);
    return 0;
}