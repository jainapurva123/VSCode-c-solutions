#include <stdio.h>

int getMax(int a[], int n) {
    int max = a[0];
    int i;

    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }

    return max;
}

void countingSort(int a[], int n, int exp) {
    int output[100];
    int count[10] = {0};
    int i;

    // Count occurrences of each digit
    for (i = 0; i < n; i++)
        count[(a[i] / exp) % 10]++;

    // Calculate positions
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build output array
    for (i = n - 1; i >= 0; i--) {
        output[count[(a[i] / exp) % 10] - 1] = a[i];
        count[(a[i] / exp) % 10]--;
    }

    // Copy output back
    for (i = 0; i < n; i++)
        a[i] = output[i];
}

void radixSort(int a[], int n) {
    int max = getMax(a, n);
    int exp;

    for (exp = 1; max / exp > 0; exp *= 10)
        countingSort(a, n, exp);
}

int main() {
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter non-negative integers:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    radixSort(a, n);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}