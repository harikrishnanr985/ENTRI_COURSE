//Write a C program to generate the Fibonacci series up to a given number of terms.

#include <stdio.h>

int main()
{
    int n;
    int first = 0, second = 1, next;
    printf("Enter number of terms ");
    scanf("%d",&n);

    printf("Fibnocci Series\n");

    for(int i = 0; i<n; i++)
    {
        printf("%d,", first);

        next = first + second;
        first = second;
        second = next;
    }

}