#include <stdio.h>
#include "stack.h"

// Initialize stack 
void initStack(stack* s) {
    s->top = -1;
}

// Check if empty 
int isEmpty(stack* s) {
    return s->top == -1;
}

// Check if full
int isFull(stack* s) {
    return s->top == MAX - 1;
}

// Push operation 
void push(stack* s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push.\n");
        return;
    }
    s->arr[++s->top] = value;
    printf("Pushed %d\n", value);
}

// Pop operation
void pop(stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop.\n");
        return;
    }
    printf("Popped %d\n", s->arr[s->top--]);
}

// Peek operation
void peek(stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element: %d\n", s->arr[s->top]);
}

// Display stack
void display(stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements:\n");
    for (int i = s->top; i >= 0; i--) {
        printf("%d\n", s->arr[i]);
    }
}
