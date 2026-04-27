#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) arr[i] = 0;
    }

    /* print reversed */
    for (int i = n - 1; i >= 0; --i) {
        printf("%d", arr[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");
    return 0;
}
