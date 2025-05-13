#include "lib.h"

int main(){
    int* buffer = create_buffer();
    int size = 0;
    int element = 5;
    
    push_back(buffer,&size,element);

    printf("Push Back:");
    for(int i = 0; i < size; ++i){
        printf("%d",buffer[i]);
    }

    element = 7;
    printf("Push front:");
    push_front(buffer, &size,element);
    for(int i = 0; i < size; ++i){
        printf("%d",buffer[i]);
    }

}