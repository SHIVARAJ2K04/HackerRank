#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    if (d > m) m = d;
    return m;
}

int main(void) {
    int a, b, c, d;
    if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4) return 0;
    printf("%d\n", max_of_four(a, b, c, d));
    return 0;
}
