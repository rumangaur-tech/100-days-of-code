#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp1, *fp2;
    int ch;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening file.\n");
        if (fp1 != NULL) fclose(fp1);
        if (fp2 != NULL) fclose(fp2);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(toupper(ch), fp2);
    }

    printf("File converted successfully.\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
