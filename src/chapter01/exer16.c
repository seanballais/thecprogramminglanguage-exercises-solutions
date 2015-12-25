#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    /* Print the length of the string and as much of the input lines. */
    int len;
    int max = 0;
    char inputLine[MAXLINE];
    char longest[MAXLINE];

    while ((len = getline(inputLine, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, inputLine);
        }
    }

    if (max > 0) {
        printf("Longest Line Length: %d\n", max);
        printf("%s\n", longest);
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

void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}