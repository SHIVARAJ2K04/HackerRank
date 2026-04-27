#include <stdio.h>

int main(void) {
    char ch;
    char s[100];
    char line[200];

    /* read single character (skips leading whitespace) */
    if (scanf(" %c", &ch) != 1) return 0;

    /* read a string (stops at whitespace) */
    if (scanf("%s", s) != 1) return 0;

    /* consume leftover newline before reading the full line */
    int c = getchar();
    if (c != '\n' && c != EOF) { /* if not newline, keep consuming until newline */
        while ((c = getchar()) != '\n' && c != EOF) { }
    }

    /* read the full line (including spaces) */
    if (fgets(line, sizeof(line), stdin) == NULL) line[0] = '\0';

    /* remove trailing newline from fgets, if present */
    size_t i = 0;
    while (line[i]) {
        if (line[i] == '\n') { line[i] = '\0'; break; }
        i++;
    }

    printf("%c\n%s\n%s\n", ch, s, line);
    return 0;
}
