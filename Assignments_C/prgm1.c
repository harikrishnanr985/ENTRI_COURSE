//Write a C program that takes an integer from the user and determines whether the number is even or odd.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    if(num%2 == 0)
    {
        printf("The given number is Even\n ");
    }
    else{
        printf("The given number is odd\n");
    }
}