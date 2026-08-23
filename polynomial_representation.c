#include <stdio.h>

struct Polynomial {
    int coeff;
    int exp;
};

int main() {
    struct Polynomial p[20];
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Enter coefficient and exponent:\n");

    for (i = 0; i < n; i++) {
        printf("Term %d: ", i + 1);
        scanf("%d %d", &p[i].coeff, &p[i].exp);
    }

    printf("\nPolynomial: ");

    for (i = 0; i < n; i++) {
        if (i > 0 && p[i].coeff >= 0)
            printf("+");

        if (p[i].exp == 0)
            printf("%d", p[i].coeff);
        else if (p[i].exp == 1)
            printf("%dx", p[i].coeff);
        else
            printf("%dx^%d", p[i].coeff, p[i].exp);
    }

    printf("\n");

    return 0;
}