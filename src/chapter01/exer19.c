#include <stdio.h>
#include <string.h>

#define MAX_LINE 1000

int getline(char s[], int maxline);
void reverse(char s[]);

int main(void)
{
    /* Reverse the input one line at a line. */
    int len = 0;
    char inputLine[MAX_LINE];

    while ((len = getline(inputLine, MAX_LINE)) > 0) {
        reverse(inputLine);
        printf("%s\n", inputLine); // Not necessary for the exercise.
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

void reverse(char s[])
{
    int startChar = 0;
    int endChar = strlen(s) - 1;
    while (startChar < endChar) {
        int tmpChar = s[endChar];
        s[endChar] = s[startChar];
        s[startChar] = tmpChar;

        startChar++;
        endChar--;
    }
}
