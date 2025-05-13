#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    size_t length;
    size_t capacity;
    char* data;

}String;

void String_init(String *const this) {
    this -> length = 0;
    this -> capacity = 10;
    this -> data = (char*) malloc(this -> capacity * sizeof(char));

    if (this -> data == NULL) {
        printf("Memory allocation failled\n");
    }

    this -> data[0] = '\0';
}

void String_init_size(String* this, size_t new_cap) {
    this -> capacity = new_cap;
    this -> data = (char*) malloc (new_cap * sizeof(char));
    this -> length = 0;
    this -> data[0] = '\0';
}

void String_init_fill(String* this, size_t new_size, char value) {
    this -> capacity = new_size;
    this -> data = (char*) malloc (new_size * sizeof(char));
    this -> length = new_size;
    
    for (int i = 0; i < new_size; ++i) {
        this -> data[i] = value;
    }
     this -> data[new_size] = '\0';
}

void string_copy(String* this, const String* other) {
    if (this ->capacity < other ->capacity) {
        this -> data = (char*) realloc (this -> data, other -> capacity * sizeof(char));
        this ->capacity = other ->capacity;
        this -> length = other ->length;
    }

    if (this -> capacity > other -> capacity || this -> capacity == other -> capacity) {
        this ->capacity = other ->capacity;
        this -> length = other ->length;
    }

    for (int i = 0; i < other ->length; ++i) {
        this ->data[i] = other ->data[i];
    }

    this ->data[this -> length] = '\0';
}

void createString(String* this, const char *str) {
    this ->length = strlen(str);
    this ->capacity = strlen(str) + 1;

    for(int i = 0; i <= strlen(str); ++i) {
        this ->data[i] = str[i];
    }
}

String* string_assign(String* this, const String* other) {
    if (this ->capacity > this ->length > other ->length) {
        for(int i = 0; i < other ->length; ++i) {
            this ->data[i] = other ->data[i];
        }
    } else if(this ->capacity > other ->length > this -> length) {
        this ->length = other ->length;
        
        for(int i = 0; i < other ->length; ++i) {
            this ->data[i] = other ->data[i];
        }
    } else if(other ->length > this ->capacity) {
        this ->data = (char*) realloc(this ->data, other ->capacity * sizeof(char));
        this ->length = other ->length;
        this ->capacity = other ->capacity;

        for(int i = 0; i < other ->length; ++i) {
            this ->data[i] = other ->data[i];
        }
    }
}

void destroyString(String *this) {
    for (int i = 0; i < this ->length; ++i) {
        this ->data[i] = 0;
    }
    this -> length = 0;
}

char* at(const String *this, size_t index) {
    if (index > this ->length) {
        return NULL;
    }
    return (this -> data + index);
}

char* string_front(String* this) {
    if(this -> length == 0) {
        return NULL;
    }
    return &(this -> data[0]);
}

char* string_back(String* this) {
    if(this -> length == 0) {
        return NULL;
    }

    return &(this -> data[this -> length - 1]);
}

int empty(String* this) {
    if(this -> length == 0) {
        return 1;
    } else {
        return 0;
    }
}

void append(String *this, const String *other) {
    this ->length = other ->length;
    if (this ->capacity > this ->length > other ->length) {
        for(int i = this ->length; i < other ->length; ++i) {
            this ->data[i] = other ->data[i];
        }
        this ->length = other ->length;
    } else if(this ->capacity > other ->length > this -> length) {
        this ->length = other ->length;
        
        for(int i = this ->length; i < other ->length; ++i) {
            this ->data[i] = other ->data[i];
        }
        this ->length = other ->length;
    } else if(other ->length > this ->capacity) {
        this ->data = (char*) realloc(this ->data, other ->capacity * sizeof(char));
        this ->capacity = other ->capacity;

        for(int i = this ->length; i < other ->length; ++i) {
            this ->data[i] = other ->data[i];
        }
        this ->length = other ->length;
    }
    
}

void string_push_back(String* this, int value) {
    if (this-> length == this ->capacity) {
        this -> data = (char*) realloc (this -> data, this -> capacity * 2 * sizeof(char));
        this ->capacity *= 2;
    }
}

int main() {
    String* this = (String*) malloc(sizeof(String));

    String_init(this);

    free(this -> data);
    free(this);
    return 0;
}
