#ifndef LIST_H
#define LIST_H

// Struture definitions
typedef struct node {
    int info;
    struct node* next;
} node;

typedef struct start {
    node* head;
} start;

// Initialization
void initList(start* list);

// Basic operations
void insertAtBeginning(start* list, int data);
void insertAtEnd(start* list, int data);
void deleteByValue(start* list, int key);
void display(start* list);
void freeList(start* list);

// Extra
int length(start* list);
int search(start* list, int key);
void reverseList(start* list);

#endif // LIST_H