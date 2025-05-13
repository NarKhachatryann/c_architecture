#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* my_realloc(void* ptr, size_t new_size){
    if(ptr == 0){
        return malloc(new_size);
    }

    if(new_size == 0){
        free(ptr);
        return NULL;
    }

    void *new_ptr = malloc(new_size);
    if(new_ptr == NULL){
        return NULL;
    }

    memcpy(new_ptr, ptr, new_size);

    free(ptr);

}

void* my_calloc(int num, size_t size){
    void* ptr = malloc(num * size);
    if(ptr == NULL){
        return NULL;
    }

    memset(ptr, 0, num * size);

    return ptr;
}