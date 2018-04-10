#include <cs50.h>
#include <stdio.h>

//PRjm: I did the same thing, but could put 12 in a variable to avoid hard coded "magic number"

int main(void)
{
    int minutes;
    do
    {
        minutes = get_int("Minutes: "); // Prompts user to put in an integer

    }
    while (minutes < 0);

    int bottles = minutes * 12; // the var bottles gets assigned the formula to determine how many bottles they will use
    // int bottles = (minutes * 192) / 16; // OR do this. what's the difference?

    printf("Bottles: %i\n", bottles); // prints the result
}