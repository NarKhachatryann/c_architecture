#include <stdio.h>

char recusria(char string[],int i) {
    if(string[i] == '\0') {
        return 0;
    }
    if(string[i] >= 'A' && string[i] <= 'Z') {
        return string[i];
    }
    ++i;
    return recusria(string,i);
}

int main() {
    const int size = 11;
    char string[size] = {};

    printf("Enter your string(10) without space:\n");
    for(int i = 0; i < size; ++i) {
        scanf("%c",&string[i]);
        if(string[i] == '\n') break;
    }
    string[9] = '\0';

    printf("%c\n",recusria(string,0));
}