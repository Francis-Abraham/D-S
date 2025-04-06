#include <stdio.h>
#define MAX 15
int stack[MAX], top = -1, item;
void push();
void pop();
void display();
int main()
{
    printf("\n\t\t\t*** STACK OPERATION ***\n");
    int ch;
    do
    {
        printf("\nMenu : ");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("\nInvalid Entry");
        }
    } while (ch != 4);
    return 0;
}
void push()
{
    if (top == MAX - 1)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        top++;
        printf("\nEnter an item: ");
        scanf("%d", &item);
        stack[top] = item;
        printf("\nInserted successfully");
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        item = stack[top];
        top--;
        printf("\n%dDeleted successfully", item);
    }
}
void display()
{
    if (top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
