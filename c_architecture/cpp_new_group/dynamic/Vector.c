#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *arr;
    int size;
    int capacity;

}vector;

vector * vector_init() 
{
    vector* v = (vector*) malloc(sizeof(vector)* 1);
    v -> capacity = 10;
    v -> arr = (int*) malloc(sizeof(int) * v -> capacity);
    v -> size = 0;

    return v;
}

vector* vector_init_size(int size) {
    vector* v = (vector*) malloc(sizeof(vector));
    v -> size = 0;
    v -> capacity = size;
    v -> arr = (int*) malloc (sizeof(int) * v -> capacity);

    return v;
}

vector* vector_init_fill(int size, int value) {
    vector* v = (vector*) malloc(sizeof(vector));
    v -> capacity = size;
    v -> arr = (int*) malloc(sizeof(int) * v -> capacity);

    for (int i = 0; i < size; ++i) {
        v -> arr[i] = value;
    }
    v -> size = size;
    return v;
}

void vector_copy(vector* new_arr, const vector* v) {
    new_arr -> arr = (int*)malloc(sizeof(int) * (v -> capacity));
		new_arr -> size = v -> size;
		new_arr -> capacity = v -> capacity;

        for (int i = 0; i < (v -> size); ++i) {
            new_arr -> arr[i] = v -> arr[i];
        }
}

void printVector(vector* v) {
    for(int i = 0; i < v -> size; ++i) {
        printf("%d,", v -> arr[i]);
    }
    printf("\n");
}

void destroy_Vector(vector* v) {
    free(v -> arr);
    free(v);    
}

vector* vector_assign(vector* dest, const vector* v) {
    if (dest -> arr != NULL) {
        free(dest -> arr);
    }

    vector_copy(dest,v);

    return dest;
}

int* vector_at(vector* v, int index) {
    if (index < 0 || index > (v -> size)) {
        return NULL;
    }
    if(index < 0) {
        return NULL;
    }
    return &(v -> arr[index]);
}

int* vector_front(vector* v) {
    if (v -> arr == NULL) {
        return NULL;
    }

    return &(v -> arr[0]);
}

int* vector_back(vector* v) {
    if (v -> arr == NULL) {
        return NULL;
    }

    return &(v -> arr[(v -> size) - 1]);
}

int vector_empty(const vector* v) {
    if(v -> size == 0) {
        return 1;
    }
    return 0;
}

int vector_size(const vector* v) {
    return(v -> size);
}

int vector_capacity(const vector* v) {
    return(v -> capacity);
}

void vector_reserve(vector* v, int new_cap) {
    if ((v -> capacity) < new_cap) {
        v -> capacity = new_cap;
        (v -> arr) = (int*) realloc((v -> arr), (v -> capacity) * sizeof(int));
    
    } else if ((v -> capacity) > new_cap && new_cap > v -> size) {
        v -> capacity = new_cap;
        v -> arr = (int*) realloc((v -> arr), v -> capacity * sizeof(int));
    
    } else if ((v -> capacity) < new_cap && new_cap < (v -> size)) {
        v -> capacity = v -> size = new_cap;
        v -> arr = (int*) realloc((v -> arr), v -> capacity * sizeof(int));
    }
}

void vector_clear(vector* v) {
    for (int i = 0; i < v -> size; ++i) {
        v -> arr[i] = 0;
    }
    v -> size = 0;
}

void vector_resize(vector* v, int count) {
    if (count < v -> size) {
        v -> size = count;
    }
    
    if(count > v -> size && count < v -> capacity) {
        v -> size = count;
    }
    
    if (count > v -> capacity) {
        v -> arr = (int*) realloc(v -> arr, (count*2) * sizeof(int));
    }

}

void vector_push_back(vector* v, int elm) {
    if (v -> size == v -> capacity) {
        vector_resize(v,10);
    }
    
    v -> arr[(v -> size++)] = elm;
}

void vector_pop_back(vector* v) {
    v -> arr[(v -> size) - 1] = 0;
    v -> size--;
}

void vector_insert(vector* v, int pos, int value) {
    if (v -> size < pos < v -> capacity) {
        vector_resize(v,pos);
    } else if (v -> size == v -> capacity) {
        vector_resize(v,(v -> size * 2));
    }

    v -> arr[pos] = value;
}

void vector_erase(vector* v, int pos) {
        (v -> arr[pos]) = 0;
        if (pos < 0 || pos > (v -> size)) {
            printf("The position doesn't exist\n");
            return;
        }

    for (int i = pos; i < (v -> size) - 1; ++i) {
        (v -> arr[i]) = (v -> arr[i + 1]);
    }

    (v -> size)--;
}

void vector_swap (vector* v1, vector* v2) {
    if(v1 -> capacity == v2 -> capacity) {}
}

int main() {
    vector* v = vector_init_fill(10,0);
    vector* new_arr = vector_init_fill(10,0);

    vector_push_back(v,5);
    vector_copy(new_arr,v);
    printVector(v);
    printVector(new_arr);

    destroy_Vector(v);
    destroy_Vector(new_arr);
    return 0;
}