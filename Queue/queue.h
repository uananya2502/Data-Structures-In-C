#ifndef QUEUE_H
#define QUEUE_H

#define MAX 100

typedef struct queue {
    int arr[MAX];
    int front;
    int rear;
} queue;

// Queue operations
void initQueue(queue* q);
int isEmpty(queue* q);
int isFull(queue* q);
void enqueue(queue* q, int value);
void dequeue(queue* q);
void peek(queue* q);
void display(queue* q);

#endif // QUEUE_H
