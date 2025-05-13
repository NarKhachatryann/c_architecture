#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;              
    struct Node* next;     
} Node;

typedef struct List {
    Node* head;           
} List;

List* createList() {
    List* list = (List*) malloc(sizeof(List));
    list -> head = NULL;
    
    return list;
}
Node* createNode(int value) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode ->next = NULL;
    newNode ->data = value;

    return newNode;
}

void insertAtEnd(List* list, int value) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode ->data = value;
    newNode ->next = NULL;

    if(list ->head == NULL) {
        list -> head = newNode;
    } else {
        Node* count = list -> head;
        while(count ->next != NULL) {
            count = count -> next;
        }
        count -> next = newNode;
    }
}

void insertAtBeginning(List* list, int value) {
    Node* newNode = createNode(value);
    newNode ->next = list -> head;
    list -> head = newNode;
}

void RemoveByValue(List* list, int value) {
    if(list -> head == NULL) {
        return;
    }
    while(list ->head != NULL && list -> head -> data == value) {
        Node* tmp = list -> head;
        list -> head = list -> head -> next;
        free(tmp);
    }
    Node* count = list -> head;
    while (count != NULL && count -> next != NULL) {
        if (count -> next -> data == value) {
            Node* tmp = count -> next;
            count -> next = count -> next -> next;
            free(tmp);
        } else {
            count = count -> next;
        }
    }
}

void printList(List* list) {
    Node* count = list -> head;
    while(count != NULL) {
        printf("%d ", count -> data);
        count = count -> next;
    }
    printf("\n");
}

void freeList(List* list) {
    Node* count = list -> head;
    while (count != NULL) {
        Node* next = count->next;
        free(count);
        count = next;
    }
    free(list);
}

int getListLength(List* list) {
    int count = 0;
    Node* current = list -> head;
    while(current != NULL) {
        count++;
        current = current -> next;
    }
    return count;
}

int searchValue(List* list, int value) {
    int index = 0;
    Node* current = list -> head;
    while(current != NULL) {
        if(current -> data == value) {
            return index;
        }
        ++index;
        current = current -> next;
    }
    return -1;
}

void clearList(List* list) {
    freeList(list);
    list -> head = NULL;
}

int main() {
    List* list = createList();

    insertAtEnd(list, 10);
    insertAtEnd(list, 20);
    insertAtEnd(list, 30);
    printList(list); // Պետք է տպի՝ 10 -> 20 -> 30 -> NULL

    insertAtBeginning(list, 5);
    printList(list); // Պետք է տպի՝ 5 -> 10 -> 20 -> 30 -> NULL

    RemoveByValue(list, 20);
    printList(list); // Պետք է տպի՝ 5 -> 10 -> 30 -> NULL

    freeList(list);
    return 0;
}
