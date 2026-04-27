#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int size = 2*n - 1;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottom = size - 1 - i;
            int layer = top;
            if (left < layer) layer = left;
            if (right < layer) layer = right;
            if (bottom < layer) layer = bottom;
            int val = n - layer;
            printf("%d", val);
            if (j < size - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
