#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* file = fopen("primes.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    char line[256];

    while (fscanf(file, "%s", line) == 1)
    {
    
        int firstNum = 0;
        if (fscanf(file, "%d", &firstNum) == 1) {
            printf("%d\n", firstNum);
            break;
        }
    }
   /*  char line[256];

    while (fgets(line, sizeof(line), file)) { // Կարդալ մեկ տող
        printf("%s", line);
    } */

    fclose(file);
}