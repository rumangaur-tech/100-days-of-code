#include <stdio.h>

enum Month {
    JANUARY = 1, FEBRUARY, MARCH, APRIL,
    MAY, JUNE, JULY, AUGUST,
    SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    enum Month m;

    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    for (m = JANUARY; m <= DECEMBER; m++) {
        int days;

        if (m == FEBRUARY)
            days = 28;
        else if (m == APRIL || m == JUNE ||
                 m == SEPTEMBER || m == NOVEMBER)
            days = 30;
        else
            days = 31;

        printf("%s = %d days\n", months[m - 1], days);
    }

    return 0;
}
