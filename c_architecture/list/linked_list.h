#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
typedef struct Node {
    int data;              // Data part of the node
    struct Node* next;     // Pointer to the next node
} Node;

// Define the structure for the linked list
typedef struct List {
    Node* head;           // Pointer to the head node of the list
} List;

// Function prototypes

// Create a new list
List* createList();

// Create a new node
Node* createNode(int data);

//Function to destroy the list
void destroy_list(List* this);

// Insert a node at the beginning
void insertAtBeginning(List* list, int data);

// Insert a node at the end
void insertAtEnd(List* list, int data);

//Insert data at given position
void insert(List* this, size_t pos, int value);

// Delete a node by value
void deleteNode(List* list, int data);

//Find given element in a list
int find(const List* this, int value);

//Reverse List
void reverse(List* this);

//Sorting
void sort(List* this);

// Display the linked list
void displayList(const List* list);

// Free the linked list
void freeList(List* list);

#endif // LINKED_LIST_H