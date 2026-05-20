//Write a C program that uses a recursive function to find the GCD of two numbers using the Euclidean algorithm.

#include <stdio.h>

int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else{
        return gcd(b,a % b);
    }
}

int main()
{
    int num1,num2,res;
    printf("Enter two integer: ");
    scanf("%d%d", &num1,&num2);

    res = gcd(num1,num2);

    printf("GCD of %d and %d = %d\n", num1, num2, res);
}