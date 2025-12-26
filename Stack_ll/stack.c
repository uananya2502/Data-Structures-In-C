#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// Initialize stack 
void initStack(stack* s) {
    s->top = NULL;
}

// Check if stack is empty
int isEmpty(stack* s) {
    return s->top == NULL;
}

// Push operation
void push(stack* s, int value) {
    node* newNode = (node*)malloc(sizeof(node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = value;
    newNode->next = s->top;
    s->top = newNode;

    printf("Pushed %d\n", value);
}

// Pop operation
void pop(stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Stack is empty.\n");
        return;
    }

    node* temp = s->top;
    printf("Popped %d\n", temp->data);
    s->top = temp->next;
    free(temp);
}

// Peek operation 
void peek(stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element: %d\n", s->top->data);
}

// Display stack 
void display(stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }

    node* temp = s->top;
    printf("Stack elements (top to bottom):\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

// Free entire stack 
void freeStack(stack* s) {
    node* temp;
    while (s->top != NULL) {
        temp = s->top;
        s->top = s->top->next;
        free(temp);
    }
}
