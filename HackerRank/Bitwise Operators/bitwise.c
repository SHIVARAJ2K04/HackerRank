#include <stdio.h>

int main(void) {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;

    int max_and = 0, max_or = 0, max_xor = 0;
    for (int a = 1; a <= n; ++a) {
        for (int b = a + 1; b <= n; ++b) {
            int v;
            v = a & b;
            if (v < k && v > max_and) max_and = v;
            v = a | b;
            if (v < k && v > max_or) max_or = v;
            v = a ^ b;
            if (v < k && v > max_xor) max_xor = v;
        }
    }

    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
    return 0;
}
