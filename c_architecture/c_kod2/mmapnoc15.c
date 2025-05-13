#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <assert.h>

int size = 3;
int* create_matrixd(){
    int size = 3;

    int* matrix = (int*)mmap(NULL, 4096,PROT_READ | PROT_WRITE,MAP_SHARED | MAP_ANON,-1,0);

    printf("Enter the matrix Elements:\n");
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            scanf("%d", &matrix[i * size + j]);
        }
        
    }
    return matrix;
}

void print_matrix(int* matrix){
    
    printf("\n");

    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            printf("%d ", matrix[i * size + j]);
            if(j == 2){
            printf("\n");
            }
        }
    }
}
void transpose_matrix(int* buffer){
    for(int i = 0; i < size; ++i){
        for(int j = i + 1; j < size; ++j){
            int temp = buffer[i * size + j];
            buffer[i * size + j] = buffer[j * size + i];
            buffer[j * size + i] = temp;
        }
    }
}

void destroy_matrix(int* buffer){
    munmap(buffer,4096);
}
int main(){
    int* matrix = create_matrixd();
    transpose_matrix(matrix);
    print_matrix(matrix);
}