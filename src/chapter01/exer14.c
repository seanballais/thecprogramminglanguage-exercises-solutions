#include <stdio.h>

int main()
{
    int c, frequency[95];

    for (int i = 0; i < 95; i++) {
        frequency[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= ' ' && c <= '~') {
            frequency[c - ' ']++;
        }
    }

    // Display the horizontal histogram
    printf("\nCharacter Frequency Histogram\nFrequency\n* = 1 instance\n");

    for (int i = 0; i < 95; i++) {
        int character = 32 + i;
        if (character == 32) {
            printf("space\t");
        } else {
            printf("%c\t", 32 + i);
        }

        for (int index = frequency[i]; index > 0; index--) {
            putchar('*');
        }

        putchar('\n');
    }

    printf("============================\n");

    return 0;
}