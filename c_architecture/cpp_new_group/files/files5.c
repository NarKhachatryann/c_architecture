//Իրականացնել ծրագիր, որը կհաշվի ֆայլի բոլոր թվանշանների քանակը և կտպի էկրանին։

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("primes.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    int count = 0;
    int num = 0;
    while (fscanf(file, "%d", &num) == 1)
    {
        count++;
    }

    fclose(file);
    printf("The numbers count is %d\n", count);
    return 0;
    
}