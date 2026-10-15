#include <stdio.h>

int main() {
    int n, k, i, j, max;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if(k < 1 || k > n) {
        return 0;
    }

    for(i = 0; i <= n - k; i++) {
        max = arr[i];

        for(j = i + 1; j < i + k; j++) {
            if(arr[j] > max) {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}
