#include <stdio.h>

int main() {
    int a[10][10], rowSum[10];
    int r, c, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter matrix elements:\n");

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate sum of each row
    for (i = 0; i < r; i++) {
        rowSum[i] = 0;

        for (j = 0; j < c; j++) {
            rowSum[i] += a[i][j];
        }
    }

    printf("Sum of each row:\n");

    for (i = 0; i < r; i++) {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
