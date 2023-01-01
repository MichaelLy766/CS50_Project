#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    //declaration integer input
    int input;

    //do while loop for get user input and cooperation for change owed
    do
    {
        input = get_int("Change Owed: ");
    }
    while (input < 0);

    //assign input as function's return value
    return input;
}

int calculate_quarters(int cents)
{
    // TODO
    //counter for number of quaters that goes into integer cents
    int n = 0;

    //do while loop to subtract 25 cents and count each time that subtraction is possible
    while (cents >= 25)
    {
        cents = cents - 25;
        n++;
    }

    //assign n as function's return value
    return n;
}

int calculate_dimes(int cents)
{
    // TODO
    //counter for number of dimes that goes into integer cents
    int n = 0;

    //do while loop to subtract 10 cents and count each time that subtraction is possible
    while (cents >= 10)
    {
        cents = cents - 10;
        n++;
    }

    //assign n as function's return value
    return n;
}

int calculate_nickels(int cents)
{
    // TODO
    //counter for number of nickels that goes into integer cents
    int n = 0;

    //do while loop to subtract 10 cents and count each time that subtraction is possible
    while (cents >= 5)
    {
        cents = cents - 5;
        n++;
    }

    //assign n as function's return value
    return n;
}

int calculate_pennies(int cents)
{
    // TODO
    //counter for number of pennies that goes into integer cents
    int n = 0;

    //do while loop to subtract 1 cent and count each time that subtraction is possible
    while (cents >= 1)
    {
        cents = cents - 1;
        n++;
    }

    //assign n as function's return value
    return n;
}
