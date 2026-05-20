//Write a C program that takes a string from the user and reverses its characters using an iterative approach.

#include <stdio.h>

int main()
{
    char s[50], temp;
    int i,j;

    printf("enter a string: ");
    scanf("%s", s);

    printf("Before reversing: %s\n", s);

    for (j=0;s[j]!='\0';j++);

    for (i=0,j=j-1; i<j; i++,j--)
    {
        temp = s[i], s[i] = s[j], s[j] = temp;
    }

    printf("After reversing: %s\n", s);
}