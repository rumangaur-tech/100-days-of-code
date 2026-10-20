#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int max = 0, count, found;

    scanf("%999s", s);

    int n = strlen(s);

    for(int i = 0; i < n; i++) {
        count = 0;

        for(int j = i; j < n; j++) {
            found = 0;

            for(int k = i; k < j; k++) {
                if(s[k] == s[j]) {
                    found = 1;
                    break;
                }
            }

            if(found == 1) {
                break;
            }

            count++;

            if(count > max) {
                max = count;
            }
        }
    }

    printf("%d", max);

    return 0;
}
