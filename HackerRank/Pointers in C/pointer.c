#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
    int A = *a;
    int B = *b;
    *a = A + B;
    *b = (A > B) ? (A - B) : (B - A);
}

int main(void) {
    int x, y;
    if (scanf("%d %d", &x, &y) != 2) return 0;
    update(&x, &y);
    printf("%d\n%d\n", x, y);
    return 0;
}
