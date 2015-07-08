#include <stdio.h>

int main()
{
    /* Count the number of blanks, tabs, and newlines given a value. */
    int c, nBlanks, nTabs, nNewLines;
    nBlanks = nTabs = nNewLines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            nBlanks++;
        } else if (c == '\t') {
            nTabs++;
        } else if (c == '\n') {
            nNewLines++;
        }
    }

    printf("Word Counting Program\n=======================\n");
    printf("No. of Blanks: %d\nNo. of Tabs: %d\nNo. of New Lines: %d\n", nBlanks, nTabs, nNewLines);

    return 0;
}