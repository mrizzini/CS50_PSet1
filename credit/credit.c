#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long long cardNumOriginal;
    long long cardNum;
    long long cardNumSum;
    int test = 0;
    int secondLastDigitSum = 0;
    int total;

    do
    {
        cardNumOriginal = get_long_long("Number: "); // gets credit card # and stores in a long long
        cardNum = cardNumOriginal; // stores CC# into a var to be modified
        cardNumSum = cardNumOriginal; // stores CC# into a var to be modified
    }
    while (cardNumOriginal <= 0); // prompts user over and over until correctcredit card entered

    while (cardNumSum) // while there is numbers in cardNumSum
    {
        test += (cardNumSum % 10); // add in the last digit
        cardNumSum /= 100; // delete last two digist
    }


    while (cardNum) // while there are numbers in cardNum
    {
        if (((cardNum % 100 / 10) * 2) >= 10) // if the second to last digit multiplied by 2 is over 10, do this
        {
            int num = (cardNum % 100 / 10) * 2;
            int sum = 0, rem;
            while (num > 0)
            {
                rem = num % 10;
                sum += rem;
                num = num / 10;
            }
            secondLastDigitSum += sum; // algorithm to add the digits of the double digit number
        }
        else
        {
            secondLastDigitSum += (cardNum % 100 / 10) * 2; // else add in the digit to the sum
        }
        cardNum /= 100; // delete last two digits from CC#
    }

    total = test + secondLastDigitSum; // adds in test to secondLastDigitSum

    if (total % 10 == 0)
    {
        if (cardNumOriginal >= 340000000000000 && cardNumOriginal <= 349999999999999) // validation for different companies
        {
            printf("AMEX\n");
        }
        else if (cardNumOriginal >= 370000000000000 && cardNumOriginal <= 379999999999999)
        {
            printf("AMEX\n");
        }
        else if (cardNumOriginal >= 5100000000000000 && cardNumOriginal <= 5599999999999999)
        {
            printf("MASTERCARD\n");
        }
        else if (cardNumOriginal >= 4000000000000 && cardNumOriginal <= 4999999999999)
        {
            printf("VISA\n");
        }
        else if (cardNumOriginal >= 4000000000000000 && cardNumOriginal <= 4999999999999999)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

}
