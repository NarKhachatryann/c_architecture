/* 
Իրականացնել ծրագիր, որը մուտքագրում է թիվ,
հաշվում 1-ից մինչև այդ մուտքագրված թվի ֆակտորիալները և տեղադրում factorials.txt ֆայլում, 
անջատելով ստորակետներով։ 
Օրինակ՝
    input - 5
    Factorials.txt - 1, 2, 6, 24, 120

*/

#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    FILE* file = fopen("factorials.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        fclose(file);
        return EXIT_FAILURE;
    }

    for(int i = 1; i <= n; ++i) {
        fprintf(file, "%d", factorial(i));
        if (i < n) {
            fprintf(file, ", ");
        }
    }

    fclose(file);
}