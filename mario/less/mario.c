#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n; // declaring variable n for use later
    int brick = 2;
    char *s = " ";
    int count;

    // Prompt user for a number between 0 and 23. Assigns count to the user input for height - 1, to create enough spaces
    do
    {
        n = get_int("Height: ");
        count = n -1;
    }
    while (n < 0 || n > 23);

    // Print this many rows
    for (int i = 0; i < n; i++)
    {
        // Prints out the correct amount of spaces for the first row of bricks, using the count variable
        printf("%*.s", count, s);
        // Print out this many columns
        for (int j = 0; j < brick; j++)
        {
            printf("#");
        } // ends the "j" for loop
        // Prints a line break after the row is complete, then increments brick and decrements count, to ensure next row is correct
        printf("\n");
        brick++;
        count--;
    } // ends the "i" for loop
}
