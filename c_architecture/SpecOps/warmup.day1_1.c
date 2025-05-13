/*Բնական թվերի գումարը
Գրեք ծրագիր 1-ից մինչև n բոլոր բնական թվերի գումարը հաշվարկելու համար:

for (int i = 0; i < n; ++i){
    sum += i;
}

*/
#include <stdio.h>

int main() {
    int n = 0;
    int sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i){
        sum += i;
    }
    printf("%d", sum);
    return 0;
    }