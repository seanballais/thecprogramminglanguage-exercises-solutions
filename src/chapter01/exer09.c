#include <stdio.h>

#define IN   1 /* inside the space */
#define OUT  0 /* outside the space */

int main()
{
    /* Replace a string of one or more blanks with a single blank. */

    int c, state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' && state == OUT) {
            state = IN;
            putchar(c);
        } else if (c != ' ') {
            state = OUT;
            putchar(c);
        }
    }

    return 0;
}