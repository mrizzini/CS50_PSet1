#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

    int cardNum;
    //int lastDigit;
    int secondLastDigit;

    do
    {
        cardNum = get_long_long("Number: ");
    }
    while (cardNum <= 0);

    secondLastDigit = (cardNum / 10) % 10;

    // for (int i = 0; i < )

    while(cardNum)
    {
        printf("%d\n", cardNum % 10);
        cardNum /= 10;
    }



    //  printf("last Digit is %i\n", cardNum);



}
