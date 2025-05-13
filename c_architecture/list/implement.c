#include "linked_list.h"

/*
typedef struct Node {
    int data;              
    struct Node* next;     
} Node;

typedef struct List {
    Node* head;           
} List;
*/

List* createList() {
    List* arr = (List*) malloc(sizeof(List));
    arr -> head = NULL;

    return arr;
}

Node* createNode(int data) {
    Node* arr = (Node*) malloc(sizeof(Node));
    arr ->next = NULL;
    arr ->data = data;

    return arr;
}

void destroy_list(List* this) {
	Node* current = this ->head;
	Node* next;

	while (current != NULL)
	{
		next = current -> next;
		free(current);
		current = next;
	}

	free(this);
}

void insertAtBeginning(List* list, int data) {
    Node* arr = (Node*) malloc (sizeof(Node));
    arr ->data = data;
    arr ->next = list ->head;
    list -> head = arr;
}

void insertAtEnd(List* list, int data) {
    Node* arr = (Node*) malloc (sizeof(Node));

    arr ->data = data;
    arr ->next = NULL;
    if (list ->head == NULL) {
        list ->head = arr;
    } else {
        Node* count = list ->head;

        while (count ->next == NULL) {
                count = count ->next;
        }
		count ->next = arr;
    }
}

void insertAtPosition(List* this, size_t pos, int value) {
	Node* arr = (Node*) malloc(sizeof(Node));
	arr ->data = value;
	arr ->next = NULL;

	if (pos == 0) {
		arr ->next = this ->head;
		this ->head = arr;
		return;
	}

	Node* current = this ->head;
	for (int i = 0; i < pos - 1; ++i) {
		current = current ->next;
		if (current == NULL) {
			printf("The list is unknown\n");
			return;
		}
	}

	arr ->next = current ->next;
	current ->next = arr;
}

void deleteNode(List* list, int data) {
	Node* previous = NULL;
	Node* current = list -> head;

	if (current == NULL) {
		printf("The list is unknown\n");
	}

	if (current -> data == data) {
		list -> head = current -> next;
		free(current);
		return;
	}

	while (current -> data != data) {
		previous = current;
		current = current ->next;
	}

	if (current == NULL) {
		return;
	}

	previous ->next = current -> next;
	free(current);
	return;
}

int find(const List* this, int value) {}

void reverse(List* this) {}

void sort(List* this) {}

void displayList(const List* list) {
	Node* arr = (Node*) malloc(sizeof(Node));
	arr = list ->head;
	while (arr ->next != NULL)
	{
		printf("%d", arr ->data);
		arr = arr ->next;
	}
	
}

void freeList(List* list) {
	Node* arr = list ->head;
	while (arr != NULL)
	{	Node* tmp = arr;
		arr = arr ->next;
		free(tmp);
	}
	free(list);
}