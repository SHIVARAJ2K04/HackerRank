#include <stdio.h>
#include <string.h>

int main(void) {
    char line[1001];

    /* Read full line including spaces */
    if (!fgets(line, sizeof(line), stdin)) return 0;

    /* Remove trailing newline if present */
    size_t len = strlen(line);
    if (len > 0 && line[len - 1] == '\n') line[len - 1] = '\0';

    /* Tokenize by spaces (handles multiple spaces) */
    char *p = line;
    while (*p) {
        /* Skip leading spaces */
        while (*p == ' ') ++p;
        if (!*p) break;

        /* Find end of word */
        char *start = p;
        while (*p && *p != ' ') ++p;

        /* Temporarily terminate and print */
        char save = *p;
        *p = '\0';
        printf("%s\n", start);
        *p = save;
    }

    return 0;
}
