#include <stdio.h>
#include <stdlib.h>

int inchvor = 0;

int parz(int* size){
    int* parzarr = (int*)malloc(sizeof(int) * (*size));
    int count = 0;

    for(int i = 0; i < *size; ++i){
        if(i <= 1){
            continue;
        }else if(i == 2 || i == 3 || i == 5){
            parzarr[count] = i;
            count++;
            continue;
        }
        if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0){
            continue;
        }
        parzarr[count] = i;
        count++;
    }

    parzarr = (int*)realloc(parzarr, sizeof(int) * count);

    printf("ParzArr:");
    for(int i = 0; i < count; ++i){
        printf(" %d",parzarr[i]);
    }
    printf("\n");
}

int main(){
    int num = 0;

    printf("Enter the number:");
    scanf("%d", &num);

    parz(&num);
}