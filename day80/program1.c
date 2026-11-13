 #include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, n;
    float marks;

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter student name: ");
        scanf("%49s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n",
                name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    printf("\nStudent Records:\n");

    while (fscanf(fp, "%49s %d %f",
                  name, &roll, &marks) == 3) {
        printf("Name: %s\n", name);
        printf("Roll No: %d\n", roll);
        printf("Marks: %.2f\n\n", marks);
    }

    fclose(fp);

    return 0;
}
