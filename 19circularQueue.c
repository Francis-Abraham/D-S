#include <stdio.h>
#include <stdlib.h>
#define size 5
int main()
{
    int arr[size], R = -1, F = 0, count = 0, ch, n, i, x;
    for (;;) // An infinite loop
    {

        printf("\n1. Add");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (count == size)
            {
                printf("Queue is full");
            }
            else
            {
                printf("Enter a number ");
                scanf("%d", &n);
                R = (R + 1) % size;
                arr[R] = n;
                count = count + 1;
            }
            break;
        case 2:
            if (count == 0)
            {
                printf("Queue is empty");
            }
            else
            {
                printf("Number Deleted = %d", arr[F]);
                F = (F + 1) % size;
                count = count - 1;
            }
            break;
        case 3:
            if (count == 0)
            {
                printf("Queue is empty");
            }
            else
            {
                x = F;
                for (i = 1; i <= count; i++)
                {
                    printf("%d ", arr[x]);
                    x = (x + 1) % size;
                }
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Wrong Choice");
        }
    }
    return 0;
}