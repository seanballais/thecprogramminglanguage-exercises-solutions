#include <stdio.h>

#define IN  1 /* inside a word */
#define OUT 0 /* outside a word */

int main()
{
    /* Histogram of the lengths of words in the input.*/
    int c, state = OUT, wordOccurence = 0, tmpLength = 0;
    int length[6];

    for (int i = 0; i < 6;  i++) {
        length[i] = 0;
    }

    // Get the word lengths
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        } else {
            state = IN;
            wordOccurence = 0;
            tmpLength++;
        }

        if (wordOccurence == 0 && state == OUT) {
            wordOccurence++;

            if (tmpLength > 5) {
                tmpLength = 6;
            }

            length[tmpLength - 1]++;
            tmpLength = 0;
        }
    }

    // Display the horizontal histogram
    printf("\nWord Length Histogram\nLength\n");

    for (int i = 0; i < 6; i++) {
        if (i == 5) {
            printf("5+\t");
        } else {
            printf("%d\t", i + 1);
        }

        for (int index = length[i]; index > 0; index--) {
            putchar('*');
        }

        putchar('\n');
    }

    printf("============================\n");

    return 0;
}