#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure to represent a queue
struct Queue
{
    int items[MAX_SIZE];
    int front;
    int rear;
};

// Function to initialize a queue
void initializeQueue(struct Queue *q)
{
    q->front = -1;
    q->rear = -1;
}

// Function to check if the queue is full
int isFull(struct Queue *q)
{
    return (q->rear == MAX_SIZE - 1);
}

// Function to check if the queue is empty
int isEmpty(struct Queue *q)
{
    return (q->front == -1 && q->rear == -1);
}

// Function to add an element to the queue (enqueue)
void enqueue(struct Queue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue Full\n");
        return;
    }
    if (isEmpty(q))
    {
        q->front = 0;
        q->rear = 0;
    }
    else
    {
        q->rear++;
    }
    q->items[q->rear] = value;
}

// Function to remove an element from the queue
int dequeue(struct Queue *q)
{
    int removedItem;
    if (isEmpty(q))
    {
        printf("Queue Empty\n");
        return -1;
    }
    removedItem = q->items[q->front];
    if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else
    {
        q->front++;
    }
    return removedItem;
}

// Function to get the front element of the queue
int front(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("The queue is empty.\n");
        return -1;
    }
    return q->items[q->front];
}

// Function to get the rear element of the queue
int rear(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("The queue is empty.\n");
        return -1;
    }
    return q->items[q->rear];
}

// Function to print the elements of the queue
void printQueue(struct Queue *q)
{
    int i;
    if (isEmpty(q))
    {
        printf("The queue is empty.\n");
        return;
    }
    printf("Queue: ");
    for (i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

// Main function
int main()
{
    struct Queue q;
    initializeQueue(&q);
    int choice, element;

    printf("\nQueue Operations:\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Print Front\n");
    printf("4. Print Rear\n");
    printf("5. Print Queue\n");
    printf("6. Exit\n");

    do
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element to enqueue: ");
            scanf("%d", &element);
            enqueue(&q, element);
            break;
        case 2:
            printf("Dequeued element: %d\n", dequeue(&q));
            break;
        case 3:
            printf("Front element: %d\n", front(&q));
            break;
        case 4:
            printf("Rear element: %d\n", rear(&q));
            break;
        case 5:
            printQueue(&q);
            break;
        case 6:
            printf("Exit\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 6);

    return 0;
}