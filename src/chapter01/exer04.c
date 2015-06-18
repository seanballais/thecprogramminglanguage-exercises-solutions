#include <stdio.h>

int main()
{
    /* Print Celsius-Fahrenheit table
        for fahr = 0, 20, ..., 300; floating point version */


    float fahr, celsius;
    int lower = 0, upper = 300, step = 20;

    printf("Celsius\t\tFahrenheit\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = celsius + (9.0 / 5.0) + 32;
        
        printf("    %3.0f\t\t       %3.0f\n", celsius, fahr);

        celsius += step;
    }

    return 0;
}