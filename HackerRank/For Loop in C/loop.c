#include <stdio.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 0;

    const char *words[] = {
        "zero","one","two","three","four","five","six","seven","eight","nine"
    };

    for (int i = a; i <= b; ++i) {
        if (i >= 1 && i <= 9) {
            printf("%s\n", words[i]);
        } else {
            if (i % 2 == 0) printf("even\n");
            else printf("odd\n");
        }
    }
    return 0;
}
