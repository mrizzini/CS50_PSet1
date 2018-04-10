#include <cs50.h>
#include <stdio.h>
#include <math.h>

//PRjm: converting change from float to in and round could potentially be done in smame step

int main(void)
{
    float change; // intializes change float
    int coins = 0; // starts int coins as 0

    do // prompt user for how much change if their input is less than 0
    {
        change = get_float("O hai! How much change is owed?\n");
    }
    while (change < 0);

    change = change * 100; // converts float change to int.             //PRjm: line 18 and 19 could potentially be done in one step
    change = round(change); // rounds it to the nearest integer value

    while (change >= 25) // if change is greater than or = 25. minus 25 from total change, and add coin
    {
        change -= 25;
        coins++;
    }

    while (change >= 10) // if change is greater or = than 10. minus 10 from total change, and add coin
    {
        change -= 10;
        coins++;
    }

    while (change >= 5) // if change is greater than or = 5. minus 5 from total change, and add coin
    {
        change -= 5;
        coins++;
    }

    while (change >= 1) // if change is greater than or = 1. minus 1 from total change, and add coin
    {
        change -= 1;
        coins++;
    }

    printf("Change owed: %i\n", coins); // print the amount of coins

}