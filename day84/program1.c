#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status s;
    int choice;

    printf("Enter status (0-Success, 1-Failure, 2-Timeout): ");
    scanf("%d", &choice);

    if (choice < 0 || choice > 2) {
        printf("Invalid status");
        return 0;
    }

    s = choice;

    switch (s) {
        case SUCCESS:
            printf("Operation Successful");
            break;

        case FAILURE:
            printf("Operation Failed");
            break;

        case TIMEOUT:
            printf("Operation Timed Out");
            break;
    }

    return 0;
}
