//Write a C program that takes a number and toggles a specific number of bits (n) starting from a given position. 

#include<stdio.h>

int main()
{
    int num,pos,n, mask;

    printf("enter a number:");
    scanf("%d", &num);

    printf("enter position:");
    scanf("%d", &pos);

    printf("enter number of bits:");
    scanf("%d", &n);

    mask = ((1<<n)-1) << pos;

    num = num ^ mask;

    //num = num^(1<<pos);

    printf("num = %d\n",num);
}