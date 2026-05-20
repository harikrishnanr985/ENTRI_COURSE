//Write a C program that takes an integer from the user and extracts (n) bits starting from a specific bit position. 

#include <stdio.h>

int main()
{
    int num, pos, n;
    int mask, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter starting bit position: ");
    scanf("%d", &pos);

    printf("Enter number of bits to extract: ");
    scanf("%d", &n);

    mask = (1 << n) - 1;

    result = (num >> pos) & mask;


    printf("Extracted bits value = %d\n", result);
}