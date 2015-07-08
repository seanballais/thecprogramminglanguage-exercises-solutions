#include <stdio.h>

#define IN  1 /* inside a word */
#define OUT 0 /* outside a word */

int main()
{
    /* Print every word on a new line. */
    int c, newLineOccurence = 0, state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        } else {
            state = IN;
            newLineOccurence = 0;
            putchar(c);
        }

        if (newLineOccurence == 0 && state == OUT) {
            newLineOccurence++;
            printf("\n");
        }
    }

    return 0;
}