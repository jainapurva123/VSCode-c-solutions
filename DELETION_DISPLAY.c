#include <stdio.h>

int main() {
    int a[100], n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Display elements
    printf("\nElements before deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    // Deletion
    printf("\n\nEnter position to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position!");
    } else {
        for (i = pos - 1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }

        n--;

        // Display after deletion
        printf("\nElements after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}