// Stack structure
#include <stdio.h>
#include <stdlib.h>

#define MAX 100  
typedef struct Stack {
    int arr[MAX];
    int top;
}Stack;

// Function prototypes for Stack
void initializeStack(struct Stack* stack) {
    stack ->top = -1;
}
int isStackFull(struct Stack* stack) {
    if(stack ->top == MAX - 1) {
        return stack ->top == MAX - 1;
    }
    return 0;
}
int isStackEmpty(struct Stack* stack) {
    if (stack ->top == -1) {
        return 1;
    }
    return 0;
}
void push(struct Stack* stack, int data) {
    if(stack -> top == MAX - 1) {
        printf("StackOverflow");
        return;
    }
    stack ->top++;
    stack ->arr[stack ->top] = data;
}
int pop(struct Stack* stack) {
    if(stack ->top == -1) {
        printf("Stack underflow");
        return -1;
    }
    stack ->arr[stack ->top--];
    return stack ->arr[stack ->top];
}
int peek(struct Stack* stack) {
    if(stack ->top == -1) {
        printf("Stack is empty\n");
    }
    return stack ->arr[stack ->top];
}
void displayStack(struct Stack* stack) {
    if(stack ->top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack Elements:\n");

        for(int i = stack ->top; i >= 0; --i) {
            printf("%d", stack ->arr[i]);
        }
        printf("\n");
    }
}
int main () {
    
    Stack *stack = (Stack*) malloc(sizeof(Stack));
    initializeStack(stack);
}