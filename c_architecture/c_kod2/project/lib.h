#ifndef LIB
#define LIB

#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <assert.h>

int* create_buffer();
void push_front(int* buffer, int* size, const int element);
void push_back(int* buffer, int* size, int element);
void remove_element(int* buffer, int* size, const int index);
void current_state(int* buffer, const int size);
void destroy_buffer(int** buffer, int* size);

#endif

