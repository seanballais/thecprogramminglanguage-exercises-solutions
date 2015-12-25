#include <stdio.h>

#define MAX_LINE 1000

int getline(char s[], int maxline);

int main(void)
{
    /* Print all input lines that are longer than 80 characters. */
    int len;
    char inputLine[MAX_LINE];

    while ((len = getline(inputLine, MAX_LINE)) > 0) {
        if (len > 80) {
            printf("%s\n", inputLine);
        }
    }

    return 0;
}

int getline(char s[], int maxline)
{
    int i, c;

    for (i = 0; i < maxline && (c = getchar()) != EOF && c != '\n' && c != '\0'; i++) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        i++;
    }

    s[i] = '\0';

    return i;
}
