# Exercise 1-4

Write a program to print the corresponding Celsius to Fahrenheit table.

#include <stdio.h>

/*EJERCICIO 1-4*/

/*print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */

main()
{
    float cel;
    int fahr, lower, upper, step;

    lower = -17.8;      /* lower limit of temperature table*/
    upper = 148.9;    /* upper limit */
    step = 10;      /* step size */

    printf("\tCelsius\t\tFahrenheit\n");
    cel = lower;
    while (cel <= upper) {
        fahr = (cel*9.0/5.0) + 32.0;
        printf("\t   %5.1f\t%6d\n",cel,fahr);
        cel = cel + step;
    }
}
