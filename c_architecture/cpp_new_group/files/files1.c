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
    
    for(int i = 0; i < 100; ++i) {
        if(is_prime(i)) {
            fprintf(file, "%d\n", i);
        }
    }
    printf("Prime numbers written to primes.txt\n");
    fclose(file);
    return 0;
}