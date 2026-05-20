//Write a C program that takes two integers and swaps n bits starting from a given position in both numbers.

#include <stdio.h>

int main()
{
    int num1, num2;
    int pos, n;
    int mask, bits1, bits2, xorBits;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter starting bit position: ");
    scanf("%d", &pos);

    printf("Enter number of bits to swap: ");
    scanf("%d", &n);

    mask = ((1 << n) - 1) << pos;

    bits1 = num1 & mask;
    bits2 = num2 & mask;

    xorBits = bits1 ^ bits2;

    num1 = num1 ^ xorBits;
    num2 = num2 ^ xorBits;

    printf("After swapping bits:\n");

    printf("First number  = %d\n", num1);
    printf("Second number = %d\n", num2);
}