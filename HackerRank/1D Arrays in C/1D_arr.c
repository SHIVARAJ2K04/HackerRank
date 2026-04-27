#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) return 0;

    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) arr[i] = 0;
    }

    long long sum = 0;
    for (int i = 0; i < n; ++i) sum += arr[i];

    printf("%lld\n", sum);

    free(arr);
    return 0;
}
