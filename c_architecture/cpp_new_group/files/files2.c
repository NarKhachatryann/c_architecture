#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    FILE *file = fopen("primes.txt", "w");
    if(!file) {
        perror("Failed to open file");
        return 1;
    }
    int n = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    fprintf(file, "You entered: %d\n", n);
    fclose(file);
    return 0;
}