#include "lib.h"
#define KEY 10
#define VALUE 10

int index = 0;

char* create_buffer(){
    char* buffer = (char*)mmap(NULL, 4096,PROT_READ | PROT_WRITE,MAP_SHARED | MAP_ANON,-1,0);
    if(buffer == MAP_FAILED){
        perror("mmap Failed");
        exit(EXIT_FAILURE);
    }
    return buffer;
}

void set_value(char* buffer, const char* key, const char* value){
    buffer[index] = *key;
    index += KEY;
    buffer[index] = *value;
    index += VALUE;
}

void get_value(char* buffer, const char* key, char* value){
    for(int i = 0; i < index; i += KEY + VALUE){
        if(strcmp(&buffer[i], key)){
            value = &buffer[i];
        }
    }
}