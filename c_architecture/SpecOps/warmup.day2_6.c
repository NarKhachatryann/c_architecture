#include <stdio.h>

int main() {
    int n = 0;

    printf("Enter the N number:");
    scanf("%d", &n);
    int zuyg = 0;
    int kent = 0;

    for (int i = 0; i <= n; ++i) {
        if (i % 2 == 0) {
            zuyg += i;
        } else if (i % 2 == 1) {
            kent += i;
        }
    }

    printf("zuyg = %d \nkent = %d\n", zuyg, kent);
    
    return 0;
}