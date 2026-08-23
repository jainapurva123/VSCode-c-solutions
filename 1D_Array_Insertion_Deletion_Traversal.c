#include <stdio.h>

int main()
{
    int a[100], n, i, pos, value, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n1. Traversal");
    printf("\n2. Insertion");
    printf("\n3. Deletion");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Array elements are:\n");

            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }

            break;

        case 2:
            if (n >= 100)
            {
                printf("Array is full. Cannot insert.");
                break;
            }

            printf("Enter position for insertion (1 to %d): ", n + 1);
            scanf("%d", &pos);

            if (pos < 1 || pos > n + 1)
            {
                printf("Invalid position.");
                break;
            }

            printf("Enter value: ");
            scanf("%d", &value);

            for (i = n; i >= pos; i--)
            {
                a[i] = a[i - 1];
            }

            a[pos - 1] = value;
            n++;

            printf("Array after insertion:\n");

            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }

            break;

        case 3:
            printf("Enter position for deletion (1 to %d): ", n);
            scanf("%d", &pos);

            if (pos < 1 || pos > n)
            {
                printf("Invalid position.");
                break;
            }

            for (i = pos - 1; i < n - 1; i++)
            {
                a[i] = a[i + 1];
            }

            n--;

            printf("Array after deletion:\n");

            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }

            break;

        default:
            printf("Invalid choice.");
    }

    return 0;
}