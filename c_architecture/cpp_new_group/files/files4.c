//Գրել ծրագիր, որը կհաշվի ֆայլում եղած թվերի միջին թվաբանականը և կավելացնի ֆայլի վերջից։

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* file = fopen("primes.txt", "a+");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    int sum = 0;
    int count = 0;
    int number = 0;

    char line[256];

    while (fscanf(file, "%s", line) == 1)
    {
        if (fscanf(file, "%d", &number) == 1) {
            sum += number;
            count++;
        }
    }

    if (count == 0) {
        printf("No numbers found in the file.\n");
        return EXIT_FAILURE;
    }
    fprintf(file, "mijin tvabakan: %d\n", sum / count);
    fclose(file);
}