#include <stdio.h>

#define IN  1 /* inside the tab spaces */
#define OUT 0 /* outside the tab spaces */

int main()
{
    /* Make tabs, backspaces, and backslashes visible. */
    int c, state = OUT;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && state == IN) {
            state = OUT;
        }

        if (c == '\t') {
            state = IN;
            printf("\\t");
        } else if (c == '\b') {
            printf("\\b");
        } else if (c == '\\') {
            printf("\\");
        }

        if (state == OUT) {
            putchar(c);
        }
    }

    return 0;
}