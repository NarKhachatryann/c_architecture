/*Բազմապատկման աղյուսակ
Գրի՛ր ծրագիր, որը տպում է տրված թվի բազմապատկման աղյուսակը:
for(int i = 1; i <= 10; ++i){
    printf("%d * %d = %d",i,num,i*num);
}*/

#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);

    for (int i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", i , num, i * num);
    }
    return 0;
}