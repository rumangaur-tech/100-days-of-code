#include <stdio.h>

int main() {
    long long num;
    int digit, count[10] = {0};
    int max = 0, mostFrequent;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num == 0) {
        count[0] = 1;
    }

    while (num != 0) {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            mostFrequent = i;
        }
    }

    printf("Digit occurring most times: %d\n", mostFrequent);
    printf("It occurs %d times.\n", max);

    return 0;
}
