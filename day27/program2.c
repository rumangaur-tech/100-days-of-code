#include <stdio.h>

int main() {
    int i, j, space, stars;

    for (i = 1; i <= 7; i++) {

        // Spaces
        if (i <= 4)
            space = 4 - i;
        else
            space = i - 4;

        for (j = 1; j <= space; j++) {
            printf(" ");
        }

        // Stars
        if (i <= 4)
            stars = 2 * i - 1;
        else
            stars = 2 * (7 - i) + 1;

        for (j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

