#include <stdio.h>
#include "queue.h"

void initQueue(queue* q) {
    q->front = -1;
    q->rear = -1;
}

int isEmpty(queue* q) {
    return q->front == -1;
}

int isFull(queue* q) {
    return q->rear == MAX - 1;
}

void enqueue(queue* q, int value) {
    if (isFull(q)) {
        printf("Queue Overflow\n");
        return;
    }

    if (isEmpty(q))
        q->front = 0;

    q->arr[++q->rear] = value;
    printf("Enqueued %d\n", value);
}

void dequeue(queue* q) {
    if (isEmpty(q)) {
        printf("Queue Underflow\n");
        return;
    }

    printf("Dequeued %d\n", q->arr[q->front]);

    if (q->front == q->rear)
        q->front = q->rear = -1;
    else
        q->front++;
}

void peek(queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Front element: %d\n", q->arr[q->front]);
}

void display(queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements:\n");
    for (int i = q->front; i <= q->rear; i++)
        printf("%d ", q->arr[i]);
    printf("\n");
}
