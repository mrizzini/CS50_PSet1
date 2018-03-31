#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int minutes;
    do
    {
        minutes = get_int("Minutes: "); // Prompts user to put in an integer

    }
    while (minutes < 0);

    int bottles = minutes * 12; // the var bottles gets assigned the formula to determine how many bottles they will use
    printf("Bottles: %i\n", bottles); // prints the result
}