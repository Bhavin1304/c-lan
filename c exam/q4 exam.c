#include <stdio.h>

int main() {
    int n, i;
    int a[100], b[100], sum[100];
    int *p1, *p2, *p3;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    // Assign pointers to arrays
    p1 = a;
    p2 = b;
    p3 = sum;

    // Adding arrays using pointers
    for (i = 0; i < n; i++) {
        *(p3 + i) = *(p1 + i) + *(p2 + i);
    }

    printf("Sum of the two arrays:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(p3 + i));
    }

    return 0;
}

