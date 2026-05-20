//Write a C program that uses a function to count the frequency of each digit (0–9) in a given integer.

#include <stdio.h>

void FreqCount(int num, int freq[])
{
    int lastDigit;

    if(num<0)
    {
        num = -num;
    }

    while(num>0)
    {
        lastDigit = num % 10;
        freq[lastDigit]++;
        num = num / 10;
    }
}
int main()
{
    int num;
    int freq[10] = {0};

    printf("Enter the number:");
    scanf("%lld", &num);

    FreqCount(num, freq);

     printf("\nDigit Frequencies:\n");

    for (int i = 0; i < 10; i++) 
    {
        printf("Digit %d appears %d time(s)\n", i, freq[i]);
    }

}