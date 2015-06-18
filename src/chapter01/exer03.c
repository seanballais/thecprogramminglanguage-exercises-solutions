#include <stdio.h>

int main()
{
    /* Print Fahrenheit-Celsius table
        for fahr = 0, 20, ..., 300; floating point version */


    float fahr, celsius;
    int lower = 0, upper = 300, step = 20;

    printf(" Fahrenheit\tCelsius\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        
        printf("\t%3.0f\t %6.1f\n", fahr, celsius);

        fahr += step;
    }

    return 0;
}