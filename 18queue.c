#include <stdio.h>
int que[15], n, front = 0, rear = 0, item;
void enqueue();
void dequeue();
void display();
int main()
{
    int ch;
    printf("\nEnter size of queue: ");
    scanf("%d", &n);
    printf("\n\t\t\t***QUEUE OPERATIONS***\n");
    do
    {
        printf("\nMenu:\n1. Insert\n2. Delete\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\nExiting program...\n");
            break;
        default:
            printf("\nInvalid Entry\n");
        }
    } while (ch != 4);
    return 0;
}
// Function to insert an element into the queue
void enqueue()
{
    if (rear == n)
    {
        printf("\nQueue Overflow! Cannot insert more elements.\n");
    }
    else
    {
        printf("\nEnter an item: ");
        scanf("%d", &item);
        que[rear] = item;
        rear++;
        printf("\nInserted Successfully!\n");
        display();
    }
}
// Function to remove an element from the queue
void dequeue()
{
    if (front == rear)
    {
        printf("\nQueue Underflow! No elements to delete.\n");
    }
    else
    {
        printf("\nDeleted item: %d\n", que[front]);
        front++; // Move the front forward
        display();
    }
}
// Function to display the queue elements
void display()
{
    if (front == rear)
    {
        printf("\nQueue is empty.\n");
    }
    else
    {
        printf("\nQueue elements: ");
        for (int i = front; i < rear; i++)
        {
            printf("%d ", que[i]);
        }
        printf("\n");
    }
}
