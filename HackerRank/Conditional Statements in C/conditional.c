#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    if (n == 1) puts("one");
    else if (n == 2) puts("two");
    else if (n == 3) puts("three");
    else if (n == 4) puts("four");
    else if (n == 5) puts("five");
    else if (n == 6) puts("six");
    else if (n == 7) puts("seven");
    else if (n == 8) puts("eight");
    else if (n == 9) puts("nine");
    else puts("Greater than 9");

    return 0;
}
