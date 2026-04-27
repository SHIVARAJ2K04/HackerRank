#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1010];
    if (scanf("%s", s) != 1) return 0;

    int cnt[10] = {0};
    for (size_t i = 0; i < strlen(s); ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            cnt[s[i] - '0']++;
        }
    }

    for (int d = 0; d < 10; ++d) {
        printf("%d", cnt[d]);
        if (d < 9) printf(" ");
    }
    printf("\n");
    return 0;
}
