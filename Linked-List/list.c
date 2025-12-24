#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//Initialize the list 
void initList(start* list) {
    list->head = NULL;
}

// Create a new node 
static node* createNode(int data) {
    node* newNode = (node*)malloc(sizeof(node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->info = data;
    newNode->next = NULL;
    return newNode;
}

// Insert at beginning 
void insertAtBeginning(start* list, int data) {
    node* newNode = createNode(data);
    if (!newNode) return;

    newNode->next = list->head;
    list->head = newNode;
}

// Insert at end 
void insertAtEnd(start* list, int data) {
    node* newNode = createNode(data);
    if (!newNode) return;

    if (list->head == NULL) {
        list->head = newNode;
        return;
    }

    node* temp = list->head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Delete node by value 
void deleteByValue(start* list, int key) {
    if (list->head == NULL) {
        printf("List is empty\n");
        return;
    }
    node* temp = list->head;
    node* prev = NULL;

    // If head node holds the key
    if (temp != NULL && temp->info == key) {
        list->head = temp->next;
        free(temp);
        return;
    }

    // Search for the key
    while (temp != NULL && temp->info != key) {
        prev = temp;
        temp = temp->next;
    }

    // Key not found
    if (temp == NULL)
        return;

    prev->next = temp->next;
    free(temp);
}

// Display the list
void display(start* list) {
    node* temp = list->head;

    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL) {
        printf("%d -> ", temp->info);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Count number of nodes 
int length(start* list) {
    int count = 0;
    node* temp = list->head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Search an element 
int search(start* list, int key) {
    node* temp = list->head;

    while (temp != NULL) {
        if (temp->info == key)
            return 1;   // Found
        temp = temp->next;
    }
    return 0;           // Not found
}

// Reverse the linked list
void reverseList(start* list) {
    node* prev = NULL;
    node* curr = list->head;
    node* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    list->head = prev;
}

// Free entire list (prevent memory leak)
void freeList(start* list) {
    node* temp;

    while (list->head != NULL) {
        temp = list->head;
        list->head = list->head->next;
        free(temp);
    }
}
