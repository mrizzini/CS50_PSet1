#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long long cardNum;
    long long cardNumOriginal;
    long long cardNumSum;
    int test = 0;
    //int lastDigit;
    // int evenSums = 0;
    int secondLastDigitSum = 0;
    int total;
    // int oddNums = 0;

    do
    {
        cardNumOriginal = get_long_long("Number: ");
        cardNum = cardNumOriginal;
        cardNumSum = cardNumOriginal;
    }
    while (cardNumOriginal <= 0);



 //   secondLastDigit += (cardNum / 10) % 10;

    // for (int i = 0; i < )


    while (cardNumSum)
    {
        test += (cardNumSum % 10);
        // printf("cardNumSum is %llu\n", cardNumSum);
        // printf("TEST IS %i\n\n", test);
        cardNumSum /= 100;
    }


    while(cardNum)
    {
        if (((cardNum % 100 / 10) * 2) >= 10)
        {
            int num = (cardNum % 100 / 10) * 2;
            int sum=0,rem;
            while(num > 0)
            {
                rem=num%10;
                sum+=rem;
                num=num/10;
            }
            secondLastDigitSum += sum;
        }
        else
        {
        secondLastDigitSum += (cardNum % 100 / 10) * 2;
        }


        // // printf("%d\n", cardNum % 10);
        // printf("cardNum is %llu\n", cardNum);
        // printf("secondLastDigitSum is %i\n", secondLastDigitSum);
        // // printf("evenSums is %i\n", evenSums);        // printf("oddNums is %i\n", oddNums);
        // printf("\n");
        cardNum /= 100;
    }




    total = test + secondLastDigitSum;
    // printf("total is %i\n", total);

    if (total % 10 == 0 && cardNumOriginal >= 340000000000000 && cardNumOriginal <= 349999999999999)
    {
        printf("AMEX\n");
    }
    else if (total % 10 == 0 && cardNumOriginal >= 370000000000000 && cardNumOriginal <= 379999999999999)
    {
        printf("AMEX\n");
    }
    else if (total % 10 == 0 && cardNumOriginal >= 5100000000000000 && cardNumOriginal <= 5599999999999999)
    {
        printf("MASTERCARD\n");
    }
    else if (total % 10 == 0 && cardNumOriginal >= 4000000000000 && cardNumOriginal <= 4999999999999)
    {
        printf("VISA\n");
    }
    else if (total % 10 == 0 && cardNumOriginal >= 4000000000000000 && cardNumOriginal <= 4999999999999999)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }


}
