#include <stdio.h>

int main()
{
    /* Verify if getchar() != EOF is 0 or 1 */
    int c;

    while ((c = (getchar() != EOF))) {
        printf("\n%d", c);
    }

    printf("\n%d\n", c);

    return 0;
}