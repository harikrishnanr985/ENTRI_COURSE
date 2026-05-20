//Write a C program that takes a number and replaces n of its bits, starting from a given position, with another set of n bits from a second number

#include <stdio.h>

int main()
{
    int num1, num2;
    int pos, n;
    int mask, extractedBits;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits: ");
    scanf("%d", &n);

    mask = ((1 << n) - 1);

    extractedBits = (num2 >> pos) & mask;

    num1 = num1 & ~(mask << pos);

    num1 = num1 | (extractedBits << pos);

    printf("Result after replacing bits = %d\n", num1);
}