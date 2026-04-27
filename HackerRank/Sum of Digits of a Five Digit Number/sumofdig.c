#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    n = n < 0 ? -n : n;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += n % 10;
        n /= 10;
    }
    printf("%d\n", sum);
    return 0;
}
