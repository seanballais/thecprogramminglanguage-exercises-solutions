#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

float fahrToCels(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}

int main()
{
    /* Fahrenheit to Celsius table with functions. */
    float fahr;

    fahr = LOWER;

    printf("Fahrenheit to Celsius Table\n F\t   C\n");
    while (fahr <= UPPER) {
        printf("%3.0f\t%6.1f\n", fahr, fahrToCels(fahr));
        fahr = fahr + STEP;
    }

    return 0;
}