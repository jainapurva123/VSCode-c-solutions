#include <stdio.h>

struct Polynomial {
    int coeff;
    int exp;
};

int main() {
    struct Polynomial p1[20], p2[20], sum[40];
    int n1, n2, n3 = 0;
    int i = 0, j = 0;

    // First polynomial
    printf("Enter number of terms in first polynomial: ");
    scanf("%d", &n1);

    printf("Enter coefficient and exponent:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d %d", &p1[i].coeff, &p1[i].exp);
    }

    // Second polynomial
    printf("Enter number of terms in second polynomial: ");
    scanf("%d", &n2);

    printf("Enter coefficient and exponent:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d %d", &p2[i].coeff, &p2[i].exp);
    }

    // Add polynomials
    i = 0;
    j = 0;

    while (i < n1 && j < n2) {
        if (p1[i].exp == p2[j].exp) {
            sum[n3].coeff = p1[i].coeff + p2[j].coeff;
            sum[n3].exp = p1[i].exp;
            n3++;
            i++;
            j++;
        }
        else if (p1[i].exp > p2[j].exp) {
            sum[n3] = p1[i];
            n3++;
            i++;
        }
        else {
            sum[n3] = p2[j];
            n3++;
            j++;
        }
    }

    // Copy remaining terms
    while (i < n1) {
        sum[n3] = p1[i];
        n3++;
        i++;
    }

    while (j < n2) {
        sum[n3] = p2[j];
        n3++;
        j++;
    }

    // Display result
    printf("\nSum of two polynomials: ");

    for (i = 0; i < n3; i++) {
        if (i > 0 && sum[i].coeff >= 0)
            printf("+");

        if (sum[i].exp == 0)
            printf("%d", sum[i].coeff);
        else if (sum[i].exp == 1)
            printf("%dx", sum[i].coeff);
        else
            printf("%dx^%d", sum[i].coeff, sum[i].exp);
    }

    printf("\n");

    return 0;
}