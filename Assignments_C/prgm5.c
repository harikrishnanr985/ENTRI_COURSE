//Write a C program that uses a function to check whether a given number is a Perfect Number.

#include <stdio.h>

int perfect_num(int n)
{
    int sum = 0;

    for (int i = 1; i<=n/2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if(sum==n)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    if(perfect_num(n))
    {
        printf("%d is a Perfect Number\n", n);
    }
    else
    printf("%d is not a Perfect Number\n", n);
}