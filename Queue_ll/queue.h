#ifndef QUEUE_H
#define QUEUE_H

typedef struct node {
    int data;
    struct node* next;
} node;

typedef struct queue {
    node* front;
    node* rear;
} queue;

/* Queue operations */
void initQueue(queue* q);
int isEmpty(queue* q);
void enqueue(queue* q, int value);
void dequeue(queue* q);
void peek(queue* q);
void display(queue* q);
void freeQueue(queue* q);

#endif // QUEUE_H
