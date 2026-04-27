#include <stdio.h>

int main(void) {
    int a, b;
    float x, y;

    if (scanf("%d %d", &a, &b) != 2) return 0;
    if (scanf("%f %f", &x, &y) != 2) return 0;

    printf("%d %d\n", a + b, a - b);
    printf("%.1f %.1f\n", x + y, x - y);

    return 0;
}
