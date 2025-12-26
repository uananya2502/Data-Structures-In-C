#ifndef STACK_H
#define STACK_H

/* Node structure */
typedef struct node {
    int data;
    struct node* next;
} node;

/* Stack wrapper */
typedef struct stack {
    node* top;
} stack;

/* Stack operations */
void initStack(stack* s);
int isEmpty(stack* s);
void push(stack* s, int value);
void pop(stack* s);
void peek(stack* s);
void display(stack* s);
void freeStack(stack* s);

#endif // STACK_H
