#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n; // declaring variable n for use later
    int brick = 1;
    int count = 0;

    // Prompt user for a number between 0 and 23. Assigns count to the user input for height - 1, to create enough spaces
    do
    {
        n = get_int("Height: ");
        count = n - 1;
    }
    while (n < 0 || n > 23);

    // This is the loop for the rows. It is wrapped around the next 4 for loops
    for (int i = 0; i < n; i++)
    {

        // Prints out the correct amount of spaces for the first row of bricks, using the count variable (n - 1)
        for (int num = 0; num < count; num++)
        {
            printf(" ");
        } // ends the "num" for loop

        // Print out the number of bricks needed
        for (int j = 0; j < brick; j++)
        {
            printf("#");
        } // ends the "j" for loop

        // prints out 2 spaces "  ", 1 time to account for the gap
        for (int q = 0; q < 1; q++)
        {
            printf("  ");
        } // ends the "q" for loop

        // prints the same amount of bricks for the other side of the gap
        for (int k = 0; k < brick; k++)
        {
            printf("#");
        } // ends the "k" for loop

        // Prints a line break after the row is complete, then increments brick and decrements count, to ensure next row is correct
        printf("\n");
        brick++;
        count--;
    } // ends the "i" for loop
}
