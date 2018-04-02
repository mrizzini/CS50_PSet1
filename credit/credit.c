#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int cardNum;
    int cardNumOriginal;
    int cardNumSum;
    int test = 0;
    //int lastDigit;
    // int evenSums = 0;
    int secondLastDigitSum = 0;
    // int oddNums = 0;

    do
    {
        cardNumOriginal = get_long_long("Number: ");
        cardNum = cardNumOriginal;
        cardNumSum = cardNumOriginal;
    }
    while (cardNum <= 0);

 //   secondLastDigit += (cardNum / 10) % 10;

    // for (int i = 0; i < )


    while (cardNumSum)
    {
        test += (cardNumSum % 10);
        printf("cardNumSum is %i\n", cardNumSum);
        printf("TEST IS %i\n\n", test);
        cardNumSum /= 100;
    }


    while(cardNum)
    {
        secondLastDigitSum += (cardNum % 100 / 10) * 2;

        // printf("%d\n", cardNum % 10);
        printf("cardNum is %i\n", cardNum);
        printf("secondLastDigitSum is %i\n", secondLastDigitSum);
        // printf("evenSums is %i\n", evenSums);        // printf("oddNums is %i\n", oddNums);
        printf("\n");
        cardNum /= 100;
    }





}
