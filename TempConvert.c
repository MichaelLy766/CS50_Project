#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float Fahrenheit = 0.0, Celsius = 0.0;
    printf("Option 1: Celsius to Fahrenheit\nOption 2: Fahrenheit to Celsius\n");
    int Option = get_int("Input 1 or 2 to select desired option\n");

    if (Option == 1)
    {
        Celsius = get_float("Temperature in Celsius: ");
        Fahrenheit = ((Celsius * 9)/5) + 32;
        printf("Temperature in Fahrenheit: %f\n", Fahrenheit);
    }
    else if (Option == 2)
    {
        Fahrenheit = get_float("Temperature in Fahrenheit: ");
        Celsius = ((Fahrenheit - 32) * (5/9));
        printf("Temperature in Celsius: %f\n", Celsius);
    }
}