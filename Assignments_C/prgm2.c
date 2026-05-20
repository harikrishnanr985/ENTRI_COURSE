//Write a C program that asks the user to enter a number and determines whether that number is prime or not

#include<stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter a number : ");
    scanf("%d", num);

    if(num<=1)
    {
        printf("not prime\n");
        return 0;
    }
        for (int i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                count++;
                break;
            }
        }
    
    if(count > 0)
    {
        printf("%d is not a prime number \n", num);
    }
    else{
        printf("%d is a prime number \n", num);
        }
}