#include "lib.h"

int* create_buffer(){
    int* buffer = (int*)mmap(NULL, 4096,PROT_READ | PROT_WRITE,MAP_SHARED | MAP_ANON,-1,0);
    if(buffer == MAP_FAILED){
        perror("mmap Failed");
        exit(EXIT_FAILURE);
    }
    return buffer;
}

void push_front(int* buffer, int* size, const int element){
    for(int i = *size; i > 0; --i){
        buffer[i] = buffer[i - 1];
    }
    buffer[0] = element;
    ++(*size);
}

void push_back(int* buffer, int* size, int element){
    buffer[*size] = element;
    ++(*size);
}

void remove_element(int* buffer, int* size, const int index){
    if(index < 0 || index >= *size){
        printf("Invalid arguments!\n");
        return;
    }
    for (int i = 0; i < *size; ++i)
    {
        if(i == index){
            buffer[i] = 0;
        }
    }
    for (int i = 0; i < *size + 1; ++i)
    {
        if(buffer[i] == 0){
            int tmp = buffer[i];
            buffer[i] = buffer[i + 1];
            buffer[i + 1] = tmp;
        }
    }
    int count = 0;
    for(int i = 0; i < *size; ++i){
        if(buffer[i] == 0){
            ++count;
        }
    }
    *size -= count;
    
}

void current_state(int* buffer, const int size){
    for(int i = 0; i < size; ++i){
        printf("%d",buffer[i]);
    }
}

void destroy_buffer(int** buffer, int* size){
    if(munmap(buffer,4096) == -1){
        perror("Munmap");

    }
}
