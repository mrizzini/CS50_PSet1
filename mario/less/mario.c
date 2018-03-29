#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n; // declaring variable n for use later
    int space = 2;
  //  char brick;
  //  int space;

    // Prompt user for a number between 0 and 23
    do
    {
        n = get_int("Height: ");
     //   space = n;
    }
    while (n <= 0 || n >= 23);

    // Print this many rows
    for (int i = 0; i < n; i++)
    {
        // Print out this many columns
        for (int j = 0; j < space; j++)
        {
            printf("#");
        }
        printf("\n");
        space++;
    }

}
      //  space = n - 1;

     //   brick = "#";
   //   char brick[] = "##";
     //   printf("%s\n", brick);
    //    n = space;
    //    printf("%is%s\n", space, brick);
    //    printf("%i\n", space);

    //    n = space;

   //     brick += "#";

       // printf("%i\n", space);
