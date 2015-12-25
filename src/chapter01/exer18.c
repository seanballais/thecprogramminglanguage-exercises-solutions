#include <stdio.h>
#include <ctype.h>

#define MAX_LINE 1000

int getline(char s[], int maxline);

int main(void)
{
    /* Remove all trailing blanks ands from each line of input and delete entirely blank lines. */
    int len;
    int wordStartPos = -1;
    int wordEndPos = -1;
    char inputLine[MAX_LINE];
    char outputLine[MAX_LINE];

    while ((len = getline(inputLine, MAX_LINE)) > 0) {
        for (int char_pos = 0; char_pos < len; char_pos++) { // Trim the line
            char currChar = inputLine[char_pos];
            if (isalpha(currChar)) { // Found a legit character
                if (wordStartPos < 0) {
                    wordStartPos = char_pos;
                } else {
                    wordEndPos = char_pos;
                }
            }
        }

        if (wordEndPos >= wordStartPos) {
            for (int char_pos = 0; char_pos < (wordEndPos - wordStartPos) + 1; char_pos++) {
                outputLine[char_pos] = inputLine[char_pos + wordStartPos];
            }

            outputLine[(wordEndPos - wordStartPos) + 1] = '\0';
        }
    }

    printf("%s\n", outputLine); // Not part of the exercise but adding this to remove the warning during compilation

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
